/** @file src/audio/dsp.h DSP definitions. */

#ifndef DSP_H
#define DSP_H

extern void DSP_Play(const uint8 *data);
extern void DSP_Stop(void);
extern uint8 DSP_GetStatus(void);
extern bool DSP_Init(void);
extern void DSP_Uninit(void);

#if defined(SATURN)
/** The pad's blips: moving the focus, using what is focused, and asking
 * for something that can't be done. */
typedef enum DSPBlip {
	DSP_BLIP_FOCUS,
	DSP_BLIP_USE,
	DSP_BLIP_INVALID
} DSPBlip;

extern void *DSP_Saturn_KeepVoc(void *voc, uint32 *size);
extern void DSP_Saturn_FreeVoc(void *data);
extern bool DSP_Saturn_CanKeep(uint32 fileSize);
extern void DSP_Saturn_Blip(DSPBlip blip);
extern void DSP_Saturn_PlayEffect(const uint8 *data);
extern bool DSP_Saturn_IsPlaying(const void *data);
#endif

#endif /* DSP_H */
