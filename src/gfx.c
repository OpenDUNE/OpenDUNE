/* $Id$ */

/** @file src/gfx.c Graphics routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"

#include "gfx.h"

#include "house.h"

static uint8 *g_iconRTBL = NULL;
static uint8 *g_iconRPAL = NULL;
static uint8 *g_spriteInfo = NULL;
static uint16 g_spriteSpacing = 0;
static uint16 g_spriteHeight = 0;
static uint16 g_spriteWidth = 0;
static uint8 g_spriteMode = 0;
static uint8 g_spriteInfoSize = 0;

/**
 * Get the codesegment of the active screen buffer.
 * @return The codesegment of the screen buffer.
 */
uint16 GFX_Screen_GetSegmentActive()
{
	return g_global->variable_6C93[g_global->screenActiveID >> 1][0];
}

/**
 * Returns the codesegment of a screenbuffer.
 * @param screenID The screenID to get the segment of.
 * @return Some codesegment value.
 */
uint16 GFX_Screen_GetSegment_ByIndex2(uint16 screenID)
{
	return g_global->variable_6C93[screenID >> 1][1];
}

/**
 * Returns the codesegment of a screenbuffer.
 * @param screenID The screenID to get the segment of.
 * @return Some codesegment value.
 */
uint16 GFX_Screen_GetSegment_ByIndex(uint16 screenID)
{
	return g_global->variable_6C93[screenID >> 1][0];
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

	if (g_spriteMode == 4) return;

	wptr = &emu_get_memory8(GFX_Screen_GetSegmentActive(), y * SCREEN_WIDTH, x * 8);
	rptr = g_spriteInfo + ((spriteID * g_spriteInfoSize) << 4);

	spacing = g_spriteSpacing;
	height  = g_spriteHeight;
	width   = g_spriteWidth;

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
 * @param screenID The screenID the sprites are in.
 * @param iconRPAL The palette used for sprites.
 * @param iconRTBL The table to look up sprite information.
 */
void GFX_Init_Sprites(uint16 screenID, void *iconRPAL, void *iconRTBL)
{
	g_spriteInfo = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex2(screenID), 0, 0);

	g_iconRPAL = iconRPAL;
	g_iconRTBL = iconRTBL;
}

/**
 * Initialize sprite information.
 *
 * @param widthSize Value between 0 and 2, indicating the width of the sprite.
 * @param heightSize Value between 0 and 2, indicating the width of the sprite.
 */
void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize)
{
	emu_get_memory16(emu_cs, 0x00, 0x347) = 0; /* Write-only */
	emu_get_memory16(emu_cs, 0x00, 0x349) = 0; /* Write-only */

	if (widthSize == heightSize && widthSize < 3) {
		emu_get_memory16(emu_cs, 0x00, 0x34B) = 1; /* Write-only */
		emu_get_memory16(emu_cs, 0x00, 0x34D) = 1; /* Write-only */

		g_spriteMode = widthSize & 2;
		g_spriteInfoSize = (2 << widthSize);

		g_spriteWidth   = widthSize << 2;
		g_spriteHeight  = widthSize << 3;
		g_spriteSpacing = SCREEN_WIDTH - g_spriteHeight;
	} else {
		emu_get_memory16(emu_cs, 0x00, 0x34B) = widthSize; /* Write-only */
		emu_get_memory16(emu_cs, 0x00, 0x34D) = heightSize; /* Write-only */

		g_spriteMode = 4;
		g_spriteInfoSize = 2;

		g_spriteWidth   = 4;
		g_spriteHeight  = 8;
		g_spriteSpacing = 312;

		widthSize = 1;
		heightSize = 1;
	}

	emu_get_memory16(emu_cs, 0x00, 0x345) = widthSize; /* Write-only */
	emu_get_memory16(emu_cs, 0x00, 0x343) = heightSize; /* Write-only */
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

	emu_get_memory8(GFX_Screen_GetSegmentActive(), y * SCREEN_WIDTH, x) = colour;
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
void GFX_Screen_Copy2(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, uint16 screenSrc, uint16 screenDst, bool skipNull)
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

	src = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex(screenSrc), 0x0, 0x0);
	dst = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex(screenDst), 0x0, 0x0);

	src += xSrc + ySrc * SCREEN_WIDTH;
	dst += xDst + yDst * SCREEN_WIDTH;

	while (height-- != 0) {
		if (skipNull) {
			uint16 i;
			for (i = 0; i < width; i++) {
				if (src[i] != 0) dst[i] = src[i];
			}
		} else {
			memcpy(dst, src, width);
		}
		dst += SCREEN_WIDTH;
		src += SCREEN_WIDTH;
	}
}

/**
 * Copy information from one screenbuffer to the other.
 * @param xSrc The X-coordinate on the source divided by 8.
 * @param ySrc The Y-coordinate on the source.
 * @param xDst The X-coordinate on the destination divided by 8.
 * @param yDst The Y-coordinate on the destination.
 * @param width The width divided by 8.
 * @param height The height.
 * @param screenSrc The ID of the source screen.
 * @param screenDst The ID of the destination screen.
 */
