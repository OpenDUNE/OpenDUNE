/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2605_000C_006D_F8B2()
 *
 * @name f__2605_000C_006D_F8B2
 * @implements 2605:000C:006D:F8B2 ()
 *
 * Called From: 10E4:1F51:000B:7DDF
 * Called From: 25C4:032E:000D:B94B
 * Called From: B4ED:00CC:0016:C4B4
 * Called From: B4ED:0A99:000F:896B
 * Called From: B53B:00A1:0011:1ABA
 */
void f__2605_000C_006D_F8B2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F5));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x99F3));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00A2; emu_last_cs = 0x2605; emu_last_ip = 0x0025; emu_last_length = 0x006D; emu_last_crc = 0xF8B2; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x99F5), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x99F3), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C74), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C72), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x6C71), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x5));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x6C70), emu_al);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6650);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6652);
	emu_push(0x0079);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60902: f__22A6_0902_004B_01A8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2605; emu_last_ip = 0x0074; emu_last_length = 0x006D; emu_last_crc = 0xF8B2;
			emu_call();
			return;
	}
	f__2605_0079_0031_C92B();
}

/**
 * Decompiled function f__2605_0079_0031_C92B()
 *
 * @name f__2605_0079_0031_C92B
 * @implements 2605:0079:0031:C92B ()
 *
 */
void f__2605_0079_0031_C92B()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_bx);
	emu_divw(&emu_ax, emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D5F), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D63), emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C70));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D63));
	emu_cwd();
	emu_pop(&emu_bx);
	emu_idivw(&emu_ax, emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D61), emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__2605_00AA_0004_893F(); return;
}

/**
 * Decompiled function f__2605_00AA_0004_893F()
 *
 * @name f__2605_00AA_0004_893F
 * @implements 2605:00AA:0004:893F ()
 *
 * Called From: 2605:00A8:0031:C92B
 */
void f__2605_00AA_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
