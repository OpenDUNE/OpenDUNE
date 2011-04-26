/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"
#include "driver.h"
#include "mt32mpu.h"
#include "os/strings.h"
#include "os/math.h"

extern void emu_CustomTimer_AddHandler();
extern void f__01F7_27FD_0037_E2C0();
extern void f__1DD7_1696_0011_A4E3();
extern void f__1DD7_1940_0021_1C0F();
extern void f__1DD7_1BB4_002A_17AC();
extern void f__1DD7_1C3C_0020_9C6E();
extern void emu_Tools_Malloc();
extern void emu_Tools_Free();
extern void emu_Tools_GetFreeMemory();
extern void f__2649_0B64_0011_32F8();
extern void f__2649_0BAE_001D_25B1();
extern void f__2756_07DA_0048_9F5D();
extern void f__2756_0827_0035_3DAA();
extern void f__2756_0A59_0023_D969();
extern void f__2756_0B8F_0025_D5D8();
extern void f__2756_0C0B_0021_873C();
extern void f__2756_0C31_0037_2A81();
extern void f__2756_0D12_0042_A9FA();
extern void f__2B1E_0189_001B_E6CF();
extern void emu_MPU_TestPort();
extern void emu_DSP_GetInfo();
extern void emu_DSP_TestPort();
extern void emu_MPU_GetInfo();
extern void f__AB00_0B91_0014_89BD();
extern void f__AB00_0C08_0013_3E08();
extern void f__AB00_0DA4_0078_0101();
extern void f__AB00_1068_0020_E6F1();
extern void f__AB00_1122_001C_9408();
extern void f__AB00_118F_0029_4B06();
extern void f__AB00_1235_0013_28BA();
extern void f__AB01_0F24_0044_3584();
extern void emu_MPU_Init();
extern void f__AB01_2103_0040_93D2();
extern void f__AB01_2336_002C_4FDC();
extern void f__AB01_26EB_0047_41F4();

static csip32 Drivers_Load(const char *filename, csip32 fcsip)
{
	csip32 ret;

	ret.csip = 0x0;

	if (!File_Exists(filename)) return ret;

	if (strstr(filename, ".COM") != NULL) {
		emu_push(fcsip.s.cs); emu_push(fcsip.s.ip);
		/* Unresolved call */ emu_push(emu_cs); emu_push(0x045D); emu_cs = 0x2431; emu_ip = 0x03DF; emu_last_cs = 0x1DD7; emu_last_ip = 0x0458; emu_last_length = 0x0012; emu_last_crc = 0xAB15; emu_call();
		emu_sp += 4;
		return ret; /* return value of the above unresolved call */
	}

	return File_ReadWholeFile(filename, 0x20);
}

static void Driver_Init(uint16 driver, uint16 arg08, uint16 arg0A, uint16 arg0C, uint16 arg0E)
{
	csip32 csip;

	if (driver >= 16) return;

	emu_get_memory16(0x2756, 0x00, 0x1B2) = 0xFFFF;

	emu_push(driver);
	emu_push(emu_cs); emu_push(0x0D7F); emu_cs = 0x2756; f__2756_0C0B_0021_873C();
	emu_sp += 2;

	emu_si = emu_get_memory16(emu_dx, emu_ax, 0x14);
	csip = Drivers_GetFunctionCSIP(driver, 0x67);
	if (emu_si != 0xFFFF && csip.csip != 0) {
		emu_push(csip.s.cs); emu_push(csip.s.ip);
		emu_push(0x2756); emu_push(0x0DA8); emu_cs = 0x2756; emu_CustomTimer_AddHandler();
		emu_sp += 4;

		emu_get_memory16(0x2756, driver * 2, 0x168) = emu_ax;
		emu_get_memory16(0x2756, 0x00, 0x1B2) = emu_ax;

		emu_push(0);
		emu_push(emu_si);
		emu_push(emu_ax);
		emu_push(0x2756); emu_push(0x0DC9); emu_cs = 0x2756; f__2756_0B8F_0025_D5D8();
		emu_sp += 6;
	}

	emu_push(arg0E);
	emu_push(arg0C);
	emu_push(arg0A);
	emu_push(arg08);
	emu_push(driver); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(driver, 0x66);
	emu_sp += 10;

	emu_get_memory16(0x2756, driver * 2, 0x188) = 1;

	if (emu_get_memory16(0x2756, 0x00, 0x1B2) != 0xFFFF) {
		emu_push(emu_get_memory16(0x2756, 0x00, 0x1B2));
		emu_push(0x2756); emu_push(0x0E02); emu_cs = 0x2756; f__2756_0A59_0023_D969();
		emu_sp += 2;
	}
}

