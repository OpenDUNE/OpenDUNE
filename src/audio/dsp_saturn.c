/** @file src/audio/dsp_saturn.c Sega Saturn implementation of the DSP.
 *
 * Voices play on one SCSP slot from sound RAM. Preloaded voices are moved
 * into sound RAM by DSP_Saturn_KeepVoc(); the engine then holds a small
 * descriptor instead of the VOC data and passes it to DSP_Play() like a VOC.
 * Any other VOC (loaded into a buffer when needed) is copied into a scratch
 * area of sound RAM and played from there. */

#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "../os/endian.h"
#include "../os/error.h"

#include "dsp.h"

#include "saturn_timer.h"
#include "scsp.h"

enum {
	VOICE_SLOT = 0,
	EFFECT_SLOT = 30,         /*!< a sound effect beside the voice (DSP_Saturn_PlayEffect()) */
	BLIP_SLOT = 31,           /*!< free: voices use 0, the AdLib music 1-18 */
	BLIP_TAIL = 32,           /*!< samples of silence played round after a blip */
	SINE_BITS = 12,           /*!< the blips' sine table: 4096 entries */
	SCRATCH_SIZE = 32 * 1024, /*!< g_readBuffer is at most 28000 bytes */
	SCRATCH_MAX = SCRATCH_SIZE - SCSP_TAIL,
	EFFECT_SCRATCH_SIZE = 20 * 1024, /*!< the largest sound effect (STATICP.VOC) is 19684 bytes */
	EFFECT_SCRATCH_MAX = EFFECT_SCRATCH_SIZE - SCSP_TAIL,
	DESCRIPTOR_MAGIC = 0x534E4431 /*!< "SND1" */
};

/* What the engine holds for a voice that lives in sound RAM. */
typedef struct SaturnVoice {
	uint32 magic;
	int32 offset;
	uint32 samples;
	uint32 rate;
} SaturnVoice;

/* One FM note of a blip (in samples at 44.1 kHz, phase steps in 2^32 a
 * cycle): it holds a moment, then dies away exponentially. */
typedef struct BlipNote {
	uint32 start;     /*!< where it starts; it stops where the next one does */
	uint32 carrier;   /*!< phase step of the sounding operator */
	uint32 modulator; /*!< and of the one modulating it */
	int32 depth;      /*!< modulation: phase per unit of the sine table */
	bool buzz;        /*!< sounding the buzz's wave instead of a sine */
	uint32 hold;      /*!< samples at full level */
	int32 decay;      /*!< level kept per sample after that, Q30 */
} BlipNote;

/* The pad's sounds, recreated from the Mega Drive version's (measured from
 * recordings): moving the focus is a 1204 Hz sine dying away in some 200 ms,
 * using what is focused two FM notes, 932 then 1176 Hz 65 ms later (carrier
 * at 3 and modulator at 5 times the note, index 1.1), each gone in 80 ms. */
static const BlipNote s_focusNotes[] = {
	{ 0, 117259425, 0, 0, false, 529, 1072873198 }
};
static const BlipNote s_useNotes[] = {
	{ 0, 272423640, 454039400, 22948, false, 353, 1071361785 },
	{ 2867, 343451296, 572418827, 22948, false, 353, 1071361785 }
};

/* Something that can't be done: a buzz of odd harmonics, at 38.9 Hz, then a
 * fifth lower 114 ms later, each cut off after 95 ms. */
static const BlipNote s_invalidNotes[] = {
	{ 0, 3789505, 0, 0, true, 4190, 1065365207 },
	{ 5027, 2528285, 0, 0, true, 4278, 1065365207 }
};

/* The buzz's wave: its odd harmonics 1 to 137, levels (of 32767) and phases
 * (of 4096 a cycle), measured from the Mega Drive's sound. */
