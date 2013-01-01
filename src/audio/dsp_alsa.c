/** @file src/audio/dsp_alsa.c ALSA implementation of the DSP. */

#include <assert.h>
#include <alloca.h>
#include <alsa/asoundlib.h>
#include "types.h"
#include "../os/error.h"

#include "dsp.h"

static snd_pcm_t *s_dsp = NULL;
static snd_pcm_hw_params_t *s_dspParams = NULL;
static snd_async_handler_t *s_dspAsync = NULL;

static bool s_init = false;
static bool s_playing = false;

static uint8 *s_data = NULL;
static uint32 s_dataLen = 0;

static uint8 *s_buffer = NULL;
static uint32 s_bufferLen = 0;
static uint32 s_bufferDone = 0;

static void DSP_Callback(snd_async_handler_t *ahandler)
{
	uint32 len;

	VARIABLE_NOT_USED(ahandler);

	if (!s_playing) return;

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

void DSP_Stop(void)
{
	if (s_dsp == NULL) return;

	snd_pcm_drop(s_dsp);
	snd_pcm_close(s_dsp);

	s_dsp = NULL;
	s_playing = false;
}

void DSP_Uninit(void)
{
	if (!s_init) return;

	DSP_Stop();

	free(s_data); s_data = NULL;
	s_dataLen = 0;

	s_init = false;
}

bool DSP_Init(void)
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
		Error("Failed to initialize DSP\n");
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
		Error("Failed to set parameters for DSP\n");
		snd_pcm_close(s_dsp);
		s_dsp = NULL;
		return;
	}

	/* Prepare buffer */
	s_bufferLen = len;
	s_buffer = s_data;

	/* Create callback */
	if (snd_async_add_pcm_handler(&s_dspAsync, s_dsp, DSP_Callback, NULL) >= 0) {
		s_bufferDone = 0;
	} else {
		/* Async callbacks not supported. Fallback on a more ugly way to detect end-of-stream */
		s_bufferDone = snd_pcm_avail(s_dsp);
	}

	/* Write as much as we can to start playback */
	len = snd_pcm_writei(s_dsp, s_buffer, s_bufferLen);
	s_buffer += len;
	s_bufferLen -= len;

	s_playing = true;
}

uint8 DSP_GetStatus(void)
{
	if (!s_playing) return 0;

	/* Check if have a buffer underrun. In that case we are done. */
	/* XXX -- In some weird cases the state switches to SETUP. So just
	 *  check if we are still running, and assume we are done playing in
	 *  all other cases */
	if (snd_pcm_state(s_dsp) != SND_PCM_STATE_RUNNING) {
		assert(s_bufferLen == 0);
		s_playing = false;
		return 0;
	}
	/* Some ALSA implementations seem to not support async, and also never
	 *  underrun, even if it runs out of samples. So we hack our way into
	 *  detecting when our sample is done playing */
	/* XXX -- For some reason it seems to never dequeue the last byte in
	 *  the buffer */
	if (s_bufferDone != 0 && snd_pcm_avail(s_dsp) == s_bufferDone - 1) {
		assert(s_bufferLen == 0);
		s_playing = false;
		return 0;
	}

	return 2;
}
