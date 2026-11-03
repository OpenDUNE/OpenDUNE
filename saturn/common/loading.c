/** @file saturn/common/loading.c A loading indicator while the game is busy.
 *
 * Shown from the VBlank interrupt while the picture stands still (nothing
 * drawn for a quarter of a second) and either the CD has been read most of
 * the last half second (loads that let the game run between files, like a
 * house's voices) or the game hasn't run the video tick at all; drawn and
 * taken away only here. Moving pictures reading as they go (the intro)
 * don't get it. */

#include "console.h"
#include "loading.h"
#include "saturn_timer.h"
#include "vdp2.h"

enum {
	STALE_FRAMES = 15, /*!< frames without the video tick (a quarter second) */
	STILL_FRAMES = 15, /*!< frames without a change on screen */
	BUSY_FRAMES = 12,  /*!< of the last 32 with the CD being read */
	DOT_FRAMES = 15,   /*!< frames per step of the dots */
	LENGTH = 10,       /*!< "LOADING..." */
	/* right-aligned in the border under the 320x200 picture (lines 212-223) */
	TEXT_X = VDP2_DISPLAY_W - 8 - LENGTH * 8,
	TEXT_BOTTOM = 10 /*!< lines from the display's bottom */
};

static volatile uint32_t s_alive = 0;   /*!< frame of the last video tick, 0 before the first */
static volatile uint32_t s_changed = 0; /*!< frame the picture last changed */
static volatile int s_reading = 0;      /*!< the CD is being read now */
static uint32_t s_readFrames = 0;       /*!< a bit a frame, the latest lowest: read then */
static int s_shown = -1;                /*!< dots shown, -1 when hidden */
static volatile int s_enabled = 1;      /*!< off in the cutscenes */
static uint32_t s_shownSince;

/**
 * Draw text in the indicator's place on the overlay.
 *
 * @param text The text (10 characters).
 * @param colour The overlay colour (VDP2_OVERLAY_*).
 */
static void Loading_DrawText(const char *text, int colour)
{
	int i, x, y;

	for (i = 0; text[i] != '\0'; i++) {
		const uint8_t *glyph = Console_Glyph(text[i]);
		for (y = 0; y < 8; y++) {
			for (x = 0; x < 8; x++) {
				Vdp2_OverlayPixel(TEXT_X + i * 8 + x, g_vdp2DisplayH - TEXT_BOTTOM + y, ((glyph[y] >> x) & 1) ? colour : VDP2_OVERLAY_CLEAR);
			}
		}
	}
}

/**
 * Count the bits set in a value.
 *
 * @param v The value.
 * @return How many bits are set.
 */
static int Loading_Bits(uint32_t v)
{
	int n = 0;
	for (; v != 0; v &= v - 1) n++;
	return n;
}

/**
 * The game is updating the screen. Call it from the video tick.
 */
void Loading_Alive(void)
{
	s_alive = SaturnTimer_Frames();
}

/**
 * Something changed on screen. Call it when the picture is updated.
 */
void Loading_ScreenChanged(void)
{
	s_changed = SaturnTimer_Frames();
}

/**
 * Allow the indicator (1) or not (0): the cutscenes play their own pictures.
 *
 * @param enabled 1 to allow it, 0 not to.
 */
void Loading_Enable(int enabled)
{
	s_enabled = enabled;
}

/**
 * The CD is being read (1) or not (0).
 *
 * @param reading 1 while reading, 0 after.
 */
void Loading_Disc(int reading)
{
	s_reading = reading;
}

/**
 * From the VBlank interrupt: shows the indicator when the game has been
 * busy long enough.
 */
void Loading_VBlank(void)
{
	static const char *const texts[4] = { "LOADING   ", "LOADING.  ", "LOADING.. ", "LOADING..." };
	uint32_t frames = SaturnTimer_Frames();
	int busy, dots;

	s_readFrames = (s_readFrames << 1) | (s_reading ? 1 : 0);
	/* the game isn't showing anything yet */
	if (s_alive == 0) return;

	busy = s_enabled && (frames - s_alive >= STALE_FRAMES ||
		(Loading_Bits(s_readFrames) >= BUSY_FRAMES && frames - s_changed >= STILL_FRAMES));
	if (!busy) {
		if (s_shown >= 0) {
			Loading_DrawText("          ", VDP2_OVERLAY_CLEAR);
			s_shown = -1;
		}
		return;
	}

	if (s_shown < 0) s_shownSince = frames;
	dots = (int)((frames - s_shownSince) / DOT_FRAMES) % 4;
	if (dots == s_shown) return;
	Loading_DrawText(texts[dots], VDP2_OVERLAY_LIGHT);
	s_shown = dots;
}
