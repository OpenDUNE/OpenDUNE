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
extern void f__2756_0E6C_0006_02B3();


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

		emu_push(sound->index);
		emu_push(emu_cs); emu_push(0x1188); emu_cs = 0x2756; f__2756_0E6C_0006_02B3();
		emu_sp += 2;

		value = (int32)emu_ax;

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

	emu_push(music->index);
	emu_push(emu_cs); emu_push(0x1001); emu_cs = 0x2756; f__2756_0E6C_0006_02B3();
	emu_sp += 2;

	value = (int32)emu_ax;

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
