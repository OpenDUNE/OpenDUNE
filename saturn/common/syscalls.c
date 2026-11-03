/** @file saturn/common/syscalls.c System calls for newlib on the Saturn.
 *
 * stdout/stderr go to the text console; files are in files.c. The heap is
 * the 1 MB of low work RAM, then high work RAM after the program (minus the
 * stack). The clock counts from power on. */

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include "bios.h"
#include "console.h"
#include "files.h"
#include "saturn_timer.h"

#undef errno
extern int errno;

/* Linker script symbols (see saturn.ld), named without the C prefix. */
extern char s_heapStart[] __asm__("__heap_start");
extern char s_stackTop[] __asm__("__stack_top");

enum { STACK_RESERVE = 64 * 1024 };

#define LWRAM_START 0x00200000UL
#define LWRAM_END   0x00300000UL

static uintptr_t s_break = 0;
static uintptr_t s_regionStart = 0;
static uintptr_t s_regionEnd = 0;

/**
 * sbrk() for newlib's malloc(): the 1 MB of low work RAM, then high work RAM
 * after the program.
 *
 * @param increment The bytes to add (or give back).
 * @return The old end of the heap, or (void *)-1 (errno ENOMEM).
 */
void *_sbrk(ptrdiff_t increment)
{
	uintptr_t previous;

	if (s_break == 0) {
		s_break = s_regionStart = LWRAM_START;
		s_regionEnd = LWRAM_END;
	}

	if (increment < 0 && s_break + increment < s_regionStart) {
		errno = EINVAL;
		return (void *)-1;
	}

	if (s_break + increment > s_regionEnd) {
		/* low work RAM is full: continue in high work RAM. newlib's malloc
		 * takes the break jumping up (it fences off the gap) but not down,
		 * so low work RAM, the lower address, has to come first. */
		uintptr_t start = (uintptr_t)s_heapStart;
		uintptr_t end = (uintptr_t)s_stackTop - STACK_RESERVE;

		if (s_regionStart == start || start + increment > end) {
			errno = ENOMEM;
			return (void *)-1;
		}
		s_break = s_regionStart = start;
		s_regionEnd = end;
	}

	previous = s_break;
	s_break += increment;
	return (void *)previous;
}

/**
 * write() for newlib: stdout and stderr to the console, the rest to files.
 *
 * @param fd The file descriptor.
 * @param buffer The data.
 * @param length Its size.
 * @return The bytes written, or -1 (errno set).
 */
int _write(int fd, const void *buffer, size_t length)
{
	if (fd != 1 && fd != 2) return Files_Write(fd, buffer, length);
	Console_Write(buffer, (int)length);
	return (int)length;
}

/**
 * mkdir(): there are no directories to make.
 *
 * @param name Not used.
 * @param mode Not used.
 * @return -1 (errno EROFS).
 */
int mkdir(const char *name, mode_t mode)
{
	(void)name; (void)mode;
	errno = EROFS;
	return -1;
}

/**
 * Time since power on; there is no calendar clock yet.
 *
 * @param tv Filled in.
 * @param tz Not used.
 * @return 0.
 */
int _gettimeofday(struct timeval *tv, void *tz)
{
	uint32_t ms = SaturnTimer_Ms();
	(void)tz;
	tv->tv_sec = ms / 1000;
	tv->tv_usec = (ms % 1000) * 1000;
	return 0;
}

/**
 * isatty() for newlib: stdin, stdout and stderr are the console.
 *
 * @param fd The file descriptor.
 * @return 1 for those, else 0.
 */
int _isatty(int fd)
{
	return fd <= 2;
}

/**
 * getpid() for newlib: there is one program.
 *
 * @return 1.
 */
int _getpid(void)
{
	return 1;
}

/**
 * kill() for newlib: there is nothing to signal.
 *
 * @param pid Not used.
 * @param signal Not used.
 * @return -1 (errno EINVAL).
 */
int _kill(int pid, int signal)
{
	(void)pid; (void)signal;
	errno = EINVAL;
	return -1;
}

/**
 * exit() ends here: back to the Saturn's system menu when the game is over,
 * or else show the exit status on the console and stop.
 *
 * @param status The exit status.
 */
void _exit(int status)
{
	char text[32];
	int length;

	if (status == 0) Bios_ExitToMenu();

	length = sprintf(text, "\nexit(%d)\n", status);
	Console_Write(text, length);
	Console_Show();
	for (;;) {}
}
