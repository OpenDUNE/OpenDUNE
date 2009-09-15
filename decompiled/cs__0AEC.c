/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0AEC_004F_0024_F897()
 *
 * @name f__0AEC_004F_0024_F897
 * @implements 0AEC:004F:0024:F897 ()
 *
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:003E:3BAF
 * Called From: B4A2:06AC:0040:BBDA
 */
void f__0AEC_004F_0024_F897()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subws(&emu_bx.x, 0x27);
	emu_cmpws(&emu_bx.x, 0x6);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x009E; emu_last_cs = 0x0AEC; emu_last_ip = 0x006A; emu_last_length = 0x0024; emu_last_crc = 0xF897; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x7FB);
	switch (emu_ip) {
		case 0x0073: f__0AEC_0073_0007_6E60(); return;
		case 0x007A: f__0AEC_007A_0008_A5B0(); return;
		case 0x0082: f__0AEC_0082_0007_6E12(); return;
		case 0x0089: f__0AEC_0089_0007_6E2C(); return;
		case 0x0097: f__0AEC_0097_0007_6E18(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x006E; emu_last_length = 0x0024; emu_last_crc = 0xF897;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_0073_0007_6E60()
 *
 * @name f__0AEC_0073_0007_6E60
 * @implements 0AEC:0073:0007:6E60 ()
 *
 * Called From: 0AEC:006E:0024:F897
 */
void f__0AEC_0073_0007_6E60()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__0AEC_00A0_0048_F42C(); return;
}

/**
 * Decompiled function f__0AEC_007A_0008_A5B0()
 *
 * @name f__0AEC_007A_0008_A5B0
 * @implements 0AEC:007A:0008:A5B0 ()
 *
 * Called From: 0AEC:006E:0024:F897
 */
void f__0AEC_007A_0008_A5B0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A36));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__0AEC_00A0_0048_F42C(); return;
}

/**
 * Decompiled function f__0AEC_0082_0007_6E12()
 *
 * @name f__0AEC_0082_0007_6E12
 * @implements 0AEC:0082:0007:6E12 ()
 *
 * Called From: 0AEC:006E:0024:F897
 */
void f__0AEC_0082_0007_6E12()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__0AEC_00A0_0048_F42C(); return;
}

/**
 * Decompiled function f__0AEC_0089_0007_6E2C()
 *
 * @name f__0AEC_0089_0007_6E2C
 * @implements 0AEC:0089:0007:6E2C ()
 *
 * Called From: 0AEC:006E:0024:F897
 */
void f__0AEC_0089_0007_6E2C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	f__0AEC_00A0_0048_F42C(); return;
}

/**
 * Decompiled function f__0AEC_0097_0007_6E18()
 *
 * @name f__0AEC_0097_0007_6E18
 * @implements 0AEC:0097:0007:6E18 ()
 *
 * Called From: 0AEC:006E:0024:F897
 */
void f__0AEC_0097_0007_6E18()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3);
	f__0AEC_00A0_0048_F42C(); return;
}

/**
 * Decompiled function f__0AEC_00A0_0048_F42C()
 *
 * @name f__0AEC_00A0_0048_F42C
 * @implements 0AEC:00A0:0048:F42C ()
 *
 * Called From: 0AEC:0078:0007:6E60
 * Called From: 0AEC:0080:0008:A5B0
 * Called From: 0AEC:0087:0007:6E12
 * Called From: 0AEC:008E:0007:6E2C
 * Called From: 0AEC:009C:0007:6E18
 */
void f__0AEC_00A0_0048_F42C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A34));
	if (emu_flags.zf) { f__0AEC_00F1_0010_9E31(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343A), emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3444));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3442));
	emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	f__0AEC_00E8_0019_784C();
}

/**
 * Decompiled function f__0AEC_00E8_0019_784C()
 *
 * @name f__0AEC_00E8_0019_784C
 * @implements 0AEC:00E8:0019:784C ()
 *
 * Called From: 0AEC:00E8:0048:F42C
 */
void f__0AEC_00E8_0019_784C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2D);
	if (!emu_flags.zf) { f__0AEC_0101_0022_5B90(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_07ED_0006_137A(); return;
}

/**
 * Decompiled function f__0AEC_00F1_0010_9E31()
 *
 * @name f__0AEC_00F1_0010_9E31
 * @implements 0AEC:00F1:0010:9E31 ()
 *
 * Called From: 0AEC:00A7:0048:F42C
 */
void f__0AEC_00F1_0010_9E31()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2D);
	if (!emu_flags.zf) { f__0AEC_0101_0022_5B90(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_07ED_0006_137A(); return;
}

/**
 * Decompiled function f__0AEC_00FB_0006_2AD4()
 *
 * @name f__0AEC_00FB_0006_2AD4
 * @implements 0AEC:00FB:0006:2AD4 ()
 *
 * Called From: 0AEC:01F3:0003:06A2
 * Called From: 0AEC:01F3:0004:0332
 * Called From: 0AEC:0716:0003:0532
 * Called From: 0AEC:0716:0006:3D12
 * Called From: 0AEC:07A1:0003:07E6
 * Called From: 0AEC:07A1:0004:0276
 * Called From: 0AEC:07E7:0004:036E
 * Called From: 0AEC:07EA:0003:0682
 */
void f__0AEC_00FB_0006_2AD4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_07ED_0006_137A(); return;
}

/**
 * Decompiled function f__0AEC_0101_0022_5B90()
 *
 * @name f__0AEC_0101_0022_5B90
 * @implements 0AEC:0101:0022:5B90 ()
 *
 * Called From: 0AEC:00F9:0010:9E31
 * Called From: 0AEC:00F9:0019:784C
 */
void f__0AEC_0101_0022_5B90()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1100);
	if (emu_flags.zf) { f__0AEC_0123_0032_6480(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B8), 0x0);
	f__0AEC_013A_001B_B07A(); return;
}

/**
 * Decompiled function f__0AEC_0123_0032_6480()
 *
 * @name f__0AEC_0123_0032_6480
 * @implements 0AEC:0123:0032:6480 ()
 *
 * Called From: 0AEC:0114:0022:5B90
 */
void f__0AEC_0123_0032_6480()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x2200);
	if (emu_flags.zf) { f__0AEC_013A_001B_B07A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B8), 0x0);
	if (!emu_flags.zf) { f__0AEC_013A_001B_B07A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subws(&emu_bx.x, 0x27);
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0AEC_0171_0007_6664(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x7F3);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0150; emu_last_length = 0x0032; emu_last_crc = 0x6480;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_013A_001B_B07A()
 *
 * @name f__0AEC_013A_001B_B07A
 * @implements 0AEC:013A:001B:B07A ()
 *
 * Called From: 0AEC:0121:0022:5B90
 * Called From: 0AEC:012C:0032:6480
 * Called From: 0AEC:0133:0032:6480
 */
void f__0AEC_013A_001B_B07A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subws(&emu_bx.x, 0x27);
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0AEC_0171_0007_6664(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x7F3);
	switch (emu_ip) {
		case 0x015C: f__0AEC_015C_0007_6E66(); return;
		case 0x0163: f__0AEC_0163_0007_6E70(); return;
		case 0x016A: f__0AEC_016A_0007_6E22(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0150; emu_last_length = 0x001B; emu_last_crc = 0xB07A;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_015C_0007_6E66()
 *
 * @name f__0AEC_015C_0007_6E66
 * @implements 0AEC:015C:0007:6E66 ()
 *
 * Called From: 0AEC:0150:001B:B07A
 */
void f__0AEC_015C_0007_6E66()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	f__0AEC_0178_007A_9F70(); return;
}

/**
 * Decompiled function f__0AEC_0163_0007_6E70()
 *
 * @name f__0AEC_0163_0007_6E70
 * @implements 0AEC:0163:0007:6E70 ()
 *
 * Called From: 0AEC:0150:001B:B07A
 */
void f__0AEC_0163_0007_6E70()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__0AEC_0178_007A_9F70(); return;
}

/**
 * Decompiled function f__0AEC_016A_0007_6E22()
 *
 * @name f__0AEC_016A_0007_6E22
 * @implements 0AEC:016A:0007:6E22 ()
 *
 * Called From: 0AEC:0150:001B:B07A
 */
void f__0AEC_016A_0007_6E22()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	f__0AEC_0178_007A_9F70(); return;
}

/**
 * Decompiled function f__0AEC_0171_0007_6664()
 *
 * @name f__0AEC_0171_0007_6664
 * @implements 0AEC:0171:0007:6664 ()
 *
 * Called From: 0AEC:014C:001B:B07A
 * Called From: 0AEC:014C:0032:6480
 */
void f__0AEC_0171_0007_6664()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	f__0AEC_0178_007A_9F70(); return;
}

/**
 * Decompiled function f__0AEC_0178_007A_9F70()
 *
 * @name f__0AEC_0178_007A_9F70
 * @implements 0AEC:0178:007A:9F70 ()
 *
 * Called From: 0AEC:0161:0007:6E66
 * Called From: 0AEC:0168:0007:6E70
 * Called From: 0AEC:016F:0007:6E22
 * Called From: 0AEC:0176:0007:6664
 */
void f__0AEC_0178_007A_9F70()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (emu_flags.zf) { f__0AEC_01F6_000F_D021(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3440));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x343E));
	emu_addws(&emu_dx.x, 0xA);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x018F; emu_last_length = 0x007A; emu_last_crc = 0x9F70; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__0AEC_0199_0059_9BEC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0AEC_01D0_0022_BBE8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x343C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x343A));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AA; emu_last_length = 0x007A; emu_last_crc = 0x9F70; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x01B4; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AC; emu_last_length = 0x007A; emu_last_crc = 0x9F70; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0AEC_01D0_0022_BBE8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41CA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0x0AEC; emu_last_ip = 0x01B9; emu_last_length = 0x007A; emu_last_crc = 0x9F70; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671B), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01C0; emu_last_length = 0x007A; emu_last_crc = 0x9F70; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x4);
	if (emu_flags.zf) { f__0AEC_01D0_0022_BBE8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x3);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_6677(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_6677(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_01F3_0003_06A2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; emu_ip = 0x0627; emu_last_cs = 0x0AEC; emu_last_ip = 0x01ED; emu_last_length = 0x007A; emu_last_crc = 0x9F70; emu_call(); // Jump does not resolve
	f__0AEC_01F2_0004_0332();
}

/**
 * Decompiled function f__0AEC_0199_0059_9BEC()
 *
 * @name f__0AEC_0199_0059_9BEC
 * @implements 0AEC:0199:0059:9BEC ()
 *
 * Called From: 0AEC:0191:007A:9F70
 */
void f__0AEC_0199_0059_9BEC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x343C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x343A));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AA; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x01B4; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AC; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0AEC_01D0_0022_BBE8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41CA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0x0AEC; emu_last_ip = 0x01B9; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671B), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01C0; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x4);
	if (emu_flags.zf) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01C7; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0x0AEC; emu_last_ip = 0x01CE; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_6677(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_01F3_0003_06A2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; emu_ip = 0x0627; emu_last_cs = 0x0AEC; emu_last_ip = 0x01ED; emu_last_length = 0x0059; emu_last_crc = 0x9BEC; emu_call(); // Jump does not resolve
	f__0AEC_01F2_0004_0332();
}

/**
 * Decompiled function f__0AEC_01D0_0022_BBE8()
 *
 * @name f__0AEC_01D0_0022_BBE8
 * @implements 0AEC:01D0:0022:BBE8 ()
 *
 * Called From: 0AEC:0197:007A:9F70
 * Called From: 0AEC:01B2:007A:9F70
 * Called From: 0AEC:01B2:0059:9BEC
 * Called From: 0AEC:01C7:007A:9F70
 */
void f__0AEC_01D0_0022_BBE8()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_6677(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_01F3_0003_06A2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; emu_ip = 0x0627; emu_last_cs = 0x0AEC; emu_last_ip = 0x01ED; emu_last_length = 0x0022; emu_last_crc = 0xBBE8; emu_call(); // Jump does not resolve
	f__0AEC_01F2_0004_0332();
}

/**
 * Decompiled function f__0AEC_01DC_0016_6677()
 *
 * @name f__0AEC_01DC_0016_6677
 * @implements 0AEC:01DC:0016:6677 ()
 *
 * Called From: 0AEC:01CE:007A:9F70
 * Called From: 0AEC:01D4:007A:9F70
 * Called From: 0AEC:01D4:0022:BBE8
 * Called From: 0AEC:01D4:0059:9BEC
 */
void f__0AEC_01DC_0016_6677()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; f__0F78_0435_000E_A5D2();
	f__0AEC_01F2_0004_0332();
}

/**
 * Decompiled function f__0AEC_01F2_0004_0332()
 *
 * @name f__0AEC_01F2_0004_0332
 * @implements 0AEC:01F2:0004:0332 ()
 *
 * Called From: 0AEC:01F2:0016:6677
 */