static const uint16 s_buzzHarmonics[][2] = {
	{ 1266, 4067 }, { 32767, 2518 }, { 2773, 2390 }, { 4070, 1415 }, { 3689, 3153 }, { 1554, 3973 },
	{ 17958, 80 }, { 26899, 1650 }, { 11035, 1265 }, { 1206, 1710 }, { 5825, 1841 }, { 23023, 3999 },
	{ 25875, 3440 }, { 1477, 2082 }, { 2307, 2157 }, { 12202, 135 }, { 15506, 1637 }, { 978, 850 },
	{ 4108, 475 }, { 559, 2955 }, { 7225, 2044 }, { 1308, 2519 }, { 19543, 3039 }, { 14270, 2625 },
	{ 3521, 2512 }, { 15427, 1727 }, { 1615, 987 }, { 3971, 3086 }, { 10069, 2407 }, { 1707, 2827 },
	{ 3289, 1418 }, { 9861, 3106 }, { 2885, 2776 }, { 10666, 2130 }, { 771, 3454 }, { 6477, 3408 },
	{ 3596, 3018 }, { 1659, 271 }, { 6679, 1883 }, { 2745, 3625 }, { 12455, 3102 }, { 3518, 530 },
	{ 0, 0 }, { 4102, 1656 }, { 2548, 3474 }, { 11360, 2840 }, { 9098, 334 }, { 2126, 1807 },
	{ 1530, 1442 }, { 1939, 3258 }, { 8028, 2573 }, { 10220, 112 }, { 4207, 1676 }, { 0, 0 },
	{ 1107, 3092 }, { 4784, 2285 }, { 8184, 3984 }, { 4792, 1466 }, { 1231, 2997 }, { 0, 0 },
	{ 2504, 1992 }, { 5589, 3723 }, { 4266, 1238 }, { 1536, 2811 }, { 0, 0 }, { 1188, 1724 },
	{ 3284, 3494 }, { 3082, 1027 }, { 1442, 2604 },
};

typedef struct Blip {
	int32 offset;   /*!< in sound RAM, -1 if there was no room */
	uint16 samples; /*!< before the silent tail */
	uint8 level;    /*!< TL */
} Blip;

static Blip s_blips[3] = { { -1, 0, 0 }, { -1, 0, 0 }, { -1, 0, 0 } };
static int16 s_sine[1 << SINE_BITS];
static int16 *s_buzz = NULL; /*!< the buzz's wave, while the blips are made */

static bool s_ready = false;
static int32 s_scratch = -1;
static uint64_t s_endUs = 0; /*!< time (SaturnTimer_Us()) the playing voice ends */
static int32 s_playing = -1; /*!< sound RAM offset of the voice on the slot, playing or done */
static int32 s_effectScratch = -1;
static int32 s_effectPlaying = -1; /*!< the same for the sound effect's slot */

/**
 * Find the PCM data of a VOC: first block, type 1, 8-bit unsigned.
 *
 * @param data The VOC file.
 * @param pcm Filled with where the samples start.
 * @param length Filled with how many there are.
 * @param rate Filled with their rate in Hz.
 * @return False if the VOC isn't one we can play.
 */
static bool DSP_ParseVoc(const uint8 *data, const uint8 **pcm, uint32 *length, uint32 *rate)
{
	const uint8 *block;

	if (memcmp(data, "Creative Voice File", 19) != 0) return false;
	block = data + READ_LE_UINT16(data + 20);
	if (block[0] != 1) return false;

	*length = (READ_LE_UINT32(block) >> 8) - 2;
	*rate = 1000000 / (256 - block[4]);
	*pcm = block + 6;
	return true;
}

/**
 * The blips' sine table, from the recurrence s[n+1] = 2 cos(w) s[n] - s[n-1]
 * (no floating point on the SH-2).
 */
static void DSP_BuildSine(void)
{
	/* 2 cos(2 pi / 4096), Q30; sin(2 pi / 4096) * 32767, 16.16 */
	int64_t prev = 0, cur = 3294097;
	int n;

	for (n = 0; n < (1 << SINE_BITS); n++) {
		int64_t next = ((2147481121LL * cur) >> 30) - prev;
		s_sine[n] = (int16)((prev + 0x8000) >> 16);
		prev = cur;
		cur = next;
	}
}

