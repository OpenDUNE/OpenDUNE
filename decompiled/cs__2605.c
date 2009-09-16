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
 */
void f__2605_000C_006D_F8B2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660B));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x660D));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x00A2; emu_last_cs = 0x2605; emu_last_ip = 0x0025; emu_last_length = 0x006D; emu_last_crc = 0xF8B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x660B), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x660D), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C74), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C72), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x6C71), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x6C70), emu_ax.l);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6650);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6652);
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
 * Called From: 2605:0079:006D:F8B2
 */
void f__2605_0079_0031_C92B()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D5F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D63), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D63));
	emu_cwd();
	emu_pop(&emu_bx.x);
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D61), emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
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