void f__0AEC_01F2_0004_0332()
{
	emu_pop(&emu_cx.x);
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_01F3_0003_06A2()
 *
 * @name f__0AEC_01F3_0003_06A2
 * @implements 0AEC:01F3:0003:06A2 ()
 *
 * Called From: 0AEC:01DA:0022:BBE8
 * Called From: 0AEC:01DA:007A:9F70
 * Called From: 0AEC:01DA:0059:9BEC
 */
void f__0AEC_01F3_0003_06A2()
{
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_01F6_000F_D021()
 *
 * @name f__0AEC_01F6_000F_D021
 * @implements 0AEC:01F6:000F:D021 ()
 *
 * Called From: 0AEC:017C:007A:9F70
 */
void f__0AEC_01F6_000F_D021()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__0AEC_0205_001E_8301(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	f__0AEC_020C_0017_3323(); return;
}

/**
 * Decompiled function f__0AEC_0205_001E_8301()
 *
 * @name f__0AEC_0205_001E_8301
 * @implements 0AEC:0205:001E:8301 ()
 *
 * Called From: 0AEC:01FA:000F:D021
 */
void f__0AEC_0205_001E_8301()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_ax.x, 0x2B);
	if (emu_flags.zf) { f__0AEC_0223_0022_3B21(); return; }
	emu_cmpw(&emu_ax.x, 0x2C);
	if (emu_flags.zf) { f__0AEC_0261_000A_E8A1(); return; }
	emu_ip = 0x033F; emu_last_cs = 0x0AEC; emu_last_ip = 0x0220; emu_last_length = 0x001E; emu_last_crc = 0x8301; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_020C_0017_3323()
 *
 * @name f__0AEC_020C_0017_3323
 * @implements 0AEC:020C:0017:3323 ()
 *
 * Called From: 0AEC:0203:000F:D021
 */
void f__0AEC_020C_0017_3323()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_ax.x, 0x2B);
	if (emu_flags.zf) { f__0AEC_0223_0022_3B21(); return; }
	emu_cmpw(&emu_ax.x, 0x2C);
	if (emu_flags.zf) { f__0AEC_0261_000A_E8A1(); return; }
	emu_ip = 0x033F; emu_last_cs = 0x0AEC; emu_last_ip = 0x0220; emu_last_length = 0x0017; emu_last_crc = 0x3323; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0223_0022_3B21()
 *
 * @name f__0AEC_0223_0022_3B21
 * @implements 0AEC:0223:0022:3B21 ()
 *
 * Called From: 0AEC:0219:001E:8301
 * Called From: 0AEC:0219:0017:3323
 */
void f__0AEC_0223_0022_3B21()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_bx.x, 0x10);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0xFFD8);
	emu_movw(&emu_bx.x, 0x10);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__0AEC_0245_0010_3888();
}

/**
 * Decompiled function f__0AEC_0245_0010_3888()
 *
 * @name f__0AEC_0245_0010_3888
 * @implements 0AEC:0245:0010:3888 ()
 *
 * Called From: 0AEC:0245:0022:3B21
 */
void f__0AEC_0245_0010_3888()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_di, emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0255); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__0AEC_0255_000C_34D1();
}

/**
 * Decompiled function f__0AEC_0255_000C_34D1()
 *
 * @name f__0AEC_0255_000C_34D1
 * @implements 0AEC:0255:000C:34D1 ()
 *
 * Called From: 0AEC:0255:0010:3888
 */
void f__0AEC_0255_000C_34D1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__0AEC_033F_0009_F1BB(); return;
}

/**
 * Decompiled function f__0AEC_0261_000A_E8A1()
 *
 * @name f__0AEC_0261_000A_E8A1
 * @implements 0AEC:0261:000A:E8A1 ()
 *
 * Called From: 0AEC:021E:001E:8301
 * Called From: 0AEC:021E:0017:3323
 */
void f__0AEC_0261_000A_E8A1()
{
	emu_cmpw(&emu_di, 0x100);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0AEC_026B_0045_CD61(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0AEC_026E_0042_DA69(); return;
}

/**
 * Decompiled function f__0AEC_026B_0045_CD61()
 *
 * @name f__0AEC_026B_0045_CD61
 * @implements 0AEC:026B:0045:CD61 ()
 *
 * Called From: 0AEC:0265:000A:E8A1
 */
void f__0AEC_026B_0045_CD61()
{
	emu_movw(&emu_ax.x, 0x100);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0xFF00);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_bx.x);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B0; emu_last_cs = 0x0AEC; emu_last_ip = 0x02AA; emu_last_length = 0x0045; emu_last_crc = 0xCD61; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__0AEC_02C9_000E_C76E(); return;
}

/**
 * Decompiled function f__0AEC_026E_0042_DA69()
 *
 * @name f__0AEC_026E_0042_DA69
 * @implements 0AEC:026E:0042:DA69 ()
 *
 * Called From: 0AEC:0269:000A:E8A1
 */
void f__0AEC_026E_0042_DA69()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0xFF00);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_bx.x);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B0; emu_last_cs = 0x0AEC; emu_last_ip = 0x02AA; emu_last_length = 0x0042; emu_last_crc = 0xDA69; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__0AEC_02C9_000E_C76E(); return;
}

/**
 * Decompiled function f__0AEC_02C9_000E_C76E()
 *
 * @name f__0AEC_02C9_000E_C76E
 * @implements 0AEC:02C9:000E:C76E ()
 *
 * Called From: 0AEC:02AE:0042:DA69
 * Called From: 0AEC:02AE:0045:CD61
 */
void f__0AEC_02C9_000E_C76E()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x88);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0AEC_02D7_004A_5FC6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_02DA_0047_AFC5(); return;
}

/**
 * Decompiled function f__0AEC_02D7_004A_5FC6()
 *
 * @name f__0AEC_02D7_004A_5FC6
 * @implements 0AEC:02D7:004A:5FC6 ()
 *
 * Called From: 0AEC:02D0:000E:C76E
 */
void f__0AEC_02D7_004A_5FC6()
{
	emu_movw(&emu_ax.x, 0x88);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0xFF78);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_bx.x);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0321; emu_last_cs = 0x0AEC; emu_last_ip = 0x031A; emu_last_length = 0x004A; emu_last_crc = 0x5FC6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_033A_0005_115C(); return;
}

/**
 * Decompiled function f__0AEC_02DA_0047_AFC5()
 *
 * @name f__0AEC_02DA_0047_AFC5
 * @implements 0AEC:02DA:0047:AFC5 ()
 *
 * Called From: 0AEC:02D5:000E:C76E
 */
void f__0AEC_02DA_0047_AFC5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0xFF78);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_bx.x);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0AEC_0321_001E_2B43(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_033A_0005_115C(); return;
}

/**
 * Decompiled function f__0AEC_0321_001E_2B43()
 *
 * @name f__0AEC_0321_001E_2B43
 * @implements 0AEC:0321:001E:2B43 ()
 *
 * Called From: 0AEC:031A:0047:AFC5
 */
void f__0AEC_0321_001E_2B43()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__0AEC_033F_0009_F1BB(); return;
}

/**
 * Decompiled function f__0AEC_033A_0005_115C()
 *
 * @name f__0AEC_033A_0005_115C
 * @implements 0AEC:033A:0005:115C ()
 *
 * Called From: 0AEC:031F:0047:AFC5
 * Called From: 0AEC:031F:004A:5FC6
 */
void f__0AEC_033A_0005_115C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__0AEC_033F_0009_F1BB(); return;
}

/**
 * Decompiled function f__0AEC_033F_0009_F1BB()
 *
 * @name f__0AEC_033F_0009_F1BB
 * @implements 0AEC:033F:0009:F1BB ()
 *
 * Called From: 0AEC:025E:000C:34D1
 * Called From: 0AEC:033D:0005:115C
 * Called From: 0AEC:033D:001E:2B43
 */
void f__0AEC_033F_0009_F1BB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0348); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	f__0AEC_0348_000E_1ECB();
}

/**
 * Decompiled function f__0AEC_0348_000E_1ECB()
 *
 * @name f__0AEC_0348_000E_1ECB
 * @implements 0AEC:0348:000E:1ECB ()
 *
 * Called From: 0AEC:0348:0009:F1BB
 */
void f__0AEC_0348_000E_1ECB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_0356_000A_6B64(); return; }
	f__0AEC_04D7_0009_0C39(); return;
}

/**
 * Decompiled function f__0AEC_0356_000A_6B64()
 *
 * @name f__0AEC_0356_000A_6B64
 * @implements 0AEC:0356:000A:6B64 ()
 *
 * Called From: 0AEC:0351:000E:1ECB
 */
void f__0AEC_0356_000A_6B64()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { f__0AEC_0360_000F_2AF3(); return; }
	f__0AEC_04D7_0009_0C39(); return;
}

/**
 * Decompiled function f__0AEC_0360_000F_2AF3()
 *
 * @name f__0AEC_0360_000F_2AF3
 * @implements 0AEC:0360:000F:2AF3 ()
 *
 * Called From: 0AEC:035B:000A:6B64
 */
void f__0AEC_0360_000F_2AF3()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x036F); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0AEC_036F_0014_2F2D();
}

/**
 * Decompiled function f__0AEC_036F_0014_2F2D()
 *
 * @name f__0AEC_036F_0014_2F2D
 * @implements 0AEC:036F:0014:2F2D ()
 *
 * Called From: 0AEC:036F:000F:2AF3
 */
void f__0AEC_036F_0014_2F2D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FC));
	if (emu_flags.zf) { f__0AEC_0386_0011_657F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0383); emu_cs = 0x1423; emu_ip = 0x0B48; emu_last_cs = 0x0AEC; emu_last_ip = 0x037E; emu_last_length = 0x0014; emu_last_crc = 0x2F2D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0386_0011_657F()
 *
 * @name f__0AEC_0386_0011_657F
 * @implements 0AEC:0386:0011:657F ()
 *
 * Called From: 0AEC:0379:0014:2F2D
 */
void f__0AEC_0386_0011_657F()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x38F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x0397); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__0AEC_0397_0035_1F06();
}

/**
 * Decompiled function f__0AEC_0397_0035_1F06()
 *
 * @name f__0AEC_0397_0035_1F06
 * @implements 0AEC:0397:0035:1F06 ()
 *
 * Called From: 0AEC:0397:0011:657F
 */
void f__0AEC_0397_0035_1F06()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_cmpws(&emu_si, 0x1);
	if (emu_flags.zf) { f__0AEC_03D0_000C_CCAF(); return; }
	emu_cmpws(&emu_si, 0x5);
	if (emu_flags.zf) { f__0AEC_03D0_000C_CCAF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x1A34; f__1A34_2F9E_0016_3A4D();
	f__0AEC_03CC_0004_04B2();
}

/**
 * Decompiled function f__0AEC_03CC_0004_04B2()
 *
 * @name f__0AEC_03CC_0004_04B2
 * @implements 0AEC:03CC:0004:04B2 ()
 *
 * Called From: 0AEC:03CC:0035:1F06
 */
void f__0AEC_03CC_0004_04B2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	f__0AEC_03D7_0005_1DA4(); return;
}

/**
 * Decompiled function f__0AEC_03D0_000C_CCAF()
 *
 * @name f__0AEC_03D0_000C_CCAF
 * @implements 0AEC:03D0:000C:CCAF ()
 *
 * Called From: 0AEC:03B9:0035:1F06
 * Called From: 0AEC:03BE:0035:1F06
 */
void f__0AEC_03D0_000C_CCAF()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03DC); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__0AEC_03DC_0013_EFB0();
}

/**
 * Decompiled function f__0AEC_03D7_0005_1DA4()
 *
 * @name f__0AEC_03D7_0005_1DA4
 * @implements 0AEC:03D7:0005:1DA4 ()
 *
 * Called From: 0AEC:03CE:0004:04B2
 */
void f__0AEC_03D7_0005_1DA4()
{
	emu_push(emu_cs); emu_push(0x03DC); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__0AEC_03DC_0013_EFB0();
}

/**
 * Decompiled function f__0AEC_03DC_0013_EFB0()
 *
 * @name f__0AEC_03DC_0013_EFB0
 * @implements 0AEC:03DC:0013:EFB0 ()
 *
 * Called From: 0AEC:03DC:000C:CCAF
 * Called From: 0AEC:03DC:0005:1DA4
 */
void f__0AEC_03DC_0013_EFB0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x03EF); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__0AEC_03EF_0011_2D28();
}

/**
 * Decompiled function f__0AEC_03EF_0011_2D28()
 *
 * @name f__0AEC_03EF_0011_2D28
 * @implements 0AEC:03EF:0011:2D28 ()
 *
 * Called From: 0AEC:03EF:0013:EFB0
 */
void f__0AEC_03EF_0011_2D28()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_si);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__0AEC_0400_0010_EA1E(); return; }
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { f__0AEC_0415_000D_24A1(); return; }
	f__0AEC_0422_0010_EAF6(); return;
}

/**
 * Decompiled function f__0AEC_0400_0010_EA1E()
 *
 * @name f__0AEC_0400_0010_EA1E
 * @implements 0AEC:0400:0010:EA1E ()
 *
 * Called From: 0AEC:03F7:0011:2D28
 */
void f__0AEC_0400_0010_EA1E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x1A34; f__1A34_1B68_0019_2EA6();
	f__0AEC_0410_0005_1F30();
}

/**
 * Decompiled function f__0AEC_0410_0005_1F30()
 *
 * @name f__0AEC_0410_0005_1F30
 * @implements 0AEC:0410:0005:1F30 ()
 *
 * Called From: 0AEC:0410:0010:EA1E
 */
void f__0AEC_0410_0005_1F30()
{
	emu_addws(&emu_sp, 0x6);
	f__0AEC_045B_0010_AFC6(); return;
}

