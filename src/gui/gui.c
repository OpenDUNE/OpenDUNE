/** @file src/gui/gui.c Generic GUI definitions. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "types.h"
#include "../os/common.h"
#include "../os/math.h"
#include "../os/sleep.h"
#include "../os/strings.h"
#include "../os/endian.h"
#include "../os/error.h"

#include "gui.h"

#include "font.h"
#include "mentat.h"
#include "widget.h"
#include "../animation.h"
#include "../audio/driver.h"
#include "../audio/sound.h"
#include "../codec/format80.h"
#include "../config.h"
#include "../explosion.h"
#include "../file.h"
#include "../gfx.h"
#include "../house.h"
#include "../ini.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../load.h"
#include "../map.h"
#include "../opendune.h"
#include "../pool/pool.h"
#include "../pool/house.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../sprites.h"
#include "../string.h"
#include "../structure.h"
#include "../table/strings.h"
#include "../tile.h"
#include "../timer.h"
#include "../tools.h"
#include "../unit.h"
#include "../video/video.h"
#include "../wsa.h"

MSVC_PACKED_BEGIN
typedef struct ClippingArea {
	/* 0000(2)   */ PACK uint16 left;                       /*!< ?? */
	/* 0002(2)   */ PACK uint16 top;                        /*!< ?? */
	/* 0004(2)   */ PACK uint16 right;                      /*!< ?? */
	/* 0006(2)   */ PACK uint16 bottom;                     /*!< ?? */
} GCC_PACKED ClippingArea;
MSVC_PACKED_END
assert_compile(sizeof(ClippingArea) == 0x08);

MSVC_PACKED_BEGIN
typedef struct StrategicMapData {
	/* 0000(2)   */ PACK int16 index;      /*!< ?? */
	/* 0002(2)   */ PACK int16 arrow;      /*!< ?? */
	/* 0004(2)   */ PACK int16 offsetX;    /*!< ?? */
	/* 0006(2)   */ PACK int16 offsetY;    /*!< ?? */
} GCC_PACKED StrategicMapData;
MSVC_PACKED_END
assert_compile(sizeof(StrategicMapData) == 0x8);

/** Coupling between score and rank name. */
typedef struct RankScore {
	uint16 rankString; /*!< StringID of the name of the rank. */
	uint16 score;      /*!< Score needed to obtain the rank. */
} RankScore;

/** Mapping of scores to rank names. */
static const RankScore _rankScores[] = {
	{271,   25}, /* "Sand Flea" */
	{272,   50}, /* "Sand Snake" */
	{273,  100}, /* "Desert Mongoose" */
	{274,  150}, /* "Sand Warrior" */
	{275,  200}, /* "Dune Trooper" */
	{276,  300}, /* "Squad Leader" */
	{277,  400}, /* "Outpost Commander" */
	{278,  500}, /* "Base Commander" */
	{279,  700}, /* "Warlord" */
	{280, 1000}, /* "Chief Warlord" */
	{281, 1400}, /* "Ruler of Arrakis" */
	{282, 1800}  /* "Emperor" */
};

static uint8 g_colours[16];		/*!< Colors used for drawing chars */
static ClippingArea g_clipping = { 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1 };
uint8 *g_palette_998A = NULL;
uint8 g_remap[256];
FactoryWindowItem g_factoryWindowItems[25];
uint16 g_factoryWindowOrdered = 0;
uint16 g_factoryWindowBase = 0;
uint16 g_factoryWindowTotal = 0;
uint16 g_factoryWindowSelected = 0;
uint16 g_factoryWindowUpgradeCost = 0;
bool g_factoryWindowConstructionYard = false;
FactoryResult g_factoryWindowResult = FACTORY_RESUME;
bool g_factoryWindowStarport = false;
static uint8 s_factoryWindowGraymapTbl[256];
static Widget s_factoryWindowWidgets[13];
static uint8 s_factoryWindowWsaBuffer[64000];
static uint8 *s_palette1_houseColour;
static uint32 s_tickCreditsAnimation = 0;                   /*!< Next tick when credits animation needs an update. */
static uint32 s_arrowAnimationTimeout = 0;                  /*!< Timeout value for the next palette change in the animation of the arrows. */
static uint16 s_arrowAnimationState = 0;                    /*!< State of the arrow animation. @see _arrowAnimationTimeout */
static uint16 s_temporaryColourBorderSchema[5][4];          /*!< Temporary storage for the #s_colourBorderSchema. */
uint16 g_productionStringID;                                /*!< Descriptive text of activity of the active structure. */
bool g_textDisplayNeedsUpdate;                              /*!< If set, text display needs to be updated. */
uint32 g_strategicRegionBits;                               /*!< Region bits at the map. */
static uint32 s_ticksPlayed;
bool g_doQuitHOF;
static uint8 s_strategicMapArrowColors[24];
static bool s_strategicMapFastForward;

static uint16 s_mouseSpriteLeft;
static uint16 s_mouseSpriteTop;
static uint16 s_mouseSpriteWidth;
static uint16 s_mouseSpriteHeight;

uint16 g_mouseSpriteHotspotX;
uint16 g_mouseSpriteHotspotY;
uint16 g_mouseWidth;
uint16 g_mouseHeight;

uint16 g_cursorSpriteID;
uint16 g_cursorDefaultSpriteID;

bool g_structureHighHealth;                                 /*!< If false, the repair button will flash. */
bool g_var_37B8;

uint16 g_viewportMessageCounter;                            /*!< Countdown counter for displaying #g_viewportMessageText, bit 0 means 'display the text'. */
const char *g_viewportMessageText;                          /*!< If not \c NULL, message text displayed in the viewport. */

uint16 g_viewportPosition;                                  /*!< Top-left tile of the viewport. */
uint16 g_minimapPosition;                                   /*!< Top-left tile of the border in the minimap. */
uint16 g_selectionRectanglePosition;                        /*!< Position of the structure selection rectangle. */
uint16 g_selectionPosition;                                 /*!< Current selection position (packed). */
uint16 g_selectionWidth;                                    /*!< Width of the selection. */
uint16 g_selectionHeight;                                   /*!< Height of the selection. */
int16  g_selectionState = 1;                                /*!< State of the selection (\c 1 is valid, \c 0 is not valid, \c <0 valid but missing some slabs. */


/*!< Colours used for the border of widgets. */
static uint16 s_colourBorderSchema[5][4] = {
	{ 26,  29,  29,  29},
	{ 20,  26,  16,  20},
	{ 20,  16,  26,  20},
	{233, 235, 232, 233},
	{233, 232, 235, 233}
};

/** Colours used for the border of widgets in the hall of fame. */
static const uint16 s_HOF_ColourBorderSchema[5][4] = {
	{226, 228, 228, 228},
	{116, 226, 105, 116},
	{116, 105, 226, 116},
	{233, 235, 232, 233},
	{233, 232, 235, 233}
};

assert_compile(lengthof(s_colourBorderSchema) == lengthof(s_temporaryColourBorderSchema));
assert_compile(lengthof(s_colourBorderSchema) == lengthof(s_HOF_ColourBorderSchema));

/**
 * Draw a wired rectangle.
 * @param left The left position of the rectangle.
 * @param top The top position of the rectangle.
 * @param right The right position of the rectangle.
 * @param bottom The bottom position of the rectangle.
 * @param colour The colour of the rectangle.
 */
void GUI_DrawWiredRectangle(uint16 left, uint16 top, uint16 right, uint16 bottom, uint8 colour)
{
	GUI_DrawLine(left, top, right, top, colour);
	GUI_DrawLine(left, bottom, right, bottom, colour);
	GUI_DrawLine(left, top, left, bottom, colour);
	GUI_DrawLine(right, top, right, bottom, colour);

	GFX_Screen_SetDirty(SCREEN_ACTIVE, left, top, right+1, bottom+1);
}

/**
 * Draw a filled rectangle.
 * @param left The left position of the rectangle.
 * @param top The top position of the rectangle.
 * @param right The right position of the rectangle.
 * @param bottom The bottom position of the rectangle.
 * @param colour The colour of the rectangle.
 */
void GUI_DrawFilledRectangle(int16 left, int16 top, int16 right, int16 bottom, uint8 colour)
{
	uint16 x;
	uint16 y;
	uint16 height;
	uint16 width;

	uint8 *screen = GFX_Screen_GetActive();

	if (left >= SCREEN_WIDTH) return;
	if (left < 0) left = 0;

	if (top >= SCREEN_HEIGHT) return;
	if (top < 0) top = 0;

	if (right >= SCREEN_WIDTH) right = SCREEN_WIDTH - 1;
	if (right < 0) right = 0;

	if (bottom >= SCREEN_HEIGHT) bottom = SCREEN_HEIGHT - 1;
	if (bottom < 0) bottom = 0;

	if (left > right) return;
	if (top > bottom) return;

	screen += left + top * SCREEN_WIDTH;
	width = right - left + 1;
	height = bottom - top + 1;
	for (y = 0; y < height; y++) {
		/* TODO : use memset() */
		for (x = 0; x < width; x++) {
			*screen++ = colour;
		}
		screen += SCREEN_WIDTH - width;
	}

	GFX_Screen_SetDirty(SCREEN_ACTIVE, left, top, right + 1, bottom + 1);
}

/**
 * Display a text.
 * @param str The text to display. If \c NULL, update the text display (scroll text, and/or remove it on time out).
 * @param importance Importance of the new text. Value \c -1 means remove all text lines, \c -2 means drop all texts in buffer but not yet displayed.
 *                   Otherwise, it is the importance of the message (if supplied). Higher numbers mean displayed sooner.
 * @param ... The args for the text.
 */
void GUI_DisplayText(const char *str, int importance, ...)
{
	char buffer[80];                 /* Formatting buffer of new message. */
	static uint32 displayTimer = 0;  /* Timeout value for next update of the display. */
	static uint16 textOffset;        /* Vertical position of text being scrolled. */
	static bool scrollInProgress;    /* Text is being scrolled (and partly visible to the user). */

	static char displayLine1[80];    /* Current line being displayed. */
	static char displayLine2[80];    /* Next line (if scrollInProgress, it is scrolled up). */
	static char displayLine3[80];    /* Next message to display (after scrolling next line has finished). */
	static int16 line1Importance;    /* Importance of the displayed line of text. */
	static int16 line2Importance;    /* Importance of the next line of text. */
	static int16 line3Importance;    /* Importance of the next message. */
	static uint8 fgColour1;          /* Foreground colour current line. */
	static uint8 fgColour2;          /* Foreground colour next line. */
	static uint8 fgColour3;          /* Foreground colour next message. */

	buffer[0] = '\0';

	if (str != NULL) {
		va_list ap;

		va_start(ap, importance);
		vsnprintf(buffer, sizeof(buffer), str, ap);
		va_end(ap);
	}

	if (importance == -1) { /* Remove all displayed lines. */
		line1Importance = -1;
		line2Importance = -1;
		line3Importance = -1;

		displayLine1[0] = '\0';
		displayLine2[0] = '\0';
		displayLine3[0] = '\0';

		scrollInProgress = false;
		displayTimer = 0;
		return;
	}

	if (importance == -2) { /* Remove next line and next message. */
		if (!scrollInProgress) {
			line2Importance = -1;
			displayLine2[0] = '\0';
		}
		line3Importance = -1;
		displayLine3[0] = '\0';
	}

	if (scrollInProgress) {
		uint16 oldWidgetId;
		uint16 height;

		if (buffer[0] != '\0') {
			if (strcasecmp(buffer, displayLine2) != 0 && importance >= line3Importance) {
				strncpy(displayLine3, buffer, sizeof(displayLine3));
				line3Importance = importance;
			}
		}
		if (displayTimer > g_timerGUI) return;

		oldWidgetId = Widget_SetCurrentWidget(7);

		if (g_textDisplayNeedsUpdate) {
			Screen oldScreenID = GFX_Screen_SetActive(SCREEN_1);

			GUI_DrawFilledRectangle(0, 0, SCREEN_WIDTH - 1, 23, g_curWidgetFGColourNormal);

			GUI_DrawText_Wrapper(displayLine2, g_curWidgetXBase << 3,  2, fgColour2, 0, 0x012);
			GUI_DrawText_Wrapper(displayLine1, g_curWidgetXBase << 3, 13, fgColour1, 0, 0x012);

			g_textDisplayNeedsUpdate = false;

			GFX_Screen_SetActive(oldScreenID);
		}

		GUI_Mouse_Hide_InWidget(7);

		if (textOffset + g_curWidgetHeight > 24) {
			height = 24 - textOffset;
		} else {
			height = g_curWidgetHeight;
		}

		GUI_Screen_Copy(g_curWidgetXBase, textOffset, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, height, SCREEN_1, SCREEN_0);
		GUI_Mouse_Show_InWidget();

		Widget_SetCurrentWidget(oldWidgetId);

		if (textOffset != 0) {
			if (line3Importance <= line2Importance) {
				displayTimer = g_timerGUI + 1;
			}
			textOffset--;
			return;
		}

		/* Finished scrolling, move line 2 to line 1. */
		strncpy(displayLine1, displayLine2, sizeof(displayLine1));
		fgColour1 = fgColour2;
		line1Importance = (line2Importance != 0) ? line2Importance - 1 : 0;

		/* And move line 3 to line 2. */
		strncpy(displayLine2, displayLine3, sizeof(displayLine2));
		line2Importance = line3Importance;
		fgColour2 = fgColour3;
		displayLine3[0] = '\0';

		line3Importance = -1;
		g_textDisplayNeedsUpdate = true;
		displayTimer = g_timerGUI + (line2Importance <= line1Importance ? 900 : 1);
		scrollInProgress = false;
		return;
	}

	if (buffer[0] != '\0') {
		/* If new line arrived, different from every line that is in the display buffers, and more important than existing messages,
		 * insert it at the right place.
		 */
		if (strcasecmp(buffer, displayLine1) != 0 && strcasecmp(buffer, displayLine2) != 0 && strcasecmp(buffer, displayLine3) != 0) {
			if (importance >= line2Importance) {
				/* Move line 2 to line 2 to make room for the new line. */
				strncpy(displayLine3, displayLine2, sizeof(displayLine3));
				fgColour3 = fgColour2;
				line3Importance = line2Importance;
				/* Copy new line to line 2. */
				strncpy(displayLine2, buffer, sizeof(displayLine2));
				fgColour2 = 12;
				line2Importance = importance;

			} else if (importance >= line3Importance) {
				/* Copy new line to line 3. */
				strncpy(displayLine3, buffer, sizeof(displayLine3));
				line3Importance = importance;
				fgColour3 = 12;
			}
		}
	} else {
		if (displayLine1[0] == '\0' && displayLine2[0] == '\0') return;
	}

	if (line2Importance <= line1Importance && displayTimer >= g_timerGUI) return;

	scrollInProgress = true;
	textOffset = 10;
	displayTimer = 0;
}

/**
 * Draw a char on the screen.
 *
 * @param c The char to draw.
 * @param x The most left position where to draw the string.
 * @param y The most top position where to draw the string.
 */
static void GUI_DrawChar(unsigned char c, uint16 x, uint16 y)
{
	uint8 *screen = GFX_Screen_GetActive();

	FontChar *fc;

	uint16 remainingWidth;
	uint8 i;
	uint8 j;

	if (g_fontCurrent == NULL) return;

	fc = &g_fontCurrent->chars[c];
	if (fc->data == NULL) return;

	if (x >= SCREEN_WIDTH || (x + fc->width) > SCREEN_WIDTH) return;
	if (y >= SCREEN_HEIGHT || (y + g_fontCurrent->height) > SCREEN_HEIGHT) return;

	GFX_Screen_SetDirty(SCREEN_ACTIVE, x, y, x + fc->width, y + g_fontCurrent->height);
	x += y * SCREEN_WIDTH;
	remainingWidth = SCREEN_WIDTH - fc->width;

	if (g_colours[0] != 0) {
		for (j = 0; j < fc->unusedLines; j++) {
			for (i = 0; i < fc->width; i++) screen[x++] = g_colours[0];
			x += remainingWidth;
		}
	} else {
		x += fc->unusedLines * SCREEN_WIDTH;
	}

	if (fc->usedLines == 0) return;

	for (j = 0; j < fc->usedLines; j++) {
		for (i = 0; i < fc->width; i++) {
			uint8 data = fc->data[j * fc->width + i];

			if (g_colours[data & 0xF] != 0) screen[x] = g_colours[data & 0xF];
			x++;
		}
		x += remainingWidth;
	}

	if (g_colours[0] == 0) return;

	for (j = fc->unusedLines + fc->usedLines; j < g_fontCurrent->height; j++) {
		for (i = 0; i < fc->width; i++) screen[x++] = g_colours[0];
		x += remainingWidth;
	}
}

/**
 * Draw a string to the screen.
 *
 * @param string The string to draw.
 * @param left The most left position where to draw the string.
 * @param top The most top position where to draw the string.
 * @param fgColour The foreground colour of the text.
 * @param bgColour The background colour of the text.
 */
void GUI_DrawText(const char *string, int16 left, int16 top, uint8 fgColour, uint8 bgColour)
{
	uint8 colours[2];
	uint16 x;
	uint16 y;
	const char *s;

	if (g_fontCurrent == NULL) return;

	if (left < 0) left = 0;
	if (top  < 0) top  = 0;
	if (left > SCREEN_WIDTH) return;
	if (top  > SCREEN_HEIGHT) return;

	colours[0] = bgColour;
	colours[1] = fgColour;

	GUI_InitColors(colours, 0, 1);

	s = string;
	x = left;
	y = top;
	while (*s != '\0') {
		uint16 width;

		if (*s == '\n' || *s == '\r') {
			x = left;
			y += g_fontCurrent->height;

			while (*s == '\n' || *s == '\r') s++;
		}

		width = Font_GetCharWidth(*s);

		if (x + width > SCREEN_WIDTH) {
			x = left;
			y += g_fontCurrent->height;
		}
		if (y > SCREEN_HEIGHT) break;

		GUI_DrawChar(*s, x, y);

		x += width;
		s++;
	}
}

/**
 * Draw a string to the screen, and so some magic.
 *
 * @param string The string to draw.
 * @param left The most left position where to draw the string.
 * @param top The most top position where to draw the string.
 * @param fgColour The foreground colour of the text.
 * @param bgColour The background colour of the text.
 * @param flags The flags of the string.
 *
 * flags :
 * 0x0001 : font 6p
 * 0x0002 : font 8p
 * 0x0010 : style ?
 * 0x0020 : style ?
 * 0x0030 : style ?
 * 0x0040 : style ?
 * 0x0100 : align center
 * 0x0200 : align right
 */
void GUI_DrawText_Wrapper(const char *string, int16 left, int16 top, uint8 fgColour, uint8 bgColour, int flags, ...)
{
	char textBuffer[240];
	static uint16 displayedarg12low = -1;
	static uint16 displayedarg2mid  = -1;

	uint8 arg12low = flags & 0x0F;	/* font : 1 => 6p, 2 => 8p */
	uint8 arg2mid  = flags & 0xF0;	/* style */

	if ((arg12low != displayedarg12low && arg12low != 0) || string == NULL) {
		switch (arg12low) {
			case 1:  Font_Select(g_fontNew6p); break;
			case 2:  Font_Select(g_fontNew8p); break;
			default: Font_Select(g_fontNew8p); break;
		}

		displayedarg12low = arg12low;
	}

	if ((arg2mid != displayedarg2mid && arg2mid != 0) || string == NULL) {
		uint8 colours[16];
		memset(colours, 0, sizeof(colours));

		switch (arg2mid) {
			case 0x0010:
				colours[2] = 0;
				colours[3] = 0;
				g_fontCharOffset = -2;
				break;

			case 0x0020:
				colours[2] = 12;
				colours[3] = 0;
				g_fontCharOffset = -1;
				break;

			case 0x0030:
				colours[2] = 12;
				colours[3] = 12;
				g_fontCharOffset = -1;
				break;

			case 0x0040:
				colours[2] = 232;
				colours[3] = 0;
				g_fontCharOffset = -1;
				break;
		}

		colours[0] = bgColour;
		colours[1] = fgColour;
		colours[4] = 6;

		GUI_InitColors(colours, 0, lengthof(colours) - 1);

		displayedarg2mid = arg2mid;
	}

	if (string == NULL) return;

	{
		va_list ap;

		va_start(ap, flags);
		vsnprintf(textBuffer, sizeof(textBuffer), string, ap);
		va_end(ap);
	}

	switch (flags & 0x0F00) {
		case 0x100:
			left -= Font_GetStringWidth(textBuffer) / 2;
			break;

		case 0x200:
			left -= Font_GetStringWidth(textBuffer);
			break;
	}

	GUI_DrawText(textBuffer, left, top, fgColour, bgColour);
}

