/** @file src/lock_sdl.c SDL locking routines. */

#include <SDL.h>

#include "types.h"
#include "os/error.h"
#include "lock.h"

static SDL_mutex *s_inputLock; /*!< Lock for non-mouse input */
static SDL_mutex *s_mouseLock; /*!< Lock for when handling mouse movement. */
static int s_mouseLocked;      /*!< Expected to be atomic. To be replaced with SDL_atomic_t from SDL2 */

void Lock_Init()
{
	s_inputLock = SDL_CreateMutex();
	if(!s_inputLock) {
		Error("Couldn't create input lock.");
		return;
	}
	s_mouseLock = SDL_CreateMutex();
	if(!s_mouseLock) {
		Error("Couldn't create mouse lock.");
		return;
	}
	s_mouseLocked=false;
}

void Lock_Input()
{
	if(SDL_LockMutex(s_inputLock) != 0) {
		Error("Couldn't lock input.");
		return;
	}
}

void Unlock_Input()
{
	SDL_UnlockMutex(s_inputLock);
}

void Lock_Mouse()
{
	if(SDL_LockMutex(s_mouseLock) != 0) {
		Error("Couldn't lock mouse.");
		return;
	}
	s_mouseLocked=true;
}

int Lock_IsMouseLocked()
{
	return s_mouseLocked;
}

void Unlock_Mouse()
{
	s_mouseLocked = false;
	SDL_UnlockMutex(s_mouseLock);
}
