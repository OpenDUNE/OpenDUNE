/* $Id$ */

/** @file src/sound.c Sound routines. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/strings.h"

#include "sound.h"
#include "table/sound.h"

#include "file.h"
#include "gui/gui.h"
#include "house.h"
#include "mt32mpu.h"
#include "string.h"
#include "tile.h"
#include "tools.h"
#include "unknown/unknown.h"


static void *g_variable_3E54[NUM_VOICES];
static uint32 g_variable_3E54_size[NUM_VOICES];
static const char *_currentMusic = NULL; /*!< Currently loaded music file. */

static void Driver_Music_Play(int16 index, uint16 volume)
{
	Driver *music = &g_global->musicDriver;
	MSBuffer *musicBuffer = &g_global->musicBuffer;

	if (index < 0 || index > 120 || g_global->musicEnabled == 0) return;

	if (music->index == 0xFFFF) return;

	if (musicBuffer->index != 0xFFFF) {
		MPU_Stop(musicBuffer->index);
		MPU_ClearData(musicBuffer->index);
		musicBuffer->index = 0xFFFF;
	}

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		musicBuffer->index = MPU_SetData(music->content, index, musicBuffer->buffer, nullcsip);
	}

	MPU_Play(musicBuffer->index);
	MPU_SetVolume(musicBuffer->index, ((volume & 0xFF) * 90) / 256, 0);
}

static void Driver_Music_LoadFile(const char *musicName)
{
	Driver *music = &g_global->musicDriver;
	Driver *sound = &g_global->soundDriver;

	Driver_Music_Stop();

	if (music->index == 0xFFFF) return;

	if (music->content.csip == sound->content.csip) {
		music->content.csip     = 0x0;
		music->variable_1E.csip = 0x0;
		music->filename.csip    = 0x0;
		music->contentMalloced  = 0;
	} else {
		Driver_UnloadFile(music);
	}

	if (sound->filename.csip != 0x0 && musicName != NULL && strcasecmp(Drivers_GenerateFilename(musicName, music), (char *)emu_get_memorycsip(sound->filename)) == 0) {
		g_global->musicDriver.content         = g_global->soundDriver.content;
		g_global->musicDriver.variable_1E     = g_global->soundDriver.variable_1E;
		g_global->musicDriver.filename        = g_global->soundDriver.filename;
		g_global->musicDriver.contentMalloced = g_global->soundDriver.contentMalloced;

		return;
	}

	Driver_LoadFile(musicName, music);
}

/**
 * Plays a music.
 * @param index The index of the music to play.
 */
void Music_Play(uint16 musicID)
{
	csip32 nullcsip;
	nullcsip.csip = 0x0;

	if (musicID == 0xFFFF || musicID >= 38) return;

	if (g_table_musics[musicID].string != _currentMusic) {
		_currentMusic = g_table_musics[musicID].string;

		Driver_Music_Stop();
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
		Driver_Music_LoadFile(NULL);
		Driver_Sound_LoadFile(NULL);
		Driver_Music_LoadFile(_currentMusic);
		Driver_Sound_LoadFile(_currentMusic);
	}

	Driver_Music_Play(g_table_musics[musicID].variable_04, 0xFF);
}

/**
 * Play a voice. Volume is based on distance to position.
 * @param voiceID Which voice to play.
 * @param position Which position to play it on.
 */
void Voice_PlayAtTile(int16 voiceID, tile32 position)
{
	uint16 index;
	uint16 volume;

	if (voiceID < 0) return;
	if (!g_global->soundsEnabled) return;
	assert(voiceID < 120);

	volume = 255;
	if (position.tile != 0) {
		volume = Tile_GetDistancePacked(g_global->minimapPosition, Tile_PackTile(position));
		if (volume > 64) volume = 64;

		volume = 255 - (volume * 255 / 80);
	}

	index = g_table_voiceMapping[voiceID];

	if (g_config.voiceDrv != 0 && index != 0xFFFF && g_variable_3E54[index] != NULL && g_table_voices[index].variable_04 >= g_global->variable_4060) {
		g_global->variable_4060 = g_table_voices[index].variable_04;
		memmove(emu_get_memorycsip(g_global->readBuffer), g_variable_3E54[index], g_variable_3E54_size[index]);

		Driver_Voice_Play(emu_get_memorycsip(g_global->readBuffer), g_global->readBuffer, g_global->variable_4060, volume);
	} else {
		Driver_Sound_Play(voiceID, volume);
	}
}

