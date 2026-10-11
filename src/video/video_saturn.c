/** @file src/video/video_saturn.c Sega Saturn video driver.
 *
 * SCREEN_0 lives in work RAM; every tick the rows marked dirty are copied
 * into the VDP2 NBG0 bitmap (512x256, 8bpp), with the 320x200 picture
 * centred in the 320x224 display. The palette goes to colour RAM in the
 * vertical blank (written while the picture is drawn, colour RAM shows stray
 * dots on the hardware). The pad is read here too (input/pad_saturn.c), as
 * other drivers read events. */

#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "video.h"
#include "../codec/format80.h"
#include "../gfx.h"
#include "../gui/gui.h"
#include "../input/pad_saturn.h"
#include "../map.h"
#include "../opendune.h"
#include "../os/error.h"
#include "../sprites.h"
#include "../tile.h"

#include "bios.h"
#include "console.h"
#include "loading.h"
#include "saturn_hw.h"
#include "saturn_timer.h"
#include "smpc.h"
#include "vdp1.h"
#include "vdp2.h"

enum {
	TOP = (VDP2_DISPLAY_H - SCREEN_HEIGHT) / 2,
	EXTRA_LINES = 4 /*!< Video_SetOffset() shows up to 4 lines further down */
};

/* SCREEN_0, in high work RAM (see GFX_Init()) */
static uint32 s_framebufferMemory[(SCREEN_WIDTH * (SCREEN_HEIGHT + EXTRA_LINES) + 3) / 4];
static uint8 *s_framebuffer = NULL;
static uint16 s_screenOffset = 0; /*!< VGA start address, in units of 4 bytes */
static bool s_mapVisible;      /*!< the map planes are showing */
uint32 g_videoSpriteFallback; /*!< a viewport sprite fell back to software */
static bool s_repaintAll = true;
/* VDP1 does not draw a pattern pixel of 0xFF - the selected unit's marker is
 * drawn entirely in that colour, and vanished because of it. Patterns remap
 * it to 0xFE, and the colour RAM upload mirrors the animated selection colour
 * from entry 255 into 254 so the marker still follows it. */
#define VDP1_PATTERN_MAX 0xFE

static uint16 s_palette[256];                     /*!< the colours, RGB555, for colour RAM */
static volatile int s_paletteFrom = 256;          /*!< the first changed since the last vertical blank, */
static volatile int s_paletteTo = 0;              /*!< and the one after the last */

/* the map planes' scroll, written in the vertical blank */
static int s_mapScrollX = 0;
static int s_mapScrollY = 0;
static bool s_mapScrollDirty = true;

/* house-coloured structure characters, baked per (tile, house) into the free
 * part of bank A1 (the only bank VDP2 reads character patterns from): the
 * map only has a few hundred structure tiles and two or three houses */
#define HOUSE_CHAR_SLOTS 119
static int16 s_houseCharMap[512 * 6]; /*!< (tileID * 6 + houseID) -> slot + 1 */
static int s_houseCharCount = 0;

/* pattern names changed by the game loop, written in the vertical blank so
 * the CPU only touches VDP2's VRAM when the display isn't reading it */
static uint16 s_mapNameQueue[64 * 64];
static uint8 s_mapNameQueued[512];
static int s_mapNameCount = 0;

static void MapWriteTile(uint16 packed);

/**
 * The VBlank interrupt: the colours changed, the controllers, and the
 * loading indicator.
 */
