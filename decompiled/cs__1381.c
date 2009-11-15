/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Movement_StringToID()
 *
 * @name emu_Movement_StringToID
 * @implements 1381:0096:0008:1ADC ()
 * @implements 1381:009E:0019:21DF
 * @implements 1381:00B7:000B:E2C7
 * @implements 1381:00C0:0002:C5BA
 * @implements 1381:00C2:000B:EDD9
 * @implements 1381:00C3:000A:2DD1
 * @implements 1381:00CD:0003:2E57
 *
 * Called From: B4B5:0F27:000A:457E
 */
void emu_Movement_StringToID()
{
l__0096:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__00C3;
l__009E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BE4));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BE2));
	emu_push(emu_cs); emu_push(0x00B7); emu_cs = 0x01F7; emu_String_strcasecmp();
l__00B7:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00C2;
	emu_ax = emu_si;
l__00C0:
	goto l__00CD;
l__00C2:
	emu_incw(&emu_si);
l__00C3:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si < (int16)0x6) goto l__009E;
	emu_ax = 0xFFFF;
	goto l__00C0;
l__00CD:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Action2_StringToID()
 *
 * @name emu_Action2_StringToID
 * @implements 1381:00D0:0008:1ADC ()
 * @implements 1381:00D8:0019:21EC
 * @implements 1381:00F1:000B:E2C7
 * @implements 1381:00FC:000B:EED9
 * @implements 1381:00FD:000A:2ED1
 * @implements 1381:0107:0003:2E57
 *
 * Called From: B4B5:0F02:000A:257A
 */
void emu_Action2_StringToID()
{
l__00D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__00FD;
l__00D8:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BFC));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BFA));
	emu_push(emu_cs); emu_push(0x00F1); emu_cs = 0x01F7; emu_String_strcasecmp();
l__00F1:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00FC;
	emu_ax = emu_si;
	goto l__0107;
l__00FC:
	emu_incw(&emu_si);
l__00FD:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si < (int16)0x5) goto l__00D8;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x00FA; emu_last_cs = 0x1381; emu_last_ip = 0x0105; emu_last_length = 0x000A; emu_last_crc = 0x2ED1; emu_call();
l__0107:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
