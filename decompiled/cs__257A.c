/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__257A_000D_001A_3B75()
 *
 * @name f__257A_000D_001A_3B75
 * @implements 257A:000D:001A:3B75 ()
 * @implements 257A:005A:000F:3F8D
 * @implements 257A:0069:000F:0422
 * @implements 257A:0078:000D:1790
 * @implements 257A:0085:000B:C6B2
 * @implements 257A:0090:001C:84BD
 * @implements 257A:00AC:000E:7879
 * @implements 257A:00BA:0010:93CF
 * @implements 257A:00CA:000A:CA33
 * @implements 257A:00D4:0004:8D1B
 * @implements 257A:01D0:0010:5104
 *
 * Called From: B4B8:21AE:0015:8E2E
 */
void f__257A_000D_001A_3B75()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x002A; emu_last_cs = 0x257A; emu_last_ip = 0x0018; emu_last_length = 0x001A; emu_last_crc = 0x3B75; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__005A;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) { /* Unresolved jump */ emu_ip = 0x0027; emu_last_cs = 0x257A; emu_last_ip = 0x0022; emu_last_length = 0x001A; emu_last_crc = 0x3B75; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x00D8; emu_last_cs = 0x257A; emu_last_ip = 0x0024; emu_last_length = 0x001A; emu_last_crc = 0x3B75; emu_call();
l__005A:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7011), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x7011) != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x00D5; emu_last_cs = 0x257A; emu_last_ip = 0x005F; emu_last_length = 0x000F; emu_last_crc = 0x3F8D; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x1FB5; f__1FB5_17D7_0018_F3C7();
l__0069:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0078); emu_cs = 0x1FB5; f__1FB5_17FE_0011_2DA9();
l__0078:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0085); emu_cs = 0x1FB5; f__1FB5_189B_0010_8453();
l__0085:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1234;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
l__0090:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x76A4) = 0x1234;
	emu_get_memory16(emu_ds, 0x00, 0x76A2) = 0x4321;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x00AC); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
l__00AC:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x7011) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x00BA); emu_cs = 0x1FB5; f__1FB5_17D7_0018_F3C7();
l__00BA:
	emu_pop(&emu_cx);
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ds, 0x00, 0x7010) = emu_al;
	emu_ax = 0x800;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
l__00CA:
	emu_pop(&emu_cx);
	emu_ax = 0x2D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D4); emu_cs = 0x29E8; emu_Input_HandleInput();
l__00D4:
	emu_pop(&emu_cx);
	goto l__01D0;
l__01D0:
	emu_get_memory16(emu_ds, 0x00, 0x76A6) = 0x0;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_get_memory8(emu_ds, 0x00, 0x7010) = emu_al;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