/**
 * Decompiled function f__0AEC_0415_000D_24A1()
 *
 * @name f__0AEC_0415_000D_24A1
 * @implements 0AEC:0415:000D:24A1 ()
 *
 * Called From: 0AEC:03FC:0011:2D28
 */
void f__0AEC_0415_000D_24A1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	f__0AEC_045B_0010_AFC6(); return;
}

/**
 * Decompiled function f__0AEC_0422_0010_EAF6()
 *
 * @name f__0AEC_0422_0010_EAF6
 * @implements 0AEC:0422:0010:EAF6 ()
 *
 * Called From: 0AEC:03FE:0011:2D28
 */
void f__0AEC_0422_0010_EAF6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x0432); emu_cs = 0x1A34; f__1A34_1A66_0011_4E2C();
	f__0AEC_0432_0010_17BA();
}

/**
 * Decompiled function f__0AEC_0432_0010_17BA()
 *
 * @name f__0AEC_0432_0010_17BA
 * @implements 0AEC:0432:0010:17BA ()
 *
 * Called From: 0AEC:0432:0010:EAF6
 */
void f__0AEC_0432_0010_17BA()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__0AEC_0442_0019_511C();
}

/**
 * Decompiled function f__0AEC_0442_0019_511C()
 *
 * @name f__0AEC_0442_0019_511C
 * @implements 0AEC:0442:0019:511C ()
 *
 * Called From: 0AEC:0442:0010:17BA
 */
void f__0AEC_0442_0019_511C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { f__0AEC_0459_0002_03AC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x8);
	f__0AEC_045B_0010_AFC6(); return;
}

/**
 * Decompiled function f__0AEC_0459_0002_03AC()
 *
 * @name f__0AEC_0459_0002_03AC
 * @implements 0AEC:0459:0002:03AC ()
 *
 * Called From: 0AEC:044F:0019:511C
 */
void f__0AEC_0459_0002_03AC()
{
	f__0AEC_045B_0010_AFC6(); return;
}

/**
 * Decompiled function f__0AEC_045B_0010_AFC6()
 *
 * @name f__0AEC_045B_0010_AFC6
 * @implements 0AEC:045B:0010:AFC6 ()
 *
 * Called From: 0AEC:0413:0005:1F30
 * Called From: 0AEC:0420:000D:24A1
 * Called From: 0AEC:0459:0019:511C
 * Called From: 0AEC:0459:0002:03AC
 */
void f__0AEC_045B_0010_AFC6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x046E; emu_last_cs = 0x0AEC; emu_last_ip = 0x0460; emu_last_length = 0x0010; emu_last_crc = 0xAFC6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046B); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	f__0AEC_046B_0003_01F2();
}

/**
 * Decompiled function f__0AEC_046B_0003_01F2()
 *
 * @name f__0AEC_046B_0003_01F2
 * @implements 0AEC:046B:0003:01F2 ()
 *
 * Called From: 0AEC:046B:0010:AFC6
 */
void f__0AEC_046B_0003_01F2()
{
	emu_pop(&emu_cx.x);
	f__0AEC_04B9_001B_DEA1(); return;
}

/**
 * Decompiled function f__0AEC_04B9_001B_DEA1()
 *
 * @name f__0AEC_04B9_001B_DEA1
 * @implements 0AEC:04B9:001B:DEA1 ()
 *
 * Called From: 0AEC:046C:0003:01F2
 */
void f__0AEC_04B9_001B_DEA1()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), 0xFFFF);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D4); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_04D4_0003_0772();
}

/**
 * Decompiled function f__0AEC_04D4_0003_0772()
 *
 * @name f__0AEC_04D4_0003_0772
 * @implements 0AEC:04D4:0003:0772 ()
 *
 * Called From: 0AEC:04D4:001B:DEA1
 */
void f__0AEC_04D4_0003_0772()
{
	f__0AEC_07E6_0004_036E(); return;
}

/**
 * Decompiled function f__0AEC_04D7_0009_0C39()
 *
 * @name f__0AEC_04D7_0009_0C39
 * @implements 0AEC:04D7:0009:0C39 ()
 *
 * Called From: 0AEC:0353:000E:1ECB
 * Called From: 0AEC:035D:000A:6B64
 */
void f__0AEC_04D7_0009_0C39()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_04E0_000A_6AC2(); return; }
	f__0AEC_0719_0009_0ED1(); return;
}

/**
 * Decompiled function f__0AEC_04E0_000A_6AC2()
 *
 * @name f__0AEC_04E0_000A_6AC2
 * @implements 0AEC:04E0:000A:6AC2 ()
 *
 * Called From: 0AEC:04DB:0009:0C39
 */
void f__0AEC_04E0_000A_6AC2()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (emu_flags.zf) { f__0AEC_04EA_0024_69F0(); return; }
	f__0AEC_0719_0009_0ED1(); return;
}

/**
 * Decompiled function f__0AEC_04EA_0024_69F0()
 *
 * @name f__0AEC_04EA_0024_69F0
 * @implements 0AEC:04EA:0024:69F0 ()
 *
 * Called From: 0AEC:04E5:000A:6AC2
 */
void f__0AEC_04EA_0024_69F0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_push(emu_cs); emu_push(0x050E); emu_cs = 0x0C3A; f__0C3A_01BA_0018_186F();
	f__0AEC_050E_000A_BC41();
}

/**
 * Decompiled function f__0AEC_050E_000A_BC41()
 *
 * @name f__0AEC_050E_000A_BC41
 * @implements 0AEC:050E:000A:BC41 ()
 *
 * Called From: 0AEC:050E:0024:69F0
 */
void f__0AEC_050E_000A_BC41()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0AEC_0518_000F_6B04(); return; }
	f__0AEC_069E_000F_5004(); return;
}

/**
 * Decompiled function f__0AEC_0518_000F_6B04()
 *
 * @name f__0AEC_0518_000F_6B04
 * @implements 0AEC:0518:000F:6B04 ()
 *
 * Called From: 0AEC:0513:000A:BC41
 */
void f__0AEC_0518_000F_6B04()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x3483; ovl__3483(0);
	f__0AEC_0527_001D_87EC();
}

/**
 * Decompiled function f__0AEC_0527_001D_87EC()
 *
 * @name f__0AEC_0527_001D_87EC
 * @implements 0AEC:0527:001D:87EC ()
 *
 * Called From: 0AEC:0527:000F:6B04
 */
void f__0AEC_0527_001D_87EC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__0AEC_055D_0022_B058(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x10BE; emu_ip = 0x06EF; emu_last_cs = 0x0AEC; emu_last_ip = 0x053F; emu_last_length = 0x001D; emu_last_crc = 0x87EC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_055D_0022_B058()
 *
 * @name f__0AEC_055D_0022_B058
 * @implements 0AEC:055D:0022:B058 ()
 *
 * Called From: 0AEC:0533:001D:87EC
 */
void f__0AEC_055D_0022_B058()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xC);
	if (!emu_flags.zf) { f__0AEC_05C7_0009_722D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x05C7; emu_last_cs = 0x0AEC; emu_last_ip = 0x0569; emu_last_length = 0x0022; emu_last_crc = 0xB058; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x057F); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__0AEC_057F_0010_0A8B();
}

/**
 * Decompiled function f__0AEC_057F_0010_0A8B()
 *
 * @name f__0AEC_057F_0010_0A8B
 * @implements 0AEC:057F:0010:0A8B ()
 *
 * Called From: 0AEC:057F:0022:B058
 */
void f__0AEC_057F_0010_0A8B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x058F); emu_cs = 0x1A34; f__1A34_232C_0011_E32F();
	f__0AEC_058F_001F_16A7();
}

/**
 * Decompiled function f__0AEC_058F_001F_16A7()
 *
 * @name f__0AEC_058F_001F_16A7
 * @implements 0AEC:058F:001F:16A7 ()
 *
 * Called From: 0AEC:058F:0010:0A8B
 */
void f__0AEC_058F_001F_16A7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.zf) { f__0AEC_05AE_0010_9958(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_ip = 0x05C7; emu_last_cs = 0x0AEC; emu_last_ip = 0x05AC; emu_last_length = 0x001F; emu_last_crc = 0x16A7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_05AE_0010_9958()
 *
 * @name f__0AEC_05AE_0010_9958
 * @implements 0AEC:05AE:0010:9958 ()
 *
 * Called From: 0AEC:05A2:001F:16A7
 */
void f__0AEC_05AE_0010_9958()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x05BE); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__0AEC_05BE_0012_2F24();
}

/**
 * Decompiled function f__0AEC_05BE_0012_2F24()
 *
 * @name f__0AEC_05BE_0012_2F24
 * @implements 0AEC:05BE:0012:2F24 ()
 *
 * Called From: 0AEC:05BE:0010:9958
 */
void f__0AEC_05BE_0012_2F24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05D0); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_05D0_000A_C17C();
}

/**
 * Decompiled function f__0AEC_05C7_0009_722D()
 *
 * @name f__0AEC_05C7_0009_722D
 * @implements 0AEC:05C7:0009:722D ()
 *
 * Called From: 0AEC:0562:0022:B058
 */
void f__0AEC_05C7_0009_722D()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05D0); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_05D0_000A_C17C();
}

/**
 * Decompiled function f__0AEC_05D0_000A_C17C()
 *
 * @name f__0AEC_05D0_000A_C17C
 * @implements 0AEC:05D0:000A:C17C ()
 *
 * Called From: 0AEC:05D0:0009:722D
 * Called From: 0AEC:05D0:0012:2F24
 */
void f__0AEC_05D0_000A_C17C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_cs); emu_push(0x05DA); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_05DA_001A_AB70();
}

/**
 * Decompiled function f__0AEC_05DA_001A_AB70()
 *
 * @name f__0AEC_05DA_001A_AB70
 * @implements 0AEC:05DA:001A:AB70 ()
 *
 * Called From: 0AEC:05DA:000A:C17C
 */
void f__0AEC_05DA_001A_AB70()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { emu_ip = 0x0625; emu_last_cs = 0x0AEC; emu_last_ip = 0x05E7; emu_last_length = 0x001A; emu_last_crc = 0xAB70; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x0C3A; f__0C3A_1B79_0021_3977();
	f__0AEC_05F4_0015_1091();
}

/**
 * Decompiled function f__0AEC_05F4_0015_1091()
 *
 * @name f__0AEC_05F4_0015_1091
 * @implements 0AEC:05F4:0015:1091 ()
 *
 * Called From: 0AEC:05F4:001A:AB70
 */
void f__0AEC_05F4_0015_1091()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x4C));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x0609); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	f__0AEC_0609_0019_BD72();
}

/**
 * Decompiled function f__0AEC_0609_0019_BD72()
 *
 * @name f__0AEC_0609_0019_BD72
 * @implements 0AEC:0609:0019:BD72 ()
 *
 * Called From: 0AEC:0609:0015:1091
 */
void f__0AEC_0609_0019_BD72()
{
	emu_pop(&emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (!emu_flags.zf) { f__0AEC_0625_002B_5650(); return; }
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x0C3A; emu_ip = 0x1A4F; emu_last_cs = 0x0AEC; emu_last_ip = 0x061D; emu_last_length = 0x0019; emu_last_crc = 0xBD72; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0625_002B_5650()
 *
 * @name f__0AEC_0625_002B_5650
 * @implements 0AEC:0625:002B:5650 ()
 *
 * Called From: 0AEC:0611:0019:BD72
 */
void f__0AEC_0625_002B_5650()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2B));
	emu_push(emu_cs); emu_push(0x0650); emu_cs = 0x10E4; f__10E4_0117_0015_0AFA();
	f__0AEC_0650_000B_619E();
}

/**
 * Decompiled function f__0AEC_0650_000B_619E()
 *
 * @name f__0AEC_0650_000B_619E
 * @implements 0AEC:0650:000B:619E ()
 *
 * Called From: 0AEC:0650:002B:5650
 */
void f__0AEC_0650_000B_619E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x065B); emu_cs = 0x34CD; ovl__34CD(16);
	f__0AEC_065B_0036_A593();
}

/**
 * Decompiled function f__0AEC_065B_0036_A593()
 *
 * @name f__0AEC_065B_0036_A593
 * @implements 0AEC:065B:0036:A593 ()
 *
 * Called From: 0AEC:065B:000B:619E
 */
void f__0AEC_065B_0036_A593()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_069C_0002_035C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0x4);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x069C; emu_last_cs = 0x0AEC; emu_last_ip = 0x0682; emu_last_length = 0x0036; emu_last_crc = 0xA593; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0FCB; emu_ip = 0x06F0; emu_last_cs = 0x0AEC; emu_last_ip = 0x068C; emu_last_length = 0x0036; emu_last_crc = 0xA593; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_069C_0002_035C()
 *
 * @name f__0AEC_069C_0002_035C
 * @implements 0AEC:069C:0002:035C ()
 *
 * Called From: 0AEC:066C:0036:A593
 */
void f__0AEC_069C_0002_035C()
{
	f__0AEC_0716_0003_0532(); return;
}

/**
 * Decompiled function f__0AEC_069E_000F_5004()
 *
 * @name f__0AEC_069E_000F_5004
 * @implements 0AEC:069E:000F:5004 ()
 *
 * Called From: 0AEC:0515:000A:BC41
 */
