/** @file src/audio/midi_win32.c Windows implementation of the MIDI. Uses
 *  midiOut functions from the Windows API, which contain a softsynth and
 *  handles all MIDI output for us. */

#include <stdio.h>
#include <windows.h>
#include "types.h"
#include "../os/error.h"
#include "midi.h"

static HMIDIOUT s_midi = NULL;

bool midi_init(void)
{
	if (midiOutOpen(&s_midi, 0, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
		Error("Failed to initialize MIDI\n");
		s_midi = NULL;
		return false;
	}

	return true;
}

void midi_uninit(void)
{
	if (s_midi == NULL) return;

	midiOutReset(s_midi);
	midiOutClose(s_midi);

	s_midi = NULL;
}

void midi_send(uint32 data)
{
	if (s_midi == NULL) return;

	midiOutShortMsg(s_midi, data);
}

void midi_reset(void)
{
	if (s_midi == NULL) return;

	midiOutReset(s_midi);
}
