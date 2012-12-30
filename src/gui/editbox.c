/** @file src/gui/editbox.c Editbox routines. */

#include <stdio.h>
#include "types.h"
#include "../os/sleep.h"

#include "font.h"
#include "gui.h"
#include "widget.h"
#include "../gfx.h"
#include "../input/input.h"
#include "../timer.h"

/**
 * Draw a blinking cursor, used inside the EditBox.
 *
 * @param positionX Where to draw the cursor on the X position.
 * @param resetBlink If true, the blinking is reset and restarted.
 */
static void GUI_EditBox_BlinkCursor(uint16 positionX, bool resetBlink)
{
	static uint32 tickEditBox = 0;           /* Ticker for cursor blinking. */
	static bool   editBoxShowCursor = false; /* Cursor is active. */

	if (resetBlink) {
		tickEditBox = 0;
		editBoxShowCursor = true;
	}

	if (tickEditBox > g_timerGUI) return;
	if (!resetBlink) {
		tickEditBox = g_timerGUI + 20;
	}

	editBoxShowCursor = !editBoxShowCursor;

	GUI_Mouse_Hide_Safe();
	GUI_DrawFilledRectangle(positionX, g_curWidgetYBase, positionX + Font_GetCharWidth('W'), g_curWidgetYBase + g_curWidgetHeight - 1, (editBoxShowCursor) ? g_curWidgetFGColourBlink : g_curWidgetFGColourNormal);
	GUI_Mouse_Show_Safe();
}

/**
 * Show an EditBox and handles the input.
 * @param text The text to edit. Uses the pointer to make the modifications.
 * @param maxLength The maximum length of the text.
 * @param unknown1 Unknown.
 * @param w The widget this editbox is attached to.
 * @param tickProc The function to call every tick, for animation etc.
 * @param unknown4 Unknown.
 * @return Unknown.
 */
uint16 GUI_EditBox(char *text, uint16 maxLength, uint16 unknown1, Widget *w, uint16 (*tickProc)(void), uint16 unknown4)
{
	Screen oldScreenID;
	uint16 oldValue_07AE_0000;
	uint16 positionX;
	uint16 maxWidth;
	uint16 textWidth;
	uint16 textLength;
	uint16 returnValue;
	char *t;

	/* Initialize */
	{
		Input_Flags_SetBits(INPUT_FLAG_NO_TRANSLATE);
		Input_Flags_ClearBits(INPUT_FLAG_UNKNOWN_2000);

		oldScreenID = GFX_Screen_SetActive(SCREEN_0);

		oldValue_07AE_0000 = Widget_SetCurrentWidget(unknown1);

		returnValue = 0x0;
	}

	positionX = g_curWidgetXBase << 3;

	textWidth = 0;
	textLength = 0;
	maxWidth = (g_curWidgetWidth << 3) - Font_GetCharWidth('W') - 1;
	t = text;

	/* Calculate the length and width of the current string */
	for (; *t != '\0'; t++) {
		textWidth += Font_GetCharWidth(*t);
		textLength++;

		if (textWidth >= maxWidth) break;
	}
	*t = '\0';

	if ((unknown4 & 0x1) != 0) {
		unknown4 |= 0x4;
	}

	GUI_Mouse_Hide_Safe();

	if ((unknown4 & 0x4) != 0) Widget_PaintCurrentWidget();

	GUI_DrawText_Wrapper(text, positionX, g_curWidgetYBase, g_curWidgetFGColourBlink, g_curWidgetFGColourNormal, 0);

	GUI_EditBox_BlinkCursor(positionX + textWidth, false);

	GUI_Mouse_Show_Safe();

	for (;; sleepIdle()) {
		uint16 keyWidth;
		uint16 key;

		if (tickProc != NULL) {
			returnValue = tickProc();
			if (returnValue != 0) break;
		}

		key = GUI_Widget_HandleEvents(w);

		GUI_EditBox_BlinkCursor(positionX + textWidth, false);

		if (key == 0x0) continue;

		if ((key & 0x8000) != 0) {
			returnValue = key;
			break;
		}
		if (key == 0x2B) {
			returnValue = 0x2B;
			break;
		}
		if (key == 0x6E) {
			*t = '\0';
			returnValue = 0x6B;
			break;
		}

		/* Handle backspace */
		if (key == 0x0F) {
			if (textLength == 0) continue;

			GUI_EditBox_BlinkCursor(positionX + textWidth, true);

			textWidth -= Font_GetCharWidth(*(t - 1));
			textLength--;
			*(--t) = '\0';

			GUI_EditBox_BlinkCursor(positionX + textWidth, false);
			continue;
		}

		key = Input_Keyboard_HandleKeys(key) & 0xFF;

		/* Names can't start with a space, and should be alpha-numeric */
		if ((key == 0x20 && textLength == 0) || key < 0x20 || key > 0x7E) continue;

		keyWidth = Font_GetCharWidth(key & 0xFF);

		if (textWidth + keyWidth >= maxWidth || textLength >= maxLength) continue;

		/* Add char to the text */
		*t = key & 0xFF;
		*(++t) = '\0';
		textLength++;

		GUI_Mouse_Hide_Safe();

		GUI_EditBox_BlinkCursor(positionX + textWidth, true);

		/* Draw new character */
		GUI_DrawText_Wrapper(text + textLength - 1, positionX + textWidth, g_curWidgetYBase, g_curWidgetFGColourBlink, g_curWidgetFGColourNormal, 0x020);

		GUI_Mouse_Show_Safe();

		textWidth += keyWidth;

		GUI_EditBox_BlinkCursor(positionX + textWidth, false);
	}

	/* Deinitialize */
	{
		Input_Flags_ClearBits(INPUT_FLAG_NO_TRANSLATE);
		Input_Flags_SetBits(INPUT_FLAG_UNKNOWN_2000);

		Widget_SetCurrentWidget(oldValue_07AE_0000);

		GFX_Screen_SetActive(oldScreenID);
	}

	return returnValue;
}