void f__0AEC_069E_000F_5004()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x2F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06AD); emu_cs = 0x3483; ovl__3483(0);
	f__0AEC_06AD_001E_7D4F();
}

/**
 * Decompiled function f__0AEC_06AD_001E_7D4F()
 *
 * @name f__0AEC_06AD_001E_7D4F
 * @implements 0AEC:06AD:001E:7D4F ()
 *
 * Called From: 0AEC:06AD:000F:5004
 */
void f__0AEC_06AD_001E_7D4F()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x06BE; emu_last_cs = 0x0AEC; emu_last_ip = 0x06B5; emu_last_length = 0x001E; emu_last_crc = 0x7D4F; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0x1);
	if (!emu_flags.zf) { f__0AEC_06CF_000D_2797(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x87);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x0FCB; emu_ip = 0x072A; emu_last_cs = 0x0AEC; emu_last_ip = 0x06C6; emu_last_length = 0x001E; emu_last_crc = 0x7D4F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_06CF_000D_2797()
 *
 * @name f__0AEC_06CF_000D_2797
 * @implements 0AEC:06CF:000D:2797 ()
 *
 * Called From: 0AEC:06BC:001E:7D4F
 */
void f__0AEC_06CF_000D_2797()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06DC); emu_cs = 0x10E4; f__10E4_0117_0015_0AFA();
	f__0AEC_06DC_000D_49CA();
}

/**
 * Decompiled function f__0AEC_06DC_000D_49CA()
 *
 * @name f__0AEC_06DC_000D_49CA
 * @implements 0AEC:06DC:000D:49CA ()
 *
 * Called From: 0AEC:06DC:000D:2797
 */
void f__0AEC_06DC_000D_49CA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x06E9); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_06E9_000C_B785();
}

/**
 * Decompiled function f__0AEC_06E9_000C_B785()
 *
 * @name f__0AEC_06E9_000C_B785
 * @implements 0AEC:06E9:000C:B785 ()
 *
 * Called From: 0AEC:06E9:000D:49CA
 */
void f__0AEC_06E9_000C_B785()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x86);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06F5); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_06F5_000D_F07B();
}

/**
 * Decompiled function f__0AEC_06F5_000D_F07B()
 *
 * @name f__0AEC_06F5_000D_F07B
 * @implements 0AEC:06F5:000D:F07B ()
 *
 * Called From: 0AEC:06F5:000C:B785
 */
void f__0AEC_06F5_000D_F07B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0702); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__0AEC_0702_0011_B261();
}

/**
 * Decompiled function f__0AEC_0702_0011_B261()
 *
 * @name f__0AEC_0702_0011_B261
 * @implements 0AEC:0702:0011:B261 ()
 *
 * Called From: 0AEC:0702:000D:F07B
 */
void f__0AEC_0702_0011_B261()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0713); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0AEC_0713_0006_3D12();
}

/**
 * Decompiled function f__0AEC_0713_0006_3D12()
 *
 * @name f__0AEC_0713_0006_3D12
 * @implements 0AEC:0713:0006:3D12 ()
 *
 * Called From: 0AEC:0713:0011:B261
 */
void f__0AEC_0713_0006_3D12()
{
	emu_addws(&emu_sp, 0x6);
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_0716_0003_0532()
 *
 * @name f__0AEC_0716_0003_0532
 * @implements 0AEC:0716:0003:0532 ()
 *
 * Called From: 0AEC:069C:0002:035C
 */
void f__0AEC_0716_0003_0532()
{
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_0719_0009_0ED1()
 *
 * @name f__0AEC_0719_0009_0ED1
 * @implements 0AEC:0719:0009:0ED1 ()
 *
 * Called From: 0AEC:04DD:0009:0C39
 * Called From: 0AEC:04E7:000A:6AC2
 */
void f__0AEC_0719_0009_0ED1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_0722_0016_FE30(); return; }
	f__0AEC_07A4_001E_DF0B(); return;
}

/**
 * Decompiled function f__0AEC_0722_0016_FE30()
 *
 * @name f__0AEC_0722_0016_FE30
 * @implements 0AEC:0722:0016:FE30 ()
 *
 * Called From: 0AEC:071D:0009:0ED1
 */
void f__0AEC_0722_0016_FE30()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2B);
	if (!emu_flags.zf) { f__0AEC_07A4_001E_DF0B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0AEC_0738_0008_E23C(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ip = 0x0743; emu_last_cs = 0x0AEC; emu_last_ip = 0x0736; emu_last_length = 0x0016; emu_last_crc = 0xFE30; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0738_0008_E23C()
 *
 * @name f__0AEC_0738_0008_E23C
 * @implements 0AEC:0738:0008:E23C ()
 *
 * Called From: 0AEC:0731:0016:FE30
 */
void f__0AEC_0738_0008_E23C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x1A34; f__1A34_2F9E_0016_3A4D();
	f__0AEC_0740_002B_71FB();
}

/**
 * Decompiled function f__0AEC_0740_002B_71FB()
 *
 * @name f__0AEC_0740_002B_71FB
 * @implements 0AEC:0740:002B:71FB ()
 *
 * Called From: 0AEC:0740:0008:E23C
 */
void f__0AEC_0740_002B_71FB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!emu_flags.zf) { f__0AEC_0765_0006_099C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0AEC_078D_0013_2440(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x076B); emu_cs = 0x34CD; emu_ip = 0x082B; emu_last_cs = 0x0AEC; emu_last_ip = 0x0766; emu_last_length = 0x002B; emu_last_crc = 0x71FB; emu_call(); // Jump does not resolve
	f__0AEC_076B_0012_68E3();
}

/**
 * Decompiled function f__0AEC_0765_0006_099C()
 *
 * @name f__0AEC_0765_0006_099C
 * @implements 0AEC:0765:0006:099C ()
 *
 * Called From: 0AEC:075C:002B:71FB
 */
void f__0AEC_0765_0006_099C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x076B); emu_cs = 0x34CD; ovl__34CD(32);
	f__0AEC_076B_0012_68E3();
}

/**
 * Decompiled function f__0AEC_076B_0012_68E3()
 *
 * @name f__0AEC_076B_0012_68E3
 * @implements 0AEC:076B:0012:68E3 ()
 *
 * Called From: 0AEC:076B:0006:099C
 */
void f__0AEC_076B_0012_68E3()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__0AEC_0777_0006_0A7E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0AEC_078D_0013_2440(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x077D); emu_cs = 0x0F78; emu_ip = 0x0A52; emu_last_cs = 0x0AEC; emu_last_ip = 0x0778; emu_last_length = 0x0012; emu_last_crc = 0x68E3; emu_call(); // Jump does not resolve
	f__0AEC_077D_000E_9397();
}

/**
 * Decompiled function f__0AEC_0777_0006_0A7E()
 *
 * @name f__0AEC_0777_0006_0A7E
 * @implements 0AEC:0777:0006:0A7E ()
 *
 * Called From: 0AEC:076E:0012:68E3
 */
void f__0AEC_0777_0006_0A7E()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x077D); emu_cs = 0x0F78; f__0F78_02D5_0014_D8D1();
	f__0AEC_077D_000E_9397();
}

/**
 * Decompiled function f__0AEC_077D_000E_9397()
 *
 * @name f__0AEC_077D_000E_9397
 * @implements 0AEC:077D:000E:9397 ()
 *
 * Called From: 0AEC:077D:0006:0A7E
 */
void f__0AEC_077D_000E_9397()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x078B); emu_cs = 0x1A34; f__1A34_27A8_0012_8D6B();
	f__0AEC_078B_0015_2AF0();
}

/**
 * Decompiled function f__0AEC_078B_0015_2AF0()
 *
 * @name f__0AEC_078B_0015_2AF0
 * @implements 0AEC:078B:0015:2AF0 ()
 *
 * Called From: 0AEC:078B:000E:9397
 */
void f__0AEC_078B_0015_2AF0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1000);
	if (emu_flags.zf) { f__0AEC_07A1_0003_07E6(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07A0); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07A0_0004_0276();
}

/**
 * Decompiled function f__0AEC_078D_0013_2440()
 *
 * @name f__0AEC_078D_0013_2440
 * @implements 0AEC:078D:0013:2440 ()
 *
 * Called From: 0AEC:0763:002B:71FB
 * Called From: 0AEC:0775:0012:68E3
 */
void f__0AEC_078D_0013_2440()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1000);
	if (emu_flags.zf) { f__0AEC_07A1_0003_07E6(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07A0); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07A0_0004_0276();
}

/**
 * Decompiled function f__0AEC_07A0_0004_0276()
 *
 * @name f__0AEC_07A0_0004_0276
 * @implements 0AEC:07A0:0004:0276 ()
 *
 * Called From: 0AEC:07A0:0015:2AF0
 * Called From: 0AEC:07A0:0013:2440
 */
void f__0AEC_07A0_0004_0276()
{
	emu_pop(&emu_cx.x);
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_07A1_0003_07E6()
 *
 * @name f__0AEC_07A1_0003_07E6
 * @implements 0AEC:07A1:0003:07E6 ()
 *
 * Called From: 0AEC:0796:0015:2AF0
 * Called From: 0AEC:0796:0013:2440
 */
void f__0AEC_07A1_0003_07E6()
{
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_07A4_001E_DF0B()
 *
 * @name f__0AEC_07A4_001E_DF0B
 * @implements 0AEC:07A4:001E:DF0B ()
 *
 * Called From: 0AEC:071F:0009:0ED1
 * Called From: 0AEC:072A:0016:FE30
 */
void f__0AEC_07A4_001E_DF0B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_07B0_0012_22CA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_07C4_000F_4671(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2C);
	if (!emu_flags.zf) { f__0AEC_07C4_000F_4671(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07C2); emu_cs = 0x34CD; emu_ip = 0x0846; emu_last_cs = 0x0AEC; emu_last_ip = 0x07BD; emu_last_length = 0x001E; emu_last_crc = 0xDF0B; emu_call(); // Jump does not resolve
	f__0AEC_07C2_0002_03E8();
}

/**
 * Decompiled function f__0AEC_07B0_0012_22CA()
 *
 * @name f__0AEC_07B0_0012_22CA
 * @implements 0AEC:07B0:0012:22CA ()
 *
 * Called From: 0AEC:07A8:001E:DF0B
 */
void f__0AEC_07B0_0012_22CA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2C);
	if (!emu_flags.zf) { emu_ip = 0x07C4; emu_last_cs = 0x0AEC; emu_last_ip = 0x07B8; emu_last_length = 0x0012; emu_last_crc = 0x22CA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07C2); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07C2_0002_03E8();
}

/**
 * Decompiled function f__0AEC_07C2_0002_03E8()
 *
 * @name f__0AEC_07C2_0002_03E8
 * @implements 0AEC:07C2:0002:03E8 ()
 *
 * Called From: 0AEC:07C2:0012:22CA
 */
void f__0AEC_07C2_0002_03E8()
{
	f__0AEC_07E6_0004_036E(); return;
}

/**
 * Decompiled function f__0AEC_07C4_000F_4671()
 *
 * @name f__0AEC_07C4_000F_4671
 * @implements 0AEC:07C4:000F:4671 ()
 *
 * Called From: 0AEC:07AE:001E:DF0B
 * Called From: 0AEC:07B8:001E:DF0B
 */
void f__0AEC_07C4_000F_4671()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (!emu_flags.zf) { f__0AEC_07D7_000F_5AB3(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x1A34; f__1A34_2F9E_0016_3A4D();
	f__0AEC_07D3_0004_04A8();
}

/**
 * Decompiled function f__0AEC_07D3_0004_04A8()
 *
 * @name f__0AEC_07D3_0004_04A8
 * @implements 0AEC:07D3:0004:04A8 ()
 *
 * Called From: 0AEC:07D3:000F:4671
 */
void f__0AEC_07D3_0004_04A8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	f__0AEC_07E1_0005_1FFE(); return;
}

/**
 * Decompiled function f__0AEC_07D7_000F_5AB3()
 *
 * @name f__0AEC_07D7_000F_5AB3
 * @implements 0AEC:07D7:000F:5AB3 ()
 *
 * Called From: 0AEC:07C9:000F:4671
 */
void f__0AEC_07D7_000F_5AB3()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__0AEC_07EA_0003_0682(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x0F78; f__0F78_02D5_0014_D8D1();
	f__0AEC_07E6_0004_036E();
}

/**
 * Decompiled function f__0AEC_07E1_0005_1FFE()
 *
 * @name f__0AEC_07E1_0005_1FFE
 * @implements 0AEC:07E1:0005:1FFE ()
 *
 * Called From: 0AEC:07D5:0004:04A8
 */
void f__0AEC_07E1_0005_1FFE()
{
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x0F78; f__0F78_02D5_0014_D8D1();
	f__0AEC_07E6_0004_036E();
}

/**
 * Decompiled function f__0AEC_07E6_0004_036E()
 *
 * @name f__0AEC_07E6_0004_036E
 * @implements 0AEC:07E6:0004:036E ()
 *
 * Called From: 0AEC:04D4:0003:0772
 * Called From: 0AEC:07C2:0002:03E8
 * Called From: 0AEC:07E6:0005:1FFE
 * Called From: 0AEC:07E6:000F:5AB3
 */
