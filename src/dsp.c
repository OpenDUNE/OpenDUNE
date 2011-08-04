/* $Id$ */

/** @file src/dsp.c DSP routines. */

#include <assert.h>
#include <SDL.h>
#include "types.h"

#include "dsp.h"

#include "driver.h"

static uint8 *s_buffer;
static int s_bufferLen;
static uint8 s_status;
static uint8 *s_data;
static int s_dataLen;

static void DSP_Callback(void *userdata, Uint8 *stream, int len)
{
	VARIABLE_NOT_USED(userdata);

	if (s_status == 0 || s_bufferLen == 0 || s_buffer == NULL) return;

	if (len <= s_bufferLen) {
		memcpy(stream, s_buffer, len);
		s_bufferLen -= len;
		s_buffer += len;
	} else {
		memcpy(stream, s_buffer, s_bufferLen);
		s_bufferLen = 0;
		s_status = 0;
	}
}

static void DSP_SetTimeConst(uint16 tc)
{
	static int old_freq = 0;
	SDL_AudioSpec spec;

	spec.freq = 1000000 / (256 - tc);
	spec.format = AUDIO_U8;
	spec.channels = 1;
	spec.samples = 512;
	spec.callback = DSP_Callback;

	if (old_freq != spec.freq) {
		SDL_CloseAudio();
		old_freq = spec.freq;
		SDL_OpenAudio(&spec, &spec);
	}
}

void DSP_Stop()
{
	SDL_PauseAudio(1);

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
}

void DSP_Uninit()
{
	if (SDL_WasInit(SDL_INIT_AUDIO) == 0) return;

	DSP_Stop();
	SDL_CloseAudio();

	free(s_data);
	s_data = NULL;
	s_dataLen = 0;

	SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

bool DSP_Init()
{
	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) return false;

	DSP_SetTimeConst(0);

	if (SDL_GetAudioStatus() == 0) return false;

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
	s_data = NULL;
	s_dataLen = 0;

	return true;
}

void DSP_Play(const uint8 *data)
{
	DSP_Stop();

	data += ((uint16 *)data)[10];

	if (*data != 1) return;

	DSP_SetTimeConst(data[4]);

	s_bufferLen = (*(uint32 *)data >> 8) - 2;

	if (s_dataLen < s_bufferLen) {
		s_data = realloc(s_data, s_bufferLen);
		s_dataLen = s_bufferLen;
	}

	memcpy(s_data, data + 6, s_bufferLen);

	s_buffer = s_data;
	s_status = 2;
	SDL_PauseAudio(0);
}

uint8 DSP_GetStatus()
{
	return (SDL_GetAudioStatus() != 0) ? s_status : 0;
}
