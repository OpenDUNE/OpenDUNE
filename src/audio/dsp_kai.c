/** @file src/audio/dsp_kai.c KAI implementation of the DSP. */

#include <assert.h>
#include <kai.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "../os/endian.h"
#include "../os/error.h"
#include "dsp.h"
#include "driver.h"

static uint8 *s_buffer;
static uint32 s_bufferLen;
static uint8 s_status;
static uint8 *s_data;
static uint32 s_dataLen;

static HKAI s_hkaiZero;
static HKAI s_hkai;

static ULONG APIENTRY DSP_ZeroCallback(PVOID userData, PVOID buffer, ULONG size)
{
	VARIABLE_NOT_USED(userData);

	memset(buffer, 0, size);	/* fill buffer with silence */
	return size;
}

static ULONG APIENTRY DSP_Callback(PVOID userData, PVOID buffer, ULONG size)
{
	VARIABLE_NOT_USED(userData);

	if (s_status == 0 || s_bufferLen == 0 || s_buffer == NULL) {
		/* no more sample to play : */
		memset(buffer, 0x80, size);	/* fill buffer with silence */
		return 0;	/* stop playback */
	}

	if (size <= s_bufferLen) {
		memcpy(buffer, s_buffer, size);
		s_bufferLen -= size;
		s_buffer += size;
	} else {
		memcpy(buffer, s_buffer, s_bufferLen);
		memset((char *)buffer + s_bufferLen, 0x80, size - s_bufferLen);	/* fill buffer end with silence */
		s_bufferLen = 0;
		s_buffer = NULL;
		s_status = 0;
	}

	return size;
}

void DSP_Stop(void)
{
	kaiClose(s_hkai);
	s_hkai = NULLHANDLE;

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
}

void DSP_Uninit(void)
{
	DSP_Stop();

	kaiClose(s_hkai);
	s_hkai = NULLHANDLE;


	free(s_data); s_data = NULL;
	s_dataLen = 0;

	kaiClose(s_hkaiZero);
	s_hkaiZero = NULLHANDLE;

	kaiDone();
}

bool DSP_Init(void)
{
	KAISPEC spec, obtained;

	if (kaiInit(KAIM_AUTO) || kaiEnableSoftMixer(TRUE, NULL)) {
		Error("DSP: kaiInit() failed!\n");
		return false;
	}

	spec.usDeviceIndex   = 0;
	spec.ulType          = KAIT_PLAY;
	spec.ulBitsPerSample = 16;
	spec.ulSamplingRate  = 22050;
	spec.ulDataFormat    = 0;
	spec.ulChannels      = 2;
	spec.ulNumBuffers    = 2;
	spec.ulBufferSize    = 512 * 2 * 2;
	spec.fShareable      = TRUE;
	spec.pfnCallBack     = DSP_ZeroCallback;
	spec.pCallBackData   = NULL;

	/* KAI does not like frequent opening/closing an audio device.
	 * To avoid this, open an instance playing silence. Later instances
	 * are managed by a mixer not an audio device. */
	if (kaiOpen(&spec, &obtained, &s_hkaiZero)) {
		Error("DSP: kaiOpen() for ZERO failed!\n");
	}

	kaiPlay(s_hkaiZero);

	s_bufferLen = 0;
	s_buffer = NULL;
	s_status = 0;
	s_data = NULL;
	s_dataLen = 0;

	return true;
}

void DSP_Play(const uint8 *data)
{
	KAISPEC spec, obtained;

	DSP_Stop();

	data += READ_LE_UINT16(data + 20);

	if (*data != 1) return;

	s_bufferLen = (READ_LE_UINT32(data) >> 8) - 2;

	if (s_dataLen < s_bufferLen) {
		s_data = realloc(s_data, s_bufferLen);
		s_dataLen = s_bufferLen;
	}

	memcpy(s_data, data + 6, s_bufferLen);

	spec.usDeviceIndex   = 0;
	spec.ulType          = KAIT_PLAY;
	spec.ulBitsPerSample = 8;
	spec.ulSamplingRate  = 1000000 / (256 - data[4]);
	spec.ulDataFormat    = 0;
	spec.ulChannels      = 1;
	spec.ulNumBuffers    = 2;
	spec.ulBufferSize    = 512 * 1 * 1;
	spec.fShareable      = TRUE;
	spec.pfnCallBack     = DSP_Callback;
	spec.pCallBackData   = NULL;

	if (kaiOpen(&spec, &obtained, &s_hkai))
	{
		Error("DSP: kaiOpen() failed!\n");
		return;
	}

	s_buffer = s_data;
	s_status = 2;

	kaiPlay(s_hkai);
}

uint8 DSP_GetStatus(void)
{
	return (kaiStatus(s_hkai) & KAIS_PLAYING) ? s_status: 0;
}