/**
 * Play a voice.
 * @param voiceID The voice to play.
 */
void Voice_Play(int16 voiceID)
{
	tile32 tile;

	tile.tile = 0;
	Voice_PlayAtTile(voiceID, tile);
}

/**
 * Load voices.
 * @param voiceSet Voice set to load.
 */
void Voice_LoadVoices(uint16 voiceSet)
{
	static uint16 currentVoiceSet = 0xFFFE;
	uint16 i;
	uint16 voice;

	if (g_config.voiceDrv == 0) return;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		switch (g_table_voices[voice].string[0]) {
			case '%':
				if (g_config.language != LANGUAGE_ENGLISH || currentVoiceSet == voiceSet) {
					if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;
				}

				free(g_variable_3E54[voice]);
				g_variable_3E54[voice] = NULL;
				break;

			case '+':
				if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;

				free(g_variable_3E54[voice]);
				g_variable_3E54[voice] = NULL;
				break;

			case '-':
				if (voiceSet == 0xFFFF) break;

				free(g_variable_3E54[voice]);
				g_variable_3E54[voice] = NULL;
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;

				free(g_variable_3E54[voice]);
				g_variable_3E54[voice] = NULL;
				break;

			case '?':
				if (voiceSet == 0xFFFF) break;

				/* No free() as there was never a malloc(). */
				g_variable_3E54[voice] = NULL;
				break;

			default:
				break;
		}
	}

	if (currentVoiceSet == voiceSet) return;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		const char *str = g_table_voices[voice].string;
		switch (*str) {
			case '%':
				if (g_variable_3E54[voice] != NULL ||
						currentVoiceSet == voiceSet || voiceSet == 0xFFFF || voiceSet == 0xFFFE) break;

				switch (g_config.language) {
					case LANGUAGE_FRENCH: i = 'F'; break;
					case LANGUAGE_GERMAN: i = 'G'; break;
					default: i = g_houseInfo[voiceSet].prefixChar;
				}
				sprintf((char *)g_global->variable_9939, str, i);

				g_variable_3E54[voice] = Sound_Unknown0823((char *)g_global->variable_9939, &g_variable_3E54_size[voice]);
				break;

			case '+':
				if (voiceSet == 0xFFFF || g_variable_3E54[voice] != NULL) break;

				switch (g_config.language) {
					case LANGUAGE_FRENCH:  i = 'F'; break;
					case LANGUAGE_GERMAN:  i = 'G'; break;
					default: i = 'Z'; break;
				}
				sprintf((char *)g_global->variable_9939, str + 1, i);

				g_variable_3E54[voice] = Sound_Unknown0823((char *)g_global->variable_9939, &g_variable_3E54_size[voice]);
				break;

			case '-':
				if (voiceSet != 0xFFFF || g_variable_3E54[voice] != NULL) break;

				g_variable_3E54[voice] = Sound_Unknown0823(str + 1, &g_variable_3E54_size[voice]);
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;

				g_variable_3E54[voice] = Sound_Unknown0823(str + 1, &g_variable_3E54_size[voice]);
				break;

			case '?':
				break;

			default:
				if (g_variable_3E54[voice] != NULL) break;

				g_variable_3E54[voice] = Sound_Unknown0823(str, &g_variable_3E54_size[voice]);
				break;
		}
	}
	currentVoiceSet = voiceSet;
}

/**
 * Unknown function.
 * @param index
 */
