/* $Id$ */

/** @file src/timer.h Timer definitions. */

#ifndef TIMER_H
#define TIMER_H

typedef enum TimerType {
    TIMER_GUI  = 1,                                         /*!< The identifier for GUI timer. */
    TIMER_GAME = 2                                          /*!< The identifier for Game timer. */
} TimerType;

extern uint32 g_timerGUI;
extern uint32 g_timerGame;
extern uint32 g_timerInput;
extern uint32 g_timerSleep;
extern uint32 g_timerTimeout;

extern void Timer_ProcessEvents(void);
extern void Timer_Sleep(uint16 ticks);
extern bool Timer_SetTimer(TimerType timer, bool set);

extern void Timer_Init();
extern void Timer_Uninit();

extern void Timer_Tick();

extern void Timer_Add(void (*callback)(), uint32 usec_delay);
extern void Timer_Change(void (*callback)(), uint32 usec_delay);
extern void Timer_Remove(void (*callback)());

#endif /* OPENDUNE_H */
