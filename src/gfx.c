/** @file src/gfx.c Graphics routines. */

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

#include "gfx.h"

#include "gui/widget.h"
#include "house.h"
#include "opendune.h"
#include "sprites.h"
#include "video/video.h"
#include "os/error.h"

uint8 g_paletteActive[256 * 3];
uint8 *g_palette1 = NULL;
uint8 *g_palette2 = NULL;
uint8 *g_paletteMapping1 = NULL;
uint8 *g_paletteMapping2 = NULL;

static uint16 s_tileSpacing  = 0;	/* bytes to skip between each line. == SCREEN_WIDTH - 2*s_tileWidth */
static uint16 s_tileHeight   = 0;	/* "icon" sprites height (lines) */
static uint16 s_tileWidth    = 0;	/* "icon" sprites width in bytes. each bytes contains 2 pixels. 4 MSB = left, 4 LSB = right */
static uint8  s_tileMode     = 0;
static uint8  s_tileByteSize = 0;	/* size in byte of one sprite pixel data = s_tileHeight * s_tileWidth / 2 */

/* SCREEN_0 = 320x200 = 64000 = 0xFA00   The main screen buffer, 0xA0000 Video RAM in DOS Dune 2
 * SCREEN_1 = 64506 = 0xFBFA
 * SCREEN_2 = 320x200 = 64000 = 0xFA00
 * SCREEN_3 = 64781 = 0xFD0D    * NEVER ACTIVE * only used for game credits and intro */
#define GFX_SCREEN_BUFFER_COUNT 4
static const uint16 s_screenBufferSize[GFX_SCREEN_BUFFER_COUNT] = { 0xFA00, 0xFBF4, 0xFA00, 0xFD0D/*, 0xA044*/ };
static void *s_screenBuffer[GFX_SCREEN_BUFFER_COUNT] = { NULL, NULL, NULL, NULL };
#ifdef GFX_STORE_DIRTY_AREA
static bool s_screen0_is_dirty = false;
static struct dirty_area s_screen0_dirty_area = { 0, 0, 0, 0 };
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
uint32 g_dirty_blocks[200];
#endif
#endif

static Screen s_screenActiveID = SCREEN_0;

#if 0
/**
 * Get the codesegment of the active screen buffer.
 * @return The codesegment of the screen buffer.
 */
void *GFX_Screen_GetActive(void)
{
	return GFX_Screen_Get_ByIndex(s_screenActiveID);
}
#endif

/**
 * Returns the size of a screenbuffer.
 * @param screenID The screenID to get the size of.
 * @return Some size value.
 */
uint16 GFX_Screen_GetSize_ByIndex(Screen screenID)
{
	if (screenID == SCREEN_ACTIVE)
		screenID = s_screenActiveID;
	assert(screenID >= 0 && screenID < GFX_SCREEN_BUFFER_COUNT);
	return s_screenBufferSize[screenID];
}

/**
 * Get the pointer to a screenbuffer.
 * @param screenID The screenbuffer to get.
 * @return A pointer to the screenbuffer.
 */
void *GFX_Screen_Get_ByIndex(Screen screenID)
{
	if (screenID == SCREEN_ACTIVE)
		screenID = s_screenActiveID;
	assert(screenID >= 0 && screenID < GFX_SCREEN_BUFFER_COUNT);
	return s_screenBuffer[screenID];
}

/**
 * Change the current active screen to the new value.
 * @param screenID The new screen to get active.
 * @return Old screenID that was currently active.
 */
Screen GFX_Screen_SetActive(Screen screenID)
{
	Screen oldScreen = s_screenActiveID;
	if (screenID != SCREEN_ACTIVE) {
		s_screenActiveID = screenID;
	}
	return oldScreen;
}

/**
* Checks if the screen is active.
* @param screenID The screen to check for being active
* @return true or false.
*/
bool GFX_Screen_IsActive(Screen screenID)
{
	if (screenID == SCREEN_ACTIVE) return true;
	return (screenID == s_screenActiveID);
}

