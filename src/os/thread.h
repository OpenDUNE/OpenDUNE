/** @file src/os/thread.h Platform dependant thread implementation. */

#ifndef OS_THREAD_H
#define OS_THREAD_H

#if defined(WITH_SDL) || defined(WITH_SDL2)

#include <SDL.h>
#include <SDL_thread.h>
typedef SDL_Thread *Thread;
typedef SDL_sem *Semaphore;
typedef int ThreadStatus;

#define WINAPI

#else

#include <windows.h>
typedef HANDLE Thread;
typedef HANDLE Semaphore;
typedef DWORD ThreadStatus;

#endif /* WITH_SDL(2) */

#if defined(_WIN32)
typedef ThreadStatus (WINAPI *ThreadProc)(void *);

extern Thread Thread_Create(ThreadProc proc, void *data);
extern void Thread_Wait(Thread thread, ThreadStatus *status);
extern Semaphore Semaphore_Create(int value);
extern bool Semaphore_Unlock(Semaphore sem);
extern bool Semaphore_Lock(Semaphore sem);
extern bool Semaphore_TryLock(Semaphore sem);
extern void Semaphore_Destroy(Semaphore sem);
#endif /* _WIN32 */

#endif /* OS_THREAD_H */
