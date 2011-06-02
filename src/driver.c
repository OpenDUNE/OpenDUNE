/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/endian.h"
#include "os/math.h"
#include "os/strings.h"
#include "driver.h"
#include "file.h"
#include "interrupt.h"
#include "mt32mpu.h"
#include "tools.h"

extern void f__01F7_27FD_0037_E2C0();
extern void Game_Timer_Interrupt();
extern void emu_Tools_PrintDebug();
extern void emu_DSP_GetInfo();
extern void emu_DSP_Uninit();
extern void emu_DSP_SetVolume();
extern void emu_DSP_Init();
extern void emu_DSP_Play();
extern void emu_DSP_Start();
extern void emu_DSP_Stop();
extern void emu_DSP_GetStatus();
extern void emu_MPU_SetVolume();

extern uint16 g_mt32mpu_cs;

static uint16 _stat04;
static uint16 _stat06;
static csip32 _stat08[17];
static uint16 _stat4C[17];
static uint16 _stat6E[17];
static uint32 _stat90[17];
static uint32 _statD4[17];
static uint32 _stat118;
static csip32 _stat11C;
static uint16 _stat120;
static uint32 _stat122;
static uint16 _stat126;
static csip32 _stat128[16];
static uint16 _stat168[16];
static uint16 _stat188[16];
static uint16 _stat1AC;
static uint16 _stat1B2;
static uint32 *_stat1B4 = (uint32 *)&emu_get_memory8(0x2756, 0x00, 0x1B4);
static csip32 _stat3B8;
static uint16 _stat460;
static uint16 _stat462;
static uint16 _stat464;
static csip32 _stat466;

static void Drivers_CustomTimer_Clear()
{
	_stat118 = 0xFFFFFFFF;
	memset(_stat6E, 0, 34);
	memset(_stat90, 0, 68);
	memset(_statD4, 0, 68);
}

static void Drivers_CustomTimer_InstallInterrupt()
{
	_stat11C = emu_get_csip32(0x00, 0x00, 0x20);
	_stat08[16].csip = 0x27560622;
	emu_get_csip32(0x00, 0x00, 0x20).csip = 0x2756050F;
}

static void Drivers_CustomTimer_EnableHandler(uint16 index)
{
	if (_stat6E[index] != 1) return;

	_stat6E[index] = 2;
}

static void Drivers_CustomTimer_DisableHandler(uint16 index) {
	if (_stat6E[index] == 2) _stat6E[index] = 1;
}

static void Drivers_CustomTimer_06A9(uint16 value)
{
	emu_outb(0x43, 0x36);
	_stat126 = value;
	emu_outb(0x40, value & 0xFF);
	emu_outb(0x40, value >> 8);
}

static void Drivers_CustomTimer_06D2(uint16 value)
{
	if (value >= 54925) {
		value = 0;
	} else {
		value = value * 10000 / 8380;
	}

	Drivers_CustomTimer_06A9(value);
}

static void Drivers_CustomTimer_0746()
{
	uint8 i;

	_stat122 = 0xFFFFFFFF;

	for (i = 0; i <= 16; i++) {
		if (_stat6E[i] == 0) continue;
		if (_statD4[i] < _stat122) _stat122 = _statD4[i];
	}

	if (_stat122 == _stat118) return;

	_stat120 = 0xFFFF;
	_stat118 = _stat122;

	Drivers_CustomTimer_06D2(_stat118 & 0xFFFF);

	memset(_stat90, 0, 68);
}

static void Drivers_CustomTimer_SetDelay(uint16 index, uint32 delay)
{
	uint16 old6E;

	old6E = _stat6E[index];
	_stat6E[index] = 1;

	_statD4[index] = delay;
	_stat90[index] = 0;

	Drivers_CustomTimer_0746();

	_stat6E[index] = old6E;
}

static void Drivers_CustomTimer_SetFrequency(uint16 index, uint32 freq)
{
	assert(freq != 0);
	Drivers_CustomTimer_SetDelay(index, 1000000 / freq);
}

static uint16 Drivers_CustomTimer_AddHandler(csip32 csip)
{
	uint8 i;

	for (i = 0; i < 16; i++) if (_stat6E[i] == 0) break;
	if (i == 16) return 0xFFFF;

	_stat6E[i] = 1;
	_stat4C[i] = 0x353F;
	_stat08[i] = csip;

	_stat04++;
	if (_stat04 != 1) return i;

	Drivers_CustomTimer_Clear();

	_stat6E[16] = 1;

	Drivers_CustomTimer_InstallInterrupt();

	Drivers_CustomTimer_SetDelay(16, 54925);

	Drivers_CustomTimer_EnableHandler(16);

	_stat6E[i] = 1;

	return i;
}

