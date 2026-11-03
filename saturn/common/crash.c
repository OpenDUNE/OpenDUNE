/** @file saturn/common/crash.c Report SH-2 exceptions on the console. */

#include <stdint.h>
#include <stdio.h>
#include "bios.h"
#include "console.h"
#include "crash.h"

extern void Crash_Entry4(void);
extern void Crash_Entry6(void);
extern void Crash_Entry9(void);
extern void Crash_Entry10(void);

/**
 * Point the illegal-instruction and address-error vectors at Crash_Report.
 */
void Crash_Install(void)
{
	BIOS_SETSINT(4, Crash_Entry4);
	BIOS_SETSINT(6, Crash_Entry6);
	BIOS_SETSINT(9, Crash_Entry9);
	BIOS_SETSINT(10, Crash_Entry10);
}

/**
 * Show an SH-2 exception on the console and stop: called by the exception stubs
 * of crash_entry.S.
 *
 * @param vector The exception vector.
 * @param pc Where it happened.
 * @param sr The status register then.
 * @param sp The stack pointer then.
 */
void Crash_Report(uint32_t vector, uint32_t pc, uint32_t sr, uint32_t sp)
{
	const char *name;
	char text[160];
	int length;

	switch (vector) {
		case 4: name = "illegal instruction"; break;
		case 6: name = "slot illegal instruction"; break;
		case 9: name = "CPU address error"; break;
		case 10: name = "DMA address error"; break;
		default: name = "exception"; break;
	}

	/* fixed-width fields: well within text */
	length = sprintf(text,
		"\n*** CRASH: %s\nPC=%08lX SR=%08lX SP=%08lX\n"
		"sh-elf-addr2line -e opendune.elf %08lX\n",
		name,
		(unsigned long)pc, (unsigned long)sr, (unsigned long)sp, (unsigned long)pc);
	Console_Write(text, length);
	Console_Show();
	for (;;) {}
}
