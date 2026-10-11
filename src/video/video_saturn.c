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
#include "../gfx.h"
#include "../input/pad_saturn.h"
#include "../os/error.h"

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
static bool s_repaintAll = true;
static uint16 s_palette[256];                     /*!< the colours, RGB555, for colour RAM */
static volatile int s_paletteFrom = 256;          /*!< the first changed since the last vertical blank, */
static volatile int s_paletteTo = 0;              /*!< and the one after the last */

/**
 * The VBlank interrupt: the colours changed, the controllers, and the
 * loading indicator.
 */
static void Video_VBlank(void)
{
	int i;

	for (i = s_paletteFrom; i < s_paletteTo; i++) Vdp2_SetColor(i, s_palette[i]);
	s_paletteFrom = 256;
	s_paletteTo = 0;

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
		memcpy((void *)dst, src, SCREEN_WIDTH);
	}
}

/**
 * Copy what changed of the screen to the bitmap, and read the controllers.
 */
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
	Vdp2_MapShow(show);
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