static void Video_VBlank(void)
{
	int i;

	for (i = s_paletteFrom; i < s_paletteTo; i++) Vdp2_SetColor(i, s_palette[i]);

	/* Entry 254 only stands in for the marker's colour while the game view is
	 * up, because the menus' own artwork uses that entry: it must not take
	 * the animated selection colour there. */
	Vdp2_SetColor(VDP1_PATTERN_MAX, s_mapVisible ? s_palette[255] : s_palette[VDP1_PATTERN_MAX]);

	s_paletteFrom = 256;
	s_paletteTo = 0;

	if (s_mapScrollDirty) {
		Vdp2_MapScroll(s_mapScrollX, s_mapScrollY);
		s_mapScrollDirty = false;
	}

	/* write the queued pattern names while the display isn't reading VRAM */
	for (i = 0; i < s_mapNameCount; i++) {
		uint16 packed = s_mapNameQueue[i];

		MapWriteTile(packed);
		s_mapNameQueued[packed >> 3] &= ~(1 << (packed & 7));
	}
	s_mapNameCount = 0;

	Vdp1_ListVBlank();

	Smpc_VBlank();
	Loading_VBlank();
}

/**
 * Set up the screen: the frame buffer, VDP2, the controllers and the loading
 * indicator.
 *
 * @param screen_magnification Not used.
 * @param filter Not used.
 * @return True, always.
 */
bool Video_Init(int screen_magnification, VideoScaleFilter filter)
{
	VARIABLE_NOT_USED(screen_magnification);
	VARIABLE_NOT_USED(filter);

	s_framebuffer = (uint8 *)s_framebufferMemory;

	/* from here on the game owns the screen; the console only records */
	Console_Release();
	PadSaturn_Init();
	SaturnTimer_SetVBlankHook(Video_VBlank);
	Vdp2_BitmapInit();
	Vdp1_Init();
	Vdp2_MapInit();
	/* window the map planes to the viewport: 240x160 at game y 40 */
	Vdp2_MapWindow(0, TOP + 40, 239, TOP + 40 + 159);
	Vdp2_DisplayOn();
	s_repaintAll = true;
	return true;
}

/**
 * Forget the frame buffer.
 */
void Video_Uninit(void)
{
	s_framebuffer = NULL;
}

/**
 * Copy rows of the frame buffer to the VDP2 bitmap.
 *
 * @param top The first row.
 * @param bottom The row after the last.
 */
static void Video_CopyRows(uint16 top, uint16 bottom)
{
	const uint8 *src = s_framebuffer + (s_screenOffset << 2) + top * SCREEN_WIDTH;
	volatile uint8 *dst = VDP2_BITMAP + (TOP + top) * VDP2_BITMAP_PITCH;
	uint16 y;

	for (y = top; y < bottom; y++, src += SCREEN_WIDTH, dst += VDP2_BITMAP_PITCH) {
		/* The menus and dialogs are drawn straight into SCREEN_0 across
		 * the viewport as well, so the whole row still has to be copied. */
		memcpy((void *)dst, src, SCREEN_WIDTH);
	}
}


/**
 * Copy what changed of the screen to the bitmap, and read the controllers.
 */
/**
 * Bring the bitmap up to date now, instead of waiting for the next tick.
 *
 * The palette is uploaded by the vertical blank hook while the bitmap is
 * copied by the 60 Hz tick, so a palette change that follows closely after
 * something is drawn can reach the screen first - showing the previous
 * picture through the new palette for a frame. Callers that change both
 * call this in between.
 */
void Video_Repaint(void)
{
	struct dirty_area *area;

	if (s_framebuffer == NULL) return;

	if (s_repaintAll) {
		Video_CopyRows(0, SCREEN_HEIGHT);
		s_repaintAll = false;
		GFX_Screen_SetClean(SCREEN_0);
		return;
	}

	if (!GFX_Screen_IsDirty(SCREEN_0)) return;

	area = GFX_Screen_GetDirtyArea(SCREEN_0);
	if (area != NULL && area->top < area->bottom) {
		Video_CopyRows(area->top, (area->bottom > SCREEN_HEIGHT) ? SCREEN_HEIGHT : area->bottom);
	}
	GFX_Screen_SetClean(SCREEN_0);
}

