/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Structure_StringToID()
 *
 * @name emu_Structure_StringToID
 * @implements B530:0000:0010:8273 ()
 * @implements B530:0010:0023:BD3C
 * @implements B530:0033:000B:E2C7
 * @implements B530:003C:0002:C5BA
 * @implements B530:003E:000B:90D9
 * @implements B530:003F:000A:50D1
 * @implements B530:0044:0005:5395
 * @implements B530:0049:0003:2E57
 *
 * Called From: 3530:0020:0005:0000
 */
void emu_Structure_StringToID()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__0044;
	emu_xorw(&emu_si, emu_si);
	goto l__003F;
l__0010:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_si;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x01F7; emu_String_strcasecmp();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3530) { overlay(0x3530, 1); }
l__0033:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__003E;
	emu_ax = emu_si;
l__003C:
	goto l__0049;
l__003E:
	emu_incw(&emu_si);
l__003F:
	emu_cmpw(&emu_si, 0x13);
	if ((int16)emu_si < (int16)0x13) goto l__0010;
l__0044:
	emu_ax = 0xFFFF;
	goto l__003C;
l__0049:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