uint16 Drivers_EnableSounds(uint16 sounds)
{
	uint16 ret;

	ret = g_global->soundsEnabled;
	g_global->soundsEnabled = sounds;

	if (sounds == 0) Driver_Sound_Stop();

	if (g_global->soundDriver.index != 0xFFFF || g_global->soundDriver.dcontent.csip == 0x0) return ret;

	emu_ax = 0x1;
	emu_bx = g_global->soundsEnabled == 0 ? 0x10 : 0x11;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = g_global->soundDriver.dcontent.s.ip;
	emu_push(emu_cs);
	emu_cs = g_global->soundDriver.dcontent.s.cs;
	emu_push(0x0059);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x0056; emu_last_length = 0x002E; emu_last_crc = 0x813E;
			emu_call();
			return ret;
	}

	return ret;
}

uint16 Drivers_EnableMusic(uint16 music)
{
	uint16 ret;

	ret = g_global->soundsEnabled; /* Looks like a bug in original code */
	g_global->musicEnabled = music;

	if (music == 0) Driver_Music_Stop();

	if (g_global->musicDriver.index != 0xFFFF || g_global->musicDriver.dcontent.csip == 0x0) return ret;

	emu_ax = 0x2;
	emu_bx = g_global->musicEnabled == 0 ? 0x10 : 0x11;
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = g_global->musicDriver.dcontent.s.ip;
	emu_push(emu_cs);
	emu_cs = g_global->musicDriver.dcontent.s.cs;
	emu_push(0x00BA);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1DD7; emu_last_ip = 0x00B7; emu_last_length = 0x002E; emu_last_crc = 0xB16C;
			emu_call();
			return ret;
	}

	return ret;
}