static void Drivers_CustomTimer_UninstallInterrupt()
{
	emu_get_csip32(0x00, 0x00, 0x20) = _stat11C;
	_stat120 = 0xFFFF;
}

static void Drivers_CustomTimer_RemoveHandler(uint16 index)
{
	if (index == 0xFFFF || _stat6E[index] == 0) return;

	_stat6E[index] = 0;

	_stat04--;
	if (_stat04 != 0) return;

	Drivers_CustomTimer_06A9(0);

	Drivers_CustomTimer_UninstallInterrupt();
}

void Drivers_CustomTimer_Interrupt()
{
	if (_stat06 == 0) {
		_stat06 = 1;

		emu_push(emu_ax);
		emu_push(emu_bx);
		emu_push(emu_cx);
		emu_push(emu_dx);
		emu_push(emu_si);
		emu_push(emu_di);
		emu_push(emu_bp);
		emu_push(emu_es);
		emu_push(emu_ds);

		_stat3B8.s.cs = emu_ss;
		_stat3B8.s.ip = emu_sp;
		emu_ss = 0x2756;
		emu_sp = 0x03B8;

		for (_stat120 = 0; _stat120 <= 16; _stat120++) {
			if (_stat6E[_stat120] != 2) continue;

			emu_ds = _stat4C[_stat120];

			_stat90[_stat120] += _stat118;
			if (_stat90[_stat120] < _statD4[_stat120]) continue;
			_stat90[_stat120] -= _statD4[_stat120];

			/* Call based on memory/register values */
			emu_push(emu_cs); emu_push(0x05A2); emu_cs = _stat08[_stat120].s.cs;
			switch (_stat08[_stat120].s.ip) {
				case 0x0622: emu_Drivers_CustomTimer_OriginalInterrupt(); break;
				case 0x0006: Game_Timer_Interrupt(); break;
				case 0x1CEE: g_mt32mpu_cs = _stat08[_stat120].s.cs; emu_MPU_Interrupt(); break;
				default:
					/* In case we don't know the call point yet, call the dynamic call */
					emu_last_cs = 0x2756; emu_last_ip = 0x059D; emu_last_length = 0x0019; emu_last_crc = 0x7966;
					emu_call();
					return;
			}
		}

		emu_ss = _stat3B8.s.cs;
		emu_sp = _stat3B8.s.ip;

		emu_pop(&emu_ds);
		emu_pop(&emu_es);
		emu_pop(&emu_bp);
		emu_pop(&emu_di);
		emu_pop(&emu_si);
		emu_pop(&emu_dx);
		emu_pop(&emu_cx);
		emu_pop(&emu_bx);
		emu_pop(&emu_ax);

		_stat06 = 0;
	}

	emu_outb(0x20, 0x20);

	assert(*_stat1B4 == HTOBE32('Test'));
}

void Drivers_CustomTimer_OriginalInterrupt()
{
	assert(_stat11C.csip == 0x00700040);

	emu_pushf(); emu_push(emu_cs); emu_push(0x0628); emu_cs = 0x0070; Interrupt_Timer();
}

static csip32 Drivers_Load(const char *filename)
{
	csip32 ret;

	ret.csip = 0x0;

	if (!File_Exists(filename)) return ret;

	return File_ReadWholeFile(filename, 0x20);
}

static DriverInfo *Driver_GetInfo(uint16 driver)
{
	csip32 ret;

	emu_push(0x2756); emu_push(0x888);
	emu_push(driver); /* unused, but needed for correct param accesses. */
	ret = Drivers_CallFunction(driver, 0x64);
	emu_sp += 6;
	return (DriverInfo *)emu_get_memorycsip(ret);
}

static void Driver_Init(uint16 driver, uint16 port, uint16 irq1, uint16 dma, uint16 drq)
{
	csip32 csip;
	uint16 locsi;

	if (driver >= 16) return;

	_stat1B2 = 0xFFFF;

	locsi = Driver_GetInfo(driver)->variable_0014;
	csip = Drivers_GetFunctionCSIP(driver, 0x67);
	if (locsi != 0xFFFF && csip.csip != 0) {
		uint16 handlerId = Drivers_CustomTimer_AddHandler(csip);
		_stat168[driver] = handlerId;
		_stat1B2 = handlerId;

		Drivers_CustomTimer_SetFrequency(handlerId, locsi);
	}

	emu_push(drq);
	emu_push(dma);
	emu_push(irq1);
	emu_push(port);
	emu_push(driver); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(driver, 0x66);
	emu_sp += 10;

	_stat188[driver] = 1;

	if (_stat1B2 != 0xFFFF) Drivers_CustomTimer_EnableHandler(_stat1B2);
}

