/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__253D_023A_0038_2BAE()
 *
 * @name f__253D_023A_0038_2BAE
 * @implements 253D:023A:0038:2BAE ()
 * @implements 253D:0272:0039:AA2E
 * @implements 253D:02AB:0005:A4AE
 * @implements 253D:02BF:0026:AF12
 * @implements 253D:02E5:000D:2950
 * @implements 253D:02F2:0008:E949
 * @implements 253D:02FA:0005:8BCF
 *
 * Called From: 1587:0144:001A:412B
 * Called From: 253D:022C:000E:77E8
 */
void f__253D_023A_0038_2BAE()
{
l__023A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0272;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) { /* Unresolved jump */ emu_ip = 0x02B0; emu_last_cs = 0x253D; emu_last_ip = 0x0268; emu_last_length = 0x0038; emu_last_crc = 0x2BAE; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__02BF;
	goto l__02F2;
l__0272:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02AB); emu_cs = 0x2B0E; emu_Tools_Memmove();
l__02AB:
	emu_addw(&emu_sp, 0xC);
	goto l__02F2;
l__02BF:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2BD6; emu_Format80_Decode();
l__02E5:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	goto l__02F2;
l__02F2:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	goto l__02FA;
l__02FA:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
