#include <new>

#include <midi/MidiSynth.h>

extern "C" {
#include "midi.h"
#include "../os/error.h"

static BMidiSynth *s_synth = NULL;

bool midi_init(void)
{
	s_synth = new(std::nothrow) BMidiSynth();
	if (s_synth == NULL) {
		midi_uninit();
		return false;
	}
	if (s_synth->EnableInput(true, true) != B_OK || !s_synth->IsInputEnabled()) {
		midi_uninit();
		return false;
	}
	return true;
}

void midi_uninit(void)
{
	delete s_synth;
	s_synth = NULL;
}

void midi_send(uint32 data)
{
	if (s_synth == NULL) return;

	uchar byte1 = data & 0xFF;
	uchar byte2 = (data >> 8) & 0xFF;
	uchar byte3 = (data >> 16) & 0xFF;
	uchar channel = (byte1 & 0x0F) + 1;

	switch (byte1 & 0xF0) {
		case B_NOTE_OFF:
			s_synth->NoteOff(channel, byte2, byte3);
			return;

		case B_NOTE_ON:
			s_synth->NoteOn(channel, byte2, byte3);
			return;

		case B_KEY_PRESSURE:
			s_synth->KeyPressure(channel, byte2, byte3);
			return;

		case B_CONTROL_CHANGE:
			s_synth->ControlChange(channel, byte2, byte3);
			return;

		case B_PROGRAM_CHANGE:
			s_synth->ProgramChange(channel, byte2);
			return;

		case B_CHANNEL_PRESSURE:
			s_synth->ChannelPressure(channel, byte2);
			return;

		case B_PITCH_BEND:
			s_synth->PitchBend(channel, byte2, byte3);
			return;

		case 0xF0:
			switch (byte1) {
				case B_SYS_EX_START:
					/* We don't do this here */
					Warning("Sysex MIDI through midi_send(%u)\n", data);
					return;

				case B_MIDI_TIME_CODE:
				case B_SONG_POSITION:
				case B_SONG_SELECT:
				case B_CABLE_MESSAGE:
				case B_TUNE_REQUEST:
				case B_SYS_EX_END:
					s_synth->SystemCommon(byte1, byte2, byte3);
					return;

				case B_TIMING_CLOCK:
				case B_START:
				case B_CONTINUE:
				case B_STOP:
				case B_ACTIVE_SENSING:
				case B_SYSTEM_RESET:
					s_synth->SystemRealTime(byte1);
					return;

			}
			return;
	}
}

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	if (s_synth == NULL) return len;

	/* This is only used for sysex messages */
	s_synth->SystemExclusive((void *)data, len, true);
	return len;
}

void midi_reset(void)
{
}

}
