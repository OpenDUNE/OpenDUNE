/** @file src/lock_none.c Locking routines. Fake implementation. */

#include <SDL.h>

#include "types.h"
#include "os/error.h"
#include "lock.h"

static int s_mouseLocked; /*!< Lock for when handling mouse movement. */

void Lock_Init()
{
	/* Do nothing. */
}

void Lock_Input()
{
	/* Do nothing. */
}

void Unlock_Input()
{
	/* Do nothing. */
}

void Lock_Mouse()
{
	while (s_mouseLock != 0) sleepIdle();
	s_mouseLock++;
}

int Lock_IsMouseLocked()
{
	return s_mouseLock == 0;
}

void Unlock_Mouse()
{
	s_mouseLock--;
}
