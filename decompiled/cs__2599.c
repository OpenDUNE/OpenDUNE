/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2599_000B_0047_EC47()
 *
 * @name f__2599_000B_0047_EC47
 * @implements 2599:000B:0047:EC47 ()
 *
 * Called From: 10E4:042A:000A:34DE
 * Called From: 10E4:042A:0023:1254
 * Called From: 10E4:0500:000A:34DE
 * Called From: 10E4:0500:0023:02DC
 */
void f__2599_000B_0047_EC47()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4062), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4064), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4066), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4068), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x6D5D), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x0053; emu_last_cs = 0x2599; emu_last_ip = 0x004A; emu_last_length = 0x0047; emu_last_crc = 0xEC47; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0052); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__2599_0052_0004_0782();
}

/**
 * Decompiled function f__2599_0052_0004_0782()
 *
 * @name f__2599_0052_0004_0782
 * @implements 2599:0052:0004:0782 ()
 *
 * Called From: 2599:0052:0047:EC47
 */
void f__2599_0052_0004_0782()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