/**
 * The buzz's wave, one period like the sine's, from its harmonics; NULL if
 * there is no memory.
 */
static void DSP_BuildBuzz(void)
{
	int32 *sum = calloc(1 << SINE_BITS, sizeof(int32));
	int32 peak = 1;
	int n, k;

	s_buzz = malloc((1 << SINE_BITS) * sizeof(int16));
	if (sum == NULL || s_buzz == NULL) {
		free(sum);
		free(s_buzz);
		s_buzz = NULL;
		return;
	}
	for (k = 0; k < (int)(sizeof(s_buzzHarmonics) / sizeof(s_buzzHarmonics[0])); k++) {
		uint32 harmonic = 2 * k + 1;

		if (s_buzzHarmonics[k][0] == 0) continue;
		for (n = 0; n < (1 << SINE_BITS); n++) {
			uint32 phase = (harmonic * n + s_buzzHarmonics[k][1]) & ((1 << SINE_BITS) - 1);
			sum[n] += (s_sine[phase] * s_buzzHarmonics[k][0]) >> 15;
		}
	}
	for (n = 0; n < (1 << SINE_BITS); n++) {
		if (abs(sum[n]) > peak) peak = abs(sum[n]);
	}
	for (n = 0; n < (1 << SINE_BITS); n++) s_buzz[n] = (int16)((int64_t)sum[n] * 32767 / peak);
	free(sum);
}

/**
 * Render a blip's notes as 16-bit samples into sound RAM, followed by its
 * silent tail.
 *
 * @param b Filled with where it is.
 * @param notes The notes.
 * @param count How many.
 * @param samples Its length before the tail.
 * @param level Its TL.
 */
static void DSP_RenderBlip(Blip *b, const BlipNote *notes, int count, uint32 samples, uint8 level)
{
	int16 *pcm = calloc(samples + BLIP_TAIL, sizeof(int16));
	int k;

	b->offset = -1;
	if (pcm == NULL) return;
	for (k = 0; k < count; k++) {
		const BlipNote *note = &notes[k];
		uint32 end = (k + 1 < count) ? notes[k + 1].start : samples;
		const int16 *wave = note->buzz ? s_buzz : s_sine;
		uint32 carrier = 0, modulator = 0, n;
		int64_t amp = (int64_t)1 << 30;

		if (wave == NULL) continue;

		for (n = note->start; n < end && n < samples; n++) {
			int32 mod = s_sine[modulator >> (32 - SINE_BITS)] * note->depth;
			int32 v = wave[(uint32)(carrier + (uint32)mod) >> (32 - SINE_BITS)];

			pcm[n] = (int16)((v * amp) >> 30);
			carrier += note->carrier;
			modulator += note->modulator;
			if (n - note->start >= note->hold) amp = (amp * note->decay) >> 30;
		}
	}
	b->offset = Scsp_Alloc((samples + BLIP_TAIL) * sizeof(int16));
	if (b->offset >= 0) {
		Scsp_UploadS16(b->offset, pcm, samples + BLIP_TAIL);
		b->samples = (uint16)samples;
		b->level = level;
	}
	free(pcm);
}

/**
 * Set up the voices: the SCSP and the scratch area in sound RAM for VOCs loaded
 * when needed.
 *
 * @return False if there is no sound RAM for it.
 */
