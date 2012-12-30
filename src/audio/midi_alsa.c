/** @file src/audio/midi_alsa.c ALSA implementation of the MIDI. It tries to
 *  find an output port which understands MIDI. If that fails, it suggests using
 *  Timidity++ for that job. */

#include <alloca.h>
#include <alsa/asoundlib.h>
#include "types.h"
#include "../os/error.h"

#include "midi.h"

static snd_seq_t *s_midi = NULL;
static snd_midi_event_t *s_midiCoder = NULL;
static snd_seq_port_subscribe_t *s_midiSubscription = NULL;
static int s_midiPort = -1;

static const char *s_midiCaption = "OpenDUNE MIDI Port";

bool midi_init(void)
{
	snd_seq_addr_t sender, receiver;
	snd_seq_port_info_t *pinfo;
	snd_seq_client_info_t *cinfo;
	bool found = false;

	if (snd_seq_open(&s_midi, "default", SND_SEQ_OPEN_OUTPUT, 0) < 0) {
		Error("Failed to initialize MIDI\n");
		s_midi = NULL;
		return false;
	}
	snd_seq_set_client_name(s_midi, s_midiCaption);

	/* Create a port to work on */
	s_midiPort = snd_seq_create_simple_port(s_midi, s_midiCaption, SND_SEQ_PORT_CAP_READ | SND_SEQ_PORT_CAP_SUBS_READ, SND_SEQ_PORT_TYPE_MIDI_GENERIC);
	if (s_midiPort < 0) {
		Error("Failed to initialize MIDI\n");
		snd_seq_close(s_midi);
		s_midi = NULL;
		return false;
	}

	/* Try to find a MIDI out */
	snd_seq_port_info_alloca(&pinfo);
	snd_seq_client_info_alloca(&cinfo);
	snd_seq_client_info_set_client(cinfo, -1);

	/* Walk all clients and ports, and see if one matches our demands */
	while (snd_seq_query_next_client(s_midi, cinfo) >= 0 && !found) {
		int client;

		client = snd_seq_client_info_get_client(cinfo);
		if (client == 0) continue;

		snd_seq_port_info_set_client(pinfo, client);
		snd_seq_port_info_set_port(pinfo, -1);
		while (snd_seq_query_next_port(s_midi, pinfo) >= 0) {
			if ((snd_seq_port_info_get_capability(pinfo) & (SND_SEQ_PORT_CAP_WRITE | SND_SEQ_PORT_CAP_SUBS_WRITE)) != (SND_SEQ_PORT_CAP_WRITE | SND_SEQ_PORT_CAP_SUBS_WRITE)) continue;
			/* Most linux installations come with a Midi Through Port.
			 *  This is 'hardware' support that mostly ends up on your serial, which
			 *  you most likely do not have connected. So we skip it by default. */
			if (strncmp("Midi Through Port", snd_seq_port_info_get_name(pinfo), 17) == 0) continue;
			found = true;
			break;
		}
	}

	if (!found) {
		Error("No valid MIDI output ports.\n  Please install and start Timidity++ like: timidity -iA\n");
		snd_seq_delete_port(s_midi, s_midiPort);
		snd_seq_close(s_midi);
		s_midi = NULL;
		return false;
	}

	/* Subscribe ourself to the port */
	receiver.client = snd_seq_port_info_get_client(pinfo);
	receiver.port = snd_seq_port_info_get_port(pinfo);
	sender.client = snd_seq_client_id(s_midi);
	sender.port = s_midiPort;

	snd_seq_port_subscribe_malloc(&s_midiSubscription);
	snd_seq_port_subscribe_set_sender(s_midiSubscription, &sender);
	snd_seq_port_subscribe_set_dest(s_midiSubscription, &receiver);
	snd_seq_port_subscribe_set_time_update(s_midiSubscription, 1);
	snd_seq_port_subscribe_set_time_real(s_midiSubscription, 1);
	if (snd_seq_subscribe_port(s_midi, s_midiSubscription) < 0) {
		Error("Failed to subscript to MIDI output\n");
		snd_seq_delete_port(s_midi, s_midiPort);
		snd_seq_close(s_midi);
		s_midi = NULL;
		return false;
	}

	/* Start the MIDI decoder */
	if (snd_midi_event_new(4, &s_midiCoder) < 0) {
		Error("Failed to initialize MIDI decoder\n");
		snd_seq_delete_port(s_midi, s_midiPort);
		snd_seq_close(s_midi);
		s_midi = NULL;
		return false;
	}
	snd_midi_event_init(s_midiCoder);

	return true;
}

void midi_uninit(void)
{
	if (s_midi == NULL) return;

	snd_midi_event_free(s_midiCoder);
	snd_seq_port_subscribe_free(s_midiSubscription);
	snd_seq_delete_port(s_midi, s_midiPort);
	snd_seq_close(s_midi);

	s_midi = NULL;
}

void midi_send(uint32 data)
{
	snd_seq_event_t ev;

	if (s_midi == NULL) return;

	snd_seq_ev_clear(&ev);
	snd_seq_ev_set_source(&ev, s_midiPort);
	snd_seq_ev_set_subs(&ev);
	snd_seq_ev_set_direct(&ev);

	snd_midi_event_encode(s_midiCoder, (uint8 *)&data, sizeof(uint32), &ev);

	snd_seq_event_output(s_midi, &ev);
	snd_seq_drain_output(s_midi);
}

void midi_reset(void)
{
	if (s_midi == NULL) return;

	snd_midi_event_reset_encode(s_midiCoder);
}
