/** @file src/audio/midi_osx.c Mac OS X implementation of the MIDI.
 * See PlaySoftMIDI example from the OS X SDK. */

#include "types.h"
#include <AudioUnit/AudioUnit.h>
#include <AudioToolbox/AudioToolbox.h>
#include "midi.h"

#if defined(AUDIO_TOOLBOX_VERSION) && (AUDIO_TOOLBOX_VERSION >= 0x0105)
/* Use the new functions in favor of deprecated ones from OS X 10.5 onward */
#define ComponentDescription AudioComponentDescription
#define AUGraphNewNode(graph, desc, size, data, node) AUGraphAddNode(graph, desc, node)
#define AUGraphGetNodeInfo(graph, node, desc, size, data, unit) AUGraphNodeInfo(graph, node, desc, unit)
#endif

static AUGraph s_graph = 0;
static AudioUnit s_synthUnit;

/* This call creates the Graph and the Synth unit... */
static OSStatus CreateAUGraph(void)
{
	OSStatus result;
	/* Create the nodes of the graph */
	AUNode synthNode, limiterNode, outNode;
	ComponentDescription cd;

	cd.componentManufacturer = kAudioUnitManufacturer_Apple;
	cd.componentFlags = 0;
	cd.componentFlagsMask = 0;

	result = NewAUGraph(&s_graph);
	if (result != 0) return result;

	cd.componentType = kAudioUnitType_MusicDevice;
	cd.componentSubType = kAudioUnitSubType_DLSSynth;
	result = AUGraphNewNode(s_graph, &cd, 0, NULL, &synthNode);
	if (result != 0) return result;

	cd.componentType = kAudioUnitType_Effect;
	cd.componentSubType = kAudioUnitSubType_PeakLimiter;
	result = AUGraphNewNode(s_graph, &cd, 0, NULL, &limiterNode);
	if (result != 0) return result;

	cd.componentType = kAudioUnitType_Output;
	cd.componentSubType = kAudioUnitSubType_DefaultOutput;
	result = AUGraphNewNode(s_graph, &cd, 0, NULL, &outNode);
	if (result != 0) return result;

	result = AUGraphOpen(s_graph);
	if (result != 0) return result;

	result = AUGraphConnectNodeInput(s_graph, synthNode, 0, limiterNode, 0);
	if (result != 0) return result;
	result = AUGraphConnectNodeInput(s_graph, limiterNode, 0, outNode, 0);
	if (result != 0) return result;

	/* Ok we're good to go - get the Synth Unit... */
	result = AUGraphGetNodeInfo(s_graph, synthNode, 0, 0, 0, &s_synthUnit);
	return result;
}

bool midi_init(void)
{
	OSStatus result;
	result = CreateAUGraph();
	if (result != 0) return false;
	result = AUGraphInitialize(s_graph);
	if (result != 0) return false;
	result = AUGraphStart(s_graph);
	if (result != 0) return false;
	return true;
}

void midi_uninit(void)
{
	if (s_graph == 0) return;

	AUGraphStop(s_graph);
	DisposeAUGraph(s_graph);
	s_graph = 0;
}

/**
 * Sends a midi command
 *
 * @param data The data to send in "packed" format, ie status | (data1 << 8) | (data2 << 16) */
void midi_send(uint32 data)
{
	OSStatus result;
	result = MusicDeviceMIDIEvent(s_synthUnit, data & 0xff, (data >> 8) & 0xff, (data >> 16) & 0xff, 0);
}

void midi_reset(void)
{
	if (s_graph == 0) return;

	AUGraphStop(s_graph);
	AUGraphStart(s_graph);
}