/**
 * Shift the given colour toward the reference color.
 * Increment(or decrement) each component (R, G, B) until
 * they equal thoses of the reference color.
 *
 * @param palette The palette to work on.
 * @param colour The colour to modify.
 * @param reference The colour to use as reference.
 * @return true if the colour now equals the reference.
 */
static bool GUI_Palette_ShiftColour(uint8 *palette, uint16 colour, uint16 reference)
{
	bool ret = false;
	uint16 i;

	colour *= 3;
	reference *= 3;

	for (i = 0; i < 3; i++) {
		if (palette[reference] != palette[colour]) {
			ret = true;
			palette[colour] += (palette[colour] > palette[reference]) ? -1 : 1;
		}
		colour++;
		reference++;
	}

	return ret;
}

/**
 * Animate the palette. Only works for some colours or something
 */
void GUI_PaletteAnimate(void)
{
	static uint32 timerAnimation = 0;
	static uint32 timerSelection = 0;
	static uint32 timerToggle = 0;
	bool shouldSetPalette = false;

	if (timerAnimation < g_timerGUI) {
		/* make the repair button flash */
		static bool animationToggle = false;

		uint16 colour;

		colour = (!g_structureHighHealth && animationToggle) ? 6 : 15;
		if (memcmp(g_palette1 + 3 * 239, g_palette1 + 3 * colour, 3) != 0) {
			memcpy(g_palette1 + 3 * 239, g_palette1 + 3 * colour, 3);
			shouldSetPalette = true;
		}

		animationToggle = !animationToggle;
		timerAnimation = g_timerGUI + 60;
	}

	if (timerSelection < g_timerGUI && g_selectionType != SELECTIONTYPE_MENTAT) {
		/* selection color */
		static uint16 selectionStateColour = 15;

		GUI_Palette_ShiftColour(g_palette1, 255, selectionStateColour);
		GUI_Palette_ShiftColour(g_palette1, 255, selectionStateColour);
		GUI_Palette_ShiftColour(g_palette1, 255, selectionStateColour);

		if (!GUI_Palette_ShiftColour(g_palette1, 255, selectionStateColour)) {
			if (selectionStateColour == 13) {
				selectionStateColour = 15;

				if (g_selectionType == SELECTIONTYPE_PLACE) {
					if (g_selectionState != 0) {
						selectionStateColour = (g_selectionState < 0) ? 5 : 15;
					} else {
						selectionStateColour = 6;
					}
				}
			} else {
				selectionStateColour = 13;
			}
		}

		shouldSetPalette = true;

		timerSelection = g_timerGUI + 3;
	}

	if (timerToggle < g_timerGUI) {
		/* windtrap color */
		static uint16 toggleColour = 12;

		GUI_Palette_ShiftColour(g_palette1, 223, toggleColour);

		if (!GUI_Palette_ShiftColour(g_palette1, 223, toggleColour)) {
			toggleColour = (toggleColour == 12) ? 10 : 12;
		}

		shouldSetPalette = true;

		timerToggle = g_timerGUI + 5;
	}

	if (shouldSetPalette) GFX_SetPalette(g_palette1);

	Sound_StartSpeech();
}

/**
 * Sets the activity description to the correct string for the active structure.
 * @see g_productionStringID
 */
void GUI_UpdateProductionStringID(void)
{
	Structure *s = NULL;

	s = Structure_Get_ByPackedTile(g_selectionPosition);

	g_productionStringID = STR_NULL;

	if (s == NULL) return;

	if (!g_table_structureInfo[s->o.type].o.flags.factory) {
		if (s->o.type == STRUCTURE_PALACE) g_productionStringID = STR_LAUNCH + g_table_houseInfo[s->o.houseID].specialWeapon - 1;
		return;
	}

	if (s->o.flags.s.upgrading) {
		g_productionStringID = STR_UPGRADINGD_DONE;
		return;
	}

	if (s->o.linkedID == 0xFF) {
		g_productionStringID = STR_BUILD_IT;
		return;
	}

	if (s->o.flags.s.onHold) {
		g_productionStringID = STR_ON_HOLD;
		return;
	}

	if (s->countDown != 0) {
		g_productionStringID = STR_D_DONE;
		return;
	}

	if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
		g_productionStringID = STR_PLACE_IT;
		return;
	}

	g_productionStringID = STR_COMPLETED;
}

static void GUI_Widget_SetProperties(uint16 index, uint16 xpos, uint16 ypos, uint16 width, uint16 height)
{
	g_widgetProperties[index].xBase  = xpos;
	g_widgetProperties[index].yBase  = ypos;
	g_widgetProperties[index].width  = width;
	g_widgetProperties[index].height = height;

	if (g_curWidgetIndex == index) Widget_SetCurrentWidget(index);
}

/**
 * Displays a message and waits for a user action.
 * @param str The text to display.
 * @param spriteID The sprite to draw (0xFFFF for none).
 * @param ... The args for the text.
 * @return ??
 */
uint16 GUI_DisplayModalMessage(const char *str, unsigned int spriteID, ...)
{
	static char textBuffer[768];

	va_list ap;
	uint16 oldWidgetId;
	uint16 ret;
	Screen oldScreenID;
	uint8 *screenBackup = NULL;

	va_start(ap, spriteID);
	vsnprintf(textBuffer, sizeof(textBuffer), str, ap);
	va_end(ap);

	GUI_Mouse_Hide_Safe();

	oldScreenID = GFX_Screen_SetActive(SCREEN_0);

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

	oldWidgetId = Widget_SetCurrentWidget(1);

	g_widgetProperties[1].height = g_fontCurrent->height * max(GUI_SplitText(textBuffer, ((g_curWidgetWidth - ((spriteID == 0xFFFF) ? 2 : 7)) << 3) - 6, '\r'), 3) + 18;

	Widget_SetCurrentWidget(1);

	screenBackup = malloc(GFX_GetSize(g_curWidgetWidth * 8, g_curWidgetHeight));

	if (screenBackup != NULL) {
		GFX_CopyToBuffer(g_curWidgetXBase * 8, g_curWidgetYBase, g_curWidgetWidth * 8, g_curWidgetHeight, screenBackup);
	}

	GUI_Widget_DrawBorder(1, 1, 1);

	if (spriteID != 0xFFFF) {
		GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID], 7, 8, 1, DRAWSPRITE_FLAG_WIDGETPOS);
		GUI_Widget_SetProperties(1, g_curWidgetXBase + 5, g_curWidgetYBase + 8, g_curWidgetWidth - 7, g_curWidgetHeight - 16);
	} else {
		GUI_Widget_SetProperties(1, g_curWidgetXBase + 1, g_curWidgetYBase + 8, g_curWidgetWidth - 2, g_curWidgetHeight - 16);
	}

	g_curWidgetFGColourNormal = 0;

	GUI_DrawText(textBuffer, g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetFGColourBlink, g_curWidgetFGColourNormal);

	GFX_SetPalette(g_palette1);

	GUI_Mouse_Show_Safe();

	for (g_timerTimeout = 30; g_timerTimeout != 0; sleepIdle()) {
		GUI_PaletteAnimate();
	}

	Input_History_Clear();

	do {
		GUI_PaletteAnimate();

		ret = Input_WaitForValidInput();
		sleepIdle();
	} while (ret == 0 || (ret & 0x800) != 0);

	Input_HandleInput(0x841);

	GUI_Mouse_Hide_Safe();

	if (spriteID != 0xFFFF) {
		GUI_Widget_SetProperties(1, g_curWidgetXBase - 5, g_curWidgetYBase - 8, g_curWidgetWidth + 7, g_curWidgetHeight + 16);
	} else {
		GUI_Widget_SetProperties(1, g_curWidgetXBase - 1, g_curWidgetYBase - 8, g_curWidgetWidth + 2, g_curWidgetHeight + 16);
	}

	if (screenBackup != NULL) {
		GFX_CopyFromBuffer(g_curWidgetXBase * 8, g_curWidgetYBase, g_curWidgetWidth * 8, g_curWidgetHeight, screenBackup);
	}

	Widget_SetCurrentWidget(oldWidgetId);

	if (screenBackup != NULL) {
		free(screenBackup);
	} else {
		g_viewport_forceRedraw = true;
	}

	GFX_Screen_SetActive(oldScreenID);

	GUI_Mouse_Show_Safe();

	return ret;
}

/**
 * Splits the given text in lines of maxwidth width using the given delimiter.
 * @param str The text to split.
 * @param maxwidth The maximum width the text will have.
 * @param delimiter The char used as delimiter.
 * @return The number of lines.
 */
uint16 GUI_SplitText(char *str, uint16 maxwidth, char delimiter)
{
	uint16 lines = 0;

	if (str == NULL) return 0;

	while (*str != '\0') {
		uint16 width = 0;

		lines++;

		while (width < maxwidth && *str != delimiter && *str != '\r' && *str != '\0') width += Font_GetCharWidth(*str++);

		if (width >= maxwidth) {
			while (*str != 0x20 && *str != delimiter && *str != '\r' && *str != '\0') width -= Font_GetCharWidth(*str--);
		}

		if (*str != '\0') *str++ = delimiter;
	}

	return lines;
}

/**
 * Draws a sprite.
 * @param screenID On which screen to draw the sprite.
 * @param sprite The sprite to draw.
 * @param posX position where to draw sprite.
 * @param posY position where to draw sprite.
 * @param windowID The ID of the window where the drawing is done.
 * @param flags The flags.
 * @param ... The extra args, flags dependant.
 *
 * flags :
 * 0x0001 reverse X (void)
 * 0x0002 reverse Y (void)
 * 0x0004 zoom (int zoom_factor_x, int zoomRatioY) UNUSED ?
 * 0x0100 Remap (uint8* remap, int remapCount)
 * 0x0200 blur - SandWorm effect (void)
 * 0x0400 sprite has house colors (set internally, no need to be set by caller)
 * 0x1000 set blur increment value (int) UNUSED ?
 * 0x2000 house colors argument (uint8 houseColors[16])
 * 0x4000 position relative to widget (void)
 * 0x8000 position posX,posY is relative to center of sprite
 *
 * sprite data format :
 * 00: 2 bytes = flags 0x01 = has House colors, 0x02 = NOT Format80 encoded
 * 02: 1 byte  = height
 * 03: 2 bytes = width
 * 05: 1 byte  = height - duplicated (ignored)
 * 06: 2 bytes = sprite data length, including header (ignored)
 * 08: 2 bytes = decoded data length
 * 0A: [16 bytes] = house colors (if flags & 0x01)
 * [1]A: xx bytes = data (depending on flags & 0x02 : 1 = raw, 0 = Format80 encoded)
 */
void GUI_DrawSprite(Screen screenID, const uint8 *sprite, int16 posX, int16 posY, uint16 windowID, int flags, ...)
{
	/* variables for blur/sandworm effect */
	static const uint8 blurOffsets[8] = {1, 3, 2, 5, 4, 3, 2, 1};
	static uint16 s_blurIndex  = 0;	/* index into previous table */
	uint16 blurOffset = 1;
	uint16 blurRandomValueIncr = 0x8B55;
	uint16 blurRandomValue     = 0x51EC;

	va_list ap;

	int16  top;
	int16  bottom;
	uint16 width;
	uint16 spriteFlags;
	int16  spriteHeight;	/* number of sprite rows to draw */
	int16  tmpRowCountToDraw;
	int16  pixelCountPerRow;	/* count of pixel to draw per row */
	int16  spriteWidthZoomed;	/* spriteWidth * zoomRatioX */
	int16  spriteWidth;	/* original sprite Width */
	int16  pixelSkipStart;	/* pixel count to skip at start of row */
	int16  pixelSkipEnd;	/* pixel count to skip at end of row */
	uint8 *remap = NULL;
	int16  remapCount = 0;
	int16  distY;
	uint16 zoomRatioX = 0;	/* 8.8 fixed point, ie 0x0100 = 1x */
	uint16 zoomRatioY = 0x100;	/* 8.8 fixed point, ie 0x0100 = 1x */
	uint16 Ycounter = 0;	/* 8.8 fixed point, ie 0x0100 = 1 */
	const uint8 *spriteSave = NULL;
	int16  distX;
	const uint8 *palette = NULL;
	uint16 spriteDecodedLength; /* if encoded with Format80 */
	uint8 spriteBuffer[20000];	/* for sprites encoded with Format80 : maximum size for credits images is 19841, elsewere it is 3456 */

	uint8 *buf = NULL;
	uint8 *b = NULL;
	int16  count;
	int16  buf_incr;

	if (sprite == NULL) return;

	/* read additional arguments according to the flags */

	va_start(ap, flags);

	if ((flags & DRAWSPRITE_FLAG_PAL) != 0) palette = va_arg(ap, uint8*);

	/* Remap */
	if ((flags & DRAWSPRITE_FLAG_REMAP) != 0) {
		remap = va_arg(ap, uint8*);
		remapCount = (int16)va_arg(ap, int);
		if (remapCount == 0) flags &= ~DRAWSPRITE_FLAG_REMAP;
	}

	if ((flags & DRAWSPRITE_FLAG_BLUR) != 0) {
		s_blurIndex = (s_blurIndex + 1) % 8;
		blurOffset = blurOffsets[s_blurIndex];
		blurRandomValue = 0x0;
		blurRandomValueIncr = 0x100;
	}

	if ((flags & DRAWSPRITE_FLAG_BLURINCR) != 0) blurRandomValueIncr = (uint16)va_arg(ap, int);

	if ((flags & DRAWSPRITE_FLAG_ZOOM) != 0) {
		zoomRatioX = (uint16)va_arg(ap, int);
		zoomRatioY = (uint16)va_arg(ap, int);
	}

	va_end(ap);

	buf = GFX_Screen_Get_ByIndex(screenID);
	buf += g_widgetProperties[windowID].xBase << 3;

	width = g_widgetProperties[windowID].width << 3;
	top = g_widgetProperties[windowID].yBase;
	bottom = top + g_widgetProperties[windowID].height;

	if ((flags & DRAWSPRITE_FLAG_WIDGETPOS) != 0) {
		posY += g_widgetProperties[windowID].yBase;
	} else {
		posX -= g_widgetProperties[windowID].xBase << 3;
	}

	spriteFlags = READ_LE_UINT16(sprite);
	sprite += 2;

	if ((spriteFlags & 0x1) != 0) flags |= DRAWSPRITE_FLAG_SPRITEPAL;

	spriteHeight = *sprite++;
	spriteWidth = READ_LE_UINT16(sprite);
	sprite += 5;
	spriteDecodedLength = READ_LE_UINT16(sprite);
	sprite += 2;

	spriteWidthZoomed = spriteWidth;

	if ((flags & DRAWSPRITE_FLAG_ZOOM) != 0) {
		spriteHeight = (int16)(((int32)spriteHeight * (int32)zoomRatioY) >> 8);
		if (spriteHeight == 0) return;
		spriteWidthZoomed = (int16)(((int32)spriteWidthZoomed * (int32)zoomRatioX) >> 8);
		if (spriteWidthZoomed == 0) return;
	}

	if ((flags & DRAWSPRITE_FLAG_CENTER) != 0) {
		posX -= spriteWidthZoomed / 2;	/* posX relative to center */
		posY -= spriteHeight / 2;		/* posY relative to center */
	}

	pixelCountPerRow = spriteWidthZoomed;

	if ((spriteFlags & 0x1) != 0) {
		if ((flags & DRAWSPRITE_FLAG_PAL) == 0) palette = sprite;
		sprite += 16;
	}

	if ((spriteFlags & 0x2) == 0) {
		Format80_Decode(spriteBuffer, sprite, spriteDecodedLength);

		sprite = spriteBuffer;
	}

	if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) == 0) {
		/* distance between top of window and top of sprite */
		distY = posY - top;
	} else {
		/* distance between bottom of window and bottom of sprite */
		distY = bottom - posY - spriteHeight;
	}

	if (distY < 0) {
		/* means the sprite begins outside the window,
		 * need to skip a few rows before drawing */
		spriteHeight += distY;
		if (spriteHeight <= 0) return;

		distY = -distY;

		while (distY > 0) {
			/* skip a row */
			spriteSave = sprite;
			count = spriteWidth;

			assert((flags & 0xFF) < 4);	/* means DRAWSPRITE_FLAG_ZOOM is forbidden */
			/* so (flags & 0xFD) equals (flags & DRAWSPRITE_FLAG_RTL) */

			while (count > 0) {
#if 1
					if (*sprite++ == 0) count -= *sprite++;
					else count--;
#else
				while (count != 0) {
					count--;
					if (*sprite++ == 0) break;
				}
				if (sprite[-1] != 0 && count == 0) break;

				count -= *sprite++ - 1;
#endif
			}

			/*buf += count * (((flags & 0xFF) == 0 || (flags & 0xFF) == 2) ? -1 : 1);*/
#if 0
			if ((flags & 0xFD) == 0) buf -= count;	/* 0xFD = 1111 1101b */
			else buf += count;
#else
			if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf += count;
			else buf -= count;
#endif

			Ycounter += zoomRatioY;
			if ((Ycounter & 0xFF00) != 0) {
				distY -= Ycounter >> 8;
				Ycounter &= 0xFF;	/* keep only fractional part */
			}
		}

		if (distY < 0) {
			sprite = spriteSave;

			Ycounter += (-distY) << 8;
		}

		if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) == 0) posY = top;
	}

	if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) == 0) {
		tmpRowCountToDraw = bottom - posY;	/* rows to draw */
	} else {
		tmpRowCountToDraw = posY + spriteHeight - top;	/* rows to draw */
	}

	if (tmpRowCountToDraw <= 0) return;	/* no row to draw */

	if (tmpRowCountToDraw < spriteHeight) {
		/* there are a few rows to skip at the end */
		spriteHeight = tmpRowCountToDraw;
		if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) != 0) posY = top;
	}

	pixelSkipStart = 0;
	if (posX < 0) {
		/* skip pixels outside window */
		pixelCountPerRow += posX;
		pixelSkipStart = -posX;	/* pixel count to skip at row start */
		if (pixelSkipStart >= spriteWidthZoomed) return;	/* no pixel to draw */
		posX = 0;
	}

	pixelSkipEnd = 0;
	distX = width - posX;	/* distance between left of sprite and right of window */
	if (distX <= 0) return;	/* no pixel to draw */

	if (distX < pixelCountPerRow) {
		pixelCountPerRow = distX;
		pixelSkipEnd = spriteWidthZoomed - pixelSkipStart - pixelCountPerRow;	/* pixel count to skip at row end */
	}

	/* move pointer to 1st pixel of 1st row to draw */
	buf += posY * SCREEN_WIDTH + posX;
	if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) != 0) {
		buf += (spriteHeight - 1) * SCREEN_WIDTH;
	}

	if ((flags & DRAWSPRITE_FLAG_RTL) != 0) {
		/* XCHG pixelSkipStart, pixelSkipEnd */
		uint16 tmp = pixelSkipStart;
		pixelSkipStart = pixelSkipEnd;
		pixelSkipEnd = tmp;
		buf += pixelCountPerRow - 1;
		buf_incr = -1;
	} else {
		buf_incr = 1;
	}

	b = buf;

	if ((flags & DRAWSPRITE_FLAG_ZOOM) != 0) {
		pixelSkipEnd = 0;
		pixelSkipStart = (pixelSkipStart << 8) / zoomRatioX;
	}

	assert((flags & 0xFF) < 4);

	GFX_Screen_SetDirty(screenID,
	                    (g_widgetProperties[windowID].xBase << 3) + posX,
	                    posY,
	                    (g_widgetProperties[windowID].xBase << 3) + posX + pixelCountPerRow,
	                    posY + spriteHeight);

	do {
		/* drawing loop */
		if ((Ycounter & 0xFF00) == 0) {
			while (true) {
				Ycounter += zoomRatioY;

				if ((Ycounter & 0xFF00) != 0) break;
				count = spriteWidth;

				while (count > 0) {
#if 1
					if (*sprite++ == 0) count -= *sprite++;
					else count--;
#else
					while (count != 0) {
						count--;
						if (*sprite++ == 0) break;
					}
					if (sprite[-1] != 0 && count == 0) break;

					count -= *sprite++ - 1;
#endif
				}

#if 0
				if ((flags & 0xFD) == 0) buf -= count;
				else buf += count;
#else
				if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf += count;
				else buf -= count;
#endif
			}
			spriteSave = sprite;
		}

		count = pixelSkipStart;

		while (count > 0) {
#if 1
			if (*sprite++ == 0) count -= *sprite++;
			else count--;
#else
			while (count != 0) {
				count--;
				if (*sprite++ == 0) break;
			}
			if (sprite[-1] != 0 && count == 0) break;

			count -= *sprite++ - 1;
#endif
		}

#if 0
		if ((flags & 0xFD) == 0) buf -= count;
		else buf += count;
#else
		if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf += count;
		else buf -= count;
#endif

		if (spriteWidth != 0) {
			count += pixelCountPerRow;

			assert((flags & 0xF00) < 0x800);
			switch (flags & 0xF00) {
				case 0:
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							*buf = v;
							buf += buf_incr;
							count--;
						}
					}
					break;

				case (DRAWSPRITE_FLAG_REMAP):	/* remap */
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							int16 i;
							for(i = 0; i < remapCount; i++) v = remap[v];
							*buf = v;
							buf += buf_incr;
							count--;
						}
					}
					break;

				case (DRAWSPRITE_FLAG_BLUR):	/* blur/Sandworm effect */
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							blurRandomValue += blurRandomValueIncr;

							if ((blurRandomValue & 0xFF00) == 0) {
								*buf = v;
							} else {
								blurRandomValue &= 0xFF;
								*buf = buf[blurOffset];
							}
							buf += buf_incr;
							count--;
						}
					}
					break;

				case (DRAWSPRITE_FLAG_REMAP | DRAWSPRITE_FLAG_BLUR):
				case (DRAWSPRITE_FLAG_REMAP | DRAWSPRITE_FLAG_BLUR | DRAWSPRITE_FLAG_SPRITEPAL):
					/* remap + blur ? (+ has house colors) */
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							int16 i;
							v = *buf;
							for(i = 0; i < remapCount; i++) v = remap[v];
							*buf = v;
							buf += buf_incr;
							count--;
						}
					}
					break;

				case (DRAWSPRITE_FLAG_SPRITEPAL):	/* sprite has palette */
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							*buf = palette[v];
							buf += buf_incr;
							count--;
						}
					}
					break;

				case (DRAWSPRITE_FLAG_REMAP | DRAWSPRITE_FLAG_SPRITEPAL):
					/* remap +  sprite has palette */
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							int16 i;
							v = palette[v];
							for(i = 0; i < remapCount; i++) v = remap[v];
							*buf = v;
							buf += buf_incr;
							count--;
						}
					}
					break;

				case (DRAWSPRITE_FLAG_BLUR | DRAWSPRITE_FLAG_SPRITEPAL):
					/* blur/sandworm effect + sprite has palette */
					while (count > 0) {
						uint8 v = *sprite++;
						if (v == 0) {
							v = *sprite++; /* run length encoding of transparent pixels */
							if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf -= v;
							else buf += v;
							count -= v;
						} else {
							blurRandomValue += blurRandomValueIncr;

							if ((blurRandomValue & 0xFF00) == 0) {
								*buf = palette[v];
							} else {
								blurRandomValue &= 0x00FF;
								*buf = buf[blurOffset];
							}
							buf += buf_incr;
							count--;
						}
					}
					break;
			}

			count += pixelSkipEnd;
			if (count != 0) {
				while (count > 0) {
#if 1
					if (*sprite++ == 0) count -= *sprite++;
					else count--;
#else
					while (count != 0) {
						count--;
						if (*sprite++ == 0) break;
					}
					if (sprite[-1] != 0 && count == 0) break;

					count -= *sprite++ - 1;
#endif
				}

#if 0
				if ((flags & 0xFD) == 0) buf -= count;
				else buf += count;
#else
				if ((flags & DRAWSPRITE_FLAG_RTL) != 0) buf += count;
				else buf -= count;
#endif
			}
		}

		if ((flags & DRAWSPRITE_FLAG_BOTTOMUP) != 0)	b -= SCREEN_WIDTH;
		else b += SCREEN_WIDTH;
		buf = b;

		Ycounter -= 0x100;
		if ((Ycounter & 0xFF00) != 0) sprite = spriteSave;
	} while (--spriteHeight > 0);
}

