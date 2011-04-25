/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"
#include "gui/gui.h"
#include "house.h"
#include "os/strings.h"
#include "string.h"
#include "tools.h"
#include "wsa.h"
#include "unknown/unknown.h"

extern void f__259E_0006_0016_858A();
extern void f__2642_0002_005E_87F6();
extern void f__2642_0069_0008_D517();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__B4DA_0000_002C_B3C2();
extern void f__B4DA_02E0_0023_E297();
extern void f__B4DA_0308_0018_F99F();
extern void f__B4DA_0AB8_002A_AAB2();
extern void f__B4DA_0A8E_0025_4AC8();
extern void f__B4DA_176C_000F_12AD();
extern void f__B4DA_1860_0008_857D();
extern void f__B4DA_16F8_001A_D84F();
extern void emu_Input_History_Clear();
extern void emu_Input_Keyboard_NextKey();
extern void overlay(uint16 cs, uint8 force);

/**
 * Ask the security question to the user. Give him 3 times. If he fails,
 *  return false, otherwise true.
 * @return True if and only if the user answered one of the three questions
 *   correct.
 */
bool Security_Check()
{
	csip32 memoryBlockcsip;
	csip32 readBuffercsip;
	csip32 wsaHouseFilenamecsip;
	uint16 questionsCount;
	uint32 loc0E;
	uint16 oldValue_07AE_0000;
	uint16 old_6C91;
	uint16 i;
	bool valid;

	/* Load in our overlay, as a few sub-functions need access to 'cs' */
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x34DA; overlay(0x34DA, 0);

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

	emu_push(3);
	emu_push(emu_cs); emu_push(0x10E4); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	emu_sp += 2;
	memoryBlockcsip.s.cs = emu_dx;
	memoryBlockcsip.s.ip = emu_ax;

	loc0E = g_global->variable_6CD3[1][2];

	readBuffercsip.csip = g_global->readBuffer.csip;
	readBuffercsip.s.ip += g_global->readBufferSize - 1000;

	{
		char *filename;
		uint8 file;

		filename = String_GenerateFilename("PROTECT");

		/* Read the whole file in the buffer */
		file = File_Open(filename, 1);
		File_Read(file, emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);
		File_Close(file);
	}

	emu_push(15);
	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	emu_sp += 6;

	emu_push(g_global->playerHouseID);
	emu_push(wsaHouseFilenamecsip.s.cs); emu_push(wsaHouseFilenamecsip.s.ip);
	emu_push(emu_cs); emu_push(0x1192); f__B4DA_0000_002C_B3C2();
	emu_sp += 6;

	emu_push(emu_cs); emu_push(0x119A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

	GUI_Unknown_24D0_000D(0, 0, 0, 0, 40, 200, 2, 0);

	emu_push(emu_cs); emu_push(0x11C2); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

	emu_push(15);
	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	emu_sp += 6;

	{
		char string[1024];
		char *compressedString;

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), g_global->playerHouseID * 3 + 1);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		/* XXX -- Copy back to make non-converted functions still work */
		strcpy((char *)emu_get_memorycsip(readBuffercsip), string);
	}

	emu_push(0); emu_push(0);
	emu_push(1);
	emu_push(readBuffercsip.s.cs); emu_push(readBuffercsip.s.ip);
	emu_push(0); emu_push(0);
	emu_push(wsaHouseFilenamecsip.s.cs); emu_push(wsaHouseFilenamecsip.s.ip);
	emu_push(emu_cs); emu_push(0x11F6); f__B4DA_0AB8_002A_AAB2();
	emu_sp += 18;

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

	old_6C91 = Unknown_Set_Global_6C91(4);

	for (i = 0, valid = false; i < 3 && !valid; i++) {
		csip32 wsaQuestion;
		uint16 questionIndex;
		uint32 tickWaitTill;
		char string[1024];
		char *compressedString;

		questionIndex = Tools_RandomRange(0, questionsCount - 1) * 3 + 10;

		Unknown_07AE_0000(8);

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), questionIndex + 1);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		/* XXX -- Copy back to make non-converted functions still work */
		strcpy((char *)emu_get_memorycsip(readBuffercsip), string);

		{
			csip32 null;

			null.csip = 0x0;
			wsaQuestion = WSA_LoadFile((char *)emu_get_memorycsip(readBuffercsip), memoryBlockcsip, loc0E, 0, null);
		}

		WSA_DisplayFrame(wsaQuestion, 0, g_global->variable_992D << 3, g_global->variable_992B, 4, 0);
		WSA_Unload(wsaQuestion);

		emu_push(4);
		emu_push(emu_cs); emu_push(0x132D); f__B4DA_0A8E_0025_4AC8();
		emu_sp += 2;

		emu_push(g_global->variable_6D5D);
		emu_push(emu_cs); emu_push(0x1337); emu_cs = 0x2642; f__2642_0002_005E_87F6();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		emu_sp += 2;

		GUI_Unknown_24D0_000D(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 4, 0);

		emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x2642; f__2642_0069_0008_D517();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), questionIndex);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		/* XXX -- Copy back to make non-converted functions still work */
		strcpy((char *)emu_get_memorycsip(readBuffercsip), string);

		emu_push(readBuffercsip.s.cs); emu_push(readBuffercsip.s.ip);
		emu_push(emu_cs); emu_push(0x13A4); f__B4DA_176C_000F_12AD();
		emu_sp += 4;

		g_global->variable_2582 = g_global->variable_76AC + strlen(string) * 4;

		Unknown_07AE_0000(9);

		emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		GUI_Unknown_24D0_000D(g_global->variable_992D - 1, g_global->variable_992B - 8, 0, 0, g_global->variable_992F + 2, g_global->variable_9931 + 16, 0, 4);

		emu_push(emu_cs); emu_push(0x1413); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		Unknown_Set_Global_6C91(0);

		emu_push(emu_cs); emu_push(0x1421); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		GUI_DrawBorder((g_global->variable_992D << 3) - 6, g_global->variable_992B - 6, (g_global->variable_992F << 3) + 12, g_global->variable_9931 + 12, 1, true);
		GUI_DrawBorder((g_global->variable_992D << 3) - 2, g_global->variable_992B - 2, (g_global->variable_992F << 3) + 4, g_global->variable_9931 + 4, 2, false);

		emu_push(emu_cs); emu_push(0x148D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		emu_push(emu_cs); emu_push(0x1492); emu_cs = 0x29E8; emu_Input_History_Clear();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		g_global->variable_9939[0] = 0;

		GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

		{
			csip32 callback;
			csip32 wcsip;
			csip32 text;

			callback.csip = 0x34DA003E;
			wcsip.csip = 0x0;
			text.csip = 0x353F9939;

			GUI_EditBox(text, 80, 9, wcsip, callback, 0);
		}

		emu_push(emu_cs); emu_push(0x14E0); f__B4DA_1860_0008_857D();

		emu_push(emu_cs); emu_push(0x14E5); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		GUI_Unknown_24D0_000D(0, 0, g_global->variable_992D - 1, g_global->variable_992B - 8, g_global->variable_992F + 2, g_global->variable_9931 + 16, 4, 0);

		emu_push(emu_cs); emu_push(0x1519); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		emu_push(emu_ds); emu_push(0x9939);
		emu_push(emu_cs); emu_push(0x1523); f__B4DA_16F8_001A_D84F();
		emu_sp += 4;

		compressedString = String_GetFromBuffer_ByIndex((char *)emu_get_memorycsip(g_global->readBuffer), questionIndex + 2);
		String_Decompress(compressedString, string);
		String_TranslateSpecial(string, string);

		/* XXX -- Copy back to make non-converted functions still work */
		strcpy((char *)emu_get_memorycsip(readBuffercsip), string);

		emu_push(readBuffercsip.s.cs); emu_push(readBuffercsip.s.ip);
		emu_push(emu_cs); emu_push(0x156A); f__B4DA_16F8_001A_D84F();
		emu_sp += 4;

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

		/* XXX -- Copy back to make non-converted functions still work */
		strcpy((char *)emu_get_memorycsip(readBuffercsip), string);

		emu_push(readBuffercsip.s.cs); emu_push(readBuffercsip.s.ip);
		emu_push(emu_cs); emu_push(0x1615); f__B4DA_176C_000F_12AD();
		emu_sp += 4;

		tickWaitTill = g_global->variable_76AC + strlen(string) * 4;

		emu_push(emu_cs); emu_push(0x1644); emu_cs = 0x29E8; emu_Input_History_Clear();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

		/* ENHANCEMENT -- In Dune2, the + 120 is on the other side, causing the 'You are wrong! / Well done.' screen to appear very short (close to invisible, so to say) */
		while (g_global->variable_76AC + (g_dune2_enhanced ? 0 : 120) < tickWaitTill + (g_dune2_enhanced ? 120 : 0)) {
			emu_push(emu_cs); emu_push(0x1685); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
			if (emu_ax != 0) break;

			if (g_global->variable_76AC < tickWaitTill) {
				emu_push(1);
				emu_push(emu_cs); emu_push(0x1666); f__B4DA_0308_0018_F99F();
				emu_sp += 2;
			} else {
				emu_push(0);
				emu_push(emu_cs); emu_push(0x1666); f__B4DA_0308_0018_F99F();
				emu_sp += 2;
			}
		}

		emu_push(emu_cs); emu_push(0x168E); f__B4DA_1860_0008_857D();
	}

	Unknown_07AE_0000(oldValue_07AE_0000);

	Unknown_Set_Global_6C91(old_6C91);

	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

	emu_push(emu_cs); emu_push(0x16B8); f__B4DA_02E0_0023_E297();

	g_global->variable_2580 = 0;
	g_global->variable_3C4A = 0;

	emu_pop(&emu_ip); emu_pop(&emu_cs);
	return valid;
}
