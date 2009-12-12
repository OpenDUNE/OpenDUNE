/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__28E4_0002_0017_0B15()
 *
 * @name f__28E4_0002_0017_0B15
 * @implements 28E4:0002:0017:0B15 ()
 * @implements 28E4:000E:000B:C81F
 * @implements 28E4:0019:0002:B9BA
 * @implements 28E4:001B:0007:B6D7
 *
 * Called From: 23E1:0351:000D:7816
 * Called From: 23E1:03FD:000E:7972
 * Called From: 25C4:031C:000D:DB43
 * Called From: B500:007B:0012:AD3C
 */
void f__28E4_0002_0017_0B15()
{
l__0002:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
l__000E:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__001B;
	emu_dl = emu_al;
	emu_ah = 0x6;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0019); Interrupt_DOS();
l__0019:
	goto l__000E;
l__001B:
	emu_pop(&emu_si);
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