/**
 * Updates the score.
 * @param score The base score.
 * @param harvestedAllied Pointer to the total amount of spice harvested by allies.
 * @param harvestedEnemy Pointer to the total amount of spice harvested by enemies.
 * @param houseID The houseID of the player.
 */
static uint16 Update_Score(int16 score, uint16 *harvestedAllied, uint16 *harvestedEnemy, uint8 houseID)
{
	PoolFindStruct find;
	uint16 targetTime;
	uint16 sumHarvestedAllied = 0;
	uint16 sumHarvestedEnnemy = 0;
	uint32 tmp;

	if (score < 0) score = 0;

	find.houseID = houseID;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;
		if (s->o.type == STRUCTURE_SLAB_1x1 || s->o.type == STRUCTURE_SLAB_2x2 || s->o.type == STRUCTURE_WALL) continue;

		score += g_table_structureInfo[s->o.type].o.buildCredits / 100;
	}

	g_validateStrictIfZero++;

	find.houseID = HOUSE_INVALID;
	find.type    = UNIT_HARVESTER;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (House_AreAllied(Unit_GetHouseID(u), g_playerHouseID)) {
			sumHarvestedAllied += u->amount * 7;
		} else {
			sumHarvestedEnnemy += u->amount * 7;
		}
	}

	g_validateStrictIfZero--;

	tmp = *harvestedEnemy + sumHarvestedEnnemy;
	*harvestedEnemy = (tmp > 65000) ? 65000 : (tmp & 0xFFFF);

	tmp = *harvestedAllied + sumHarvestedAllied;
	*harvestedAllied = (tmp > 65000) ? 65000 : (tmp & 0xFFFF);

	score += House_Get_ByIndex(houseID)->credits / 100;

	if (score < 0) score = 0;

	targetTime = g_campaignID * 45;

	if (s_ticksPlayed < targetTime) {
		score += targetTime - s_ticksPlayed;
	}

	return score;
}

/**
 * Draws a string on a filled rectangle.
 * @param string The string to draw.
 * @param top The most top position where to draw the string.
 */
static void GUI_DrawTextOnFilledRectangle(const char *string, uint16 top)
{
	uint16 halfWidth;

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x121);

	halfWidth = (Font_GetStringWidth(string) / 2) + 4;

	GUI_DrawFilledRectangle(SCREEN_WIDTH / 2 - halfWidth, top, SCREEN_WIDTH / 2 + halfWidth, top + 6, 116);
	GUI_DrawText_Wrapper(string, SCREEN_WIDTH / 2, top, 0xF, 0, 0x121);
}

static uint16 GUI_HallOfFame_GetRank(uint16 score)
{
	uint8 i;

	for (i = 0; i < lengthof(_rankScores); i++) {
		if (_rankScores[i].score > score) break;
	}

	return min(i, lengthof(_rankScores) - 1);
}

static void GUI_HallOfFame_DrawRank(uint16 score, bool fadeIn)
{
	GUI_DrawText_Wrapper(String_Get_ByIndex(_rankScores[GUI_HallOfFame_GetRank(score)].rankString), SCREEN_WIDTH / 2, 49, 6, 0, 0x122);

	if (!fadeIn) return;

	GUI_Screen_FadeIn(10, 49, 10, 49, 20, 12, SCREEN_1, SCREEN_0);
}

static void GUI_HallOfFame_DrawBackground(uint16 score, bool hallOfFame)
{
	Screen oldScreenID;
	uint16 xSrc;
	uint16 colour;
	uint16 offset;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	Sprites_LoadImage("FAME.CPS", SCREEN_1, g_palette_998A);

	xSrc = 1;
	if (g_playerHouseID <= HOUSE_ORDOS) {
		xSrc = (g_playerHouseID * 56 + 8) / 8;
	}

	GUI_Screen_Copy(xSrc, 136, 0, 8, 7, 56, SCREEN_1, SCREEN_1);

	if (g_playerHouseID > HOUSE_ORDOS) {
		xSrc += 7;
	}

	GUI_Screen_Copy(xSrc, 136, 33, 8, 7, 56, SCREEN_1, SCREEN_1);

	GUI_DrawFilledRectangle(8, 136, 175, 191, 116);

	if (hallOfFame) {
		GUI_DrawFilledRectangle(8, 80, 311, 191, 116);
		if (score != 0xFFFF) GUI_HallOfFame_DrawRank(score, false);
	} else {
		GFX_Screen_Copy2(8, 80, 8, 116, 304, 36, SCREEN_1, SCREEN_1, false);
		if (g_scenarioID != 1) GFX_Screen_Copy2(8, 80, 8, 152, 304, 36, SCREEN_1, SCREEN_1, false);
	}

	if (score != 0xFFFF) {
		char buffer[64];
		snprintf(buffer, sizeof(buffer), String_Get_ByIndex(STR_TIME_DH_DM), s_ticksPlayed / 60, s_ticksPlayed % 60);

		if (s_ticksPlayed < 60) {
			char *hours = strchr(buffer, '0');
			while (*hours != ' ') memmove(hours, hours + 1, strlen(hours));
		}

		/* "Score: %d" */
		GUI_DrawText_Wrapper(String_Get_ByIndex(STR_SCORE_D), 72, 15, 15, 0, 0x22, score);
		GUI_DrawText_Wrapper(buffer, 248, 15, 15, 0, 0x222);
		/* "You have attained the rank of" */
		GUI_DrawText_Wrapper(String_Get_ByIndex(STR_YOU_HAVE_ATTAINED_THE_RANK_OF), SCREEN_WIDTH / 2, 38, 15, 0, 0x122);
	} else {
		/* "Hall of Fame" */
		GUI_DrawText_Wrapper(String_Get_ByIndex(STR_HALL_OF_FAME2), SCREEN_WIDTH / 2, 15, 15, 0, 0x122);
	}

	switch (g_playerHouseID) {
		case HOUSE_HARKONNEN:
			colour = 149;
			offset = 0;
			break;

		default:
			colour = 165;
			offset = 2;
			break;

		case HOUSE_ORDOS:
			colour = 181;
			offset = 1;
			break;
	}

	s_palette1_houseColour = g_palette1 + 255 * 3;
	memcpy(s_palette1_houseColour, g_palette1 + colour * 3, 3);
	s_palette1_houseColour += offset;

	if (!hallOfFame) GUI_HallOfFame_Tick();

	GFX_Screen_SetActive(oldScreenID);
}

static void GUI_EndStats_Sleep(uint16 delay)
{
	for (g_timerTimeout = delay; g_timerTimeout != 0; sleepIdle()) {
		GUI_HallOfFame_Tick();
	}
}

/**
 * Shows the stats at end of scenario.
 * @param killedAllied The amount of destroyed allied units.
 * @param killedEnemy The amount of destroyed enemy units.
 * @param destroyedAllied The amount of destroyed allied structures.
 * @param destroyedEnemy The amount of destroyed enemy structures.
 * @param harvestedAllied The amount of spice harvested by allies.
 * @param harvestedEnemy The amount of spice harvested by enemies.
 * @param score The base score.
 * @param houseID The houseID of the player.
 */
void GUI_EndStats_Show(uint16 killedAllied, uint16 killedEnemy, uint16 destroyedAllied, uint16 destroyedEnemy, uint16 harvestedAllied, uint16 harvestedEnemy, int16 score, uint8 houseID)
{
	Screen oldScreenID;
	uint16 statsBoxCount;
	uint16 textLeft;	/* text left position */
	uint16 statsBarWidth;	/* available width to draw the score bars */
	struct { uint16 value; uint16 increment; } scores[3][2];
	uint16 i;

	s_ticksPlayed = ((g_timerGame - g_tickScenarioStart) / 3600) + 1;

	score = Update_Score(score, &harvestedAllied, &harvestedEnemy, houseID);

	/* 1st scenario doesn't have the "Building destroyed" stats */
	statsBoxCount = (g_scenarioID == 1) ? 2 : 3;

	GUI_Mouse_Hide_Safe();

	GUI_ChangeSelectionType(SELECTIONTYPE_MENTAT);

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	GUI_HallOfFame_DrawBackground(score, false);

	GUI_DrawTextOnFilledRectangle(String_Get_ByIndex(STR_SPICE_HARVESTED_BY), 83);
	GUI_DrawTextOnFilledRectangle(String_Get_ByIndex(STR_UNITS_DESTROYED_BY), 119);
	if (g_scenarioID != 1) GUI_DrawTextOnFilledRectangle(String_Get_ByIndex(STR_BUILDINGS_DESTROYED_BY), 155);

	textLeft = 19 + max(Font_GetStringWidth(String_Get_ByIndex(STR_YOU)), Font_GetStringWidth(String_Get_ByIndex(STR_ENEMY)));
	statsBarWidth = 261 - textLeft;

	for (i = 0; i < statsBoxCount; i++) {
		GUI_DrawText_Wrapper(String_Get_ByIndex(STR_YOU), textLeft - 4,  92 + (i * 36), 0xF, 0, 0x221);
		GUI_DrawText_Wrapper(String_Get_ByIndex(STR_ENEMY), textLeft - 4, 101 + (i * 36), 0xF, 0, 0x221);
	}

	Music_Play(17 + Tools_RandomLCG_Range(0, 5));

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);

	Input_History_Clear();

	scores[0][0].value = harvestedAllied;
	scores[0][1].value = harvestedEnemy;
	scores[1][0].value = killedEnemy;
	scores[1][1].value = killedAllied;
	scores[2][0].value = destroyedEnemy;
	scores[2][1].value = destroyedAllied;

	for (i = 0; i < statsBoxCount; i++) {
		uint16 scoreIncrement;

		/* You */
		if (scores[i][0].value > 65000) scores[i][0].value = 65000;
		/* Enemy */
		if (scores[i][1].value > 65000) scores[i][1].value = 65000;

		scoreIncrement = 1 + (max(scores[i][0].value, scores[i][1].value) / statsBarWidth);

		scores[i][0].increment = scoreIncrement;
		scores[i][1].increment = scoreIncrement;
	}

	GUI_EndStats_Sleep(45);
	GUI_HallOfFame_DrawRank(score, true);
	GUI_EndStats_Sleep(45);

	for (i = 0; i < statsBoxCount; i++) {
		uint16 j;

		GUI_HallOfFame_Tick();

		for (j = 0; j < 2; j++) {	/* 0 : You, 1 : Enemy */
			uint8 colour;
			uint16 posX;
			uint16 posY;
			uint16 score;

			GUI_HallOfFame_Tick();

			colour = (j == 0) ? 255 : 209;
			posX = textLeft;
			posY = 93 + (i * 36) + (j * 9);

			for (score = 0; score < scores[i][j].value; score += scores[i][j].increment) {
				GUI_DrawFilledRectangle(271, posY, 303, posY + 5, 226);
				GUI_DrawText_Wrapper("%u", 287, posY - 1, 0x14, 0, 0x121, score);

				GUI_HallOfFame_Tick();

				g_timerTimeout = 1;

				GUI_DrawLine(posX, posY, posX, posY + 5, colour);

				posX++;

				GUI_DrawLine(posX, posY + 1, posX, posY + 6, 12);	/* shadow */

				GFX_Screen_Copy2(textLeft, posY, textLeft, posY, 304, 7, SCREEN_1, SCREEN_0, false);

				Driver_Sound_Play(52, 0xFF);

				GUI_EndStats_Sleep(g_timerTimeout);
			}

			GUI_DrawFilledRectangle(271, posY, 303, posY + 5, 226);
			GUI_DrawText_Wrapper("%u", 287, posY - 1, 0xF, 0, 0x121, scores[i][j].value);

			GFX_Screen_Copy2(textLeft, posY, textLeft, posY, 304, 7, SCREEN_1, SCREEN_0, false);

			Driver_Sound_Play(38, 0xFF);

			GUI_EndStats_Sleep(12);
		}

		GUI_EndStats_Sleep(60);
	}

	GUI_Mouse_Show_Safe();

	Input_History_Clear();

	for (;; sleepIdle()) {
		GUI_HallOfFame_Tick();
		if (Input_Keyboard_NextKey() != 0) break;
	}

	Input_History_Clear();

	GUI_HallOfFame_Show(score);

	memset(g_palette1 + 255 * 3, 0, 3);

	GFX_Screen_SetActive(oldScreenID);

	Driver_Music_FadeOut();
}

/**
 * Show pick house screen.
 */
