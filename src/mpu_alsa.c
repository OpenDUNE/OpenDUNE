/* $Id$ */

#include <stdio.h>

/* ALSA implementation of the MPU. It tries to find an output port which
 *  understands MIDI. If that fails, it suggests using Timidity++ for that
 *  job. */
#if defined(MPU_ALSA)

#include <alloca.h>
#include <alsa/asoundlib.h>
#include "types.h"
#include "mpu.h"

static snd_seq_t *_midi = NULL;
static snd_midi_event_t *_midiCoder = NULL;
static int _midiPort = -1;
static snd_seq_port_subscribe_t *_midiSubscription = NULL;

extern char *s_mpu_caption;

void mpu_init() {
	snd_seq_addr_t sender, receiver;
	snd_seq_port_info_t *pinfo;
	snd_seq_client_info_t *cinfo;
	bool found = false;

	if (snd_seq_open(&_midi, "default", SND_SEQ_OPEN_OUTPUT, 0) < 0) {
		fprintf(stderr, "Failed to initialize MPU\n");
		_midi = NULL;
		return;
	}
	snd_seq_set_client_name(_midi, s_mpu_caption);

	/* Create a port to work on */
	_midiPort = snd_seq_create_simple_port(_midi, s_mpu_caption, SND_SEQ_PORT_CAP_READ | SND_SEQ_PORT_CAP_SUBS_READ, SND_SEQ_PORT_TYPE_MIDI_GENERIC);
	if (_midiPort < 0) {
		fprintf(stderr, "Failed to initialize MPU\n");
		snd_seq_close(_midi);
		_midi = NULL;
		return;
	}

	/* Try to find a MIDI out */
	snd_seq_port_info_alloca(&pinfo);
	snd_seq_client_info_alloca(&cinfo);
	snd_seq_client_info_set_client(cinfo, -1);

	/* Walk all clients and ports, and see if one matches our demands */
	while (snd_seq_query_next_client(_midi, cinfo) >= 0 && !found) {
		int client;

		client = snd_seq_client_info_get_client(cinfo);
		if (client == 0) continue;

		snd_seq_port_info_set_client(pinfo, client);
		snd_seq_port_info_set_port(pinfo, -1);
		while (snd_seq_query_next_port(_midi, pinfo) >= 0) {
			if ((snd_seq_port_info_get_capability(pinfo) & (SND_SEQ_PORT_CAP_WRITE | SND_SEQ_PORT_CAP_SUBS_WRITE)) != (SND_SEQ_PORT_CAP_WRITE | SND_SEQ_PORT_CAP_SUBS_WRITE)) continue;
			printf("Found MIDI output: %s\n", snd_seq_port_info_get_name(pinfo));
			found = true;
			break;
		}
	}

	if (!found) {
		fprintf(stderr, "No valid MIDI output ports.\n  Please install and start Timidity++ like: timidity -iA\n");
		snd_seq_delete_port(_midi, _midiPort);
		snd_seq_close(_midi);
		_midi = NULL;
		return;
	}

	/* Subscribe ourself to the port */
	receiver.client = snd_seq_port_info_get_client(pinfo);
	receiver.port = snd_seq_port_info_get_port(pinfo);
	sender.client = snd_seq_client_id(_midi);
	sender.port = _midiPort;

	snd_seq_port_subscribe_malloc(&_midiSubscription);
	snd_seq_port_subscribe_set_sender(_midiSubscription, &sender);
	snd_seq_port_subscribe_set_dest(_midiSubscription, &receiver);
	snd_seq_port_subscribe_set_time_update(_midiSubscription, 1);
	snd_seq_port_subscribe_set_time_real(_midiSubscription, 1);
	if (snd_seq_subscribe_port(_midi, _midiSubscription) < 0) {
		fprintf(stderr, "Failed to subscript to MIDI output\n");
		snd_seq_delete_port(_midi, _midiPort);
		snd_seq_close(_midi);
		_midi = NULL;
		return;
	}

	/* Start the MIDI decoder */
	if (snd_midi_event_new(4, &_midiCoder) < 0) {
		fprintf(stderr, "Failed to initialize MIDI decoder\n");
		snd_seq_delete_port(_midi, _midiPort);
		snd_seq_close(_midi);
		_midi = NULL;
		return;
	}
	snd_midi_event_init(_midiCoder);
}

void mpu_uninit() {
	if (_midi == NULL) return;

	snd_midi_event_free(_midiCoder);
	snd_seq_delete_port(_midi, _midiPort);
	snd_seq_close(_midi);

	_midi = NULL;
}

void mpu_send(uint32 data)
{
	snd_seq_event_t ev;

	if (_midi == NULL) return;

	snd_seq_ev_clear(&ev);
	snd_seq_ev_set_source(&ev, _midiPort);
	snd_seq_ev_set_subs(&ev);
	snd_seq_ev_set_direct(&ev);

	snd_midi_event_encode(_midiCoder, (uint8 *)&data, sizeof(uint32), &ev);

	snd_seq_event_output(_midi, &ev);
	snd_seq_drain_output(_midi);
}

void mpu_reset()
{
	if (_midi == NULL) return;

	snd_midi_event_reset_encode(_midiCoder);
}

#endif /* MPU_ALSA */
