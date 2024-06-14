/** @file src/audio/midi_munt.c use the MT32 emulator MUNT */

#include <mt32emu/mt32emu.h>
#include <stdlib.h>
#include <string.h>

#ifdef PULSEAUDIO
#define inline __inline
#include <pulse/pulseaudio.h>

#elif defined(KAI)
/* KAI */
#include <kai.h>
#else
/* OSS API */
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/soundcard.h>

#include <errno.h>

#define AUDIO_DEVICE "/dev/dsp"
#endif

#include "types.h"
#include "midi.h"
#include "../timer.h"
#include "../inifile.h"
#include "../os/strings.h"
#include "../os/error.h"

#ifdef PULSEAUDIO
#include "dsp.h"
extern pa_context* DSP_PulseAudio_GetContext(void);

static pa_stream * s_stream = NULL;

static void munt_stream_overflow_cb(pa_stream *p, void *userdata);
static void munt_stream_underflow_cb(pa_stream *p, void *userdata);
static void munt_stream_write_cb(pa_stream *p, size_t nbytes, void *userdata);
static void munt_stream_state_cb(pa_stream *p, void *userdata);
#elif defined(KAI)
/* KAI */
static HKAI s_hkai;

static APIRET APIENTRY munt_cb(PVOID userdata, PVOID buffer, ULONG size);
#else
/* OSS */
static int s_oss_fd = -1;

static void munt_tick(void);
#endif

#define MUNT_RENDER_RATE 50

static void show_lcd_message(void * instance_data, const char * message)
{
	(void)instance_data;
#ifndef _DEBUG
	(void)message;
#endif
	Debug("MT32 LCD Message : %s\n", message);
}
static void print_debug(void *instance_data, const char *fmt, va_list list)
{
	char buffer[4096];
	(void)instance_data;
	vsnprintf(buffer, sizeof(buffer), fmt, list);
	Debug("MT32 debug message : %s\n", buffer);
}

static mt32emu_context s_context = NULL;

const char * s_romfiles[] = {
	"CM32L_CONTROL.ROM",
	"CM32L_PCM.ROM",
	NULL
};

static const mt32emu_report_handler_i_v0 handler_v0 = {
	/** Returns the actual interface version ID */
	NULL, /*mt32emu_report_handler_version (*getVersionID)(mt32emu_report_handler_i i);*/
	/** Callback for debug messages, in vprintf() format */
	print_debug, /*void (*printDebug)(void *instance_data, const char *fmt, va_list list);*/
	/** Callbacks for reporting errors */
	NULL, /*void (*onErrorControlROM)(void *instance_data);*/
	NULL, /*void (*onErrorPCMROM)(void *instance_data);*/
	/** Callback for reporting about displaying a new custom message on LCD */
	show_lcd_message, /*void (*showLCDMessage)(void *instance_data, const char *message);*/
	/** Callback for reporting actual processing of a MIDI message */
	NULL, /*void (*onMIDIMessagePlayed)(void *instance_data);*/
	/**
	 * Callback for reporting an overflow of the input MIDI queue.
	 * Returns MT32EMU_BOOL_TRUE if a recovery action was taken
	 * and yet another attempt to enqueue the MIDI event is desired.
	 */
	NULL, /*mt32emu_boolean (*onMIDIQueueOverflow)(void *instance_data);*/
	/**
	 * Callback invoked when a System Realtime MIDI message is detected in functions
	 * mt32emu_parse_stream and mt32emu_play_short_message and the likes.
	 */
	NULL, /*void (*onMIDISystemRealtime)(void *instance_data, mt32emu_bit8u system_realtime);*/
	/** Callbacks for reporting system events */
	NULL, /*void (*onDeviceReset)(void *instance_data);*/
	NULL, /*void (*onDeviceReconfig)(void *instance_data);*/
	/** Callbacks for reporting changes of reverb settings */
	NULL, /*void (*onNewReverbMode)(void *instance_data, mt32emu_bit8u mode);*/
	NULL, /*void (*onNewReverbTime)(void *instance_data, mt32emu_bit8u time);*/
	NULL, /*void (*onNewReverbLevel)(void *instance_data, mt32emu_bit8u level);*/
	/** Callbacks for reporting various information */
	NULL, /*void (*onPolyStateChanged)(void *instance_data, mt32emu_bit8u part_num);*/
	NULL /*void (*onProgramChanged)(void *instance_data, mt32emu_bit8u part_num, const char *sound_group_name, const char *patch_name)*/
};

static const mt32emu_report_handler_i s_handler = { &handler_v0 };
static unsigned int s_sample_rate;
static int16 * s_buffer = NULL;

