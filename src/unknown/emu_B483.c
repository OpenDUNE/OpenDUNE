/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../file.h"
#include "../house.h"

extern void f__1DD7_010B_000E_A324();
extern void f__1DD7_022D_0015_1956();
extern void f__23E1_0004_0014_2BC0();
extern void f__2649_0B64_0011_32F8();
extern void f__2649_0BAE_001D_25B1();
extern void f__2B0E_0006_0049_87B1();
extern void overlay(uint16 cs, uint8 force);

/**
 * C-ified function of f__B483_0156_0019_AEFE()
 *
 * @name emu_Unknown_B483_0156
 * @implements B483:0156:0019:AEFE ()
 */
void emu_Unknown_B483_0156()
{
	uint16 index;
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0);

	if (index == 0xFFFF || g_global->variable_700A == 0 || (int16)g_global->voices[index].variable_04 < (int16)g_global->variable_4060) {
		emu_cs = ret.s.cs;
		emu_ip = ret.s.ip;
		return;
	}

	g_global->variable_4060 = g_global->voices[index].variable_04;

	if (g_global->variable_3E54[index].csip != 0x0) {
		csip32 csip;
		csip32 csip2;

		csip = g_global->variable_3E54[index];

		emu_push(csip.s.cs); emu_push(csip.s.ip);
		emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 4;

		if (emu_ax != 0) {
			emu_push(csip.s.cs); emu_push(csip.s.ip);
			emu_push(emu_cs); emu_push(0x01CD); emu_cs = 0x2649; f__2649_0B64_0011_32F8();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x3483) { overlay(0x3483, 1); }
			emu_sp += 4;

			csip2.s.cs = emu_dx;
			csip2.s.ip = emu_ax;
		} else {
			/* Unresolved jump */ emu_ip = 0x01D7; emu_last_cs = 0xB483; emu_last_ip = 0x01D7; emu_last_length = 0x0011; emu_last_crc = 0x7C21; emu_call(); return;
		}

	l__01E4:
		emu_push(csip2.s.cs); emu_push(csip2.s.ip);
		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(csip.s.cs); emu_push(csip.s.ip);
		emu_push(emu_cs); emu_push(0x01FD); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 12;

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x020D); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 4;
	} else {
		char *filename;

		filename = (char *)emu_get_memorycsip(g_global->voices[index].string);
		if (*filename == '?') {
			sprintf((char *)g_global->variable_9939, ++filename, g_houseInfo[g_global->playerHouseID].prefixChar);
			/* Unresolved jump */ emu_ip = 0x024F; emu_last_cs = 0xB483; emu_last_ip = 0x024F; emu_last_length = 0x003E; emu_last_crc = 0x5CE7; emu_call();
		}
	}

l__027E:
	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * C-ified function of f__B483_0823_0016_323D()
 *
 * @name emu_Unknown_B483_0823
 * @implements B483:0823:0016:323D ()
 */
void emu_Unknown_B483_0823()
{
	char *filename;
	csip32 fcsip;
	csip32 ret;
	uint8 fileIndex;
	uint32 fileSize;
	csip32 res;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	fcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (fcsip.csip == 0) {
		emu_ax = 0;
		emu_dx = 0;
		emu_cs = ret.s.cs;
		emu_ip = ret.s.ip;
		return;
	}

	filename = (char *)emu_get_memorycsip(fcsip);
	if (!File_Exists(filename)) {
		emu_ax = 0;
		emu_dx = 0;
		emu_cs = ret.s.cs;
		emu_ip = ret.s.ip;
		return;
	}

	fileIndex = File_Open(filename, 1);
	fileSize  = File_GetSize(fileIndex);
	File_Close(fileIndex);

	fileSize += 1;
	fileSize &= 0xFFFFFFFE;

	emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(fcsip.s.cs); emu_push(fcsip.s.ip);
	emu_push(emu_cs); emu_push(0x08A7); emu_cs = 0x1DD7; f__1DD7_010B_000E_A324();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
	emu_sp += 12;

	emu_push(0x40);
	emu_push(fileSize >> 16); emu_push(fileSize & 0xFFFF);
	emu_push(emu_cs); emu_push(0x08B9); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
	emu_sp += 6;

	res.s.cs = emu_dx;
	res.s.ip = emu_ax;

	if (res.csip != 0) {
		emu_push(fileSize >> 16); emu_push(fileSize & 0xFFFF);
		emu_push(res.s.cs); emu_push(res.s.ip);
		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x08E3); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 12;
	}

	emu_dx = res.s.cs;
	emu_ax = res.s.ip;

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}
