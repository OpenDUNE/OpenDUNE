/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../file.h"
#include "../house.h"
#include "../string.h"
#include "../tools.h"

extern void f__1DD7_010B_000E_A324();
extern void f__1DD7_01AB_0007_96C6();
extern void f__1DD7_022D_0015_1956();
extern void emu_Tools_Malloc();
extern void f__2649_0B64_0011_32F8();
extern void f__2649_0BAE_001D_25B1();
extern void overlay(uint16 cs, uint8 force);

/**
 * Unknown function.
 * @param index
 */
void Unknown_B483_0156(uint16 index)
{
	if (index == 0xFFFF || g_global->soundsEnabled == 0 || (int16)g_global->voices[index].variable_04 < (int16)g_global->variable_4060) return;

	g_global->variable_4060 = g_global->voices[index].variable_04;

	if (g_global->variable_3E54[index].csip != 0x0) {
		csip32 csip;
		uint32 count;

		csip = g_global->variable_3E54[index];

		emu_push(csip.s.cs); emu_push(csip.s.ip);
		emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
		emu_sp += 4;

		if (emu_ax != 0) {
			emu_push(csip.s.cs); emu_push(csip.s.ip);
			emu_push(emu_cs); emu_push(0x01CD); emu_cs = 0x2649; f__2649_0B64_0011_32F8();
			emu_sp += 4;

			count = (emu_dx << 16) | emu_ax;
		} else {
			count = g_global->readBufferSize;
		}

		Tools_Memmove(csip, g_global->readBuffer, count);

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x020D); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
		emu_sp += 4;
	} else {
		char *filename;

		filename = (char *)emu_get_memorycsip(g_global->voices[index].string);
		if (filename[0] == '?') {
			sprintf((char *)g_global->variable_9939, filename + 1, g_global->playerHouseID < HOUSE_MAX ? g_houseInfo[g_global->playerHouseID].prefixChar : ' ');

			emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
			emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
			emu_push(0x353F); emu_push(0x9939);
			emu_push(emu_cs); emu_push(0x026C); emu_cs = 0x1DD7; f__1DD7_010B_000E_A324();
			emu_sp += 12;

			emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
			emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
			emu_sp += 4;
		}
	}
}

/**
 * C-ified function of f__B483_0363_0016_83DF()
 *
 * @name emu_Unknown_B483_0363
 * @implements B483:0363:0016:83DF ()
 */
void emu_Unknown_B483_0363()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0);

	Unknown_B483_0363(index);
}

/**
 * Unknown function.
 * @param index
 */
void Unknown_B483_0363(uint16 index)
{
	if (index == 0xFFFF) return;

	if (index == 0xFFFE) {
		uint8 i;

		for (i = 0; i < 5; i++) {
			g_global->variable_0218[i] = 0xFFFF;
		}

		emu_push(emu_cs); emu_push(0x0392); emu_cs = 0x1DD7; f__1DD7_01AB_0007_96C6();

		g_global->variable_37BC.csip = 0;
		if ((g_global->variable_37BA & 1) != 0) {
			g_global->variable_3A12 = 1;
			g_global->variable_37BA = 0;
		}
		g_global->variable_4060 = 0;

		return;
	}

	if (g_global->variable_6D8F == 0 || g_global->soundsEnabled == 0 || (g_global->selectionType == 7 && g_global->variable_6D8F == 4)) {
		Driver_Sound_Play(g_global->variable_0312[index][6], 0xFF);

		emu_push(g_global->variable_0312[index][5]);
		emu_push(emu_cs); emu_push(0x03FF); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
		emu_sp += 2;

		g_global->variable_37BC.s.cs = emu_dx;
		g_global->variable_37BC.s.ip = emu_ax;

		if ((g_global->variable_37BA & 1) != 0) {
			g_global->variable_3A12 = 1;
		}

		g_global->variable_37BA = 4;

		return;
	}

	if (g_global->variable_0218[0] == 0xFFFF) {
		uint8 i;

		for (i = 0; i < 5; i++) {
			g_global->variable_0218[i] = (g_global->language == LANGUAGE_ENGLISH) ? g_global->variable_0312[index][i] : g_global->variable_0836[index][i];
		}
	}

	Unknown_B483_0470();
}

/**
 * Unknown function.
 * @return ??
 */
bool Unknown_B483_0470()
{
	if (g_global->soundsEnabled == 0) return false;

	if (Driver_Voice_01EB()) return true;

	g_global->variable_4060 = 0;

	if (g_global->variable_0218[0] == 0xFFFF) return false;

	Unknown_B483_0156(g_global->variable_0218[0]);

	memmove(&g_global->variable_0218[0], &g_global->variable_0218[1], 8);
	g_global->variable_0218[4] = 0xFFFF;

	return true;
}

/**
 * ??.
 * @param filename The name of the file to load.
 * @return Where the file is loaded.
 */
csip32 Unknown_B483_0823(char *filename, csip32 fcsip)
{
	uint8 fileIndex;
	uint32 fileSize;
	csip32 res;

	res.csip = 0x0;

	assert(filename == (char *)emu_get_memorycsip(fcsip));

	if (filename == NULL || !File_Exists(filename)) return res;

	fileIndex = File_Open(filename, 1);
	fileSize  = File_GetSize(fileIndex);
	File_Close(fileIndex);

	fileSize += 1;
	fileSize &= 0xFFFFFFFE;

	emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(fcsip.s.cs); emu_push(fcsip.s.ip);
	emu_push(emu_cs); emu_push(0x08A7); emu_cs = 0x1DD7; f__1DD7_010B_000E_A324();
	emu_sp += 12;

	emu_push(0x40);
	emu_push(fileSize >> 16); emu_push(fileSize & 0xFFFF);
	emu_push(emu_cs); emu_push(0x08B9); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	res.s.cs = emu_dx;
	res.s.ip = emu_ax;

	if (res.csip != 0) {
		Tools_Memmove(g_global->readBuffer, res, fileSize);
	}

	return res;
}
