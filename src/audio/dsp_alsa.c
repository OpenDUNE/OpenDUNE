/* $Id$ */

/** @file src/dsp_alsa.c ALSA implementation of the DSP. */

#include <alloca.h>
#include <alsa/asoundlib.h>
#include "types.h"

#include "dsp.h"

static snd_pcm_t *s_dsp = NULL;
static snd_pcm_hw_params_t *s_dspParams = NULL;
static snd_async_handler_t *s_dspAsync = NULL;

static bool s_init = false;
static bool s_playing = false;

static char *s_data = NULL;
static uint32 s_dataLen = 0;

static uint8 *s_buffer = NULL;
static uint32 s_bufferLen = 0;

static void DSP_Callback(snd_async_handler_t *ahandler)
{
	uint32 len;

	VARIABLE_NOT_USED(ahandler);

	if (!s_playing) return;

	/* In case a buffer underrun happens, we are done playing. */
	if (snd_pcm_avail(s_dsp) == -EPIPE) {
		s_playing = false;
		return;
	}

	/* Check how much we can buffer */
	len = snd_pcm_avail_update(s_dsp);
	if (len == 0) return;

	/* Check how much bytes we have left to write */
	if (len > s_bufferLen) len = s_bufferLen;
	if (len == 0) return;

	/* Queue as much as possible */
	snd_pcm_writei(s_dsp, s_buffer, len);
	s_buffer += len;
	s_bufferLen -= len;
}

void DSP_Stop()
{
	if (s_dsp == NULL) return;

	snd_pcm_drop(s_dsp);
	snd_pcm_close(s_dsp);

	s_dsp = NULL;
	s_playing = false;
}

void DSP_Uninit()
{
	if (!s_init) return;

	DSP_Stop();

	free(s_data); s_data = NULL;
	s_dataLen = 0;

	snd_config_update_free_global();

	s_init = false;
}

bool DSP_Init()
{
	s_init = true;
	return true;
}

void DSP_Play(const uint8 *data)
{
	uint32 len;
	uint32 freq;

	DSP_Stop();

	data += ((uint16 *)data)[10];

	if (*data != 1) return;

	len = (*(uint32 *)data >> 8) - 2;

	if (s_dataLen < len) {
		s_data = realloc(s_data, len);
		s_dataLen = len;
	}

	memcpy(s_data, data + 6, len);

	freq = 1000000 / (256 - data[4]);

	/* Open device */
	if (snd_pcm_open(&s_dsp, "default", SND_PCM_STREAM_PLAYBACK, SND_PCM_NONBLOCK) < 0) {
		fprintf(stderr, "Failed to initialize DSP\n");
		s_dsp = NULL;
		return;
	}

	/* Set parameters */
	snd_pcm_hw_params_alloca(&s_dspParams);
	snd_pcm_hw_params_any(s_dsp, s_dspParams);
	snd_pcm_hw_params_set_access(s_dsp, s_dspParams, SND_PCM_ACCESS_RW_INTERLEAVED);
	snd_pcm_hw_params_set_format(s_dsp, s_dspParams, SND_PCM_FORMAT_U8);
	snd_pcm_hw_params_set_channels(s_dsp, s_dspParams, 1);
	snd_pcm_hw_params_set_rate(s_dsp, s_dspParams, freq, 0);
	if (snd_pcm_hw_params(s_dsp, s_dspParams) < 0) {
		fprintf(stderr, "Failed to set parameters for DSP\n");
		snd_pcm_close(s_dsp);
		s_dsp = NULL;
		return;
	}

	/* Create a callback and start playback */
	s_bufferLen = len;
	s_buffer = s_data;

	snd_async_add_pcm_handler(&s_dspAsync, s_dsp, DSP_Callback, NULL);
	len = snd_pcm_writei(s_dsp, s_buffer, s_bufferLen);
	s_buffer += len;
	s_bufferLen -= len;

	s_playing = true;
}

uint8 DSP_GetStatus()
{
	return s_playing ? 2 : 0;
}