void Video_Tick(void)
{
	struct dirty_area *area;

	if (s_framebuffer == NULL) return;

	Loading_Alive();
	PadSaturn_Tick();

	if (s_repaintAll) {
		Loading_ScreenChanged();
		Video_CopyRows(0, SCREEN_HEIGHT);
		s_repaintAll = false;
		GFX_Screen_SetClean(SCREEN_0);
		return;
	}

	if (!GFX_Screen_IsDirty(SCREEN_0)) return;

	area = GFX_Screen_GetDirtyArea(SCREEN_0);
	if (area != NULL && area->top < area->bottom) {
		Loading_ScreenChanged();
		Video_CopyRows(area->top, (area->bottom > SCREEN_HEIGHT) ? SCREEN_HEIGHT : area->bottom);
	}
	GFX_Screen_SetClean(SCREEN_0);
}

/**
 * Set colours of the palette, VGA style (6 bits per component).
 *
 * @param palette The colours, 3 bytes each.
 * @param from The first colour.
 * @param length How many.
 */
void Video_SetPalette(void *palette, int from, int length)
{
	const uint8 *p = palette;
	uint32 sr;
	int i;

	if (from < 0 || length <= 0 || from + length > 256) return;

	/* VGA palette entries are 6 bits per component; Video_VBlank() writes
	 * them to colour RAM */
	sr = Cpu_DisableInterrupts();
	for (i = from; i < from + length; i++, p += 3) {
		s_palette[i] = RGB555(p[0] >> 1, p[1] >> 1, p[2] >> 1);
	}
	if (from < s_paletteFrom) s_paletteFrom = from;
	if (from + length > s_paletteTo) s_paletteTo = from + length;
	Cpu_RestoreInterrupts(sr);
}

/**
 * Move the cursor.
 *
 * @param x Its column.
 * @param y Its line.
 */
void Video_Mouse_SetPosition(uint16 x, uint16 y)
{
	PadSaturn_SetPosition(x, y);
}

/**
 * Keep the cursor within a rectangle.
 *
 * @param minX The left edge.
 * @param maxX The right edge.
 * @param minY The top edge.
 * @param maxY The bottom edge.
 */
void Video_Mouse_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	PadSaturn_SetRegion(minX, maxX, minY, maxY);
}

/**
 * Show the frame buffer from an offset (the credits scroll that way).
 *
 * @param offset The offset, in 4-byte units.
 */
void Video_SetOffset(uint16 offset)
{
	s_screenOffset = offset;
	s_repaintAll = true;
}

/**
 * Make NBG0's colour 0 transparent while the map viewport is shown, so the
 * map planes behind it show through, and opaque again everywhere else.
 *
 * @param show Whether the map is shown.
 */
void Video_MapShow(bool show)
{
#if SATURN_HW_MAP
	/* Showing the map over a bitmap that still holds the previous screen
	 * (a briefing, say) would leave that screen covering the map, because
	 * NBG0 is opaque where it is not colour 0 and the viewport rows are no
	 * longer copied. Clear that area once, as the map appears. */
	if (show && !s_mapVisible) {
		volatile uint8 *p = VDP2_BITMAP + (TOP + 40) * VDP2_BITMAP_PITCH;
		int row;

		for (row = 0; row < 160; row++, p += VDP2_BITMAP_PITCH) {
			memset((void *)p, 0, 240);
		}
	}
#endif
	s_mapVisible = show;
#if SATURN_HW_MAP
	Vdp2_MapShow(show);
#else
	VARIABLE_NOT_USED(show);
#endif

#if SATURN_HW_SPRITES
	/* Outside a mission the viewport is no longer drawn, so nothing would
	 * rebuild the command list and the last mission's sprites would stay
	 * on VDP1 for ever. Commit an empty list: VDP1 then erases the frame
	 * buffer to the transparent colour every frame. */
	if (!show) {
		Vdp1_ListBegin();
		Vdp1_ListCommit();
	}
#endif
}

/* Convert one 16x16 4 bpp tile into an 8 bpp character of four 8x8 cells,
 * with the house's colour remap applied. */