#ifdef GFX_STORE_DIRTY_AREA
void GFX_Screen_SetDirty(Screen screenID, uint16 left, uint16 top, uint16 right, uint16 bottom)
{
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
	uint32 mask;
	uint16 y;
#endif
	if(screenID == SCREEN_ACTIVE) screenID = s_screenActiveID;
	if(screenID != SCREEN_0) return;
	s_screen0_is_dirty = true;
	if (left < s_screen0_dirty_area.left) s_screen0_dirty_area.left = left;
	if (top < s_screen0_dirty_area.top) s_screen0_dirty_area.top = top;
	if (right > s_screen0_dirty_area.right) s_screen0_dirty_area.right = right;
	if (bottom > s_screen0_dirty_area.bottom) s_screen0_dirty_area.bottom = bottom;
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
	mask = (1 << ((right + 15) >> 4)) - 1;
	mask -= (1 << (left >> 4)) - 1;
	for (y = top; y < bottom; y++) g_dirty_blocks[y] |= mask;
#endif
}

void GFX_Screen_SetClean(Screen screenID)
{
	if(screenID == SCREEN_ACTIVE) screenID = s_screenActiveID;
	if(screenID != SCREEN_0) return;
	s_screen0_is_dirty = false;
	s_screen0_dirty_area.left = 0xffff;
	s_screen0_dirty_area.top = 0xffff;
	s_screen0_dirty_area.right = 0;
	s_screen0_dirty_area.bottom = 0;
#ifdef GFX_STORE_DIRTY_AREA_BLOCKS
	memset(g_dirty_blocks, 0, sizeof(g_dirty_blocks));
#endif
}

bool GFX_Screen_IsDirty(Screen screenID)
{
	if(screenID == SCREEN_ACTIVE) screenID = s_screenActiveID;
	if(screenID != SCREEN_0) return true;
	return s_screen0_is_dirty;
}

struct dirty_area * GFX_Screen_GetDirtyArea(Screen screenID)
{
	if(screenID == SCREEN_ACTIVE) screenID = s_screenActiveID;
	if(screenID != SCREEN_0) return NULL;
	return &s_screen0_dirty_area;
}

#endif /* GFX_STORE_DIRTY_AREA */

/**
 * Initialize the GFX system.
 */
void GFX_Init(void)
{
	uint8 *screenBuffers;
	uint32 totalSize = 0;
	int i;

	/* init g_paletteActive with invalid values so first GFX_SetPalette() will be ok */
	memset(g_paletteActive, 0xff, 3*256);

	for (i = 1; i < GFX_SCREEN_BUFFER_COUNT; i++) {
		totalSize += GFX_Screen_GetSize_ByIndex(i);
	}

	screenBuffers = calloc(1, totalSize);

	for (i = 1; i < GFX_SCREEN_BUFFER_COUNT; i++) {
		s_screenBuffer[i] = screenBuffers;

		screenBuffers += GFX_Screen_GetSize_ByIndex(i);
	}

	/* special case for SCREEN_0 which is the MCGA frame buffer */
	s_screenBuffer[0] = Video_GetFrameBuffer(GFX_Screen_GetSize_ByIndex(0));

	s_screenActiveID = SCREEN_0;
}

/**
 * Uninitialize the GFX system.
 */
void GFX_Uninit(void)
{
	int i;

	free(s_screenBuffer[1]);

	for (i = 0; i < GFX_SCREEN_BUFFER_COUNT; i++) {
		s_screenBuffer[i] = NULL;
	}
}

/**
 * Draw a tile on the screen.
 * @param tileID The tile to draw.
 * @param x The x-coordinate to draw the sprite.
 * @param y The y-coordinate to draw the sprite.
 * @param houseID The house the sprite belongs (for recolouring).
 */
