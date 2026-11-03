/** @file src/audio/sound.c Sound routines. */

#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "../os/common.h"
#include "../os/strings.h"
#include "../os/sleep.h"

#include "sound.h"

#include "driver.h"
#include "dsp.h"
#include "mt32mpu.h"
#include "../config.h"
#include "../file.h"
#include "../gui/gui.h"
#include "../house.h"
#include "../opendune.h"
#include "../string.h"
#include "../tile.h"
#include "../timer.h"


static void *g_voiceData[NUM_VOICES];            /*!< Preloaded Voices sound data */
static uint32 g_voiceDataSize[NUM_VOICES];       /*!< Preloaded Voices sound data size in byte */
static const char *s_currentMusic = NULL;        /*!< Currently loaded music file. */
static uint16 s_currentVoiceSet = 0xFFFE;        /*!< Voice set of the preloaded voices. */
static uint16 s_spokenWords[NUM_SPEECH_PARTS];   /*!< Buffer with speech to play. */
static int16 s_currentVoicePriority;            /*!< Priority of the currently playing Speech */
#if defined(SATURN)
static uint16 s_expectedFeedback = 0xFFFF;       /*!< Feedback expected to be spoken next (intro). */
static uint32 s_voiceClock = 0;                  /*!< Counts voices played. */
static uint32 s_voicePlayed[NUM_VOICES];         /*!< s_voiceClock when each voice last played. */
#endif

static void *Sound_LoadVoc(const char *filename, uint32 *retFileSize);
static bool Voice_GetFilename(uint16 voice, uint16 voiceSet, char *filename, size_t size);
static void Voice_UnloadVoice(uint16 voice);

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
		music->filename[0]     = '\0';
		music->contentMalloced = false;
	} else {
		Driver_UnloadFile(music);
	}

	if (sound->filename[0] != '\0' && musicName != NULL && strcasecmp(Drivers_GenerateFilename(musicName, music), sound->filename) == 0) {
		g_driverMusic->content         = g_driverSound->content;
		memcpy(g_driverMusic->filename, g_driverSound->filename, sizeof(g_driverMusic->filename));
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
	static uint16 currentMusicID = 0;

	if (musicID == 0xFFFF || musicID >= 38 || musicID == currentMusicID) return;

	currentMusicID = musicID;

	if (g_table_musics[musicID].string != s_currentMusic) {
		s_currentMusic = g_table_musics[musicID].string;

		Driver_Music_Stop();
		Driver_Voice_Play(NULL, 0xFF);
		Driver_Music_LoadFile(NULL);
		Driver_Sound_LoadFile(NULL);
		Driver_Music_LoadFile(s_currentMusic);
		Driver_Sound_LoadFile(s_currentMusic);
	}

	Driver_Music_Play(g_table_musics[musicID].index, 0xFF);
}

/**
 * Initialises the MT-32.
 * @param index The index of the music to play.
 */
void Music_InitMT32(void)
{
	uint16 left = 0;

	Driver_Music_LoadFile("DUNEINIT");

	Driver_Music_Play(0, 0xFF);

	GUI_DrawText(String_Get_ByIndex(15), 0, 0, 15, 12); /* "Initializing the MT-32" */

	while (Driver_Music_IsPlaying()) {
		Timer_Sleep(60);

		left += 6;
		GUI_DrawText(".", left, 10, 15, 12);
	}
}

/**
 * Load a voice that should have been preloaded but isn't, into g_readBuffer.
 * On the Saturn, sound RAM can't hold every preloaded voice: the ones that
 * didn't fit are read from the disc when they are played.
 * @param voice The voice.
 * @return True if the voice is now in g_readBuffer.
 */
static bool Voice_LoadWhenNeeded(uint16 voice)
{
#if defined(SATURN)
	char filename[16];
	uint32 size;

	if (g_readBuffer == NULL) return false;
	if (!Voice_GetFilename(voice, s_currentVoiceSet, filename, sizeof(filename))) return false;
	if (!File_Exists_GetSize(filename, &size) || size > g_readBufferSize) return false;

	Driver_Voice_LoadFile(filename, g_readBuffer, g_readBufferSize);
	return true;
#else
	VARIABLE_NOT_USED(voice);
	return false;
#endif
}

