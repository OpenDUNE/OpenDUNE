/** @file src/security.c Security routines. */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "types.h"
#include "../os/strings.h"

#include "security.h"
#include "../file.h"
#include "../gfx.h"
#include "../gui/gui.h"
#include "../gui/mentat.h"
#include "../gui/widget.h"
#include "../house.h"
#include "../input/input.h"
#include "../load.h"
#include "../opendune.h"
#include "../sprites.h"
#include "../string.h"
#include "../table/strings.h"
#include "../timer.h"
#include "../tools.h"
#include "../wsa.h"


static void GUI_Security_DrawText(char *text)
{
	Screen oldScreenID;

	oldScreenID = GFX_Screen_SetActive(SCREEN_2);

	GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, SCREEN_0, SCREEN_2);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_Copy(0, 0, 0, 160, SCREEN_WIDTH / 8, 40, SCREEN_2, SCREEN_2);

	GUI_Mentat_SplitText(text, 304);

	GUI_DrawText_Wrapper(text, 4, 1, g_curWidgetFGColourBlink, 0, 0x32);

	GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, SCREEN_2, SCREEN_0);
	GUI_Mouse_Show_InRegion();

	GFX_Screen_SetActive(oldScreenID);
}

static void GUI_Security_UndrawText(void)
{
	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, SCREEN_2, SCREEN_0);
	GUI_Mouse_Show_Safe();
}

static void GUI_Security_NormaliseText(char *str)
{
	char *s = str;

	while (*s != '\0') {
		if (isalnum((uint8)*s)) {
			if (islower((uint8)*s)) {
				*s = toupper(*s);
			}
			*str++ = *s;
		}
		s++;
	}

	*str = '\0';
}

/**
 * Ask the security question to the user. Give him 3 times. If he fails,
 *  return false, otherwise true.
 * @return True if and only if the user answered one of the three questions
 *   correct.
 */
bool GUI_Security_Show(void)
{
	const char *wsaHouseFilename;
	uint16 questionsCount;
	uint16 oldCurrentWidget;
	Screen oldScreenID;
	uint16 i;
	bool valid;

	g_disableOtherMovement = true;
	g_interrogation = true;

	wsaHouseFilename = House_GetWSAHouseFilename(g_playerHouseID);
	if (wsaHouseFilename == NULL) return true;

	GUI_SetPaletteAnimated(g_palette2, 15);

	GUI_Mentat_Display(wsaHouseFilename, g_playerHouseID);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_Safe();

	GUI_SetPaletteAnimated(g_palette1, 15);

	strncpy(g_readBuffer, String_Get_ByIndex(STR_SECURITY_TEXT_HARKONNEN + g_playerHouseID * 3), g_readBufferSize);
	GUI_Mentat_Loop(wsaHouseFilename, NULL, g_readBuffer, true, NULL);

	questionsCount = atoi(String_Get_ByIndex(STR_SECURITY_COUNT));

	oldCurrentWidget = Widget_SetCurrentWidget(8);

	oldScreenID = GFX_Screen_SetActive(SCREEN_2);

	for (i = 0, valid = false; i < 3 && !valid; i++) {
		void *wsa;
		uint16 questionIndex;
		uint32 tickWaitTill;
		char buffer[81];

		questionIndex = Tools_RandomLCG_Range(0, questionsCount - 1) * 3 + STR_SECURITY_QUESTIONS;

		Widget_SetCurrentWidget(8);

		wsa = WSA_LoadFile(String_Get_ByIndex(questionIndex + 1), GFX_Screen_Get_ByIndex(SCREEN_1), GFX_Screen_GetSize_ByIndex(SCREEN_1), false);
		WSA_DisplayFrame(wsa, 0, g_curWidgetXBase << 3, g_curWidgetYBase, SCREEN_2);
		WSA_Unload(wsa);

		GUI_DrawSprite(SCREEN_2, g_sprites[397 + g_playerHouseID * 15], g_shoulderLeft, g_shoulderTop, 0, 0);

		GUI_Mouse_Hide_InWidget(g_curWidgetIndex);
		GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_2, SCREEN_0);
		GUI_Mouse_Show_InWidget();

		strncpy(g_readBuffer, String_Get_ByIndex(questionIndex), g_readBufferSize);
		GUI_Security_DrawText(g_readBuffer);

		g_interrogationTimer = g_timerGUI + strlen(g_readBuffer) * 4;

		Widget_SetCurrentWidget(9);

		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(g_curWidgetXBase - 1, g_curWidgetYBase - 8, 0, 0, g_curWidgetWidth + 2, g_curWidgetHeight + 16, SCREEN_0, SCREEN_2);
		GUI_Mouse_Show_Safe();

		GFX_Screen_SetActive(SCREEN_0);

		GUI_Mouse_Hide_Safe();
		GUI_DrawBorder((g_curWidgetXBase << 3) - 6, g_curWidgetYBase - 6, (g_curWidgetWidth << 3) + 12, g_curWidgetHeight + 12, 1, true);
		GUI_DrawBorder((g_curWidgetXBase << 3) - 2, g_curWidgetYBase - 2, (g_curWidgetWidth << 3) + 4, g_curWidgetHeight + 4, 2, false);
		GUI_Mouse_Show_Safe();

		Input_History_Clear();

		buffer[0] = 0;

		GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

		GUI_EditBox(buffer, sizeof(buffer) - 1, 9, NULL, &GUI_Mentat_Tick, 0);

		GUI_Security_UndrawText();

		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(0, 0, g_curWidgetXBase - 1, g_curWidgetYBase - 8, g_curWidgetWidth + 2, g_curWidgetHeight + 16, SCREEN_2, SCREEN_0);
		GUI_Mouse_Show_Safe();

		GUI_Security_NormaliseText(buffer);

		strncpy(g_readBuffer, String_Get_ByIndex(questionIndex + 2), g_readBufferSize);
		GUI_Security_NormaliseText(g_readBuffer);

		if (strcasecmp(g_readBuffer, buffer) != 0) {
			strncpy(g_readBuffer, String_Get_ByIndex(STR_SECURITY_WRONG_HARKONNEN + g_playerHouseID * 3), g_readBufferSize);
		} else {
			strncpy(g_readBuffer, String_Get_ByIndex(STR_SECURITY_CORRECT_HARKONNEN + g_playerHouseID * 3), g_readBufferSize);

			valid = true;
		}

		GUI_Security_DrawText(g_readBuffer);

		tickWaitTill = g_timerGUI + strlen(g_readBuffer) * 4;

		Input_History_Clear();

		/* ENHANCEMENT -- In Dune2, the + 120 is on the other side, causing the 'You are wrong! / Well done.' screen to appear very short (close to invisible, so to say) */
		while (g_timerGUI + (g_dune2_enhanced ? 0 : 120) < tickWaitTill + (g_dune2_enhanced ? 120 : 0)) {
			if (Input_Keyboard_NextKey() != 0) break;

			if (g_timerGUI < tickWaitTill) {
				GUI_Mentat_Animation(1);
			} else {
				GUI_Mentat_Animation(0);
			}
		}

		GUI_Security_UndrawText();
	}

	Widget_SetCurrentWidget(oldCurrentWidget);

	GFX_Screen_SetActive(oldScreenID);

	Input_History_Clear();

	Load_Palette_Mercenaries();

	g_disableOtherMovement = false;
	g_interrogation = false;

	return valid;
}