void GFX_DrawTile(uint16 tileID, uint16 x, uint16 y, uint8 houseID)
{
	int i, j;
	uint8 *icon_palette;
	uint8 *wptr;
	uint8 *rptr;
	uint8 local_palette[16];

	assert(houseID < HOUSE_MAX);

	if (s_tileMode == 4) return;

	icon_palette = g_iconRPAL + (g_iconRTBL[tileID] << 4);

	if (houseID != 0) {
		/* Remap colors for the right house */
		for (i = 0; i < 16; i++) {
			uint8 colour = icon_palette[i];

			/* ENHANCEMENT -- Dune2 recolours too many colours, causing clear graphical glitches in the IX building */
			if ((colour & 0xF0) == 0x90) {
				if (colour <= 0x96 || !g_dune2_enhanced) colour += houseID << 4;
			}
			local_palette[i] = colour;
		}
		icon_palette = local_palette;
	}

	wptr = GFX_Screen_GetActive();
	wptr += y * SCREEN_WIDTH + x;
	rptr = g_tilesPixels + (tileID * s_tileByteSize);

	/* tiles with transparent pixels : [1 : 33] U [108 : 122] and 124
	 * palettes 1 to 18 and 22 and 24 */
	/*if (tileID <= 33 || (tileID >= 108 && tileID <= 124)) {*/
	/* We've found that all "transparent" icons/tiles have 0 (transparent) as color 0 */
	if (icon_palette[0] == 0) {
		for (j = 0; j < s_tileHeight; j++) {
			for (i = 0; i < s_tileWidth; i++) {
				uint8 left  = icon_palette[(*rptr) >> 4];
				uint8 right = icon_palette[(*rptr) & 0xF];
				rptr++;

				if (left != 0) *wptr = left;
				wptr++;
				if (right != 0) *wptr = right;
				wptr++;
			}
			wptr += s_tileSpacing;
		}
	} else {
		for (j = 0; j < s_tileHeight; j++) {
			for (i = 0; i < s_tileWidth; i++) {
				*wptr++ = icon_palette[(*rptr) >> 4];
				*wptr++ = icon_palette[(*rptr) & 0xF];
				rptr++;
			}
			wptr += s_tileSpacing;
		}
	}
}

/**
 * Initialize sprite information.
 *
 * @param widthSize Value between 0 and 2, indicating the width of the sprite. x8 to get actuel width of sprite
 * @param heightSize Value between 0 and 2, indicating the width of the sprite. x8 to get actuel width of sprite
 */
void GFX_Init_TilesInfo(uint16 widthSize, uint16 heightSize)
{
	/* NOTE : shouldn't it be (heightSize < 3 && widthSize < 3) ??? */
	if (widthSize == heightSize && widthSize < 3) {
		s_tileMode = widthSize & 2;

		s_tileWidth   = widthSize << 2;
		s_tileHeight  = heightSize << 3;
		s_tileSpacing = SCREEN_WIDTH - s_tileHeight;
		s_tileByteSize = s_tileWidth * s_tileHeight;
	} else {
		/* NOTE : is it dead code ? */
		/* default to 8x8 sprites */
		s_tileMode = 4;
		s_tileByteSize = 8*4;

		s_tileWidth   = 4;
		s_tileHeight  = 8;
		s_tileSpacing = 312;
	}
}

/**
 * Put a pixel on the screen.
 * @param x The X-coordinate on the screen.
 * @param y The Y-coordinate on the screen.
 * @param colour The colour of the pixel to put on the screen.
 */
void GFX_PutPixel(uint16 x, uint16 y, uint8 colour)
{
	if (y >= SCREEN_HEIGHT) return;
	if (x >= SCREEN_WIDTH) return;

	*((uint8 *)GFX_Screen_GetActive() + y * SCREEN_WIDTH + x) = colour;
}

/**
 * Copy information from one screenbuffer to the other.
 * @param xSrc The X-coordinate on the source.
 * @param ySrc The Y-coordinate on the source.
 * @param xDst The X-coordinate on the destination.
 * @param yDst The Y-coordinate on the destination.
 * @param width The width.
 * @param height The height.
 * @param screenSrc The ID of the source screen.
 * @param screenDst The ID of the destination screen.
 * @param skipNull Wether to skip pixel colour 0.
 */
