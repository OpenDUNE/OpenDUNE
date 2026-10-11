/** @file saturn/common/vdp2.h VDP2 set up as an 8bpp bitmap (NBG0) and an overlay (NBG1). */

#ifndef SATURN_VDP2_H
#define SATURN_VDP2_H

#include <stdint.h>

enum {
	VDP2_BITMAP_PITCH = 512, /*!< NBG0 bitmap is 512x256, 1 byte per pixel */
	VDP2_DISPLAY_W = 320,
	VDP2_DISPLAY_H = 224,
	VDP2_OVERLAY_OFFSET = 0x40000, /*!< NBG1 in VRAM: bank B */
	/* overlay colours (0 is transparent) */
	VDP2_OVERLAY_CLEAR = 0,
	VDP2_OVERLAY_LIGHT = 1,
	VDP2_OVERLAY_DARK = 2
};

/* Pixel (0, 0) of the NBG0 bitmap in VRAM. */
#define VDP2_BITMAP ((volatile uint8_t *)0x25E00000UL)

extern void Vdp2_BitmapInit(void);
extern void Vdp2_DisplayOn(void);
extern void Vdp2_VBlankWait(void);
extern void Vdp2_SetColor(int index, uint16_t rgb555);
extern void Vdp2_SetScrollY(int y);

extern void Vdp2_OverlayShow(int show);
extern void Vdp2_OverlayPixel(int x, int y, int colour);
extern void Vdp2_MapShow(int show);

#endif /*!< SATURN_VDP2_H */
