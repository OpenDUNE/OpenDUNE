/* $Id$ */

/** @file src/main.c Main program file. */

#if defined(_WIN32)
#include <io.h>
#include <windows.h>
#endif
#include <stdio.h>
#include "types.h"
#include "opendune.h"

extern char *emu_caption;
extern uint8 emu_overlay;
extern uint8 emu_mpu;
extern uint8 emu_pic;
extern uint8 emu_pcm;

extern void emu_init();

#if defined(__APPLE__)
int SDL_main(int argc, char **argv)
#else
int main(int argc, char **argv)
#endif /* __APPLE__ */
{
#if defined(_WIN32)
	#if defined(__MINGW32__) && defined(__STRICT_ANSI__)
		int __cdecl __MINGW_NOTHROW _fileno (FILE*);
	#endif
	FILE *err = fopen("error.log", "w");
	FILE *out = fopen("output.log", "w");

	if (err != NULL) _dup2(_fileno(err), _fileno(stderr));
	if (out != NULL) _dup2(_fileno(out), _fileno(stdout));
	FreeConsole();
#endif

	/* We don't need the MPU, PIC or PCM from libemu. */
	emu_mpu = 0;
	emu_pic = 0;
	emu_pcm = 0;

	emu_init(argc, argv);
	emu_overlay = 1;

	Main();

	return 1;
}
