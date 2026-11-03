/** @file saturn/sbl/int_bios.c SBL interrupt functions on top of the BIOS.
 *
 * SBL's INT library installs SCU handlers through a trampoline written in
 * Hitachi assembler, which GNU as can't build. SEGA_INT.H also offers the
 * plain BIOS calls (disabled there with #if 0); these functions are that
 * variant, as used by the DMA library. */

#include "sega_int.h"

/**
 * Set the handler of an SCU interrupt, through the BIOS (SBL's INT library).
 *
 * @param n The SCU interrupt vector.
 * @param handler The handler.
 */
void INT_SetScuFunc(int n, interrupt_t handler)
{
	SYS_SETUINT(n, handler);
}

/**
 * Get the handler of an SCU interrupt, through the BIOS (SBL's INT library).
 *
 * @param n The SCU interrupt vector.
 * @return The handler.
 */
interrupt_t INT_GetScuFunc(int n)
{
	return (interrupt_t)SYS_GETUINT(n);
}