bool Drivers_Init(const char *filename, csip32 fcsip, Driver *driver, csip32 dcsip, const char *extension, uint16 variable_0008)
{
	if (filename == NULL || !File_Exists(filename)) return false;

	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x12);

	if (driver->dcontent.csip != 0) {
		if (strcasecmp((char *)emu_get_memorycsip(driver->dfilename), filename) == 0) return true;
		emu_push(dcsip.s.cs); emu_push(dcsip.s.ip);
		emu_push(emu_cs); emu_push(0x1330); f__1DD7_1696_0011_A4E3();
		emu_sp += 4;
	}

	driver->dcontent = Drivers_Load(filename, fcsip);

	if (driver->dcontent.csip == 0) return false;

	if (variable_0008 != 0) {
		emu_bx = 0x2;
		emu_pushf();

		/* Call based on memory/register values */
		emu_ip = driver->dcontent.s.ip;
		emu_push(emu_cs);
		emu_cs = driver->dcontent.s.cs;
		emu_push(0x136D);
		switch ((emu_cs << 16) + emu_ip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x1DD7; emu_last_ip = 0x136A; emu_last_length = 0x0007; emu_last_crc = 0x2888;
				emu_call();
				return false;
		}

		if ((variable_0008 & 0x8000) != 0) {
			emu_ax = 0x4;
			emu_bx = 0x10;
			emu_pushf();

			/* Call based on memory/register values */
			emu_ip = driver->dcontent.s.ip;
			emu_push(emu_cs);
			emu_cs = driver->dcontent.s.cs;
			emu_push(0x137B);
			switch ((emu_cs << 16) + emu_ip) {
				default:
					/* In case we don't know the call point yet, call the dynamic call */
					emu_last_cs = 0x1DD7; emu_last_ip = 0x1378; emu_last_length = 0x000E; emu_last_crc = 0xB970;
					emu_call();
					return false;
			}
		}

		emu_push(driver->dcontent.s.cs); emu_push(driver->dcontent.s.ip + 3);
		emu_push(emu_cs); emu_push(0x138F); emu_cs = 0x2756; emu_CustomTimer_AddHandler();
		emu_sp += 4;

		driver->customTimer = emu_ax;
		if (driver->customTimer == 0xFFFF) {
			emu_push(driver->dcontent.s.cs); emu_push(driver->dcontent.s.ip);
			emu_push(emu_cs); emu_push(0x13B2); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			driver->dcontent.csip = 0;
			return false;
		}

		{
			int32 value = (int32)variable_0008;
			if (value < 0) value = -value;

			emu_push(value >> 16); emu_push(value & 0xFFFF);
			emu_push(driver->customTimer);
			emu_push(emu_cs); emu_push(0x13E1); emu_cs = 0x2756; f__2756_0B8F_0025_D5D8();
			emu_sp += 6;
		}
		emu_push(driver->customTimer);
		emu_push(emu_cs); emu_push(0x13F0); emu_cs = 0x2756; f__2756_0A59_0023_D969();
		emu_sp += 2;

		strcpy(driver->extension, (strcasecmp(filename, "alfx.drv") == 0) ? "adl" : "snd");
	} else {
		csip32 csip;

		emu_push(driver->dcontent.s.cs); emu_push(driver->dcontent.s.ip);
		emu_push(emu_cs); emu_push(0x1437); emu_cs = 0x2756; f__2756_0C31_0037_2A81();
		emu_sp += 4;

		driver->index = emu_ax;

		if (driver->index == 0xFFFF) {
			emu_push(driver->dcontent.s.cs); emu_push(driver->dcontent.s.ip);
			emu_push(emu_cs); emu_push(0x13B2); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			driver->dcontent.csip = 0;
			return false;
		}

		emu_push(driver->index);
		emu_push(emu_cs); emu_push(0x1456); emu_cs = 0x2756; f__2756_0C0B_0021_873C();
		emu_sp += 2;

		csip.s.cs = emu_dx;
		csip.s.ip = emu_ax;

		memcpy(driver->extension2, &emu_get_memory8(csip.s.cs, csip.s.ip, 4), 4);
		strcpy(driver->extension, "xmi");

		if (strcasecmp(filename, "sbdig.adv") == 0 || strcasecmp(filename, "sbpdig.adv") == 0) {
			csip32 blaster;

			emu_push(emu_ds); emu_push(0x65FE); /* "BLASTER" */
			emu_push(emu_cs); emu_push(0x14CF); emu_cs = 0x01F7; f__01F7_27FD_0037_E2C0();
			emu_sp += 4;

			blaster.s.cs = emu_dx;
			blaster.s.ip = emu_ax;

			if (blaster.csip != 0) {
				char *val;

				val = strchr((char*)emu_get_memorycsip(blaster), 'A');
				if (val != NULL) {
					val++;
					emu_get_memory16(csip.s.cs, csip.s.ip, 0xC) = (uint16)strtoul(val, NULL, 16);
				}

				val = strchr((char*)emu_get_memorycsip(blaster), 'I');
				if (val != NULL) {
					val++;
					emu_get_memory16(csip.s.cs, csip.s.ip, 0x12) = (uint16)strtoul(val, NULL, 10);
					emu_get_memory16(csip.s.cs, csip.s.ip, 0xE)  = (uint16)strtoul(val, NULL, 10);
				}

				val = strchr((char*)emu_get_memorycsip(blaster), 'D');
				if (val != NULL) {
					val++;
					emu_get_memory16(csip.s.cs, csip.s.ip, 0x10) = (uint16)strtoul(val, NULL, 10);
				}
			}
		}

		emu_push(emu_get_memory16(csip.s.cs, csip.s.ip, 0x12));
		emu_push(emu_get_memory16(csip.s.cs, csip.s.ip, 0x10));
		emu_push(emu_get_memory16(csip.s.cs, csip.s.ip, 0xE));
		emu_push(emu_get_memory16(csip.s.cs, csip.s.ip, 0xC));
		emu_push(driver->index); /* unused, but needed for correct param accesses. */
		emu_ax = Drivers_CallFunction(driver->index, 0x65).s.ip;
		emu_sp += 8;

		if (emu_ax == 0) {
			emu_push(driver->index);
			emu_push(emu_cs); emu_push(0x15D8); emu_cs = 0x2756; f__2756_0D12_0042_A9FA();
			emu_sp += 2;

			emu_push(driver->dcontent.s.cs); emu_push(driver->dcontent.s.ip);
			emu_push(emu_cs); emu_push(0x13B2); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			driver->dcontent.csip = 0;
			return false;
		}

		Driver_Init(driver->index, emu_get_memory16(csip.s.cs, csip.s.ip, 0xC), emu_get_memory16(csip.s.cs, csip.s.ip, 0xE), emu_get_memory16(csip.s.cs, csip.s.ip, 0x10), emu_get_memory16(csip.s.cs, csip.s.ip, 0x12));

		{
			int32 value = (int32)Drivers_CallFunction(driver->index, 0x99).s.ip;
			if (value != 0) {
				emu_push(0);
				emu_push(value >> 16); emu_push(value & 0xFFFF);
				emu_push(emu_cs); emu_push(0x1625); emu_cs = 0x23E1; emu_Tools_Malloc();
				emu_sp += 6;

				driver->variable_12.s.cs = emu_dx;
				driver->variable_12.s.ip = emu_ax;

				emu_push(value & 0xFFFF);
				emu_push(driver->variable_12.s.cs); emu_push(driver->variable_12.s.ip);
				emu_push(driver->index); /* unused, but needed for correct param accesses. */
				Drivers_CallFunction(driver->index, 0x9A);
				emu_sp += 8;
			}
		}
	}

	driver->dfilename = fcsip;
	driver->extension[0] = 0;
	if (driver->dcontent.csip != 0) memcpy(driver->extension, extension, 4);

	return true;
}

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
		csip32 sound_csip;
		sound_csip.csip = 0x353F6302;
		if (!Drivers_Init(filename, driver->filename, sound, sound_csip, (char *)emu_get_memorycsip(driver->extension), driver->variable_0008)) return 0;
	}

	if (driver->variable_0008 == 0) {
		uint8 i;
		int32 value;

		value = (int32)Drivers_CallFunction(sound->index, 0x96).s.ip;

		for (i = 0; i < 4; i++) {
			MSBuffer *buf = &g_global->soundBuffer[i];

			emu_push(0x10);
			emu_push(value >> 16); emu_push(value & 0xFFFF);
			emu_push(emu_cs); emu_push(0x1014); emu_cs = 0x23E1; emu_Tools_Malloc();
			emu_sp += 6;

			buf->buffer.s.cs = emu_dx;
			buf->buffer.s.ip = emu_ax;
			buf->index       = 0xFFFF;
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
		csip32 music_csip;
		music_csip.csip = 0x353F6344;
		if (!Drivers_Init(filename, driver->filename, music, music_csip, (char *)emu_get_memorycsip(driver->extension), driver->variable_0008)) return 0;
	}

	g_global->variable_636A = driver->variable_000A;
	if (driver->variable_0008 != 0) return index;

	value = (int32)Drivers_CallFunction(music->index, 0x96).s.ip;

	emu_push(0x10);
	emu_push(value >> 16); emu_push(value & 0xFFFF);
	emu_push(emu_cs); emu_push(0x1014); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;

	g_global->musicBuffer.buffer.s.cs = emu_dx;
	g_global->musicBuffer.buffer.s.ip = emu_ax;
	g_global->musicBuffer.index       = 0xFFFF;

	return index;
}