uint8 GUI_PickHouse(void)
{
	Screen oldScreenID;
	Widget *w = NULL;
	uint8 palette[3 * 256];
	uint16 i;
	HouseType houseID;

	houseID = HOUSE_MERCENARY;

	memset(palette, 0, 256 * 3);

	Driver_Voice_Play(NULL, 0xFF);

	Voice_LoadVoices(5);

	for (;; sleepIdle()) {
		uint16 yes_no;

		for (i = 0; i < 3; i++) {
			static const uint8 l_houses[3][3] = {
				/* x, y, shortcut */
				{ 16, 56, 31 }, /* A */
				{ 112, 56, 25 }, /* O */
				{ 208, 56, 36 }, /* H */
			};
			Widget *w2;

			w2 = GUI_Widget_Allocate(i + 1, l_houses[i][2], l_houses[i][0], l_houses[i][1], 0xFFFF, 0);

			memset(&w2->flags, 0, sizeof(w2->flags));
			w2->flags.loseSelect = true;
			w2->flags.buttonFilterLeft = 1;
			w2->flags.buttonFilterRight = 1;
			w2->width  = 96;
			w2->height = 104;

			w = GUI_Widget_Link(w, w2);
		}

		Sprites_LoadImage(String_GenerateFilename("HERALD"), SCREEN_1, NULL);

		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);
		GUI_SetPaletteAnimated(g_palette1, 15);
		GUI_Mouse_Show_Safe();

		for (houseID = HOUSE_INVALID; houseID == HOUSE_INVALID; sleepIdle()) {
			uint16 key = GUI_Widget_HandleEvents(w);

			GUI_PaletteAnimate();

			if ((key & 0x800) != 0) key = 0;

			switch (key) {
				case 0x8001: houseID = HOUSE_ATREIDES; break;
				case 0x8002: houseID = HOUSE_ORDOS; break;
				case 0x8003: houseID = HOUSE_HARKONNEN; break;
				default: break;
			}
		}

		GUI_Mouse_Hide_Safe();

		if (g_enableVoices != 0) {
			Sound_Output_Feedback(houseID + 62);

			while (Sound_StartSpeech()) sleepIdle();
		}

		while (w != NULL) {
			Widget *next = w->next;

			free(w);

			w = next;
		}

		GUI_SetPaletteAnimated(palette, 15);

		if (g_debugSkipDialogs || g_debugScenario) {
			Debug("Skipping House selection confirmation.\n");
			break;
		}

		w = GUI_Widget_Link(w, GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(String_Get_ByIndex(STR_YES)[0]), 168, 168, 373, 0));
		w = GUI_Widget_Link(w, GUI_Widget_Allocate(2, GUI_Widget_GetShortcut(String_Get_ByIndex(STR_NO)[0]), 240, 168, 375, 0));

		g_playerHouseID = HOUSE_MERCENARY;

		oldScreenID = GFX_Screen_SetActive(SCREEN_0);

		GUI_Mouse_Show_Safe();

		strncpy(g_readBuffer, String_Get_ByIndex(STR_HOUSE_HARKONNENFROM_THE_DARK_WORLD_OF_GIEDI_PRIME_THE_SAVAGE_HOUSE_HARKONNEN_HAS_SPREAD_ACROSS_THE_UNIVERSE_A_CRUEL_PEOPLE_THE_HARKONNEN_ARE_RUTHLESS_TOWARDS_BOTH_FRIEND_AND_FOE_IN_THEIR_FANATICAL_PURSUIT_OF_POWER + houseID * 40), g_readBufferSize);
		GUI_Mentat_Show(g_readBuffer, House_GetWSAHouseFilename(houseID), NULL);

		Sprites_LoadImage(String_GenerateFilename("MISC"), SCREEN_1, g_palette1);

		GUI_Mouse_Hide_Safe();

		GUI_Screen_Copy(0, 0, 0, 0, 26, 24, SCREEN_1, SCREEN_0);

		GUI_Screen_Copy(0, 24 * (houseID + 1), 26, 0, 13, 24, SCREEN_1, SCREEN_0);

		GUI_Widget_DrawAll(w);

		GUI_Mouse_Show_Safe();

		for (;; sleepIdle()) {
			yes_no = GUI_Mentat_Loop(House_GetWSAHouseFilename(houseID), NULL, NULL, true, w);

			if ((yes_no & 0x8000) != 0) break;
		}

		if (yes_no == 0x8001) {
			Driver_Music_FadeOut();
		} else {
			GUI_SetPaletteAnimated(palette, 15);
		}

		while (w != NULL) {
			Widget *next = w->next;

			free(w);

			w = next;
		}

		Load_Palette_Mercenaries();
		Sprites_LoadTiles();

		GFX_Screen_SetActive(oldScreenID);

		while (Driver_Voice_IsPlaying()) sleepIdle();

		if (yes_no == 0x8001) break;
	}

	Music_Play(0);

	GUI_Palette_CreateRemap(houseID);

	Input_History_Clear();

	GUI_Mouse_Show_Safe();

	GUI_SetPaletteAnimated(palette, 15);

	return houseID;
}

/**
 * Creates a palette mapping: colour -> colour + reference * intensity.
 *
 * @param palette The palette to create the mapping for.
 * @param colours The resulting mapping.
 * @param reference The colour to use as reference.
 * @param intensity The intensity to use.
 */
void GUI_Palette_CreateMapping(const uint8 *palette, uint8 *colours, uint8 reference, uint8 intensity)
{
	uint16 index;

	if (palette == NULL || colours == NULL) return;

	colours[0] = 0;

	for (index = 1; index < 256; index++) {
		uint16 i;
		uint8 red   = palette[3 * index + 0] - (((palette[3 * index + 0] - palette[3 * reference + 0]) * (intensity / 2)) >> 7);
		uint8 blue  = palette[3 * index + 1] - (((palette[3 * index + 1] - palette[3 * reference + 1]) * (intensity / 2)) >> 7);
		uint8 green = palette[3 * index + 2] - (((palette[3 * index + 2] - palette[3 * reference + 2]) * (intensity / 2)) >> 7);
		uint8 colour = reference;
		uint16 sumMin = 0xFFFF;

		for (i = 1; i < 256; i++) {
			uint16 sum = 0;

			sum += (palette[3 * i + 0] - red)   * (palette[3 * i + 0] - red);
			sum += (palette[3 * i + 1] - blue)  * (palette[3 * i + 1] - blue);
			sum += (palette[3 * i + 2] - green) * (palette[3 * i + 2] - green);

			if (sum > sumMin) continue;
			if ((i != reference) && (i == index)) continue;

			sumMin = sum;
			colour = i & 0xFF;
		}

		colours[index] = colour;
	}
}

/**
 * Draw a border.
 *
 * @param left Left position of the border.
 * @param top Top position of the border.
 * @param width Width of the border.
 * @param height Height of the border.
 * @param colourSchemaIndex Index of the colourSchema used.
 * @param fill True if you want the border to be filled.
 */
void GUI_DrawBorder(uint16 left, uint16 top, uint16 width, uint16 height, uint16 colourSchemaIndex, bool fill)
{
	uint16 *colourSchema;

	if (!fill) GFX_Screen_SetDirty(SCREEN_ACTIVE, left, top, left + width, top + height);

	width  -= 1;
	height -= 1;

	colourSchema = s_colourBorderSchema[colourSchemaIndex];

	if (fill) GUI_DrawFilledRectangle(left, top, left + width, top + height, colourSchema[0] & 0xFF);

	GUI_DrawLine(left, top + height, left + width, top + height, colourSchema[1] & 0xFF);
	GUI_DrawLine(left + width, top, left + width, top + height, colourSchema[1] & 0xFF);
	GUI_DrawLine(left, top, left + width, top, colourSchema[2] & 0xFF);
	GUI_DrawLine(left, top, left, top + height, colourSchema[2] & 0xFF);

	GFX_PutPixel(left, top + height, colourSchema[3] & 0xFF);
	GFX_PutPixel(left + width, top, colourSchema[3] & 0xFF);
}

/**
 * Display a hint to the user. Only show each hint exactly once.
 *
 * @param stringID The string of the hint to show.
 * @param spriteID The sprite to show with the hint.
 * @return Zero or the return value of GUI_DisplayModalMessage.
 */
uint16 GUI_DisplayHint(uint16 stringID, uint16 spriteID)
{
	uint32 *hintsShown;
	uint32 mask;
	uint16 hint;

	if (g_debugGame || stringID == STR_NULL || !g_gameConfig.hints || g_selectionType == SELECTIONTYPE_MENTAT) return 0;

	hint = stringID - STR_YOU_MUST_BUILD_A_WINDTRAP_TO_PROVIDE_POWER_TO_YOUR_BASE_WITHOUT_POWER_YOUR_STRUCTURES_WILL_DECAY;

	assert(hint < 64);

	if (hint < 32) {
		mask = (1 << hint);
		hintsShown = &g_hintsShown1;
	} else {
		mask = (1 << (hint - 32));
		hintsShown = &g_hintsShown2;
	}

	if ((*hintsShown & mask) != 0) return 0;
	*hintsShown |= mask;

	return GUI_DisplayModalMessage(String_Get_ByIndex(stringID), spriteID);
}

void GUI_DrawProgressbar(uint16 current, uint16 max)
{
	static uint16 l_info[11] = { 293, 52, 24, 7, 1, 0, 0, 0, 4, 5, 8 };

	uint16 width;
	uint16 height;
	uint16 colour;

	l_info[7] = max;
	l_info[6] = current;

	if (current > max) current = max;
	if (max < 1) max = 1;

	width  = l_info[2];
	height = l_info[3];

	/* 0 = Horizontal, 1 = Vertial */
	if (l_info[5] == 0) {
		width = current * width / max;
		if (width < 1) width = 1;
	} else {
		height = current * height / max;
		if (height < 1) height = 1;
	}

	colour = l_info[8];
	if (current <= max / 2) colour = l_info[9];
	if (current <= max / 4) colour = l_info[10];

	if (current != 0 && width  == 0) width = 1;
	if (current != 0 && height == 0) height = 1;

	if (height != 0) {
		GUI_DrawBorder(l_info[0] - 1, l_info[1] - 1, l_info[2] + 2, l_info[3] + 2, 1, true);
	}

	if (width != 0) {
		GUI_DrawFilledRectangle(l_info[0], l_info[1] + l_info[3] - height, l_info[0] + width - 1, l_info[1] + l_info[3] - 1, (uint8)colour);
	}
}

/**
 * Draw the interface (borders etc etc) and radar on the screen.
 * @param screenID The screen to draw the radar on. if SCREEN_0, SCREEN_1 is used as back buffer
 */
void GUI_DrawInterfaceAndRadar(Screen screenID)
{
	PoolFindStruct find;
	Screen oldScreenID;
	Widget *w;

	oldScreenID = GFX_Screen_SetActive((screenID == SCREEN_0) ? SCREEN_1 : screenID);

	g_viewport_forceRedraw = true;

	Sprites_LoadImage("SCREEN.CPS", SCREEN_1, NULL);
	GUI_DrawSprite(SCREEN_1, g_sprites[11], 192, 0, 0, 0); /* "Credits" */

	GUI_Palette_RemapScreen(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_1, g_remap);


	g_textDisplayNeedsUpdate = true;

	GUI_Widget_Viewport_RedrawMap(SCREEN_ACTIVE);

	GUI_DrawScreen(SCREEN_ACTIVE);

	GUI_Widget_ActionPanel_Draw(true);

	w = GUI_Widget_Get_ByIndex(g_widgetLinkedListHead, 1);
	GUI_Widget_Draw(w);

	w = GUI_Widget_Get_ByIndex(g_widgetLinkedListHead, 2);
	GUI_Widget_Draw(w);

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;
		if (s->o.type == STRUCTURE_SLAB_1x1 || s->o.type == STRUCTURE_SLAB_2x2 || s->o.type == STRUCTURE_WALL) continue;

		Structure_UpdateMap(s);
	}

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		Unit_UpdateMap(1, u);
	}

	if (screenID == SCREEN_0) {
		GFX_Screen_SetActive(SCREEN_0);

		GUI_Mouse_Hide_Safe();

		GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);
		GUI_DrawCredits(g_playerHouseID, (g_playerCredits == 0xFFFF) ? 2 : 1);
		GUI_SetPaletteAnimated(g_palette1, 15);

		GUI_Mouse_Show_Safe();
	}

	GFX_Screen_SetActive(oldScreenID);

	GUI_DrawCredits(g_playerHouseID, 2);

	Input_History_Clear();
}

/**
 * Draw the credits on the screen, and animate it when the value is changing.
 * @param houseID The house to display the credits from.
 * @param mode The mode of displaying. 0 = animate, 1 = force draw, 2 = reset.
 */
void GUI_DrawCredits(uint8 houseID, uint16 mode)
{
	static uint16 creditsAnimation = 0;           /* How many credits are shown in current animation of credits. */
	static int16  creditsAnimationOffset = 0;     /* Offset of the credits for the animation of credits. */

	Screen oldScreenID;
	uint16 oldWidgetId;
	House *h;
	char charCreditsOld[7];
	char charCreditsNew[7];
	int i;
	int16 creditsDiff;
	int32 creditsNew;
	int32 creditsOld;
	int16 offset;

	if (s_tickCreditsAnimation > g_timerGUI && mode == 0) return;
	s_tickCreditsAnimation = g_timerGUI + 1;

	h = House_Get_ByIndex(houseID);

	if (mode == 2) {
		g_playerCredits = h->credits;
		creditsAnimation = h->credits;
	}

	if (mode == 0 && h->credits == creditsAnimation && creditsAnimationOffset == 0) return;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	oldWidgetId = Widget_SetCurrentWidget(4);

	creditsDiff = h->credits - creditsAnimation;
	if (creditsDiff != 0) {
		int16 diff = creditsDiff / 4;
		if (diff == 0)   diff = (creditsDiff < 0) ? -1 : 1;
		if (diff > 128)  diff = 128;
		if (diff < -128) diff = -128;
		creditsAnimationOffset += diff;
	} else {
		creditsAnimationOffset = 0;
	}

	if (creditsDiff != 0 && (creditsAnimationOffset < -7 || creditsAnimationOffset > 7)) {
		Driver_Sound_Play(creditsDiff > 0 ? 52 : 53, 0xFF);
	}

	if (creditsAnimationOffset < 0 && creditsAnimation == 0) creditsAnimationOffset = 0;

	creditsAnimation += creditsAnimationOffset / 8;

	if (creditsAnimationOffset > 0) creditsAnimationOffset &= 7;
	if (creditsAnimationOffset < 0) creditsAnimationOffset = -((-creditsAnimationOffset) & 7);

	creditsOld = creditsAnimation;
	creditsNew = creditsAnimation;
	offset = 1;

	if (creditsAnimationOffset < 0) {
		creditsOld -= 1;
		if (creditsOld < 0) creditsOld = 0;

		offset -= 8;
	}

	if (creditsAnimationOffset > 0) {
		creditsNew += 1;
	}

	GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[12], 0, 0, 4, DRAWSPRITE_FLAG_WIDGETPOS);

	g_playerCredits = creditsOld;

	snprintf(charCreditsOld, sizeof(charCreditsOld), "%6d", creditsOld);
	snprintf(charCreditsNew, sizeof(charCreditsNew), "%6d", creditsNew);

	for (i = 0; i < 6; i++) {
		uint16 left = i * 10 + 4;
		uint16 spriteID;

		spriteID = (charCreditsOld[i] == ' ') ? 13 : charCreditsOld[i] - 34;

		if (charCreditsOld[i] != charCreditsNew[i]) {
			GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID], left, offset - creditsAnimationOffset, 4, DRAWSPRITE_FLAG_WIDGETPOS);
			if (creditsAnimationOffset == 0) continue;

			spriteID = (charCreditsNew[i] == ' ') ? 13 : charCreditsNew[i] - 34;

			GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID], left, offset + 8 - creditsAnimationOffset, 4, DRAWSPRITE_FLAG_WIDGETPOS);
		} else {
			GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID], left, 1, 4, DRAWSPRITE_FLAG_WIDGETPOS);
		}
	}

	if (!GFX_Screen_IsActive(oldScreenID)) {
		GUI_Mouse_Hide_InWidget(5);
		GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase - 40, g_curWidgetWidth, g_curWidgetHeight, SCREEN_ACTIVE, oldScreenID);
		GUI_Mouse_Show_InWidget();
	}

	GFX_Screen_SetActive(oldScreenID);

	Widget_SetCurrentWidget(oldWidgetId);
}

/**
 * Change the selection type.
 * @param selectionType The new selection type.
 */
void GUI_ChangeSelectionType(uint16 selectionType)
{
	Screen oldScreenID;

	if (selectionType == SELECTIONTYPE_UNIT && g_unitSelected == NULL) {
		selectionType = SELECTIONTYPE_STRUCTURE;
	}

	if (selectionType == SELECTIONTYPE_STRUCTURE && g_unitSelected != NULL) {
		g_unitSelected = NULL;
	}

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	if (g_selectionType != selectionType) {
		uint16 oldSelectionType = g_selectionType;

		Timer_SetTimer(TIMER_GAME, false);

		g_selectionType = selectionType;
		g_selectionTypeNew = selectionType;
		g_var_37B8 = true;

		switch (oldSelectionType) {
			case SELECTIONTYPE_PLACE:
				Map_SetSelection(g_structureActivePosition);
				/* Fall-through */
			case SELECTIONTYPE_TARGET:
			case SELECTIONTYPE_STRUCTURE:
				g_cursorDefaultSpriteID = 0;
				GUI_DisplayText(NULL, -1);
				break;

			case SELECTIONTYPE_UNIT:
				if (g_unitSelected != NULL && selectionType != SELECTIONTYPE_TARGET && selectionType != SELECTIONTYPE_UNIT) {
					Unit_UpdateMap(2, g_unitSelected);
					g_unitSelected = NULL;
				}
				break;

			default:
				break;
		}

		if (g_table_selectionType[oldSelectionType].variable_04 && g_table_selectionType[selectionType].variable_06) {
			g_viewport_forceRedraw = true;
			g_viewport_fadein = true;

			GUI_DrawInterfaceAndRadar(SCREEN_0);
		}

		Widget_SetCurrentWidget(g_table_selectionType[selectionType].defaultWidget);

		if (g_curWidgetIndex != 0) {
			GUI_Widget_DrawBorder(g_curWidgetIndex, 0, false);
		}

		if (selectionType != SELECTIONTYPE_MENTAT) {
			Widget *w = g_widgetLinkedListHead;

			while (w != NULL) {
				const int8 *s = g_table_selectionType[selectionType].visibleWidgets;

				w->state.selected = false;
				w->flags.invisible = true;

				for (; *s != -1; s++) {
					if (*s == w->index) {
						w->flags.invisible = false;
						break;
					}
				}

				GUI_Widget_Draw(w);
				w = GUI_Widget_GetNext(w);
			}

			GUI_Widget_DrawAll(g_widgetLinkedListHead);
			g_textDisplayNeedsUpdate = true;
		}

		switch (g_selectionType) {
			case SELECTIONTYPE_MENTAT:
				if (oldSelectionType != SELECTIONTYPE_INTRO) {
					g_cursorSpriteID = 0;

					Sprites_SetMouseSprite(0, 0, g_sprites[0]);
				}

				Widget_SetCurrentWidget(g_table_selectionType[selectionType].defaultWidget);
				break;

			case SELECTIONTYPE_TARGET:
				g_structureActivePosition = g_selectionPosition;
				GUI_Widget_ActionPanel_Draw(true);

				g_cursorDefaultSpriteID = 5;

				Timer_SetTimer(TIMER_GAME, true);
				break;

			case SELECTIONTYPE_PLACE:
				Unit_Select(NULL);
				GUI_Widget_ActionPanel_Draw(true);

				Map_SetSelectionSize(g_table_structureInfo[g_structureActiveType].layout);

				Timer_SetTimer(TIMER_GAME, true);
				break;

			case SELECTIONTYPE_UNIT:
				GUI_Widget_ActionPanel_Draw(true);

				Timer_SetTimer(TIMER_GAME, true);
				break;

			case SELECTIONTYPE_STRUCTURE:
				GUI_Widget_ActionPanel_Draw(true);

				Timer_SetTimer(TIMER_GAME, true);
				break;

			default: break;
		}
	}

	GFX_Screen_SetActive(oldScreenID);
}

/**
 * Sets the colours to be used when drawing chars.
 * @param colours The colours to use.
 * @param min The index of the first colour to set.
 * @param max The index of the last colour to set.
 */
void GUI_InitColors(const uint8 *colours, uint8 first, uint8 last)
{
	uint8 i;

	first &= 0xF;
	last &= 0xF;

	if (last < first || colours == NULL) return;

	for (i = first; i < last + 1; i++) g_colours[i] = *colours++;
}

/**
 * Get how the given point must be clipped.
 * @param x The X-coordinate of the point.
 * @param y The Y-coordinate of the point.
 * @return A bitset.
 */
static uint16 GetNeededClipping(int16 x, int16 y)
{
	uint16 flags = 0;

	if (y < g_clipping.top)    flags |= 0x1;
	if (y > g_clipping.bottom) flags |= 0x2;
	if (x < g_clipping.left)   flags |= 0x4;
	if (x > g_clipping.right)  flags |= 0x8;

	return flags;
}