void f__0AEC_07E6_0004_036E()
{
	emu_pop(&emu_cx.x);
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_07EA_0003_0682()
 *
 * @name f__0AEC_07EA_0003_0682
 * @implements 0AEC:07EA:0003:0682 ()
 *
 * Called From: 0AEC:07DC:000F:5AB3
 */
void f__0AEC_07EA_0003_0682()
{
	f__0AEC_00FB_0006_2AD4(); return;
}

/**
 * Decompiled function f__0AEC_07ED_0006_137A()
 *
 * @name f__0AEC_07ED_0006_137A
 * @implements 0AEC:07ED:0006:137A ()
 *
 * Called From: 0AEC:00FE:0006:2AD4
 * Called From: 0AEC:00FE:0010:9E31
 * Called From: 0AEC:00FE:0019:784C
 */
void f__0AEC_07ED_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0809_001D_4DF8()
 *
 * @name f__0AEC_0809_001D_4DF8
 * @implements 0AEC:0809:001D:4DF8 ()
 *
 * Called From: B4A2:0941:0011:D731
 */
void f__0AEC_0809_001D_4DF8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x22);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0AEC_0826_0009_DCFD(); return; }
	emu_ip = 0x0C77; emu_last_cs = 0x0AEC; emu_last_ip = 0x0823; emu_last_length = 0x001D; emu_last_crc = 0x4DF8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0826_0009_DCFD()
 *
 * @name f__0AEC_0826_0009_DCFD
 * @implements 0AEC:0826:0009:DCFD ()
 *
 * Called From: 0AEC:0821:001D:4DF8
 */
void f__0AEC_0826_0009_DCFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x082F); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_082F_0012_8A77();
}

/**
 * Decompiled function f__0AEC_082F_0012_8A77()
 *
 * @name f__0AEC_082F_0012_8A77
 * @implements 0AEC:082F:0012:8A77 ()
 *
 * Called From: 0AEC:082F:0009:DCFD
 */
void f__0AEC_082F_0012_8A77()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__0AEC_0841_0005_18E0(); return; }
	emu_ip = 0x0C77; emu_last_cs = 0x0AEC; emu_last_ip = 0x083E; emu_last_length = 0x0012; emu_last_crc = 0x8A77; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0841_0005_18E0()
 *
 * @name f__0AEC_0841_0005_18E0
 * @implements 0AEC:0841:0005:18E0 ()
 *
 * Called From: 0AEC:083C:0012:8A77
 */
void f__0AEC_0841_0005_18E0()
{
	emu_push(emu_cs); emu_push(0x0846); emu_cs = 0x10E4; f__10E4_2290_0012_7C2F();
	f__0AEC_0846_0015_EB29();
}

/**
 * Decompiled function f__0AEC_0846_0015_EB29()
 *
 * @name f__0AEC_0846_0015_EB29
 * @implements 0AEC:0846:0015:EB29 ()
 *
 * Called From: 0AEC:0846:0005:18E0
 */
void f__0AEC_0846_0015_EB29()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_085C_0010_971B(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x085B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0AEC_085B_0011_97A9();
}

/**
 * Decompiled function f__0AEC_085B_0011_97A9()
 *
 * @name f__0AEC_085B_0011_97A9
 * @implements 0AEC:085B:0011:97A9 ()
 *
 * Called From: 0AEC:085B:0015:EB29
 */
void f__0AEC_085B_0011_97A9()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_086C_0044_EBA4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_086E_0042_EE94(); return;
}

/**
 * Decompiled function f__0AEC_085C_0010_971B()
 *
 * @name f__0AEC_085C_0010_971B
 * @implements 0AEC:085C:0010:971B ()
 *
 * Called From: 0AEC:0850:0015:EB29
 */
void f__0AEC_085C_0010_971B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_086C_0044_EBA4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_086E_0042_EE94(); return;
}

/**
 * Decompiled function f__0AEC_086C_0044_EBA4()
 *
 * @name f__0AEC_086C_0044_EBA4
 * @implements 0AEC:086C:0044:EBA4 ()
 *
 * Called From: 0AEC:0865:0010:971B
 * Called From: 0AEC:0865:0011:97A9
 */
void f__0AEC_086C_0044_EBA4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0AEC_08B0_001D_4108();
}

/**
 * Decompiled function f__0AEC_086E_0042_EE94()
 *
 * @name f__0AEC_086E_0042_EE94
 * @implements 0AEC:086E:0042:EE94 ()
 *
 * Called From: 0AEC:086A:0011:97A9
 * Called From: 0AEC:086A:0010:971B
 */
void f__0AEC_086E_0042_EE94()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0AEC_08B0_001D_4108();
}

/**
 * Decompiled function f__0AEC_08B0_001D_4108()
 *
 * @name f__0AEC_08B0_001D_4108
 * @implements 0AEC:08B0:001D:4108 ()
 *
 * Called From: 0AEC:08B0:0044:EBA4
 * Called From: 0AEC:08B0:0042:EE94
 */
void f__0AEC_08B0_001D_4108()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08CD); emu_cs = 0x10E4; f__10E4_0008_0048_CEEB();
	f__0AEC_08CD_001F_7A5E();
}

/**
 * Decompiled function f__0AEC_08CD_001F_7A5E()
 *
 * @name f__0AEC_08CD_001F_7A5E
 * @implements 0AEC:08CD:001F:7A5E ()
 *
 * Called From: 0AEC:08CD:001D:4108
 */
void f__0AEC_08CD_001F_7A5E()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_cx.x, 0x9);
	emu_movw(&emu_bx.x, 0xC7D);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_flags.zf) { f__0AEC_08EC_0004_04A0(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__0AEC_08DC_0010_1775(); return; }
	emu_ip = 0x0A34; emu_last_cs = 0x0AEC; emu_last_ip = 0x08E9; emu_last_length = 0x001F; emu_last_crc = 0x7A5E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_08DC_0010_1775()
 *
 * @name f__0AEC_08DC_0010_1775
 * @implements 0AEC:08DC:0010:1775 ()
 *
 * Called From: 0AEC:08E7:001F:7A5E
 * Called From: 0AEC:08E7:0010:1775
 */
void f__0AEC_08DC_0010_1775()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_flags.zf) { f__0AEC_08EC_0004_04A0(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__0AEC_08DC_0010_1775(); return; }
	emu_ip = 0x0A34; emu_last_cs = 0x0AEC; emu_last_ip = 0x08E9; emu_last_length = 0x0010; emu_last_crc = 0x1775; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_08EC_0004_04A0()
 *
 * @name f__0AEC_08EC_0004_04A0
 * @implements 0AEC:08EC:0004:04A0 ()
 *
 * Called From: 0AEC:08E2:0010:1775
 * Called From: 0AEC:08E2:001F:7A5E
 */
void f__0AEC_08EC_0004_04A0()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x12);
	switch (emu_ip) {
		case 0x08F0: f__0AEC_08F0_000D_5DF5(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x08EC; emu_last_length = 0x0004; emu_last_crc = 0x04A0;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_08F0_000D_5DF5()
 *
 * @name f__0AEC_08F0_000D_5DF5
 * @implements 0AEC:08F0:000D:5DF5 ()
 *
 * Called From: 0AEC:08EC:0004:04A0
 */
void f__0AEC_08F0_000D_5DF5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__0AEC_08FD_0039_D44C(); return; }
	emu_ip = 0x0A02; emu_last_cs = 0x0AEC; emu_last_ip = 0x08FA; emu_last_length = 0x000D; emu_last_crc = 0x5DF5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_08FD_0039_D44C()
 *
 * @name f__0AEC_08FD_0039_D44C
 * @implements 0AEC:08FD:0039:D44C ()
 *
 * Called From: 0AEC:08F8:000D:5DF5
 */
void f__0AEC_08FD_0039_D44C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x25);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x53E));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x53C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__0AEC_0936_0022_C773();
}

/**
 * Decompiled function f__0AEC_0936_0022_C773()
 *
 * @name f__0AEC_0936_0022_C773
 * @implements 0AEC:0936:0022:C773 ()
 *
 * Called From: 0AEC:0936:0039:D44C
 */
void f__0AEC_0936_0022_C773()
{
	emu_addws(&emu_sp, 0x14);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x4A2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x4A0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0958); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	f__0AEC_0958_0032_001C();
}

/**
 * Decompiled function f__0AEC_0958_0032_001C()
 *
 * @name f__0AEC_0958_0032_001C
 * @implements 0AEC:0958:0032:001C ()
 *
 * Called From: 0AEC:0958:0022:C773
 */
void f__0AEC_0958_0032_001C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E42));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	f__0AEC_09DF_0023_9B46(); return;
}

/**
 * Decompiled function f__0AEC_098A_0015_454B()
 *
 * @name f__0AEC_098A_0015_454B
 * @implements 0AEC:098A:0015:454B ()
 *
 * Called From: 0AEC:09E3:0023:9B46
 * Called From: 0AEC:09E3:0032:94B5
 */
void f__0AEC_098A_0015_454B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E40));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	f__0AEC_09D6_002C_D74E(); return;
}

/**
 * Decompiled function f__0AEC_099F_0031_4E99()
 *
 * @name f__0AEC_099F_0031_4E99
 * @implements 0AEC:099F:0031:4E99 ()
 *
 * Called From: 0AEC:09DA:002C:D74E
 * Called From: 0AEC:09DA:0032:94B5
 */
void f__0AEC_099F_0031_4E99()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_dx.x, emu_di);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x6);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x26);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x09D0); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__0AEC_09D0_0032_94B5();
}

/**
 * Decompiled function f__0AEC_09D0_0032_94B5()
 *
 * @name f__0AEC_09D0_0032_94B5
 * @implements 0AEC:09D0:0032:94B5 ()
 *
 * Called From: 0AEC:09D0:0031:4E99
 */
void f__0AEC_09D0_0032_94B5()
{
	emu_addws(&emu_sp, 0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_099F_0031_4E99(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_098A_0015_454B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__0AEC_0A1D_0002_0394(); return;
}

/**
 * Decompiled function f__0AEC_09D6_002C_D74E()
 *
 * @name f__0AEC_09D6_002C_D74E
 * @implements 0AEC:09D6:002C:D74E ()
 *
 * Called From: 0AEC:099D:0015:454B
 */
void f__0AEC_09D6_002C_D74E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_099F_0031_4E99(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x098A; emu_last_cs = 0x0AEC; emu_last_ip = 0x09E3; emu_last_length = 0x002C; emu_last_crc = 0xD74E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x0A1D; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A00; emu_last_length = 0x002C; emu_last_crc = 0xD74E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_09DF_0023_9B46()
 *
 * @name f__0AEC_09DF_0023_9B46
 * @implements 0AEC:09DF:0023:9B46 ()
 *
 * Called From: 0AEC:0988:0032:001C
 */
void f__0AEC_09DF_0023_9B46()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_098A_0015_454B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x0A1D; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A00; emu_last_length = 0x0023; emu_last_crc = 0x9B46; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0A1D_0002_0394()
 *
 * @name f__0AEC_0A1D_0002_0394
 * @implements 0AEC:0A1D:0002:0394 ()
 *
 * Called From: 0AEC:0A00:0032:94B5
 */
void f__0AEC_0A1D_0002_0394()
{
	f__0AEC_0A3B_0043_37EB(); return;
}

/**
 * Decompiled function f__0AEC_0A3B_0043_37EB()
 *
 * @name f__0AEC_0A3B_0043_37EB
 * @implements 0AEC:0A3B:0043:37EB ()
 *
 * Called From: 0AEC:0A1D:0002:0394
 */
void f__0AEC_0A3B_0043_37EB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A81; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A3F; emu_last_length = 0x0043; emu_last_crc = 0x37EB; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__0AEC_0A7E_000D_5EA2();
}

/**
 * Decompiled function f__0AEC_0A7E_000D_5EA2()
 *
 * @name f__0AEC_0A7E_000D_5EA2
 * @implements 0AEC:0A7E:000D:5EA2 ()
 *
 * Called From: 0AEC:0A7E:0043:37EB
 */
void f__0AEC_0A7E_000D_5EA2()
{
	emu_addws(&emu_sp, 0x14);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x2E);
	if (emu_flags.zf) { f__0AEC_0A8B_0027_ECE0(); return; }
	f__0AEC_0B1C_000D_B056(); return;
}

/**
 * Decompiled function f__0AEC_0A8B_0027_ECE0()
 *
 * @name f__0AEC_0A8B_0027_ECE0
 * @implements 0AEC:0A8B:0027:ECE0 ()
 *
 * Called From: 0AEC:0A86:000D:5EA2
 */
void f__0AEC_0A8B_0027_ECE0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x0AB2; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A93; emu_last_length = 0x0027; emu_last_crc = 0xECE0; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	f__0AEC_0AEF_001C_5586(); return;
}

/**
 * Decompiled function f__0AEC_0AEF_001C_5586()
 *
 * @name f__0AEC_0AEF_001C_5586
 * @implements 0AEC:0AEF:001C:5586 ()
 *
 * Called From: 0AEC:0AB0:0027:ECE0
 */
void f__0AEC_0AEF_001C_5586()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_addw(&emu_ax.x, 0xFF);
	emu_movb(&emu_cx.l, 0x8);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0B0B); emu_cs = 0x34C1; ovl__34C1(2);
	f__0AEC_0B0B_000C_0A2B();
}