void Sound_Unknown0156(uint16 index)
{
	if (index == 0xFFFF || g_global->soundsEnabled == 0 || (int16)g_table_voices[index].variable_04 < (int16)g_global->variable_4060) return;

	g_global->variable_4060 = g_table_voices[index].variable_04;

	if (g_variable_3E54[index] != NULL) {
		memmove(emu_get_memorycsip(g_global->readBuffer), g_variable_3E54[index], g_variable_3E54_size[index]);
		Driver_Voice_Play(emu_get_memorycsip(g_global->readBuffer), g_global->readBuffer, 0xFF, 0xFF);
	} else {
		const char *filename;

		filename = g_table_voices[index].string;
		if (filename[0] == '?') {
			sprintf((char *)g_global->variable_9939, filename + 1, g_global->playerHouseID < HOUSE_MAX ? g_houseInfo[g_global->playerHouseID].prefixChar : ' ');

			Driver_Voice_LoadFile((char *)g_global->variable_9939, (void *)emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);

			Driver_Voice_Play(emu_get_memorycsip(g_global->readBuffer), g_global->readBuffer, 0xFF, 0xFF);
		}
	}
}

/**
 * Unknown function.
 * @param index
 */
void Sound_Unknown0363(uint16 index)
{
	if (index == 0xFFFF) return;

	if (index == 0xFFFE) {
		uint8 i;

		for (i = 0; i < 5; i++) {
			g_global->variable_0218[i] = 0xFFFF;
		}

		Driver_Voice_Stop();

		g_global->viewportMessageText.csip = 0;
		if ((g_global->viewportMessageCounter & 1) != 0) {
			g_global->variable_3A12 = 1;
			g_global->viewportMessageCounter = 0;
		}
		g_global->variable_4060 = 0;

		return;
	}

	if (g_config.voiceDrv == 0 || g_global->soundsEnabled == 0) {
		Driver_Sound_Play(g_global->variable_0312[index][6], 0xFF);

		g_global->viewportMessageText = emu_Global_GetCSIP(String_Get_ByIndex(g_global->variable_0312[index][5]));

		if ((g_global->viewportMessageCounter & 1) != 0) {
			g_global->variable_3A12 = 1;
		}

		g_global->viewportMessageCounter = 4;

		return;
	}

	if (g_global->variable_0218[0] == 0xFFFF) {
		uint8 i;

		for (i = 0; i < 5; i++) {
			g_global->variable_0218[i] = (g_config.language == LANGUAGE_ENGLISH) ? g_global->variable_0312[index][i] : g_global->variable_0836[index][i];
		}
	}

	Sound_Unknown0470();
}

/**
 * Unknown function.
 * @return ??
 */
bool Sound_Unknown0470()
{
	if (g_global->soundsEnabled == 0) return false;

	if (Driver_Voice_IsPlaying()) return true;

	g_global->variable_4060 = 0;

	if (g_global->variable_0218[0] == 0xFFFF) return false;

	Sound_Unknown0156(g_global->variable_0218[0]);

	memmove(&g_global->variable_0218[0], &g_global->variable_0218[1], 8);
	g_global->variable_0218[4] = 0xFFFF;

	return true;
}

/**
 * ??.
 * @param filename The name of the file to load.
 * @return Where the file is loaded.
 */
void *Sound_Unknown0823(const char *filename, uint32 *retFileSize)
{
	uint8 fileIndex;
	uint32 fileSize;
	void *res;

	if (filename == NULL || !File_Exists(filename)) return NULL;

	fileIndex = File_Open(filename, 1);
	fileSize  = File_GetSize(fileIndex);
	File_Close(fileIndex);

	fileSize += 1;
	fileSize &= 0xFFFFFFFE;

	Driver_Voice_LoadFile(filename, (void *)emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);

	*retFileSize = fileSize;
	res = malloc(fileSize);
	memcpy(res, emu_get_memorycsip(g_global->readBuffer), fileSize);

	return res;
}