/**
 * Applies top clipping to a line.
 * @param x1 Pointer to the X-coordinate of the begin of the line.
 * @param y1 Pointer to the Y-coordinate of the begin of the line.
 * @param x2 The X-coordinate of the end of the line.
 * @param y2 The Y-coordinate of the end of the line.
 */
static void ClipTop(int16 *x1, int16 *y1, int16 x2, int16 y2)
{
	*x1 += (x2 - *x1) * (g_clipping.top - *y1) / (y2 - *y1);
	*y1 = g_clipping.top;
}

/**
 * Applies bottom clipping to a line.
 * @param x1 Pointer to the X-coordinate of the begin of the line.
 * @param y1 Pointer to the Y-coordinate of the begin of the line.
 * @param x2 The X-coordinate of the end of the line.
 * @param y2 The Y-coordinate of the end of the line.
 */
static void ClipBottom(int16 *x1, int16 *y1, int16 x2, int16 y2)
{
	*x1 += (x2 - *x1) * (*y1 - g_clipping.bottom) / (*y1 - y2);
	*y1 = g_clipping.bottom;
}

/**
 * Applies left clipping to a line.
 * @param x1 Pointer to the X-coordinate of the begin of the line.
 * @param y1 Pointer to the Y-coordinate of the begin of the line.
 * @param x2 The X-coordinate of the end of the line.
 * @param y2 The Y-coordinate of the end of the line.
 */
static void ClipLeft(int16 *x1, int16 *y1, int16 x2, int16 y2)
{
	*y1 += (y2 - *y1) * (g_clipping.left - *x1) / (x2 - *x1);
	*x1 = g_clipping.left;
}

/**
 * Applies right clipping to a line.
 * @param x1 Pointer to the X-coordinate of the begin of the line.
 * @param y1 Pointer to the Y-coordinate of the begin of the line.
 * @param x2 The X-coordinate of the end of the line.
 * @param y2 The Y-coordinate of the end of the line.
 */
static void ClipRight(int16 *x1, int16 *y1, int16 x2, int16 y2)
{
	*y1 += (y2 - *y1) * (*x1 - g_clipping.right) / (*x1 - x2);
	*x1 = g_clipping.right;
}

/**
 * Draws a line from (x1, y1) to (x2, y2) using given colour.
 * @param x1 The X-coordinate of the begin of the line.
 * @param y1 The Y-coordinate of the begin of the line.
 * @param x2 The X-coordinate of the end of the line.
 * @param y2 The Y-coordinate of the end of the line.
 * @param colour The colour to use to draw the line.
 */
void GUI_DrawLine(int16 x1, int16 y1, int16 x2, int16 y2, uint8 colour)
{
	uint8 *screen = GFX_Screen_GetActive();
	int16 increment = 1;

	if (x1 < g_clipping.left || x1 > g_clipping.right || y1 < g_clipping.top || y1 > g_clipping.bottom || x2 < g_clipping.left || x2 > g_clipping.right || y2 < g_clipping.top || y2 > g_clipping.bottom) {
		while (true) {
			uint16 clip1 = GetNeededClipping(x1, y1);
			uint16 clip2 = GetNeededClipping(x2, y2);

			if (clip1 == 0 && clip2 == 0) break;
			if ((clip1 & clip2) != 0) return;

			switch (clip1) {
				case 1: case 9:  ClipTop(&x1, &y1, x2, y2); break;
				case 2: case 6:  ClipBottom(&x1, &y1, x2, y2); break;
				case 4: case 5:  ClipLeft(&x1, &y1, x2, y2); break;
				case 8: case 10: ClipRight(&x1, &y1, x2, y2); break;
				default:
					switch (clip2) {
						case 1: case 9:  ClipTop(&x2, &y2, x1, y1); break;
						case 2: case 6:  ClipBottom(&x2, &y2, x1, y1); break;
						case 4: case 5:  ClipLeft(&x2, &y2, x1, y1); break;
						case 8: case 10: ClipRight(&x2, &y2, x1, y1); break;
						default: break;
					}
			}
		}
	}

	y2 -= y1;

	if (y2 == 0) {
		if (x1 >= x2) {
			int16 x = x1;
			x1 = x2;
			x2 = x;
		}

		x2 -= x1 - 1;

		screen += y1 * SCREEN_WIDTH + x1;

		memset(screen, colour, x2);
		return;
	}

	if (y2 < 0) {
		int16 x = x1;
		x1 = x2;
		x2 = x;
		y2 = -y2;
		y1 -= y2;
	}

	screen += y1 * SCREEN_WIDTH;

	x2 -= x1;
	if (x2 == 0) {
		screen += x1;

		while (y2-- != 0) {
			*screen = colour;
			screen += SCREEN_WIDTH;
		}

		return;
	}

	if (x2 < 0) {
		x2 = -x2;
		increment = -1;
	}

	if (x2 < y2) {
		int16 full = y2;
		int16 half = y2 / 2;
		screen += x1;
		while (true) {
			*screen = colour;
			if (y2-- == 0) return;
			screen += SCREEN_WIDTH;
			half -= x2;
			if (half < 0) {
				half += full;
				screen += increment;
			}
		}
	} else {
		int16 full = x2;
		int16 half = x2 / 2;
		screen += x1;
		while (true) {
			*screen = colour;
			if (x2-- == 0) return;
			screen += increment;
			half -= y2;
			if (half < 0) {
				half += full;
				screen += SCREEN_WIDTH;
			}
		}
	}
}

/**
 * Sets the clipping area.
 * @param left The left clipping.
 * @param top The top clipping.
 * @param right The right clipping.
 * @param bottom The bottom clipping.
 */
void GUI_SetClippingArea(uint16 left, uint16 top, uint16 right, uint16 bottom)
{
	g_clipping.left   = left;
	g_clipping.top    = top;
	g_clipping.right  = right;
	g_clipping.bottom = bottom;
}

/**
 * Wrapper around GFX_Screen_Copy. Protects against wrong input values.
 * @param xSrc The X-coordinate on the source divided by 8.
 * @param ySrc The Y-coordinate on the source.
 * @param xDst The X-coordinate on the destination divided by 8.
 * @param yDst The Y-coordinate on the destination.
 * @param width The width divided by 8.
 * @param height The height.
 * @param screenSrc The ID of the source screen.
 * @param screenDst The ID of the destination screen.
 */
void GUI_Screen_Copy(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, Screen screenSrc, Screen screenDst)
{
	if (width  > SCREEN_WIDTH / 8) width  = SCREEN_WIDTH / 8;
	if (height > SCREEN_HEIGHT)    height = SCREEN_HEIGHT;

	if (xSrc < 0) {
		xDst -= xSrc;
		width += xSrc;
		xSrc = 0;
	}

	if (xSrc >= SCREEN_WIDTH / 8 || xDst >= SCREEN_WIDTH / 8) return;

	if (xDst < 0) {
		xSrc -= xDst;
		width += xDst;
		xDst = 0;
	}

	if (ySrc < 0) {
		yDst -= ySrc;
		height += ySrc;
		ySrc = 0;
	}

	if (yDst < 0) {
		ySrc -= yDst;
		height += yDst;
		yDst = 0;
	}

	GFX_Screen_Copy(xSrc * 8, ySrc, xDst * 8, yDst, width * 8, height, screenSrc, screenDst);
}

static uint32 GUI_FactoryWindow_CreateWidgets(void)
{
	uint16 i;
	uint16 count = 0;
	WidgetInfo *wi = g_table_factoryWidgetInfo;
	Widget *w = s_factoryWindowWidgets;

	memset(w, 0, 13 * sizeof(Widget));

	for (i = 0; i < 13; i++, wi++) {
		if ((i == 8 || i == 9 || i == 10 || i == 12) && !g_factoryWindowStarport) continue;
		if (i == 11 && g_factoryWindowStarport) continue;
		if (i == 7 && g_factoryWindowUpgradeCost == 0) continue;

		count++;

		w->index     = i + 46;
		memset(&w->state, 0, sizeof(w->state));
		w->offsetX   = wi->offsetX;
		w->offsetY   = wi->offsetY;
		w->flags.requiresClick = (wi->flags & 0x0001) ? true : false;
		w->flags.notused1 = (wi->flags & 0x0002) ? true : false;
		w->flags.clickAsHover = (wi->flags & 0x0004) ? true : false;
		w->flags.invisible = (wi->flags & 0x0008) ? true : false;
		w->flags.greyWhenInvisible = (wi->flags & 0x0010) ? true : false;
		w->flags.noClickCascade = (wi->flags & 0x0020) ? true : false;
		w->flags.loseSelect = (wi->flags & 0x0040) ? true : false;
		w->flags.notused2 = (wi->flags & 0x0080) ? true : false;
		w->flags.buttonFilterLeft = (wi->flags >> 8) & 0x0f;
		w->flags.buttonFilterRight = (wi->flags >> 12) & 0x0f;
		w->shortcut  = (wi->shortcut < 0) ? abs(wi->shortcut) : GUI_Widget_GetShortcut(*String_Get_ByIndex(wi->shortcut));
		w->clickProc = wi->clickProc;
		w->width     = wi->width;
		w->height    = wi->height;

		if (wi->spriteID < 0) {
			w->drawModeNormal   = DRAW_MODE_NONE;
			w->drawModeSelected = DRAW_MODE_NONE;
			w->drawModeDown     = DRAW_MODE_NONE;
		} else {
			w->drawModeNormal   = DRAW_MODE_SPRITE;
			w->drawModeSelected = DRAW_MODE_SPRITE;
			w->drawModeDown     = DRAW_MODE_SPRITE;
			w->drawParameterNormal.sprite   = g_sprites[wi->spriteID];
			w->drawParameterSelected.sprite = g_sprites[wi->spriteID + 1];
			w->drawParameterDown.sprite     = g_sprites[wi->spriteID + 1];
		}

		if (i != 0) {
			g_widgetInvoiceTail = GUI_Widget_Link(g_widgetInvoiceTail, w);
		} else {
			g_widgetInvoiceTail = w;
		}

		w++;
	}

	GUI_Widget_DrawAll(g_widgetInvoiceTail);

	return count * sizeof(Widget);
}

static uint32 GUI_FactoryWindow_LoadGraymapTbl(void)
{
	uint8 fileID;

	fileID = File_Open("GRAYRMAP.TBL", FILE_MODE_READ);
	File_Read(fileID, s_factoryWindowGraymapTbl, 256);
	File_Close(fileID);

	return 256;
}

static uint16 GUI_FactoryWindow_CalculateStarportPrice(uint16 credits)
{
	credits = (credits / 10) * 4 + (credits / 10) * (Tools_RandomLCG_Range(0, 6) + Tools_RandomLCG_Range(0, 6));

	return min(credits, 999);
}

static int GUI_FactoryWindow_Sorter(const void *a, const void *b)
{
	const FactoryWindowItem *pa = a;
	const FactoryWindowItem *pb = b;

	return pb->sortPriority - pa->sortPriority;
}

static void GUI_FactoryWindow_InitItems(void)
{
	g_factoryWindowTotal = 0;
	g_factoryWindowSelected = 0;
	g_factoryWindowBase = 0;

	memset(g_factoryWindowItems, 0, 25 * sizeof(FactoryWindowItem));

	if (g_factoryWindowStarport) {
		uint16 seconds = (g_timerGame - g_tickScenarioStart) / 60;
		uint16 seed = (seconds / 60) + g_scenarioID + g_playerHouseID;
		seed *= seed;

		Tools_RandomLCG_Seed(seed);
	}

	if (!g_factoryWindowConstructionYard) {
		uint16 i;

		for (i = 0; i < UNIT_MAX; i++) {
			ObjectInfo *oi = &g_table_unitInfo[i].o;

			if (oi->available == 0) continue;

			g_factoryWindowItems[g_factoryWindowTotal].objectInfo = oi;
			g_factoryWindowItems[g_factoryWindowTotal].objectType = i;

			if (g_factoryWindowStarport) {
				g_factoryWindowItems[g_factoryWindowTotal].credits = GUI_FactoryWindow_CalculateStarportPrice(oi->buildCredits);
			} else {
				g_factoryWindowItems[g_factoryWindowTotal].credits = oi->buildCredits;
			}

			g_factoryWindowItems[g_factoryWindowTotal].sortPriority = oi->sortPriority;

			g_factoryWindowTotal++;
		}
	} else {
		uint16 i;

		for (i = 0; i < STRUCTURE_MAX; i++) {
			ObjectInfo *oi = &g_table_structureInfo[i].o;

			if (oi->available == 0) continue;

			g_factoryWindowItems[g_factoryWindowTotal].objectInfo    = oi;
			g_factoryWindowItems[g_factoryWindowTotal].objectType    = i;
			g_factoryWindowItems[g_factoryWindowTotal].credits       = oi->buildCredits;
			g_factoryWindowItems[g_factoryWindowTotal].sortPriority  = oi->sortPriority;

			if (i == 0 || i == 1) g_factoryWindowItems[g_factoryWindowTotal].sortPriority = 0x64;

			g_factoryWindowTotal++;
		}
	}

	if (g_factoryWindowTotal == 0) {
		GUI_DisplayModalMessage("ERROR: No items in construction list!", 0xFFFF);
		PrepareEnd();
		exit(0);
	}

	qsort(g_factoryWindowItems, g_factoryWindowTotal, sizeof(FactoryWindowItem), GUI_FactoryWindow_Sorter);
}

static void GUI_FactoryWindow_Init(void)
{
	static const uint8 xSrc[HOUSE_MAX] = { 0, 0, 16, 0, 0, 0 };
	static const uint8 ySrc[HOUSE_MAX] = { 8, 152, 48, 0, 0, 0 };
	Screen oldScreenID;
	void *wsa;
	int16 i;
	ObjectInfo *oi;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	Sprites_LoadImage("CHOAM.CPS", SCREEN_1, NULL);
	GUI_DrawSprite(SCREEN_1, g_sprites[11], 192, 0, 0, 0); /* "Credits" */

	GUI_Palette_RemapScreen(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_1, g_remap);

	GUI_Screen_Copy(xSrc[g_playerHouseID], ySrc[g_playerHouseID], 0, 8, 7, 40, SCREEN_1, SCREEN_1);
	GUI_Screen_Copy(xSrc[g_playerHouseID], ySrc[g_playerHouseID], 0, 152, 7, 40, SCREEN_1, SCREEN_1);

	GUI_FactoryWindow_CreateWidgets();
	GUI_FactoryWindow_LoadGraymapTbl();
	GUI_FactoryWindow_InitItems();

	for (i = g_factoryWindowTotal; i < 4; i++) GUI_Widget_MakeInvisible(GUI_Widget_Get_ByIndex(g_widgetInvoiceTail, i + 46));

	for (i = 0; i < 4; i++) {
		FactoryWindowItem *item = GUI_FactoryWindow_GetItem(i);

		if (item == NULL) continue;

		oi = item->objectInfo;
		if (oi->available == -1) {
			GUI_DrawSprite(SCREEN_1, g_sprites[oi->spriteID], 72, 24 + i * 32, 0, DRAWSPRITE_FLAG_REMAP, s_factoryWindowGraymapTbl, 1);
		} else {
			GUI_DrawSprite(SCREEN_1, g_sprites[oi->spriteID], 72, 24 + i * 32, 0, 0);
		}
	}

	g_factoryWindowBase = 0;
	g_factoryWindowSelected = 0;

	oi = g_factoryWindowItems[0].objectInfo;

	wsa = WSA_LoadFile(oi->wsa, s_factoryWindowWsaBuffer, sizeof(s_factoryWindowWsaBuffer), false);
	WSA_DisplayFrame(wsa, 0, 128, 48, SCREEN_1);
	WSA_Unload(wsa);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_Safe();

	GUI_DrawFilledRectangle(64, 0, 112, SCREEN_HEIGHT - 1, GFX_GetPixel(72, 23));

	GUI_FactoryWindow_PrepareScrollList();

	GFX_Screen_SetActive(SCREEN_0);

	GUI_FactoryWindow_DrawDetails();

	GUI_DrawCredits(g_playerHouseID, 1);

	GFX_Screen_SetActive(oldScreenID);
}

/**
 * Display the window where you can order/build stuff for a structure.
 * @param isConstructionYard True if this is for a construction yard.
 * @param isStarPort True if this is for a starport.
 * @param upgradeCost Cost of upgrading the structure.
 * @return Unknown value.
 */
FactoryResult GUI_DisplayFactoryWindow(bool isConstructionYard, bool isStarPort, uint16 upgradeCost)
{
	Screen oldScreenID;
	uint8 backup[3];

	oldScreenID = GFX_Screen_SetActive(SCREEN_0);

	memcpy(backup, g_palette1 + 255 * 3, 3);

	g_factoryWindowConstructionYard = isConstructionYard; /* always same value as g_factoryWindowConstructionYard */
	g_factoryWindowStarport = isStarPort;
	g_factoryWindowUpgradeCost = upgradeCost;
	g_factoryWindowOrdered = 0;

	GUI_FactoryWindow_Init();

	GUI_FactoryWindow_UpdateSelection(true);

	for (g_factoryWindowResult = FACTORY_CONTINUE; g_factoryWindowResult == FACTORY_CONTINUE; sleepIdle()) {
		uint16 event;

		GUI_DrawCredits(g_playerHouseID, 0);

		GUI_FactoryWindow_UpdateSelection(false);

		event = GUI_Widget_HandleEvents(g_widgetInvoiceTail);

		if (event == 0x6E) GUI_Production_ResumeGame_Click(NULL);

		GUI_PaletteAnimate();
	}

	GUI_DrawCredits(g_playerHouseID, 1);

	GFX_Screen_SetActive(oldScreenID);

	GUI_FactoryWindow_B495_0F30();

	memcpy(g_palette1 + 255 * 3, backup, 3);

	GFX_SetPalette(g_palette1);

	/* Visible credits have to be reset, as it might not be the real value */
	g_playerCredits = 0xFFFF;

	return g_factoryWindowResult;
}

char *GUI_String_Get_ByIndex(int16 stringID)
{
	extern char g_savegameDesc[5][51];

	switch (stringID) {
		case -5: case -4: case -3: case -2: case -1: {
			char *s = g_savegameDesc[abs((int16)stringID + 1)];
			if (*s == '\0') return NULL;
			return s;
		}

		case -10:
			stringID = (g_gameConfig.music != 0) ? STR_ON : STR_OFF;
			break;

		case -11:
			stringID = (g_gameConfig.sounds != 0) ? STR_ON : STR_OFF;
			break;

		case -12: {
			static const uint16 gameSpeedStrings[] = {
				STR_SLOWEST,
				STR_SLOW,
				STR_NORMAL,
				STR_FAST,
				STR_FASTEST
			};

			stringID = gameSpeedStrings[g_gameConfig.gameSpeed];
		} break;

		case -13:
			stringID = (g_gameConfig.hints != 0) ? STR_ON : STR_OFF;
			break;

		case -14:
			stringID = (g_gameConfig.autoScroll != 0) ? STR_ON : STR_OFF;
			break;

		default: break;
	}

	return String_Get_ByIndex(stringID);
}

static void GUI_StrategicMap_AnimateArrows(void)
{
	if (s_arrowAnimationTimeout >= g_timerGUI) return;
	s_arrowAnimationTimeout = g_timerGUI + 7;

	s_arrowAnimationState = (s_arrowAnimationState + 1) % 4;

	memcpy(g_palette1 + 251 * 3, s_strategicMapArrowColors + s_arrowAnimationState * 3, 4 * 3);

	GFX_SetPalette(g_palette1);
}

