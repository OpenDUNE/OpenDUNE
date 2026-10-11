/** @file saturn/common/vdp2.c VDP2 set up as an 8bpp bitmap (NBG0) and an overlay.
 *
 * NBG0 is a 512x256 bitmap of 256 colours at the start of VRAM (bank A),
 * shown in a 320x224 non-interlaced display. NBG1, in front of it, is a
 * 512x256 bitmap of 16 colours in bank B, colour 0 transparent, using its
 * own colours (colour RAM 256 on) for marks drawn over the picture.
 * Register values follow the VDP2 User's Manual. */

#include "saturn_hw.h"
#include "vdp2.h"

/* far more polls than a frame takes */
#define VBLANK_POLLS_MAX 1000000UL

/**
 * Wait for the start of the next vertical blank. While the display is off,
 * the hardware keeps the VBLANK flag set: then this gives up after a while
 * instead of waiting forever.
 */
void Vdp2_VBlankWait(void)
{
	uint32_t polls;

	for (polls = 0; polls < VBLANK_POLLS_MAX && (VDP2_TVSTAT & VDP2_TVSTAT_VBLANK); polls++) {}
	for (polls = 0; polls < VBLANK_POLLS_MAX && !(VDP2_TVSTAT & VDP2_TVSTAT_VBLANK); polls++) {}
}

/**
 * Set VDP2 up: NBG0 as the 8 bpp bitmap and NBG1 as the overlay, both cleared.
 */
void Vdp2_BitmapInit(void)
{
	int i;

	/* display off while configuring, from a vertical blank (waiting for
	 * one once it is off would wait in vain) */
	Vdp2_VBlankWait();
	VDP2_TVMD = 0x0000;

	/* Everything else as at power on: a boot menu (SAROO's, a cartridge's)
	 * leaves its colour offset, colour calculation, windows, line scroll
	 * and sprite priorities set, any of which can hide the layers. The
	 * status and counter registers (0x004-0x00C) are read only. */
	VDP2_REG(0x002) = 0;
	for (i = 0x00E; i <= 0x11E; i += 2) VDP2_REG(i) = 0;

	/* colour RAM mode 0, VRAM banks A and B partitioned: A0 the NBG0
	 * bitmap, A1 the map's character patterns, B0 the NBG1 overlay and the
	 * map's pattern name tables, B1 free (the back screen colour lives in
	 * its last word). */
	VDP2_RAMCTL = 0x0300;

	/* The NBG0 256-colour bitmap needs 2 VRAM reads a cycle, the NBG1
	 * 16-colour one 1; the map planes read their pattern names (NBG2 in T0,
	 * NBG3 in T1) and their 256-colour characters (2 reads each). The rest
	 * of the slots go to the CPU (Table 3.5). */
	VDP2_CYCA0L = 0x44EE;
	VDP2_CYCA0U = 0xEEEE;
	VDP2_CYCA1L = 0x6677;
	VDP2_CYCA1U = 0xEEEE;
	VDP2_CYCB0L = 0x235E;
	VDP2_CYCB0U = 0xEEEE;
	VDP2_CYCB1L = 0xEEEE;
	VDP2_CYCB1U = 0xEEEE;

	/* N0CHCN = 256 colours */
	VDP2_CHCTLA = (1 << 4)
	            /* N0BMSZ = 512x256 */
	            | (0 << 2)
	            /* N0BMEN = bitmap */
	            | (1 << 1)
	            /* N1CHCN = 16 colours */
	            | (0 << 12)
	            /* N1BMSZ = 512x256 */
	            | (0 << 10)
	            /* N1BMEN = bitmap */
	            | (1 << 9);
	/* palette 0 for both */
	VDP2_BMPNA = 0;
	/* NBG1 there, NBG0 at 0 */
	VDP2_MPOFN = (VDP2_OVERLAY_OFFSET / 0x20000) << 4;
	/* NBG0 colours from 0, NBG1 from 256 */
	VDP2_CRAOFA = 1 << 4;

	VDP2_SCXIN0 = 0; VDP2_SCXDN0 = 0;
	VDP2_SCYIN0 = 0; VDP2_SCYDN0 = 0;
	/* 1.0 = no zoom */
	VDP2_ZMXIN0 = 1; VDP2_ZMXDN0 = 0;
	VDP2_ZMYIN0 = 1; VDP2_ZMYDN0 = 0;

	VDP2_SCXIN1 = 0; VDP2_SCXDN1 = 0;
	VDP2_SCYIN1 = 0; VDP2_SCYDN1 = 0;
	VDP2_ZMXIN1 = 1; VDP2_ZMXDN1 = 0;
	VDP2_ZMYIN1 = 1; VDP2_ZMYDN1 = 0;

	/* NBG1 in front of NBG0 */
	VDP2_PRINA = (7 << 8) | 6;

	/* the VDP1 sprite layer: palette sprites (type 0), all on priority 3,
	 * above the map planes (1, 2) and below NBG0 (6) and NBG1 (7) */
	VDP2_SPCTL = 0;
	VDP2_PRISA = (3 << 8) | 3;
	VDP2_PRISB = (3 << 8) | 3;
	VDP2_PRISC = (3 << 8) | 3;
	VDP2_PRISD = (3 << 8) | 3;

	/* back screen: single colour stored in the last word of VRAM */
	*(volatile uint16_t *)(VDP2_VRAM + 0x7FFFE) = RGB555(0, 0, 0);
	VDP2_BKTAU = (0x7FFFE >> 17) & 7;
	VDP2_BKTAL = (0x7FFFE >> 1) & 0xFFFF;

	/* N0TPON: colour 0 is drawn, not transparent */
	VDP2_BGON = (1 << 8)
	          /* N1ON (its colour 0 is transparent) */
	          | (1 << 1)
	          /* N0ON */
	          | (1 << 0);

	/* clear the bitmaps */
	for (i = 0; i < VDP2_BITMAP_PITCH * 256; i += 4) *(volatile uint32_t *)(VDP2_VRAM + i) = 0;
	for (i = 0; i < VDP2_BITMAP_PITCH * 256 / 2; i += 4) *(volatile uint32_t *)(VDP2_VRAM + VDP2_OVERLAY_OFFSET + i) = 0;

	/* the overlay's colours */
	Vdp2_SetColor(256 + VDP2_OVERLAY_LIGHT, RGB555(31, 27, 6));
	Vdp2_SetColor(256 + VDP2_OVERLAY_DARK, RGB555(0, 0, 0));
}

