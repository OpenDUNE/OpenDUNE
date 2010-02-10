/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "driver.h"
#include "os/strings.h"

extern void emu_CustomTimer_AddHandler();
extern void emu_Drivers_Voice_Init();
extern void f__1DD7_12CE_0018_7A26();
extern void f__23E1_0004_0014_2BC0();
extern void f__2756_07DA_0048_9F5D();
extern void f__2756_0A59_0023_D969();
extern void f__2756_0B8F_0025_D5D8();
extern void f__AB00_045A_0022_EC86();
extern void f__AB00_0C96_0019_A7D9();
extern void f__AB00_0F02_0012_D841();
extern void f__AB00_0F24_0044_3584();
extern void f__AB00_1FA8_0072_8B95();
extern void f__AB00_2103_0040_93D2();
extern void f__AB00_2191_0012_DA45();
extern void f__AB00_21F0_0024_C4F7();
extern void f__AB00_2336_002C_4FDC();
extern void f__AB00_237A_002C_07AF();
extern void f__AB00_240F_0029_C429();
extern void f__AB00_2498_0021_920B();
extern void f__AB00_26EB_0047_41F4();

/* TODO decompiler bug: extern void f__AB00_240F_0029_C429(); */


uint16 Drivers_Sound_Init(uint16 index)
{
	char *filename;
	MSDriver *driver;
	Driver *sound;
	Driver *music;

	driver = &g_global->soundDrv[index];
	sound  = &g_global->soundDriver;
	music  = &g_global->musicDriver;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);

	if (music->dfilename.csip != 0x0 && !strcasecmp((char *)emu_get_memorycsip(music->dfilename), filename)) {
		memcpy(sound, music, sizeof(Driver));
	} else {
		emu_push(driver->variable_0008);
		emu_push(driver->extension.s.cs); emu_push(driver->extension.s.ip);
		emu_push(0x353F); emu_push(0x6302); /* g_global->soundDriver (same as local variable sound) */
		emu_push(driver->filename.s.cs); emu_push(driver->filename.s.ip);
		emu_push(emu_cs); emu_push(0x0FE0); f__1DD7_12CE_0018_7A26();
		emu_sp += 14;
		if (emu_ax == 0) return 0;
	}

	if (driver->variable_0008 == 0) {
		uint8 i;
		int32 value;

		value = (int32)Drivers_CallFunction(sound->index, 0x96).s.ip;

		for (i = 0; i < 4; i++) {
			MSBuffer *buf = &g_global->soundBuffer[i];

			emu_push(0x10);
			emu_push(value >> 16); emu_push(value & 0xFFFF);
			emu_push(emu_cs); emu_push(0x1014); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
			emu_sp += 6;

			buf->buffer.s.cs = emu_dx;
			buf->buffer.s.ip = emu_ax;
			buf->count       = 0xFFFF;
		}
		g_global->soundBufferIndex = 0;
	}

	if (driver->variable_000A != 0) {
		g_global->variable_6328 = 1;
	}

	return index;
}

uint16 Drivers_Music_Init(uint16 index)
{
	char *filename;
	MSDriver *driver;
	Driver *music;
	Driver *sound;
	int32 value;

	driver = &g_global->musicDrv[index];
	music  = &g_global->musicDriver;
	sound  = &g_global->soundDriver;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);

	if (sound->dfilename.csip != 0x0 && !strcasecmp((char *)emu_get_memorycsip(sound->dfilename), filename)) {
		memcpy(music, sound, sizeof(Driver));
	} else {
		emu_push(driver->variable_0008);
		emu_push(driver->extension.s.cs); emu_push(driver->extension.s.ip);
		emu_push(0x353F); emu_push(0x6344); /* g_global->musicDriver (same as local variable music)*/
		emu_push(driver->filename.s.cs); emu_push(driver->filename.s.ip);
		emu_push(emu_cs); emu_push(0x0FE0); f__1DD7_12CE_0018_7A26();
		emu_sp += 14;
		if (emu_ax == 0) return 0;
	}

	g_global->variable_636A = driver->variable_000A;
	if (driver->variable_0008 != 0) return index;

	value = (int32)Drivers_CallFunction(music->index, 0x96).s.ip;

	emu_push(0x10);
	emu_push(value >> 16); emu_push(value & 0xFFFF);
	emu_push(emu_cs); emu_push(0x1014); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	emu_sp += 6;

	g_global->musicBuffer.buffer.s.cs = emu_dx;
	g_global->musicBuffer.buffer.s.ip = emu_ax;
	g_global->musicBuffer.count       = 0xFFFF;

	return index;
}