uint16 Drivers_EnableSounds(uint16 sounds)
{
	uint16 ret;

	ret = g_global->soundsEnabled;
	g_global->soundsEnabled = sounds;

	if (sounds == 0) Driver_Sound_Stop();

	return ret;
}

uint16 Drivers_EnableMusic(uint16 music)
{
	uint16 ret;

	ret = g_global->musicEnabled;
	g_global->musicEnabled = music;

	if (music == 0) Driver_Music_Stop();

	return ret;
}

static void Driver_Uninstall(uint16 driver)
{
	if (driver >= 16) return;

	_stat128[driver].csip = 0x0;

	if (_stat462 != 0 && _stat460 == driver) _stat462 = 0;
}

static void Driver_Uninit(uint16 driver)
{
	if (driver >= 16 || _stat188[driver] == 0) return;
	_stat188[driver] = 0;

	if (_stat168[driver] != 0xFFFF) Drivers_CustomTimer_RemoveHandler(_stat168[driver]);

	emu_push(0); emu_push(0);
	emu_push(driver); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(driver, 0x68);
	emu_sp += 6;
}

static void Drivers_Uninit(Driver *driver)
{
	if (driver == NULL) return;

	if (driver->customTimer != 0xFFFF) {
		Drivers_CustomTimer_DisableHandler(driver->customTimer);

		Drivers_CustomTimer_RemoveHandler(driver->customTimer);

		driver->customTimer = 0xFFFF;
	}

	Driver_Uninit(driver->index);

	Driver_Uninstall(driver->index);

	driver->index = 0xFFFF;

	Tools_Free(driver->dcontent);

	driver->dcontent.csip  = 0x0;
	driver->dfilename.csip = 0x0;
}

static uint16 Driver_Install(csip32 dcontent)
{
	uint8  *content = emu_get_memorycsip(dcontent);
	DriverInfo *info;

	for (_stat1AC = 0; _stat1AC < 16; _stat1AC++) {
		if (_stat128[_stat1AC].csip == 0) break;
	}
	if (_stat1AC == 16) return 0xFFFF;

	if (strncmp((char *)(content + 3), "DIGPAK", 6) == 0) {
		if (_stat462 != 0) return 0xFFFF;
		_stat462 = 1;
		_stat460 = 0xFFFF;
		_stat466 = dcontent;
		_stat466.s.cs -= 0x10;
		_stat466.s.ip += 0x100;
		_stat128[_stat1AC].csip = 0x275603BE;
		_stat464 = 0;
		return _stat1AC;
	}

	if (strncmp((char *)(content + 2), "Copy", 4) != 0) return 0xFFFF;

	_stat128[_stat1AC] = dcontent;
	_stat128[_stat1AC].s.ip += ((uint16 *)content)[0];

	info = Driver_GetInfo(_stat1AC);
	if (info == NULL || info->variable_0000 > 211) return 0xFFFF;

	return _stat1AC;
}

