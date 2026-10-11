/** @file saturn/common/vdp1.c VDP1 sprite layer: frame buffer, command lists and patterns.
 *
 * VDP1 draws into a 16 bpp frame buffer that VDP2 shows as its sprite layer.
 * A one-cycle frame buffer is erased to the transparent colour over the whole
 * 320x224 picture each frame, and drawing restarts from the command list at
 * the start of VDP1's VRAM with each frame change. */

#include "vdp1.h"

/**
 * Set VDP1 up: a 16 bpp one-cycle frame buffer, erased to colour 0 over the
 * whole picture, drawing automatically each frame from an empty command list.
 */
void Vdp1_Init(void)
{
	/* 16 bpp, normal 320x224, no V-blank erase; erase over the whole picture */
	VDP1_TVMR = 0x0000;

	/* one-cycle frame buffer, changes each field */
	VDP1_FBCR = 0x0000;

	/* erase to colour 0 (transparent) from (0, 0) to (320, 223); the
	 * horizontal coordinates are in units of 8 pixels */
	VDP1_EWDR = 0x0000;
	VDP1_EWLR = 0x0000;
	VDP1_EWRR = (40 << 9) | 223;

	/* draw automatically with each frame change */
	VDP1_PTMR = 0x0001;

	/* an empty command list: a draw end command */
	*(volatile uint16_t *)VDP1_VRAM = VDP1_CMD_END;
}
