/** @file src/audio/midi_win32.c Windows implementation of the MIDI. Uses
 *  midiOut functions from the Windows API, which contain a softsynth and
 *  handles all MIDI output for us. */

#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include "types.h"
#include "../os/error.h"
#include "../inifile.h"
#include "midi.h"

static HMIDIOUT s_midi = NULL;

bool midi_init(void)
{
	uint32 devID = 0;
	uint32 i;
	uint32 numDevs = midiOutGetNumDevs();

	if (IniFile_GetInteger("mt32midi", 0) != 0) {
		for (i = 0; i < numDevs; i++) {
			MIDIOUTCAPS caps;
			if (midiOutGetDevCaps(i, &caps, sizeof(caps)) == MMSYSERR_NOERROR) {
				Debug("MidiOutdevice #%u: %04hx:%04hx v%u.%u voices=%hu notes=%hu channels=%04hx %s\n",
					i, caps.wMid, caps.wPid, caps.vDriverVersion >> 8, caps.vDriverVersion & 0xff,
					caps.wVoices, caps.wNotes, caps.wChannelMask,
					caps.szPname);
				/* select this device if its description contains "MT-32" */
				if (strstr(caps.szPname, "MT-32") != NULL) devID = i;
			}
		}
	}

	/* No callback to process messages related to the progress of the playback */
	if (midiOutOpen(&s_midi, devID, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
		Error("Failed to initialize MIDI (Device ID=%u)\n", devID);
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

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	MIDIHDR hdr;
	MMRESULT res;
	if (s_midi != NULL) {
		memset(&hdr, 0, sizeof(hdr));
		hdr.lpData = (LPSTR)data;
		hdr.dwBufferLength = len;
		if (midiOutPrepareHeader(s_midi, &hdr, sizeof(hdr)) != MMSYSERR_NOERROR) {
			Error("midiOutPrepareHeader() failed\n");
		} else {
			res = midiOutLongMsg(s_midi, &hdr, sizeof(hdr));
			assert(res == MMSYSERR_NOERROR);
			if (midiOutUnprepareHeader(s_midi, &hdr, sizeof(hdr)) != MMSYSERR_NOERROR) {
				Error("midiOutUnprepareHeader() failed\n");
			}
		}
	}
	return len;
}

void midi_reset(void)
{
	if (s_midi == NULL) return;

	midiOutReset(s_midi);
}