static void GUI_StrategicMap_AnimateSelected(uint16 selected, StrategicMapData *data)
{
	char key[4];
	char buffer[81];
	int16 x;
	int16 y;
	uint8 *sprite;
	uint16 width;
	uint16 height;
	uint16 i;

	GUI_Palette_CreateRemap(g_playerHouseID);

	for (i = 0; i < 20; i++) {
		GUI_StrategicMap_AnimateArrows();

		if (data[i].index == 0 || data[i].index == selected) continue;

		GUI_Mouse_Hide_Safe();
		GFX_Screen_Copy2(i * 16, 0, data[i].offsetX, data[i].offsetY, 16, 16, SCREEN_1, SCREEN_0, false);
		GUI_Mouse_Show_Safe();
	}

	sprintf(key, "%d", selected);

	Ini_GetString("PIECES", key, NULL, buffer, sizeof(buffer) - 1, g_fileRegionINI);
	sscanf(buffer, "%hd,%hd", &x, &y);

	sprite = g_sprites[477 + selected];
	width  = Sprite_GetWidth(sprite);
	height = Sprite_GetHeight(sprite);

	x += 8;
	y += 24;

	GUI_Mouse_Hide_Safe();
	GFX_Screen_Copy2(x, y, 16, 16, width, height, SCREEN_0, SCREEN_1, false);
	GUI_Mouse_Show_Safe();

	GFX_Screen_Copy2(16, 16, 176, 16, width, height, SCREEN_1, SCREEN_1, false);

	GUI_DrawSprite(SCREEN_1, sprite, 16, 16, 0, DRAWSPRITE_FLAG_REMAP, g_remap, 1);

	for (i = 0; i < 20; i++) {
		GUI_StrategicMap_AnimateArrows();

		if (data[i].index != selected) continue;

		GUI_DrawSprite(SCREEN_1, g_sprites[505 + data[i].arrow], data[i].offsetX + 16 - x, data[i].offsetY + 16 - y, 0, DRAWSPRITE_FLAG_REMAP, g_remap, 1);
	}

	for (i = 0; i < 4; i++) {
		GUI_Mouse_Hide_Safe();
		GFX_Screen_Copy2((i % 2 == 0) ? 16 : 176, 16, x, y, width, height, SCREEN_1, SCREEN_0, false);
		GUI_Mouse_Show_Safe();

		for (g_timerTimeout = 20; g_timerTimeout != 0; sleepIdle()) {
			GUI_StrategicMap_AnimateArrows();
		}
	}
}

/**
 * Return if a region has already been done.
 * @param region Region to obtain.
 * @return True if and only if the region has already been done.
 */
static bool GUI_StrategicMap_IsRegionDone(uint16 region)
{
	return (g_strategicRegionBits & (1 << region)) != 0;
}

/**
 * Set or reset if a region of the strategic map is already done.
 * @param region Region to change.
 * @param set Region must be set or reset.
 */
static void GUI_StrategicMap_SetRegionDone(uint16 region, bool set)
{
	if (set) {
		g_strategicRegionBits |= (1 << region);
	} else {
		g_strategicRegionBits &= ~(1 << region);
	}
}

static int16 GUI_StrategicMap_ClickedRegion(void)
{
	uint16 key;

	GUI_StrategicMap_AnimateArrows();

	if (Input_Keyboard_NextKey() == 0) return 0;

	key = Input_WaitForValidInput();
	if (key != 0xC6 && key != 0xC7) return 0;

	return g_fileRgnclkCPS[(g_mouseClickY - 24) * 304 + g_mouseClickX - 8];
}

static bool GUI_StrategicMap_FastForwardToggleWithESC(void)
{
	if (Input_Keyboard_NextKey() == 0) return s_strategicMapFastForward;

	if (Input_WaitForValidInput() != 0x1B) return s_strategicMapFastForward;

	s_strategicMapFastForward = !s_strategicMapFastForward;

	Input_History_Clear();

	return s_strategicMapFastForward;
}

static void GUI_StrategicMap_DrawText(const char *string)
{
	static uint32 l_timerNext = 0;
	Screen oldScreenID;
	uint16 y;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	GUI_Screen_Copy(8, 165, 8, 186, 24, 14, SCREEN_0, SCREEN_1);

	GUI_DrawFilledRectangle(64, 172, 255, 185, GFX_GetPixel(64, 186));

	GUI_DrawText_Wrapper(string, 64, 175, 12, 0, 0x12);

	while (g_timerGUI + 90 < l_timerNext) sleepIdle();

	for (y = 185; y > 172; y--) {
		GUI_Screen_Copy(8, y, 8, 165, 24, 14, SCREEN_1, SCREEN_0);

		for (g_timerTimeout = 3; g_timerTimeout != 0; sleepIdle()) {
			if (GUI_StrategicMap_FastForwardToggleWithESC()) break;
		}
	}

	l_timerNext = g_timerGUI + 90;

	GFX_Screen_SetActive(oldScreenID);
}

static uint16 GUI_StrategicMap_ScenarioSelection(uint16 campaignID)
{
	uint16 count;
	char key[6];
	bool loop;
	bool hasRegions = false;
	char category[16];
	StrategicMapData data[20];
	uint16 scenarioID;
	uint16 region;
	uint16 i;

	GUI_Palette_CreateRemap(g_playerHouseID);

	sprintf(category, "GROUP%hu", campaignID);

	memset(data, 0, 20 * sizeof(StrategicMapData));

	for (i = 0; i < 20; i++) {
		char buffer[81];

		sprintf(key, "REG%hu", (uint16)(i + 1));

		if (Ini_GetString(category, key, NULL, buffer, sizeof(buffer) - 1, g_fileRegionINI) == NULL) break;

		sscanf(buffer, "%hd,%hd,%hd,%hd", &data[i].index, &data[i].arrow, &data[i].offsetX, &data[i].offsetY);

		if (!GUI_StrategicMap_IsRegionDone(data[i].index)) hasRegions = true;

		GFX_Screen_Copy2(data[i].offsetX, data[i].offsetY, i * 16, 152, 16, 16, SCREEN_1, SCREEN_1, false);
		GFX_Screen_Copy2(data[i].offsetX, data[i].offsetY, i * 16, 0, 16, 16, SCREEN_1, SCREEN_1, false);
		GUI_DrawSprite(SCREEN_1, g_sprites[505 + data[i].arrow], i * 16, 152, 0, DRAWSPRITE_FLAG_REMAP, g_remap, 1);
	}

	count = i;

	if (!hasRegions) {
		/* This campaign has no available regions left; reset all regions for this campaign */
		for (i = 0; i < count; i++) {
			GUI_StrategicMap_SetRegionDone(data[i].index, false);
		}
	} else {
		/* Mark all regions that are already done as not-selectable */
		for (i = 0; i < count; i++) {
			if (GUI_StrategicMap_IsRegionDone(data[i].index)) data[i].index = 0;
		}
	}

	GUI_Mouse_Hide_Safe();

	for (i = 0; i < count; i++) {
		if (data[i].index == 0) continue;

		GFX_Screen_Copy2(i * 16, 152, data[i].offsetX, data[i].offsetY, 16, 16, SCREEN_1, SCREEN_0, false);
	}

	GUI_Mouse_Show_Safe();
	Input_History_Clear();

	for (loop = true; loop; sleepIdle()) {
		region = GUI_StrategicMap_ClickedRegion();

		if (region == 0) continue;

		for (i = 0; i < count; i++) {
			GUI_StrategicMap_AnimateArrows();

			if (data[i].index == region) {
				loop = false;
				scenarioID = i;
				break;
			}
		}
	}

	GUI_StrategicMap_SetRegionDone(region, true);

	GUI_StrategicMap_DrawText("");

	GUI_StrategicMap_AnimateSelected(region, data);

	scenarioID += (campaignID - 1) * 3 + 2;

	if (campaignID > 7) scenarioID--;
	if (campaignID > 8) scenarioID--;

	return scenarioID;
}

static void GUI_StrategicMap_ReadHouseRegions(uint8 houseID, uint16 campaignID)
{
	char key[4];
	char buffer[100];
	char groupText[16];
	char *s = buffer;

	strncpy(key, g_table_houseInfo[houseID].name, 3);
	key[3] = '\0';

	snprintf(groupText, sizeof(groupText), "GROUP%d", campaignID);

	if (Ini_GetString(groupText, key, NULL, buffer, sizeof(buffer) - 1, g_fileRegionINI) == NULL) return;

	while (*s != '\0') {
		uint16 region = atoi(s);

		if (region != 0) g_regions[region] = houseID;

		while (*s != '\0') {
			if (*s++ == ',') break;
		}
	}
}

static void GUI_StrategicMap_DrawRegion(uint8 houseId, uint16 region, bool progressive)
{
	char key[4];
	char buffer[81];
	int16 x;
	int16 y;
	uint8 *sprite;

	GUI_Palette_CreateRemap(houseId);

	sprintf(key, "%hu", region);

	Ini_GetString("PIECES", key, NULL, buffer, sizeof(buffer), g_fileRegionINI);
	sscanf(buffer, "%hd,%hd", &x, &y);

	sprite = g_sprites[477 + region];

	GUI_DrawSprite(SCREEN_1, sprite, x + 8, y + 24, 0, DRAWSPRITE_FLAG_REMAP, g_remap, 1);

	if (!progressive) return;

	GUI_Screen_FadeIn2(x + 8, y + 24, Sprite_GetWidth(sprite), Sprite_GetHeight(sprite), SCREEN_1, SCREEN_0, GUI_StrategicMap_FastForwardToggleWithESC() ? 0 : 1, false);
}

static void GUI_StrategicMap_PrepareRegions(uint16 campaignID)
{
	uint16 i;

	for (i = 0; i < campaignID; i++) {
		GUI_StrategicMap_ReadHouseRegions(HOUSE_HARKONNEN, i + 1);
		GUI_StrategicMap_ReadHouseRegions(HOUSE_ATREIDES, i + 1);
		GUI_StrategicMap_ReadHouseRegions(HOUSE_ORDOS, i + 1);
		GUI_StrategicMap_ReadHouseRegions(HOUSE_SARDAUKAR, i + 1);
	}

	for (i = 0; i < g_regions[0]; i++) {
		if (g_regions[i + 1] == 0xFFFF) continue;

		GUI_StrategicMap_DrawRegion((uint8)g_regions[i + 1], i + 1, false);
	}
}

static void GUI_StrategicMap_ShowProgression(uint16 campaignID)
{
	char key[10];
	char category[10];
	char buf[100];
	uint16 i;

	sprintf(category, "GROUP%hu", campaignID);

	for (i = 0; i < 6; i++) {
		uint8 houseID = (g_playerHouseID + i) % 6;
		const char *s = buf;

		strncpy(key, g_table_houseInfo[houseID].name, 3);
		key[3] = '\0';

		if (Ini_GetString(category, key, NULL, buf, 99, g_fileRegionINI) == NULL) continue;

		while (*s != '\0') {
			uint16 region = atoi(s);

			if (region != 0) {
				char buffer[81];

				sprintf(key, "%sTXT%d", g_languageSuffixes[g_config.language], region);

				if (Ini_GetString(category, key, NULL, buffer, sizeof(buffer), g_fileRegionINI) != NULL) {
					GUI_StrategicMap_DrawText(buffer);
				}

				GUI_StrategicMap_DrawRegion(houseID, region, true);
			}

			while (*s != '\0') {
				if (*s++ == ',') break;
			}
		}
	}

	GUI_StrategicMap_DrawText("");
}

uint16 GUI_StrategicMap_Show(uint16 campaignID, bool win)
{
	uint16 scenarioID;
	uint16 previousCampaignID;
	uint16 x;
	uint16 y;
	Screen oldScreenID;
	uint8 palette[3 * 256];
	uint8 loc316[12];

	if (campaignID == 0) return 1;

	Timer_Sleep(10);
	Music_Play(0x1D);

	memset(palette, 0, 256 * 3);

	previousCampaignID = campaignID - (win ? 1 : 0);
	oldScreenID = GFX_Screen_SetActive(SCREEN_2);

	GUI_SetPaletteAnimated(palette, 15);

	Mouse_SetRegion(8, 24, 311, 143);

	GUI_Mouse_SetPosition(160, 84);

	Sprites_LoadImage("MAPMACH.CPS", SCREEN_2, g_palette_998A);

	GUI_Palette_RemapScreen(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_2, g_remap);

	x = 0;
	y = 0;

	switch (g_playerHouseID) {
		case HOUSE_HARKONNEN:
			x = 0;
			y = 152;
			break;

		default:
			x = 33;
			y = 152;
			break;

		case HOUSE_ORDOS:
			x = 1;
			y = 24;
			break;
	}

	memcpy(loc316, g_palette1 + 251 * 3, 12);
	memcpy(s_strategicMapArrowColors, g_palette1 + (144 + (g_playerHouseID * 16)) * 3, 4 * 3);
	memcpy(s_strategicMapArrowColors + 4 * 3, s_strategicMapArrowColors, 4 * 3);

	GUI_Screen_Copy(x, y, 0, 152, 7, 40, SCREEN_2, SCREEN_2);
	GUI_Screen_Copy(x, y, 33, 152, 7, 40, SCREEN_2, SCREEN_2);

	switch (g_config.language) {
		case LANGUAGE_GERMAN:
			GUI_Screen_Copy(1, 120, 1, 0, 38, 24, SCREEN_2, SCREEN_2);
			break;

		case LANGUAGE_FRENCH:
			GUI_Screen_Copy(1, 96, 1, 0, 38, 24, SCREEN_2, SCREEN_2);
			break;

		default: break;
	}

	GUI_DrawFilledRectangle(8, 24, 311, 143, 12);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_2, SCREEN_0);
	GUI_SetPaletteAnimated(g_palette1, 15);
	GUI_Mouse_Show_Safe();

	s_strategicMapFastForward = false;

	if (win && campaignID == 1) {
		Sprites_LoadImage("PLANET.CPS", SCREEN_1, g_palette_998A);

		GUI_StrategicMap_DrawText(String_Get_ByIndex(STR_THREE_HOUSES_HAVE_COME_TO_DUNE));

		GUI_Screen_FadeIn2(8, 24, 304, 120, SCREEN_1, SCREEN_0, 0, false);

		Input_History_Clear();

		Sprites_CPS_LoadRegionClick();

		for (g_timerTimeout = 120; g_timerTimeout != 0; sleepIdle()) {
			if (GUI_StrategicMap_FastForwardToggleWithESC()) break;
		}

		Sprites_LoadImage("DUNEMAP.CPS", SCREEN_1 , g_palette_998A);

		GUI_StrategicMap_DrawText(String_Get_ByIndex(STR_TO_TAKE_CONTROL_OF_THE_LAND));

		GUI_Screen_FadeIn2(8, 24, 304, 120, SCREEN_1, SCREEN_0, GUI_StrategicMap_FastForwardToggleWithESC() ? 0 : 1, false);

		for (g_timerTimeout = 60; g_timerTimeout != 0; sleepIdle()) {
			if (GUI_StrategicMap_FastForwardToggleWithESC()) break;
		}

		GUI_StrategicMap_DrawText(String_Get_ByIndex(STR_THAT_HAS_BECOME_DIVIDED));
	} else {
		Sprites_CPS_LoadRegionClick();
	}

	Sprites_LoadImage("DUNERGN.CPS", SCREEN_1, g_palette_998A);

	GFX_Screen_SetActive(SCREEN_1);

	GUI_StrategicMap_PrepareRegions(previousCampaignID);

	if (GUI_StrategicMap_FastForwardToggleWithESC()) {
		GUI_Screen_Copy(1, 24, 1, 24, 38, 120, SCREEN_1, SCREEN_0);
	} else {
		GUI_Screen_FadeIn2(8, 24, 304, 120, SCREEN_1, SCREEN_0, 0, false);
	}

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_0, SCREEN_1);

	if (campaignID != previousCampaignID) GUI_StrategicMap_ShowProgression(campaignID);

	GUI_Mouse_Show_Safe();

	if (*g_regions >= campaignID) {
		GUI_StrategicMap_DrawText(String_Get_ByIndex(STR_SELECT_YOUR_NEXT_REGION));

		scenarioID = GUI_StrategicMap_ScenarioSelection(campaignID);
	} else {
		scenarioID = 0;
	}

	Driver_Music_FadeOut();

	GFX_Screen_SetActive(oldScreenID);

	Mouse_SetRegion(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

	Input_History_Clear();

	memcpy(g_palette1 + 251 * 3, loc316, 12);

	GUI_SetPaletteAnimated(palette, 15);

	GUI_Mouse_Hide_Safe();
	GUI_ClearScreen(SCREEN_0);
	GUI_Mouse_Show_Safe();

	GFX_SetPalette(g_palette1);

	return scenarioID;
}

/**
 * Draw a string to the screen using a fixed width for each char.
 *
 * @param string The string to draw.
 * @param left The most left position where to draw the string.
 * @param top The most top position where to draw the string.
 * @param fgColour The foreground colour of the text.
 * @param bgColour The background colour of the text.
 * @param charWidth The width of a char.
 */
void GUI_DrawText_Monospace(char *string, uint16 left, uint16 top, uint8 fgColour, uint8 bgColour, uint16 charWidth)
{
	char s[2] = " ";

	while (*string != '\0') {
		*s = *string++;
		GUI_DrawText(s, left, top, fgColour, bgColour);
		left += charWidth;
	}
}

void GUI_FactoryWindow_B495_0F30(void)
{
	GUI_Mouse_Hide_Safe();
	GFX_Screen_Copy2(69, ((g_factoryWindowSelected + 1) * 32) + 5, 69, (g_factoryWindowSelected * 32) + 21, 38, 30, SCREEN_1, SCREEN_0, false);
	GUI_Mouse_Show_Safe();
}

FactoryWindowItem *GUI_FactoryWindow_GetItem(int16 offset)
{
	offset += g_factoryWindowBase;

	if (offset < 0 || offset >= g_factoryWindowTotal) return NULL;

	return &g_factoryWindowItems[offset];
}

void GUI_FactoryWindow_DrawDetails(void)
{
	Screen oldScreenID;
	FactoryWindowItem *item = GUI_FactoryWindow_GetItem(g_factoryWindowSelected);
	ObjectInfo *oi = item->objectInfo;
	void *wsa;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	wsa = WSA_LoadFile(oi->wsa, s_factoryWindowWsaBuffer, sizeof(s_factoryWindowWsaBuffer), false);
	WSA_DisplayFrame(wsa, 0, 128, 48, SCREEN_1);
	WSA_Unload(wsa);

	if (g_factoryWindowConstructionYard) {
		const StructureInfo *si;
		int16 x = 288;
		int16 y = 136;
		uint8 *sprite;
		uint16 width;
		uint16 i;
		uint16 j;

		GUI_DrawSprite(SCREEN_1, g_sprites[64], x, y, 0, 0);
		x++;
		y++;

		sprite = g_sprites[24];
		width = Sprite_GetWidth(sprite) + 1;
		si = &g_table_structureInfo[item->objectType];

		for (j = 0; j < g_table_structure_layoutSize[si->layout].height; j++) {
			for (i = 0; i < g_table_structure_layoutSize[si->layout].width; i++) {
				GUI_DrawSprite(SCREEN_1, sprite, x + i * width, y + j * width, 0, 0);
			}
		}
	}

	if (oi->available == -1) {
		GUI_Palette_RemapScreen(128, 48, 184, 112, SCREEN_1, s_factoryWindowGraymapTbl);

		if (g_factoryWindowStarport) {
			GUI_DrawText_Wrapper(String_Get_ByIndex(STR_OUT_OF_STOCK), 220, 99, 6, 0, 0x132);
		} else {
			GUI_DrawText_Wrapper(String_Get_ByIndex(STR_NEED_STRUCTURE_UPGRADE), 220, 94, 6, 0, 0x132);

			if (g_factoryWindowUpgradeCost != 0) {
				GUI_DrawText_Wrapper(String_Get_ByIndex(STR_UPGRADE_COST_D), 220, 104, 6, 0, 0x132, g_factoryWindowUpgradeCost);
			} else {
				GUI_DrawText_Wrapper(String_Get_ByIndex(STR_REPAIR_STRUCTURE_FIRST), 220, 104, 6, 0, 0x132);
			}
		}
	} else {
		if (g_factoryWindowStarport) {
			GUI_Screen_Copy(16, 99, 16, 160, 23, 9, SCREEN_1, SCREEN_1);
			GUI_Screen_Copy(16, 99, 16, 169, 23, 9, SCREEN_1, SCREEN_1);
			GUI_DrawText_Wrapper(String_Get_ByIndex(STR_OUT_OF_STOCK), 220, 169, 6, 0, 0x132);
			GUI_Screen_Copy(16, 99, 16, 178, 23, 9, SCREEN_1, SCREEN_1);
			GUI_DrawText_Wrapper(String_Get_ByIndex(STR_UNABLE_TO_CREATE_MORE), 220, 178, 6, 0, 0x132);

			GUI_FactoryWindow_UpdateDetails(item);
		}
	}

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(16, 48, 16, 48, 23, 112, SCREEN_1, oldScreenID);
	GUI_Mouse_Show_Safe();

	GFX_Screen_SetActive(oldScreenID);

	GUI_FactoryWindow_DrawCaption(NULL);
}

