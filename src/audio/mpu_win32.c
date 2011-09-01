/* $Id$ */

/* Windows implementation of the MPU. Uses midiOut functions from the Windows
 *  API, which contain a softsynth and handles all MIDI output for us. */

#include <stdio.h>
#include <windows.h>
#include "types.h"
#include "mpu.h"

static HMIDIOUT s_midi = NULL;

bool mpu_init()
{
	if (midiOutOpen(&s_midi, 0, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
		fprintf(stderr, "Failed to initialize MPU\n");
		s_midi = NULL;
		return false;
	}

	return true;
}

void mpu_uninit()
{
	if (s_midi == NULL) return;

	midiOutReset(s_midi);
	midiOutClose(s_midi);

	s_midi = NULL;
}

void mpu_send(uint32 data)
{
	if (s_midi == NULL) return;

	midiOutShortMsg(s_midi, data);
}

void mpu_reset()
{
	if (s_midi == NULL) return;

	midiOutReset(s_midi);
}
