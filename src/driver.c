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

static uint16 *s_driverFunctionTable[16];
static bool s_driverLoaded[16];

static Driver s_driverMusic;
static Driver s_driverSound;
static Driver s_driverVoice;

static MSBuffer s_bufferMusic;
static MSBuffer s_bufferSound[4];

Driver *g_driverMusic = &s_driverMusic;
Driver *g_driverSound = &s_driverSound;
Driver *g_driverVoice = &s_driverVoice;

MSBuffer *g_bufferMusic = &s_bufferMusic;
MSBuffer *g_bufferSound[4] = { &s_bufferSound[0], &s_bufferSound[1], &s_bufferSound[2], &s_bufferSound[3] };

static uint8 s_bufferSoundIndex;

void Drivers_Tick()
{
	if (emu_flags.inf) MPU_Interrupt();
}

static void *Drivers_Load(const char *filename)
{
	if (!File_Exists(filename)) return NULL;

	return File_ReadWholeFile(filename);
}

static uint16 Drivers_GetFunctionCSIP(uint16 driver, uint16 function)
{
	uint16 *p;

	if (driver >= 16) {
		return 0;
	}

	p = s_driverFunctionTable[driver];
	if (p == NULL) return 0;

	for (;; p += 2) {
		if (*p == function) break;
		if (*p != 0xFFFF) continue;
		return 0;
	}

	return *(p + 1);
}

static void *Drivers_CallFunction(uint16 driver, uint16 function)
{
	uint16 ip;

	ip = Drivers_GetFunctionCSIP(driver, function);
	if (ip == 0) return NULL;

	switch (ip) {
		case 0x0B73: return DSP_GetInfo(); /* 0x64 */
		case 0x0C96: return MPU_GetInfo(); /* 0x64 */
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
	uint16 ip;
	uint16 frequency;

	if (driver >= 16) return;

	frequency = Driver_GetInfo(driver)->frequency;
	ip = Drivers_GetFunctionCSIP(driver, 0x67);
	if (frequency != 0xFFFF && ip != 0) {
		Timer_Add(Drivers_Tick, 1000000 / frequency);
	}

	Drivers_CallFunction(driver, 0x66);

	s_driverLoaded[driver] = true;
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

	s_driverFunctionTable[driver] = NULL;
}

static void Driver_Uninit(uint16 driver)
{
	if (driver >= 16 || !s_driverLoaded[driver]) return;
	s_driverLoaded[driver] = false;

	Timer_Remove(Drivers_Tick);

	Drivers_CallFunction(driver, 0x68);
}

static void Drivers_Uninit(Driver *driver)
{
	if (driver == NULL) return;

	Driver_Uninit(driver->index);

	Driver_Uninstall(driver->index);

	driver->index = 0xFFFF;

	free(driver->dcontent);

	driver->dcontent  = NULL;
	driver->dfilename = NULL;
}

static uint16 Driver_Install(void *dcontent)
{
	uint8 *content = dcontent;
	DriverInfo *info;
	uint16 index;

	for (index = 0; index < 16; index++) {
		if (s_driverFunctionTable[index] == NULL) break;
	}
	if (index == 16) return 0xFFFF;

	if (strncmp((char *)(content + 2), "Copy", 4) != 0) return 0xFFFF;

	s_driverFunctionTable[index] = (uint16 *)(content + ((uint16 *)content)[0]);

	info = Driver_GetInfo(index);
	if (info == NULL) return 0xFFFF;

	return index;
}

static bool Drivers_Init(const char *filename, Driver *driver, const char *extension)
{
	DriverInfo *info;

	if (filename == NULL || !File_Exists(filename)) return false;

	if (driver->dcontent != NULL) {
		if (strcasecmp(driver->dfilename, filename) == 0) return true;
		Drivers_Uninit(driver);
	}

	driver->dcontent = Drivers_Load(filename);
	if (driver->dcontent == NULL) return false;

	driver->index = Driver_Install(driver->dcontent);

	if (driver->index == 0xFFFF) {
		free(driver->dcontent);
		driver->dcontent = NULL;
		return false;
	}

	info = Driver_GetInfo(driver->index);

	strcpy(driver->extension, "xmi");

	Driver_Init(driver->index);

	driver->dfilename = filename;
	driver->extension[0] = 0;
	if (driver->dcontent != NULL) memcpy(driver->extension, extension, 4);

	return true;
}

uint16 Drivers_Sound_Init(uint16 index)
{
	char *filename;
	MSDriver *driver;
	Driver *sound;
	Driver *music;

	driver = &g_global->soundDrv[index];
	sound  = g_driverSound;
	music  = g_driverMusic;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);

	if (music->dfilename != NULL && !strcasecmp(music->dfilename, filename)) {
		memcpy(sound, music, sizeof(Driver));
	} else {
		if (!Drivers_Init(filename, sound, (char *)emu_get_memorycsip(driver->extension))) return 0;
	}

	if (driver->variable_0008 == 0) {
		uint32 size;
		uint8 i;

		size = MPU_GetDataSize();

		for (i = 0; i < 4; i++) {
			MSBuffer *buf = g_bufferSound[i];

			buf->buffer = calloc(1, size);
			buf->index  = 0xFFFF;
		}
		s_bufferSoundIndex = 0;
	}

	return index;
}

