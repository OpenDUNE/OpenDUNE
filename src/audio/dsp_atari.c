/** @file src/audio/dsp_atari.c Atari DMA Sound implementation of the DSP. */

#include <mint/osbind.h>
#include <mint/ostruct.h>
#include <mint/cookie.h>

#include "types.h"
#include "../os/endian.h"
#include "../os/error.h"

#include "dsp.h"

extern void set_dma_sound(void * buffer, uint32 len);
extern void stop_dma_sound(void);	/* needs to be called in supervisor mode */
extern uint32 get_dma_status(void);	/* needs to be called in supervisor mode */

/* STE/TT/Falcon DMA Sound is able to play at :
 * 50066Hz 25033Hz 12517Hz 6258Hz
 * (6258Hz is not available on falcon) */
#define DMASOUND_FREQ 12517
/*#define DMASOUND_FREQ 25033*/
#define DMASOUND_BUFFER_SIZE	64*1024

static uint8 *s_stRamBuffer;
static uint32 s_stRamBufferSize;

void DSP_Stop(void)
{
	Supexec(stop_dma_sound);
}

void DSP_Uninit(void)
{
	DSP_Stop();
	if (s_stRamBuffer != NULL) {
		Mfree(s_stRamBuffer);
		s_stRamBuffer = NULL;
	}
	s_stRamBufferSize = 0;
}

bool DSP_Init(void) 
{
	/* Get sound hardware with '_SND' cookie */
	long snd_cookie;
	if (Getcookie(C__SND, &snd_cookie) != C_FOUND)
		snd_cookie = 0;

	/* Check for DMA support */
	if (!(snd_cookie & 2)) {
		Warning("No Sound DMA detected\n");
		return false;
	}

	/* allocate ST RAM buffer for audio */
	s_stRamBufferSize = DMASOUND_BUFFER_SIZE;
	s_stRamBuffer = (uint8 *)Mxalloc(s_stRamBufferSize, MX_STRAM);
	if(s_stRamBuffer == NULL) {
		Error("Failed to allocate %u bytes of ST RAM for DMA sound.\n",
		      s_stRamBufferSize);
		s_stRamBufferSize = 0;
		return false;
	}
	return true;
}

/**
 * In Dune2, the frequency of the VOC files are all over the place.
 * Atari STE/TT/Falcon sound only supports a few fixed frequencies.
 * So, we convert all audio to one frequency. That's also the occasion
 * to convert from unsigned 8bits samples to SIGNED 8bits samples.
 * Sadly, our knowledge of audio is not really good, so this is a linear
 * scaler.
 */
static uint32 DSP_ConvertAudio(uint32 freq, const uint8 * src, uint32 len)
{
	uint32 newlen = len * DMASOUND_FREQ / freq;
	uint8 *w;
	uint8 sample;
	uint32 i, j;

	Debug("converting freq from %uHz to %u.\n",
	        freq, DMASOUND_FREQ);

	if(newlen > s_stRamBufferSize) {
		if(Mshrink(s_stRamBuffer, newlen) == 0) {
			s_stRamBufferSize = newlen;
		} else {
			Error("Mshrink() of ST RAM buffer failed. newlen=%u\n", newlen);
			return 0;
		}
	}

	w = s_stRamBuffer;
	for (i = 1, j = 0; i <= len; i++) {
		sample = (*src++) ^ 0x80;	/* unsigned to signed conversion */
		while (j < i * DMASOUND_FREQ) {
			*w++ = sample;
			j += freq;
		}
	}
	return newlen;
}

void DSP_Play(const uint8 *data)
{
	uint32 len;
	uint32 freq;
	uint32 sampleLen;

	/* skip Create Voice File header */
	data += READ_LE_UINT16(data + 20);

	/* first byte is Block Type :
	 * 0x00: Terminator
	 * 0x01: Sound data
	 * 0x02: Sound data continuation
	 * 0x03: Silence
	 * 0x04: Marker
	 * 0x05: Text
	 * 0x06: Repeat start
	 * 0x07: Repeat end
	 * 0x08: Extra info
	 * 0x09: Sound data (New format) */
	if (*data != 1) return;

	/* next 3 bytes are block size (not including the 1 block type and
	 * size 4 bytes) */
	len = data[1] | (data[2] << 8) | (data[3] << 16);
	len -= 2;
	data += 4;
	/* byte  0    frequency divisor
	 * byte  1    codec id : 0 is "8bits unsigned PCM"
	 * bytes 2..n audio data */
	freq = 1000000 / (256 - data[0]);
	if (data[1] != 0) Warning("Unsupported VOC codec 0x%02x\n", (int)data[1]);
	sampleLen = DSP_ConvertAudio(freq, data + 2, len);

	if(sampleLen > 0) {
		set_dma_sound(s_stRamBuffer, sampleLen);
	}
}

/**
 * Should return 2 if playing sound, 0 if not
 */
uint8 DSP_GetStatus(void)
{
	uint8 status = (uint8)Supexec(get_dma_status);
	Debug("DSP_GetStatus() status = %02x : %s\n",
	      status, (status != 0) ? "Playing" : "Stopped");
	return (status != 0) ? 2 : 0;
}