void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice)
{
	emu_push(emu_cs); emu_push(0x03A3); emu_cs = 0x2756; f__2756_07DA_0048_9F5D();

	emu_push(0x2BD1); emu_push(0x6);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x2756; emu_CustomTimer_AddHandler();
	emu_sp += 2;
	g_global->variable_639C = emu_ax;

	emu_push(0);
	emu_push(0x3C);
	emu_push(g_global->variable_639C);
	emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x2756; f__2756_0B8F_0025_D5D8();
	emu_sp += 6;

	emu_push(g_global->variable_639C);
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x2756; f__2756_0A59_0023_D969();
	emu_sp += 2;

	g_global->variable_6D8D = Drivers_Music_Init(music);
	g_global->variable_6D8B = Drivers_Sound_Init(sound);

	emu_push(voice);
	emu_push(emu_cs); emu_push(0x03D9); emu_Drivers_Voice_Init();
	emu_sp += 2;
	g_global->variable_6D8F = emu_ax;
}

csip32 Drivers_GetFunctionCSIP(uint16 driver, uint16 function)
{
	csip32 csip;

	if (driver >= 10) {
		csip.csip = 0;
		return csip;
	}

	csip = emu_get_csip32(0x2756, driver * 4, 0x128);
	if (csip.csip == 0) return csip;

	for (;; csip.s.ip += 4) {
		uint16 f = emu_get_memory16(csip.s.cs, csip.s.ip, 0);
		if (f == function) break;
		if (f != 0xFFFF) continue;
		csip.csip = 0;
		return csip;
	}

	csip.s.ip = emu_get_memory16(csip.s.cs, csip.s.ip, 2);
	return csip;
}

csip32 Drivers_CallFunction(uint16 driver, uint16 function)
{
	csip32 csip;

	csip = Drivers_GetFunctionCSIP(driver, function);
	if (csip.csip == 0) return csip;

	/* Fake return CS:IP */
	emu_sp -= 4;

	/* Call/jump based on memory/register values */
	emu_ip = csip.s.ip;
	emu_cs = csip.s.cs;
	switch ((emu_cs << 16) + emu_ip) {
		case 0x44AF045A: f__AB00_045A_0022_EC86(); break;
		case 0x44AF0C96: f__AB00_0C96_0019_A7D9(); break;
		case 0x44AF0F02: f__AB00_0F02_0012_D841(); break;
		case 0x44AF0F24: f__AB00_0F24_0044_3584(); break;
		case 0x44AF1FA8: f__AB00_1FA8_0072_8B95(); break;
		case 0x44AF2103: f__AB00_2103_0040_93D2(); break;
		case 0x44AF2191: f__AB00_2191_0012_DA45(); break;
		case 0x44AF21F0: f__AB00_21F0_0024_C4F7(); break;
		case 0x44AF2336: f__AB00_2336_002C_4FDC(); break;
		case 0x44AF237A: f__AB00_237A_002C_07AF(); break;
		case 0x44AF240F: f__AB00_240F_0029_C429(); break;
		case 0x44AF2498: f__AB00_2498_0021_920B(); break;
		case 0x44AF26EB: f__AB00_26EB_0047_41F4(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x050B; emu_last_length = 0x0003; emu_last_crc = 0x6FD4;
			emu_call();
			return csip; /* not reached */
	}

	csip.s.cs = emu_dx;
	csip.s.ip = emu_ax;
	return csip;
}