#if defined(SATURN)
/**
 * List the voices to be spoken next: the queued speech, then the expected
 * feedback.
 * @param list Where to write them.
 * @return How many there are.
 */
static uint8 Voice_ListUpcoming(uint16 *list)
{
	uint8 count = 0;
	uint8 i;

	for (i = 0; i < NUM_SPEECH_PARTS; i++) {
		if (s_spokenWords[i] != 0xFFFF) list[count++] = s_spokenWords[i];
	}
	if (s_expectedFeedback != 0xFFFF) {
		for (i = 0; i < NUM_SPEECH_PARTS; i++) {
			uint16 voice = (g_config.language == LANGUAGE_ENGLISH) ? g_feedback[s_expectedFeedback].voiceId[i] : g_translatedVoice[s_expectedFeedback][i];
			if (voice != 0xFFFF) list[count++] = voice;
		}
	}
	return count;
}

/**
 * Unload the voice in sound RAM that was played longest ago (or never), to
 * make room; voices coming up and the voice playing stay.
 * @param upcoming The voices coming up.
 * @param count How many there are.
 * @return False if there was nothing to unload.
 */
static bool Voice_UnloadOldest(const uint16 *upcoming, uint8 count)
{
	uint16 oldest = 0xFFFF;
	uint16 voice;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		uint8 i;

		if (g_voiceData[voice] == NULL || DSP_Saturn_IsPlaying(g_voiceData[voice])) continue;
		for (i = 0; i < count && upcoming[i] != voice; i++) {}
		if (i < count) continue;
		if (oldest == 0xFFFF || s_voicePlayed[voice] < s_voicePlayed[oldest]) oldest = voice;
	}
	if (oldest == 0xFFFF) return false;

	Voice_UnloadVoice(oldest);
	return true;
}

/**
 * Read one voice coming up into sound RAM, while the one playing goes on:
 * voices that didn't fit when the voice set was loaded would otherwise be
 * read from the disc between two words.
 */
static void Voice_ReadAhead(void)
{
	uint16 upcoming[NUM_SPEECH_PARTS * 2];
	uint8 count = Voice_ListUpcoming(upcoming);
	uint8 i;

	for (i = 0; i < count; i++) {
		uint16 voice = upcoming[i];
		char filename[16];
		uint32 size;

		if (g_voiceData[voice] != NULL) continue;
		if (!Voice_GetFilename(voice, s_currentVoiceSet, filename, sizeof(filename))) continue;
		if (!File_Exists_GetSize(filename, &size)) continue;

		while (!DSP_Saturn_CanKeep(size) && Voice_UnloadOldest(upcoming, count)) {}
		g_voiceData[voice] = Sound_LoadVoc(filename, &g_voiceDataSize[voice]);
		return;
	}
}

/**
 * Tell which feedback is expected to be spoken next, so its voices can be
 * read ahead.
 * @param index The feedback, or 0xFFFF for none.
 */
void Sound_Saturn_ExpectFeedback(uint16 index)
{
	s_expectedFeedback = index;
}
#endif

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
	if (position.x != 0 || position.y != 0) {
		volume = Tile_GetDistancePacked(g_minimapPosition, Tile_PackTile(position));
		if (volume > 64) volume = 64;

		volume = 255 - (volume * 255 / 80);
	}

	index = g_table_voiceMapping[voiceID];

#if defined(SATURN)
	/* with a weightier voice speaking, DOS played the sound as music (FM or
	 * MIDI), having only the one channel for samples; the Saturn plays the
	 * sample beside the voice */
	if (g_enableVoices != 0 && index != 0xFFFF && g_table_voices[index].priority < s_currentVoicePriority &&
			(g_voiceData[index] != NULL || Voice_LoadWhenNeeded(index))) {
		DSP_Saturn_PlayEffect((g_voiceData[index] != NULL) ? (const uint8 *)g_voiceData[index] : (const uint8 *)g_readBuffer);
		return;
	}
