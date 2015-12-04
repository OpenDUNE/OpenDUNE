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

static uint8 *s_data = NULL;
static uint32 s_dataAllocLen = 0;
static uint32 s_dataLen = 0;

static bool s_playing = false;

static void DSP_PulseAudio_Tick(void)
{
	int retval;
	pa_mainloop_iterate(s_mainloop, 0, &retval);	/* non blocking */
}

#if 0
static void DSP_context_state_cb(pa_context *c, void *userdata)
{
	pa_context_state_t state = pa_context_get_state(c);
	Warning("DSP_context_state_cb(%p, %p) state=%d\n", c, userdata, (int)state);
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
	Warning("DSP_context_success_cb(%p, %d, %p)\n", c, success, userdata);
}
#endif
 
static void DSP_context_event_cb(pa_context *c, const char *name, pa_proplist *p, void *userdata)
{
	Warning("DSP_context_event_cb(%p, %s, %p, %p)\n", c, name, p, userdata);
}

static void DSP_stream_success_cb(pa_stream *p, int success, void *userdata)
{
	/*pa_operation * op;*/
	Warning("DSP_stream_success_cb(%p, %d, %p)\n", p, success, userdata);
/*
	if (success && userdata) {
		op = pa_stream_trigger(p, DSP_stream_success_cb, NULL);
		pa_operation_unref(op);
	}
*/
}

static void DSP_stream_underflow_cb(pa_stream *p, void *userdata)
{
	Warning("DSP_stream_underflow_cb(%p, %p)\n", p, userdata);
	s_playing = false;
	pa_stream_disconnect(p);
}

static void DSP_stream_state_cb(pa_stream *p, void *userdata)
{
	pa_operation * op;
	pa_stream_state_t state = pa_stream_get_state(p);
	Warning("DSP_stream_notify_cb(%p, %p) state=%d\n", p, userdata, (int)state);
	switch (state) {
		case PA_STREAM_READY:
			if (pa_stream_write(p, s_data, s_dataLen, NULL, 0, PA_SEEK_RELATIVE) < 0) {
				Error("pa_stream_write() failed\n");
			}
			/*op = pa_stream_cork(p, 0, DSP_stream_success_cb, p);*/
			op = pa_stream_trigger(p, DSP_stream_success_cb, NULL);
			pa_operation_unref(op);
			break;
		case PA_STREAM_FAILED:
			Warning("PA_STREAM_FAILED\n");
			break;
		case PA_STREAM_TERMINATED:
			Warning("PA_STREAM_TERMINATED\n");
			break;
		default:
		case PA_STREAM_UNCONNECTED:
		case PA_STREAM_CREATING:
			break;
	}
}

bool DSP_Init(void)
{
	int retval;
	pa_context_state_t state;

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
	Timer_Add(DSP_PulseAudio_Tick, 1000000 / 100, false);
	return true;
}

void DSP_Uninit(void)
{
}

void DSP_Play(const uint8 *data)
{
	pa_sample_spec sample_spec;
	pa_stream * stream;
	uint32 freq;
	uint32 len;
	pa_buffer_attr attr;

	data += READ_LE_UINT16(data + 20);	/* Skip VOC header */

	if (data[0] != 1) return;	/* if not a Sound Data block, return */
	len = data[1] | (data[2] << 8) | (data[3] << 16);
	len -= 2;
	freq = 1000000 / (256 - data[4]);
	/* data[5] = codec */
	data += 6;

Warning("DSP_Play() data=%p freq=%u\n", data, (unsigned)freq);

	if (s_dataAllocLen < len) {
		s_data = realloc(s_data, len);
		s_dataAllocLen = len;
	}
	memcpy(s_data, data, len);
	s_dataLen = len;

	sample_spec.format = PA_SAMPLE_U8;
	sample_spec.rate = freq;
	sample_spec.channels = 1;
	stream = pa_stream_new(s_context, "DuneSpeech", &sample_spec, NULL);
	if (stream == NULL) {
		Error("pa_stream_new() failed\n");
	}
	pa_stream_set_state_callback(stream, DSP_stream_state_cb, NULL);
	pa_stream_set_underflow_callback(stream, DSP_stream_underflow_cb, NULL);
	attr.maxlength = (uint32_t)-1;
	attr.tlength = len;	/*(uint32_t)-1;*/
	attr.prebuf = (uint32_t)-1;
	attr.minreq = (uint32_t)-1;
	attr.fragsize = len;
	if (pa_stream_connect_playback(stream, NULL, &attr, PA_STREAM_START_UNMUTED, NULL, NULL) < 0) {
		Error("pa_stream_connect_playback() failed\n");
	} else {
		s_playing = true;
	}
	pa_stream_unref(stream);
}

void DSP_Stop(void)
{
	Warning("DSP_Stop()\n");
}

uint8 DSP_GetStatus(void)
{
	return s_playing ? 2 : 0;
}
