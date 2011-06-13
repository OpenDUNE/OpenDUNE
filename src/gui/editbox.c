/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "font.h"
#include "gui.h"
#include "widget.h"
#include "../unknown/unknown.h"
#include "../input/input.h"
#include "mentat.h"

/**
 * Draw a blinking cursor, used inside the EditBox.
 *
 * @param positionX Where to draw the cursor on the X position.
 * @param resetBlink If true, the blinking is reset and restarted.
 */
static void GUI_EditBox_BlinkCursor(uint16 positionX, bool resetBlink)
{
	assert(g_global->variable_6668.csip == 0x22A60D31);

	if (resetBlink) {
		g_global->tickEditBox = 0;
		g_global->editBoxShowCursor = 1;
	}

	if (g_global->tickEditBox > g_global->variable_76AC) return;
	if (!resetBlink) {
		g_global->tickEditBox = g_global->variable_76AC + 20;
	}

	g_global->editBoxShowCursor = (g_global->editBoxShowCursor == 0) ? 1 : 0;

	GUI_Mouse_Hide_Safe();
	GUI_DrawFilledRectangle(positionX, g_global->variable_992B, positionX + Font_GetCharWidth('W'), g_global->variable_992B + g_global->variable_9931 - 1, (g_global->editBoxShowCursor) ? g_global->variable_6D5B : g_global->variable_6D59);
	GUI_Mouse_Show_Safe();
}

uint16 GUI_EditBox(csip32 text, uint16 maxLength, uint16 unknown1, csip32 wcsip, csip32 callbackcsip, uint16 unknown4)
{
	uint16 oldScreenID;
	uint16 oldValue_07AE_0000;
	uint16 positionX;
	uint16 maxWidth;
	uint16 textWidth;
	uint16 textLength;
	uint16 returnValue;
	char *t;

	/* Initialize */
	{
		Input_Flags_SetBits(INPUT_FLAG_UNKNOWN_0002);
		Input_Flags_ClearBits(INPUT_FLAG_UNKNOWN_2000);

		oldScreenID = GUI_Screen_SetActive(0);

		oldValue_07AE_0000 = Unknown_07AE_0000(unknown1);

		returnValue = 0x0;
	}

	positionX = g_global->variable_992D << 3;

	textWidth = 0;
	textLength = 0;
	maxWidth = (g_global->variable_992F << 3) - Font_GetCharWidth('W') - 1;
	t = (char *)emu_get_memorycsip(text);

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

	if ((unknown4 & 0x4) != 0) Unknown_07AE_0103();

	GUI_DrawText_Wrapper((char *)emu_get_memorycsip(text), positionX, g_global->variable_992B, g_global->variable_6D5B & 0xFF, g_global->variable_6D59 & 0xFF, 0);

	GUI_EditBox_BlinkCursor(positionX + textWidth, false);

	GUI_Mouse_Show_Safe();

	while (true) {
		uint16 keyWidth;
		uint16 key;

		if (callbackcsip.csip != 0x0) {
			switch (callbackcsip.csip) {
				case 0x34DA003E: returnValue = GUI_Mentat_Tick(); break;
				case 0x35180066: returnValue = GUI_HallOfFame_Tick(); break;
				default: assert(0);
			}
			if (returnValue != 0) break;
		}

		key = GUI_Widget_HandleEvents((Widget *)emu_get_memorycsip(wcsip));

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
		if (key == 0x20 && textLength == 0) continue;
		if (key < 0x20) continue;
		if (key > 0x7E) continue;

		keyWidth = Font_GetCharWidth(key & 0xFF);

		if (textWidth + keyWidth >= maxWidth) continue;
		if (textLength >= maxLength) continue;

		/* Add char to the text */
		*t = key & 0xFF;
		*(++t) = '\0';
		textLength++;

		GUI_Mouse_Hide_Safe();

		GUI_EditBox_BlinkCursor(positionX + textWidth, true);

		/* Draw new character */
		GUI_DrawText_Wrapper((char *)emu_get_memorycsip(text) + textLength - 1, positionX + textWidth, g_global->variable_992B, g_global->variable_6D5B & 0xFF, g_global->variable_6D59 & 0xFF, 0x020);

		GUI_Mouse_Show_Safe();

		textWidth += keyWidth;

		GUI_EditBox_BlinkCursor(positionX + textWidth, false);
	}

	/* Deinitialize */
	{
		Input_Flags_ClearBits(INPUT_FLAG_UNKNOWN_0002);
		Input_Flags_SetBits(INPUT_FLAG_UNKNOWN_2000);

		Unknown_07AE_0000(oldValue_07AE_0000);

		GUI_Screen_SetActive(oldScreenID);
	}

	return returnValue;
}
