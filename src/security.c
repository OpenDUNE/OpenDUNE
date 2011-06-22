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
#include "os/strings.h"
#include "string.h"
#include "tools.h"
#include "unknown/unknown.h"
#include "wsa.h"

static void GUI_Security_DrawText(char *text)
{
	uint16 oldScreenID;

	oldScreenID = GUI_Screen_SetActive(4);

	GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, 0, 4);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_Copy(0, 0, 0, 160, SCREEN_WIDTH / 8, 40, 4, 4);

	GUI_Mentat_SplitText(text, 304);

	GUI_DrawText_Wrapper(text, 4, 1, (uint8)g_global->variable_6D5B, 0, 0x32);

	GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, 4, 0);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_SetActive(oldScreenID);
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
	csip32 wsaHouseFilenamecsip;
	uint16 questionsCount;
	uint32 loc0E;
	uint16 oldValue_07AE_0000;
	uint16 oldScreenID;
	uint16 i;
	bool valid;

	g_global->variable_2580 = 1;
	g_global->variable_3C4A = 1;

	wsaHouseFilenamecsip.s.cs = 0x353F;
	switch (g_global->playerHouseID) {
		case HOUSE_HARKONNEN:
			wsaHouseFilenamecsip.s.ip = 0x25A4; /* "FHARK.WSA" */
			break;

		case HOUSE_ATREIDES:
			wsaHouseFilenamecsip.s.ip = 0x25AE; /* "FARTR.WSA" */
			break;

		case HOUSE_ORDOS:
			wsaHouseFilenamecsip.s.ip = 0x25B8; /* "FORDOS.WSA" */
			break;

		default:
			return true;
	}

	loc0E = g_global->variable_6CD3[1][2];

	{
		char *filename;
		uint8 file;

		filename = String_GenerateFilename("PROTECT");

		/* Read the whole file in the buffer */
		file = File_Open(filename, 1);
		File_Read(file, emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);
		File_Close(file);
	}

	Unknown_259E_0006(g_palette2, 15);

	GUI_Mentat_Display((char *)emu_get_memorycsip(wsaHouseFilenamecsip), g_global->playerHouseID);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);
	GUI_Mouse_Show_Safe();

	Unknown_259E_0006(g_palette1, 15);

	{
		char string[1024];
		char *compressedString;

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), g_global->playerHouseID * 3 + 1);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		GUI_Mentat_Loop((char *)emu_get_memorycsip(wsaHouseFilenamecsip), NULL, string, true, NULL);
	}


	/* In the first string is the amount of questions available */
	{
		char string[1024];
		char *compressedString;

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), 0);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		questionsCount = atoi(string);
	}

	oldValue_07AE_0000 = Unknown_07AE_0000(8);

	oldScreenID = GUI_Screen_SetActive(4);

	for (i = 0, valid = false; i < 3 && !valid; i++) {
		void *wsa;
		uint16 questionIndex;
		uint32 tickWaitTill;
		char string[1024];
		char *compressedString;

		questionIndex = Tools_RandomRange(0, questionsCount - 1) * 3 + 10;

		Unknown_07AE_0000(8);

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), questionIndex + 1);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		wsa = WSA_LoadFile(string, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(3)), loc0E, false);
		WSA_DisplayFrame(wsa, 0, g_global->variable_992D << 3, g_global->variable_992B, 4);
		WSA_Unload(wsa);

		GUI_DrawSprite_8002(4);

		GUI_Mouse_Hide_InWidget(g_global->variable_6D5D);
		GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 4, 0);
		GUI_Mouse_Show_InWidget();

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), questionIndex);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		GUI_Security_DrawText(string);

		g_global->variable_2582 = g_global->variable_76AC + strlen(string) * 4;

		Unknown_07AE_0000(9);

		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(g_global->variable_992D - 1, g_global->variable_992B - 8, 0, 0, g_global->variable_992F + 2, g_global->variable_9931 + 16, 0, 4);
		GUI_Mouse_Show_Safe();

		GUI_Screen_SetActive(0);

		GUI_Mouse_Hide_Safe();
		GUI_DrawBorder((g_global->variable_992D << 3) - 6, g_global->variable_992B - 6, (g_global->variable_992F << 3) + 12, g_global->variable_9931 + 12, 1, true);
		GUI_DrawBorder((g_global->variable_992D << 3) - 2, g_global->variable_992B - 2, (g_global->variable_992F << 3) + 4, g_global->variable_9931 + 4, 2, false);
		GUI_Mouse_Show_Safe();

		Input_History_Clear();

		g_global->variable_9939[0] = 0;

		GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

		GUI_EditBox((char *)g_global->variable_9939, 80, 9, NULL, &GUI_Mentat_Tick, 0);

		GUI_Security_UndrawText();

		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(0, 0, g_global->variable_992D - 1, g_global->variable_992B - 8, g_global->variable_992F + 2, g_global->variable_9931 + 16, 4, 0);
		GUI_Mouse_Show_Safe();

		GUI_Security_NormaliseText((char *)g_global->variable_9939);

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), questionIndex + 2);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		GUI_Security_NormaliseText(string);

		if (strcasecmp(string, (char *)&emu_get_memory8(0x353F, 0x9939, 0)) != 0) {
			compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), g_global->playerHouseID * 3 + 3);
			String_Decompress(compressedString, string);
			String_TranslateSpecial(string, string);
		} else {
			compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), g_global->playerHouseID * 3 + 2);
			String_Decompress(compressedString, string);
			String_TranslateSpecial(string, string);

			valid = true;
		}

		GUI_Security_DrawText(string);

		tickWaitTill = g_global->variable_76AC + strlen(string) * 4;

		Input_History_Clear();

		/* ENHANCEMENT -- In Dune2, the + 120 is on the other side, causing the 'You are wrong! / Well done.' screen to appear very short (close to invisible, so to say) */
		while (g_global->variable_76AC + (g_dune2_enhanced ? 0 : 120) < tickWaitTill + (g_dune2_enhanced ? 120 : 0)) {
			if (Input_Keyboard_NextKey() != 0) break;

			if (g_global->variable_76AC < tickWaitTill) {
				GUI_Mentat_Animation(1);
			} else {
				GUI_Mentat_Animation(0);
			}
		}

		GUI_Security_UndrawText();
	}

	Unknown_07AE_0000(oldValue_07AE_0000);

	GUI_Screen_SetActive(oldScreenID);

	Input_History_Clear();

	Load_Palette_Mercenaries();

	g_global->variable_2580 = 0;
	g_global->variable_3C4A = 0;

	return valid;
}
