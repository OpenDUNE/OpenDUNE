/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Video_IsInVSync()
 *
 * @name emu_Video_IsInVSync
 * @implements 2BEE:000E:0009:8881 ()
 *
 * Called From: 2533:0024:001C:74EC
 * Called From: 2533:0024:0005:716B
 */
void emu_Video_IsInVSync()
{
l__000E:
	emu_dx = 0x3DA;
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_ah, emu_ah);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Video_WaitForNextVSync()
 *
 * @name emu_Video_WaitForNextVSync
 * @implements 2BEE:0017:0028:0D9F ()
 * @implements 2BEE:0033:000C:3776
 *
 * Called From: B491:0701:0009:A037
 */
void emu_Video_WaitForNextVSync()
{
l__0017:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = 0x3DA;
	emu_andb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002C; emu_last_cs = 0x2BEE; emu_last_ip = 0x0031; emu_last_length = 0x0028; emu_last_crc = 0x0D9F; emu_call(); return; }
l__0033:
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) goto l__0033;
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