#endif

	if (g_enableVoices != 0 && index != 0xFFFF && g_table_voices[index].priority >= s_currentVoicePriority &&
			(g_voiceData[index] != NULL || Voice_LoadWhenNeeded(index))) {
		s_currentVoicePriority = g_table_voices[index].priority;
#if defined(SATURN)
		s_voicePlayed[index] = ++s_voiceClock;
#endif
		if (g_voiceData[index] != NULL) memmove(g_readBuffer, g_voiceData[index], g_voiceDataSize[index]);

		Driver_Voice_Play(g_readBuffer, s_currentVoicePriority);
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

	tile.x = 0;
	tile.y = 0;
	Voice_PlayAtTile(voiceID, tile);
}

/**
 * Free a voice
 */
static void Voice_UnloadVoice(uint16 voice)
{
	if (g_voiceData[voice] != NULL) {
#if defined(SATURN)
		DSP_Saturn_FreeVoc(g_voiceData[voice]);
#else
		free(g_voiceData[voice]);
#endif
		g_voiceData[voice] = NULL;
	}
}

/**
 * Get the file name of a voice in a voice set.
 * @param voice The voice.
 * @param voiceSet The voice set : a HouseID, or 0xFFFE (intro) or 0xFFFF (end).
 * @param filename Where to write the file name.
 * @param size Size of filename.
 * @return False if the voice isn't part of the voice set.
 */
static bool Voice_GetFilename(uint16 voice, uint16 voiceSet, char *filename, size_t size)
{
	const char *str = g_table_voices[voice].string;
	int prefixChar;

	switch (*str) {
		case '%':
			if (voiceSet == 0xFFFF || voiceSet == 0xFFFE) return false;

			switch (g_config.language) {
				case LANGUAGE_FRENCH: prefixChar = 'F'; break;
				case LANGUAGE_GERMAN: prefixChar = 'G'; break;
				default: prefixChar = g_table_houseInfo[voiceSet].prefixChar;
			}
			snprintf(filename, size, str, prefixChar);
			return true;

		case '+':
			if (voiceSet == 0xFFFF) return false;

			switch (g_config.language) {
				case LANGUAGE_FRENCH:  prefixChar = 'F'; break;
				case LANGUAGE_GERMAN:  prefixChar = 'G'; break;
				default: prefixChar = 'Z'; break;
			}
			snprintf(filename, size, str + 1, prefixChar);

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
			return true;

		case '-':
			if (voiceSet != 0xFFFF) return false;
			snprintf(filename, size, "%s", str + 1);
			return true;

		case '/':
			if (voiceSet != 0xFFFE) return false;
			snprintf(filename, size, "%s", str + 1);
			return true;

		case '?':
			snprintf(filename, size, str + 1, g_playerHouseID < HOUSE_MAX ? g_table_houseInfo[g_playerHouseID].prefixChar : ' ');
			return true;

		default:
			snprintf(filename, size, "%s", str);
			return true;
	}
}

/**
 * Load voices.
 * voiceSet 0xFFFE is for Game Intro.
 * voiceSet 0xFFFF is for Game End.
 * @param voiceSet Voice set to load : either a HouseID, or special values 0xFFFE or 0xFFFF.
 */
