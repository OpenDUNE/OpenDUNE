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

/* The map's cell planes (NBG2 ground, NBG3 overlay), all in VRAM: the
 * character patterns in bank A1, the pattern name tables (pages A-D, 0x1000
 * apart) in bank B0 after the NBG1 overlay. */
enum {
	VDP2_MAP_PATTERNS = 0x20000, /*!< 16x16 8bpp tile characters */
	VDP2_MAP_HOUSES = 0x60000,   /*!< house-coloured structure characters (bank B1) */
	VDP2_MAP_NAMES_NBG2 = 0x50000,
	VDP2_MAP_NAMES_NBG3 = 0x54000,
	/* one 16x16 tile is four 8x8 cells; a character number is 0x20 bytes */
	VDP2_MAP_CHAR_BLANK = 0, /*!< transparent, for a tile with no overlay */
	VDP2_MAP_CHAR_FOG = 1,   /*!< the fog colour, for a fully veiled tile */
	VDP2_MAP_CHAR_TILE = 2   /*!< tile N's character is this + N */
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

extern void Vdp2_MapInit(void);
extern void Vdp2_MapWindow(int left, int top, int right, int bottom);
extern void Vdp2_MapSetTile(int packed, int groundChar, int overlayChar);
extern void Vdp2_MapScroll(int x, int y);

#endif /*!< SATURN_VDP2_H */