uint16 Drivers_Music_Init(uint16 index)
{
	char *filename;
	MSDriver *driver;
	Driver *music;
	Driver *sound;
	uint32 size;

	driver = &g_global->musicDrv[index];
	sound  = g_driverSound;
	music  = g_driverMusic;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);

	if (sound->dfilename != NULL && !strcasecmp(sound->dfilename, filename)) {
		memcpy(music, sound, sizeof(Driver));
	} else {
		if (!Drivers_Init(filename, music, (char *)emu_get_memorycsip(driver->extension))) return 0;
	}

	if (driver->variable_0008 != 0) return index;

	size = MPU_GetDataSize();

	g_bufferMusic->buffer = calloc(1, size);
	g_bufferMusic->index  = 0xFFFF;

	return index;
}

uint16 Drivers_Voice_Init(uint16 index)
{
	char *filename;
	DSDriver *driver;
	Driver *voice;

	driver = &g_global->voiceDrv[index];
	voice  = g_driverVoice;

	if (driver->filename.csip == 0x0) return index;

	filename = (char *)emu_get_memorycsip(driver->filename);

	if (!Drivers_Init(filename, voice, "VOC")) return 0;

	return index;
}

static void Drivers_Reset()
{
	memset(s_driverFunctionTable, 0, sizeof(s_driverFunctionTable));
	memset(s_driverLoaded, 0, sizeof(s_driverLoaded));
}

void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice)
{
	Drivers_Reset();

	assert(Drivers_Music_Init(music) == music);
	assert(Drivers_Sound_Init(sound) == sound);
	assert(Drivers_Voice_Init(voice) == voice);
}

bool Driver_Music_IsPlaying()
{
	MSBuffer *buffer = g_bufferMusic;

	if (g_driverMusic->index == 0xFFFF) return false;
	if (buffer->index == 0xFFFF) return false;

	return MPU_IsPlaying(buffer->index) == 1;
}

bool Driver_Voice_IsPlaying()
{
	if (g_driverVoice->index == 0xFFFF) return false;
	return DSP_GetStatus() == 2;
}

void Driver_Sound_Play(int16 index, int16 volume)
{
	Driver *sound = g_driverSound;
	MSBuffer *soundBuffer = g_bufferSound[s_bufferSoundIndex];

	if (index < 0 || index >= 120) return;

	if (g_global->soundsEnabled == 0 && index > 1) return;

	if (sound->index == 0xFFFF) return;

	if (soundBuffer->index != 0xFFFF) {
		MPU_Stop(soundBuffer->index);
		MPU_ClearData(soundBuffer->index);
		soundBuffer->index = 0xFFFF;
	}

	soundBuffer->index = MPU_SetData(sound->content, index, soundBuffer->buffer);

	MPU_Play(soundBuffer->index);
	MPU_SetVolume(soundBuffer->index, ((volume & 0xFF) * 90) / 256, 0);

	s_bufferSoundIndex = (s_bufferSoundIndex + 1) % 4;
}

void Driver_Music_Stop()
{
	Driver *music = g_driverMusic;
	MSBuffer *musicBuffer = g_bufferMusic;

	if (music->index == 0xFFFF) return;
	if (musicBuffer->index == 0xFFFF) return;

	MPU_Stop(musicBuffer->index);
	MPU_ClearData(musicBuffer->index);
	musicBuffer->index = 0xFFFF;
}