void GUI_FactoryWindow_DrawCaption(const char *caption)
{
	Screen oldScreenID;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	GUI_DrawFilledRectangle(128, 21, 310, 35, 116);

	if (caption != NULL && *caption != '\0') {
		GUI_DrawText_Wrapper(caption, 128, 23, 12, 0, 0x12);
	} else {
		FactoryWindowItem *item = GUI_FactoryWindow_GetItem(g_factoryWindowSelected);
		ObjectInfo *oi = item->objectInfo;
		uint16 width;

		GUI_DrawText_Wrapper(String_Get_ByIndex(oi->stringID_full), 128, 23, 12, 0, 0x12);

		width = Font_GetStringWidth(String_Get_ByIndex(STR_COST_999));
		GUI_DrawText_Wrapper(String_Get_ByIndex(STR_COST_3D), 310 - width, 23, 12, 0, 0x12, item->credits);

		if (g_factoryWindowStarport) {
			width += Font_GetStringWidth(String_Get_ByIndex(STR_QTY_99)) + 2;
			GUI_DrawText_Wrapper(String_Get_ByIndex(STR_QTY_2D), 310 - width, 23, 12, 0, 0x12, item->amount);
		}
	}

	GUI_Mouse_Hide_Safe();
	if (oldScreenID == SCREEN_0) GFX_Screen_Copy2(128, 21, 128, 21, 182, 14, SCREEN_1, oldScreenID, false);
	GUI_Mouse_Show_Safe();

	GFX_Screen_SetActive(oldScreenID);
}

void GUI_FactoryWindow_UpdateDetails(const FactoryWindowItem *item)
{
	int16 y;
	const ObjectInfo *oi = item->objectInfo;
	uint16 type = item->objectType;

	/* check the available units and unit count limit */
	if (oi->available == -1) return;

	y = 160;
	if (oi->available <= item->amount) y = 169;
	else if (g_starPortEnforceUnitLimit && g_table_unitInfo[type].movementType != MOVEMENT_WINGER && g_table_unitInfo[type].movementType != MOVEMENT_SLITHER) {
		House *h = g_playerHouse;
		if (h->unitCount >= h->unitCountMax) y = 178;
	}
	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(16, y, 16, 99, 23, 9, SCREEN_1, SCREEN_ACTIVE);
	GUI_Mouse_Show_Safe();
}

/**
 * Update the selection in the factory window.
 * If \a selectionChanged, it draws the rectangle around the new entry.
 * In addition, the palette colour of the rectangle is slowly changed back and
 * forth between white and the house colour by palette changes, thus giving it
 * the appearance of glowing.
 * @param selectionChanged User has selected a new thing to build.
 */
void GUI_FactoryWindow_UpdateSelection(bool selectionChanged)
{
	static uint32 paletteChangeTimer;
	static int8 paletteColour;
	static int8 paletteChange;

	if (selectionChanged) {
		uint16 y;

		memset(g_palette1 + 255 * 3, 0x3F, 3);

		/* calling GFX_SetPalette() now is useless as it will be done at the end of the function */
		/*GFX_SetPalette(g_palette1);*/

		paletteChangeTimer = 0;
		paletteColour = 0;
		paletteChange = 8;

		y = g_factoryWindowSelected * 32 + 24;

		GUI_Mouse_Hide_Safe();
		GUI_DrawWiredRectangle(71, y - 1, 104, y + 24, 255);
		GUI_DrawWiredRectangle(72, y, 103, y + 23, 255);
		GUI_Mouse_Show_Safe();
	} else {
		if (paletteChangeTimer > g_timerGUI) return;
	}

	paletteChangeTimer = g_timerGUI + 3;
	paletteColour += paletteChange;

	if (paletteColour < 0 || paletteColour > 63) {
		paletteChange = -paletteChange;
		paletteColour += paletteChange;
		return;
	}

	switch (g_playerHouseID) {
		case HOUSE_HARKONNEN:
			*(g_palette1 + 255 * 3 + 1) = paletteColour;
			*(g_palette1 + 255 * 3 + 2) = paletteColour;
			break;

		case HOUSE_ATREIDES:
			*(g_palette1 + 255 * 3 + 0) = paletteColour;
			*(g_palette1 + 255 * 3 + 1) = paletteColour;
			break;

		case HOUSE_ORDOS:
			*(g_palette1 + 255 * 3 + 0) = paletteColour;
			*(g_palette1 + 255 * 3 + 2) = paletteColour;
			break;

		default: break;
	}

	GFX_SetPalette(g_palette1);
}

/**
 * Fade in parts of the screen from one screenbuffer to the other screenbuffer.
 * @param xSrc The X-position to start in the source screenbuffer divided by 8.
 * @param ySrc The Y-position to start in the source screenbuffer.
 * @param xDst The X-position to start in the destination screenbuffer divided by 8.
 * @param yDst The Y-position to start in the destination screenbuffer.
 * @param width The width of the screen to copy divided by 8.
 * @param height The height of the screen to copy.
 * @param screenSrc The ID of the source screen.
 * @param screenDst The ID of the destination screen.
 */
void GUI_Screen_FadeIn(uint16 xSrc, uint16 ySrc, uint16 xDst, uint16 yDst, uint16 width, uint16 height, Screen screenSrc, Screen screenDst)
{
	uint16 offsetsY[100];
	uint16 offsetsX[40];
	int x, y;

	if (screenDst == SCREEN_0) {
		GUI_Mouse_Hide_InRegion(xDst << 3, yDst, (xDst + width) << 3, yDst + height);
	}

	height /= 2;

	for (x = 0; x < width;  x++) offsetsX[x] = x;
	for (y = 0; y < height; y++) offsetsY[y] = y;

	for (x = 0; x < width; x++) {
		uint16 index;
		uint16 temp;

		index = Tools_RandomLCG_Range(0, width - 1);

		temp = offsetsX[index];
		offsetsX[index] = offsetsX[x];
		offsetsX[x] = temp;
	}

	for (y = 0; y < height; y++) {
		uint16 index;
		uint16 temp;

		index = Tools_RandomLCG_Range(0, height - 1);

		temp = offsetsY[index];
		offsetsY[index] = offsetsY[y];
		offsetsY[y] = temp;
	}

	for (y = 0; y < height; y++) {
		uint16 y2 = y;
		for (x = 0; x < width; x++) {
			uint16 offsetX, offsetY;

			offsetX = offsetsX[x];
			offsetY = offsetsY[y2];

			GUI_Screen_Copy(xSrc + offsetX, ySrc + offsetY * 2, xDst + offsetX, yDst + offsetY * 2, 1, 2, screenSrc, screenDst);

			y2++;
			if (y2 == height) y2 = 0;
		}

		/* XXX -- This delays the system so you can in fact see the animation */
		if ((y % 4) == 0) Timer_Sleep(1);
	}

	if (screenDst == SCREEN_0) {
		GUI_Mouse_Show_InRegion();
	}
}

void GUI_FactoryWindow_PrepareScrollList(void)
{
	FactoryWindowItem *item;

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(9, 24, 9, 40, 4, 128, SCREEN_0, SCREEN_1);
	GUI_Mouse_Show_Safe();

	item = GUI_FactoryWindow_GetItem(-1);

	if (item != NULL) {
		ObjectInfo *oi = item->objectInfo;

		if (oi->available == -1) {
			GUI_DrawSprite(SCREEN_1, g_sprites[oi->spriteID], 72, 8, 0, DRAWSPRITE_FLAG_REMAP, s_factoryWindowGraymapTbl, 1);
		} else {
			GUI_DrawSprite(SCREEN_1, g_sprites[oi->spriteID], 72, 8, 0, 0);
		}
	} else {
		GUI_Screen_Copy(9, 32, 9, 24, 4, 8, SCREEN_1, SCREEN_1);
	}

	item = GUI_FactoryWindow_GetItem(4);

	if (item != NULL) {
		ObjectInfo *oi = item->objectInfo;

		if (oi->available == -1) {
			GUI_DrawSprite(SCREEN_1, g_sprites[oi->spriteID], 72, 168, 0, DRAWSPRITE_FLAG_REMAP, s_factoryWindowGraymapTbl, 1);
		} else {
			GUI_DrawSprite(SCREEN_1, g_sprites[oi->spriteID], 72, 168, 0, 0);
		}
	} else {
		GUI_Screen_Copy(9, 0, 9, 168, 4, 8, SCREEN_1, SCREEN_1);
	}
}

/**
 * Fade in parts of the screen from one screenbuffer to the other screenbuffer.
 * @param x The X-position in the source and destination screenbuffers.
 * @param y The Y-position in the source and destination screenbuffers.
 * @param width The width of the screen to copy.
 * @param height The height of the screen to copy.
 * @param screenSrc The ID of the source screen.
 * @param screenDst The ID of the destination screen.
 * @param delay The delay.
 * @param skipNull Wether to copy pixels with colour 0.
 */
void GUI_Screen_FadeIn2(int16 x, int16 y, int16 width, int16 height, Screen screenSrc, Screen screenDst, uint16 delay, bool skipNull)
{
	Screen oldScreenID;
	uint16 i;
	uint16 j;

	uint16 columns[SCREEN_WIDTH];
	uint16 rows[SCREEN_HEIGHT];

	assert(width <= SCREEN_WIDTH);
	assert(height <= SCREEN_HEIGHT);

	if (screenDst == 0) {
		GUI_Mouse_Hide_InRegion(x, y, x + width, y + height);
	}

	for (i = 0; i < width; i++)  columns[i] = i;
	for (i = 0; i < height; i++) rows[i] = i;

	for (i = 0; i < width; i++) {
		uint16 tmp;

		j = Tools_RandomLCG_Range(0, width - 1);

		tmp = columns[j];
		columns[j] = columns[i];
		columns[i] = tmp;
	}

	for (i = 0; i < height; i++) {
		uint16 tmp;

		j = Tools_RandomLCG_Range(0, height - 1);

		tmp = rows[j];
		rows[j] = rows[i];
		rows[i] = tmp;
	}

	oldScreenID = GFX_Screen_SetActive(screenDst);

	for (j = 0; j < height; j++) {
		uint16 j2 = j;

		for (i = 0; i < width; i++) {
			uint8 colour;
			uint16 curX = x + columns[i];
			uint16 curY = y + rows[j2];

			if (++j2 >= height) j2 = 0;

			GFX_Screen_SetActive(screenSrc);

			colour = GFX_GetPixel(curX, curY);

			GFX_Screen_SetActive(screenDst);

			if (skipNull && colour == 0) continue;

			GFX_PutPixel(curX, curY, colour);
		}
		GFX_Screen_SetDirty(screenDst, x, y, x + width, y + height);

		Timer_Sleep(delay);
	}

	if (screenDst == 0) {
		GUI_Mouse_Show_InRegion();
	}

	GFX_Screen_SetActive(oldScreenID);
}

/**
 * Show the mouse on the screen. Copy the screen behind the mouse in a safe
 *  buffer.
 */
void GUI_Mouse_Show(void)
{
	int left, top;

	if (g_mouseDisabled == 1) return;
	if (g_mouseHiddenDepth == 0 || --g_mouseHiddenDepth != 0) return;

	left = g_mouseX - g_mouseSpriteHotspotX;
	top  = g_mouseY - g_mouseSpriteHotspotY;

	s_mouseSpriteLeft = (left < 0) ? 0 : (left >> 3);
	s_mouseSpriteTop = (top < 0) ? 0 : top;

	s_mouseSpriteWidth = g_mouseWidth;
	if ((left >> 3) + g_mouseWidth >= SCREEN_WIDTH / 8) s_mouseSpriteWidth -= (left >> 3) + g_mouseWidth - SCREEN_WIDTH / 8;

	s_mouseSpriteHeight = g_mouseHeight;
	if (top + g_mouseHeight >= SCREEN_HEIGHT) s_mouseSpriteHeight -= top + g_mouseHeight - SCREEN_HEIGHT;

	if (g_mouseSpriteBuffer != NULL) {
		GFX_CopyToBuffer(s_mouseSpriteLeft * 8, s_mouseSpriteTop, s_mouseSpriteWidth * 8, s_mouseSpriteHeight, g_mouseSpriteBuffer);
	}

	GUI_DrawSprite(SCREEN_0, g_mouseSprite, left, top, 0, 0);
}

/**
 * Hide the mouse from the screen. Do this by copying the mouse buffer back to
 *  the screen.
 */
void GUI_Mouse_Hide(void)
{
	if (g_mouseDisabled == 1) return;

	if (g_mouseHiddenDepth == 0 && s_mouseSpriteWidth != 0) {
		if (g_mouseSpriteBuffer != NULL) {
			GFX_CopyFromBuffer(s_mouseSpriteLeft * 8, s_mouseSpriteTop, s_mouseSpriteWidth * 8, s_mouseSpriteHeight, g_mouseSpriteBuffer);
		}

		s_mouseSpriteWidth = 0;
	}

	g_mouseHiddenDepth++;
}

/**
 * The safe version of GUI_Mouse_Hide(). It waits for a mouselock before doing
 *  anything.
 */
void GUI_Mouse_Hide_Safe(void)
{
	while (g_mouseLock != 0) sleepIdle();
	if (g_mouseDisabled == 1) return;
	g_mouseLock++;

	GUI_Mouse_Hide();

	g_mouseLock--;
}

/**
 * The safe version of GUI_Mouse_Show(). It waits for a mouselock before doing
 *  anything.
 */
void GUI_Mouse_Show_Safe(void)
{
	while (g_mouseLock != 0) sleepIdle();
	if (g_mouseDisabled == 1) return;
	g_mouseLock++;

	GUI_Mouse_Show();

	g_mouseLock--;
}

/**
 * Show the mouse if needed. Should be used in combination with
 *  #GUI_Mouse_Hide_InRegion().
 */
void GUI_Mouse_Show_InRegion(void)
{
	uint8 counter;

	while (g_mouseLock != 0) sleepIdle();
	g_mouseLock++;

	counter = g_regionFlags & 0xFF;
	if (counter == 0 || --counter != 0) {
		g_regionFlags = (g_regionFlags & 0xFF00) | (counter & 0xFF);
		g_mouseLock--;
		return;
	}

	if ((g_regionFlags & 0x4000) != 0) {
		GUI_Mouse_Show();
	}

	g_regionFlags = 0;
	g_mouseLock--;
}

/**
 * Hide the mouse when it is inside the specified region. Works with
 *  #GUI_Mouse_Show_InRegion(), which only calls #GUI_Mouse_Show() when
 *  mouse was really hidden.
 */
void GUI_Mouse_Hide_InRegion(uint16 left, uint16 top, uint16 right, uint16 bottom)
{
	int minx, miny;
	int maxx, maxy;

	minx = left - ((g_mouseWidth - 1) << 3) + g_mouseSpriteHotspotX;
	if (minx < 0) minx = 0;

	miny = top - g_mouseHeight + g_mouseSpriteHotspotY;
	if (miny < 0) miny = 0;

	maxx = right + g_mouseSpriteHotspotX;
	if (maxx > SCREEN_WIDTH - 1) maxx = SCREEN_WIDTH - 1;

	maxy = bottom + g_mouseSpriteHotspotY;
	if (maxy > SCREEN_HEIGHT - 1) maxy = SCREEN_HEIGHT - 1;

	while (g_mouseLock != 0) sleepIdle();
	g_mouseLock++;

	if (g_regionFlags == 0) {
		g_regionMinX = minx;
		g_regionMinY = miny;
		g_regionMaxX = maxx;
		g_regionMaxY = maxy;
	}

	if (minx > g_regionMinX) g_regionMinX = minx;
	if (miny > g_regionMinY) g_regionMinY = miny;
	if (maxx < g_regionMaxX) g_regionMaxX = maxx;
	if (maxy < g_regionMaxY) g_regionMaxY = maxy;

	if ((g_regionFlags & 0x4000) == 0 &&
	     g_mouseX >= g_regionMinX &&
	     g_mouseX <= g_regionMaxX &&
	     g_mouseY >= g_regionMinY &&
	     g_mouseY <= g_regionMaxY) {
		GUI_Mouse_Hide();

		g_regionFlags |= 0x4000;
	}

	g_regionFlags |= 0x8000;
	g_regionFlags = (g_regionFlags & 0xFF00) | (((g_regionFlags & 0x00FF) + 1) & 0xFF);

	g_mouseLock--;
}

/**
 * Show the mouse if needed. Should be used in combination with
 *  GUI_Mouse_Hide_InWidget().
 */
void GUI_Mouse_Show_InWidget(void)
{
	GUI_Mouse_Show_InRegion();
}

/**
 * Hide the mouse when it is inside the specified widget. Works with
 *  #GUI_Mouse_Show_InWidget(), which only calls #GUI_Mouse_Show() when
 *  mouse was really hidden.
 * @param widgetIndex The index of the widget to check on.
 */
void GUI_Mouse_Hide_InWidget(uint16 widgetIndex)
{
	uint16 left, top;
	uint16 width, height;

	left   = g_widgetProperties[widgetIndex].xBase << 3;
	top    = g_widgetProperties[widgetIndex].yBase;
	width  = g_widgetProperties[widgetIndex].width << 3;
	height = g_widgetProperties[widgetIndex].height;

	GUI_Mouse_Hide_InRegion(left, top, left + width - 1, top + height - 1);
}

/**
 * Draws a chess-pattern filled rectangle.
 * @param left The X-position of the rectangle.
 * @param top The Y-position of the rectangle.
 * @param width The width of the rectangle.
 * @param height The height of the rectangle.
 * @param colour The colour of the rectangle.
 */
void GUI_DrawBlockedRectangle(int16 left, int16 top, int16 width, int16 height, uint8 colour)
{
	uint8 *screen;

	if (width <= 0) return;
	if (height <= 0) return;
	if (left >= SCREEN_WIDTH) return;
	if (top >= SCREEN_HEIGHT) return;

	if (left < 0) {
		if (left + width <= 0) return;
		width += left;
		left = 0;
	}
	if (top < 0) {
		if (top + height <= 0) return;
		height += top;
		top = 0;
	}

	if (left + width >= SCREEN_WIDTH) {
		width = SCREEN_WIDTH - left;
	}
	if (top + height >= SCREEN_HEIGHT) {
		height = SCREEN_HEIGHT - top;
	}

	screen = GFX_Screen_GetActive();
	screen += top * SCREEN_WIDTH + left;

	for (; height > 0; height--) {
		int i = width;

		if ((height & 1) != (width & 1)) {
			screen++;
			i--;
		}

		for (; i > 0; i -= 2) {
			*screen = colour;
			screen += 2;
		}

		screen += SCREEN_WIDTH - width - (height & 1);
	}
}

