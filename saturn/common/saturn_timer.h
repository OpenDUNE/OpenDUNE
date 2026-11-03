/** @file saturn/common/saturn_timer.h Frame counter driven by the VBlank-in interrupt. */

#ifndef SATURN_TIMER_H
#define SATURN_TIMER_H

#include <stdint.h>

extern void SaturnTimer_Init(void);

extern uint32_t SaturnTimer_Frames(void);

extern uint32_t SaturnTimer_Ms(void);

extern uint64_t SaturnTimer_Us(void);

extern void SaturnTimer_DelayUs(uint32_t us);

extern void SaturnTimer_WaitFrame(void);

extern int SaturnTimer_MainWaiting(void);

extern uint32_t SaturnTimer_SinceFrameUs(void);

extern void SaturnTimer_SetVBlankHook(void (*hook)(void));

#endif /*!< SATURN_TIMER_H */
