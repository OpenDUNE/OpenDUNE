/* $Id$ */

/** @file src/dsp.c DSP routines. */

#include <assert.h>
#include <SDL.h>
#include "types.h"
#include "libemu.h"
#include "dsp.h"
#include "driver.h"

uint16 g_dsp_cs;

static DriverInfo s_dsp_driverInfo = {
	/* extension    */ "VOC",
	/* frequency    */ 65535
};

static uint8 *s_buffer;
static int s_bufferLen;
static uint8 *s_data;
static uint8 s_status;

static void DSP_ProcessBlock();

static void DSP_Callback(void *userdata, Uint8 *stream, int len)
{
	VARIABLE_NOT_USED(userdata);

	if (s_bufferLen == 0) return;

	if (len <= s_bufferLen) {
		if (s_buffer == NULL) {
			memset(stream, 0, len);
		} else {
			memcpy(stream, s_buffer, len);
		}
		s_bufferLen -= len;
		s_buffer += len;
	} else {
		if (s_buffer == NULL) {
			memset(stream, 0, s_bufferLen);
		} else {
			memcpy(stream, s_buffer, s_bufferLen);
		}
		s_bufferLen = 0;
	}

	if (s_bufferLen == 0 && s_status != 0) DSP_ProcessBlock();
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

static void DSP_ProcessBlock()
{
	if (s_status != 0) s_data += (*(uint32 *)s_data >> 8) + 4;

	switch (*s_data) {
		default: /* Unhandled block types */
			assert(0);
			break;

		case 0: /* End of Data Block */
		case 4: /* Marker */
			s_status = 0;
			break;

		case 1: /* New Sample Data */
			DSP_SetTimeConst(s_data[4]);
			s_bufferLen = (*(uint32 *)s_data >> 8) - 2;
			s_buffer = s_data + 6;
			s_status = 2;
			SDL_PauseAudio(0);
			break;

		case 3: /* Silence */
			DSP_SetTimeConst(((uint16 *)s_data)[3]);
			s_bufferLen = ((uint16 *)s_data)[2];
			s_buffer = NULL;
			s_status = 2;
			SDL_PauseAudio(0);
			break;
	}
}

DriverInfo *DSP_GetInfo()
{
	return &s_dsp_driverInfo;
}

void DSP_Stop()
{
	SDL_LockAudio();
	s_bufferLen = 0;
	s_buffer = NULL;
	SDL_UnlockAudio();
	SDL_PauseAudio(1);
}

void DSP_Uninit()
{
	if (SDL_WasInit(SDL_INIT_AUDIO) == 0) return;

	DSP_Stop();
	SDL_CloseAudio();

	SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

void DSP_Init()
{
	SDL_InitSubSystem(SDL_INIT_AUDIO);

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
}

void DSP_Play(uint8 *data)
{
	DSP_Stop();

	s_data = data + ((uint16 *)data)[10];
	s_bufferLen = 0;

	DSP_ProcessBlock();

}

uint8 DSP_GetStatus()
{
	uint8 ret;

	SDL_LockAudio();
	ret = s_status;
	SDL_UnlockAudio();

	return ret;
}
