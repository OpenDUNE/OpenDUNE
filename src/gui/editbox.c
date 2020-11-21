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
 * @param widgetID the widget in which the EditBox is displayed.
 * @param w The widget this editbox is attached to (for input events).
 * @param tickProc The function to call every tick, for animation etc.
 * @param paint Flag indicating if the widget need to be repainted.
 * @return Key code / Button press code.
 */
uint16 GUI_EditBox(char *text, uint16 maxLength, uint16 widgetID, Widget *w, uint16 (*tickProc)(void), bool paint)
{
	Screen oldScreenID;
	uint16 oldWidgetID;
	uint16 positionX;
	uint16 maxWidth;
	uint16 textWidth;
	uint16 textLength;
	uint16 returnValue;
	char *t;

	/* Initialize */
	{
		Input_Flags_SetBits(INPUT_FLAG_NO_TRANSLATE);
		Input_Flags_ClearBits(INPUT_FLAG_KBD_MOUSE_CLK);

		oldScreenID = GFX_Screen_SetActive(SCREEN_0);

		oldWidgetID = Widget_SetCurrentWidget(widgetID);

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

	GUI_Mouse_Hide_Safe();

	if (paint) Widget_PaintCurrentWidget();

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
		Input_Flags_SetBits(INPUT_FLAG_KBD_MOUSE_CLK);

		Widget_SetCurrentWidget(oldWidgetID);

		GFX_Screen_SetActive(oldScreenID);
	}

	return returnValue;
}