static void MapConvertTile(int tileID, int houseID, volatile uint8_t *dst)
{
	const uint8_t *palette = g_iconRPAL + (g_iconRTBL[tileID] << 4);
	uint8_t local[16];
	const uint8_t *src = g_tilesPixels + tileID * 128; /* 16x16, 4 bpp */
	int cell;

	if (houseID != 0) {
		int i;

		for (i = 0; i < 16; i++) {
			uint8_t c = palette[i];

			if ((c & 0xF0) == 0x90 && (c <= 0x96 || !g_dune2_enhanced)) c += houseID << 4;
			local[i] = c;
		}
		palette = local;
	}

	for (cell = 0; cell < 4; cell++) {
		int cellRow = (cell >> 1) * 8;
		int cellCol = (cell & 1) * 8;
		int r, c;

		for (r = 0; r < 8; r++) {
			const uint8_t *s = src + (cellRow + r) * 8 + cellCol / 2;
			for (c = 0; c < 8; c += 2) {
				uint8_t b = *s++;
				*dst++ = palette[b >> 4];
				*dst++ = palette[b & 0xF];
			}
		}
	}
}

/* Whether a tile's palette has a colour the house remap changes. */
static bool MapTileHasHouseColour(int tileID)
{
	const uint8_t *palette = g_iconRPAL + (g_iconRTBL[tileID] << 4);
	int i;

	for (i = 0; i < 16; i++) {
		uint8_t c = palette[i];
		if ((c & 0xF0) == 0x90 && (c <= 0x96 || !g_dune2_enhanced)) return true;
	}
	return false;
}

/* The character number of a tile, its house colour baked in if the house
 * remaps it. House-coloured characters are built on demand into bank B1. */
static int MapTileChar(int tileID, int houseID)
{
	int stored;
	int slot;

	if (houseID <= 0 || houseID >= 6 || !MapTileHasHouseColour(tileID)) {
		return 0x1000 + (tileID + VDP2_MAP_CHAR_TILE) * 8;
	}

	stored = s_houseCharMap[tileID * 6 + houseID];
	if (stored == 0) {
		if (s_houseCharCount >= HOUSE_CHAR_SLOTS) {
			/* out of room: fall back to the unremapped character */
			return 0x1000 + (tileID + VDP2_MAP_CHAR_TILE) * 8;
		}
		slot = s_houseCharCount++;
		s_houseCharMap[tileID * 6 + houseID] = (int16_t)(slot + 1);
		MapConvertTile(tileID, houseID, (volatile uint8_t *)(VDP2_VRAM + VDP2_MAP_HOUSES) + slot * 256);
	} else {
		slot = stored - 1;
	}

	return (VDP2_MAP_HOUSES / 0x20) + slot * 8;
}

/**
 * Convert ICON.ICN's tiles into 8 bpp 16x16 characters in VDP2 VRAM, each as
 * four 8x8 cells (top left, top right, bottom left, bottom right). Character
 * slot 0 is blank (transparent), slot 1 the fog colour, and tile N lives at
 * slot N + 2.
 *
 * @param tileCount How many tiles.
 */
void Video_MapLoadTiles(int tileCount)
{
	volatile uint8_t *patterns = (volatile uint8_t *)(VDP2_VRAM + VDP2_MAP_PATTERNS);
	int t;

	memset((void *)(patterns + 0 * 256), 0, 256);   /* blank */
	memset((void *)(patterns + 1 * 256), 12, 256);  /* fog */

	for (t = 0; t < tileCount; t++) {
		MapConvertTile(t, 0, patterns + (t + VDP2_MAP_CHAR_TILE) * 256);
	}

	/* the house characters are baked afresh for each scenario's houses */
	memset(s_houseCharMap, 0, sizeof(s_houseCharMap));
	s_houseCharCount = 0;
}

/**
 * Write the pattern names of one map tile from its ground and overlay IDs.
 *
 * @param packed The tile.
 */
