/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__28E6_000A_0040_30F7()
 *
 * @name f__28E6_000A_0040_30F7
 * @implements 28E6:000A:0040:30F7 ()
 *
 * Called From: B52A:06DC:005B:E884
 * Called From: B52A:06DC:0063:0C07
 */
void f__28E6_000A_0040_30F7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_andws(&emu_bx.x, 0x3);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x2);
	if (emu_flags.zf) { f__28E6_0041_0009_8983(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6F20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6F1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x16), emu_ax.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x252E; emu_ip = 0x0065; emu_last_cs = 0x28E6; emu_last_ip = 0x0045; emu_last_length = 0x0040; emu_last_crc = 0x30F7; emu_call(); // Jump does not resolve
	f__28E6_004A_0044_AB6B();
}

/**
 * Decompiled function f__28E6_0041_0009_8983()
 *
 * @name f__28E6_0041_0009_8983
 * @implements 28E6:0041:0009:8983 ()
 *
 * Called From: 28E6:002D:0040:30F7
 */
void f__28E6_0041_0009_8983()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x252E; f__252E_001B_0018_30C5();
	f__28E6_004A_0044_AB6B();
}

/**
 * Decompiled function f__28E6_004A_0044_AB6B()
 *
 * @name f__28E6_004A_0044_AB6B
 * @implements 28E6:004A:0044:AB6B ()
 *
 * Called From: 28E6:004A:0009:8983
 */
void f__28E6_004A_0044_AB6B()
{
	emu_addws(&emu_sp, 0x2);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_si, 0x4062);
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.sf) { f__28E6_009C_006D_16F8(); return; }
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x008E; emu_last_cs = 0x28E6; emu_last_ip = 0x0089; emu_last_length = 0x0044; emu_last_crc = 0xAB6B; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0117; emu_last_cs = 0x28E6; emu_last_ip = 0x008B; emu_last_length = 0x0044; emu_last_crc = 0xAB6B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__28E6_009C_006D_16F8()
 *
 * @name f__28E6_009C_006D_16F8
 * @implements 28E6:009C:006D:16F8 ()
 *
 * Called From: 28E6:0084:0044:AB6B
 */
void f__28E6_009C_006D_16F8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.sf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00A2; emu_last_length = 0x006D; emu_last_crc = 0x16F8; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00A4; emu_last_length = 0x006D; emu_last_crc = 0x16F8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { f__28E6_00AE_005B_3B7A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.sf) { emu_ip = 0x00C6; emu_last_cs = 0x28E6; emu_last_ip = 0x00B9; emu_last_length = 0x006D; emu_last_crc = 0x16F8; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.sf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D1; emu_last_length = 0x006D; emu_last_crc = 0x16F8; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D3; emu_last_length = 0x006D; emu_last_crc = 0x16F8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { emu_ip = 0x00E3; emu_last_cs = 0x28E6; emu_last_ip = 0x00D8; emu_last_length = 0x006D; emu_last_crc = 0x16F8; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp,  0xA), &emu_ax.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(0x0109);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x28E6; emu_last_ip = 0x0106; emu_last_length = 0x006D; emu_last_crc = 0x16F8;
			emu_call();
			return;
	}
	f__28E6_0109_001A_D771();
}

/**
 * Decompiled function f__28E6_00AE_005B_3B7A()
 *
 * @name f__28E6_00AE_005B_3B7A
 * @implements 28E6:00AE:005B:3B7A ()
 *
 * Called From: 28E6:00A9:006D:16F8
 */
void f__28E6_00AE_005B_3B7A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.sf) { f__28E6_00C6_0043_A1D3(); return; }
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.sf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D1; emu_last_length = 0x005B; emu_last_crc = 0x3B7A; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D3; emu_last_length = 0x005B; emu_last_crc = 0x3B7A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { emu_ip = 0x00E3; emu_last_cs = 0x28E6; emu_last_ip = 0x00D8; emu_last_length = 0x005B; emu_last_crc = 0x3B7A; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp,  0xA), &emu_ax.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(0x0109);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x28E6; emu_last_ip = 0x0106; emu_last_length = 0x005B; emu_last_crc = 0x3B7A;
			emu_call();
			return;
	}
	f__28E6_0109_001A_D771();
}

/**
 * Decompiled function f__28E6_00C6_0043_A1D3()
 *
 * @name f__28E6_00C6_0043_A1D3
 * @implements 28E6:00C6:0043:A1D3 ()
 *
 * Called From: 28E6:00B9:005B:3B7A
 */
void f__28E6_00C6_0043_A1D3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.sf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D1; emu_last_length = 0x0043; emu_last_crc = 0xA1D3; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D3; emu_last_length = 0x0043; emu_last_crc = 0xA1D3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { f__28E6_00E3_0026_C3EB(); return; }
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp,  0xA), &emu_ax.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(0x0109);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x28E6; emu_last_ip = 0x0106; emu_last_length = 0x0043; emu_last_crc = 0xA1D3;
			emu_call();
			return;
	}
	f__28E6_0109_001A_D771();
}

/**
 * Decompiled function f__28E6_00E3_0026_C3EB()
 *
 * @name f__28E6_00E3_0026_C3EB
 * @implements 28E6:00E3:0026:C3EB ()
 *
 * Called From: 28E6:00D8:0043:A1D3
 */
void f__28E6_00E3_0026_C3EB()
{
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(0x0109);
	switch (emu_ip) {
		case 0x0123: f__28E6_0123_000A_09EC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x28E6; emu_last_ip = 0x0106; emu_last_length = 0x0026; emu_last_crc = 0xC3EB;
			emu_call();
			return;
	}
	f__28E6_0109_001A_D771();
}

/**
 * Decompiled function f__28E6_0100_0009_27E0()
 *
 * @name f__28E6_0100_0009_27E0
 * @implements 28E6:0100:0009:27E0 ()
 *
 * Called From: 28E6:0115:001A:D771
 */
void f__28E6_0100_0009_27E0()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(0x0109);
	switch (emu_ip) {
		case 0x0123: f__28E6_0123_000A_09EC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x28E6; emu_last_ip = 0x0106; emu_last_length = 0x0009; emu_last_crc = 0x27E0;
			emu_call();
			return;
	}
	f__28E6_0109_001A_D771();
}

/**
 * Decompiled function f__28E6_0109_001A_D771()
 *
 * @name f__28E6_0109_001A_D771
 * @implements 28E6:0109:001A:D771 ()
 *
 * Called From: 28E6:0109:0009:27E0
 * Called From: 28E6:0109:0026:C3EB
 */
void f__28E6_0109_001A_D771()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x140);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__28E6_0100_0009_27E0(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__28E6_0123_000A_09EC()
 *
 * @name f__28E6_0123_000A_09EC
 * @implements 28E6:0123:000A:09EC ()
 *
 * Called From: 28E6:0106:0009:27E0
 * Called From: 28E6:0106:0026:C3EB
 */
void f__28E6_0123_000A_09EC()
{
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcws(&emu_cx.x, 0x0);
	emu_rep_movsb(emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}
