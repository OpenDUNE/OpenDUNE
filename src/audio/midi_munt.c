/** @file src/audio/midi_munt.c use the MT32 emulator MUNT */

#include <mt32emu/mt32emu.h>

#include "types.h"
#include "midi.h"
#include "../os/error.h"

static mt32emu_context s_context = NULL;

const char * s_romfiles[] = {
	"/Users/nanard/roms/CM32L_CONTROL.1989-12-05.v1.02.ROM",
	"/Users/nanard/roms/CM32L_PCM.ROM",
	NULL
};

bool midi_init(void)
{
	int i;
	mt32emu_report_handler_i handler = { NULL };

	Debug("munt version : %s\n", mt32emu_get_library_version_string());
	s_context = mt32emu_create_context(handler, NULL);
	if (s_context == NULL) return false;
	for (i = 0; s_romfiles[i] != NULL; i++) {
		mt32emu_return_code ret = mt32emu_add_rom_file(s_context, s_romfiles[i]);
		if (ret < MT32EMU_RC_OK) {
			Error("Failed to load MT32 ROM file '%s' error %d\n", s_romfiles[i], (int)ret);
			return false;
		}
	}
	if (mt32emu_open_synth(s_context) != MT32EMU_RC_OK) {
		Error("Failed to open synth\n");
		return false;
	}
	return true;
}

void midi_uninit(void)
{
	mt32emu_close_synth(s_context);
	mt32emu_free_context(s_context);
	s_context = NULL;
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


