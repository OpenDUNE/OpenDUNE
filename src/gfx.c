#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "gfx.h"
#include "house.h"

/**
 * Returns the codesegment of an output buffer?
 * @return Some codesegment value.
 */
uint16 Unknown_22A6_0DF8()
{
	uint8 *ptr;
	uint16 *ptr2;

	ptr  = (uint8 *)emu_get_memorycsip(emu_get_csip32(0x22A6, 0x00, 0xF));
	ptr2 = (uint16 *)emu_get_memorycsip(emu_get_csip32(0x22A6, 0x00, 0xB));

	ptr2 += (*ptr) & 0x1E;

	return *ptr2;
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
	uint8 pallete[16];

	assert(houseID < HOUSE_MAX);

	iconRTBL = (uint8 *)emu_get_memorycsip(emu_get_csip32(0x22A6, 0x00, 0x31F));
	iconRPAL = (uint8 *)emu_get_memorycsip(emu_get_csip32(0x22A6, 0x00, 0x31B));

	iconRTBL += spriteID;
	iconRPAL += (*iconRTBL) << 4;

	for (i = 0; i < 16; i++) {
		uint8 colour = *iconRPAL++;

		if (colour >= 0x90 && colour <= 0xA0) colour += houseID << 4;
		pallete[i] = colour;
	}

	if (emu_get_memory16(0x22A6, 0x00, 0x33F) == 4) return;

	wptr = &emu_get_memory8(Unknown_22A6_0DF8(), emu_get_memory16(0x22A6, y * 2, 0x17D), x * 8);
	rptr = &emu_get_memory8(emu_get_memory16(0x22A6, 0x00, 0x325) + spriteID * emu_get_memory16(0x22A6, 0x00, 0x341), 0, emu_get_memory16(0x22A6, 0x00, 0x323));

	spacing = emu_get_memory16(0x22A6, 0x00, 0x339);
	height  = emu_get_memory16(0x22A6, 0x00, 0x33B);
	width   = emu_get_memory16(0x22A6, 0x00, 0x33D);

	for (j = 0; j < height; j++) {
		for (i = 0; i < width; i++) {
			uint8 left  = (*rptr) >> 4;
			uint8 right = (*rptr) & 0xF;
			rptr++;

			if (pallete[left] != 0) *wptr = pallete[left];
			wptr++;
			if (pallete[right] != 0) *wptr = pallete[right];
			wptr++;
		}

		wptr += spacing;
	}
}
