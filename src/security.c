/* $Id$ */

/** @file src/security.c Security routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "types.h"
#include "libemu.h"
#include "global.h"

#include "file.h"
#include "gfx.h"
#include "gui/gui.h"
#include "gui/mentat.h"
#include "house.h"
#include "input/input.h"
#include "load.h"
#include "opendune.h"
#include "os/strings.h"
#include "scenario.h"
#include "sprites.h"
#include "string.h"
#include "timer.h"
#include "tools.h"
#include "unknown/unknown.h"
#include "wsa.h"

Scenario g_scenario;

static void GUI_Security_DrawText(char *text)
{
	uint16 oldScreenID;

	oldScreenID = GFX_Screen_SetActive(4);

	GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, 0, 4);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_Copy(0, 0, 0, 160, SCREEN_WIDTH / 8, 40, 4, 4);

	GUI_Mentat_SplitText(text, 304);

	GUI_DrawText_Wrapper(text, 4, 1, g_curWidgetFGColourBlink, 0, 0x32);

	GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, 4, 0);
	GUI_Mouse_Show_InRegion();

	GFX_Screen_SetActive(oldScreenID);
}

static void GUI_Security_UndrawText()
{
	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, 4, 0);
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
bool GUI_Security_Show()
{
	char *wsaHouseFilename;
	uint16 questionsCount;
	uint16 oldValue_07AE_0000;
	uint16 oldScreenID;
	uint16 i;
	bool valid;

	g_disableOtherMovement = true;
	g_interrogation = true;

	switch (g_playerHouseID) {
		case HOUSE_HARKONNEN:
			wsaHouseFilename = "FHARK.WSA";
			break;

		case HOUSE_ATREIDES:
			wsaHouseFilename = "FARTR.WSA";
			break;

		case HOUSE_ORDOS:
			wsaHouseFilename = "FORDOS.WSA";
			break;

		default:
			return true;
	}

	{
		char *filename;
		uint8 file;

		filename = String_GenerateFilename("PROTECT");

		/* Read the whole file in the buffer */
		file = File_Open(filename, 1);
		File_Read(file, g_readBuffer, g_readBufferSize);
		File_Close(file);
	}

	Unknown_259E_0006(g_palette2, 15);

	GUI_Mentat_Display(wsaHouseFilename, g_playerHouseID);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);
	GUI_Mouse_Show_Safe();

	Unknown_259E_0006(g_palette1, 15);

	{
		char string[1024];
		char *compressedString;

		compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, g_playerHouseID * 3 + 1);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		GUI_Mentat_Loop(wsaHouseFilename, NULL, string, true, NULL);
	}


	/* In the first string is the amount of questions available */
	{
		char string[1024];
		char *compressedString;

		compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, 0);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		questionsCount = atoi(string);
	}

	oldValue_07AE_0000 = Widget_SetCurrentWidget(8);

	oldScreenID = GFX_Screen_SetActive(4);

	for (i = 0, valid = false; i < 3 && !valid; i++) {
		void *wsa;
		uint16 questionIndex;
		uint32 tickWaitTill;
		char string[1024];
		char *compressedString;
		char buffer[81];

		questionIndex = Tools_RandomRange(0, questionsCount - 1) * 3 + 10;

		Widget_SetCurrentWidget(8);

		compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, questionIndex + 1);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		wsa = WSA_LoadFile(string, GFX_Screen_Get_ByIndex(3), GFX_Screen_GetSize_ByIndex(3), false);
		WSA_DisplayFrame(wsa, 0, g_curWidgetXBase << 3, g_curWidgetYBase, 4);
		WSA_Unload(wsa);

		GUI_DrawSprite(4, g_sprites[24], g_shoulderLeft, g_shoulderTop, 0, 0);

		GUI_Mouse_Hide_InWidget(g_curWidgetIndex);
		GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, 4, 0);
		GUI_Mouse_Show_InWidget();

		compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, questionIndex);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		GUI_Security_DrawText(string);

		g_interrogationTimer = g_timerGUI + strlen(string) * 4;

		Widget_SetCurrentWidget(9);

		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(g_curWidgetXBase - 1, g_curWidgetYBase - 8, 0, 0, g_curWidgetWidth + 2, g_curWidgetHeight + 16, 0, 4);
		GUI_Mouse_Show_Safe();

		GFX_Screen_SetActive(0);

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
		GUI_Screen_Copy(0, 0, g_curWidgetXBase - 1, g_curWidgetYBase - 8, g_curWidgetWidth + 2, g_curWidgetHeight + 16, 4, 0);
		GUI_Mouse_Show_Safe();

		GUI_Security_NormaliseText(buffer);

		compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, questionIndex + 2);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		GUI_Security_NormaliseText(string);

		if (strcasecmp(string, buffer) != 0) {
			compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, g_playerHouseID * 3 + 3);
			String_Decompress(compressedString, string);
			String_TranslateSpecial(string, string);
		} else {
			compressedString = String_GetFromBuffer_ByIndex(g_readBuffer, g_playerHouseID * 3 + 2);
			String_Decompress(compressedString, string);
			String_TranslateSpecial(string, string);

			valid = true;
		}

		GUI_Security_DrawText(string);

		tickWaitTill = g_timerGUI + strlen(string) * 4;

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

	Widget_SetCurrentWidget(oldValue_07AE_0000);

	GFX_Screen_SetActive(oldScreenID);

	Input_History_Clear();

	Load_Palette_Mercenaries();

	g_disableOtherMovement = false;
	g_interrogation = false;

	return valid;
}