/**
 * Decompiled function f__0AEC_0B0B_000C_0A2B()
 *
 * @name f__0AEC_0B0B_000C_0A2B
 * @implements 0AEC:0B0B:000C:0A2B ()
 *
 * Called From: 0AEC:0B0B:001C:5586
 */
void f__0AEC_0B0B_000C_0A2B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x64);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B17); emu_cs = 0x34C1; ovl__34C1(0);
	f__0AEC_0B17_0012_3111();
}

/**
 * Decompiled function f__0AEC_0B17_0012_3111()
 *
 * @name f__0AEC_0B17_0012_3111
 * @implements 0AEC:0B17:0012:3111 ()
 *
 * Called From: 0AEC:0B17:000C:0A2B
 */
void f__0AEC_0B17_0012_3111()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__0AEC_0B29_0040_FA64(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xE);
	f__0AEC_0B2E_003B_1ABD(); return;
}

/**
 * Decompiled function f__0AEC_0B1C_000D_B056()
 *
 * @name f__0AEC_0B1C_000D_B056
 * @implements 0AEC:0B1C:000D:B056 ()
 *
 * Called From: 0AEC:0A88:000D:5EA2
 */
void f__0AEC_0B1C_000D_B056()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__0AEC_0B29_0040_FA64(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xE);
	f__0AEC_0B2E_003B_1ABD(); return;
}

/**
 * Decompiled function f__0AEC_0B29_0040_FA64()
 *
 * @name f__0AEC_0B29_0040_FA64
 * @implements 0AEC:0B29:0040:FA64 ()
 *
 * Called From: 0AEC:0B20:000D:B056
 * Called From: 0AEC:0B20:0012:3111
 */
void f__0AEC_0B29_0040_FA64()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xF);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0B7A_0016_C744(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x64);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, 0x21);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0xFFED);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_push(emu_cs); emu_push(0x0B69); emu_cs = 0x0FCB; emu_ip = 0x0BC8; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B64; emu_last_length = 0x0040; emu_last_crc = 0xFA64; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0B2E_003B_1ABD()
 *
 * @name f__0AEC_0B2E_003B_1ABD
 * @implements 0AEC:0B2E:003B:1ABD ()
 *
 * Called From: 0AEC:0B27:000D:B056
 * Called From: 0AEC:0B27:0012:3111
 */
void f__0AEC_0B2E_003B_1ABD()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0B7A_0016_C744(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x64);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, 0x21);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0xFFED);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_push(emu_cs); emu_push(0x0B69); emu_cs = 0x0FCB; emu_ip = 0x0BC8; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B64; emu_last_length = 0x003B; emu_last_crc = 0x1ABD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0B7A_0016_C744()
 *
 * @name f__0AEC_0B7A_0016_C744
 * @implements 0AEC:0B7A:0016:C744 ()
 *
 * Called From: 0AEC:0B34:0040:FA64
 * Called From: 0AEC:0B34:003B:1ABD
 */
void f__0AEC_0B7A_0016_C744()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x26);
	if (!emu_flags.zf) { f__0AEC_0B90_0011_BAE3(); return; }
	emu_movw(&emu_ax.x, 0xEF);
	f__0AEC_0B93_000E_BBCB(); return;
}

/**
 * Decompiled function f__0AEC_0B90_0011_BAE3()
 *
 * @name f__0AEC_0B90_0011_BAE3
 * @implements 0AEC:0B90:0011:BAE3 ()
 *
 * Called From: 0AEC:0B89:0016:C744
 */
void f__0AEC_0B90_0011_BAE3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0BA1_0020_B4F2(); return; }
	emu_movw(&emu_ax.x, 0xA);
	emu_ip = 0x0BA3; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B9F; emu_last_length = 0x0011; emu_last_crc = 0xBAE3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0B93_000E_BBCB()
 *
 * @name f__0AEC_0B93_000E_BBCB
 * @implements 0AEC:0B93:000E:BBCB ()
 *
 * Called From: 0AEC:0B8E:0016:C744
 */
void f__0AEC_0B93_000E_BBCB()
{
	emu_push(emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0BA1_0020_B4F2(); return; }
	emu_movw(&emu_ax.x, 0xA);
	emu_ip = 0x0BA3; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B9F; emu_last_length = 0x000E; emu_last_crc = 0xBBCB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0BA1_0020_B4F2()
 *
 * @name f__0AEC_0BA1_0020_B4F2
 * @implements 0AEC:0BA1:0020:B4F2 ()
 *
 * Called From: 0AEC:0B9A:0011:BAE3
 * Called From: 0AEC:0B9A:000E:BBCB
 */
void f__0AEC_0BA1_0020_B4F2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addws(&emu_dx.x, 0xF7);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_push(emu_cs); emu_push(0x0BC1); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0BC1_0008_7B10();
}

/**
 * Decompiled function f__0AEC_0BC1_0008_7B10()
 *
 * @name f__0AEC_0BC1_0008_7B10
 * @implements 0AEC:0BC1:0008:7B10 ()
 *
 * Called From: 0AEC:0BC1:0020:B4F2
 */
void f__0AEC_0BC1_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BC9); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	f__0AEC_0BC9_000C_DACD();
}

/**
 * Decompiled function f__0AEC_0BC9_000C_DACD()
 *
 * @name f__0AEC_0BC9_000C_DACD
 * @implements 0AEC:0BC9:000C:DACD ()
 *
 * Called From: 0AEC:0BC9:0008:7B10
 */
void f__0AEC_0BC9_000C_DACD()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_push(emu_cs); emu_push(0x0BD5); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0BD5_000F_7E60();
}

/**
 * Decompiled function f__0AEC_0BD5_000F_7E60()
 *
 * @name f__0AEC_0BD5_000F_7E60
 * @implements 0AEC:0BD5:000F:7E60 ()
 *
 * Called From: 0AEC:0BD5:000C:DACD
 */
void f__0AEC_0BD5_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BE4); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	f__0AEC_0BE4_0018_1A4D();
}

/**
 * Decompiled function f__0AEC_0BE4_0018_1A4D()
 *
 * @name f__0AEC_0BE4_0018_1A4D
 * @implements 0AEC:0BE4:0018:1A4D ()
 *
 * Called From: 0AEC:0BE4:000F:7E60
 */
void f__0AEC_0BE4_0018_1A4D()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x2E);
	if (!emu_flags.zf) { f__0AEC_0C13_0021_C309(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BFC); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0BFC_000F_7E60();
}

/**
 * Decompiled function f__0AEC_0BFC_000F_7E60()
 *
 * @name f__0AEC_0BFC_000F_7E60
 * @implements 0AEC:0BFC:000F:7E60 ()
 *
 * Called From: 0AEC:0BFC:0018:1A4D
 */
void f__0AEC_0BFC_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	f__0AEC_0C0B_0029_95F9();
}

/**
 * Decompiled function f__0AEC_0C0B_0029_95F9()
 *
 * @name f__0AEC_0C0B_0029_95F9
 * @implements 0AEC:0C0B:0029:95F9 ()
 *
 * Called From: 0AEC:0C0B:000F:7E60
 */
void f__0AEC_0C0B_0029_95F9()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0C77_0006_137A(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C34); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__0AEC_0C34_0032_8DAE();
}

/**
 * Decompiled function f__0AEC_0C13_0021_C309()
 *
 * @name f__0AEC_0C13_0021_C309
 * @implements 0AEC:0C13:0021:C309 ()
 *
 * Called From: 0AEC:0BF1:0018:1A4D
 */
void f__0AEC_0C13_0021_C309()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0C77_0006_137A(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C34); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__0AEC_0C34_0032_8DAE();
}

/**
 * Decompiled function f__0AEC_0C34_0032_8DAE()
 *
 * @name f__0AEC_0C34_0032_8DAE
 * @implements 0AEC:0C34:0032:8DAE ()
 *
 * Called From: 0AEC:0C34:0021:C309
 * Called From: 0AEC:0C34:0029:95F9
 */
void f__0AEC_0C34_0032_8DAE()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0C66);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0C61; emu_last_length = 0x0032; emu_last_crc = 0x8DAE;
			emu_call();
			return;
	}
	f__0AEC_0C66_0008_FE96();
}

/**
 * Decompiled function f__0AEC_0C66_0008_FE96()
 *
 * @name f__0AEC_0C66_0008_FE96
 * @implements 0AEC:0C66:0008:FE96 ()
 *
 * Called From: 0AEC:0C66:0032:8DAE
 */
void f__0AEC_0C66_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0C6E); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	f__0AEC_0C6E_0008_566A();
}

/**
 * Decompiled function f__0AEC_0C6E_0008_566A()
 *
 * @name f__0AEC_0C6E_0008_566A
 * @implements 0AEC:0C6E:0008:566A ()
 *
 * Called From: 0AEC:0C6E:0008:FE96
 */
void f__0AEC_0C6E_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C76); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0AEC_0C76_0007_3FFA();
}

/**
 * Decompiled function f__0AEC_0C76_0007_3FFA()
 *
 * @name f__0AEC_0C76_0007_3FFA
 * @implements 0AEC:0C76:0007:3FFA ()
 *
 * Called From: 0AEC:0C76:0008:566A
 */
void f__0AEC_0C76_0007_3FFA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0C77_0006_137A()
 *
 * @name f__0AEC_0C77_0006_137A
 * @implements 0AEC:0C77:0006:137A ()
 *
 * Called From: 0AEC:0C17:0021:C309
 * Called From: 0AEC:0C17:0029:95F9
 */
void f__0AEC_0C77_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0CA1_0013_5C6A()
 *
 * @name f__0AEC_0CA1_0013_5C6A
 * @implements 0AEC:0CA1:0013:5C6A ()
 *
 * Called From: B4A2:0941:0011:D731
 */
void f__0AEC_0CA1_0013_5C6A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0AEC_0CB4_0015_EB29(); return; }
	emu_ip = 0x0E38; emu_last_cs = 0x0AEC; emu_last_ip = 0x0CB1; emu_last_length = 0x0013; emu_last_crc = 0x5C6A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0CB4_0015_EB29()
 *
 * @name f__0AEC_0CB4_0015_EB29
 * @implements 0AEC:0CB4:0015:EB29 ()
 *
 * Called From: 0AEC:0CAF:0013:5C6A
 */
void f__0AEC_0CB4_0015_EB29()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0CCA_0028_9176(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CC9); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0AEC_0CC9_0029_2376();
}

/**
 * Decompiled function f__0AEC_0CC9_0029_2376()
 *
 * @name f__0AEC_0CC9_0029_2376
 * @implements 0AEC:0CC9:0029:2376 ()
 *
 * Called From: 0AEC:0CC9:0015:EB29
 */
void f__0AEC_0CC9_0029_2376()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0AEC_0CF2_0009_DCFD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x0D2B; emu_last_cs = 0x0AEC; emu_last_ip = 0x0CF0; emu_last_length = 0x0029; emu_last_crc = 0x2376; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0CCA_0028_9176()
 *
 * @name f__0AEC_0CCA_0028_9176
 * @implements 0AEC:0CCA:0028:9176 ()
 *
 * Called From: 0AEC:0CBE:0015:EB29
 */
void f__0AEC_0CCA_0028_9176()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0AEC_0CF2_0009_DCFD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x0D2B; emu_last_cs = 0x0AEC; emu_last_ip = 0x0CF0; emu_last_length = 0x0028; emu_last_crc = 0x9176; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0CF2_0009_DCFD()
 *
 * @name f__0AEC_0CF2_0009_DCFD
 * @implements 0AEC:0CF2:0009:DCFD ()
 *
 * Called From: 0AEC:0CD1:0028:9176
 * Called From: 0AEC:0CD1:0029:2376
 */
void f__0AEC_0CF2_0009_DCFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x0CFB); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_0CFB_002D_441C();
}

/**
 * Decompiled function f__0AEC_0CFB_002D_441C()
 *
 * @name f__0AEC_0CFB_002D_441C
 * @implements 0AEC:0CFB:002D:441C ()
 *
 * Called From: 0AEC:0CFB:0009:DCFD
 */
void f__0AEC_0CFB_002D_441C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { emu_ip = 0x0D28; emu_last_cs = 0x0AEC; emu_last_ip = 0x0D08; emu_last_length = 0x002D; emu_last_crc = 0x441C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__0AEC_0D2B_0010_971B(); return;
}

/**
 * Decompiled function f__0AEC_0D2B_0010_971B()
 *
 * @name f__0AEC_0D2B_0010_971B
 * @implements 0AEC:0D2B:0010:971B ()
 *
 * Called From: 0AEC:0D26:002D:441C
 */
void f__0AEC_0D2B_0010_971B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_0D3B_0044_EBA4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0D3D_0042_EE94(); return;
}

/**
 * Decompiled function f__0AEC_0D3B_0044_EBA4()
 *
 * @name f__0AEC_0D3B_0044_EBA4
 * @implements 0AEC:0D3B:0044:EBA4 ()
 *
 * Called From: 0AEC:0D34:0010:971B
 */
void f__0AEC_0D3B_0044_EBA4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D7F); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0AEC_0D7F_0036_D428();
}

/**
 * Decompiled function f__0AEC_0D3D_0042_EE94()
 *
 * @name f__0AEC_0D3D_0042_EE94
 * @implements 0AEC:0D3D:0042:EE94 ()
 *
 * Called From: 0AEC:0D39:0010:971B
 */