void GFX_Screen_Copy2(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, Screen screenSrc, Screen screenDst, bool skipNull)
{
	uint8 *src;
	uint8 *dst;

	if (xSrc >= SCREEN_WIDTH) return;
	if (xSrc < 0) {
		xDst += xSrc;
		width += xSrc;
		xSrc = 0;
	}

	if (ySrc >= SCREEN_HEIGHT) return;
	if (ySrc < 0) {
		yDst += ySrc;
		height += ySrc;
		ySrc = 0;
	}

	if (xDst >= SCREEN_WIDTH) return;
	if (xDst < 0) {
		xSrc += xDst;
		width += xDst;
		xDst = 0;
	}

	if (yDst >= SCREEN_HEIGHT) return;
	if (yDst < 0) {
		ySrc += yDst;
		height += yDst;
		yDst = 0;
	}

	if (SCREEN_WIDTH - xSrc - width < 0) width = SCREEN_WIDTH - xSrc;
	if (SCREEN_HEIGHT - ySrc - height < 0) height = SCREEN_HEIGHT - ySrc;
	if (SCREEN_WIDTH - xDst - width < 0) width = SCREEN_WIDTH - xDst;
	if (SCREEN_HEIGHT - yDst - height < 0) height = SCREEN_HEIGHT - yDst;

	if (xSrc < 0 || xSrc >= SCREEN_WIDTH) return;
	if (xDst < 0 || xDst >= SCREEN_WIDTH) return;
	if (ySrc < 0 || ySrc >= SCREEN_HEIGHT) return;
	if (yDst < 0 || yDst >= SCREEN_HEIGHT) return;
	if (width < 0 || width >= SCREEN_WIDTH) return;
	if (height < 0 || height >= SCREEN_HEIGHT) return;

	GFX_Screen_SetDirty(screenDst, xDst, yDst, xDst + width, yDst + height);

	src = GFX_Screen_Get_ByIndex(screenSrc);
	dst = GFX_Screen_Get_ByIndex(screenDst);

	src += xSrc + ySrc * SCREEN_WIDTH;
	dst += xDst + yDst * SCREEN_WIDTH;

	while (height-- != 0) {
		if (skipNull) {
			uint16 i;
			for (i = 0; i < width; i++) {
				if (src[i] != 0) dst[i] = src[i];
			}
		} else {
			memmove(dst, src, width);
		}
		dst += SCREEN_WIDTH;
		src += SCREEN_WIDTH;
	}
}

/**
 * Copy information from one screenbuffer to the other.
 * @param xSrc The X-coordinate on the source.
 * @param ySrc The Y-coordinate on the source.
 * @param xDst The X-coordinate on the destination.
 * @param yDst The Y-coordinate on the destination.
 * @param width The width.
 * @param height The height.
 * @param screenSrc The ID of the source screen.
 * @param screenDst The ID of the destination screen.
 */
void GFX_Screen_Copy(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, Screen screenSrc, Screen screenDst)
{
	uint8 *src;
	uint8 *dst;

	if (xSrc >= SCREEN_WIDTH) return;
	if (xSrc < 0) xSrc = 0;

	if (ySrc >= SCREEN_HEIGHT) return;
	if (ySrc < 0) ySrc = 0;

	if (xDst >= SCREEN_WIDTH) return;
	if (xDst < 0) xDst = 0;

	if ((yDst + height) > SCREEN_HEIGHT) {
		height = SCREEN_HEIGHT - 1 - yDst;
	}
	if (height <= 0) return;

	if (yDst >= SCREEN_HEIGHT) return;
	if (yDst < 0) yDst = 0;

	if (width <= 0 || width > SCREEN_WIDTH) return;

	src = GFX_Screen_Get_ByIndex(screenSrc);
	dst = GFX_Screen_Get_ByIndex(screenDst);

	src += xSrc + ySrc * SCREEN_WIDTH;
	dst += xDst + yDst * SCREEN_WIDTH;

	GFX_Screen_SetDirty(screenDst, xDst, yDst, xDst + width, yDst + height);

	if (width == SCREEN_WIDTH) {
		memmove(dst, src, height * SCREEN_WIDTH);
	} else {
		while (height-- != 0) {
			memmove(dst, src, width);
			dst += SCREEN_WIDTH;
			src += SCREEN_WIDTH;
		}
	}
}

/**
 * Clears the screen.
 */