void Voice_LoadVoices(uint16 voiceSet)
{
	uint16 voice;

	if (g_enableVoices == 0) return;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		/* unload if necessary */
		switch (g_table_voices[voice].string[0]) {
			case '%':
				if (g_config.language != LANGUAGE_ENGLISH || s_currentVoiceSet == voiceSet) {
					if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;
				}

				Voice_UnloadVoice(voice);
				break;

			case '+':
				if (voiceSet != 0xFFFF && voiceSet != 0xFFFE) break;

				Voice_UnloadVoice(voice);
				break;

			case '-':
				if (voiceSet == 0xFFFF) break;

				Voice_UnloadVoice(voice);
				break;

			case '/':
				if (voiceSet != 0xFFFE) break;

				Voice_UnloadVoice(voice);
				break;

			case '?':
				if (voiceSet == 0xFFFF) break;

				/* Theses are not supposed to be preloaded. check anyway */
				Voice_UnloadVoice(voice);
				break;

			default:
				break;
		}
	}

	if (s_currentVoiceSet == voiceSet) return;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		char filename[16];
		char type = g_table_voices[voice].string[0];

		sleepIdle();	/* let a chance to update screen, etc. */

		/* '/' voices are loaded even when already loaded, as before */
		if (g_voiceData[voice] != NULL && type != '/') continue;
		if (type == '?') continue;	/* Do not preload */
		if (!Voice_GetFilename(voice, voiceSet, filename, sizeof(filename))) continue;

		g_voiceData[voice] = Sound_LoadVoc(filename, &g_voiceDataSize[voice]);
	}
	s_currentVoiceSet = voiceSet;
}

/**
 * Unload voices.
 */
void Voice_UnloadVoices(void)
{
	uint16 voice;

	for (voice = 0; voice < NUM_VOICES; voice++) {
		Voice_UnloadVoice(voice);
	}
}

/**
 * Start playing a sound sample.
 * @param index Sample to play.
 */
void Sound_StartSound(uint16 index)
{
	if (index == 0xFFFF || g_gameConfig.sounds == 0 || (int16)g_table_voices[index].priority < (int16)s_currentVoicePriority) return;

	s_currentVoicePriority = g_table_voices[index].priority;
#if defined(SATURN)
	s_voicePlayed[index] = ++s_voiceClock;
#endif

	if (g_voiceData[index] != NULL) {
		Driver_Voice_Play(g_voiceData[index], 0xFF);
	} else {
		char filenameBuffer[16];
		const char *filename;

		filename = g_table_voices[index].string;
		if (filename[0] == '?') {
			snprintf(filenameBuffer, sizeof(filenameBuffer), filename + 1, g_playerHouseID < HOUSE_MAX ? g_table_houseInfo[g_playerHouseID].prefixChar : ' ');

			Driver_Voice_LoadFile(filenameBuffer, g_readBuffer, g_readBufferSize);

			Driver_Voice_Play(g_readBuffer, 0xFF);
		} else if (Voice_LoadWhenNeeded(index)) {
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
		s_currentVoicePriority = 0;

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

	if (Driver_Voice_IsPlaying()) {
#if defined(SATURN)
		Voice_ReadAhead();
#endif
		return true;
	}

	s_currentVoicePriority = 0;

	if (s_spokenWords[0] == 0xFFFF) {
#if defined(SATURN)
		Voice_ReadAhead();
#endif
		return false;
	}

	Sound_StartSound(s_spokenWords[0]);
	/* Move speech parts one place. */
	memmove(&s_spokenWords[0], &s_spokenWords[1], sizeof(s_spokenWords) - sizeof(s_spokenWords[0]));
	s_spokenWords[lengthof(s_spokenWords) - 1] = 0xFFFF;

	return true;
}

/**
 * Load a voice file to a malloc'd buffer.
 * @param filename The name of the file to load.
 * @return Where the file is loaded.
 */
static void *Sound_LoadVoc(const char *filename, uint32 *retFileSize)
{
	uint32 fileSize;
	void *res;

	if (filename == NULL) return NULL;
	if (!File_Exists_GetSize(filename, &fileSize)) return NULL;

	fileSize += 1;
	fileSize &= 0xFFFFFFFE;

	*retFileSize = fileSize;
	res = malloc(fileSize);
	Driver_Voice_LoadFile(filename, res, fileSize);

#if defined(SATURN)
	/* preloaded voices live in sound RAM, not in main RAM */
	res = DSP_Saturn_KeepVoc(res, retFileSize);
#endif

	return res;
}
