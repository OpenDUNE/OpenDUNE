/** @file src/timer.h Timer definitions. */

#ifndef TIMER_H
#define TIMER_H

typedef enum TimerType {
	TIMER_GUI  = 1,                                         /*!< The identifier for GUI timer. */
	TIMER_GAME = 2                                          /*!< The identifier for Game timer. */
} TimerType;

extern volatile uint32 g_timerGUI;
extern volatile uint32 g_timerGame;
extern volatile uint32 g_timerInput;
extern volatile uint32 g_timerSleep;
extern volatile uint32 g_timerTimeout;

extern uint32 Timer_GetTime(void);

extern void Timer_Sleep(uint16 ticks);
extern bool Timer_SetTimer(TimerType timer, bool set);

extern void Timer_Init(void);
extern void Timer_Uninit(void);

extern void Timer_Tick(void);

extern void Timer_Add(void (*callback)(void), uint32 usec_delay, bool callonce);
extern void Timer_Change(void (*callback)(void), uint32 usec_delay);
extern void Timer_Remove(void (*callback)(void));

#if !defined(_WIN32) || defined(WITH_SDL) || defined(WITH_SDL2)
extern void SleepAndProcessBackgroundTasks(void);
#endif /* !_WIN32 || SDL || SDL2 */

#endif /* TIMER_H */
