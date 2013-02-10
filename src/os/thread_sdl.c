/** @file src/os/thread_sdl.c Platform dependant thread implementation for SDL. */

#include "types.h"

#include "thread.h"

Thread Thread_Create(ThreadProc proc, void *data)
{
	return SDL_CreateThread(proc, data);
}

void Thread_Wait(Thread thread, ThreadStatus *status)
{
	SDL_WaitThread(thread, status);
}

Semaphore Semaphore_Create(int value)
{
	return SDL_CreateSemaphore(value);
}

bool Semaphore_Unlock(Semaphore sem)
{
	return SDL_SemPost(sem) == 0;
}

bool Semaphore_Lock(Semaphore sem)
{
	return SDL_SemWait(sem) == 0;
}

bool Semaphore_TryLock(Semaphore sem)
{
	return SDL_SemTryWait(sem) == 0;
}

void Semaphore_Destroy(Semaphore sem)
{
	SDL_DestroySemaphore(sem);
}
