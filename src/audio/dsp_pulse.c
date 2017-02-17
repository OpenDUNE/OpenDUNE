/** @file src/audio/dsp_pulse.c Pulse Audio implementation of the DSP. */

#include <string.h>
#define inline __inline
#include <pulse/pulseaudio.h>

#include "types.h"
#include "../os/error.h"
#include "../os/endian.h"
#include "../os/sleep.h"
#include "../timer.h"

#include "dsp.h"

static pa_mainloop* s_mainloop = NULL;
static pa_mainloop_api* s_mainloop_api = NULL;
static pa_context* s_context = NULL;
static pa_stream * s_stream = NULL;
static uint32 s_current_freq = 0;

static bool s_playing = false;

static void DSP_PulseAudio_Tick(void)
{
	int retval;
	pa_mainloop_iterate(s_mainloop, 0, &retval);	/* non blocking */
}

#ifdef MUNT
pa_context * DSP_PulseAudio_GetContext(void)
{
	return s_context;
}
#endif

#if 0
static void DSP_context_state_cb(pa_context *c, void *userdata)
{
	pa_context_state_t state = pa_context_get_state(c);
	Debug("DSP_context_state_cb(%p, %p) state=%d\n", c, userdata, (int)state);
	switch (state) {
		case PA_CONTEXT_UNCONNECTED:
		case PA_CONTEXT_CONNECTING:
		case PA_CONTEXT_AUTHORIZING:
		case PA_CONTEXT_SETTING_NAME:
		case PA_CONTEXT_FAILED:
		case PA_CONTEXT_TERMINATED:
		case PA_CONTEXT_READY:
	}
}
#endif
 
#if 0
static void DSP_context_success_cb(pa_context *c, int success, void *userdata)
{
	Debug("DSP_context_success_cb(%p, %d, %p)\n", c, success, userdata);
}
#endif
 
static void DSP_context_event_cb(pa_context *c, const char *name, pa_proplist *p, void *userdata)
{
	VARIABLE_NOT_USED(c);
	VARIABLE_NOT_USED(name);
	VARIABLE_NOT_USED(p);
	VARIABLE_NOT_USED(userdata);
	Debug("DSP_context_event_cb(%p, %s, %p, %p)\n", c, name, p, userdata);
}

#if 0
static void DSP_stream_success_cb(pa_stream *p, int success, void *userdata)
{
	/*pa_operation * op;*/
	Debug("DSP_stream_success_cb(%p, %d, %p)\n", p, success, userdata);
/*
	if (success && userdata) {
		op = pa_stream_trigger(p, DSP_stream_success_cb, NULL);
		pa_operation_unref(op);
	}
*/
}
#endif

static void DSP_stream_underflow_cb(pa_stream *p, void *userdata)
{
	VARIABLE_NOT_USED(p);
	VARIABLE_NOT_USED(userdata);
	Debug("DSP_stream_underflow_cb(%p, %p)\n", p, userdata);
	s_playing = false;
}

static void DSP_stream_state_cb(pa_stream *p, void *userdata)
{
	/*pa_operation * op;*/
	pa_stream_state_t state = pa_stream_get_state(p);
	VARIABLE_NOT_USED(userdata);
	Debug("DSP_stream_state_cb(%p, %p) state=%d\n", p, userdata, (int)state);
	switch (state) {
		case PA_STREAM_READY:
			Debug("PA_STREAM_READY\n");
#if 0
			if (pa_stream_write(p, s_data, s_dataLen, NULL, 0, PA_SEEK_RELATIVE) < 0) {
				Error("pa_stream_write() failed\n");
			}
			/*op = pa_stream_cork(p, 0, DSP_stream_success_cb, p);*/
			op = pa_stream_trigger(p, DSP_stream_success_cb, NULL);
			pa_operation_unref(op);
#endif
			break;
		case PA_STREAM_FAILED:
			Warning("PA_STREAM_FAILED\n");
			break;
		case PA_STREAM_TERMINATED:
			Debug("PA_STREAM_TERMINATED\n");
			break;
		default:
		case PA_STREAM_UNCONNECTED:
		case PA_STREAM_CREATING:
			break;
	}
}

static void DSP_stream_update_rate_cb(pa_stream *p, int success, void *userdata)
{
	VARIABLE_NOT_USED(p);
	VARIABLE_NOT_USED(success);
	VARIABLE_NOT_USED(userdata);
	Debug("DSP_stream_update_rate_cb(%p, %d, %p)\n", p, success, userdata);
}

static void DSP_stream_flush_cb(pa_stream *p, int success, void *userdata)
{
	VARIABLE_NOT_USED(p);
	VARIABLE_NOT_USED(success);
	VARIABLE_NOT_USED(userdata);
	Debug("DSP_stream_flush_cb(%p, %d, %p)\n", p, success, userdata);
}