void GFX_ClearScreen(Screen screenID)
{
	memset(GFX_Screen_Get_ByIndex(screenID), 0, SCREEN_WIDTH * SCREEN_HEIGHT);
	GFX_Screen_SetDirty(screenID, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
}

/**
 * Clears the given memory block.
 * @param index The memory block.
 */
void GFX_ClearBlock(Screen index)
{
	memset(GFX_Screen_Get_ByIndex(index), 0, GFX_Screen_GetSize_ByIndex(index));
	GFX_Screen_SetDirty(index, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
}

/**
 * Set a new palette for the screen.
 * @param palette The palette in RGB order.
 */
void GFX_SetPalette(uint8 *palette)
{
	int from, to;

	for (from = 0; from < 256; from++) {
		if(palette[from*3] != g_paletteActive[from*3] ||
		   palette[from*3+1] != g_paletteActive[from*3+1] ||
		   palette[from*3+2] != g_paletteActive[from*3+2]) break;
	}
	if (from >= 256) {
		Warning("Useless GFX_SetPalette() call\n");
		return;
	}
	for (to = 255; to > from; to--) {
		if(palette[to*3] != g_paletteActive[to*3] ||
		   palette[to*3+1] != g_paletteActive[to*3+1] ||
		   palette[to*3+2] != g_paletteActive[to*3+2]) break;
	}
	Video_SetPalette(palette + 3 * from, from, to - from + 1);

	memcpy(g_paletteActive + 3 * from, palette + 3 * from, (to - from + 1) * 3);
}

/**
 * Get a pixel on the screen.
 * @param x The X-coordinate on the screen.
 * @param y The Y-coordinate on the screen.
 * @return The colour of the pixel.
 */
uint8 GFX_GetPixel(uint16 x, uint16 y)
{
	if (y >= SCREEN_HEIGHT) return 0;
	if (x >= SCREEN_WIDTH) return 0;

	return *((uint8 *)GFX_Screen_GetActive() + y * SCREEN_WIDTH + x);
}

uint16 GFX_GetSize(int16 width, int16 height)
{
	if (width < 1) width = 1;
	if (width > SCREEN_WIDTH) width = SCREEN_WIDTH;
	if (height < 1) height = 1;
	if (height > SCREEN_HEIGHT) height = SCREEN_HEIGHT;

	return width * height;
}

/**
 * Copy information from a buffer to the screen.
 * @param x The X-coordinate on the screen.
 * @param y The Y-coordinate on the screen.
 * @param width The width.
 * @param height The height.
 * @param buffer The buffer to copy from.
 */
void GFX_CopyFromBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer)
{
	uint8 *screen;

	if (width == 0) return;
	if (height == 0) return;

	if (left < 0) left = 0;
	if (left >= SCREEN_WIDTH) left = SCREEN_WIDTH - 1;

	if (top < 0) top = 0;
	if (top >= SCREEN_HEIGHT) top = SCREEN_HEIGHT - 1;

	if (width  > SCREEN_WIDTH - left) width  = SCREEN_WIDTH - left;
	if (height > SCREEN_HEIGHT - top) height = SCREEN_HEIGHT - top;

	screen = GFX_Screen_Get_ByIndex(SCREEN_0);
	screen += top * SCREEN_WIDTH + left;

	GFX_Screen_SetDirty(SCREEN_0, left, top, left + width, top + height);

	while (height-- != 0) {
		memcpy(screen, buffer, width);
		screen += SCREEN_WIDTH;
		buffer += width;
	}
}

/**
 * Copy information from the screen to a buffer.
 * @param x The X-coordinate on the screen.
 * @param y The Y-coordinate on the screen.
 * @param width The width.
 * @param height The height.
 * @param buffer The buffer to copy to.
 */
void GFX_CopyToBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer)
{
	uint8 *screen;

	if (width == 0) return;
	if (height == 0) return;

	if (left < 0) left = 0;
	if (left >= SCREEN_WIDTH) left = SCREEN_WIDTH - 1;

	if (top < 0) top = 0;
	if (top >= SCREEN_HEIGHT) top = SCREEN_HEIGHT - 1;

	if (width  > SCREEN_WIDTH - left) width  = SCREEN_WIDTH - left;
	if (height > SCREEN_HEIGHT - top) height = SCREEN_HEIGHT - top;

	screen = GFX_Screen_Get_ByIndex(SCREEN_0);
	screen += top * SCREEN_WIDTH + left;

	while (height-- != 0) {
		memcpy(buffer, screen, width);
		screen += SCREEN_WIDTH;
		buffer += width;
	}
}