static void MapWriteTile(uint16 packed)
{
	const Tile *t = &g_map[packed];
	int groundChar;
	int overlayChar;

	if (t->overlayTileID == g_veiledTileID) {
		/* fully veiled: an opaque black tile, with no terrain behind it */
		groundChar = 0x1000 + VDP2_MAP_CHAR_BLANK * 8;
		overlayChar = 0x1000 + VDP2_MAP_CHAR_FOG * 8;
	} else {
		groundChar = MapTileChar(t->groundTileID, t->houseID);
		if (t->overlayTileID == 0) {
			overlayChar = 0x1000 + VDP2_MAP_CHAR_BLANK * 8;
		} else {
			overlayChar = MapTileChar(t->overlayTileID, t->houseID);
		}
	}

	Vdp2_MapSetTile(packed, groundChar, overlayChar);
}

/**
 * Queue one map tile's pattern names to be written in the vertical blank.
 *
 * @param packed The tile.
 */
void Video_MapSetTile(uint16 packed)
{
	uint32 sr;
	int byte;
	int bit;

	if (packed >= 64 * 64) return;

	byte = packed >> 3;
	bit = 1 << (packed & 7);
	sr = Cpu_DisableInterrupts();
	if ((s_mapNameQueued[byte] & bit) == 0) {
		s_mapNameQueued[byte] |= bit;
		s_mapNameQueue[s_mapNameCount++] = packed;
	}
	Cpu_RestoreInterrupts(sr);
}

/**
 * Write the pattern names of the whole map, after a scenario load or a save
 * restore, so scrolling never meets an unwritten cell.
 */
void Video_MapRedrawAll(void)
{
	int packed;

	for (packed = 0; packed < 64 * 64; packed++) Video_MapSetTile((uint16)packed);
}

/**
 * Scroll the map planes so the given viewport tile is at the viewport's top
 * left. The registers are written in the next vertical blank.
 *
 * @param viewportX The viewport's column.
 * @param viewportY The viewport's row.
 */
void Video_MapScroll(int viewportX, int viewportY)
{
	int x = viewportX * 16;
	int y = viewportY * 16 - (TOP + 40);

	if (s_mapScrollX == x && s_mapScrollY == y) return;
	s_mapScrollX = x;
	s_mapScrollY = y;
	s_mapScrollDirty = true;
}

/* --- VDP1 sprites -------------------------------------------------------- */

#define SPRITE_CACHE_MAX 512

typedef struct SpritePattern {
	const uint8 *sprite;  /*!< the sprite this pattern was baked from */
	const uint8 *remap;
	int remapCount;
	bool hasPalette;      /*!< the sprite carries a 16 colour palette */
	uint8 palette[16];    /*!< and its contents: the viewport hands the same
	                       * stack buffer in for every house, so the pointer
	                       * alone cannot tell two houses apart */
	uint32 address;
	uint16 pitch;
} SpritePattern;

static SpritePattern s_spriteCache[SPRITE_CACHE_MAX];
static int s_spriteCacheCount = 0;

/* diagnostics for the VDP1 sprite path */
uint32 g_vdp1SpriteCalls;
uint32 g_vdp1SpriteQueued;
uint32 g_vdp1SpriteRejected;

/**
 * Bake a sprite (already expanded to its colour indices) into a linear 8 bpp
 * VDP1 pattern, colour 0 transparent, the width padded to a multiple of 8.
 *
 * @return The pattern's VRAM address, or 0.
 */
