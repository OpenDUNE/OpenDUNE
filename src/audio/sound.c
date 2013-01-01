/** @file src/audio/sound.c Sound routines. */

#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "../os/common.h"
#include "../os/strings.h"

#include "sound.h"

#include "driver.h"
#include "mt32mpu.h"
#include "../config.h"
#include "../file.h"
#include "../gui/gui.h"
#include "../house.h"
#include "../opendune.h"
#include "../string.h"
#include "../tile.h"


static void *g_variable_3E54[NUM_VOICES];
static uint32 g_variable_3E54_size[NUM_VOICES];
static const char *s_currentMusic = NULL;        /*!< Currently loaded music file. */
static uint16 s_spokenWords[NUM_SPEECH_PARTS];   /*!< Buffer with speech to play. */
static uint16 s_variable_4060;

static void Driver_Music_Play(int16 index, uint16 volume)
{
	Driver *music = g_driverMusic;
	MSBuffer *musicBuffer = g_bufferMusic;

	if (index < 0 || index > 120 || g_gameConfig.music == 0) return;

	if (music->index == 0xFFFF) return;

	if (musicBuffer->index != 0xFFFF) {
		MPU_Stop(musicBuffer->index);
		MPU_ClearData(musicBuffer->index);
		musicBuffer->index = 0xFFFF;
	}

	musicBuffer->index = MPU_SetData(music->content, index, musicBuffer->buffer);

	MPU_Play(musicBuffer->index);
	MPU_SetVolume(musicBuffer->index, ((volume & 0xFF) * 90) / 256, 0);
}