bool midi_init(void)
{
#ifdef PULSEAUDIO
	pa_sample_spec sample_spec;
#elif defined(KAI)
	KAISPEC spec, obtained;
#endif
	char rompath[1024];
	char romfile[1024+64];
	int i;

	Debug("munt version : %s\n", mt32emu_get_library_version_string());
	s_context = mt32emu_create_context(s_handler, NULL);
	if (s_context == NULL) return false;
	IniFile_GetString("mt32rompath", "./roms", rompath, sizeof(rompath));
	for (i = 0; s_romfiles[i] != NULL; i++) {
		mt32emu_return_code ret;
		snprintf(romfile, sizeof(romfile), "%s/%s", rompath, s_romfiles[i]);
		ret = mt32emu_add_rom_file(s_context, romfile);
		if (ret < MT32EMU_RC_OK) {
			Error("Failed to load MT32 ROM file '%s' error %d\n", romfile, (int)ret);
			return false;
		}
	}
	if (mt32emu_open_synth(s_context) != MT32EMU_RC_OK) {
		Error("Failed to open synth\n");
		return false;
	}

	s_sample_rate = mt32emu_get_actual_stereo_output_samplerate(s_context);
	Debug("munt output samplerate = %uHz\n", s_sample_rate);
#ifdef PULSEAUDIO
	if(!DSP_Init()) {
		Error("Munt is compiled for PulseAudio : PulseAudio init failed\n");
		return false;
	}
	sample_spec.format = PA_SAMPLE_S16NE;
	sample_spec.rate = s_sample_rate;
	sample_spec.channels = 2;
	Debug("munt output sample size = %u\n", (unsigned)pa_sample_size(&sample_spec));
	s_stream = pa_stream_new(DSP_PulseAudio_GetContext(), "DuneMT32", &sample_spec, NULL);
	if(s_stream == NULL) {
		Error("pa_stream_new() failed\n");
		return false;
	}
	pa_stream_set_state_callback(s_stream, munt_stream_state_cb, NULL);
	pa_stream_set_underflow_callback(s_stream, munt_stream_underflow_cb, NULL);
	pa_stream_set_overflow_callback(s_stream, munt_stream_overflow_cb, NULL);
	pa_stream_set_write_callback(s_stream, munt_stream_write_cb, NULL);
	if (pa_stream_connect_playback(s_stream, NULL, NULL, PA_STREAM_NOFLAGS/*|PA_STREAM_START_CORKED */ /*PA_STREAM_START_UNMUTED*/, NULL, NULL) < 0) {
		Error("pa_stream_connect_playback() failed\n");
		return false;
	}
#elif defined(KAI)
	if (kaiInit(KAIM_AUTO) || kaiEnableSoftMixer(TRUE, NULL)) {
		Error("Munt is compiled for KAI : KAI init failed\n");
		return false;
	}

	spec.usDeviceIndex   = 0;
	spec.ulType          = KAIT_PLAY;
	spec.ulBitsPerSample = 16;
	spec.ulSamplingRate  = s_sample_rate;
	spec.ulDataFormat    = 0;
	spec.ulChannels      = 2;
	spec.ulNumBuffers    = 2;
	spec.ulBufferSize    = 512 * 2 * 2;
	spec.fShareable      = FALSE;
	spec.pfnCallBack     = munt_cb;
	spec.pCallBackData   = NULL;

	if (kaiOpen(&spec, &obtained, &s_hkai) != 0) {
		Error("Munt: kaiOpen() failed\n");
		return false;
	}

	kaiPlay(s_hkai);
#else
	s_oss_fd = open(AUDIO_DEVICE, O_WRONLY);
	if(s_oss_fd < 0) {
		Error("open(%s) : %s\n", AUDIO_DEVICE, strerror(errno));
		return false;
	} else {
		i = AFMT_S16_NE;	/* signed 16bit samples, NATIVE order */
		if(ioctl(s_oss_fd, SNDCTL_DSP_SETFMT, &i) < 0) {
			Error("Failed to set signed 16bit format\n");
			return false;
		}
		i = 1;	/* stereo */
		if(ioctl(s_oss_fd, SNDCTL_DSP_STEREO, &i) < 0) {
			Error("Failed to set stereo\n");
			return false;
		}
		i = s_sample_rate;
		if(ioctl(s_oss_fd, SNDCTL_DSP_SPEED, &i) < 0) {
			Error("Failed to set sample rate\n");
			return false;
		}
		Debug("Real sample rate = %d\n", i);
	}
	s_buffer = malloc(s_sample_rate * 4 / MUNT_RENDER_RATE);
	Timer_Add(munt_tick, 1000000 / MUNT_RENDER_RATE, false);
#endif
	return true;
}