static uint32 Video_SpritePattern(const uint8 *sprite, const uint8 *data, int width, int height,
                                  const uint8 *palette, const uint8 *remap, int remapCount, int *pitchOut)
{
	/* For 256 colour patterns the VDP1 size field counts 16 pixel units,
	 * so the pattern row must be padded to 16 pixels; a row padded to 8
	 * makes the hardware read across into the next pattern. */
	int pitch = (width + 15) & ~15;
	int i, x, y;
	uint32 address;
	volatile uint8 *dst;
	SpritePattern *entry;

	for (i = 0; i < s_spriteCacheCount; i++) {
		entry = &s_spriteCache[i];

		if (entry->sprite != sprite) continue;
		if (entry->remap != remap || entry->remapCount != remapCount) continue;
		if (entry->hasPalette != (palette != NULL)) continue;
		if (palette != NULL && memcmp(entry->palette, palette, 16) != 0) continue;

		*pitchOut = entry->pitch;
		return entry->address;
	}

	if (s_spriteCacheCount >= SPRITE_CACHE_MAX) return 0;

	address = Vdp1_PatternAlloc(pitch * height);
	if (address == 0) return 0;

	dst = (volatile uint8 *)(VDP1_VRAM + address);
	for (y = 0; y < height; y++) {
		x = 0;
		while (x < width) {
			uint8 v = *data++;

			if (v == 0) {
				int n = *data++;

				while (n-- > 0 && x < width) dst[x++] = 0;
			} else {
				if (palette != NULL) v = palette[v];
				for (i = 0; i < remapCount; i++) v = remap[v];
				if (v == 0xFF) v = VDP1_PATTERN_MAX;
				dst[x++] = v;
			}
		}
		while (x < pitch) dst[x++] = 0;
		dst += pitch;
	}


	entry = &s_spriteCache[s_spriteCacheCount++];
	entry->sprite = sprite;
	entry->remap = remap;
	entry->remapCount = remapCount;
	entry->hasPalette = (palette != NULL);
	if (palette != NULL) memcpy(entry->palette, palette, 16);
	entry->address = address;
	entry->pitch = (uint16)pitch;

	*pitchOut = pitch;
	return address;
}

/**
 * Queue a normal-sprite command for one viewport sprite.
 *
 * @return True if the hardware took it, false to fall back to software.
 */
bool Video_MapSprite(const uint8 *sprite, const uint8 *data, int16 width, int16 height,
                     int16 screenX, int16 screenY, const uint8 *palette, const uint8 *remap,
                     int remapCount, uint16 flags)
{
	uint32 pattern;
	int pitch;
	Vdp1Cmd *cmd;

	g_vdp1SpriteCalls++;


	if (width <= 0 || height <= 0) return true;
	if ((flags & DRAWSPRITE_FLAG_ZOOM) != 0) { g_vdp1SpriteRejected++; g_videoSpriteFallback = 1; return false; }

	pattern = Video_SpritePattern(sprite, data, width, height, palette, remap, remapCount, &pitch);
	if (pattern == 0) { g_vdp1SpriteRejected++; g_videoSpriteFallback = 1; return false; }

	cmd = Vdp1_ListAdd();
	if (cmd == NULL) return true; /* list full: drop the sprite */

	g_vdp1SpriteQueued++;

	memset(cmd, 0, sizeof(*cmd));
	cmd->ctrl = VDP1_CMD_NORMAL_SPRITE;
	cmd->pmod = VDP1_PMOD_COLOR_256;
	if ((flags & DRAWSPRITE_FLAG_BLUR) != 0) cmd->pmod |= VDP1_PMOD_MESH;
	cmd->colr = 0;
	cmd->srca = VDP1_CHAR_ADDR(pattern);
	cmd->size = (uint16)(((pitch / 16) << 9) | (height & 0x1FF));

	/* the vertex coordinate is a 10-bit signed integer, its sign
	 * extended over the top six bits; there is no fractional part */
	cmd->xa = screenX;
	cmd->ya = (int16)(screenY + TOP);

	/* A pattern's rows are padded to 16 pixels with the spare columns on
	 * the right, so a horizontal flip moves the live pixels pitch - width
	 * columns right. Pull the sprite back by that much. */
	if ((flags & DRAWSPRITE_FLAG_RTL) != 0) {
		cmd->ctrl |= VDP1_DIR_HFLIP;
		cmd->xa -= (int16)(pitch - width);
	}
	if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) != 0) cmd->ctrl |= VDP1_DIR_VFLIP;

	return true;
}

/**
 * Queue a non-textured line for the viewport, in game screen coordinates.
 *
 * @param x1 The first point's x.
 * @param y1 Its y.
 * @param x2 The second point's x.
 * @param y2 Its y.
 * @param colour The palette colour.
 */