bool DSP_Init(void)
{
	int retval;
	pa_context_state_t state;
	pa_sample_spec sample_spec;

	if(s_context != NULL)
		return true;

	Debug("DSP_Init() PulseAudio version %s\n", pa_get_library_version());
	s_mainloop = pa_mainloop_new();
	if (s_mainloop == NULL) {
		Error("PulseAudio pa_mainloop_new() failed\n");
		return false;
	}
	s_mainloop_api = pa_mainloop_get_api(s_mainloop);
/*
	if (pa_signal_init(s_mainloop_api) != 0) {
		Error("PulseAudio pa_signal_init() failed\n");
		return false;
	}
*/
	s_context = pa_context_new_with_proplist(s_mainloop_api, "OpenDUNE", NULL/*proplist*/);
	if (s_context == NULL) {
		Error("PulseAudio pa_context_new_with_proplist() failed\n");
		return false;
	}
	/*pa_context_set_state_callback(s_context, DSP_context_state_cb, NULL);*/
	pa_context_set_event_callback(s_context, DSP_context_event_cb, NULL/*userdata*/);
	if (pa_context_connect(s_context, NULL, 0/*PA_CONTEXT_NOAUTOSPAWN*/, NULL) != 0) {
		Error("PulseAudio pa_context_connect() failed\n");
		return false;
	}
	/* Wait for context to be ready */
	do {
		pa_mainloop_iterate(s_mainloop, 1, &retval);
		state = pa_context_get_state(s_context);
		if (state == PA_CONTEXT_FAILED || state == PA_CONTEXT_TERMINATED) return false;
	} while(state != PA_CONTEXT_READY);
	/* create stream */
	s_current_freq = 10989; /* default value */
	sample_spec.format = PA_SAMPLE_U8;
	sample_spec.rate = s_current_freq;
	sample_spec.channels = 1;
	s_stream = pa_stream_new(s_context, "DuneSpeech", &sample_spec, NULL);
	if (s_stream == NULL) {
		Error("pa_stream_new() failed\n");
		return false;
	}
	pa_stream_set_state_callback(s_stream, DSP_stream_state_cb, NULL);
	pa_stream_set_underflow_callback(s_stream, DSP_stream_underflow_cb, NULL);
	if (pa_stream_connect_playback(s_stream, NULL, NULL, PA_STREAM_START_UNMUTED | PA_STREAM_VARIABLE_RATE, NULL, NULL) < 0) {
		Error("pa_stream_connect_playback() failed\n");
		return false;
	}
	Timer_Add(DSP_PulseAudio_Tick, 1000000 / 100, false);
	return true;
}

void DSP_Uninit(void)
{
	int retval;

	pa_stream_disconnect(s_stream);
	pa_stream_unref(s_stream);
	s_stream = NULL;
	pa_context_unref(s_context);
	s_context = NULL;
	pa_mainloop_quit(s_mainloop, 42);
	pa_mainloop_run(s_mainloop, &retval);
	pa_mainloop_free(s_mainloop);
	s_mainloop = NULL;
}

void DSP_Play(const uint8 *data)
{
	/*pa_sample_spec sample_spec;
	pa_stream * stream;*/
	uint32 freq;
	uint32 len;
	/*pa_buffer_attr attr;*/

	data += READ_LE_UINT16(data + 20);	/* Skip VOC header */

	if (data[0] != 1) return;	/* if not a Sound Data block, return */
	len = data[1] | (data[2] << 8) | (data[3] << 16);
	len -= 2;
	freq = 1000000 / (256 - data[4]);
	/* data[5] = codec */
	data += 6;

	Debug("DSP_Play() data=%p freq=%u\n", data, (unsigned)freq);

	if(s_playing) {
		pa_operation * operation = pa_stream_flush(s_stream, DSP_stream_flush_cb, NULL);
		pa_operation_unref(operation);
	}

	if(freq != s_current_freq) {	
		pa_operation * operation;
		operation = pa_stream_update_sample_rate(s_stream, freq, DSP_stream_update_rate_cb, NULL);
		s_current_freq = freq;
		pa_operation_unref(operation);
	}

	if (pa_stream_write(s_stream, data, len, NULL, 0, PA_SEEK_RELATIVE) < 0) {
		Error("pa_stream_write() failed\n");
	}
	s_playing = true;
}

void DSP_Stop(void)
{
	Debug("DSP_Stop()\n");
	if(s_playing) {
		pa_operation * operation = pa_stream_flush(s_stream, DSP_stream_flush_cb, NULL);
		pa_operation_unref(operation);
	}
}

uint8 DSP_GetStatus(void)
{
	return s_playing ? 2 : 0;
}
