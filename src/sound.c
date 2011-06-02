/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "sound.h"
#include "gui/gui.h"
#include "string.h"
#include "tile.h"
#include "house.h"
#include "tools.h"
#include "unknown/unknown.h"
#include "os/strings.h"
#include "mt32mpu.h"

extern void emu_Highmem_GetSize();
extern void emu_Highmem_IsInHighmem();

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

	Drivers_1DD7_0B9C(music, musicBuffer->index);

	MPU_Play(musicBuffer->index);

	emu_push(0);
	emu_push(((volume & 0xFF) * 90) / 256);
	emu_push(musicBuffer->index);
	emu_push(music->index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(music->index, 0xB1);
	emu_sp += 8;
}

static void Driver_Music_LoadFile(char *musicName)
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

	if (g_global->musics[musicID].string.csip != g_global->currentMusic.csip) {
		char *currentMusic;

		g_global->currentMusic = g_global->musics[musicID].string;
		currentMusic = (char *)emu_get_memorycsip(g_global->currentMusic);

		Driver_Music_Stop();
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
		Driver_Music_LoadFile(NULL);
		Driver_Sound_LoadFile(NULL);
		Driver_Music_LoadFile(currentMusic);
		Driver_Sound_LoadFile(currentMusic);
	}

	Driver_Music_Play(g_global->musics[musicID].variable_04, 0xFF);
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

	index = g_global->variable_0222[voiceID];

	if (index != 0xFFFF && g_global->variable_3E54[index].csip != 0x0 && g_global->voices[index].variable_04 >= g_global->variable_4060) {
		uint32 count;
		csip32 soundBuffer;

		g_global->variable_4060 = g_global->voices[index].variable_04;
		soundBuffer = g_global->variable_3E54[index];

		emu_push(soundBuffer.s.cs); emu_push(soundBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x00EC); emu_cs = 0x2649; emu_Highmem_IsInHighmem();
		emu_sp += 4;

		if (emu_ax != 0) {
			emu_push(soundBuffer.s.cs); emu_push(soundBuffer.s.ip);
			emu_push(emu_cs); emu_push(0x00FD); emu_cs = 0x2649; emu_Highmem_GetSize();
			emu_sp += 4;

			count = (emu_dx << 16) + emu_ax;
		} else {
			count = g_global->readBufferSize;
		}

		Tools_Memmove(soundBuffer, g_global->readBuffer, count);

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

	for (voice = 0; voice < NUM_VOICES; voice++) {
		char *str = (char *)emu_get_memorycsip(g_global->voices[voice].string);
		switch (*str) {
			case '%':
				if (g_global->language != LANGUAGE_ENGLISH || currentVoiceSet == voiceSet) {
					if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;
				}

				Tools_Free(g_global->variable_3E54[voice]);
				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '+':
				if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;

				Tools_Free(g_global->variable_3E54[voice]);
				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '-':
				if (voiceSet == 0xFFFF) break;

				Tools_Free(g_global->variable_3E54[voice]);
				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;

				Tools_Free(g_global->variable_3E54[voice]);
				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '?':
				if (voiceSet == 0xFFFF) break;

				/* No free() as there was never a malloc(). */
				g_global->variable_3E54[voice].csip = 0x0;
				break;

			default:
				break;
		}
	}

	if (currentVoiceSet == voiceSet) return;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		char *str = (char *)emu_get_memorycsip(g_global->voices[voice].string);
		switch (*str) {
			case '%':
				if (g_global->variable_3E54[voice].csip != 0x0 ||
						currentVoiceSet == voiceSet || voiceSet == 0xFFFF || voiceSet == 0xFFFE) break;

				switch (g_global->language) {
					case LANGUAGE_FRENCH: i = 'F'; break;
					case LANGUAGE_GERMAN: i = 'G'; break;
					default: i = g_houseInfo[voiceSet].prefixChar;
				}
				sprintf((char *)g_global->variable_9939, str, i);

				g_global->variable_3E54[voice] = Unknown_B483_0823((char *)g_global->variable_9939);
				break;

			case '+':
				if (voiceSet == 0xFFFF || g_global->variable_3E54[voice].csip != 0x0) break;

				switch (g_global->language) {
					case LANGUAGE_FRENCH:  i = 'F'; break;
					case LANGUAGE_GERMAN:  i = 'G'; break;
					default: i = 'Z'; break;
				}
				sprintf((char *)g_global->variable_9939, str + 1, i);

				g_global->variable_3E54[voice] = Unknown_B483_0823((char *)g_global->variable_9939);
				break;

			case '-':
				if (voiceSet != 0xFFFF || g_global->variable_3E54[voice].csip != 0x0) break;

				g_global->variable_3E54[voice] = Unknown_B483_0823(str + 1);
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;
				g_global->variable_3E54[voice] = Unknown_B483_0823(str + 1);
				break;

			case '?':
				break;

			default:
				if (g_global->variable_3E54[voice].csip != 0x0) break;

				g_global->variable_3E54[voice] = Unknown_B483_0823(str);
				break;
		}
	}
	currentVoiceSet = voiceSet;
}
