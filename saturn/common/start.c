/** @file saturn/common/start.c C entry point, called by crt0 once .bss is clear. */

#include <stdlib.h>
#include "bios.h"
#include "crash.h"
#include "saturn_hw.h"
#include "smpc.h"

/* SH-2 on-chip modules (SH7604 Hardware Manual) */
#define SH2_TIER  REG8(0xFFFFFE10UL)  /*!< free-running timer interrupts */
#define SH2_IPRB  REG16(0xFFFFFE60UL) /*!< SCI and FRT interrupt priorities */
#define SH2_IPRA  REG16(0xFFFFFEE2UL) /*!< DIVU, DMAC and WDT interrupt priorities */
#define SH2_DMAOR REG32(0xFFFFFFB0UL) /*!< DMA controller on/off */

extern int main(int argc, char **argv);

/* Linker script symbols (see saturn.ld), named without the C prefix. */
extern void (*s_initArrayStart[])(void) __asm__("__init_array_start");
extern void (*s_initArrayEnd[])(void) __asm__("__init_array_end");

/**
 * Undo what the program that booted this one may have set up: on real
 * hardware that is a boot menu (SAROO's, a cartridge's), not a freshly
 * reset machine. Its interrupts would go to its handlers, which this
 * program has just been loaded over, and its slave SH-2 code too.
 */
static void Saturn_ResetHardware(void)
{
	Cpu_DisableInterrupts();
	BIOS_CHGSCUIM(0, 0xBFFF);
	SH2_IPRA = 0;
	SH2_IPRB = 0;
	SH2_TIER = 0x01;
	SH2_DMAOR = 0;
	Smpc_Command(SMPC_CMD_SSHOFF);
}

/**
 * The C start of the program, from crt0.S: clear BSS, reset what was left
 * set up, run the static constructors, then main().
 */
void Saturn_Start(void)
{
	static char name[] = "opendune";
	static char *argv[] = { name, NULL };
	void (**constructor)(void);

	Saturn_ResetHardware();
	Crash_Install();

	/* C++ static constructors (the AdLib driver's) */
	for (constructor = s_initArrayStart; constructor < s_initArrayEnd; constructor++) (*constructor)();

	exit(main(1, argv));
}
