/** @file src/audio/midi_osx.c See PlaySoftMIDI example from the OS X SDK
 */

#include "types.h"
#include <AudioUnit/AudioUnit.h>
#include <AudioToolbox/AudioToolbox.h>
/*#include "midi.h"*/

#if defined(AUDIO_TOOLBOX_VERSION) && (AUDIO_TOOLBOX_VERSION >= 0x0105)
/* Use the new functions in favor of deprecated ones from OS X 10.5 onward */
#define ComponentDescription AudioComponentDescription
#define AUGraphNewNode(graph, desc, size, data, node) AUGraphAddNode(graph, desc, node)
#define AUGraphGetNodeInfo(graph, node, desc, size, data, unit) AUGraphNodeInfo(graph, node, desc, unit)
#endif

static AUGraph graph = 0;
static AudioUnit synthUnit;

/* This call creates the Graph and the Synth unit... */
OSStatus CreateAUGraph()
{
	OSStatus result;
	/*create the nodes of the graph*/
	AUNode synthNode, limiterNode, outNode;
	ComponentDescription cd;

	cd.componentManufacturer = kAudioUnitManufacturer_Apple;
	cd.componentFlags = 0;
	cd.componentFlagsMask = 0;

	result = NewAUGraph(&graph);
	if (result != 0) return result;

	cd.componentType = kAudioUnitType_MusicDevice;
	cd.componentSubType = kAudioUnitSubType_DLSSynth;
	result = AUGraphNewNode(graph, &cd, 0, NULL, &synthNode);
	if (result != 0) return result;

	cd.componentType = kAudioUnitType_Effect;
	cd.componentSubType = kAudioUnitSubType_PeakLimiter;
	result = AUGraphNewNode(graph, &cd, 0, NULL, &limiterNode);
	if (result != 0) return result;

	cd.componentType = kAudioUnitType_Output;
	cd.componentSubType = kAudioUnitSubType_DefaultOutput;
	result = AUGraphNewNode(graph, &cd, 0, NULL, &outNode);
	if (result != 0) return result;

	result = AUGraphOpen(graph);
	if (result != 0) return result;

	result = AUGraphConnectNodeInput(graph, synthNode, 0, limiterNode, 0);
	if (result != 0) return result;
	result = AUGraphConnectNodeInput(graph, limiterNode, 0, outNode, 0);
	if (result != 0) return result;

	/* ok we're good to go - get the Synth Unit... */
	result = AUGraphGetNodeInfo(graph, synthNode, 0, 0, 0, &synthUnit);
	return result;
}

bool midi_init(void)
{
	OSStatus result;
	result = CreateAUGraph();
	if(result != 0) return false;
	result = AUGraphInitialize(graph);
	if(result != 0) return false;
	result = AUGraphStart(graph);
	if(result != 0) return false;
	return true;
}

void midi_uninit(void)
{
	if (graph) {
		AUGraphStop(graph);
		DisposeAUGraph(graph);
		graph = 0;
	}
}

/**
 * data = status | (data1 << 8) | (data2 << 16) */
void midi_send(uint32 data)
{
	OSStatus result;
	result = MusicDeviceMIDIEvent(synthUnit, data & 0xff, (data >> 8) & 0xff, (data >> 16) & 0xff, 0);
}

void midi_reset(void)
{
	if (graph) {
		AUGraphStop(graph);
		AUGraphStart(graph);
	}
}

