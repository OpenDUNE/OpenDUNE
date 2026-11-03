/** @file saturn/common/bios.h Saturn BIOS service calls (SBL6 SEGA_SYS.H). */

#ifndef SATURN_BIOS_H
#define SATURN_BIOS_H

#include <stdint.h>

/* Register a handler for an SCU interrupt vector. The BIOS dispatcher saves
 * registers and returns with RTE, so the handler is a plain C function. */
#define BIOS_SETUINT(vector, handler) \
	((**(void (**)(uint32_t, void (*)(void)))0x06000300)((vector), (handler)))

/* Put a handler directly into the SH-2 vector table (it must end in RTE). */
#define BIOS_SETSINT(vector, handler) \
	((**(void (**)(uint32_t, void (*)(void)))0x06000310)((vector), (handler)))

/* SCU interrupt mask = (mask & and_mask) | or_mask; a set bit masks. */
#define BIOS_CHGSCUIM(and_mask, or_mask) \
	((**(void (**)(uint32_t, uint32_t))0x06000344)((and_mask), (or_mask)))

/* Leave the program for the BIOS multiplayer screen: what A+B+C+Start
 * must do (SBL6 SYS_EXECDMP). */
#define BIOS_EXECDMP() \
	((**(void (**)(void))0x0600026C)())

/* SCU interrupt vectors and mask bits (SBL6 SEGA_INT.H) */
#define SCU_VECTOR_VBLANK_IN   0x40
#define SCU_MASK_VBLANK_IN     (1 << 0)

/**
 * Allow all interrupt levels on the calling SH-2.
 */
static __inline__ void Cpu_EnableInterrupts(void)
{
	uint32_t sr;
	__asm__ volatile ("stc sr, %0" : "=r" (sr));
	sr &= ~0xF0u;
	__asm__ volatile ("ldc %0, sr" : : "r" (sr) : "memory");
}

/**
 * Mask all interrupts on the calling SH-2; returns the old SR for
 * Cpu_RestoreInterrupts(). Both are compiler barriers too ("memory"): without
 * that, GCC may move the stores they guard past them, and the VBlank hook
 * then finds a queue whose count is ahead of its contents.
 *
 * @return The old SR.
 */
static __inline__ uint32_t Cpu_DisableInterrupts(void)
{
	uint32_t sr;
	__asm__ volatile ("stc sr, %0" : "=r" (sr));
	__asm__ volatile ("ldc %0, sr" : : "r" (sr | 0xF0u) : "memory");
	return sr;
}

/**
 * Restore the interrupt mask saved by Cpu_DisableInterrupts().
 *
 * @param sr The SR it returned.
 */
static __inline__ void Cpu_RestoreInterrupts(uint32_t sr)
{
	__asm__ volatile ("ldc %0, sr" : : "r" (sr) : "memory");
}

/**
 * Leave the program for the BIOS multiplayer screen, from anywhere: with
 * every interrupt masked first, as none of the program's handlers (VBlank,
 * sound timer) may run while the BIOS takes the machine over.
 */
static __inline__ void Bios_ExitToMenu(void)
{
	Cpu_DisableInterrupts();
	BIOS_CHGSCUIM(0, 0xBFFF);
	BIOS_EXECDMP();
}

#endif /*!< SATURN_BIOS_H */
