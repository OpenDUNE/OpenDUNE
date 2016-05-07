/** @file src/audio/dsp_atari.c Atari DMA Sound implementation of the DSP. */

#include <mint/osbind.h>
#include <mint/ostruct.h>

#include "types.h"
#include "../os/endian.h"
#include "../os/error.h"

#include "dsp.h"

extern void set_dma_sound(void * buffer, uint32 len);
extern void stop_dma_sound(void);

/* STE/TT/Falcon DMA Sound is able to play at :
 * 50066Hz 25033Hz 12517Hz 6258Hz
 * (6258Hz is not available on falcon) */
#define DMASOUND_FREQ 12517
/*#define DMASOUND_FREQ 25033*/

static uint8 *s_stRamBuffer;
static uint32 s_stRamBufferSize;
static uint32 s_sampleDataLen;

void DSP_Stop(void)
{
	/*stop_dma_sound()*/
}

void DSP_Uninit(void)
{
	DSP_Stop();
	Mfree(s_stRamBuffer);
	s_stRamBuffer = NULL;
	s_stRamBufferSize = 0;
	s_sampleDataLen = 0;
}

bool DSP_Init(void) 
{
	/* allocate ST RAM buffer for audio */
	s_stRamBufferSize = 50*1024;
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
		while (j < i * DMASOUND_FREQ / freq) {
			*w++ = sample;
			j++;
		}
	}
	return newlen;
}

void DSP_Play(const uint8 *data)
{
	uint32 len;
	uint32 freq;
	DSP_Stop();

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
	s_sampleDataLen = DSP_ConvertAudio(freq, data + 2, len);

	if(s_sampleDataLen > 0) {
		set_dma_sound(s_stRamBuffer, s_sampleDataLen);
	}
}

/**
 * Should return 2 if playing sound, 0 if not
 */
uint8 DSP_GetStatus(void)
{
	return 0;
}
