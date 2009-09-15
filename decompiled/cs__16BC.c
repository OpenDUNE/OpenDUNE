/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16BC_0044_0027_0268()
 *
 * @name f__16BC_0044_0027_0268
 * @implements 16BC:0044:0027:0268 ()
 *
 * Called From: 1A34:3750:001B:74FC
 * Called From: 1A34:37D1:0026:2545
 */
void f__16BC_0044_0027_0268()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0091; emu_last_cs = 0x16BC; emu_last_ip = 0x0050; emu_last_length = 0x0027; emu_last_crc = 0x0268; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6F), 0x0);
	if (emu_flags.zf) { f__16BC_0091_0004_0768(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x104B; emu_ip = 0x03BF; emu_last_cs = 0x16BC; emu_last_ip = 0x0066; emu_last_length = 0x0027; emu_last_crc = 0x0268; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__16BC_008F_0002_03A4()
 *
 * @name f__16BC_008F_0002_03A4
 * @implements 16BC:008F:0002:03A4 ()
 *
 * Called From: 16BC:0093:0004:0768
 */
void f__16BC_008F_0002_03A4()
{
	f__16BC_0095_0004_0F7A(); return;
}

/**
 * Decompiled function f__16BC_0091_0004_0768()
 *
 * @name f__16BC_0091_0004_0768
 * @implements 16BC:0091:0004:0768 ()
 *
 * Called From: 16BC:005A:0027:0268
 */
void f__16BC_0091_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__16BC_008F_0002_03A4(); return;
}

/**
 * Decompiled function f__16BC_0095_0004_0F7A()
 *
 * @name f__16BC_0095_0004_0F7A
 * @implements 16BC:0095:0004:0F7A ()
 *
 * Called From: 16BC:008F:0002:03A4
 */
void f__16BC_0095_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
