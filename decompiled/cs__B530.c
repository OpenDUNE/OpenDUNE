/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B530_0000_0010_8273()
 *
 * @name f__B530_0000_0010_8273
 * @implements B530:0000:0010:8273 ()
 * @implements B530:0010:0023:BD3C
 * @implements B530:0033:000B:E2C7
 * @implements B530:003E:000B:90D9
 * @implements B530:003F:000A:50D1
 * @implements B530:0049:0003:2E57
 *
 * Called From: 3530:0020:0005:0000
 */
void f__B530_0000_0010_8273()
{
l__0000:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0044; emu_last_cs = 0xB530; emu_last_ip = 0x000A; emu_last_length = 0x0010; emu_last_crc = 0x8273; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	goto l__003F;
l__0010:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3530) { ovl__3530(0xFF); }
	goto l__0033;
l__0033:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) goto l__003E;
	emu_movw(&emu_ax, emu_si);
	goto l__0049;
l__003E:
	emu_incw(&emu_si);
	goto l__003F;
l__003F:
	emu_cmpw(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) goto l__0010;
	emu_movw(&emu_ax, 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x003C; emu_last_cs = 0xB530; emu_last_ip = 0x0047; emu_last_length = 0x000A; emu_last_crc = 0x50D1; emu_call();
l__0049:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
