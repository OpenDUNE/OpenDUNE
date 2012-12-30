/** @file src/audio/dsp_sdl.c SDL implementation of the DSP. */

#include <assert.h>
#include <SDL.h>
#include "types.h"

#include "dsp.h"


static uint8 *s_buffer;
static uint32 s_bufferLen;
static uint8 s_status;
static uint8 *s_data;
static uint32 s_dataLen;

static SDL_AudioSpec s_spec;

static void DSP_Callback(void *userdata, Uint8 *stream, int len)
{
	VARIABLE_NOT_USED(userdata);

	if (s_status == 0 || s_bufferLen == 0 || s_buffer == NULL) return;

	if (len <= (int)s_bufferLen) {
		memcpy(stream, s_buffer, len);
		s_bufferLen -= len;
		s_buffer += len;
	} else {
		memcpy(stream, s_buffer, s_bufferLen);
		s_bufferLen = 0;
		s_status = 0;
	}
}

void DSP_Stop(void)
{
	SDL_PauseAudio(1);

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
}

void DSP_Uninit(void)
{
	if (SDL_WasInit(SDL_INIT_AUDIO) == 0) return;

	DSP_Stop();
	SDL_CloseAudio();

	free(s_data); s_data = NULL;
	s_dataLen = 0;

	SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

bool DSP_Init(void)
{
	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) return false;

	s_spec.freq     = 22050;
	s_spec.format   = AUDIO_U8;
	s_spec.channels = 1;
	s_spec.samples  = 512;
	s_spec.callback = DSP_Callback;

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
	s_data = NULL;
	s_dataLen = 0;

	if (SDL_OpenAudio(&s_spec, &s_spec) != 0) return false;

	return (SDL_GetAudioStatus() != 0);
}

/**
 * In Dune2, the frequency of the VOC files are all over the place. SDL really
 *  dislikes it when we close/open the audio driver a lot. So, we convert all
 *  audio to one frequency, which resolves all issues. Sadly, our knowledge of
 *  audio is not really good, so this is a linear scaler.
 */
static void DSP_ConvertAudio(uint32 freq)
{
	uint32 newlen = s_bufferLen * s_spec.freq / freq;
	uint8 *r;
	uint8 *w;
	uint32 i, j;

	assert((int)freq < s_spec.freq);

	if (s_dataLen < newlen) {
		s_data = realloc(s_data, newlen);
		s_dataLen = newlen;
	}

	w = s_data + newlen - 1;
	r = s_data + s_bufferLen - 1;
	j = 0;
	for (i = 0; i < s_bufferLen; i++) {
		do {
			*w-- = *r;
			j++;
		} while (j <= i * s_spec.freq / freq);
		r--;
	}
	r++;
	while (j < i * s_spec.freq / freq) {
		*w-- = *r;
		j++;
	}
	w++;

	assert(w == s_data);
	assert(r == s_data);

	s_bufferLen = newlen;
}

void DSP_Play(const uint8 *data)
{
	DSP_Stop();

	data += ((uint16 *)data)[10];

	if (*data != 1) return;

	s_bufferLen = (*(uint32 *)data >> 8) - 2;

	if (s_dataLen < s_bufferLen) {
		s_data = realloc(s_data, s_bufferLen);
		s_dataLen = s_bufferLen;
	}

	memcpy(s_data, data + 6, s_bufferLen);
	DSP_ConvertAudio(1000000 / (256 - data[4]));

	s_buffer = s_data;
	s_status = 2;
	SDL_PauseAudio(0);
}

uint8 DSP_GetStatus(void)
{
	return (SDL_GetAudioStatus() != 0) ? s_status : 0;
}