void midi_uninit(void)
{
#ifdef PULSEAUDIO
	pa_stream_disconnect(s_stream);
	pa_stream_unref(s_stream);
	s_stream = NULL;
#elif defined(KAI)
	kaiClose(s_hkai);
	s_hkai = NULLHANDLE;

	kaiDone();
#else
	Timer_Remove(munt_tick);
#endif
	mt32emu_close_synth(s_context);
	mt32emu_free_context(s_context);
	s_context = NULL;
	free(s_buffer);
	s_buffer = NULL;
#if !defined(PULSEAUDIO) && !defined(KAI)
	if(s_oss_fd >= 0) {
		close(s_oss_fd);
		s_oss_fd = -1;
	}
#endif
}

/**
 * Sends a midi command
 *
 * @param data The data to send in "packed" format, ie status | (data1 << 8) | (data2 << 16) */
void midi_send(uint32 data)
{
	mt32emu_return_code ret;

	ret = mt32emu_play_msg(s_context, data);
	if (ret != MT32EMU_RC_OK) Warning("mt32emu_play_msg() error %d\n", (int)ret);
}

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	mt32emu_return_code ret;

	ret = mt32emu_play_sysex(s_context, data, len);
	if (ret != MT32EMU_RC_OK) {
		Warning("mt32emu_play_sysex() error %d\n", (int)ret);
		return 0;
	}
	return len;
}

void midi_reset(void)
{
}

#ifdef PULSEAUDIO
static void munt_stream_overflow_cb(pa_stream *p, void *userdata)
{
	VARIABLE_NOT_USED(userdata);
	VARIABLE_NOT_USED(p);

	Debug("munt_stream_overflow_cb()\n");
}

static void munt_stream_underflow_cb(pa_stream *p, void *userdata)
{
	void * data = NULL;
	size_t nbytes = 32000;
	VARIABLE_NOT_USED(userdata);

	pa_stream_begin_write(p, &data, &nbytes);
	memset(data, 0, nbytes);
	Debug("munt_stream_underflow_cb() writing %u blank samples\n", nbytes / 4);
	if(pa_stream_write(p, data, nbytes, NULL, 0, PA_SEEK_RELATIVE) < 0) {
		Warning("munt_stream_underflow_cb() pa_stream_write() failed\n");
	}
}

static void munt_stream_write_cb(pa_stream *p, size_t nbytes, void *userdata)
{
	unsigned nsamples;
	void * data = NULL;
	VARIABLE_NOT_USED(userdata);

	/*Debug("munt_stream_write_cb() nbytes=%u\n", (unsigned)nbytes);*/
	if(s_context != NULL) {
		nbytes = nbytes & ~3;
		pa_stream_begin_write(p, &data, &nbytes);
		/*Debug("munt_stream_write_cb() data=%p nbytes=%u\n", data, (unsigned)nbytes);*/
		nsamples = nbytes / 4;
		mt32emu_render_bit16s(s_context, data, nsamples);
		if(pa_stream_write(p, data, nsamples * 4, NULL, 0, PA_SEEK_RELATIVE) < 0) {
			Warning("munt_stream_write_cb() pa_stream_write() failed\n");
		}
	}
}

static void munt_stream_state_cb(pa_stream *p, void *userdata)
{
	pa_stream_state_t state = pa_stream_get_state(p);
	VARIABLE_NOT_USED(userdata);

	Debug("munt_stream_state_cb() state = %d\n", (int)state);
	switch(state) {
	case PA_STREAM_READY:
		Debug("  PA_STREAM_READY\n");
		break;
	case PA_STREAM_FAILED:
		Warning("  PA_STREAM_FAILED\n");
		break;
	case PA_STREAM_TERMINATED:
		Debug("  PA_STREAM_TERMINATED\n");
		break;
	case PA_STREAM_UNCONNECTED:
		Debug("  PA_STREAM_UNCONNECTED\n");
		break;
	case PA_STREAM_CREATING:
		Debug("  PA_STREAM_CREATING\n");
		break;
	}
}

#elif defined(KAI)
static APIRET APIENTRY munt_cb(PVOID userData, PVOID buffer, ULONG size)
{
	VARIABLE_NOT_USED(userData);

	mt32emu_render_bit16s(s_context, buffer, size / 4);

	return size;
}

#else
/* OSS */
static void munt_tick(void)
{
	ssize_t n;
	if(s_context != NULL && s_buffer != NULL) {
		mt32emu_render_bit16s(s_context, s_buffer, s_sample_rate / MUNT_RENDER_RATE);
		if(s_oss_fd >= 0) {
			n = write(s_oss_fd, s_buffer, (s_sample_rate * 4) / MUNT_RENDER_RATE);
			if(n < 0) {
				Warning("munt_tick() write() : %s\n", strerror(errno));
			} else if(n != (s_sample_rate * 4) / MUNT_RENDER_RATE) {
				Debug("write(%lu) returned %lu\n", (unsigned long)((s_sample_rate * 4) / MUNT_RENDER_RATE), (unsigned long)n);
			}
		}
	}
}
#endif
