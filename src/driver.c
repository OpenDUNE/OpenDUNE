/* $Id$ */

/** @file src/driver.c %Driver functions. */

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

#include "dsp.h"
#include "file.h"
#include "mt32mpu.h"
#include "timer.h"
#include "tools.h"

extern uint16 g_mt32mpu_cs;
extern uint16 g_dsp_cs;

static csip32 _stat128[16];
static uint16 _stat188[16];
static uint16 _stat1AC;
static uint16 _stat460;
static uint16 _stat462;
static uint16 _stat464;
static csip32 _stat466;

void Drivers_Tick()
{
	if (emu_flags.inf) MPU_Interrupt();
}

static csip32 Drivers_Load(const char *filename)
{
	csip32 ret;

	ret.csip = 0x0;

	if (!File_Exists(filename)) return ret;

	return File_ReadWholeFile(filename, 0x20);
}

static void *Drivers_CallFunction(uint16 driver, uint16 function)
{
	csip32 csip;

	csip = Drivers_GetFunctionCSIP(driver, function);
	if (csip.csip == 0) return NULL;

	switch (csip.s.ip) {
		case 0x0B73: g_dsp_cs = csip.s.cs; return DSP_GetInfo(); /* 0x64 */
		case 0x0C96: g_mt32mpu_cs = csip.s.cs; return MPU_GetInfo(); /* 0x64 */
		case 0x0DA4: DSP_Init(); break; /* 0x66 */
		case 0x1FA8: MPU_Init(); break; /* 0x66 */
		case 0x0B91: DSP_Uninit(); break; /* 0x68 */
		case 0x2103: MPU_Uninit(); break; /* 0x68 */
	}

	return NULL;
}

static DriverInfo *Driver_GetInfo(uint16 driver)
{
	return Drivers_CallFunction(driver, 0x64);
}

static void Driver_Init(uint16 driver)
{
	csip32 csip;
	uint16 frequency;

	if (driver >= 16) return;

	frequency = Driver_GetInfo(driver)->frequency;
	csip = Drivers_GetFunctionCSIP(driver, 0x67);
	if (frequency != 0xFFFF && csip.csip != 0) {
		Timer_Add(Drivers_Tick, 1000000 / frequency);
	}

	Drivers_CallFunction(driver, 0x66);

	_stat188[driver] = 1;
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

	Timer_Remove(Drivers_Tick);

	Drivers_CallFunction(driver, 0x68);
}

static void Drivers_Uninit(Driver *driver)
{
	if (driver == NULL) return;

	if (driver->customTimer != 0xFFFF) {
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
	if (info == NULL) return 0xFFFF;

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

	Driver_Init(driver->index);

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
	_stat462 = 0;
	memset(_stat128, 0, 64);
	memset(_stat188, 0, 32);
}

void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice)
{
	Drivers_Reset();

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
	return DSP_GetStatus() == 2;
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

	soundBuffer->index = MPU_SetData(sound->content, index, emu_get_memorycsip(soundBuffer->buffer));

	MPU_Play(soundBuffer->index);
	MPU_SetVolume(soundBuffer->index, ((volume & 0xFF) * 90) / 256, 0);

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

void Driver_Voice_LoadFile(const char *filename, void *buffer, uint32 length)
{
	assert(buffer != NULL);

	if (filename == NULL) return;
	if (g_global->voiceDriver.index == 0xFFFF) return;
	if (!File_Exists(filename)) return;

	File_ReadBlockFile(filename, buffer, length);
}

void Driver_Voice_Play(uint8 *arg06, int16 arg0A)
{
	Driver *voice = &g_global->voiceDriver;

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

	if (arg06 == NULL) return;

	DSP_Play(arg06);
}

void Driver_Voice_Stop()
{
	Driver *voice = &g_global->voiceDriver;

	if (Driver_Voice_IsPlaying()) DSP_Stop();

	if (voice->contentMalloced != 0) {
		Tools_Free(voice->content);
		voice->contentMalloced = 0;
	}

	voice->content.csip = 0x0;
}

void Driver_Sound_LoadFile(const char *musicName)
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

char *Drivers_GenerateFilename(const char *name, Driver *driver)
{
	static char filename[14];

	if (name == NULL || driver == NULL || driver->index == 0xFFFF) return NULL;

	strcpy(filename, name);
	if (strrchr(filename, '.') != NULL) *strrchr(filename, '.') = '\0';
	strcat(filename, ".");
	strcat(filename, driver->extension);

	if (File_Exists(filename)) return filename;

	if (driver->index == 0xFFFF) return NULL;

	strcpy(filename, name);
	if (strrchr(filename, '.') != NULL) *strrchr(filename, '.') = '\0';
	strcat(filename, ".XMI");

	if (File_Exists(filename)) return filename;

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
	Drivers_Music_Uninit();
	Drivers_Sound_Uninit();
	Drivers_Voice_Uninit();
}

void Driver_LoadFile(const char *musicName, Driver *driver)
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

	MPU_SetVolume(musicBuffer->index, 0, 2000);
}
