/** @file src/os/thread.h Platform dependant thread implementation. */

#ifndef OS_THREAD_H
#define OS_THREAD_H

typedef int (*ThreadProc)(void *);

#if defined(_WIN32)
	#include <Windows.h>
	typedef HANDLE Thread;
	typedef HANDLE Semaphore;
#else
	#include <SDL.h>
	#include <SDL_thread.h>
	typedef SDL_Thread *Thread;
	typedef SDL_sem *Semaphore;
#endif /* _WIN32 */

extern Thread Thread_Create(ThreadProc proc, void *data);
extern void Thread_Wait(Thread thread, int *status);
extern Semaphore Semaphore_Create(int value);
extern bool Semaphore_Unlock(Semaphore sem);
extern bool Semaphore_Lock(Semaphore sem);
extern bool Semaphore_TryLock(Semaphore sem);
extern void Semaphore_Destroy(Semaphore sem);

#endif /* OS_THREAD_H */
