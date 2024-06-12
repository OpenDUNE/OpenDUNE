/** @file src/audio/midi_fluid.c Fluid Sync implementation of the MIDI. */

#ifndef __FreeBSD__
#include <alloca.h>
#endif /* __FreeBSD__ */

#include <fluidsynth.h>

#if (FLUIDSYNTH_VERSION_MAJOR << 16) + FLUIDSYNTH_VERSION_MINOR < 0x00010001
#define FLUID_OK		(0)
#define FLUID_FAILED	(-1)
#endif

#include "types.h"
#include "../os/error.h"
#include "../inifile.h"

#include "midi.h"

static fluid_settings_t *settings = NULL;
static fluid_synth_t *synth = NULL;
static fluid_audio_driver_t* adriver = NULL;

bool midi_init(void)
{
	char drivername[16];
	char sfont[512];
	int sfont_id;

	settings = new_fluid_settings ();
	if (settings == NULL) {
		Error("Failed to create FluidSynth settings.\n");
		goto err;
	}

	synth = new_fluid_synth(settings);
	if (synth == NULL) {
		Error("Failed to create FluidSynth MIDI synthesizer.\n");
		goto err;
	}

	if (IniFile_GetString("fs_soundfont", NULL, sfont, sizeof(sfont)) == NULL) {
#if (FLUIDSYNTH_VERSION_MAJOR << 16) + FLUIDSYNTH_VERSION_MINOR >= 0x00010001
		if (fluid_settings_copystr(settings, "synth.default-soundfont", sfont, sizeof(sfont)) != FLUID_OK) {
			Error("Failed to get FluidSynth sound font.\n");
			sfont[0] = '\0';
		}
#endif
	}
	sfont_id = fluid_synth_sfload(synth, sfont, 1);
	if(sfont_id == FLUID_FAILED) {
		Error("Failed to load the FluidSynth sound font %s.\n", sfont);
		goto err;
	}

	if (IniFile_GetString("fs_audiodriver", NULL, drivername, sizeof(drivername)) != NULL) {
		fluid_settings_setstr(settings, "audio.driver", drivername);
	}

	adriver = new_fluid_audio_driver(settings, synth);
	if (adriver == NULL) {
		Error("Can't create FluidSynth audio driver\n");
		goto err;
	}

	return true;
err:
	midi_uninit();
	return false;
}

void midi_uninit(void)
{
	if (adriver != NULL) {
		delete_fluid_audio_driver(adriver);
		adriver = NULL;
	}
	if (synth != NULL) {
		delete_fluid_synth(synth);
		synth = NULL;
	}
	if (settings != NULL) {
		delete_fluid_settings(settings);
		settings = NULL;
	}
}

void midi_send(uint32 data)
{
	if (synth == NULL) return;

#define msg1 ((data >> 8) & 0xFF)
#define msg2 ((data >> 16) & 0xFF)
#define chanID (data & 0x0F)
	switch (data & 0xF0) {
	case 0x80:
		fluid_synth_noteoff(synth, chanID, msg1);
		break;
	case 0x90:
		fluid_synth_noteon(synth, chanID, msg1, msg2);
		break;
	case 0xB0:
		fluid_synth_cc(synth, chanID, msg1, msg2);
		break;
	case 0xC0:
		fluid_synth_program_change(synth, chanID, msg1);
		break;
	case 0xD0:
		fluid_synth_channel_pressure(synth, chanID, msg1);
		break;
	case 0xE0:
		fluid_synth_pitch_bend(synth, chanID, msg1 | (msg2 << 7));
		break;
	default:
		Warning("Unknown MIDI command: 0x%02x 0x%02x 0x%02x\n", data & 0xF0, msg1, msg2);
		break;
	}
#undef msg1
#undef msg2
#undef chanID
}

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	if (synth == NULL) return len;

#if (FLUIDSYNTH_VERSION_MAJOR << 16) + FLUIDSYNTH_VERSION_MINOR >= 0x00010001
	if (fluid_synth_sysex(synth, (const char*) data, len, NULL, NULL, NULL, 0) != FLUID_OK) {
		Error("fluid_synth_sysex() failed\n");
		return 0;
	}
#endif

	return len;
}

void midi_reset(void)
{
	if (synth == NULL) return;

	fluid_synth_system_reset(synth);
}
