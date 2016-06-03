/** @file src/audio/midi_atari.c ATARI ST/TT/Falcon implementation of the MIDI
 *  send directly MIDI data to the MIDI Out port */

#include <mint/ostruct.h>
#include <mint/osbind.h>

#include "types.h"
#include "midi.h"
#include "../os/error.h"

bool midi_init(void)
{
	return true;
}

void midi_uninit(void)
{
}

/**
 * Sends a midi command
 *
 * @param data The data to send in "packed" format, ie status | (data1 << 8) | (data2 << 16) */
void midi_send(uint32 data)
{
	uint8 status = data & 0xff;
	uint8 data1 = (data >> 8) & 0xff;
	uint8 data2 = (data >> 16) & 0xff;
	Bconout(DEV_MIDI, status);
	switch(status & 0xF0) {
	case 0x80:		/* Note Off */
	case 0x90:		/* Note On */
	case 0xA0:		/* Polyphonic key pressure / aftertouch */
	case 0xB0:		/* Control change */
	case 0xE0:		/* Pitch bend change */
		/* 2 data bytes */
		Bconout(DEV_MIDI, data1);
		Bconout(DEV_MIDI, data2);
		break;
	case 0xC0:		/* Program change */
	case 0xD0:		/* Channel pressure / aftertouch */
		/* only 1 data byte */
		Bconout(DEV_MIDI, data1);
		break;
	case 0xF0:
		switch(status & 0x0F) {
		case 0x0: /* System Exclusive */
			/* TODO */
			Warning("System Exclusive MIDI msg : %02X (%02X %02X %02X)\n",
			        status, data1, data2);
			break;
		case 0x1:	/* System Common : MIDI Time code Quarter Frame */
		case 0x3:	/* System Common : Song Select */
			/* only 1 data byte */
			Bconout(DEV_MIDI, data1);
			break;
		case 0x2:	/* System Common : Song position pointer */
			/* 2 data bytes */
			Bconout(DEV_MIDI, data1);
			Bconout(DEV_MIDI, data2);
			break;
		case 0x6:	/* System Common : Tune Request */
		case 0x7:	/* System Common : EOX : "end of system exclusive" flag */
		case 0x8:	/* System Real Time : Timing Clock*/
		case 0x9:	/* System Real Time : Undefined */
		case 0xA:	/* System Real Time : Start */
		case 0xB:	/* System Real Time : Continue */
		case 0xC:	/* System Real Time : Stop */
		case 0xD:	/* System Real Time : Undefined */
		case 0xE:	/* System Real Time : Active Sensing */
		case 0xF:	/* System Real Time : System Reset */
			/* No data byte */
			break;
		default:	/* undefined */
			Warning("undefined MIDI message %02X (%02X %02X)\n",
			        status, data1, data2);
		}
		break;
	default:
		Warning("wrong status byte %02X in MIDI message %02X %02X %02X\n",
		        status, status, data1, data2);
	}
}

uint16 midi_send_string(const uint8 * data, uint16 len)
{
	uint16 i;
	for (i = 0; i < len; i++) {
		Bconout(DEV_MIDI, data[i]);
	}
	return len;
}

void midi_reset(void)
{
}


