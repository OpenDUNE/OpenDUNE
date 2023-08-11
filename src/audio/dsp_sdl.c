/** @file src/audio/dsp_sdl.c SDL implementation of the DSP. */

#include <assert.h>
#include <SDL.h>
#include "types.h"
#include "../os/endian.h"

#include "dsp.h"


#define MIX_OUTPUT_FORMAT	AUDIO_U8
#define MIX_OUTPUT_FREQUENCY  22050
#define MIX_OUTPUT_CHANNELS	2
#define MIX_BUFFER_SIZE 1024


static uint8 *s_buffer;
static uint32 s_bufferLen;
static uint8 s_status;
static uint8 *s_data;


static SDL_AudioSpec s_spec;

static void DSP_Callback(void *userdata, Uint8 *stream, int len)
{
	VARIABLE_NOT_USED(userdata);

	if (s_status == 0 || s_bufferLen == 0 || s_buffer == NULL) {
		/* no more sample to play : */
		memset(stream, 0x80, len);	/* fill buffer with silence */
		SDL_PauseAudio(1);	/* stop playback */
		return;
	}

	if (len <= (int)s_bufferLen) {
		memcpy(stream, s_buffer, len);
		s_bufferLen -= len;
		s_buffer += len;
	} else {
		memcpy(stream, s_buffer, s_bufferLen);
		memset(stream + s_bufferLen, 0x80, len - s_bufferLen);	/* fill buffer end with silence */
		s_bufferLen = 0;
		s_buffer = NULL;
		s_status = 0;
	}
}

void DSP_Stop(void)
{
	SDL_PauseAudio(1);

	s_buffer = NULL;
	s_bufferLen = 0;

	s_status = 0;
	s_data = NULL;
}

void DSP_Uninit(void)
{
	if (SDL_WasInit(SDL_INIT_AUDIO) == 0) return;

	DSP_Stop();
	SDL_CloseAudio();

	free(s_data); s_data = NULL;

	SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

bool DSP_Init(void)
{
	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) return false;

	s_spec.freq     = MIX_OUTPUT_FREQUENCY;
	s_spec.format   = MIX_OUTPUT_FORMAT;
	s_spec.channels = MIX_OUTPUT_CHANNELS;
	s_spec.samples  = MIX_BUFFER_SIZE;
	s_spec.callback = DSP_Callback;

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
	s_data = NULL;

	if (SDL_OpenAudio(&s_spec, &s_spec) != 0) return false;

	return (SDL_GetAudioStatus() != 0);
}

/**
 * In Dune2, the frequency of the VOC files are all over the place. SDL really
 *  dislikes it when we close/open the audio driver a lot. So, we convert all
 *  audio to one frequency, which resolves all issues.
 */
static void DSP_ConvertAudio(uint32 freq)
{
	uint32 newlen = s_bufferLen * s_spec.freq / freq;

    SDL_AudioCVT cvt;

	SDL_BuildAudioCVT(&cvt, AUDIO_U8, 1, freq, s_spec.format, s_spec.channels, s_spec.freq);

	// Setup for conversion.
	cvt.len = s_bufferLen;
	cvt.buf = malloc(cvt.len * cvt.len_mult);


    // copy the old data into the buffer
	memcpy(cvt.buf, s_data, cvt.len);

	SDL_ConvertAudio(&cvt);


	s_data = cvt.buf;
	s_bufferLen = (newlen * MIX_OUTPUT_CHANNELS);
}

void DSP_Play(const uint8 *data)
{
	DSP_Stop();

	data += READ_LE_UINT16(data + 20);

	if (*data != 1) return;

	s_bufferLen = (READ_LE_UINT32(data) >> 8) - 2;

	s_data = realloc(s_data, s_bufferLen);
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