void GFX_Screen_Copy(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, uint16 screenSrc, uint16 screenDst)
{
	uint8 *src;
	uint8 *dst;

	if (xSrc >= SCREEN_WIDTH / 8) return;
	if (xSrc < 0) xSrc = 0;
	xSrc *= 8;

	if (ySrc >= SCREEN_HEIGHT) return;
	if (ySrc < 0) ySrc = 0;

	if (xDst >= SCREEN_WIDTH / 8) return;
	if (xDst < 0) xDst = 0;
	xDst *= 8;

	if ((yDst + height) > SCREEN_HEIGHT) {
		height = SCREEN_HEIGHT - 1 - yDst;
	}
	if (height < 0) return;

	if (yDst >= SCREEN_HEIGHT) return;
	if (yDst < 0) yDst = 0;

	src = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex(screenSrc), 0x0, 0x0);
	dst = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex(screenDst), 0x0, 0x0);

	src += xSrc + ySrc * SCREEN_WIDTH;
	dst += xDst + yDst * SCREEN_WIDTH;

	if (width > SCREEN_WIDTH / 8 || width < 1) return;
	width *= 8;

	while (height-- != 0) {
		memcpy(dst, src, width);
		dst += SCREEN_WIDTH;
		src += SCREEN_WIDTH;
	}
}

/**
 * Clears the screen.
 */
void GFX_ClearScreen()
{
	uint8 *screen = &emu_get_memory8(GFX_Screen_GetSegmentActive(), 0x0, 0x0);

	memset(screen, 0, SCREEN_WIDTH * SCREEN_HEIGHT);
}

/**
 * Set a new palette for the screen.
 * @param palette The palette in RGB order.
 */
void GFX_SetPalette(uint8 *palette)
{
	uint8 *dest = g_global->variable_70A2;
	int i;

	/* Set DAC write-index to 0 */
	emu_outb(0x3C8, 0);

	for (i = 0; i < 768; i++) {
		emu_outb(0x3C9, *palette);
		*dest++ = *palette++;
	}
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

	return emu_get_memory8(GFX_Screen_GetSegmentActive(), y * SCREEN_WIDTH, x);
}

void GFX_Screen_Copy3(uint16 screenSrc, uint16 screenDst)
{
	screenSrc = GFX_Screen_GetSegment_ByIndex2(screenSrc);
	screenDst = GFX_Screen_GetSegment_ByIndex(screenDst);

	if (screenSrc == 0x0 || screenDst == 0x0 || screenSrc == screenDst) return;

	memcpy(&emu_get_memory8(screenDst, 0x0, 0x0), &emu_get_memory8(screenSrc, 0x0, 0x0), 64000);
}

uint16 GFX_GetSize(int16 width, int16 height)
{
	if (width < 1) width = 1;
	if (width > SCREEN_WIDTH / 8) width = SCREEN_WIDTH / 8;
	if (height < 1) height = 1;
	if (height > SCREEN_HEIGHT) height = SCREEN_HEIGHT;

	return (width * height) << 3;
}

/**
 * Copy information from a buffer to the screen.
 * @param x The X-coordinate on the screen divided by 8.
 * @param y The Y-coordinate on the screen.
 * @param width The width divided by 8.
 * @param height The height.
 * @param buffer The buffer to copy from.
 */
void GFX_CopyFromBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer)
{
	uint8 *screen;

	if (width == 0) return;
	if (height == 0) return;

	if (left < 0) left = 0;
	if (left >= SCREEN_WIDTH / 8) left = SCREEN_WIDTH / 8 - 1;

	if (top < 0) top = 0;
	if (top >= SCREEN_HEIGHT) top = SCREEN_HEIGHT - 1;

	if (width > SCREEN_WIDTH / 8) width = SCREEN_WIDTH / 8;
	if (height > SCREEN_HEIGHT) height = SCREEN_HEIGHT;

	screen = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex(0), top * SCREEN_WIDTH, left * 8);
	width *= 8;

	while (height-- != 0) {
		memcpy(screen, buffer, width);
		screen += SCREEN_WIDTH;
		buffer += width;
	}
}

/**
 * Copy information from the screen to a buffer.
 * @param x The X-coordinate on the screen divided by 8.
 * @param y The Y-coordinate on the screen.
 * @param width The width divided by 8.
 * @param height The height.
 * @param buffer The buffer to copy to.
 */
void GFX_CopyToBuffer(int16 left, int16 top, uint16 width, uint16 height, uint8 *buffer)
{
	uint8 *screen;

	if (width == 0) return;
	if (height == 0) return;

	if (left < 0) left = 0;
	if (left >= SCREEN_WIDTH / 8) left = SCREEN_WIDTH / 8 - 1;

	if (top < 0) top = 0;
	if (top >= SCREEN_HEIGHT) top = SCREEN_HEIGHT - 1;

	if (width > SCREEN_WIDTH / 8) width = SCREEN_WIDTH / 8;
	if (height > SCREEN_HEIGHT) height = SCREEN_HEIGHT;

	screen = &emu_get_memory8(GFX_Screen_GetSegment_ByIndex(0), top * SCREEN_WIDTH, left * 8);
	width *= 8;

	while (height-- != 0) {
		memcpy(buffer, screen, width);
		screen += SCREEN_WIDTH;
		buffer += width;
	}
}