bool DSP_Init(void)
{
	Scsp_Init();
	s_scratch = Scsp_Alloc(SCRATCH_SIZE);
	s_ready = (s_scratch >= 0);
	s_effectScratch = Scsp_Alloc(EFFECT_SCRATCH_SIZE);

	DSP_BuildSine();
	DSP_BuildBuzz();
	DSP_RenderBlip(&s_blips[DSP_BLIP_FOCUS], s_focusNotes, (int)(sizeof(s_focusNotes) / sizeof(s_focusNotes[0])), 9100, 0x28);
	/* 4.7 dB louder, as in the Mega Drive version */
	DSP_RenderBlip(&s_blips[DSP_BLIP_USE], s_useNotes, (int)(sizeof(s_useNotes) / sizeof(s_useNotes[0])), 6400, 0x1B);
	/* 2.3 dB quieter than the focus sound, as in the Mega Drive version */
	DSP_RenderBlip(&s_blips[DSP_BLIP_INVALID], s_invalidNotes, (int)(sizeof(s_invalidNotes) / sizeof(s_invalidNotes[0])), 10400, 0x2E);
	free(s_buzz);
	s_buzz = NULL;
	return s_ready;
}

/**
 * Stop the voices.
 */
void DSP_Uninit(void)
{
	DSP_Stop();
	Scsp_Stop(EFFECT_SLOT);
	s_effectPlaying = -1;
	s_ready = false;
}

/**
 * Stop the voice playing.
 */
void DSP_Stop(void)
{
	if (!s_ready) return;
	Scsp_Stop(VOICE_SLOT);
	s_endUs = 0;
	s_playing = -1;
}

/**
 * Play a voice already in sound RAM, and note when it ends.
 *
 * @param offset Where its samples are.
 * @param samples How many.
 * @param rate Their rate in Hz.
 */
static void DSP_PlayFromSoundRam(int32 offset, uint32 samples, uint32 rate)
{
	Scsp_Play(VOICE_SLOT, offset, samples, rate, 255);
	s_playing = offset;
	s_endUs = SaturnTimer_Us() + (uint64_t)samples * 1000000 / rate + 1;
}

/**
 * Play a VOC, or a voice kept in sound RAM (a descriptor from
 * DSP_Saturn_KeepVoc()).
 *
 * @param data The VOC or the descriptor.
 */
void DSP_Play(const uint8 *data)
{
	const SaturnVoice *voice = (const SaturnVoice *)data;
	const uint8 *pcm;
	uint32 length, rate;

	if (!s_ready) return;
	DSP_Stop();

	if (voice->magic == DESCRIPTOR_MAGIC) {
		DSP_PlayFromSoundRam(voice->offset, voice->samples, voice->rate);
		return;
	}

	if (!DSP_ParseVoc(data, &pcm, &length, &rate)) return;
	if (length > SCRATCH_MAX) length = SCRATCH_MAX;
	Scsp_UploadU8(s_scratch, pcm, length);
	Scsp_UploadTail(s_scratch + (int32)((length + 1) & ~1u));
	DSP_PlayFromSoundRam(s_scratch, length, rate);
}

/**
 * Play a sound effect's VOC, or one kept in sound RAM (a descriptor from
 * DSP_Saturn_KeepVoc()), on a slot of its own, beside the voice; the
 * voice's status is not changed.
 *
 * @param data The VOC or the descriptor.
 */
void DSP_Saturn_PlayEffect(const uint8 *data)
{
	const SaturnVoice *voice = (const SaturnVoice *)data;
	const uint8 *pcm;
	uint32 length, rate;

	if (!s_ready) return;
	if (voice->magic == DESCRIPTOR_MAGIC) {
		Scsp_Play(EFFECT_SLOT, voice->offset, voice->samples, voice->rate, 255);
		s_effectPlaying = voice->offset;
		return;
	}

	if (s_effectScratch < 0 || !DSP_ParseVoc(data, &pcm, &length, &rate)) return;
	if (length > EFFECT_SCRATCH_MAX) length = EFFECT_SCRATCH_MAX;
	/* (the slot is let go before its samples are overwritten) */
	Scsp_Stop(EFFECT_SLOT);
	Scsp_UploadU8(s_effectScratch, pcm, length);
	Scsp_UploadTail(s_effectScratch + (int32)((length + 1) & ~1u));
	Scsp_Play(EFFECT_SLOT, s_effectScratch, length, rate, 255);
	s_effectPlaying = s_effectScratch;
}