uint16 Drivers_Voice_Init(uint16 index)
{
	char *filename;
	DSDriver *driver;
	Driver *voice;
	csip32 voice_csip;

	driver = &g_global->voiceDrv[index];
	voice  = &g_global->voiceDriver;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);
	voice_csip.csip = 0x353F6374;

	if (!Drivers_Init(filename, driver->filename, voice, voice_csip, "VOC", 0)) return 0;

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
	g_global->variable_6D8F = Drivers_Voice_Init(voice);
}

csip32 Drivers_GetFunctionCSIP(uint16 driver, uint16 function)
{
	csip32 csip;

	if (driver >= 16) {
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

	/* Call/jump based on memory/register values */
	emu_push(emu_cs); emu_push(emu_ip);
	emu_ip = csip.s.ip;
	emu_cs = csip.s.cs;
	switch ((emu_cs << 16) + emu_ip) {
		case 0x44AF045A: emu_MPU_TestPort(); break; /* 0x65 */
		case 0x44AF0B73: case 0x47EE0B73: emu_DSP_GetInfo(); break; /* 0x64 */
		case 0x44AF0B91: case 0x47EE0B91: f__AB00_0B91_0014_89BD(); break; /* 0x68 */
		case 0x44AF0C08: case 0x47EE0C08: f__AB00_0C08_0013_3E08(); break; /* 0x81 */
		case 0x44AF0C3F: case 0x47EE0C3F: emu_DSP_TestPort(); break; /* 0x65 */
		case 0x44AF0C96: emu_MPU_GetInfo(); break; /* 0x64 */
		case 0x44AF0DA4: case 0x47EE0DA4: f__AB00_0DA4_0078_0101(); break; /* 0x66 */
		case 0x44AF0F02: emu_MPU_GetUnknownSize(); break; /* 0x99 */
		case 0x44AF0F19: break; /* 0x9A */
		case 0x44AF0F24: f__AB01_0F24_0044_3584(); break; /* 0x9B */
		case 0x44AF1068: case 0x47EE1068: f__AB00_1068_0020_E6F1(); break; /* 0x7B */
		case 0x44AF1122: case 0x47EE1122: f__AB00_1122_001C_9408(); break; /* 0x7D */
		case 0x44AF118F: case 0x47EE118F: f__AB00_118F_0029_4B06(); break; /* 0x7E */
		case 0x44AF1235: case 0x47EE1235: f__AB00_1235_0013_28BA(); break; /* 0x7C */
		case 0x44AF1FA8: emu_MPU_Init(); break; /* 0x66 */
		case 0x44AF2103: f__AB01_2103_0040_93D2(); break; /* 0x68 */
		case 0x44AF2191: emu_MPU_GetDataSize(); break; /* 0x96 */
		case 0x44AF21F0: emu_MPU_SetData(); break; /* 0x97 */
		case 0x44AF2336: f__AB01_2336_002C_4FDC(); break; /* 0x98 */
		case 0x44AF237A: emu_MPU_Play(); break; /* 0xAA */
		case 0x44AF240F: emu_MPU_Stop(); break; /* 0xAB */
		case 0x44AF26EB: f__AB01_26EB_0047_41F4(); break; /* 0xB1 */
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

bool Driver_Music_IsPlaying()
{
	Driver *driver = &g_global->musicDriver;
	MSBuffer *buffer = &g_global->musicBuffer;

	if (driver->index == 0xFFFF) {
		if (driver->dcontent.csip == 0x0) return false;

		emu_ax = 0x0;
		emu_bx = 0x7;
		emu_pushf();

		/* Call based on memory/register values */
		emu_ip = driver->dcontent.s.ip;
		emu_push(emu_cs);
		emu_cs = driver->dcontent.s.cs;
		emu_push(0x08E2);
		switch ((emu_cs << 16) + emu_ip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x1DD7; emu_last_ip = 0x08DF; emu_last_length = 0x0020; emu_last_crc = 0xBD30;
				emu_call();
				return false;
		}

		return emu_ax == 1;
	}

	if (buffer->index == 0xFFFF) return false;

	return MPU_IsPlaying(buffer->index) == 1;
}

bool Driver_Voice_01EB()
{
	if (g_global->voiceDriver.index == 0xFFFF) return false;
	return Drivers_CallFunction(g_global->voiceDriver.index, 0x7C).s.ip == 2;
}

void Driver_Sound_Play(int16 index, int16 volume)
{
	if (index < 0 || index >= 120) return;

	if (g_global->soundsEnabled == 0 && index > 1) return;

	if (g_global->soundDriver.index == 0xFFFF) {
		emu_push(volume);
		emu_push(index);
		emu_push(0x353F); emu_push(0x6302);
		emu_push(emu_cs); emu_push(0x05C8); emu_cs = 0x1DD7; f__1DD7_1C3C_0020_9C6E();
		emu_sp += 8;
		return;
	}

	if (g_global->soundBuffer[g_global->soundBufferIndex].index != 0xFFFF) {
		emu_push(g_global->soundBuffer[g_global->soundBufferIndex].index);
		emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
		Drivers_CallFunction(g_global->soundDriver.index, 0xAB);
		emu_sp += 4;

		emu_push(g_global->soundBuffer[g_global->soundBufferIndex].index);
		emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
		Drivers_CallFunction(g_global->soundDriver.index, 0x98);
		emu_sp += 4;

		g_global->soundBuffer[g_global->soundBufferIndex].index = 0xFFFF;
	}

	emu_push(0); emu_push(0);
	emu_push(g_global->soundBuffer[g_global->soundBufferIndex].buffer.s.cs); emu_push(g_global->soundBuffer[g_global->soundBufferIndex].buffer.s.ip);
	emu_push(index);
	emu_push(g_global->soundDriver.content.s.cs); emu_push(g_global->soundDriver.content.s.ip);
	emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
	g_global->soundBuffer[g_global->soundBufferIndex].index = Drivers_CallFunction(g_global->soundDriver.index, 0x97).s.ip;
	emu_sp += 16;

	Drivers_1DD7_0B9C(&g_global->soundDriver, g_global->soundBuffer[g_global->soundBufferIndex].index);

	emu_push(g_global->soundBuffer[g_global->soundBufferIndex].index);
	emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->soundDriver.index, 0xAA);
	emu_sp += 4;

	emu_push(0);
	emu_push(((volume & 0xFF) * 90) / 256);
	emu_push(g_global->soundBuffer[g_global->soundBufferIndex].index);
	emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->soundDriver.index, 0xB1);
	emu_sp += 8;

	g_global->soundBufferIndex = (g_global->soundBufferIndex + 1) % 4;
}

void Driver_Music_Stop()
{
	if (g_global->musicDriver.index == 0xFFFF) {
		if (g_global->musicDriver.dcontent.csip == 0x0) return;
		emu_push(0);
		emu_push(0);
		emu_push(0x353F); emu_push(0x6344);
		emu_push(emu_cs); emu_push(0x0ACA); emu_cs = 0x1DD7; f__1DD7_1C3C_0020_9C6E();
		emu_sp += 8;
	}

	if (g_global->musicBuffer.index == 0xFFFF) return;

	emu_push(g_global->musicBuffer.index);
	emu_push(g_global->musicDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->musicDriver.index, 0xAB);
	emu_sp += 4;

	emu_push(g_global->musicBuffer.index);
	emu_push(g_global->musicDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->musicDriver.index, 0x98);
	emu_sp += 4;

	g_global->musicBuffer.index = 0xFFFF;
}

void Driver_Sound_Stop()
{
	uint8 i;

	if (g_global->soundDriver.index == 0xFFFF) {
		if (g_global->soundDriver.dcontent.csip == 0x0) return;

		if (g_global->variable_6372 != 0xFFFF) {
			emu_push(g_global->variable_6372);
			emu_push(g_global->musicDriver.index); /* unused, but needed for correct param accesses. */
			Drivers_CallFunction(g_global->musicDriver.index, 0xC1);
			emu_sp += 4;

			g_global->variable_6372 = 0xFFFF;
		}

		emu_push(0);
		emu_push(0);
		emu_push(0x353F); emu_push(0x6302);
		emu_push(emu_cs); emu_push(0x0A74); emu_cs = 0x1DD7; f__1DD7_1C3C_0020_9C6E();
		emu_sp += 8;

		return;
	}

	for (i = 0; i < 4; i++) {
		if (g_global->soundBuffer[i].index == 0xFFFF) continue;

		emu_push(g_global->soundBuffer[i].index);
		emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
		Drivers_CallFunction(g_global->soundDriver.index, 0xAB);
		emu_sp += 4;

		emu_push(g_global->soundBuffer[i].index);
		emu_push(g_global->soundDriver.index); /* unused, but needed for correct param accesses. */
		Drivers_CallFunction(g_global->soundDriver.index, 0x98);
		emu_sp += 4;

		g_global->soundBuffer[i].index = 0xFFFF;
	}
}

void Driver_Voice_LoadFile(char *filename, void *buffer, csip32 buffer_csip, uint32 length)
{
	assert(buffer == (void *)emu_get_memorycsip(buffer_csip));

	if (filename == NULL) return;
	if (g_global->voiceDriver.index == 0xFFFF) return;
	if (!File_Exists(filename)) return;

	if (buffer == NULL) {
		buffer_csip = File_ReadWholeFile(filename, 0x40);

		emu_push(buffer_csip.s.cs); emu_push(buffer_csip.s.ip);
		emu_push(emu_cs); emu_push(0x015F); emu_cs = 0x2649; f__2649_0B64_0011_32F8();
		emu_sp += 4;
		length = (emu_dx << 16) + emu_ax;
	} else {
		length = File_ReadBlockFile(filename, buffer, length);
	}

	emu_push(0xFFFF);
	emu_push(buffer_csip.s.cs); emu_push(buffer_csip.s.ip);
	emu_push(g_global->voiceDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->voiceDriver.index, 0x85);
	emu_sp += 8;
}

void Driver_Voice_0248(uint8 *arg06, csip32 arg06_csip, int16 arg0A, int16 arg0C)
{
	Driver *voice = &g_global->voiceDriver;

	assert(arg06 == emu_get_memorycsip(arg06_csip));

	if (!g_global->soundsEnabled || voice->index == 0xFFFF) return;

	if (arg06 == NULL) {
		arg0A = 0x100;
	} else {
		arg0A = min(arg0A, 0xFF);
	}

	if (!Driver_Voice_01EB()) g_global->variable_639A = 0xFFFF;

	if (arg0A < (int16)g_global->variable_639A) return;

	Driver_Voice_01AB();

	if (arg06 == NULL) return;

	g_global->variable_639A = arg0A;

	emu_push(arg0C / 2);
	emu_push(voice->index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(voice->index, 0x81);
	emu_sp += 4;

	emu_push(arg06_csip.s.cs); emu_push(arg06_csip.s.ip);
	emu_push(emu_cs); emu_push(0x02C8); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	emu_sp += 4;

	if (emu_ax != 0) {
		int32 loc04;

		sprintf((char *)g_global->variable_9939, "Sound1 for %p", arg06);

		emu_push(2);
		emu_push(1);
		emu_push(0);
		emu_push(0x353F); emu_push(0x9939); /* g_global->variable_9939 */
		emu_push(emu_cs); emu_push(0x02FE); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
		emu_sp += 10;

		emu_push(arg06_csip.s.cs); emu_push(arg06_csip.s.ip);
		emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x2649; f__2649_0B64_0011_32F8();
		emu_sp += 4;
		loc04 = (emu_dx << 16) + emu_ax;

		emu_push(emu_cs); emu_push(0x0319); emu_cs = 0x23E1; emu_Tools_GetFreeMemory();

		if (((emu_dx << 16) + emu_ax) < loc04) return;

		emu_push(0);
		emu_push(loc04 >> 16); emu_push(loc04 & 0xFFFF);
		emu_push(emu_cs); emu_push(0x0335); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;
		voice->content.s.cs = emu_dx;
		voice->content.s.ip = emu_ax;

		voice->contentMalloced = 1;

		memmove(emu_get_memorycsip(voice->content), arg06, loc04);

		arg06_csip = voice->content;
		arg06 = emu_get_memorycsip(arg06_csip);
	}

	if (arg06 == NULL) return;

	emu_push(0xFFFF);
	emu_push(arg06_csip.s.cs); emu_push(arg06_csip.s.ip);
	emu_push(voice->index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(voice->index, 0x7B);
	emu_sp += 8;

	Drivers_CallFunction(voice->index, 0x7D);
}

void Driver_Voice_01AB()
{
	Driver *voice = &g_global->voiceDriver;

	if (Driver_Voice_01EB()) Drivers_CallFunction(voice->index, 0x7E);

	if (voice->contentMalloced != 0) {
		emu_push(voice->content.s.cs); emu_push(voice->content.s.ip);
		emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x23E1; emu_Tools_Free();
		emu_sp += 4;

		voice->contentMalloced = 0;
	}

	voice->content.csip = 0x0;
}

void Driver_Music_05D0(csip32 musicName, csip32 arg0A, csip32 arg0E)
{
	Driver *sound = &g_global->soundDriver;
	Driver *music = &g_global->musicDriver;

	Driver_Sound_Stop();

	if (sound->index == 0xFFFF && sound->dcontent.csip == 0x0) return;

	if (sound->content.csip == music->content.csip) {
		sound->content.csip = 0x0;
		sound->variable_1E.csip = 0x0;
		sound->filename.csip = 0x0;
		sound->contentMalloced = 0;
	} else {
		emu_push(0x353F); emu_push(0x6302); /* g_global->soundDriver */
		emu_push(emu_cs); emu_push(0x0640); emu_cs = 0x1DD7; f__1DD7_1BB4_002A_17AC();
		emu_sp += 4;
	}

	if (music->filename.csip != 0x0) {
		char *filename;

		filename = Drivers_GenerateFilename((char *)emu_get_memorycsip(musicName), sound);

		if (strcasecmp(filename, (char *)emu_get_memorycsip(music->filename)) == 0) {
			sound->content = music->content;
			sound->variable_1E = music->variable_1E;
			sound->filename = music->filename;
			sound->contentMalloced = music->contentMalloced;

			if (sound->index == 0xFFFF) {
				emu_dx = music->dcontent.s.cs;
				emu_ax = music->dcontent.s.ip;
				emu_bx = 0x4;
				emu_pushf();
				emu_push(emu_cs); emu_push(0x06DA); emu_cs = sound->dcontent.s.cs;
				switch (sound->dcontent.csip) {
					default:
						/* In case we don't know the call point yet, call the dynamic call */
						emu_last_cs = 0x1DD7; emu_last_ip = 0x06D7; emu_last_length = 0x005F; emu_last_crc = 0x3AAB;
						emu_call();
						return;
				}
			}
		l__06DA:
			return;
		}
	}

	emu_push(arg0E.s.cs); emu_push(arg0E.s.ip);
	emu_push(arg0A.s.cs); emu_push(arg0A.s.ip);
	emu_push(0x353F); emu_push(0x6302); /* g_global->soundDriver */
	emu_push(musicName.s.cs); emu_push(musicName.s.ip);
	emu_push(emu_cs); emu_push(0x06FD); emu_cs = 0x1DD7; f__1DD7_1940_0021_1C0F();
	emu_sp += 16;
}

char *Drivers_GenerateFilename(char *name, Driver *driver)
{
	if (name == NULL || driver == NULL || driver->index == 0xFFFF || driver->dcontent.csip == 0x0) return NULL;

	strcpy(g_global->variable_984A, name);
	if (strrchr(g_global->variable_984A, '.') != NULL) *strrchr(g_global->variable_984A, '.') = '\0';
	strcat(g_global->variable_984A, ".");
	strcat(g_global->variable_984A, driver->extension);

	if (File_Exists(g_global->variable_984A)) return g_global->variable_984A;

	if (driver->index == 0xFFFF) return NULL;

	strcpy(g_global->variable_984A, name);
	if (strrchr(g_global->variable_984A, '.') != NULL) *strrchr(g_global->variable_984A, '.') = '\0';
	strcat(g_global->variable_984A, ".XMI");

	if (File_Exists(g_global->variable_984A)) return g_global->variable_984A;

	return NULL;
}

char *Drivers_GenerateFilename2(char *name, Driver *driver)
{
	if (name == NULL || driver == NULL || driver->index == 0xFFFF || driver->dcontent.csip == 0x0) return NULL;

	strcpy(g_global->variable_9858, name);
	if (strrchr(g_global->variable_9858, '.') != NULL) *strrchr(g_global->variable_9858, '.') = '\0';
	strcat(g_global->variable_9858, ".");
	strcat(g_global->variable_9858, driver->extension2);

	if (File_Exists(g_global->variable_9858)) return g_global->variable_9858;

	strcpy(g_global->variable_9858, "DEFAULT.");
	strcat(g_global->variable_9858, driver->extension2);

	if (File_Exists(g_global->variable_9858)) return g_global->variable_9858;

	return NULL;
}

void Drivers_1DD7_0B9C(Driver *driver, uint16 bufferIndex)
{
	MSVC_PACKED_BEGIN
	struct {
		/* 0000(2)   */ PACK uint16 variable_00;                /*!< ?? */
		/* 0002(4)   */ PACK uint32 position;                   /*!< Pointer to filename for the driver. */
	} GCC_PACKED data;
	MSVC_PACKED_END
	assert_compile(sizeof(data) == 0x6);

	uint8 file_index = 0xFF;
	char *filename;

	if (driver == NULL || driver->index == 0xFFFF || bufferIndex == 0xFFFF) return;

	memcpy(&data, g_global->variable_639E, 6);

	while (true) {
		uint32 position = 0;
		uint16 locdi;

		emu_push(bufferIndex);
		emu_push(driver->index); /* unused, but needed for correct param accesses. */
		locdi = Drivers_CallFunction(driver->index, 0x9B).s.ip;
		emu_sp += 4;

		if (locdi == 0xFFFF) break;

		if (file_index == 0xFF) {
			filename = Drivers_GenerateFilename2((char *)emu_get_memorycsip(driver->filename), driver);

			if (filename == NULL || !File_Exists(filename)) return;

			file_index = File_Open(filename, 1);
		}

		while ((data.variable_00 >> 8) != 0xFF) {
			uint16 size;
			csip32 buffer_csip;
			uint16 *buffer;

			File_Seek(file_index, position, 0);

			File_Read(file_index, &data, 6);
			position += 6;

			if ((data.variable_00 >> 8) == 0xFF) continue;
			if (data.variable_00 != locdi) continue;

			File_Seek(file_index, data.position, 0);

			File_Read(file_index, &size, 2);

			emu_push(0);
			emu_push(0); emu_push(size);
			emu_push(emu_cs); emu_push(0xCC9); emu_cs = 0x23E1; emu_Tools_Malloc();
			emu_sp += 6;
			buffer_csip.s.cs = emu_dx;
			buffer_csip.s.ip = emu_ax;
			buffer = (uint16 *)emu_get_memorycsip(buffer_csip);

			buffer[0] = size;
			size -= 2;

			if (File_Read(file_index, buffer + 2, size) == size) {
				emu_push(buffer_csip.s.cs); emu_push(buffer_csip.s.ip);
				emu_push(data.variable_00 & 0xFF); emu_push(data.variable_00 >> 8);
				emu_push(driver->index); /* unused, but needed for correct param accesses. */
				Drivers_CallFunction(driver->index, 0x9C);
				emu_sp += 10;
			}

			emu_push(buffer_csip.s.cs); emu_push(buffer_csip.s.ip);
			emu_push(emu_cs); emu_push(0x0D36); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;
			break;
		}

		if ((data.variable_00 >> 8) == 0xFF) break;
	}

	if (file_index != 0xFF) File_Close(file_index);
}

static void Drivers_Music_Uninit()
{
	Driver *music = &g_global->musicDriver;

	if (music->index != 0xFFFF) {
		MSBuffer *buffer = &g_global->musicBuffer;

		if (buffer->index != 0xFFFF) {
			emu_push(buffer->index);
			emu_push(music->index); /* unused, but needed for correct param accesses. */
			Drivers_CallFunction(music->index, 0xAB);
			emu_sp += 4;

			emu_push(buffer->index);
			emu_push(music->index); /* unused, but needed for correct param accesses. */
			Drivers_CallFunction(music->index, 0x98);
			emu_sp += 4;

			buffer->index = 0xFFFF;
		}

		emu_push(buffer->buffer.s.cs); emu_push(buffer->buffer.s.ip);
		emu_push(emu_cs); emu_push(0x106E); emu_cs = 0x23E1; emu_Tools_Free();
		emu_sp += 4;
		buffer->buffer.csip = 0x0;
	}

	if (music->dcontent.csip == g_global->soundDriver.dcontent.csip) {
		music->dcontent.csip    = 0x0;
		music->variable_12.csip = 0x0;
		music->dfilename.csip   = 0x0;
		music->customTimer      = 0xFFFF;
	} else {
		emu_push(0x353F); emu_push(0x6344); /* g_global->musicDriver */
		emu_push(emu_cs); emu_push(0x10C4); emu_cs = 0x1DD7; f__1DD7_1696_0011_A4E3();
		emu_sp += 4;
	}
}

static void Drivers_Sound_Uninit()
{
	Driver *sound = &g_global->soundDriver;

	if (sound->index != 0xFFFF) {
		uint8 i;

		for (i = 0; i < 4; i++) {
			MSBuffer *buffer = &g_global->soundBuffer[i];

			if (buffer->index != 0xFFFF) {
				emu_push(buffer->index);
				emu_push(sound->index); /* unused, but needed for correct param accesses. */
				Drivers_CallFunction(sound->index, 0xAB);
				emu_sp += 4;

				emu_push(buffer->index);
				emu_push(sound->index); /* unused, but needed for correct param accesses. */
				Drivers_CallFunction(sound->index, 0x98);
				emu_sp += 4;

				buffer->index = 0xFFFF;
			}

			emu_push(buffer->buffer.s.cs); emu_push(buffer->buffer.s.ip);
			emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;
			buffer->buffer.csip = 0x0;
		}
	}

	if (sound->dcontent.csip == g_global->musicDriver.dcontent.csip) {
		sound->dcontent.csip    = 0x0;
		sound->variable_12.csip = 0x0;
		sound->dfilename.csip   = 0x0;
		sound->customTimer      = 0xFFFF;
	} else {
		emu_push(0x353F); emu_push(0x6302); /* g_global->soundDriver */
		emu_push(emu_cs); emu_push(0x12C8); emu_cs = 0x1DD7; f__1DD7_1696_0011_A4E3();
		emu_sp += 4;
	}
}

static void Drivers_Voice_Uninit()
{
	emu_push(0x353F); emu_push(0x6374); /* g_global->voiceDriver */
	emu_push(emu_cs); emu_push(0x0F3E); emu_cs = 0x1DD7; f__1DD7_1696_0011_A4E3();
	emu_sp += 4;
}

void Drivers_All_Uninit()
{
	emu_push(g_global->variable_639C);
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x2756; f__2756_0827_0035_3DAA();
	emu_sp +=2;

	g_global->variable_639C = 0xFFFF;

	Drivers_Music_Uninit();
	Drivers_Sound_Uninit();
	Drivers_Voice_Uninit();
}
