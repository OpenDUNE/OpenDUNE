/** @file saturn/common/vdp2.c VDP2 set up as an 8bpp bitmap (NBG0) and an overlay.
 *
 * NBG0 is a 512x256 bitmap of 256 colours at the start of VRAM (bank A),
 * shown in a 320x224 non-interlaced display. NBG1, in front of it, is a
 * 512x256 bitmap of 16 colours in bank B, colour 0 transparent, using its
 * own colours (colour RAM 256 on) for marks drawn over the picture.
 * Register values follow the VDP2 User's Manual. */

#include "saturn_hw.h"
#include "vdp2.h"

int g_vdp2DisplayH = 224;

/* far more polls than a frame takes */
#define VBLANK_POLLS_MAX 1000000UL

/**
 * Write the VRAM cycle patterns for the layers shown.
 *
 * NBG0's 256-colour bitmap reads A0 twice (T0, T1); NBG1's 16-colour bitmap
 * reads B1 once (T2); with the map shown, NBG2 and NBG3 read their pattern
 * names from B0 (T0, T1) and their 256-colour characters from A1 (T0-T3).
 *
 * The VDP2 manual (3.3, "Read/Write Access by the CPU") asks, with the banks
 * split, for the CPU slots to be the same in bank 0 and bank 1, with a
 * "no access" slot before them in both, and "no access" in every slot the
 * display does not use. It also turns the slots of a layer switched off in
 * BGON into CPU slots - so with the map hidden, the planes' slots would
 * surround the other layers' reads with CPU slots. The real hardware shows
 * stripes then (Ymir does not model it), so the planes' slots are set to
 * "no access" explicitly while the map is hidden. The CPU gets T6 and T7 in
 * every bank; the bulk writes are made in the vertical blank anyway.
 *
 * @param mapShow Whether NBG2 and NBG3 are shown.
 */
static void Vdp2_CyclesUpdate(int mapShow)
{
	VDP2_CYCA0L = 0x44FF;
	VDP2_CYCA0U = 0xFFEE;
	VDP2_CYCA1L = mapShow ? 0x6677 : 0xFFFF;
	VDP2_CYCA1U = 0xFFEE;
	VDP2_CYCB0L = mapShow ? 0x23FF : 0xFFFF;
	VDP2_CYCB0U = 0xFFEE;
	VDP2_CYCB1L = 0xFF5F;
	VDP2_CYCB1U = 0xFFEE;
}

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

	/* the broadcast standard decides the line count; on PAL the picture
	 * is centred in 256 lines (Vdp2_DisplayOn) */
	g_vdp2DisplayH = (VDP2_TVSTAT & VDP2_TVSTAT_PAL) ? 256 : 224;

	/* Everything else as at power on: a boot menu (SAROO's, a cartridge's)
	 * leaves its colour offset, colour calculation, windows, line scroll
	 * and sprite priorities set, any of which can hide the layers. The
	 * status and counter registers (0x004-0x00C) are read only. */
	VDP2_REG(0x002) = 0;
	for (i = 0x00E; i <= 0x11E; i += 2) VDP2_REG(i) = 0;

	/* colour RAM mode 0, VRAM banks A and B partitioned: A0 the NBG0
	 * bitmap, A1 the map's characters, B0 the map's pattern name tables,
	 * B1 the NBG1 overlay (the back screen colour lives in its last word). */
	VDP2_RAMCTL = 0x0300;

	/* the VRAM access cycles, for the map hidden (see Vdp2_CyclesUpdate) */
	Vdp2_CyclesUpdate(0);

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
	Vdp2_CyclesUpdate(s_mapShow);
	VDP2_BGON = (s_mapShow ? 0 : (1 << 8))      /* N0TPON */
	          | (s_mapShow ? ((1 << 3) | (1 << 2)) : 0)  /* N3ON, N2ON */
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

static volatile int s_mapShowNext = 0; /*!< what Vdp2_MapShow() asked for */

/**
 * Make NBG0's colour 0 transparent so the map planes show through, or opaque
 * so colour 0 draws - from the next Vdp2_LayersVBlank(), so the layers do
 * not switch partway down the picture.
 *
 * @param show Whether the map is shown.
 */
void Vdp2_MapShow(int show)
{
	s_mapShowNext = show;
}

/**
 * The vertical blank: switch the map's layers as Vdp2_MapShow() asked.
 */
