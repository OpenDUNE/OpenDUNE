/** @file src/audio/midi_munt.c use the MT32 emulator MUNT */

#include <mt32emu/mt32emu.h>
#include <stdlib.h>

/* OSS API */
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/soundcard.h>

#include <string.h>
#include <errno.h>

#define AUDIO_DEVICE "/dev/dsp"

#include "types.h"
#include "midi.h"
#include "../timer.h"
#include "../inifile.h"
#include "../os/strings.h"
#include "../os/error.h"

#define MUNT_RENDER_RATE 50

static int s_oss_fd = -1;

static void munt_tick(void);

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
	char rompath[1024];
	char romfile[1024];
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
	return true;
}

void midi_uninit(void)
{
	Timer_Remove(munt_tick);
	mt32emu_close_synth(s_context);
	mt32emu_free_context(s_context);
	s_context = NULL;
	free(s_buffer);
	s_buffer = NULL;
	if(s_oss_fd >= 0) {
		close(s_oss_fd);
		s_oss_fd = -1;
	}
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
				Warning("write() returned %lu\n", (unsigned long)n);
			}
		}
	}
}
