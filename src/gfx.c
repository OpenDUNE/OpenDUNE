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

static uint16 s_spriteSpacing  = 0;
static uint16 s_spriteHeight   = 0;
static uint16 s_spriteWidth    = 0;
static uint8  s_spriteMode     = 0;
static uint8  s_spriteInfoSize = 0;

static const uint16 s_screenBufferSize[5] = { 0xFA00, 0xFBF4, 0xFA00, 0xFD0D, 0xA044 };
static void *s_screenBuffer[5] = { NULL, NULL, NULL, NULL, NULL };

Screen g_screenActiveID = SCREEN_0;

/**
 * Get the codesegment of the active screen buffer.
 * @return The codesegment of the screen buffer.
 */
void *GFX_Screen_GetActive(void)
{
	return GFX_Screen_Get_ByIndex(g_screenActiveID);
}

/**
 * Returns the size of a screenbuffer.
 * @param screenID The screenID to get the size of.
 * @return Some size value.
 */
uint16 GFX_Screen_GetSize_ByIndex(Screen screenID)
{
	return s_screenBufferSize[screenID >> 1];
}

/**
 * Get the pointer to a screenbuffer.
 * @param screenID The screenbuffer to get.
 * @return A pointer to the screenbuffer.
 */
void *GFX_Screen_Get_ByIndex(Screen screenID)
{
	return s_screenBuffer[screenID >> 1];
}

/**
 * Change the current active screen to the new value.
 * @param screenID The new screen to get active.
 * @return Old screenID that was currently active.
 */
Screen GFX_Screen_SetActive(Screen screenID)
{
	Screen oldScreen = g_screenActiveID;
	g_screenActiveID = screenID;
	return oldScreen;
}

/**
 * Initialize the GFX system.
 */
void GFX_Init(void)
{
	uint8 *screenBuffers;
	uint32 totalSize = 0;
	int i;

	for (i = 0; i < 5; i++) {
		totalSize += GFX_Screen_GetSize_ByIndex(i * 2);
	}

	screenBuffers = calloc(1, totalSize);

	for (i = 0; i < 5; i++) {
		s_screenBuffer[i] = screenBuffers;

		screenBuffers += GFX_Screen_GetSize_ByIndex(i * 2);
	}

	g_screenActiveID = SCREEN_0;
}

/**
 * Uninitialize the GFX system.
 */
void GFX_Uninit(void)
{
	int i;

	free(s_screenBuffer[0]);

	for (i = 0; i < 5; i++) {
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
	uint16 spacing;
	uint16 height;
	uint16 width;
	uint8 *iconRTBL;
	uint8 *iconRPAL;
	uint8 *wptr;
	uint8 *rptr;
	uint8 palette[16];

	assert(houseID < HOUSE_MAX);

	iconRTBL = g_iconRTBL + spriteID;
	iconRPAL = g_iconRPAL + ((*iconRTBL) << 4);

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

	if (s_spriteMode == 4) return;

	wptr = GFX_Screen_GetActive();
	wptr += y * SCREEN_WIDTH + x;
	rptr = g_spriteInfo + ((spriteID * s_spriteInfoSize) << 4);

	spacing = s_spriteSpacing;
	height  = s_spriteHeight;
	width   = s_spriteWidth;

	for (j = 0; j < height; j++) {
		for (i = 0; i < width; i++) {
			uint8 left  = (*rptr) >> 4;
			uint8 right = (*rptr) & 0xF;
			rptr++;

			if (palette[left] != 0) *wptr = palette[left];
			wptr++;
			if (palette[right] != 0) *wptr = palette[right];
			wptr++;
		}

		wptr += spacing;
	}
}

/**
 * Initialize sprite information.
 *
 * @param widthSize Value between 0 and 2, indicating the width of the sprite.
 * @param heightSize Value between 0 and 2, indicating the width of the sprite.
 */
void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize)
{
	if (widthSize == heightSize && widthSize < 3) {
		s_spriteMode = widthSize & 2;
		s_spriteInfoSize = (2 << widthSize);

		s_spriteWidth   = widthSize << 2;
		s_spriteHeight  = widthSize << 3;
		s_spriteSpacing = SCREEN_WIDTH - s_spriteHeight;
	} else {
		s_spriteMode = 4;
		s_spriteInfoSize = 2;

		s_spriteWidth   = 4;
		s_spriteHeight  = 8;
		s_spriteSpacing = 312;

		widthSize = 1;
		heightSize = 1;
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
void GFX_ClearScreen(void)
{
	memset(GFX_Screen_GetActive(), 0, SCREEN_WIDTH * SCREEN_HEIGHT);
}

/**
 * Set a new palette for the screen.
 * @param palette The palette in RGB order.
 */
void GFX_SetPalette(uint8 *palette)
{
	Video_SetPalette(palette, 0, 256);

	memcpy(g_paletteActive, palette, 256 * 3);
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
