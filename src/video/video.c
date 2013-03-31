/** @file src/video/video.c Common video driver functions. */

#include "types.h"
#include "../os/error.h"
#include "../os/sleep.h"
#include "../os/thread.h"
#include "../timer.h"

#include "video.h"

static Semaphore s_video_sem = NULL;
static Thread s_video_thread = NULL;
static uint32 s_video_usec = 0;
static bool s_video_threading = false;

static ThreadStatus WINAPI Video_ThreadProc(void *data)
{
	VARIABLE_NOT_USED(data);
	Semaphore_Lock(s_video_sem);
	while (!Semaphore_TryLock(s_video_sem)) {
		msleep(s_video_usec / 1000);
		Video_Tick();
	}
	Semaphore_Unlock(s_video_sem);
	return 0;
}

void Video_StartThread(uint32 usec)
{
	if (!s_video_threading) {
		Timer_Add(Video_Tick, usec);
		return;
	}

	s_video_usec = usec;
	Semaphore_Unlock(s_video_sem);
}

void Video_StopThread(void)
{
	if (!s_video_threading) return;

	Semaphore_Unlock(s_video_sem);
	Thread_Wait(s_video_thread, NULL);
}

void Video_ThreadInit(void)
{
	s_video_sem = Semaphore_Create(0);
	if (s_video_sem == NULL) {
		Error("Failed to create semaphore\n");
		return;
	}

	s_video_thread = Thread_Create(Video_ThreadProc, NULL);
	if (s_video_thread == NULL) {
		Error("Failed to create thread\n");
		Semaphore_Destroy(s_video_sem);
		return;
	}

	s_video_threading = true;
}

void Video_ThreadUnInit(void)
{
	if (!s_video_threading) return;

	Video_StopThread();
	Semaphore_Destroy(s_video_sem);
}