/**
 * Whether a voice is playing, from when it ends.
 *
 * @return 2 while one plays, else 0.
 */
uint8 DSP_GetStatus(void)
{
	return (s_endUs != 0 && SaturnTimer_Us() < s_endUs) ? 2 : 0;
}

/**
 * Play one of the pad's blips on its own slot.
 *
 * @param blip Which.
 */
void DSP_Saturn_Blip(DSPBlip blip)
{
	const Blip *b = &s_blips[blip];
	ScspNote note;

	if (b->offset < 0) return;
	/* once through, then round the silent tail */
	note.offset = b->offset;
	note.loopStart = b->samples;
	note.end = (uint16)(b->samples + BLIP_TAIL - 1);
	note.loop = 1;
	note.attack = 31;
	note.decay1 = 0;
	note.decayLevel = 0;
	note.decay2 = 0;
	note.release = 31;
	note.level = b->level;
	note.pitch = Scsp_Pitch(0, 0);
	note.pan = 0;
	note.pcm16 = 1;
	Scsp_NoteOn(BLIP_SLOT, &note);
}

/**
 * Move a preloaded VOC into sound RAM.
 *
 * @param voc The VOC, from malloc(); freed here.
 * @param size Filled with the size of what to keep instead.
 * @return A descriptor to keep instead of the VOC, or NULL if it has to be
 *         loaded when needed.
 */
void *DSP_Saturn_KeepVoc(void *voc, uint32 *size)
{
	SaturnVoice *voice;
	const uint8 *pcm;
	uint32 length, rate;
	int32 offset;

	if (!s_ready || !DSP_ParseVoc(voc, &pcm, &length, &rate)) {
		free(voc);
		return NULL;
	}

	voice = malloc(sizeof(SaturnVoice));
	offset = Scsp_Alloc(((length + 1) & ~1u) + SCSP_TAIL);
	if (voice == NULL || offset < 0) {
		/* sound RAM is full: the voice will be loaded when it is needed */
		if (offset >= 0) Scsp_Free(offset);
		free(voice);
		free(voc);
		return NULL;
	}

	Scsp_UploadU8(offset, pcm, length);
	Scsp_UploadTail(offset + (int32)((length + 1) & ~1u));
	free(voc);

	voice->magic = DESCRIPTOR_MAGIC;
	voice->offset = offset;
	voice->samples = length;
	voice->rate = rate;
	*size = sizeof(SaturnVoice);
	return voice;
}

/**
 * Free a voice kept by DSP_Saturn_KeepVoc() (or a VOC).
 *
 * @param data The descriptor.
 */
void DSP_Saturn_FreeVoc(void *data)
{
	SaturnVoice *voice = data;
	if (voice == NULL) return;
	if (voice->magic == DESCRIPTOR_MAGIC) {
		/* the slot loops round the end of the last voice even after it has
		 * finished: let it go before the sound RAM is used for something else */
		if (voice->offset == s_playing) DSP_Stop();
		if (voice->offset == s_effectPlaying) {
			Scsp_Stop(EFFECT_SLOT);
			s_effectPlaying = -1;
		}
		Scsp_Free(voice->offset);
	}
	free(voice);
}

/**
 * Whether a VOC file of a size can be kept in sound RAM now.
 *
 * @param fileSize The size of the VOC file.
 * @return True if it fits.
 */
bool DSP_Saturn_CanKeep(uint32 fileSize)
{
	/* the PCM data is shorter than the file */
	return s_ready && Scsp_LargestFree() >= fileSize + SCSP_TAIL;
}

/**
 * Whether a voice kept by DSP_Saturn_KeepVoc() is the one playing.
 *
 * @param data The descriptor.
 * @return True if it plays.
 */
bool DSP_Saturn_IsPlaying(const void *data)
{
	const SaturnVoice *voice = data;
	return voice != NULL && voice->magic == DESCRIPTOR_MAGIC && voice->offset == s_playing && DSP_GetStatus() != 0;
}
