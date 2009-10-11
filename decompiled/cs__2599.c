/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2599_000B_0047_21FD()
 *
 * @name f__2599_000B_0047_21FD
 * @implements 2599:000B:0047:21FD ()
 * @implements 2599:0052:0004:BE52
 *
 * Called From: 10E4:042A:000A:B32B
 * Called From: 10E4:042A:0023:24DC
 * Called From: 10E4:0500:000A:B32B
 * Called From: 10E4:0500:0023:24EB
 */
void f__2599_000B_0047_21FD()
{
l__000B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ds, emu_bx, 0x4062) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, emu_bx, 0x4064) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_ds, emu_bx, 0x4066) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_ds, emu_bx, 0x4068) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D5D), emu_si);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D5D) != emu_si) { /* Unresolved jump */ emu_ip = 0x0053; emu_last_cs = 0x2599; emu_last_ip = 0x004A; emu_last_length = 0x0047; emu_last_crc = 0x21FD; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0052); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	goto l__0052;
l__0052:
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
