/* $Id$ */

/** @file src/sound.h Sound definitions. */

#ifndef SOUND_H
#define SOUND_H

/** Information about sound files. */
typedef struct SoundData {
	const char *string; /*!< Pointer to a string. */
	uint16 variable_04; /*!< ?? */
} SoundData;

/** Number of voices in the game. */
#define NUM_VOICES 131

extern const uint16 g_table_voiceMapping[];
extern const SoundData g_table_musics[];
extern const SoundData g_table_voices[];

extern void Music_Play(uint16 musicID);
extern void Voice_PlayAtTile(int16 voiceID, tile32 position);
extern void Voice_Play(int16 voiceID);
extern void Voice_LoadVoices(uint16 voiceSet);

extern void Sound_Unknown0156(uint16 index);
extern void Sound_Unknown0363(uint16 index);
extern bool Sound_Unknown0470();
extern void *Sound_Unknown0823(const char *filename, uint32 *retFileSize);

#endif /* SOUND_H */
