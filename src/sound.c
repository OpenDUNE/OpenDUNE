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

extern void f__1DD7_022D_0015_1956();
extern void f__1DD7_0248_0014_9236();
extern void f__1DD7_0719_0014_A78C();
extern void f__1DD7_05D0_0014_A7A2();
extern void f__1DD7_0B9C_001D_AF74();
extern void f__1DD7_1C3C_0020_9C6E();
extern void f__24FD_000A_000B_2043();
extern void f__2649_0B64_0011_32F8();
extern void f__2649_0BAE_001D_25B1();

static void Driver_Music_Play(int16 index, uint16 volume)
{
	if (index < 0 || index > 120 || g_global->musicEnabled == 0) return;

	if (g_global->musicDriver.index == 0xFFFF) {
		if (g_global->musicDriver.dcontent.csip == 0x0) return;
		emu_push(volume);
		emu_push(index);
		emu_push(0x353F); emu_push(0x6344);
		emu_push(emu_cs); emu_push(0x09D2); emu_cs = 0x1DD7; f__1DD7_1C3C_0020_9C6E();
		emu_sp += 8;
		return;
	}

	if (g_global->musicBuffer.index != 0xFFFF) {
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

	emu_push(0); emu_push(0);
	emu_push(g_global->musicBuffer.buffer.s.cs); emu_push(g_global->musicBuffer.buffer.s.ip);
	emu_push(index);
	emu_push(g_global->musicDriver.variable_16.s.cs); emu_push(g_global->musicDriver.variable_16.s.ip);
	emu_push(g_global->musicDriver.index); /* unused, but needed for correct param accesses. */
	g_global->musicBuffer.index = Drivers_CallFunction(g_global->musicDriver.index, 0x97).s.ip;
	emu_sp += 16;

	emu_push(g_global->musicBuffer.index);
	emu_push(0x353F); emu_push(0x6344);
	emu_push(emu_cs); emu_push(0x0987); emu_cs = 0x1DD7; f__1DD7_0B9C_001D_AF74();
	emu_sp += 6;

	emu_push(g_global->musicBuffer.index);
	emu_push(g_global->musicDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->musicDriver.index, 0xAA);
	emu_sp += 4;

	emu_push(0);
	emu_push(((volume & 0xFF) * 90) / 256);
	emu_push(g_global->musicBuffer.index);
	emu_push(g_global->musicDriver.index); /* unused, but needed for correct param accesses. */
	Drivers_CallFunction(g_global->musicDriver.index, 0xB1);
	emu_sp += 8;
}

/**
 * Plays a music.
 * @param index The index of the music to play.
 */
void Music_Play(uint16 musicID)
{
	if (musicID == 0xFFFF || musicID >= 38) return;

	if (g_global->musics[musicID].string.csip != g_global->currentMusic.csip) {
		g_global->currentMusic.csip = g_global->musics[musicID].string.csip;

		Driver_Music_Stop();

		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x02DF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
		emu_sp += 4;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
		emu_sp += 12;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
		emu_sp += 12;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(g_global->currentMusic.s.cs); emu_push(g_global->currentMusic.s.ip);
		emu_push(emu_cs); emu_push(0x032E); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
		emu_sp += 12;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(g_global->currentMusic.s.cs); emu_push(g_global->currentMusic.s.ip);
		emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
		emu_sp += 12;
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

	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(0x353F); emu_push(0x3204); /* "DUNEINIT" */
	emu_push(emu_cs); emu_push(0x0AFC); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	emu_sp += 12;

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

		emu_push(volume);
		emu_push(g_global->variable_4060);
		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x0142); emu_cs = 0x1DD7; f__1DD7_0248_0014_9236();
		emu_sp += 8;
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
					g_global->variable_3E54[voice] = Unknown_B483_0823(g_global->variable_9939, csip);
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
					g_global->variable_3E54[voice] = Unknown_B483_0823(g_global->variable_9939, csip);
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
