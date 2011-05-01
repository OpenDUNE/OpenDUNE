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

extern void f__24FD_000A_000B_2043();
extern void f__2649_0B64_0011_32F8();
extern void f__2649_0BAE_001D_25B1();

static void Driver_Music_Play(int16 index, uint16 volume)
{
	Driver *music = &g_global->musicDriver;
	MSBuffer *musicBuffer = &g_global->musicBuffer;

	if (index < 0 || index > 120 || g_global->musicEnabled == 0) return;

	if (music->index == 0xFFFF) {
		if (music->dcontent.csip != 0x0) Drivers_1DD7_1C3C(music, index, volume);
		return;
	}

	if (musicBuffer->index != 0xFFFF) {
		emu_push(musicBuffer->index);
		emu_push(music->index); /* unused, but needed for correct param accesses. */
		Drivers_CallFunction(music->index, 0xAB);
		emu_sp += 4;

		emu_push(musicBuffer->index);
		emu_push(music->index); /* unused, but needed for correct param accesses. */
		Drivers_CallFunction(music->index, 0x98);
		emu_sp += 4;

		musicBuffer->index = 0xFFFF;
	}

	emu_push(0); emu_push(0);
	emu_push(musicBuffer->buffer.s.cs); emu_push(musicBuffer->buffer.s.ip);
	emu_push(index);
	emu_push(music->content.s.cs); emu_push(music->content.s.ip);
	emu_push(music->index); /* unused, but needed for correct param accesses. */
	musicBuffer->index = Drivers_CallFunction(music->index, 0x97).s.ip;
	emu_sp += 16;

	Drivers_1DD7_0B9C(music, musicBuffer->index);

	emu_push(musicBuffer->index);
	emu_push(music->index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(music->index, 0xAA);
	emu_sp += 4;

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

	if (music->index == 0xFFFF || music->dcontent.csip == 0x0) return;

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

		if (g_global->musicDriver.index == 0xFFFF) {
			emu_dx = g_global->musicDriver.content.s.cs;
			emu_ax = g_global->musicDriver.content.s.ip;
			emu_bx = 0x4;
			emu_pushf();

			/* Call based on memory/register values */
			emu_ip = music->dcontent.s.ip;
			emu_push(emu_cs);
			emu_cs = music->dcontent.s.cs;
			emu_push(0x0823);
			switch ((emu_cs << 16) + emu_ip) {
				default:
					/* In case we don't know the call point yet, call the dynamic call */
					emu_last_cs = 0x1DD7; emu_last_ip = 0x0820; emu_last_length = 0x0007; emu_last_crc = 0x2888;
					emu_call();
					return;
			}
		}
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
 * Initialises the MT-32.
 * @param index The index of the music to play.
 */
void Music_InitMT32(uint16 musicID)
{
	uint16 left = 0;

	if (g_global->variable_6D8D != 6 && g_global->variable_6D8B != 6) return;

	Driver_Music_LoadFile("DUNEINIT");

	Driver_Music_Play(musicID, 0xFF);

	GUI_DrawText(String_Get_ByIndex(15), 0, 0, 15, 12); /* "Initializing the MT-32" */

	while (Driver_Music_IsPlaying()) {
		emu_push(60);
		emu_push(emu_cs); emu_push(0x0B2C); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
		emu_sp += 2;

		left += 6;

		GUI_DrawText(".", left, 10, 15, 12);
	}
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

	if (g_global->variable_6D8F != 0x0 && index != 0xFFFF && g_global->variable_3E54[index].csip != 0x0 && g_global->voices[index].variable_04 >= g_global->variable_4060) {
		uint32 count;
		csip32 soundBuffer;

		g_global->variable_4060 = g_global->voices[index].variable_04;
		soundBuffer.csip = g_global->variable_3E54[index].csip;

		emu_push(soundBuffer.s.cs); emu_push(soundBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x00EC); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
		emu_sp += 4;

		if (emu_ax != 0) {
			emu_push(soundBuffer.s.cs); emu_push(soundBuffer.s.ip);
			emu_push(emu_cs); emu_push(0x00FD); emu_cs = 0x2649; f__2649_0B64_0011_32F8();
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
	uint16 i;
	uint16 voice;

	if (g_global->variable_6D8F == 0) return;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		char *str = (char *)emu_get_memorycsip(g_global->voices[voice].string);
		switch (*str) {
			case '%':
				if (g_global->language != LANGUAGE_ENGLISH || g_global->currentVoiceSet == voiceSet) {
					if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;
				}
				emu_push(g_global->variable_3E54[voice].s.cs); emu_push(g_global->variable_3E54[voice].s.ip);
				emu_push(emu_cs); emu_push(0x053D); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
				emu_sp += 4;

				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '+':
				if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;

				emu_push(g_global->variable_3E54[voice].s.cs); emu_push(g_global->variable_3E54[voice].s.ip);
				emu_push(emu_cs); emu_push(0x05B8); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
				emu_sp += 4;

				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '-':
				if (voiceSet == 0xFFFF) break;
				emu_push(g_global->variable_3E54[voice].s.cs); emu_push(g_global->variable_3E54[voice].s.ip);
				emu_push(emu_cs); emu_push(0x056C); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
				emu_sp += 4;

				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;

				emu_push(g_global->variable_3E54[voice].s.cs); emu_push(g_global->variable_3E54[voice].s.ip);
				emu_push(emu_cs); emu_push(0x05E6); emu_cs = 0x1DD7; emu_Tools_Free_IfNotNull();
				emu_sp += 4;

				g_global->variable_3E54[voice].csip = 0x0;
				break;

			case '?':
				if (voiceSet != 0xFFFF) {
					g_global->variable_3E54[voice].csip = 0x0;
				}
				break;

			default:
				break;
		}
	}

	if (g_global->currentVoiceSet == voiceSet) return;

	if (g_global->variable_6D8F == 0x0) {
		g_global->currentVoiceSet = voiceSet;
		return;
	}

	for (voice = 0; voice < NUM_VOICES; voice++) {
		char *str = (char *)emu_get_memorycsip(g_global->voices[voice].string);
		switch (*str) {
			case '%':
				if (g_global->variable_3E54[voice].csip != 0x0 ||
						g_global->currentVoiceSet == voiceSet || voiceSet == 0xFFFF) break;

				switch (g_global->language) {
					case LANGUAGE_FRENCH: i = 'F'; break;
					case LANGUAGE_GERMAN: i = 'G'; break;
					default: i = g_houseInfo[voiceSet].prefixChar;
				}
				sprintf((char *)g_global->variable_9939, str, i);

				{
					csip32 csip;
					csip.s.cs = 0x353F;
					csip.s.ip = 0x9939;
					g_global->variable_3E54[voice] = Unknown_B483_0823((char *)g_global->variable_9939, csip);
				}
				break;

			case '+':
				if (voiceSet == 0xFFFF || g_global->variable_3E54[voice].csip != 0x0) break;

				switch (g_global->language) {
					case LANGUAGE_FRENCH:  i = 'F'; break;
					case LANGUAGE_GERMAN:  i = 'G'; break;
					default: i = 'Z'; break;
				}
				sprintf((char *)g_global->variable_9939, str + 1, i);

				{
					csip32 csip;
					csip.s.cs = 0x353F;
					csip.s.ip = 0x9939;
					g_global->variable_3E54[voice] = Unknown_B483_0823((char *)g_global->variable_9939, csip);
				}
				break;

			case '-':
				if (voiceSet != 0xFFFF || g_global->variable_3E54[voice].csip != 0x0) break;

				{
					csip32 csip = g_global->voices[voice].string;
					csip.s.ip += 1;
					g_global->variable_3E54[voice] = Unknown_B483_0823(str + 1, csip);
				}
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;
				{
					csip32 csip = g_global->voices[voice].string;
					csip.s.ip += 1;
					g_global->variable_3E54[voice] = Unknown_B483_0823(str + 1, csip);
				}
				break;

			case '?':
				break;

			default:
				if (g_global->variable_3E54[voice].csip != 0x0) break;

				g_global->variable_3E54[voice] = Unknown_B483_0823(str, g_global->voices[voice].string);
				break;
		}
	}
	g_global->currentVoiceSet = voiceSet;
}
