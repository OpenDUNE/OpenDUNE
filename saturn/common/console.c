/** @file saturn/common/console.c Text console on the VDP2 bitmap. */

#include <stdint.h>
#include <string.h>
#include "console.h"
#include "font8x8.h"
#include "saturn_hw.h"
#include "vdp2.h"

enum {
	COLUMNS = VDP2_DISPLAY_W / 8,
	ROWS = VDP2_CONSOLE_H / 8,
	COLOR_BACK = 0,
	COLOR_TEXT = 15
};

static enum { CONSOLE_OFF, CONSOLE_SHOWN, CONSOLE_RELEASED } s_state = CONSOLE_OFF;

static char s_text[ROWS][COLUMNS];
static int s_row, s_column;

char g_consoleLog[CONSOLE_LOG_SIZE]; /*!< The last CONSOLE_LOG_SIZE bytes written, for reading out of an emulator's memory dump. */
uint32_t g_consoleLogWritten;        /*!< How many bytes were written in all. */

/**
 * Draw one character of the console on the bitmap.
 *
 * @param row Its row.
 * @param column Its column.
 */
static void Console_DrawChar(int row, int column)
{
	const uint8_t *glyph;
	volatile uint8_t *dst = VDP2_BITMAP + row * 8 * VDP2_BITMAP_PITCH + column * 8;
	unsigned char c = (unsigned char)s_text[row][column];
	int x, y;

	if (c < 32 || c > 126) c = ' ';
	glyph = s_font8x8[c - 32];
	for (y = 0; y < 8; y++, dst += VDP2_BITMAP_PITCH) {
		for (x = 0; x < 8; x++) dst[x] = ((glyph[y] >> x) & 1) ? COLOR_TEXT : COLOR_BACK;
	}
}

/**
 * Draw the whole console on the bitmap.
 */
static void Console_DrawAll(void)
{
	int row, column;
	for (row = 0; row < ROWS; row++) {
		for (column = 0; column < COLUMNS; column++) Console_DrawChar(row, column);
	}
}

/**
 * Go to the next line, scrolling the console up at the bottom.
 */
static void Console_NewLine(void)
{
	s_column = 0;
	if (++s_row < ROWS) return;

	memmove(s_text[0], s_text[1], sizeof(s_text) - sizeof(s_text[0]));
	memset(s_text[ROWS - 1], ' ', COLUMNS);
	s_row = ROWS - 1;
	if (s_state == CONSOLE_SHOWN) Console_DrawAll();
}

/**
 * The console's 8x8 glyph of a character: 8 rows, bit 0 the leftmost pixel.
 *
 * @param c The character (others than ASCII 32 to 126 show as a space).
 * @return The glyph.
 */
const uint8_t *Console_Glyph(char c)
{
	unsigned char u = (unsigned char)c;
	if (u < 32 || u > 126) u = ' ';
	return s_font8x8[u - 32];
}

/**
 * Show the console on the screen (fatal errors, crashes), taking the screen
 * from the game.
 */
void Console_Show(void)
{
	if (s_state == CONSOLE_OFF) memset(s_text, ' ', sizeof(s_text));
	s_state = CONSOLE_SHOWN;

	Vdp2_BitmapInit();
	/* what the game draws on the overlay (the loading indicator, the
	 * reticle) would go on over the console */
	Vdp2_OverlayShow(0);
	Vdp2_SetColor(COLOR_BACK, RGB555(0, 0, 8));
	Vdp2_SetColor(COLOR_TEXT, RGB555(31, 31, 31));
	Console_DrawAll();
	Vdp2_DisplayOn();
}

/**
 * Hand the screen to the game: from now on text is only recorded.
 */
void Console_Release(void)
{
	if (s_state == CONSOLE_OFF) memset(s_text, ' ', sizeof(s_text));
	s_state = CONSOLE_RELEASED;
}

/**
 * Add text to the console and its log; shows the console on the first write
 * unless it has been released.
 *
 * @param text The text.
 * @param length Its length in bytes.
 */
void Console_Write(const char *text, int length)
{
	int i;

	if (s_state == CONSOLE_OFF) Console_Show();

	for (i = 0; i < length; i++) g_consoleLog[(g_consoleLogWritten + (uint32_t)i) % CONSOLE_LOG_SIZE] = text[i];
	g_consoleLogWritten += (uint32_t)length;

	for (i = 0; i < length; i++) {
		char c = text[i];
		if (c == '\n') {
			Console_NewLine();
			continue;
		}
		if (c == '\r') continue;
		if (s_column == COLUMNS) Console_NewLine();
		s_text[s_row][s_column] = c;
		if (s_state == CONSOLE_SHOWN) Console_DrawChar(s_row, s_column);
		s_column++;
	}
}
