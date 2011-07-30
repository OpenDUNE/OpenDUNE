/* $Id$ */

/** @file src/timer.c Timer routines. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "types.h"
#include "os/sleep.h"

#include "timer.h"

#include "video/video.h"


uint32 g_timerGUI = 0;                                      /*!< Tick counter. Increases with 1 every tick when Timer 1 is enabled. Used for GUI. */
uint32 g_timerGame = 0;                                     /*!< Tick counter. Increases with 1 every tick when Timer 2 is enabled. Used for game timing (units, ..). */
uint32 g_timerInput = 0;                                    /*!< Tick counter. Increases with 1 every tick. Used for input timing. */
uint32 g_timerSleep = 0;                                    /*!< Tick counter. Increases with 1 every tick. Used for sleeping. */
uint32 g_timerTimeout = 0;                                  /*!< Tick counter. Decreases with 1 every tick when non-zero. Used to timeout. */

uint16 s_timersActive = 0;

void Timer_Interrupt()
{
	if ((s_timersActive & TIMER_GUI)  != 0) g_timerGUI++;
	if ((s_timersActive & TIMER_GAME) != 0) g_timerGame++;
	g_timerInput++;
	g_timerSleep++;

	if (g_timerTimeout != 0) g_timerTimeout--;

	Video_Tick();
}

/**
 * Set timers on and off.
 *
 * @param timer The timer to switch.
 * @param set True sets the timer on, false sets it off.
 * @return True if timer was set, false if it was not set.
 */
bool Timer_SetTimer(TimerType timer, bool set)
{
	uint8 t;
	bool ret;

	t = (1 << (timer - 1));
	ret = (s_timersActive & t) != 0;

	if (set) {
		s_timersActive |= t;
	} else {
		s_timersActive &= ~t;
	}

	return ret;
}

/**
 * Sleep for an amount of ticks.
 * @param ticks The amount of ticks to sleep.
 */
void Timer_Sleep(uint16 ticks)
{
	while (ticks-- > 0) {
		uint32 tick = g_timerSleep + 1;

		while (tick >= g_timerSleep) sleep(0);
	}
}