/**
 * Set the mouse to the given position on the screen.
 *
 * @param x The new X-position of the mouse.
 * @param y The new Y-position of the mouse.
 */
void GUI_Mouse_SetPosition(uint16 x, uint16 y)
{
	while (g_mouseLock != 0) sleepIdle();
	g_mouseLock++;

	if (x < g_mouseRegionLeft)   x = g_mouseRegionLeft;
	if (x > g_mouseRegionRight)  x = g_mouseRegionRight;
	if (y < g_mouseRegionTop)    y = g_mouseRegionTop;
	if (y > g_mouseRegionBottom) y = g_mouseRegionBottom;

	g_mouseX = x;
	g_mouseY = y;

	Video_Mouse_SetPosition(x, y);

	if (g_mouseX != g_mousePrevX || g_mouseY != g_mousePrevY) {
		GUI_Mouse_Hide();
		GUI_Mouse_Show();
	}

	g_mouseLock--;
}

/**
 * Remap all the colours in the region with the ones indicated by the remap palette.
 * @param left The left of the region to remap.
 * @param top The top of the region to remap.
 * @param width The width of the region to remap.
 * @param height The height of the region to remap.
 * @param screenID The screen to do the remapping on.
 * @param remap The pointer to the remap palette.
 */
void GUI_Palette_RemapScreen(uint16 left, uint16 top, uint16 width, uint16 height, Screen screenID, const uint8 *remap)
{
	uint8 *screen = GFX_Screen_Get_ByIndex(screenID);

	screen += top * SCREEN_WIDTH + left;
	for (; height > 0; height--) {
		int i;
		for (i = width; i > 0; i--) {
			uint8 pixel = *screen;
			*screen++ = remap[pixel];
		}
		screen += SCREEN_WIDTH - width;
	}
}

uint16 GUI_HallOfFame_Tick(void)
{
	static uint32 l_timerNext = 0;
	static int16 colouringDirection = 1;

	if (l_timerNext >= g_timerGUI) return 0;
	l_timerNext = g_timerGUI + 2;

	if (*s_palette1_houseColour >= 63) {
		colouringDirection = -1;
	} else if (*s_palette1_houseColour <= 35) {
		colouringDirection = 1;
	}

	*s_palette1_houseColour += colouringDirection;

	GFX_SetPalette(g_palette1);

	return 0;
}

static Widget *GUI_HallOfFame_CreateButtons(HallOfFameStruct *data)
{
	const char *resumeString;
	const char *clearString;
	Widget *wClear;
	Widget *wResume;
	uint16 width;

	memcpy(s_temporaryColourBorderSchema, s_colourBorderSchema, sizeof(s_colourBorderSchema));
	memcpy(s_colourBorderSchema, s_HOF_ColourBorderSchema, sizeof(s_colourBorderSchema));

	resumeString = String_Get_ByIndex(STR_RESUME_GAME2);
	clearString  = String_Get_ByIndex(STR_CLEAR_LIST);

	width = max(Font_GetStringWidth(resumeString), Font_GetStringWidth(clearString)) + 6;

	/* "Clear List" */
	wClear = GUI_Widget_Allocate(100, *clearString, 160 - width - 18, 180, 0xFFFE, STR_CLEAR_LIST);
	wClear->width     = width;
	wClear->height    = 10;
	wClear->clickProc = &GUI_Widget_HOF_ClearList_Click;
	memset(&wClear->flags, 0, sizeof(wClear->flags));
	wClear->flags.requiresClick = true;
	wClear->flags.clickAsHover = true;
	wClear->flags.loseSelect = true;
	wClear->flags.notused2 = true;
	wClear->flags.buttonFilterLeft = 4;
	wClear->flags.buttonFilterRight = 4;
	wClear->data      = data;

	/* "Resume Game" */
	wResume = GUI_Widget_Allocate(101, *resumeString, 178, 180, 0xFFFE, STR_RESUME_GAME2);
	wResume->width     = width;
	wResume->height    = 10;
	wResume->clickProc = &GUI_Widget_HOF_Resume_Click;
	memset(&wResume->flags, 0, sizeof(wResume->flags));
	wResume->flags.requiresClick = true;
	wResume->flags.clickAsHover = true;
	wResume->flags.loseSelect = true;
	wResume->flags.notused2 = true;
	wResume->flags.buttonFilterLeft = 4;
	wResume->flags.buttonFilterRight = 4;
	wResume->data      = data;

	return GUI_Widget_Insert(wClear, wResume);
}

static void GUI_HallOfFame_DeleteButtons(Widget *w)
{
	while (w != NULL) {
		Widget *next = w->next;

		free(w);

		w = next;
	}

	memcpy(s_colourBorderSchema, s_temporaryColourBorderSchema, sizeof(s_temporaryColourBorderSchema));
}

static void GUI_HallOfFame_Encode(HallOfFameStruct *data)
{
	uint8 i;
	uint8 *d;

	for (d = (uint8 *)data, i = 0; i < 128; i++, d++) *d = (*d + i) ^ 0xA7;
}

static void GUI_HallOfFame_Decode(HallOfFameStruct *data)
{
	uint8 i;
	uint8 *d;

	for (d = (uint8 *)data, i = 0; i < 128; i++, d++) *d = (*d ^ 0xA7) - i;
}

static uint16 GUI_HallOfFame_InsertScore(HallOfFameStruct *data, uint16 score)
{
	uint16 i;
	for (i = 0; i < 8; i++, data++) {
		if (data->score >= score) continue;

		memmove(data + 1, data, 128);
		memset(data->name, 0, 6);
		data->score = score;
		data->houseID = g_playerHouseID;
		data->rank = GUI_HallOfFame_GetRank(score);
		data->campaignID = g_campaignID;

		return i + 1;
	}

	return 0;
}

void GUI_HallOfFame_Show(uint16 score)
{
	uint16 width;
	uint16 editLine;
	Widget *w;
	uint8 fileID;
	HallOfFameStruct *data;

	GUI_Mouse_Hide_Safe();

	if (score == 0xFFFF) {
		if (!File_Exists_Personal("SAVEFAME.DAT")) {
			GUI_Mouse_Show_Safe();
			return;
		}
		s_ticksPlayed = 0;
	}

	data = (HallOfFameStruct *)GFX_Screen_Get_ByIndex(SCREEN_2);

	if (!File_Exists_Personal("SAVEFAME.DAT")) {
		uint16 written;

		memset(data, 0, 128);

		GUI_HallOfFame_Encode(data);

		fileID = File_Open_Personal("SAVEFAME.DAT", FILE_MODE_WRITE);
		written = File_Write(fileID, data, 128);
		File_Close(fileID);

		if (written != 128) return;
	}

	File_ReadBlockFile_Personal("SAVEFAME.DAT", data, 128);

	GUI_HallOfFame_Decode(data);

	GUI_HallOfFame_DrawBackground(score, true);

	if (score == 0xFFFF) {
		editLine = 0;
	} else {
		editLine = GUI_HallOfFame_InsertScore(data, score);
	}

	width = GUI_HallOfFame_DrawData(data, false);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);

	if (editLine != 0) {
		WidgetProperties backupProperties;
		char *name;

		name = data[editLine - 1].name;

		memcpy(&backupProperties, &g_widgetProperties[19], sizeof(WidgetProperties));

		g_widgetProperties[19].xBase = 4;
		g_widgetProperties[19].yBase = (editLine - 1) * 11 + 90;
		g_widgetProperties[19].width = width / 8;
		g_widgetProperties[19].height = 11;
		g_widgetProperties[19].fgColourBlink = 6;
		g_widgetProperties[19].fgColourNormal = 116;

		GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

		while (*name == '\0') {
			char *nameEnd;
			Screen oldScreenID;

			oldScreenID = GFX_Screen_SetActive(SCREEN_0);
			Widget_SetAndPaintCurrentWidget(19);
			GFX_Screen_SetActive(oldScreenID);

			GUI_EditBox(name, 5, 19, NULL, &GUI_HallOfFame_Tick, false);

			if (*name == '\0') continue;

			nameEnd = name + strlen(name) - 1;

			while (*nameEnd <= ' ' && nameEnd >= name) *nameEnd-- = '\0';
		}

		memcpy(&g_widgetProperties[19], &backupProperties, sizeof(WidgetProperties));

		GUI_HallOfFame_DrawData(data, true);

		GUI_HallOfFame_Encode(data);

		fileID = File_Open_Personal("SAVEFAME.DAT", FILE_MODE_WRITE);
		File_Write(fileID, data, 128);
		File_Close(fileID);
	}

	GUI_Mouse_Show_Safe();

	w = GUI_HallOfFame_CreateButtons(data);

	Input_History_Clear();

	GFX_Screen_SetActive(SCREEN_0);

	for (g_doQuitHOF = false; !g_doQuitHOF; sleepIdle()) {
		GUI_Widget_HandleEvents(w);
	}

	GUI_HallOfFame_DeleteButtons(w);

	Input_History_Clear();

	if (score == 0xFFFF) return;

	memset(g_palette1 + 255 * 3, 0, 3);
}

uint16 GUI_HallOfFame_DrawData(HallOfFameStruct *data, bool show)
{
	Screen oldScreenID;
	const char *scoreString;
	const char *battleString;
	uint16 width = 0;
	uint16 offsetY;
	uint16 scoreX;
	uint16 battleX;
	uint8 i;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);
	GUI_DrawFilledRectangle(8, 80, 311, 178, 116);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

	battleString = String_Get_ByIndex(STR_BATTLE);
	scoreString = String_Get_ByIndex(STR_SCORE);

	scoreX = 320 - Font_GetStringWidth(scoreString) / 2 - 12;
	battleX = scoreX - Font_GetStringWidth(scoreString) / 2 - 8 - Font_GetStringWidth(battleString) / 2;
	offsetY = 80;

	GUI_DrawText_Wrapper(String_Get_ByIndex(STR_NAME_AND_RANK), 32, offsetY, 8, 0, 0x22);
	GUI_DrawText_Wrapper(battleString, battleX, offsetY, 8, 0, 0x122);
	GUI_DrawText_Wrapper(scoreString, scoreX, offsetY, 8, 0, 0x122);

	offsetY = 90;
	for (i = 0; i < 8; i++, offsetY += 11) {
		char buffer[81];
		const char *p1, *p2;

		if (data[i].score == 0) break;

		if (g_config.language == LANGUAGE_FRENCH) {
			p1 = String_Get_ByIndex(_rankScores[data[i].rank].rankString);
			p2 = g_table_houseInfo[data[i].houseID].name;
		} else {
			p1 = g_table_houseInfo[data[i].houseID].name;
			p2 = String_Get_ByIndex(_rankScores[data[i].rank].rankString);
		}
		snprintf(buffer, sizeof(buffer), "%s, %s %s", data[i].name, p1, p2);

		if (*data[i].name == '\0') {
			width = battleX - 36 - Font_GetStringWidth(buffer);
		} else {
			GUI_DrawText_Wrapper(buffer, 32, offsetY, 15, 0, 0x22);
		}

		GUI_DrawText_Wrapper("%u.", 24, offsetY, 15, 0, 0x222, i + 1);
		GUI_DrawText_Wrapper("%u", battleX, offsetY, 15, 0, 0x122, data[i].campaignID);
		GUI_DrawText_Wrapper("%u", scoreX, offsetY, 15, 0, 0x122, data[i].score);
	}

	if (show) {
		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(1, 80, 1, 80, 38, 100, SCREEN_1, SCREEN_0);
		GUI_Mouse_Show_Safe();
	}

	GFX_Screen_SetActive(oldScreenID);

	return width;
}

/**
 * Draw a filled rectangle using xor.
 * @param left The left position of the rectangle.
 * @param top The top position of the rectangle.
 * @param right The right position of the rectangle.
 * @param bottom The bottom position of the rectangle.
 * @param colour The colour of the rectangle.
 */
void GUI_DrawXorFilledRectangle(int16 left, int16 top, int16 right, int16 bottom, uint8 colour)
{
	uint16 x;
	uint16 y;
	uint16 height;
	uint16 width;

	uint8 *screen = GFX_Screen_GetActive();

	if (left >= SCREEN_WIDTH) return;
	if (left < 0) left = 0;

	if (top >= SCREEN_HEIGHT) return;
	if (top < 0) top = 0;

	if (right >= SCREEN_WIDTH) right = SCREEN_WIDTH - 1;
	if (right < 0) right = 0;

	if (bottom >= SCREEN_HEIGHT) bottom = SCREEN_HEIGHT - 1;
	if (bottom < 0) bottom = 0;

	if (left > right) return;
	if (top > bottom) return;

	screen += left + top * SCREEN_WIDTH;
	width = right - left + 1;
	height = bottom - top + 1;
	for (y = 0; y < height; y++) {
		for (x = 0; x < width; x++) {
			*screen++ ^= colour;
		}
		screen += SCREEN_WIDTH - width;
	}
}

/**
 * Create the remap palette for the givern house.
 * @param houseID The house ID.
 */
void GUI_Palette_CreateRemap(uint8 houseID)
{
	int16 i;
	int16 loc4;
	int16 loc6;
	uint8 *remap;

	remap = g_remap;
	for (i = 0; i < 0x100; i++, remap++) {
		*remap = i & 0xFF;

		loc6 = i / 16;
		loc4 = i % 16;
		if (loc6 == 9 && loc4 <= 6) {
			*remap = (houseID << 4) + 0x90 + loc4;
		}
	}
}

/**
 * Draw the screen.
 * This also handles animation tick and other viewport related activity.
 * @param screenID The screen to draw on.
 */
void GUI_DrawScreen(Screen screenID)
{
	static uint32 s_timerViewportMessage = 0;
	bool hasScrolled = false;
	Screen oldScreenID;
	uint16 xpos;

	if (g_selectionType == SELECTIONTYPE_MENTAT) return;
	if (g_selectionType == SELECTIONTYPE_DEBUG) return;
	if (g_selectionType == SELECTIONTYPE_UNKNOWN6) return;
	if (g_selectionType == SELECTIONTYPE_INTRO) return;

	oldScreenID = GFX_Screen_SetActive(screenID);

	if (!GFX_Screen_IsActive(SCREEN_0)) g_viewport_forceRedraw = true;

	Explosion_Tick();
	Animation_Tick();
	Unit_Sort();

	if (!g_viewport_forceRedraw && g_viewportPosition != g_minimapPosition) {
		uint16 viewportX = Tile_GetPackedX(g_viewportPosition);
		uint16 viewportY = Tile_GetPackedY(g_viewportPosition);
		int16 xOffset = Tile_GetPackedX(g_minimapPosition) - viewportX; /* Horizontal offset between viewport and minimap. */
		int16 yOffset = Tile_GetPackedY(g_minimapPosition) - viewportY; /* Vertical offset between viewport and minmap. */

		/* Overlap remaining in tiles. */
		int16 xOverlap = 15 - abs(xOffset);
		int16 yOverlap = 10 - abs(yOffset);

		int16 x, y;

		if (xOverlap < 1 || yOverlap < 1) {
			g_viewport_forceRedraw = true;
		} else if (!g_viewport_forceRedraw && (xOverlap != 15 || yOverlap != 10)) {
			Map_SetSelectionObjectPosition(0xFFFF);
			hasScrolled = true;

			GUI_Mouse_Hide_InWidget(2);

			GUI_Screen_Copy(max(-xOffset << 1, 0), 40 + max(-yOffset << 4, 0), max(0, xOffset << 1), 40 + max(0, yOffset << 4), xOverlap << 1, yOverlap << 4, SCREEN_0, SCREEN_1);
		} else {
			g_viewport_forceRedraw = true;
		}

		xOffset = max(0, xOffset);
		yOffset = max(0, yOffset);

		for (y = 0; y < 10; y++) {
			uint16 mapYBase = (y + viewportY) << 6;

			for (x = 0; x < 15; x++) {
				if (x >= xOffset && (xOffset + xOverlap) > x && y >= yOffset && (yOffset + yOverlap) > y && !g_viewport_forceRedraw) continue;

				Map_Update(x + viewportX + mapYBase, 0, true);
			}
		}
	}

	if (hasScrolled) {
		Map_SetSelectionObjectPosition(0xFFFF);

		for (xpos = 0; xpos < 14; xpos++) {
			uint16 v = g_minimapPosition + xpos + 6*64;

			BitArray_Set(g_dirtyViewport, v);
			BitArray_Set(g_dirtyMinimap, v);

			g_dirtyViewportCount++;
		}
	}

	g_minimapPosition = g_viewportPosition;
	g_selectionRectanglePosition = g_selectionPosition;

	if (g_viewportMessageCounter != 0 && s_timerViewportMessage < g_timerGUI) {
		g_viewportMessageCounter--;
		s_timerViewportMessage = g_timerGUI + 60;

		for (xpos = 0; xpos < 14; xpos++) {
			Map_Update(g_viewportPosition + xpos + 6 * 64, 0, true);
		}
	}

	GUI_Widget_Viewport_Draw(g_viewport_forceRedraw, hasScrolled, !GFX_Screen_IsActive(SCREEN_0));

	g_viewport_forceRedraw = false;

	GFX_Screen_SetActive(oldScreenID);

	Map_SetSelectionObjectPosition(g_selectionRectanglePosition);
	Map_UpdateMinimapPosition(g_minimapPosition, false);

	GUI_Mouse_Show_InWidget();
}

/**
 * Set a new palette, but animate it in slowly.
 * @param palette The new palette.
 * @param ticksOfAnimation The amount of ticks it should take.
 */
void GUI_SetPaletteAnimated(uint8 *palette, int16 ticksOfAnimation)
{
	bool progress;
	int16 diffPerTick;
	int16 tickSlice;
	uint32 timerCurrent;
	int16 highestDiff;
	int16 ticks;
	uint16 tickCurrent;
	uint8 data[256 * 3];
	int i;

	if (palette == NULL) return;

	memcpy(data, g_paletteActive, 256 * 3);

	highestDiff = 0;
	for (i = 0; i < 256 * 3; i++) {
		int16 diff = (int16)palette[i] - (int16)data[i];
		highestDiff = max(highestDiff, abs(diff));
	}

	ticks = ticksOfAnimation << 8;
	if (highestDiff != 0) ticks /= highestDiff;

	/* Find a nice value to change every timeslice */
	tickSlice = ticks;
	diffPerTick = 1;
	while (diffPerTick <= highestDiff && ticks < (2 << 8)) {
		ticks += tickSlice;
		diffPerTick++;
	}

	tickCurrent = 0;
	timerCurrent = g_timerSleep;

	for (;;) {
		progress = false;	/* will be set true if any color is changed */

		tickCurrent  += (uint16)ticks;
		timerCurrent += (uint32)(tickCurrent >> 8);
		tickCurrent  &= 0xFF;

		for (i = 0; i < 256 * 3; i++) {
			int16 goal = palette[i];
			int16 current = data[i];

			if (goal == current) continue;

			progress = true;
			if (goal > current) {
				current += diffPerTick;
				if (current > goal) current = goal;
			} else {
				current -= diffPerTick;
				if (current < goal) current = goal;
			}
			data[i] = (uint8)current;
		}

		/* if no color was changed, the target palette has been reached */
		if (!progress) break;

		GFX_SetPalette(data);

		while (g_timerSleep < timerCurrent) sleepIdle();
	}
}