void f__0AEC_0D3D_0042_EE94()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D7F); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0AEC_0D7F_0036_D428();
}

/**
 * Decompiled function f__0AEC_0D7F_0036_D428()
 *
 * @name f__0AEC_0D7F_0036_D428
 * @implements 0AEC:0D7F:0036:D428 ()
 *
 * Called From: 0AEC:0D7F:0044:EBA4
 * Called From: 0AEC:0D7F:0042:EE94
 */
void f__0AEC_0D7F_0036_D428()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0DB5); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__0AEC_0DB5_001C_3518();
}

/**
 * Decompiled function f__0AEC_0DB5_001C_3518()
 *
 * @name f__0AEC_0DB5_001C_3518
 * @implements 0AEC:0DB5:001C:3518 ()
 *
 * Called From: 0AEC:0DB5:0036:D428
 */
void f__0AEC_0DB5_001C_3518()
{
	emu_addws(&emu_sp, 0x14);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0DD1); emu_cs = 0x10E4; f__10E4_0008_0048_CEEB();
	f__0AEC_0DD1_0024_CD29();
}

/**
 * Decompiled function f__0AEC_0DD1_0024_CD29()
 *
 * @name f__0AEC_0DD1_0024_CD29
 * @implements 0AEC:0DD1:0024:CD29 ()
 *
 * Called From: 0AEC:0DD1:001C:3518
 */
void f__0AEC_0DD1_0024_CD29()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0E38_0006_137A(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DF5); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__0AEC_0DF5_0032_8DAE();
}

/**
 * Decompiled function f__0AEC_0DF5_0032_8DAE()
 *
 * @name f__0AEC_0DF5_0032_8DAE
 * @implements 0AEC:0DF5:0032:8DAE ()
 *
 * Called From: 0AEC:0DF5:0024:CD29
 */
void f__0AEC_0DF5_0032_8DAE()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0E27);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0E22; emu_last_length = 0x0032; emu_last_crc = 0x8DAE;
			emu_call();
			return;
	}
	f__0AEC_0E27_0008_FE96();
}

/**
 * Decompiled function f__0AEC_0E27_0008_FE96()
 *
 * @name f__0AEC_0E27_0008_FE96
 * @implements 0AEC:0E27:0008:FE96 ()
 *
 * Called From: 0AEC:0E27:0032:8DAE
 */
void f__0AEC_0E27_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	f__0AEC_0E2F_0008_566A();
}

/**
 * Decompiled function f__0AEC_0E2F_0008_566A()
 *
 * @name f__0AEC_0E2F_0008_566A
 * @implements 0AEC:0E2F:0008:566A ()
 *
 * Called From: 0AEC:0E2F:0008:FE96
 */
void f__0AEC_0E2F_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0AEC_0E37_0007_3FFA();
}

/**
 * Decompiled function f__0AEC_0E37_0007_3FFA()
 *
 * @name f__0AEC_0E37_0007_3FFA
 * @implements 0AEC:0E37:0007:3FFA ()
 *
 * Called From: 0AEC:0E37:0008:566A
 */
void f__0AEC_0E37_0007_3FFA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0E38_0006_137A()
 *
 * @name f__0AEC_0E38_0006_137A
 * @implements 0AEC:0E38:0006:137A ()
 *
 * Called From: 0AEC:0DD8:0024:CD29
 */
void f__0AEC_0E38_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0E3E_0013_5C7E()
 *
 * @name f__0AEC_0E3E_0013_5C7E
 * @implements 0AEC:0E3E:0013:5C7E ()
 *
 * Called From: B4A2:0941:0011:D731
 */
void f__0AEC_0E3E_0013_5C7E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0AEC_0E51_0015_2B2F(); return; }
	emu_ip = 0x0FD2; emu_last_cs = 0x0AEC; emu_last_ip = 0x0E4E; emu_last_length = 0x0013; emu_last_crc = 0x5C7E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0E51_0015_2B2F()
 *
 * @name f__0AEC_0E51_0015_2B2F
 * @implements 0AEC:0E51:0015:2B2F ()
 *
 * Called From: 0AEC:0E4C:0013:5C7E
 */
void f__0AEC_0E51_0015_2B2F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__0AEC_0E67_001A_090C(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E66); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0AEC_0E66_001B_C10E();
}

/**
 * Decompiled function f__0AEC_0E66_001B_C10E()
 *
 * @name f__0AEC_0E66_001B_C10E
 * @implements 0AEC:0E66:001B:C10E ()
 *
 * Called From: 0AEC:0E66:0015:2B2F
 */
void f__0AEC_0E66_001B_C10E()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (emu_flags.zf) { f__0AEC_0E81_0015_99DF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E83_0013_93BF(); return;
}

/**
 * Decompiled function f__0AEC_0E67_001A_090C()
 *
 * @name f__0AEC_0E67_001A_090C
 * @implements 0AEC:0E67:001A:090C ()
 *
 * Called From: 0AEC:0E5B:0015:2B2F
 */
void f__0AEC_0E67_001A_090C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (emu_flags.zf) { f__0AEC_0E81_0015_99DF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E83_0013_93BF(); return;
}

/**
 * Decompiled function f__0AEC_0E81_0015_99DF()
 *
 * @name f__0AEC_0E81_0015_99DF
 * @implements 0AEC:0E81:0015:99DF ()
 *
 * Called From: 0AEC:0E7A:001B:C10E
 * Called From: 0AEC:0E7A:001A:090C
 */
void f__0AEC_0E81_0015_99DF()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_0E96_0044_696E(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E98_0042_6C5E(); return;
}

/**
 * Decompiled function f__0AEC_0E83_0013_93BF()
 *
 * @name f__0AEC_0E83_0013_93BF
 * @implements 0AEC:0E83:0013:93BF ()
 *
 * Called From: 0AEC:0E7F:001B:C10E
 * Called From: 0AEC:0E7F:001A:090C
 */
void f__0AEC_0E83_0013_93BF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_0E96_0044_696E(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E98_0042_6C5E(); return;
}

/**
 * Decompiled function f__0AEC_0E96_0044_696E()
 *
 * @name f__0AEC_0E96_0044_696E
 * @implements 0AEC:0E96:0044:696E ()
 *
 * Called From: 0AEC:0E8F:0015:99DF
 * Called From: 0AEC:0E8F:0013:93BF
 */
void f__0AEC_0E96_0044_696E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EDA); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0AEC_0EDA_001D_73A8();
}

/**
 * Decompiled function f__0AEC_0E98_0042_6C5E()
 *
 * @name f__0AEC_0E98_0042_6C5E
 * @implements 0AEC:0E98:0042:6C5E ()
 *
 * Called From: 0AEC:0E94:0015:99DF
 * Called From: 0AEC:0E94:0013:93BF
 */
void f__0AEC_0E98_0042_6C5E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EDA); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0AEC_0EDA_001D_73A8();
}

/**
 * Decompiled function f__0AEC_0EDA_001D_73A8()
 *
 * @name f__0AEC_0EDA_001D_73A8
 * @implements 0AEC:0EDA:001D:73A8 ()
 *
 * Called From: 0AEC:0EDA:0044:696E
 * Called From: 0AEC:0EDA:0042:6C5E
 */
void f__0AEC_0EDA_001D_73A8()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x10E4; f__10E4_0008_0048_CEEB();
	f__0AEC_0EF7_0010_E184();
}

/**
 * Decompiled function f__0AEC_0EF7_0010_E184()
 *
 * @name f__0AEC_0EF7_0010_E184
 * @implements 0AEC:0EF7:0010:E184 ()
 *
 * Called From: 0AEC:0EF7:001D:73A8
 */
void f__0AEC_0EF7_0010_E184()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__0AEC_0F07_000D_D1D6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	f__0AEC_0F24_0020_EB1A(); return;
}

/**
 * Decompiled function f__0AEC_0F07_000D_D1D6()
 *
 * @name f__0AEC_0F07_000D_D1D6
 * @implements 0AEC:0F07:000D:D1D6 ()
 *
 * Called From: 0AEC:0EFE:0010:E184
 */
void f__0AEC_0F07_000D_D1D6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__0AEC_0F14_0030_0EF9(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x6);
	f__0AEC_0F19_002B_EE22(); return;
}

/**
 * Decompiled function f__0AEC_0F14_0030_0EF9()
 *
 * @name f__0AEC_0F14_0030_0EF9
 * @implements 0AEC:0F14:0030:0EF9 ()
 *
 * Called From: 0AEC:0F0B:000D:D1D6
 */
void f__0AEC_0F14_0030_0EF9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xF);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x22);
	if (!emu_flags.zf) { f__0AEC_0F24_0020_EB1A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xEF);
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0F44_0008_7B10();
}

/**
 * Decompiled function f__0AEC_0F19_002B_EE22()
 *
 * @name f__0AEC_0F19_002B_EE22
 * @implements 0AEC:0F19:002B:EE22 ()
 *
 * Called From: 0AEC:0F12:000D:D1D6
 */
void f__0AEC_0F19_002B_EE22()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x22);
	if (!emu_flags.zf) { f__0AEC_0F24_0020_EB1A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xEF);
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0F44_0008_7B10();
}

/**
 * Decompiled function f__0AEC_0F24_0020_EB1A()
 *
 * @name f__0AEC_0F24_0020_EB1A
 * @implements 0AEC:0F24:0020:EB1A ()
 *
 * Called From: 0AEC:0F05:0010:E184
 * Called From: 0AEC:0F1D:0030:0EF9
 * Called From: 0AEC:0F1D:002B:EE22
 */
void f__0AEC_0F24_0020_EB1A()
{
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0F44_0008_7B10();
}

/**
 * Decompiled function f__0AEC_0F44_0008_7B10()
 *
 * @name f__0AEC_0F44_0008_7B10
 * @implements 0AEC:0F44:0008:7B10 ()
 *
 * Called From: 0AEC:0F44:0020:EB1A
 * Called From: 0AEC:0F44:0030:0EF9
 * Called From: 0AEC:0F44:002B:EE22
 */
void f__0AEC_0F44_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F4C); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	f__0AEC_0F4C_000B_F905();
}

/**
 * Decompiled function f__0AEC_0F4C_000B_F905()
 *
 * @name f__0AEC_0F4C_000B_F905
 * @implements 0AEC:0F4C:000B:F905 ()
 *
 * Called From: 0AEC:0F4C:0008:7B10
 */
void f__0AEC_0F4C_000B_F905()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F57); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0AEC_0F57_000F_7E60();
}

/**
 * Decompiled function f__0AEC_0F57_000F_7E60()
 *
 * @name f__0AEC_0F57_000F_7E60
 * @implements 0AEC:0F57:000F:7E60 ()
 *
 * Called From: 0AEC:0F57:000B:F905
 */
void f__0AEC_0F57_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	f__0AEC_0F66_0029_96F8();
}

/**
 * Decompiled function f__0AEC_0F66_0029_96F8()
 *
 * @name f__0AEC_0F66_0029_96F8
 * @implements 0AEC:0F66:0029:96F8 ()
 *
 * Called From: 0AEC:0F66:000F:7E60
 */
void f__0AEC_0F66_0029_96F8()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__0AEC_0FD2_0006_137A(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F8F); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__0AEC_0F8F_0032_8C2F();
}

/**
 * Decompiled function f__0AEC_0F8F_0032_8C2F()
 *
 * @name f__0AEC_0F8F_0032_8C2F
 * @implements 0AEC:0F8F:0032:8C2F ()
 *
 * Called From: 0AEC:0F8F:0029:96F8
 */
void f__0AEC_0F8F_0032_8C2F()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0FC1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0FBC; emu_last_length = 0x0032; emu_last_crc = 0x8C2F;
			emu_call();
			return;
	}
	f__0AEC_0FC1_0008_FE96();
}

/**
 * Decompiled function f__0AEC_0FC1_0008_FE96()
 *
 * @name f__0AEC_0FC1_0008_FE96
 * @implements 0AEC:0FC1:0008:FE96 ()
 *
 * Called From: 0AEC:0FC1:0032:8C2F
 */
void f__0AEC_0FC1_0008_FE96()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	f__0AEC_0FC9_0008_566A();
}

/**
 * Decompiled function f__0AEC_0FC9_0008_566A()
 *
 * @name f__0AEC_0FC9_0008_566A
 * @implements 0AEC:0FC9:0008:566A ()
 *
 * Called From: 0AEC:0FC9:0008:FE96
 */
void f__0AEC_0FC9_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FD1); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0AEC_0FD1_0007_3FFA();
}

/**
 * Decompiled function f__0AEC_0FD1_0007_3FFA()
 *
 * @name f__0AEC_0FD1_0007_3FFA
 * @implements 0AEC:0FD1:0007:3FFA ()
 *
 * Called From: 0AEC:0FD1:0008:566A
 */
void f__0AEC_0FD1_0007_3FFA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0FD2_0006_137A()
 *
 * @name f__0AEC_0FD2_0006_137A
 * @implements 0AEC:0FD2:0006:137A ()
 *
 * Called From: 0AEC:0F72:0029:96F8
 */
void f__0AEC_0FD2_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_0FD8_0017_03FF()
 *
 * @name f__0AEC_0FD8_0017_03FF
 * @implements 0AEC:0FD8:0017:03FF ()
 *
 * Called From: B4A2:06AC:0030:FF82
 */