static bool Drivers_Init(const char *filename, csip32 fcsip, Driver *driver, const char *extension)
{
	DriverInfo *info;

	if (filename == NULL || !File_Exists(filename)) return false;

	if (driver->dcontent.csip != 0) {
		if (strcasecmp((char *)emu_get_memorycsip(driver->dfilename), filename) == 0) return true;
		Drivers_Uninit(driver);
	}

	driver->dcontent = Drivers_Load(filename);

	if (driver->dcontent.csip == 0) return false;

	driver->index = Driver_Install(driver->dcontent);

	if (driver->index == 0xFFFF) {
		Tools_Free(driver->dcontent);
		driver->dcontent.csip = 0;
		return false;
	}

	info = Driver_GetInfo(driver->index);

	memcpy(driver->extension2, info->extension, 4);
	strcpy(driver->extension, "xmi");

	if (strcasecmp(filename, "sbdig.adv") == 0 || strcasecmp(filename, "sbpdig.adv") == 0) {
		char *blaster;

		emu_push(emu_ds); emu_push(0x65FE); /* "BLASTER" */
		emu_push(emu_cs); emu_push(0x14CF); emu_cs = 0x01F7; f__01F7_27FD_0037_E2C0();
		emu_sp += 4;
		blaster = (char *)&emu_get_memory8(emu_dx, emu_ax, 0x0);

		if (blaster != NULL) {
			char *val;

			val = strchr(blaster, 'A');
			if (val != NULL) {
				val++;
				info->port = (uint16)strtoul(val, NULL, 16);
			}

			val = strchr(blaster, 'I');
			if (val != NULL) {
				val++;
				info->irq1 = info->drq = (uint16)strtoul(val, NULL, 10);
			}

			val = strchr(blaster, 'D');
			if (val != NULL) {
				val++;
				info->dma = (uint16)strtoul(val, NULL, 10);
			}
		}
	}

	Driver_Init(driver->index, info->port, info->irq1, info->dma, info->drq);

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
		if (!Drivers_Init(filename, driver->filename, sound, (char *)emu_get_memorycsip(driver->extension))) return 0;
	}

	if (driver->variable_0008 == 0) {
		uint8 i;
		int32 value;

		value = MPU_GetDataSize();

		for (i = 0; i < 4; i++) {
			MSBuffer *buf = &g_global->soundBuffer[i];

			buf->buffer = Tools_Malloc(value, 0x10);
			buf->index  = 0xFFFF;
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
		if (!Drivers_Init(filename, driver->filename, music, (char *)emu_get_memorycsip(driver->extension))) return 0;
	}

	g_global->variable_636A = driver->variable_000A;
	if (driver->variable_0008 != 0) return index;

	value = MPU_GetDataSize();

	g_global->musicBuffer.buffer = Tools_Malloc(value, 0x10);
	g_global->musicBuffer.index  = 0xFFFF;

	return index;
}

uint16 Drivers_Voice_Init(uint16 index)
{
	char *filename;
	DSDriver *driver;
	Driver *voice;

	driver = &g_global->voiceDrv[index];
	voice  = &g_global->voiceDriver;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);

	if (!Drivers_Init(filename, driver->filename, voice, "VOC")) return 0;

	return index;
}

static void Drivers_Reset()
{
	_stat04 = 0;
	_stat06 = 0;
	_stat462 = 0;
	memset(_stat128, 0, 64);
	memset(_stat168, 0xFF, 32);
	memset(_stat188, 0, 32);
}

void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice)
{
	Drivers_Reset();

	{
		csip32 csip;
		csip.csip = 0x2BD10006;
		g_global->variable_639C = Drivers_CustomTimer_AddHandler(csip);
	}

	Drivers_CustomTimer_SetFrequency(g_global->variable_639C, 60);

	Drivers_CustomTimer_EnableHandler(g_global->variable_639C);

	assert(Drivers_Music_Init(music) == music);
	assert(Drivers_Sound_Init(sound) == sound);
	assert(Drivers_Voice_Init(voice) == voice);
}

