/** @file src/timer.c Timer routines. */

#include <stdlib.h>
#if !defined(_MSC_VER)
	#include <sys/time.h>
#endif /* _MSC_VER */
#if defined(_WIN32)
	#define _WIN32_WINNT 0x0500
	#include <windows.h>
#else
	#if !defined(__USE_POSIX)
		#define __USE_POSIX
	#endif /* !__USE_POSIX */
	#include <signal.h>
#endif /* _WIN32 */
#include "types.h"
#include "os/sleep.h"

#include "timer.h"



uint32 g_timerGUI = 0;                                      /*!< Tick counter. Increases with 1 every tick when Timer 1 is enabled. Used for GUI. */
uint32 g_timerGame = 0;                                     /*!< Tick counter. Increases with 1 every tick when Timer 2 is enabled. Used for game timing (units, ..). */
uint32 g_timerInput = 0;                                    /*!< Tick counter. Increases with 1 every tick. Used for input timing. */
uint32 g_timerSleep = 0;                                    /*!< Tick counter. Increases with 1 every tick. Used for sleeping. */
uint32 g_timerTimeout = 0;                                  /*!< Tick counter. Decreases with 1 every tick when non-zero. Used to timeout. */

static uint16 s_timersActive = 0;


typedef struct TimerNode {
	uint32 usec_left;
	uint32 usec_delay;
	void (*callback)(void);
} TimerNode;

#if defined(_WIN32)
static HANDLE s_timerMainThread = NULL;
static HANDLE s_timerThread = NULL;
static int s_timerTime;
#else
static struct itimerval s_timerTime;
#endif /* _WIN32 */

static TimerNode *s_timerNodes = NULL;
static int s_timerNodeCount = 0;
static int s_timerNodeSize  = 0;

static uint32 s_timerLastTime;

static const uint32 s_timerSpeed = 10000; /* Our timer runs at 100Hz */


static uint32 Timer_GetTime(void)
{
#if defined(_MSC_VER)
	DWORD t;
	t = timeGetTime();
	return t;
#else
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000 + tv.tv_usec / 1000;
#endif /* _MSC_VER */
}

/**
 * Run the timer interrupt handler.
 */
static void Timer_InterruptRun(int arg)
{
	TimerNode *node;
	uint32 new_time, usec_delta, delta;
	int i;

	/* Lock the timer, to avoid double-calls */
	static bool timerLock = false;
	if (timerLock) return;
	timerLock = true;

	VARIABLE_NOT_USED(arg);

	/* Calculate the time between calls */
	new_time   = Timer_GetTime();
	usec_delta = (new_time - s_timerLastTime) * 1000;
	s_timerLastTime = new_time;

	/* Walk all our timers, see which (and how often) it should be triggered */
	node = s_timerNodes;
	for (i = 0; i < s_timerNodeCount; i++, node++) {
		delta = usec_delta;

		/* No delay means: as often as possible, but don't worry about it */
		if (node->usec_delay == 0) {
			node->callback();
			continue;
		}

		while (node->usec_left <= delta) {
			delta -= node->usec_left;
			node->usec_left = node->usec_delay;
			node->callback();
		}
		node->usec_left -= delta;
	}

	timerLock = false;
}

#if defined(_WIN32)
void CALLBACK Timer_InterruptWindows(LPVOID arg, BOOLEAN TimerOrWaitFired) {
	VARIABLE_NOT_USED(arg);
	VARIABLE_NOT_USED(TimerOrWaitFired);

	SuspendThread(s_timerMainThread);
	Timer_InterruptRun(0);
	ResumeThread(s_timerMainThread);
}
#endif /* _WIN32 */

/**
 * Suspend the timer interrupt handling.
 */
static void Timer_InterruptSuspend(void)
{
#if defined(_WIN32)
	if (s_timerThread != NULL) DeleteTimerQueueTimer(NULL, s_timerThread, NULL);
	s_timerThread = NULL;
#else
	setitimer(ITIMER_REAL, NULL, NULL);
#endif /* _WIN32 */
}

/**
 * Resume the timer interrupt handling.
 */
static void Timer_InterruptResume(void)
{
#if defined(_WIN32)
	CreateTimerQueueTimer(&s_timerThread, NULL, Timer_InterruptWindows, NULL, s_timerTime, s_timerTime, WT_EXECUTEINTIMERTHREAD);
#else
	setitimer(ITIMER_REAL, &s_timerTime, NULL);
#endif /* _WIN32 */
}

/**
 * Initialize the timer.
 */
void Timer_Init(void)
{
	s_timerLastTime = Timer_GetTime();

#if defined(_WIN32)
	s_timerTime = s_timerSpeed / 1000;
	DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &s_timerMainThread, 0, FALSE, DUPLICATE_SAME_ACCESS);
#else
	s_timerTime.it_value.tv_sec = 0;
	s_timerTime.it_value.tv_usec = s_timerSpeed;
	s_timerTime.it_interval.tv_sec = 0;
	s_timerTime.it_interval.tv_usec = s_timerSpeed;

	{
		struct sigaction timerSignal;

		sigemptyset(&timerSignal.sa_mask);
		timerSignal.sa_handler = Timer_InterruptRun;
		timerSignal.sa_flags   = 0;
		sigaction(SIGALRM, &timerSignal, NULL);
	}
#endif /* _WIN32 */
	Timer_InterruptResume();
}

/**
 * Uninitialize the timer.
 */
void Timer_Uninit(void)
{
	Timer_InterruptSuspend();
#if defined(_WIN32)
	CloseHandle(s_timerMainThread);
#endif /* _WIN32 */

	free(s_timerNodes); s_timerNodes = NULL;
	s_timerNodeCount = 0;
	s_timerNodeSize = 0;
}

/**
 * Add a timer.
 * @param callback the callback for the timer.
 * @param usec_delay The interval of the timer.
 */
void Timer_Add(void (*callback)(void), uint32 usec_delay)
{
	TimerNode *node;
	if (s_timerNodeCount == s_timerNodeSize) {
		s_timerNodeSize += 2;
		s_timerNodes = (TimerNode *)realloc(s_timerNodes, s_timerNodeSize * sizeof(TimerNode));
	}
	node = &s_timerNodes[s_timerNodeCount++];

	node->usec_left  = usec_delay;
	node->usec_delay = usec_delay;
	node->callback   = callback;
}

/**
 * Change the interval of a timer.
 * @param callback The callback to change the timer of.
 * @param usec_delay The interval.
 */
void Timer_Change(void (*callback)(void), uint32 usec_delay)
{
	int i;
	TimerNode *node = s_timerNodes;
	for (i = 0; i < s_timerNodeCount; i++, node++) {
		if (node->callback == callback) {
			node->usec_delay = usec_delay;
			return;
		}
	}
}

/**
 * Remove a timer from the queue.
 * @param callback Which callback to remove.
 */
void Timer_Remove(void (*callback)(void))
{
	int i;
	TimerNode *node = s_timerNodes;
	for (i = 0; i < s_timerNodeCount; i++, node++) {
		if (node->callback == callback) {
			*node = s_timerNodes[--s_timerNodeCount];
			return;
		}
	}
}

/**
 * Handle game timers.
 */
void Timer_Tick(void)
{
	if ((s_timersActive & TIMER_GUI)  != 0) g_timerGUI++;
	if ((s_timersActive & TIMER_GAME) != 0) g_timerGame++;
	g_timerInput++;
	g_timerSleep++;

	if (g_timerTimeout != 0) g_timerTimeout--;
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
	uint32 tick = g_timerSleep + ticks;
	while (tick >= g_timerSleep) sleepIdle();
}