void Video_MapLine(int16 x1, int16 y1, int16 x2, int16 y2, uint8 colour)
{
	Vdp1Cmd *cmd;
	int code1, code2;

	/* VDP1's system clipping cannot bound the top or the left, because its
	 * upper left is fixed at (0,0), so clip to the viewport here. Without
	 * this the selection rectangle leaks into the letterbox above it. */
#define VPORT_LEFT   0
#define VPORT_TOP    40
#define VPORT_RIGHT  239
#define VPORT_BOTTOM 199
#define VPORT_CODE(x, y) (((y) < VPORT_TOP ? 1 : ((y) > VPORT_BOTTOM ? 2 : 0)) | \
                          ((x) < VPORT_LEFT ? 4 : ((x) > VPORT_RIGHT ? 8 : 0)))

	for (;;) {
		code1 = VPORT_CODE(x1, y1);
		code2 = VPORT_CODE(x2, y2);
		if ((code1 | code2) == 0) break;
		if ((code1 & code2) != 0) return;

		{
			int code = (code1 != 0) ? code1 : code2;
			int32 nx, ny;

			if ((code & 1) != 0) {
				nx = x1 + (int32)(x2 - x1) * (VPORT_TOP - y1) / (y2 - y1);
				ny = VPORT_TOP;
			} else if ((code & 2) != 0) {
				nx = x1 + (int32)(x2 - x1) * (VPORT_BOTTOM - y1) / (y2 - y1);
				ny = VPORT_BOTTOM;
			} else if ((code & 4) != 0) {
				ny = y1 + (int32)(y2 - y1) * (VPORT_LEFT - x1) / (x2 - x1);
				nx = VPORT_LEFT;
			} else {
				ny = y1 + (int32)(y2 - y1) * (VPORT_RIGHT - x1) / (x2 - x1);
				nx = VPORT_RIGHT;
			}

			if (code == code1) { x1 = (int16)nx; y1 = (int16)ny; }
			else               { x2 = (int16)nx; y2 = (int16)ny; }
		}
	}

	cmd = Vdp1_ListAdd();
	if (cmd == NULL) return;

	memset(cmd, 0, sizeof(*cmd));
	cmd->ctrl = VDP1_CMD_LINE;
	cmd->pmod = VDP1_PMOD_COLOR_16; /* non-textured: CMDCOLR is the colour */
	cmd->colr = colour;
	cmd->xa = x1;
	cmd->ya = (int16)(y1 + TOP);
	cmd->xb = x2;
	cmd->yb = (int16)(y2 + TOP);
}

/**
 * Queue a wire rectangle for the viewport, in game screen coordinates.
 */
void Video_MapRect(int16 left, int16 top, int16 right, int16 bottom, uint8 colour)
{
	Video_MapLine(left,  top,    right, top,    colour);
	Video_MapLine(left,  bottom, right, bottom, colour);
	Video_MapLine(left,  top,    left,  bottom, colour);
	Video_MapLine(right, top,    right, bottom, colour);
}

/**
 * Start a fresh VDP1 sprite list for this frame's viewport.
 */
void Video_MapSpritesBegin(void)
{
	g_videoSpriteFallback = 0;
	Vdp1_ListBegin();
}

/**
 * Commit the VDP1 sprite list built this frame; it is switched in at the
 * vertical blank.
 */
void Video_MapFlush(void)
{
	Vdp1_ListCommit();
}

/**
 * Forget the baked sprite patterns, on a scenario load or save restore.
 */
void Video_MapSpritesReset(void)
{
	s_spriteCacheCount = 0;
	Vdp1_PatternReset();
}

/**
 * The frame buffer, the engine's SCREEN_0.
 *
 * @param size The size wanted.
 * @return The frame buffer.
 */
void *Video_GetFrameBuffer(uint16 size)
{
	if (size > SCREEN_WIDTH * (SCREEN_HEIGHT + EXTRA_LINES)) {
		Error("Video_GetFrameBuffer(%u) : size too big\n", size);
		return NULL;
	}
	return s_framebuffer;
}