csip32 Drivers_GetFunctionCSIP(uint16 driver, uint16 function)
{
	csip32 csip;

	if (driver >= 16) {
		csip.csip = 0;
		return csip;
	}

	csip = _stat128[driver];
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

	g_mt32mpu_cs = csip.s.cs;

	/* Call/jump based on memory/register values */
	emu_push(emu_cs); emu_push(emu_ip);
	emu_ip = csip.s.ip;
	emu_cs = csip.s.cs;
	switch (emu_ip) {
		case 0x0B73: emu_DSP_GetInfo(); break; /* 0x64 */
		case 0x0C96: emu_MPU_GetInfo(); break; /* 0x64 */
		case 0x0DA4: emu_DSP_Init(); break; /* 0x66 */
		case 0x1FA8: emu_MPU_Init(); break; /* 0x66 */
		case 0x0B91: emu_DSP_Uninit(); break; /* 0x68 */
		case 0x2103: emu_MPU_Uninit(); break; /* 0x68 */
		case 0x26EB: emu_MPU_SetVolume(); break; /* 0xB1 */
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
	MSBuffer *buffer = &g_global->musicBuffer;

	if (g_global->musicDriver.index == 0xFFFF) return false;
	if (buffer->index == 0xFFFF) return false;

	return MPU_IsPlaying(buffer->index) == 1;
}

bool Driver_Voice_IsPlaying()
{
	if (g_global->voiceDriver.index == 0xFFFF) return false;
	emu_push(emu_cs); emu_push(emu_ip); emu_cs = 0x4352; emu_DSP_GetStatus();
	return emu_ax == 2;
}

void Driver_Sound_Play(int16 index, int16 volume)
{
	Driver *sound = &g_global->soundDriver;
	MSBuffer *soundBuffer = &g_global->soundBuffer[g_global->soundBufferIndex];

	if (index < 0 || index >= 120) return;

	if (g_global->soundsEnabled == 0 && index > 1) return;

	if (sound->index == 0xFFFF) return;

	if (soundBuffer->index != 0xFFFF) {
		MPU_Stop(soundBuffer->index);
		MPU_ClearData(soundBuffer->index);
		soundBuffer->index = 0xFFFF;
	}

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		soundBuffer->index = MPU_SetData(sound->content, index, soundBuffer->buffer, nullcsip);
	}

	MPU_Play(soundBuffer->index);

	emu_push(0);
	emu_push(((volume & 0xFF) * 90) / 256);
	emu_push(soundBuffer->index);
	emu_push(sound->index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(sound->index, 0xB1);
	emu_sp += 8;

	g_global->soundBufferIndex = (g_global->soundBufferIndex + 1) % 4;
}

void Driver_Music_Stop()
{
	Driver *music = &g_global->musicDriver;
	MSBuffer *musicBuffer = &g_global->musicBuffer;

	if (music->index == 0xFFFF) return;
	if (musicBuffer->index == 0xFFFF) return;

	MPU_Stop(musicBuffer->index);
	MPU_ClearData(musicBuffer->index);
	musicBuffer->index = 0xFFFF;
}

void Driver_Sound_Stop()
{
	Driver *sound = &g_global->soundDriver;
	uint8 i;

	if (sound->index == 0xFFFF) return;

	for (i = 0; i < 4; i++) {
		MSBuffer *soundBuffer = &g_global->soundBuffer[i];
		if (soundBuffer->index == 0xFFFF) continue;

		MPU_Stop(soundBuffer->index);
		MPU_ClearData(soundBuffer->index);
		soundBuffer->index = 0xFFFF;
	}
}

void Driver_Voice_LoadFile(char *filename, void *buffer, uint32 length)
{
	assert(buffer != NULL);

	if (filename == NULL) return;
	if (g_global->voiceDriver.index == 0xFFFF) return;
	if (!File_Exists(filename)) return;

	File_ReadBlockFile(filename, buffer, length);
}

void Driver_Voice_Play(uint8 *arg06, csip32 arg06_csip, int16 arg0A, int16 arg0C)
{
	Driver *voice = &g_global->voiceDriver;

	assert(arg06 == emu_get_memorycsip(arg06_csip));

	if (!g_global->soundsEnabled || voice->index == 0xFFFF) return;

	if (arg06 == NULL) {
		arg0A = 0x100;
	} else {
		arg0A = min(arg0A, 0xFF);
	}

	if (!Driver_Voice_IsPlaying()) g_global->variable_639A = 0xFFFF;

	if (arg0A < (int16)g_global->variable_639A) return;

	Driver_Voice_Stop();

	if (arg06 == NULL) return;

	g_global->variable_639A = arg0A;

	emu_push(arg0C / 2);
	emu_push(voice->index); /* unused, but needed for correct param accesses. */
	emu_push(emu_cs); emu_push(emu_ip); emu_cs = 0x4352; emu_DSP_SetVolume();
	emu_sp += 4;

	if (arg06 == NULL) return;

	emu_push(0xFFFF);
	emu_push(arg06_csip.s.cs); emu_push(arg06_csip.s.ip);
	emu_push(voice->index); /* unused, but needed for correct param accesses. */
	emu_push(emu_cs); emu_push(emu_ip); emu_cs = 0x4352; emu_DSP_Play();
	emu_sp += 8;

	emu_push(emu_cs); emu_push(emu_ip); emu_cs = 0x4352; emu_DSP_Start();
}

void Driver_Voice_Stop()
{
	Driver *voice = &g_global->voiceDriver;

	if (Driver_Voice_IsPlaying()) {
		emu_push(emu_cs); emu_push(emu_ip); emu_cs = 0x4352; emu_DSP_Stop();
	}

	if (voice->contentMalloced != 0) {
		Tools_Free(voice->content);
		voice->contentMalloced = 0;
	}

	voice->content.csip = 0x0;
}

void Driver_Sound_LoadFile(char *musicName)
{
	Driver *sound = &g_global->soundDriver;
	Driver *music = &g_global->musicDriver;

	Driver_Sound_Stop();

	if (sound->index == 0xFFFF) return;

	if (sound->content.csip == music->content.csip) {
		sound->content.csip = 0x0;
		sound->variable_1E.csip = 0x0;
		sound->filename.csip = 0x0;
		sound->contentMalloced = 0;
	} else {
		Driver_UnloadFile(sound);
	}

	if (music->filename.csip != 0x0) {
		char *filename;

		filename = Drivers_GenerateFilename(musicName, sound);

		if (strcasecmp(filename, (char *)emu_get_memorycsip(music->filename)) == 0) {
			sound->content = music->content;
			sound->variable_1E = music->variable_1E;
			sound->filename = music->filename;
			sound->contentMalloced = music->contentMalloced;
			return;
		}
	}

	Driver_LoadFile(musicName, sound);
}

char *Drivers_GenerateFilename(char *name, Driver *driver)
{
	if (name == NULL || driver == NULL || driver->index == 0xFFFF) return NULL;

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

static void Drivers_Music_Uninit()
{
	Driver *music = &g_global->musicDriver;

	if (music->index != 0xFFFF) {
		MSBuffer *buffer = &g_global->musicBuffer;

		if (buffer->index != 0xFFFF) {
			MPU_Stop(buffer->index);
			MPU_ClearData(buffer->index);
			buffer->index = 0xFFFF;
		}

		Tools_Free(buffer->buffer);
		buffer->buffer.csip = 0x0;
	}

	if (music->dcontent.csip == g_global->soundDriver.dcontent.csip) {
		music->dcontent.csip    = 0x0;
		music->variable_12.csip = 0x0;
		music->dfilename.csip   = 0x0;
		music->customTimer      = 0xFFFF;
	} else {
		Drivers_Uninit(music);
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
				MPU_Stop(buffer->index);
				MPU_ClearData(buffer->index);
				buffer->index = 0xFFFF;
			}

			Tools_Free(buffer->buffer);
			buffer->buffer.csip = 0x0;
		}
	}

	if (sound->dcontent.csip == g_global->musicDriver.dcontent.csip) {
		sound->dcontent.csip    = 0x0;
		sound->variable_12.csip = 0x0;
		sound->dfilename.csip   = 0x0;
		sound->customTimer      = 0xFFFF;
	} else {
		Drivers_Uninit(sound);
	}
}

