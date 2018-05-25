/* AudioUnit */

#if defined(__ALTIVEC__) && !defined(MAC_OS_X_VERSION_10_5)
/* to circumvent a bug in Mac OS X 10.4 SDK */
#define vector __vector
#include <CoreServices/CoreServices.h>
#undef vector
#endif
#include <AudioUnit/AudioUnit.h>

#include "types.h"
#include "dsp.h"
#include "../os/error.h"
#include "../os/endian.h"

static AudioUnit outputAudioUnit;

uint32 remaining_len = 0;
const uint8 * current_data;

static OSStatus audioCallback(void                       *inRefCon,
                              AudioUnitRenderActionFlags *ioActionFlags,
                              const AudioTimeStamp       *inTimeStamp,
                              UInt32                     inBusNumber,
                              UInt32                     inNumberFrames,
                              AudioBufferList            *ioData)
{
	UInt32 i, len;
	char * ptr;

	Debug("audioCallback(%p, %p, %p, %u, %u, %p)\n",
	      inRefCon, ioActionFlags, inTimeStamp, (unsigned)inBusNumber, (unsigned)inNumberFrames, ioData);
	for (i = 0; i < ioData->mNumberBuffers; i++) {
		len = ioData->mBuffers[i].mDataByteSize;
		ptr = ioData->mBuffers[i].mData;
		if (remaining_len == 0 || i > 0) {
			memset(ptr, 0x80, len);
		} else if (remaining_len < len) {
			memcpy(ptr, current_data, remaining_len);
			ptr += remaining_len;
			len -= remaining_len;
			remaining_len = 0;
			memset(ptr, 0x80, len);
		} else {
			memcpy(ptr, current_data, len);
			remaining_len -= len;
			current_data += len;
		}
	}
	return noErr;
}

void DSP_Play(const uint8 *data)
{
	AudioStreamBasicDescription format;
	UInt32 size = sizeof(format);
	OSStatus err;
	uint32 len;

	DSP_Stop();

	format.mChannelsPerFrame = 1;	/* MONO */
	/*format.mChannelsPerFrame = 2;*/	/* STEREO */
	format.mFormatID = kAudioFormatLinearPCM;
	format.mFormatFlags = kLinearPCMFormatFlagIsPacked | kLinearPCMFormatFlagIsBigEndian;
	format.mBitsPerChannel = 8;
	format.mFramesPerPacket = 1;
	format.mBytesPerFrame = format.mBitsPerChannel * format.mChannelsPerFrame / 8;
	format.mBytesPerPacket = format.mBytesPerFrame * format.mFramesPerPacket;

	data += READ_LE_UINT16(data + 20);  /* skip Create Voice File header */
	len = (READ_LE_UINT32(data) >> 8) - 2;
	data += 4;

	format.mSampleRate = 1000000 / (256 - data[0]);
	data += 2;

    /* Set the input format of the audio unit. */
	err = AudioUnitSetProperty(outputAudioUnit,
					kAudioUnitProperty_StreamFormat, kAudioUnitScope_Input,
					0, &format, sizeof(format));
	if (err != noErr) Warning("AudioUnitSetProperty(kAudioUnitProperty_StreamFormat) failed\n");

	current_data = data;
	remaining_len = len;

	err = AudioOutputUnitStart (outputAudioUnit);
	if (err != noErr) Warning("AudioOutputUnitStart() failed\n");
}

void DSP_Stop(void)
{
	OSStatus result = AudioOutputUnitStop (outputAudioUnit);
	if (result != noErr) Warning("AudioOutputUnitStop() failed\n");
}

uint8 DSP_GetStatus(void)
{
	if (remaining_len > 0) return 2;	/* playing */
	return 0;	/* not playing */
}

bool DSP_Init(void)
{
	OSStatus result = noErr;
	Component comp;
	ComponentDescription desc;
	struct AURenderCallbackStruct callback;

	/* Locate the default output audio unit */
	desc.componentType = kAudioUnitType_Output;
	desc.componentSubType = kAudioUnitSubType_DefaultOutput;
	desc.componentManufacturer = kAudioUnitManufacturer_Apple;
	desc.componentFlags = 0;
	desc.componentFlagsMask = 0;

	comp = FindNextComponent (NULL, &desc);
	if (comp == NULL) {
		Warning("Failed to start CoreAudio: FindNextComponent returned NULL\n");
		return false;
	}

	result = OpenAComponent (comp, &outputAudioUnit);
	if (result != noErr) {
		Warning("OpenAComponent() failed\n");
		return false;
	}
	result = AudioUnitInitialize (outputAudioUnit);
	if (result != noErr) {
		Warning("AudioUnitInitialize() failed\n");
		return false;
	}

	/* Set the audio callback */
	callback.inputProc = audioCallback;
	callback.inputProcRefCon = NULL;
	result = AudioUnitSetProperty(outputAudioUnit,
			kAudioUnitProperty_SetRenderCallback, kAudioUnitScope_Input,
			0, &callback, sizeof(callback));
	if (result != noErr) {
		Warning("AudioUnitSetProperty(kAudioUnitProperty_SetRenderCallback) failed\n");
		return false;
	}

	return true;
}

void DSP_Uninit(void)
{
	OSStatus result = noErr;
	struct AURenderCallbackStruct callback;

	DSP_Stop();

	/* Remove the input callback */
	callback.inputProc = 0;
	callback.inputProcRefCon = 0;
	result = AudioUnitSetProperty(outputAudioUnit,
			kAudioUnitProperty_SetRenderCallback, kAudioUnitScope_Input,
			0, &callback, sizeof(callback));
	if (result != noErr) {
		Warning("AudioUnitSetProperty(kAudioUnitProperty_SetInputCallback) failed\n");
	}

	result = CloseComponent(outputAudioUnit);
	if (result != noErr) {
		Warning("CloseComponent() failed\n");
	}
}