void Driver_Sound_Stop()
{
	Driver *sound = g_driverSound;
	uint8 i;

	if (sound->index == 0xFFFF) return;

	for (i = 0; i < 4; i++) {
		MSBuffer *soundBuffer = g_bufferSound[i];
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
	if (g_driverVoice->index == 0xFFFF) return;
	if (!File_Exists(filename)) return;

	File_ReadBlockFile(filename, buffer, length);
}

void Driver_Voice_Play(uint8 *arg06, int16 arg0A)
{
	static int16 l_var_639A = -1;

	Driver *voice = g_driverVoice;

	if (!g_global->soundsEnabled || voice->index == 0xFFFF) return;

	if (arg06 == NULL) {
		arg0A = 0x100;
	} else {
		arg0A = min(arg0A, 0xFF);
	}

	if (!Driver_Voice_IsPlaying()) l_var_639A = -1;

	if (arg0A < l_var_639A) return;

	Driver_Voice_Stop();

	if (arg06 == NULL) return;

	l_var_639A = arg0A;

	if (arg06 == NULL) return;

	DSP_Play(arg06);
}

void Driver_Voice_Stop()
{
	Driver *voice = g_driverVoice;

	if (Driver_Voice_IsPlaying()) DSP_Stop();

	if (voice->contentMalloced) {
		free(voice->content);
		voice->contentMalloced = false;
	}

	voice->content = NULL;
}

void Driver_Sound_LoadFile(const char *musicName)
{
	Driver *sound = g_driverSound;
	Driver *music = g_driverMusic;

	Driver_Sound_Stop();

	if (sound->index == 0xFFFF) return;

	if (sound->content == music->content) {
		sound->content         = NULL;
		sound->filename        = NULL;
		sound->contentMalloced = false;
	} else {
		Driver_UnloadFile(sound);
	}

	if (music->filename != NULL) {
		char *filename;

		filename = Drivers_GenerateFilename(musicName, sound);

		if (strcasecmp(filename, music->filename) == 0) {
			sound->content         = music->content;
			sound->filename        = music->filename;
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
	Driver *music = g_driverMusic;

	if (music->index != 0xFFFF) {
		MSBuffer *buffer = g_bufferMusic;

		if (buffer->index != 0xFFFF) {
			MPU_Stop(buffer->index);
			MPU_ClearData(buffer->index);
			buffer->index = 0xFFFF;
		}

		free(buffer->buffer);
		buffer->buffer = NULL;
	}

	if (music->dcontent == g_driverSound->dcontent) {
		music->dcontent  = NULL;
		music->dfilename = NULL;
	} else {
		Drivers_Uninit(music);
	}
}

static void Drivers_Sound_Uninit()
{
	Driver *sound = g_driverSound;

	if (sound->index != 0xFFFF) {
		uint8 i;

		for (i = 0; i < 4; i++) {
			MSBuffer *buffer = g_bufferSound[i];

			if (buffer->index != 0xFFFF) {
				MPU_Stop(buffer->index);
				MPU_ClearData(buffer->index);
				buffer->index = 0xFFFF;
			}

			free(buffer->buffer);
			buffer->buffer = NULL;
		}
	}

	if (sound->dcontent == g_driverMusic->dcontent) {
		sound->dcontent  = NULL;
		sound->dfilename = NULL;
	} else {
		Drivers_Uninit(sound);
	}
}

static void Drivers_Voice_Uninit()
{
	Drivers_Uninit(g_driverVoice);
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

	filename = Drivers_GenerateFilename(musicName, driver);

	if (filename == NULL) return;

	Driver_UnloadFile(driver);

	driver->filename = malloc(strlen(filename) + 1);
	strcpy(driver->filename, filename);

	driver->content = File_ReadWholeFile(filename);
	driver->contentMalloced = true;
}

void Driver_UnloadFile(Driver *driver)
{
	if (driver->contentMalloced) {
		free(driver->content);
	}

	free(driver->filename);

	driver->filename        = NULL;
	driver->content         = NULL;
	driver->contentMalloced = false;
}

void Driver_Music_FadeOut()
{
	Driver *music = g_driverMusic;
	MSBuffer *musicBuffer = g_bufferMusic;

	if (music->index == 0xFFFF) return;
	if (musicBuffer->index == 0xFFFF) return;

	MPU_SetVolume(musicBuffer->index, 0, 2000);
}
