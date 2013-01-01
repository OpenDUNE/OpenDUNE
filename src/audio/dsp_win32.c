/** @file src/audio/dsp_win32.c Windows implementation of the DSP. */

#include <stdio.h>
#include <windows.h>
#include "types.h"
#include "../os/error.h"

#include "dsp.h"

static bool s_init = false;
static char *s_data = NULL;
static uint32 s_dataLen = 0;
static HWAVEOUT s_waveOut = NULL;
static WAVEHDR s_waveHdr;
static bool s_playing = false;

void DSP_Stop(void)
{
	if (s_waveOut == NULL) return;

	waveOutReset(s_waveOut);
	waveOutUnprepareHeader(s_waveOut, &s_waveHdr, sizeof(s_waveHdr));
	waveOutClose(s_waveOut);

	s_waveOut = NULL;
	s_playing = false;
}

void DSP_Uninit(void)
{
	if (!s_init) return;

	DSP_Stop();

	free(s_data); s_data = NULL;
	s_dataLen = 0;

	s_init = false;
}

bool DSP_Init(void)
{
	s_init = true;
	return true;
}

static void CALLBACK DSP_Callback(HWAVEOUT hwo, UINT uMsg, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
{
	VARIABLE_NOT_USED(hwo);
	VARIABLE_NOT_USED(uMsg);
	VARIABLE_NOT_USED(dwInstance);
	VARIABLE_NOT_USED(dwParam1);
	VARIABLE_NOT_USED(dwParam2);

	s_playing = false;
}

void DSP_Play(const uint8 *data)
{
	uint32 len;
	WAVEFORMATEX waveFormat;
	DWORD freq;

	DSP_Stop();

	data += ((const uint16 *)data)[10];

	if (*data != 1) return;

	len = (*(const uint32 *)data >> 8) - 2;

	if (s_dataLen < len) {
		s_data = realloc(s_data, len);
		s_dataLen = len;
	}

	memcpy(s_data, data + 6, len);

	freq = 1000000 / (256 - data[4]);

	waveFormat.wFormatTag      = WAVE_FORMAT_PCM;
	waveFormat.nChannels       = 1;
	waveFormat.nSamplesPerSec  = freq;
	waveFormat.nAvgBytesPerSec = freq;
	waveFormat.nBlockAlign     = 1;
	waveFormat.wBitsPerSample  = 8;
	waveFormat.cbSize = sizeof(WAVEFORMATEX);

	if (waveOutOpen(&s_waveOut, WAVE_MAPPER, &waveFormat, (DWORD_PTR)&DSP_Callback, 0, CALLBACK_FUNCTION) != MMSYSERR_NOERROR) {
		Error("waveOutOpen failed\n");
		s_waveOut = NULL;
		return;
	}

	s_waveHdr.lpData         = s_data;
	s_waveHdr.dwBufferLength = len;
	s_waveHdr.dwFlags        = 0;
	s_waveHdr.dwLoops        = 0;
	if (waveOutPrepareHeader(s_waveOut, &s_waveHdr, sizeof(s_waveHdr)) != MMSYSERR_NOERROR) {
		Error("waveOutPrepareHeader failed\n");
		return;
	}

	if (waveOutWrite(s_waveOut, &s_waveHdr, sizeof(s_waveHdr)) != MMSYSERR_NOERROR) {
		Error("waveOutWrite failed\n");
		return;
	}
	s_playing = true;
}

uint8 DSP_GetStatus(void)
{
	return s_playing ? 2 : 0;
}