/* What Vdp2_OverlayShow() and Vdp2_MapShow() keep in BGON: the register is
 * write-only, so its whole value is tracked here. */
static int s_overlayShow = 1; /*!< NBG1 drawn */
static int s_mapShow = 0;     /*!< NBG0's colour 0 transparent (map behind) */

/**
 * Write BGON from the overlay and map flags.
 */
static void Vdp2_BgonUpdate(void)
{
	VDP2_BGON = (s_mapShow ? 0 : (1 << 8))      /* N0TPON */
	          | (s_overlayShow ? (1 << 1) : 0)  /* N1ON */
	          | (1 << 0);                       /* N0ON */
}

/**
 * Show the overlay in front of the bitmap, or not.
 *
 * @param show Whether to show it.
 */
void Vdp2_OverlayShow(int show)
{
	if (s_overlayShow == show) return;
	s_overlayShow = show;
	Vdp2_BgonUpdate();
}

/**
 * Make NBG0's colour 0 transparent so the map planes show through, or opaque
 * so colour 0 draws.
 *
 * @param show Whether the map is shown.
 */
void Vdp2_MapShow(int show)
{
	if (s_mapShow == show) return;
	s_mapShow = show;
	Vdp2_BgonUpdate();
}

/**
 * Set a pixel of the overlay, in front of the bitmap (VDP2_OVERLAY_*).
 *
 * @param x Its column (0 to 511).
 * @param y Its line (0 to 255).
 * @param colour The colour.
 */
void Vdp2_OverlayPixel(int x, int y, int colour)
{
	volatile uint8_t *p;

	if (x < 0 || y < 0 || x >= VDP2_BITMAP_PITCH || y >= 256) return;
	p = (volatile uint8_t *)(VDP2_VRAM + VDP2_OVERLAY_OFFSET) + y * (VDP2_BITMAP_PITCH / 2) + x / 2;
	/* two pixels a byte, the left one in the high nibble */
	if (x & 1) {
		*p = (uint8_t)((*p & 0xF0) | (colour & 0x0F));
	} else {
		*p = (uint8_t)((*p & 0x0F) | ((colour & 0x0F) << 4));
	}
}

/**
 * Turn the display on, 320x224.
 */
void Vdp2_DisplayOn(void)
{
	/* DISP on, border shows the back screen, 320x224 non-interlaced */
	VDP2_TVMD = 0x8000 | 0x0100;
}

/**
 * Set an entry of the colour RAM.
 *
 * @param index The entry (0 to 255 the bitmap, 256 on the overlay).
 * @param rgb555 The colour (RGB555()).
 */
void Vdp2_SetColor(int index, uint16_t rgb555)
{
	((volatile uint16_t *)VDP2_CRAM)[index] = rgb555;
}

/**
 * Scroll the bitmap and the overlay vertically.
 *
 * @param y The first line shown.
 */
void Vdp2_SetScrollY(int y)
{
	VDP2_SCYIN0 = (uint16_t)y;
	VDP2_SCYIN1 = (uint16_t)y;
}