void Vdp2_LayersVBlank(void)
{
	if (s_mapShow == s_mapShowNext) return;
	s_mapShow = s_mapShowNext;
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
	/* VRESO = 10b: 256 lines, PAL only */
	VDP2_TVMD = 0x8000 | 0x0100 | ((g_vdp2DisplayH == 256) ? (2 << 4) : 0);
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

/**
 * Scroll the bitmap and the overlay vertically together, as the screen shake
 * moves the whole picture.
 *
 * @param y The first line shown.
 */
void Vdp2_PictureScrollY(int y)
{
	VDP2_SCYIN0 = (uint16_t)(y & 0x7FF);
	VDP2_SCYIN1 = (uint16_t)(y & 0x7FF);
}

/**
 * Set NBG2 and NBG3 up as the map's cell planes, one 32x32-character page
 * per plane (planes A-D make the 64x64-tile map). The planes stay hidden
 * until Vdp2_MapShow().
 */
void Vdp2_MapInit(void)
{
	/* NBG2 and NBG3: 256 colours, 16x16 (2x2 cell) characters */
	VDP2_CHCTLB = (1 << 5) | (1 << 4)   /* N3CHCN, N3CHSZ */
	            | (1 << 1) | (1 << 0);  /* N2CHCN, N2CHSZ */

	/* two-word pattern names */
	VDP2_PNCN2 = 0;
	VDP2_PNCN3 = 0;

	/* one page per plane */
	VDP2_PLSZ = 0;

	/* pattern name tables: NBG2 pages at 0x50000, NBG3 at 0x54000 (pages
	 * 0x1000 apart); the NBG1 overlay bitmap stays at 0x40000. The map
	 * registers hold the low six bits of each page number, MPOFN the top. */
	VDP2_MPOFN = (VDP2_OVERLAY_OFFSET / 0x20000) << 4  /* N1MP = 3 */
	           | (1 << 8)                             /* N2MP = 1 */
	           | (1 << 12);                           /* N3MP = 1 */
	VDP2_MPABN2 = (0x11 << 8) | 0x10;
	VDP2_MPCDN2 = (0x13 << 8) | 0x12;
	VDP2_MPABN3 = (0x15 << 8) | 0x14;
	VDP2_MPCDN3 = (0x17 << 8) | 0x16;

	/* NBG2 under NBG3, both under the sprites (3), NBG0 (6) and NBG1 (7) */
	VDP2_PRINB = (2 << 8) | 1;

	/* the air units' shadows are normal shadows on the map planes: NBG0 and
	 * NBG1 sit above the sprites and are never darkened */
	VDP2_SDCTL = (1 << 3) | (1 << 2); /* N3SDEN, N2SDEN; TPSDSL off */
}

/**
 * Clip NBG2 and NBG3 to a rectangle of the display with window W0, outside
 * which the planes are transparent.
 *
 * @param left The left edge.
 * @param top The top edge.
 * @param right The right edge.
 * @param bottom The bottom edge.
 */
void Vdp2_MapWindow(int left, int top, int right, int bottom)
{
	/* the horizontal window coordinates are in 2-pixel units (the H counter's
	 * low bit is not in the register) */
	VDP2_WPSX0 = (uint16_t)(left * 2);
	VDP2_WPSY0 = (uint16_t)top;
	VDP2_WPEX0 = (uint16_t)(right * 2);
	VDP2_WPEY0 = (uint16_t)bottom;
	/* use W0 for both planes, with the transparent area outside the window:
	 * the planes show inside the viewport and vanish outside it */
	VDP2_WCTLB = (1 << 9) | (1 << 8) | (1 << 1) | (1 << 0);
}

/**
 * Write the pattern names of one map tile: its ground character to NBG2 and
 * its overlay character to NBG3.
 *
 * @param packed The tile (6-bit x and y).
 * @param groundChar The character number of the ground.
 * @param overlayChar The character number of the overlay.
 */
void Vdp2_MapSetTile(int packed, int groundChar, int overlayChar)
{
	int x = packed & 0x3F;
	int y = (packed >> 6) & 0x3F;
	/* the 2x2 pages: A (top-left), B (top-right), C (bottom-left),
	 * D (bottom-right), each 0x1000 bytes and 32x32 characters */
	int page = ((y & 0x20) ? 2 : 0) | ((x & 0x20) ? 1 : 0);
	int word = ((y & 0x1F) * 32 + (x & 0x1F)) * 2;
	volatile uint16_t *ground = (volatile uint16_t *)(VDP2_VRAM + VDP2_MAP_NAMES_NBG2 + page * 0x1000) + word;
	volatile uint16_t *overlay = (volatile uint16_t *)(VDP2_VRAM + VDP2_MAP_NAMES_NBG3 + page * 0x1000) + word;

	/* a two-word pattern name stores its most significant word (palette,
	 * flip) at the lower address and the character number in the word after */
	ground[0] = 0;                     /* MSW: palette 0, no flip */
	ground[1] = (uint16_t)groundChar;  /* LSW: character number */
	overlay[0] = 0;
	overlay[1] = (uint16_t)overlayChar;
}

/**
 * Scroll the map planes so the given map pixel is at the top-left of the
 * screen.
 *
 * @param x The horizontal scroll.
 * @param y The vertical scroll.
 */
void Vdp2_MapScroll(int x, int y)
{
	VDP2_SCXIN2 = (uint16_t)(x & 0x7FF);
	VDP2_SCYIN2 = (uint16_t)(y & 0x7FF);
	VDP2_SCXIN3 = (uint16_t)(x & 0x7FF);
	VDP2_SCYIN3 = (uint16_t)(y & 0x7FF);
}
