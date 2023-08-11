/** @file src/audio/midi_fluid.c Fluid Sync implementation of the MIDI. */

#ifndef __FreeBSD__
#include <alloca.h>
#endif /* __FreeBSD__ */

#include <fluidsynth.h>

#include "types.h"
#include "../os/error.h"

#include "midi.h"


static fluid_settings_t *settings = NULL;
static fluid_synth_t *synth = NULL;
static fluid_audio_driver_t* adriver = NULL;



bool midi_init(void)
{
	char *defstr;

	settings = new_fluid_settings ();

	synth = new_fluid_synth(settings);
	fluid_settings_setstr(settings, "audio.driver", "alsa");

	if (!synth) {
		Error("Can't open MIDI synthesizer\n");
		delete_fluid_settings(settings);
		settings = NULL;
		return false;
	}

	fluid_settings_getstr_default(settings, "synth.default-soundfont", &defstr);
	fluid_synth_sfload(synth, defstr, 1);

	adriver = new_fluid_audio_driver(settings, synth);
	if (!adriver) {
		Error("Can't create MIDI audio driver\n");
		delete_fluid_synth(synth);
		synth = NULL;

		delete_fluid_settings(settings);
		settings = NULL;
		return false;
	}

	return true;
}

void midi_uninit(void)
{
	if (adriver == NULL) return;

	delete_fluid_audio_driver(adriver);
	adriver = NULL;

	delete_fluid_synth(synth);
	synth = NULL;

	delete_fluid_settings(settings);
	settings = NULL;
}

static inline void midi_send_ex(uint8 *msg) {
	uint8 chanID = msg[0] & 0x0F;

	switch (msg[0] & 0xF0) {
	case 0x80:
		fluid_synth_noteoff(synth, chanID, msg[1]);
		break;
	case 0x90:
		fluid_synth_noteon(synth, chanID, msg[1], msg[2]);
		break;
	case 0xB0:
		fluid_synth_cc(synth, chanID, msg[1], msg[2]);
		break;
	case 0xC0:
		fluid_synth_program_change(synth, chanID, msg[1]);
		break;
	case 0xD0:
		fluid_synth_channel_pressure(synth, chanID, msg[1]);
		break;
	case 0xE0: {
		long theBend = ((long) msg[1] + (long) (msg[2] << 7));
		fluid_synth_pitch_bend(synth, chanID, theBend);
	}
		break;
	default:
		Warning("Unknown MIDI command: %d\n", msg[0] & 0xF0);
		break;
	}
}

void midi_send(uint32 data)
{
	if (adriver == NULL) return;

	midi_send_ex((uint8 *)&data);
}

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	if (adriver == NULL) return len;

	fluid_synth_sysex(synth, (char*) data, len, NULL, NULL, NULL, 0);

	return len;
}

void midi_reset(void)
{
	if (adriver == NULL) return;

	fluid_synth_system_reset(synth);
}
