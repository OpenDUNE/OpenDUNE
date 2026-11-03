/** @file saturn/common/vdp2.h VDP2: the software screen, the map planes and the overlay.
 *
 * Four layers, by priority (highest first):
 *
 *   NBG0  priority 6  the engine's own screen (SCREEN_0), as a 512x256 8bpp
 *                     bitmap: menus, dialogs, the side bar, text, the minimap.
 *                     Colour 0 is transparent while the map is shown, so the
 *                     map planes and the sprites show through the viewport.
 *   VDP1  priority 3  everything the hardware draws: units, effects, the
 *                     selection rectangle and the selected-unit marker.
 *   NBG1  priority 3  the 16-colour overlay bitmap (the reticle).
 *   NBG3  priority 2  the map's overlay plane: tracks, blood, wrecks, fog.
 *   NBG2  priority 1  the map's ground plane.
 *
 * The two map planes are cell (tile) planes so a scroll costs two register
 * writes instead of a copy of the whole viewport.
 *
 * VRAM (0x25E00000, 512 KB) is used as:
 *
 *   0x00000  A0  NBG0 bitmap, 512x256 bytes
 *   0x20000  A1  map tile characters (16x16, 8bpp), 0x20 bytes each
 *   0x38900  A1  house-coloured tile characters, baked on demand
 *   0x50000  B0  NBG2 pattern name tables (pages A-D, 0x1000 apart)
 *   0x54000  B0  NBG3 pattern name tables
 *   0x60000  B1  NBG1 overlay bitmap, and the back colour at the end
 *
 * The cycle patterns below give the sprite layer and NBG0 the most accesses;
 * the map planes and the overlay need fewer, so their banks carry a shorter
 * pattern. Changing the layering means re-deriving them. */

#ifndef SATURN_VDP2_H
#define SATURN_VDP2_H

#include <stdint.h>

enum {
	VDP2_BITMAP_PITCH = 512, /*!< NBG0 bitmap is 512x256, 1 byte per pixel */
	VDP2_DISPLAY_W = 320,
	VDP2_CONSOLE_H = 224, /*!< the console's lines, on either standard */
	VDP2_OVERLAY_OFFSET = 0x60000, /*!< NBG1 in VRAM: bank B1 */
	/* overlay colours (0 is transparent) */
	VDP2_OVERLAY_CLEAR = 0,
	VDP2_OVERLAY_LIGHT = 1,
	VDP2_OVERLAY_DARK = 2
};

/* The map's cell planes (NBG2 ground, NBG3 overlay), all in VRAM: the
 * character patterns in bank A1, the pattern name tables (pages A-D, 0x1000
 * apart) in bank B0; the NBG1 overlay is in B1. */
enum {
	VDP2_MAP_PATTERNS = 0x20000, /*!< 16x16 8bpp tile characters */
	VDP2_MAP_HOUSES = 0x38900,   /*!< house-coloured characters, after the tiles in A1 */
	VDP2_MAP_NAMES_NBG2 = 0x50000,
	VDP2_MAP_NAMES_NBG3 = 0x54000,
	/* one 16x16 tile is four 8x8 cells; a character number is 0x20 bytes */
	VDP2_MAP_CHAR_BLANK = 0, /*!< transparent, for a tile with no overlay */
	VDP2_MAP_CHAR_FOG = 1,   /*!< the fog colour, for a fully veiled tile */
	VDP2_MAP_CHAR_TILE = 2   /*!< tile N's character is this + N */
};

/* Pixel (0, 0) of the NBG0 bitmap in VRAM. */
#define VDP2_BITMAP ((volatile uint8_t *)0x25E00000UL)

/*! The lines the display shows: 224 on NTSC, 256 on PAL. Set by
 * Vdp2_BitmapInit() from the broadcast standard, before anything places the
 * picture or its border. */
extern int g_vdp2DisplayH;

extern void Vdp2_BitmapInit(void);
extern void Vdp2_DisplayOn(void);
extern void Vdp2_VBlankWait(void);
extern void Vdp2_SetColor(int index, uint16_t rgb555);
extern void Vdp2_SetScrollY(int y);

extern void Vdp2_OverlayShow(int show);
extern void Vdp2_OverlayPixel(int x, int y, int colour);
extern void Vdp2_MapShow(int show);
extern void Vdp2_LayersVBlank(void);

extern void Vdp2_MapInit(void);
extern void Vdp2_MapWindow(int left, int top, int right, int bottom);
extern void Vdp2_MapSetTile(int packed, int groundChar, int overlayChar);
extern void Vdp2_MapScroll(int x, int y);
extern void Vdp2_PictureScrollY(int y);

#endif /*!< SATURN_VDP2_H */
