/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0EDB_0594_0026_F09C()
 *
 * @name f__0EDB_0594_0026_F09C
 * @implements 0EDB:0594:0026:F09C ()
 * @implements 0EDB:05EB:0002:EDBA
 * @implements 0EDB:05F1:0016:B901
 * @implements 0EDB:0607:0005:902E
 * @implements 0EDB:0636:0012:C37B
 * @implements 0EDB:0648:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0594_0026_F09C()
{
l__0594:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_testw(&emu_si, 0xC000);
	if ((emu_si & 0xC000) == 0) goto l__05F1;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x167E; emu_Tools_Index_GetType();
	/* Unresolved jump */ emu_ip = 0x05BA; emu_last_cs = 0x0EDB; emu_last_ip = 0x05BA; emu_last_length = 0x0026; emu_last_crc = 0xF09C; emu_call();
l__05EB:
	goto l__0648;
l__05F1:
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0607); emu_cs = 0x1082; emu_Structure_FindFirst();
l__0607:
	emu_addw(&emu_sp, 0x8);
	goto l__0636;
l__0636:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x060C; emu_last_cs = 0x0EDB; emu_last_ip = 0x0642; emu_last_length = 0x0012; emu_last_crc = 0xC37B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	goto l__05EB;
l__0648:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