static void Drivers_Voice_Uninit()
{
	Drivers_Uninit(&g_global->voiceDriver);
}

void Drivers_All_Uninit()
{
	Drivers_CustomTimer_RemoveHandler(g_global->variable_639C);

	g_global->variable_639C = 0xFFFF;

	Drivers_Music_Uninit();
	Drivers_Sound_Uninit();
	Drivers_Voice_Uninit();
}

void Driver_LoadFile(char *musicName, Driver *driver)
{
	char *filename;
	uint8 fileIndex;
	int32 size;

	filename = Drivers_GenerateFilename(musicName, driver);

	if (filename == NULL) return;

	Driver_UnloadFile(driver);

	driver->filename = Tools_Malloc(strlen(filename) + 1, 0x0);
	strcpy((char *)emu_get_memorycsip(driver->filename), filename);

	fileIndex = File_Open(filename, 1);

	size = File_GetSize(fileIndex);

	driver->content = Tools_Malloc(size, 0x20);
	driver->contentMalloced = 1;

	File_Read(fileIndex, (void *)emu_get_memorycsip(driver->content), size);

	File_Close(fileIndex);
}

void Driver_UnloadFile(Driver *driver)
{
	if (driver->content.csip != 0x0 && driver->contentMalloced != 0) {
		Tools_Free(driver->content);
		Tools_Free(driver->variable_1E);
	}

	Tools_Free(driver->filename);

	driver->contentMalloced  = 0;
	driver->filename.csip    = 0x0;
	driver->content.csip     = 0x0;
	driver->variable_1E.csip = 0x0;
}

void Driver_Music_FadeOut()
{
	Driver *music = &g_global->musicDriver;
	MSBuffer *musicBuffer = &g_global->musicBuffer;

	if (music->index == 0xFFFF) return;

	if (musicBuffer->index == 0xFFFF) return;

	emu_push(0x7D0);
	emu_push(0);
	emu_push(musicBuffer->index);
	emu_push(music->index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(music->index, 0xB1);
	emu_sp += 8;
}
