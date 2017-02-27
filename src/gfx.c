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

static uint16 s_spriteSpacing  = 0;	/* bytes to skip between each line. == SCREEN_WIDTH - 2*s_spriteWidth */
static uint16 s_spriteHeight   = 0;	/* "icon" sprites height (lines) */
static uint16 s_spriteWidth    = 0;	/* "icon" sprites width in bytes. each bytes contains 2 pixels. 4 MSB = left, 4 LSB = right */
static uint8  s_spriteMode     = 0;
static uint8  s_spriteByteSize = 0;	/* size in byte of one sprite pixel data = s_spriteHeight * s_spriteWidth / 2 */

/* SCREEN_0 = 320x200 = 64000 = 0xFA00   The main screen buffer, 0xA0000 Video RAM in DOS Dune 2
 * SCREEN_1 = 64506 = 0xFBFA
 * SCREEN_2 = 320x200 = 64000 = 0xFA00
 * SCREEN_3 = 64781 = 0xFD0D    * NEVER ACTIVE * only used for game credits and intro */
#define GFX_SCREEN_BUFFER_COUNT 4
static const uint16 s_screenBufferSize[GFX_SCREEN_BUFFER_COUNT] = { 0xFA00, 0xFBF4, 0xFA00, 0xFD0D/*, 0xA044*/ };
static void *s_screenBuffer[GFX_SCREEN_BUFFER_COUNT] = { NULL, NULL, NULL, NULL };

Screen s_screenActiveID = SCREEN_0;

/**
 * Get the codesegment of the active screen buffer.
 * @return The codesegment of the screen buffer.
 */
void *GFX_Screen_GetActive(void)
{
	return GFX_Screen_Get_ByIndex(s_screenActiveID);
}

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

	for (i = 0; i < GFX_SCREEN_BUFFER_COUNT; i++) {
		totalSize += GFX_Screen_GetSize_ByIndex(i);
	}

	screenBuffers = calloc(1, totalSize);

	for (i = 0; i < GFX_SCREEN_BUFFER_COUNT; i++) {
		s_screenBuffer[i] = screenBuffers;

		screenBuffers += GFX_Screen_GetSize_ByIndex(i);
	}

	s_screenActiveID = SCREEN_0;
}

/**
 * Uninitialize the GFX system.
 */
void GFX_Uninit(void)
{
	int i;

	free(s_screenBuffer[0]);

	for (i = 0; i < GFX_SCREEN_BUFFER_COUNT; i++) {
		s_screenBuffer[i] = NULL;
	}
}

/**
 * Draw a sprite on the screen.
 * @param spriteID The sprite to draw.
 * @param x The x-coordinate to draw the sprite.
 * @param y The y-coordinate to draw the sprite.
 * @param houseID The house the sprite belongs (for recolouring).
 */
void GFX_DrawSprite(uint16 spriteID, uint16 x, uint16 y, uint8 houseID)
{
	int i, j;
	uint8 *iconRPAL;
	uint8 *wptr;
	uint8 *rptr;
	uint8 palette[16];

	assert(houseID < HOUSE_MAX);

	if (s_spriteMode == 4) return;

	iconRPAL = g_iconRPAL + (g_iconRTBL[spriteID] << 4);

	for (i = 0; i < 16; i++) {
		uint8 colour = *iconRPAL++;

		/* ENHANCEMENT -- Dune2 recolours too many colours, causing clear graphical glitches in the IX building */
		if (g_dune2_enhanced) {
			if (colour >= 0x90 && colour <= 0x96) colour += houseID << 4;
		} else {
			if (colour >= 0x90 && colour <= 0xA0) colour += houseID << 4;
		}
		palette[i] = colour;
	}

	wptr = GFX_Screen_GetActive();
	wptr += y * SCREEN_WIDTH + x;
	rptr = g_spritePixels + (spriteID * s_spriteByteSize);

	for (j = 0; j < s_spriteHeight; j++) {
		for (i = 0; i < s_spriteWidth; i++) {
			uint8 left  = (*rptr) >> 4;
			uint8 right = (*rptr) & 0xF;
			rptr++;

			if (palette[left] != 0) *wptr = palette[left];
			wptr++;
			if (palette[right] != 0) *wptr = palette[right];
			wptr++;
		}

		wptr += s_spriteSpacing;
	}
}

/**
 * Initialize sprite information.
 *
 * @param widthSize Value between 0 and 2, indicating the width of the sprite. x8 to get actuel width of sprite
 * @param heightSize Value between 0 and 2, indicating the width of the sprite. x8 to get actuel width of sprite
 */
void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize)
{
	/* NOTE : shouldn't it be (heightSize < 3 && widthSize < 3) ??? */
	if (widthSize == heightSize && widthSize < 3) {
		s_spriteMode = widthSize & 2;

		s_spriteWidth   = widthSize << 2;
		s_spriteHeight  = heightSize << 3;
		s_spriteSpacing = SCREEN_WIDTH - s_spriteHeight;
		s_spriteByteSize = s_spriteWidth * s_spriteHeight;
	} else {
		/* NOTE : is it dead code ? */
		/* default to 8x8 sprites */
		s_spriteMode = 4;
		s_spriteByteSize = 8*4;

		s_spriteWidth   = 4;
		s_spriteHeight  = 8;
		s_spriteSpacing = 312;
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
	if (height < 0) return;

	if (yDst >= SCREEN_HEIGHT) return;
	if (yDst < 0) yDst = 0;

	src = GFX_Screen_Get_ByIndex(screenSrc);
	dst = GFX_Screen_Get_ByIndex(screenDst);

	src += xSrc + ySrc * SCREEN_WIDTH;
	dst += xDst + yDst * SCREEN_WIDTH;

	if (width < 1 || width > SCREEN_WIDTH) return;

	while (height-- != 0) {
		memmove(dst, src, width);
		dst += SCREEN_WIDTH;
		src += SCREEN_WIDTH;
	}
}

/**
 * Clears the screen.
 */
void GFX_ClearScreen(Screen screenID)
{
	memset(GFX_Screen_Get_ByIndex(screenID), 0, SCREEN_WIDTH * SCREEN_HEIGHT);
}

/**
 * Clears the given memory block.
 * @param index The memory block.
 */
void GFX_ClearBlock(Screen index)
{
	memset(GFX_Screen_Get_ByIndex(index), 0, GFX_Screen_GetSize_ByIndex(index));
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
