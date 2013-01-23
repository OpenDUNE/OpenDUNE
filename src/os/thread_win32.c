/** @file src/os/thread_win32.c Platform dependant thread implementation for win32. */

#include "types.h"

#include "thread.h"

Thread Thread_Create(ThreadProc proc, void *data)
{
	return CreateThread(NULL, 0, proc, data, 0, NULL);
}

void Thread_Wait(Thread thread, int *status)
{
	WaitForSingleObject(thread, INFINITE);
	if (status != NULL) GetExitCodeThread(thread, status);
	CloseHandle(thread);
}

Semaphore Semaphore_Create(int value)
{
	return CreateSemaphore(NULL, value, 1, NULL);
}

bool Semaphore_Unlock(Semaphore sem)
{
	return ReleaseSemaphore(sem, 1, NULL);
}

bool Semaphore_Lock(Semaphore sem)
{
	return WaitForSingleObject(sem, INFINITE) == WAIT_OBJECT_0;
}

bool Semaphore_TryLock(Semaphore sem)
{
	return WaitForSingleObject(sem, 0) == WAIT_OBJECT_0;
}

void Semaphore_Destroy(Semaphore sem)
{
	CloseHandle(sem);
}