static void Driver_Music_LoadFile(const char *musicName)
{
	Driver *music = g_driverMusic;
	Driver *sound = g_driverSound;

	Driver_Music_Stop();

	if (music->index == 0xFFFF) return;

	if (music->content == sound->content) {
		music->content         = NULL;
		music->filename        = NULL;
		music->contentMalloced = false;
	} else {
		Driver_UnloadFile(music);
	}

	if (sound->filename != NULL && musicName != NULL && strcasecmp(Drivers_GenerateFilename(musicName, music), sound->filename) == 0) {
		g_driverMusic->content         = g_driverSound->content;
		g_driverMusic->filename        = g_driverSound->filename;
		g_driverMusic->contentMalloced = g_driverSound->contentMalloced;

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
	if (musicID == 0xFFFF || musicID >= 38) return;

	if (g_table_musics[musicID].string != s_currentMusic) {
		s_currentMusic = g_table_musics[musicID].string;

		Driver_Music_Stop();
		Driver_Voice_Play(NULL, 0xFF);
		Driver_Music_LoadFile(NULL);
		Driver_Sound_LoadFile(NULL);
		Driver_Music_LoadFile(s_currentMusic);
		Driver_Sound_LoadFile(s_currentMusic);
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

	if (voiceID < 0 || voiceID >= 120) return;
	if (!g_gameConfig.sounds) return;

	volume = 255;
	if (position.tile != 0) {
		volume = Tile_GetDistancePacked(g_minimapPosition, Tile_PackTile(position));
		if (volume > 64) volume = 64;

		volume = 255 - (volume * 255 / 80);
	}

	index = g_table_voiceMapping[voiceID];

	if (g_enableVoices != 0 && index != 0xFFFF && g_variable_3E54[index] != NULL && g_table_voices[index].variable_04 >= s_variable_4060) {
		s_variable_4060 = g_table_voices[index].variable_04;
		memmove(g_readBuffer, g_variable_3E54[index], g_variable_3E54_size[index]);

		Driver_Voice_Play(g_readBuffer, s_variable_4060);
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

	if (g_enableVoices == 0) return;

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
		char filename[16];
		const char *str = g_table_voices[voice].string;
		switch (*str) {
			case '%':
				if (g_variable_3E54[voice] != NULL ||
						currentVoiceSet == voiceSet || voiceSet == 0xFFFF || voiceSet == 0xFFFE) break;

				switch (g_config.language) {
					case LANGUAGE_FRENCH: i = 'F'; break;
					case LANGUAGE_GERMAN: i = 'G'; break;
					default: i = g_table_houseInfo[voiceSet].prefixChar;
				}
				snprintf(filename, sizeof(filename), str, i);

				g_variable_3E54[voice] = Sound_Unknown0823(filename, &g_variable_3E54_size[voice]);
				break;

			case '+':
				if (voiceSet == 0xFFFF || g_variable_3E54[voice] != NULL) break;

				switch (g_config.language) {
					case LANGUAGE_FRENCH:  i = 'F'; break;
					case LANGUAGE_GERMAN:  i = 'G'; break;
					default: i = 'Z'; break;
				}
				snprintf(filename, sizeof(filename), str + 1, i);

				/* XXX - In the 1.07us datafiles, a few files are named differently:
				 *
				 *  moveout.voc
				 *  overout.voc
				 *  report1.voc
				 *  report2.voc
				 *  report3.voc
				 *
				 * They come without letter in front of them. To make things a bit
				 *  easier, just check if the file exists, then remove the first
				 *  letter and see if it works then.
				 */
				if (!File_Exists(filename)) {
					memmove(filename, filename + 1, strlen(filename));
				}

				g_variable_3E54[voice] = Sound_Unknown0823(filename, &g_variable_3E54_size[voice]);
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
 * Unload voices.
 */
void Voice_UnloadVoices(void)
{
	uint16 voice;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		free(g_variable_3E54[voice]);
		g_variable_3E54[voice] = NULL;
	}
}

/**
 * Start playing a sound sample.
 * @param index Sample to play.
 */
void Sound_StartSound(uint16 index)
{
	if (index == 0xFFFF || g_gameConfig.sounds == 0 || (int16)g_table_voices[index].variable_04 < (int16)s_variable_4060) return;

	s_variable_4060 = g_table_voices[index].variable_04;

	if (g_variable_3E54[index] != NULL) {
		Driver_Voice_Play(g_variable_3E54[index], 0xFF);
	} else {
		char filenameBuffer[16];
		const char *filename;

		filename = g_table_voices[index].string;
		if (filename[0] == '?') {
			snprintf(filenameBuffer, sizeof(filenameBuffer), filename + 1, g_playerHouseID < HOUSE_MAX ? g_table_houseInfo[g_playerHouseID].prefixChar : ' ');

			Driver_Voice_LoadFile(filenameBuffer, g_readBuffer, g_readBufferSize);

			Driver_Voice_Play(g_readBuffer, 0xFF);
		}
	}
}

/**
 * Output feedback about events of the game.
 * @param index Feedback to provide (\c 0xFFFF means do nothing, \c 0xFFFE means stop, otherwise a feedback code).
 * @note If sound is disabled, the main viewport is used to display a message.
 */
void Sound_Output_Feedback(uint16 index)
{
	if (index == 0xFFFF) return;

	if (index == 0xFFFE) {
		uint8 i;

		/* Clear spoken audio. */
		for (i = 0; i < lengthof(s_spokenWords); i++) {
			s_spokenWords[i] = 0xFFFF;
		}

		Driver_Voice_Stop();

		g_viewportMessageText = NULL;
		if ((g_viewportMessageCounter & 1) != 0) {
			g_viewport_forceRedraw = true;
			g_viewportMessageCounter = 0;
		}
		s_variable_4060 = 0;

		return;
	}

	if (g_enableVoices == 0 || g_gameConfig.sounds == 0) {
		Driver_Sound_Play(g_feedback[index].soundId, 0xFF);

		g_viewportMessageText = String_Get_ByIndex(g_feedback[index].messageId);

		if ((g_viewportMessageCounter & 1) != 0) {
			g_viewport_forceRedraw = true;
		}

		g_viewportMessageCounter = 4;

		return;
	}

	/* If nothing is being said currently, load new words. */
	if (s_spokenWords[0] == 0xFFFF) {
		uint8 i;

		for (i = 0; i < lengthof(s_spokenWords); i++) {
			s_spokenWords[i] = (g_config.language == LANGUAGE_ENGLISH) ? g_feedback[index].voiceId[i] : g_translatedVoice[index][i];
		}
	}

	Sound_StartSpeech();
}

/**
 * Start speech.
 * Start a new speech fragment if possible.
 * @return Sound is produced.
 */
bool Sound_StartSpeech(void)
{
	if (g_gameConfig.sounds == 0) return false;

	if (Driver_Voice_IsPlaying()) return true;

	s_variable_4060 = 0;

	if (s_spokenWords[0] == 0xFFFF) return false;

	Sound_StartSound(s_spokenWords[0]);
	/* Move speech parts one place. */
	memmove(&s_spokenWords[0], &s_spokenWords[1], sizeof(s_spokenWords) - sizeof(s_spokenWords[0]));
	s_spokenWords[lengthof(s_spokenWords) - 1] = 0xFFFF;

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

	*retFileSize = fileSize;
	res = malloc(fileSize);
	Driver_Voice_LoadFile(filename, res, fileSize);

	return res;
}
