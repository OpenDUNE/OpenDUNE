/** @file saturn/common/scsp.h Sound through the SCSP, driven from the SH-2.
 *
 * The sound CPU (68000) is stopped; the SH-2 writes sound RAM and the slot
 * registers itself. Samples are signed 8-bit (or 16-bit) PCM in sound RAM. */

#ifndef SATURN_SCSP_H
#define SATURN_SCSP_H

#include <stdint.h>

enum {
	SCSP_RAM_SIZE = 512 * 1024
};

extern void Scsp_Init(void);

extern int32_t Scsp_Alloc(uint32_t size);
extern void Scsp_Free(int32_t offset);
extern uint32_t Scsp_LargestFree(void);

extern void Scsp_UploadU8(int32_t offset, const uint8_t *pcm, uint32_t length);

/* A note on one slot: signed 8-bit (or 16-bit) samples in sound RAM. */
typedef struct ScspNote {
	int32_t offset;     /*!< start in sound RAM */
	uint16_t loopStart; /*!< in samples */
	uint16_t end;       /*!< last sample (loop end when looping) */
	uint8_t loop;       /*!< 1: loop from loopStart to end */
	/* EG, 0..31 */
	uint8_t attack, decay1, decayLevel, decay2, release;
	uint8_t level;  /*!< TL: attenuation, 0.375 dB units */
	uint16_t pitch; /*!< OCT/FNS register value (Scsp_Pitch()) */
	uint8_t pan;    /*!< DIPAN register value */
	uint8_t pcm16;  /*!< 1: 16-bit samples */
} ScspNote;

/**
 * OCT/FNS register value for a playback rate of 44100 Hz * 2^(octave) *
 * (1 + fns / 1024); octave -8..7, fns 0..1023.
 *
 * @param octave The octave.
 * @param fns The fraction.
 * @return The register value.
 */
static __inline__ uint16_t Scsp_Pitch(int octave, uint16_t fns)
{
	return (uint16_t)(((octave & 0xF) << 11) | (fns & 0x3FF));
}

extern void Scsp_NoteOn(int slot, const ScspNote *note);
extern void Scsp_NoteOff(int slot);

extern void Scsp_UploadS16(int32_t offset, const int16_t *pcm, uint32_t count);

extern void Scsp_SlotWrite(int slot, int reg, uint16_t value);
extern uint16_t Scsp_SlotRead(int slot, int reg);

extern void Scsp_Key(int slot, int on);
extern int Scsp_EnvelopeLevel(int slot);

/* Samples of silence a one-shot needs after its data (see Scsp_Play). */
enum { SCSP_TAIL = 32 };

extern void Scsp_UploadTail(int32_t offset);

extern void Scsp_Play(int slot, int32_t offset, uint32_t samples, uint32_t rate, uint8_t volume);
extern void Scsp_Stop(int slot);

extern void Scsp_TimerStart(void (*handler)(void));

#endif /*!< SATURN_SCSP_H */