void f__0AEC_0FD8_0017_03FF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFF);
	if (emu_flags.zf) { f__0AEC_1041_003B_02FE(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_0FEF_0021_A79F();
}

/**
 * Decompiled function f__0AEC_0FEF_0021_A79F()
 *
 * @name f__0AEC_0FEF_0021_A79F
 * @implements 0AEC:0FEF:0021:A79F ()
 *
 * Called From: 0AEC:0FEF:0017:03FF
 */
void f__0AEC_0FEF_0021_A79F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x1010; emu_last_cs = 0x0AEC; emu_last_ip = 0x0FFC; emu_last_length = 0x0021; emu_last_crc = 0xA79F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	f__0AEC_101F_001B_7D13(); return;
}

/**
 * Decompiled function f__0AEC_101F_001B_7D13()
 *
 * @name f__0AEC_101F_001B_7D13
 * @implements 0AEC:101F:001B:7D13 ()
 *
 * Called From: 0AEC:100E:0021:A79F
 */
void f__0AEC_101F_001B_7D13()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFFFF);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x103A); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_103A_0042_026A();
}

/**
 * Decompiled function f__0AEC_103A_0042_026A()
 *
 * @name f__0AEC_103A_0042_026A
 * @implements 0AEC:103A:0042:026A ()
 *
 * Called From: 0AEC:103A:001B:7D13
 */
void f__0AEC_103A_0042_026A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F4));
	if (emu_flags.zf) { f__0AEC_1089_0005_14BC(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; emu_ip = 0x107E; emu_last_cs = 0x0AEC; emu_last_ip = 0x1077; emu_last_length = 0x0042; emu_last_crc = 0x026A; emu_call(); // Jump does not resolve
	f__0AEC_107C_000C_4523();
}

/**
 * Decompiled function f__0AEC_1041_003B_02FE()
 *
 * @name f__0AEC_1041_003B_02FE
 * @implements 0AEC:1041:003B:02FE ()
 *
 * Called From: 0AEC:0FE4:0017:03FF
 */
void f__0AEC_1041_003B_02FE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F4));
	if (emu_flags.zf) { emu_ip = 0x1089; emu_last_cs = 0x0AEC; emu_last_ip = 0x1048; emu_last_length = 0x003B; emu_last_crc = 0x02FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	f__0AEC_107C_000C_4523();
}

/**
 * Decompiled function f__0AEC_107C_000C_4523()
 *
 * @name f__0AEC_107C_000C_4523
 * @implements 0AEC:107C:000C:4523 ()
 *
 * Called From: 0AEC:107C:003B:02FE
 */
void f__0AEC_107C_000C_4523()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1088); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_1088_0006_02FC();
}

/**
 * Decompiled function f__0AEC_1088_0006_02FC()
 *
 * @name f__0AEC_1088_0006_02FC
 * @implements 0AEC:1088:0006:02FC ()
 *
 * Called From: 0AEC:1088:000C:4523
 */
void f__0AEC_1088_0006_02FC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_108E_0005_04BA(); return;
}

/**
 * Decompiled function f__0AEC_1089_0005_14BC()
 *
 * @name f__0AEC_1089_0005_14BC
 * @implements 0AEC:1089:0005:14BC ()
 *
 * Called From: 0AEC:1048:0042:026A
 */
void f__0AEC_1089_0005_14BC()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_108E_0005_04BA(); return;
}

/**
 * Decompiled function f__0AEC_108E_0005_04BA()
 *
 * @name f__0AEC_108E_0005_04BA
 * @implements 0AEC:108E:0005:04BA ()
 *
 * Called From: 0AEC:108C:0006:02FC
 * Called From: 0AEC:108C:0005:14BC
 */
void f__0AEC_108E_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_1093_000F_6CE7()
 *
 * @name f__0AEC_1093_000F_6CE7
 * @implements 0AEC:1093:000F:6CE7 ()
 *
 * Called From: B4A2:06AC:0030:FF82
 */
void f__0AEC_1093_000F_6CE7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x10A2); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_10A2_0016_D878();
}

/**
 * Decompiled function f__0AEC_10A2_0016_D878()
 *
 * @name f__0AEC_10A2_0016_D878
 * @implements 0AEC:10A2:0016:D878 ()
 *
 * Called From: 0AEC:10A2:000F:6CE7
 */
void f__0AEC_10A2_0016_D878()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_subws(&emu_bx.x, 0x26);
	emu_cmpws(&emu_bx.x, 0x8);
	if ((emu_flags.cf || emu_flags.zf)) { f__0AEC_10B8_0007_5ED6(); return; }
	emu_ip = 0x1165; emu_last_cs = 0x0AEC; emu_last_ip = 0x10B5; emu_last_length = 0x0016; emu_last_crc = 0xD878; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_10B8_0007_5ED6()
 *
 * @name f__0AEC_10B8_0007_5ED6
 * @implements 0AEC:10B8:0007:5ED6 ()
 *
 * Called From: 0AEC:10B3:0016:D878
 */
void f__0AEC_10B8_0007_5ED6()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x116F);
	switch (emu_ip) {
		case 0x10BF: f__0AEC_10BF_0018_0D28(); return;
		case 0x1121: f__0AEC_1121_000B_D41C(); return;
		case 0x112C: f__0AEC_112C_0013_A583(); return;
		case 0x113F: f__0AEC_113F_0012_D5B1(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x10BA; emu_last_length = 0x0007; emu_last_crc = 0x5ED6;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_10BF_0018_0D28()
 *
 * @name f__0AEC_10BF_0018_0D28
 * @implements 0AEC:10BF:0018:0D28 ()
 *
 * Called From: 0AEC:10BA:0007:5ED6
 */
void f__0AEC_10BF_0018_0D28()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x111F; emu_last_cs = 0x0AEC; emu_last_ip = 0x10C7; emu_last_length = 0x0018; emu_last_crc = 0x0D28; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10D7); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__0AEC_10D7_002B_558C();
}

/**
 * Decompiled function f__0AEC_10D7_002B_558C()
 *
 * @name f__0AEC_10D7_002B_558C
 * @implements 0AEC:10D7:002B:558C ()
 *
 * Called From: 0AEC:10D7:0018:0D28
 */
void f__0AEC_10D7_002B_558C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x1102); emu_cs = 0x0C3A; f__0C3A_0C5C_004D_4725();
	f__0AEC_1102_001C_CF87();
}

/**
 * Decompiled function f__0AEC_1102_001C_CF87()
 *
 * @name f__0AEC_1102_001C_CF87
 * @implements 0AEC:1102:001C:CF87 ()
 *
 * Called From: 0AEC:1102:002B:558C
 */
void f__0AEC_1102_001C_CF87()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_111E_0003_01E8();
}

/**
 * Decompiled function f__0AEC_111E_0003_01E8()
 *
 * @name f__0AEC_111E_0003_01E8
 * @implements 0AEC:111E:0003:01E8 ()
 *
 * Called From: 0AEC:111E:001C:CF87
 */
void f__0AEC_111E_0003_01E8()
{
	emu_pop(&emu_cx.x);
	f__0AEC_1167_0004_069C(); return;
}

/**
 * Decompiled function f__0AEC_1121_000B_D41C()
 *
 * @name f__0AEC_1121_000B_D41C
 * @implements 0AEC:1121:000B:D41C ()
 *
 * Called From: 0AEC:10BA:0007:5ED6
 */
void f__0AEC_1121_000B_D41C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4000);
	f__0AEC_1167_0004_069C(); return;
}

/**
 * Decompiled function f__0AEC_112C_0013_A583()
 *
 * @name f__0AEC_112C_0013_A583
 * @implements 0AEC:112C:0013:A583 ()
 *
 * Called From: 0AEC:10BA:0007:5ED6
 */
void f__0AEC_112C_0013_A583()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x9FFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0xFD);
	f__0AEC_1167_0004_069C(); return;
}

/**
 * Decompiled function f__0AEC_113F_0012_D5B1()
 *
 * @name f__0AEC_113F_0012_D5B1
 * @implements 0AEC:113F:0012:D5B1 ()
 *
 * Called From: 0AEC:10BA:0007:5ED6
 */
void f__0AEC_113F_0012_D5B1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x0C3A; f__0C3A_142D_0018_192B();
	f__0AEC_1151_0005_1F9E();
}

/**
 * Decompiled function f__0AEC_1151_0005_1F9E()
 *
 * @name f__0AEC_1151_0005_1F9E
 * @implements 0AEC:1151:0005:1F9E ()
 *
 * Called From: 0AEC:1151:0012:D5B1
 */
void f__0AEC_1151_0005_1F9E()
{
	emu_addws(&emu_sp, 0x6);
	f__0AEC_1167_0004_069C(); return;
}

/**
 * Decompiled function f__0AEC_1167_0004_069C()
 *
 * @name f__0AEC_1167_0004_069C
 * @implements 0AEC:1167:0004:069C ()
 *
 * Called From: 0AEC:111F:0003:01E8
 * Called From: 0AEC:112A:000B:D41C
 * Called From: 0AEC:113D:0013:A583
 * Called From: 0AEC:1154:0005:1F9E
 */
void f__0AEC_1167_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_116B_0004_0F7A(); return;
}

/**
 * Decompiled function f__0AEC_116B_0004_0F7A()
 *
 * @name f__0AEC_116B_0004_0F7A
 * @implements 0AEC:116B:0004:0F7A ()
 *
 * Called From: 0AEC:1169:0004:069C
 */
void f__0AEC_116B_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_1181_001C_EF7E()
 *
 * @name f__0AEC_1181_001C_EF7E
 * @implements 0AEC:1181:001C:EF7E ()
 *
 * Called From: B4A2:06AC:0030:FF82
 */
void f__0AEC_1181_001C_EF7E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0AEC_11A1_0009_DCFD(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x119D); emu_cs = 0x1A34; emu_ip = 0x3945; emu_last_cs = 0x0AEC; emu_last_ip = 0x1198; emu_last_length = 0x001C; emu_last_crc = 0xEF7E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_11A1_0009_DCFD()
 *
 * @name f__0AEC_11A1_0009_DCFD
 * @implements 0AEC:11A1:0009:DCFD ()
 *
 * Called From: 0AEC:118E:001C:EF7E
 */
void f__0AEC_11A1_0009_DCFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x11AA); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_11AA_0041_7577();
}

/**
 * Decompiled function f__0AEC_11AA_0041_7577()
 *
 * @name f__0AEC_11AA_0041_7577
 * @implements 0AEC:11AA:0041:7577 ()
 *
 * Called From: 0AEC:11AA:0009:DCFD
 */
void f__0AEC_11AA_0041_7577()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11B7; emu_last_length = 0x0041; emu_last_crc = 0x7577; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11DA; emu_last_length = 0x0041; emu_last_crc = 0x7577; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11EB); emu_cs = 0x0C3A; f__0C3A_142D_0018_192B();
	f__0AEC_11EB_0007_76DC();
}

/**
 * Decompiled function f__0AEC_11EB_0007_76DC()
 *
 * @name f__0AEC_11EB_0007_76DC
 * @implements 0AEC:11EB:0007:76DC ()
 *
 * Called From: 0AEC:11EB:0041:7577
 */
void f__0AEC_11EB_0007_76DC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_11F2_0004_0F7A(); return;
}

/**
 * Decompiled function f__0AEC_11F2_0004_0F7A()
 *
 * @name f__0AEC_11F2_0004_0F7A
 * @implements 0AEC:11F2:0004:0F7A ()
 *
 * Called From: 0AEC:11F0:0007:76DC
 */
void f__0AEC_11F2_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_11F6_000F_5CE7()
 *
 * @name f__0AEC_11F6_000F_5CE7
 * @implements 0AEC:11F6:000F:5CE7 ()
 *
 * Called From: B4A2:06AC:0030:FF82
 */
void f__0AEC_11F6_000F_5CE7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x1205); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_1205_001C_E619();
}

/**
 * Decompiled function f__0AEC_1205_001C_E619()
 *
 * @name f__0AEC_1205_001C_E619
 * @implements 0AEC:1205:001C:E619 ()
 *
 * Called From: 0AEC:1205:000F:5CE7
 */
void f__0AEC_1205_001C_E619()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x0C3A; f__0C3A_2814_0015_2939();
	f__0AEC_1221_001C_DDEE();
}

/**
 * Decompiled function f__0AEC_1221_001C_DDEE()
 *
 * @name f__0AEC_1221_001C_DDEE
 * @implements 0AEC:1221:001C:DDEE ()
 *
 * Called From: 0AEC:1221:001C:E619
 */
void f__0AEC_1221_001C_DDEE()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0AEC_1240_0004_069C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x0C3A; emu_ip = 0x3951; emu_last_cs = 0x0AEC; emu_last_ip = 0x1238; emu_last_length = 0x001C; emu_last_crc = 0xDDEE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_1240_0004_069C()
 *
 * @name f__0AEC_1240_0004_069C
 * @implements 0AEC:1240:0004:069C ()
 *
 * Called From: 0AEC:1226:001C:DDEE
 */
void f__0AEC_1240_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_1244_0004_0F7A(); return;
}

/**
 * Decompiled function f__0AEC_1244_0004_0F7A()
 *
 * @name f__0AEC_1244_0004_0F7A
 * @implements 0AEC:1244:0004:0F7A ()
 *
 * Called From: 0AEC:1242:0004:069C
 */
void f__0AEC_1244_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
