/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2502_0008_0015_FFBD()
 *
 * @name f__2502_0008_0015_FFBD
 * @implements 2502:0008:0015:FFBD ()
 * @implements 2502:001D:0016:2C58
 * @implements 2502:0033:0024:59EB
 * @implements 2502:0039:001E:8FAC
 * @implements 2502:0045:0012:9F29
 *
 * Called From: B4DA:1168:0014:EB5F
 * Called From: B4DA:1228:0014:EB5F
 * Called From: B4DA:12C3:0014:EB5F
 * Called From: B4DA:1391:0014:EB5F
 * Called From: B4DA:1557:0014:EB5F
 * Called From: B4DA:15BB:0014:EB5F
 * Called From: B4DA:15FD:0014:EB5F
 * Called From: B4E0:06DD:0014:F31D
 * Called From: B4E0:07B2:0014:EB5E
 * Called From: B511:0DCD:0018:314D
 * Called From: B511:1324:0018:314D
 */
void f__2502_0008_0015_FFBD()
{
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x2502; emu_last_ip = 0x0011; emu_last_length = 0x0015; emu_last_crc = 0xFFBD; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0055; emu_last_cs = 0x2502; emu_last_ip = 0x0019; emu_last_length = 0x0015; emu_last_crc = 0xFFBD; emu_call(); return; }
	goto l__0045;
l__001D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x1B);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x1B) goto l__0033;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_addb(&emu_al, 0x7F);
	goto l__0039;
l__0033:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
l__0039:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
l__0045:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__001D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
