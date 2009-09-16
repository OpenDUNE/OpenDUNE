/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0AEC_0005_0010_9634()
 *
 * @name f__0AEC_0005_0010_9634
 * @implements 0AEC:0005:0010:9634 ()
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void f__0AEC_0005_0010_9634()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x34CD; ovl__34CD(32);
	f__0AEC_0015_001F_3C46();
}

/**
 * Decompiled function f__0AEC_0015_001F_3C46()
 *
 * @name f__0AEC_0015_001F_3C46
 * @implements 0AEC:0015:001F:3C46 ()
 *
 * Called From: 0AEC:0015:0010:9634
 */
void f__0AEC_0015_001F_3C46()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x0046; emu_last_cs = 0x0AEC; emu_last_ip = 0x0022; emu_last_length = 0x001F; emu_last_crc = 0x3C46; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0AEC_0034_000A_5A66();
}

/**
 * Decompiled function f__0AEC_0034_000A_5A66()
 *
 * @name f__0AEC_0034_000A_5A66
 * @implements 0AEC:0034:000A:5A66 ()
 *
 * Called From: 0AEC:0034:001F:3C46
 */
void f__0AEC_0034_000A_5A66()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_003E_0007_0BB0();
}

/**
 * Decompiled function f__0AEC_003E_0007_0BB0()
 *
 * @name f__0AEC_003E_0007_0BB0
 * @implements 0AEC:003E:0007:0BB0 ()
 *
 * Called From: 0AEC:003E:000A:5A66
 */
void f__0AEC_003E_0007_0BB0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	f__0AEC_0045_0005_EAF1();
}

/**
 * Decompiled function f__0AEC_0045_0005_EAF1()
 *
 * @name f__0AEC_0045_0005_EAF1
 * @implements 0AEC:0045:0005:EAF1 ()
 *
 * Called From: 0AEC:0045:0007:0BB0
 */
void f__0AEC_0045_0005_EAF1()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_004A_0005_8BCF(); return;
}

/**
 * Decompiled function f__0AEC_004A_0005_8BCF()
 *
 * @name f__0AEC_004A_0005_8BCF
 * @implements 0AEC:004A:0005:8BCF ()
 *
 * Called From: 0AEC:0048:0005:EAF1
 */
void f__0AEC_004A_0005_8BCF()
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
 * Decompiled function f__0AEC_004F_0024_1E6F()
 *
 * @name f__0AEC_004F_0024_1E6F
 * @implements 0AEC:004F:0024:1E6F ()
 *
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:003E:C657
 * Called From: B4A2:06AC:0040:740E
 */
void f__0AEC_004F_0024_1E6F()
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
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x009E; emu_last_cs = 0x0AEC; emu_last_ip = 0x006A; emu_last_length = 0x0024; emu_last_crc = 0x1E6F; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x7FB);
	switch (emu_ip) {
		case 0x0073: f__0AEC_0073_0007_CD55(); return;
		case 0x007A: f__0AEC_007A_0008_FD9A(); return;
		case 0x0082: f__0AEC_0082_0007_C5D5(); return;
		case 0x0089: f__0AEC_0089_0007_F655(); return;
		case 0x0090: f__0AEC_0090_0007_9AD5(); return;
		case 0x0097: f__0AEC_0097_0007_EF55(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x006E; emu_last_length = 0x0024; emu_last_crc = 0x1E6F;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_0073_0007_CD55()
 *
 * @name f__0AEC_0073_0007_CD55
 * @implements 0AEC:0073:0007:CD55 ()
 *
 * Called From: 0AEC:006E:0024:1E6F
 */
void f__0AEC_0073_0007_CD55()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__0AEC_00A0_0048_33A5(); return;
}

/**
 * Decompiled function f__0AEC_007A_0008_FD9A()
 *
 * @name f__0AEC_007A_0008_FD9A
 * @implements 0AEC:007A:0008:FD9A ()
 *
 * Called From: 0AEC:006E:0024:1E6F
 */
void f__0AEC_007A_0008_FD9A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A36));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__0AEC_00A0_0048_33A5(); return;
}

/**
 * Decompiled function f__0AEC_0082_0007_C5D5()
 *
 * @name f__0AEC_0082_0007_C5D5
 * @implements 0AEC:0082:0007:C5D5 ()
 *
 * Called From: 0AEC:006E:0024:1E6F
 */
void f__0AEC_0082_0007_C5D5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__0AEC_00A0_0048_33A5(); return;
}

/**
 * Decompiled function f__0AEC_0089_0007_F655()
 *
 * @name f__0AEC_0089_0007_F655
 * @implements 0AEC:0089:0007:F655 ()
 *
 * Called From: 0AEC:006E:0024:1E6F
 */
void f__0AEC_0089_0007_F655()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	f__0AEC_00A0_0048_33A5(); return;
}

/**
 * Decompiled function f__0AEC_0090_0007_9AD5()
 *
 * @name f__0AEC_0090_0007_9AD5
 * @implements 0AEC:0090:0007:9AD5 ()
 *
 * Called From: 0AEC:006E:0024:1E6F
 */
void f__0AEC_0090_0007_9AD5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4);
	f__0AEC_00A0_0048_33A5(); return;
}

/**
 * Decompiled function f__0AEC_0097_0007_EF55()
 *
 * @name f__0AEC_0097_0007_EF55
 * @implements 0AEC:0097:0007:EF55 ()
 *
 * Called From: 0AEC:006E:0024:1E6F
 */
void f__0AEC_0097_0007_EF55()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3);
	f__0AEC_00A0_0048_33A5(); return;
}

/**
 * Decompiled function f__0AEC_00A0_0048_33A5()
 *
 * @name f__0AEC_00A0_0048_33A5
 * @implements 0AEC:00A0:0048:33A5 ()
 *
 * Called From: 0AEC:0078:0007:CD55
 * Called From: 0AEC:0080:0008:FD9A
 * Called From: 0AEC:0087:0007:C5D5
 * Called From: 0AEC:008E:0007:F655
 * Called From: 0AEC:0095:0007:9AD5
 * Called From: 0AEC:009C:0007:EF55
 */
void f__0AEC_00A0_0048_33A5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A34));
	if (emu_flags.zf) { f__0AEC_00F1_0010_6EE9(); return; }
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
	emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	f__0AEC_00E8_0019_CDE8();
}

/**
 * Decompiled function f__0AEC_00E8_0019_CDE8()
 *
 * @name f__0AEC_00E8_0019_CDE8
 * @implements 0AEC:00E8:0019:CDE8 ()
 *
 * Called From: 0AEC:00E8:0048:33A5
 */
void f__0AEC_00E8_0019_CDE8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2D);
	if (!emu_flags.zf) { f__0AEC_0101_0022_83CA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_07ED_0006_F7CE(); return;
}

/**
 * Decompiled function f__0AEC_00F1_0010_6EE9()
 *
 * @name f__0AEC_00F1_0010_6EE9
 * @implements 0AEC:00F1:0010:6EE9 ()
 *
 * Called From: 0AEC:00A7:0048:33A5
 */
void f__0AEC_00F1_0010_6EE9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2D);
	if (!emu_flags.zf) { f__0AEC_0101_0022_83CA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_07ED_0006_F7CE(); return;
}

/**
 * Decompiled function f__0AEC_00FB_0006_FE11()
 *
 * @name f__0AEC_00FB_0006_FE11
 * @implements 0AEC:00FB:0006:FE11 ()
 *
 * Called From: 0AEC:01F3:0003:22A1
 * Called From: 0AEC:01F3:0004:B2A4
 * Called From: 0AEC:0716:0003:E198
 * Called From: 0AEC:0716:0006:8BBA
 * Called From: 0AEC:07A1:0003:A1B5
 * Called From: 0AEC:07A1:0004:31B0
 * Called From: 0AEC:07E7:0004:B1A1
 * Called From: 0AEC:07EA:0003:E1A3
 */
void f__0AEC_00FB_0006_FE11()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_07ED_0006_F7CE(); return;
}

/**
 * Decompiled function f__0AEC_0101_0022_83CA()
 *
 * @name f__0AEC_0101_0022_83CA
 * @implements 0AEC:0101:0022:83CA ()
 *
 * Called From: 0AEC:00F9:0010:6EE9
 * Called From: 0AEC:00F9:0019:CDE8
 */
void f__0AEC_0101_0022_83CA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1100);
	if (emu_flags.zf) { f__0AEC_0123_0032_DCBA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B8), 0x0);
	f__0AEC_013A_001B_CB76(); return;
}

/**
 * Decompiled function f__0AEC_0123_0032_DCBA()
 *
 * @name f__0AEC_0123_0032_DCBA
 * @implements 0AEC:0123:0032:DCBA ()
 *
 * Called From: 0AEC:0114:0022:83CA
 */
void f__0AEC_0123_0032_DCBA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x2200);
	if (emu_flags.zf) { f__0AEC_013A_001B_CB76(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B8), 0x0);
	if (!emu_flags.zf) { f__0AEC_013A_001B_CB76(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subws(&emu_bx.x, 0x27);
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0AEC_0171_0007_31AA(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x7F3);
	switch (emu_ip) {
		case 0x0155: f__0AEC_0155_0007_B045(); return;
		case 0x015C: f__0AEC_015C_0007_F4C5(); return;
		case 0x0163: f__0AEC_0163_0007_D945(); return;
		case 0x016A: f__0AEC_016A_0007_9DC5(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0150; emu_last_length = 0x0032; emu_last_crc = 0xDCBA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_013A_001B_CB76()
 *
 * @name f__0AEC_013A_001B_CB76
 * @implements 0AEC:013A:001B:CB76 ()
 *
 * Called From: 0AEC:0121:0022:83CA
 * Called From: 0AEC:012C:0032:DCBA
 * Called From: 0AEC:0133:0032:DCBA
 */
void f__0AEC_013A_001B_CB76()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subws(&emu_bx.x, 0x27);
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0AEC_0171_0007_31AA(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x7F3);
	switch (emu_ip) {
		case 0x0155: f__0AEC_0155_0007_B045(); return;
		case 0x015C: f__0AEC_015C_0007_F4C5(); return;
		case 0x0163: f__0AEC_0163_0007_D945(); return;
		case 0x016A: f__0AEC_016A_0007_9DC5(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0150; emu_last_length = 0x001B; emu_last_crc = 0xCB76;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_0155_0007_B045()
 *
 * @name f__0AEC_0155_0007_B045
 * @implements 0AEC:0155:0007:B045 ()
 *
 * Called From: 0AEC:0150:001B:CB76
 * Called From: 0AEC:0150:0032:DCBA
 */
void f__0AEC_0155_0007_B045()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x6);
	f__0AEC_0178_007A_7C0A(); return;
}

/**
 * Decompiled function f__0AEC_015C_0007_F4C5()
 *
 * @name f__0AEC_015C_0007_F4C5
 * @implements 0AEC:015C:0007:F4C5 ()
 *
 * Called From: 0AEC:0150:001B:CB76
 * Called From: 0AEC:0150:0032:DCBA
 */
void f__0AEC_015C_0007_F4C5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	f__0AEC_0178_007A_7C0A(); return;
}

/**
 * Decompiled function f__0AEC_0163_0007_D945()
 *
 * @name f__0AEC_0163_0007_D945
 * @implements 0AEC:0163:0007:D945 ()
 *
 * Called From: 0AEC:0150:001B:CB76
 * Called From: 0AEC:0150:0032:DCBA
 */
void f__0AEC_0163_0007_D945()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__0AEC_0178_007A_7C0A(); return;
}

/**
 * Decompiled function f__0AEC_016A_0007_9DC5()
 *
 * @name f__0AEC_016A_0007_9DC5
 * @implements 0AEC:016A:0007:9DC5 ()
 *
 * Called From: 0AEC:0150:001B:CB76
 * Called From: 0AEC:0150:0032:DCBA
 */
void f__0AEC_016A_0007_9DC5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	f__0AEC_0178_007A_7C0A(); return;
}

/**
 * Decompiled function f__0AEC_0171_0007_31AA()
 *
 * @name f__0AEC_0171_0007_31AA
 * @implements 0AEC:0171:0007:31AA ()
 *
 * Called From: 0AEC:014C:001B:CB76
 * Called From: 0AEC:014C:0032:DCBA
 */
void f__0AEC_0171_0007_31AA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	f__0AEC_0178_007A_7C0A(); return;
}

/**
 * Decompiled function f__0AEC_0178_007A_7C0A()
 *
 * @name f__0AEC_0178_007A_7C0A
 * @implements 0AEC:0178:007A:7C0A ()
 *
 * Called From: 0AEC:015A:0007:B045
 * Called From: 0AEC:0161:0007:F4C5
 * Called From: 0AEC:0168:0007:D945
 * Called From: 0AEC:016F:0007:9DC5
 * Called From: 0AEC:0176:0007:31AA
 */
void f__0AEC_0178_007A_7C0A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (emu_flags.zf) { f__0AEC_01F6_000F_8388(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3440));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x343E));
	emu_addws(&emu_dx.x, 0xA);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x018F; emu_last_length = 0x007A; emu_last_crc = 0x7C0A; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__0AEC_0199_0059_1015(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0AEC_01D0_0022_10B3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x343C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x343A));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AA; emu_last_length = 0x007A; emu_last_crc = 0x7C0A; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x01B4; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AC; emu_last_length = 0x007A; emu_last_crc = 0x7C0A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0AEC_01D0_0022_10B3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41CA), 0x0);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_5CAC(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671B), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01C0; emu_last_length = 0x007A; emu_last_crc = 0x7C0A; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x4);
	if (emu_flags.zf) { f__0AEC_01D0_0022_10B3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x3);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_5CAC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0x0AEC; emu_last_ip = 0x01D4; emu_last_length = 0x007A; emu_last_crc = 0x7C0A; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_01F3_0003_22A1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; emu_ip = 0x0627; emu_last_cs = 0x0AEC; emu_last_ip = 0x01ED; emu_last_length = 0x007A; emu_last_crc = 0x7C0A; emu_call(); // Jump does not resolve
	f__0AEC_01F2_0004_B2A4();
}

/**
 * Decompiled function f__0AEC_0199_0059_1015()
 *
 * @name f__0AEC_0199_0059_1015
 * @implements 0AEC:0199:0059:1015 ()
 *
 * Called From: 0AEC:0191:007A:7C0A
 */
void f__0AEC_0199_0059_1015()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x343C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x343A));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AA; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x01B4; emu_last_cs = 0x0AEC; emu_last_ip = 0x01AC; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__0AEC_01D0_0022_10B3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41CA), 0x0);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_5CAC(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671B), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01C0; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x4);
	if (emu_flags.zf) { emu_ip = 0x01D0; emu_last_cs = 0x0AEC; emu_last_ip = 0x01C7; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0x0AEC; emu_last_ip = 0x01CE; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0x0AEC; emu_last_ip = 0x01D4; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01F3; emu_last_cs = 0x0AEC; emu_last_ip = 0x01DA; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; emu_ip = 0x0627; emu_last_cs = 0x0AEC; emu_last_ip = 0x01ED; emu_last_length = 0x0059; emu_last_crc = 0x1015; emu_call(); // Jump does not resolve
	f__0AEC_01F2_0004_B2A4();
}

/**
 * Decompiled function f__0AEC_01D0_0022_10B3()
 *
 * @name f__0AEC_01D0_0022_10B3
 * @implements 0AEC:01D0:0022:10B3 ()
 *
 * Called From: 0AEC:0197:007A:7C0A
 * Called From: 0AEC:01B2:0059:1015
 * Called From: 0AEC:01B2:007A:7C0A
 * Called From: 0AEC:01C7:007A:7C0A
 */
void f__0AEC_01D0_0022_10B3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_01DC_0016_5CAC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_01F3_0003_22A1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; f__0F78_0435_000E_32E0();
	f__0AEC_01F2_0004_B2A4();
}

/**
 * Decompiled function f__0AEC_01DC_0016_5CAC()
 *
 * @name f__0AEC_01DC_0016_5CAC
 * @implements 0AEC:01DC:0016:5CAC ()
 *
 * Called From: 0AEC:01B9:0059:1015
 * Called From: 0AEC:01B9:007A:7C0A
 * Called From: 0AEC:01CE:007A:7C0A
 * Called From: 0AEC:01D4:0022:10B3
 */
void f__0AEC_01DC_0016_5CAC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3440), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x343E), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; f__0F78_0435_000E_32E0();
	f__0AEC_01F2_0004_B2A4();
}

/**
 * Decompiled function f__0AEC_01F2_0004_B2A4()
 *
 * @name f__0AEC_01F2_0004_B2A4
 * @implements 0AEC:01F2:0004:B2A4 ()
 *
 * Called From: 0AEC:01F2:0016:5CAC
 * Called From: 0AEC:01F2:0022:10B3
 */
void f__0AEC_01F2_0004_B2A4()
{
	emu_pop(&emu_cx.x);
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_01F3_0003_22A1()
 *
 * @name f__0AEC_01F3_0003_22A1
 * @implements 0AEC:01F3:0003:22A1 ()
 *
 * Called From: 0AEC:01DA:0022:10B3
 * Called From: 0AEC:01DA:007A:7C0A
 */
void f__0AEC_01F3_0003_22A1()
{
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_01F6_000F_8388()
 *
 * @name f__0AEC_01F6_000F_8388
 * @implements 0AEC:01F6:000F:8388 ()
 *
 * Called From: 0AEC:017C:007A:7C0A
 */
void f__0AEC_01F6_000F_8388()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__0AEC_0205_001E_2049(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	f__0AEC_020C_0017_8C1B(); return;
}

/**
 * Decompiled function f__0AEC_0205_001E_2049()
 *
 * @name f__0AEC_0205_001E_2049
 * @implements 0AEC:0205:001E:2049 ()
 *
 * Called From: 0AEC:01FA:000F:8388
 */
void f__0AEC_0205_001E_2049()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_ax.x, 0x2B);
	if (emu_flags.zf) { f__0AEC_0223_0022_AED2(); return; }
	emu_cmpw(&emu_ax.x, 0x2C);
	if (emu_flags.zf) { f__0AEC_0261_000A_314E(); return; }
	emu_ip = 0x033F; emu_last_cs = 0x0AEC; emu_last_ip = 0x0220; emu_last_length = 0x001E; emu_last_crc = 0x2049; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_020C_0017_8C1B()
 *
 * @name f__0AEC_020C_0017_8C1B
 * @implements 0AEC:020C:0017:8C1B ()
 *
 * Called From: 0AEC:0203:000F:8388
 */
void f__0AEC_020C_0017_8C1B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_ax.x, 0x2B);
	if (emu_flags.zf) { f__0AEC_0223_0022_AED2(); return; }
	emu_cmpw(&emu_ax.x, 0x2C);
	if (emu_flags.zf) { f__0AEC_0261_000A_314E(); return; }
	emu_ip = 0x033F; emu_last_cs = 0x0AEC; emu_last_ip = 0x0220; emu_last_length = 0x0017; emu_last_crc = 0x8C1B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0223_0022_AED2()
 *
 * @name f__0AEC_0223_0022_AED2
 * @implements 0AEC:0223:0022:AED2 ()
 *
 * Called From: 0AEC:0219:001E:2049
 * Called From: 0AEC:0219:0017:8C1B
 */
void f__0AEC_0223_0022_AED2()
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
	emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__0AEC_0245_0010_9E2E();
}

/**
 * Decompiled function f__0AEC_0245_0010_9E2E()
 *
 * @name f__0AEC_0245_0010_9E2E
 * @implements 0AEC:0245:0010:9E2E ()
 *
 * Called From: 0AEC:0245:0022:AED2
 */
void f__0AEC_0245_0010_9E2E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_di, emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0255); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__0AEC_0255_000C_A970();
}

/**
 * Decompiled function f__0AEC_0255_000C_A970()
 *
 * @name f__0AEC_0255_000C_A970
 * @implements 0AEC:0255:000C:A970 ()
 *
 * Called From: 0AEC:0255:0010:9E2E
 */
void f__0AEC_0255_000C_A970()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__0AEC_033F_0009_A8A9(); return;
}

/**
 * Decompiled function f__0AEC_0261_000A_314E()
 *
 * @name f__0AEC_0261_000A_314E
 * @implements 0AEC:0261:000A:314E ()
 *
 * Called From: 0AEC:021E:001E:2049
 * Called From: 0AEC:021E:0017:8C1B
 */
void f__0AEC_0261_000A_314E()
{
	emu_cmpw(&emu_di, 0x100);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0AEC_026B_0045_B28D(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0AEC_026E_0042_B76D(); return;
}

/**
 * Decompiled function f__0AEC_026B_0045_B28D()
 *
 * @name f__0AEC_026B_0045_B28D
 * @implements 0AEC:026B:0045:B28D ()
 *
 * Called From: 0AEC:0265:000A:314E
 */
void f__0AEC_026B_0045_B28D()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B0; emu_last_cs = 0x0AEC; emu_last_ip = 0x02AA; emu_last_length = 0x0045; emu_last_crc = 0xB28D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__0AEC_02C9_000E_982A(); return;
}

/**
 * Decompiled function f__0AEC_026E_0042_B76D()
 *
 * @name f__0AEC_026E_0042_B76D
 * @implements 0AEC:026E:0042:B76D ()
 *
 * Called From: 0AEC:0269:000A:314E
 */
void f__0AEC_026E_0042_B76D()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0AEC_02B0_0027_E1FE(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0AEC_02C9_000E_982A(); return;
}

/**
 * Decompiled function f__0AEC_02B0_0027_E1FE()
 *
 * @name f__0AEC_02B0_0027_E1FE
 * @implements 0AEC:02B0:0027:E1FE ()
 *
 * Called From: 0AEC:02AA:0042:B76D
 */
void f__0AEC_02B0_0027_E1FE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x88);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02D7; emu_last_cs = 0x0AEC; emu_last_ip = 0x02D0; emu_last_length = 0x0027; emu_last_crc = 0xE1FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_02DA_0047_A292(); return;
}

/**
 * Decompiled function f__0AEC_02C9_000E_982A()
 *
 * @name f__0AEC_02C9_000E_982A
 * @implements 0AEC:02C9:000E:982A ()
 *
 * Called From: 0AEC:02AE:0042:B76D
 * Called From: 0AEC:02AE:0045:B28D
 */
void f__0AEC_02C9_000E_982A()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x88);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0AEC_02D7_004A_8CD6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_02DA_0047_A292(); return;
}

/**
 * Decompiled function f__0AEC_02D7_004A_8CD6()
 *
 * @name f__0AEC_02D7_004A_8CD6
 * @implements 0AEC:02D7:004A:8CD6 ()
 *
 * Called From: 0AEC:02D0:000E:982A
 */
void f__0AEC_02D7_004A_8CD6()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0321; emu_last_cs = 0x0AEC; emu_last_ip = 0x031A; emu_last_length = 0x004A; emu_last_crc = 0x8CD6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_033A_0005_BAB6(); return;
}

/**
 * Decompiled function f__0AEC_02DA_0047_A292()
 *
 * @name f__0AEC_02DA_0047_A292
 * @implements 0AEC:02DA:0047:A292 ()
 *
 * Called From: 0AEC:02D5:000E:982A
 * Called From: 0AEC:02D5:0027:E1FE
 */
void f__0AEC_02DA_0047_A292()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0321; emu_last_cs = 0x0AEC; emu_last_ip = 0x031A; emu_last_length = 0x0047; emu_last_crc = 0xA292; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__0AEC_033A_0005_BAB6(); return;
}

/**
 * Decompiled function f__0AEC_033A_0005_BAB6()
 *
 * @name f__0AEC_033A_0005_BAB6
 * @implements 0AEC:033A:0005:BAB6 ()
 *
 * Called From: 0AEC:031F:0047:A292
 * Called From: 0AEC:031F:004A:8CD6
 */
void f__0AEC_033A_0005_BAB6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__0AEC_033F_0009_A8A9(); return;
}

/**
 * Decompiled function f__0AEC_033F_0009_A8A9()
 *
 * @name f__0AEC_033F_0009_A8A9
 * @implements 0AEC:033F:0009:A8A9 ()
 *
 * Called From: 0AEC:025E:000C:A970
 * Called From: 0AEC:033D:0005:BAB6
 */
void f__0AEC_033F_0009_A8A9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0348); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	f__0AEC_0348_000E_AD63();
}

/**
 * Decompiled function f__0AEC_0348_000E_AD63()
 *
 * @name f__0AEC_0348_000E_AD63
 * @implements 0AEC:0348:000E:AD63 ()
 *
 * Called From: 0AEC:0348:0009:A8A9
 */
void f__0AEC_0348_000E_AD63()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_0356_000A_C4B6(); return; }
	f__0AEC_04D7_0009_9033(); return;
}

/**
 * Decompiled function f__0AEC_0356_000A_C4B6()
 *
 * @name f__0AEC_0356_000A_C4B6
 * @implements 0AEC:0356:000A:C4B6 ()
 *
 * Called From: 0AEC:0351:000E:AD63
 */
void f__0AEC_0356_000A_C4B6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { f__0AEC_0360_000F_7987(); return; }
	f__0AEC_04D7_0009_9033(); return;
}

/**
 * Decompiled function f__0AEC_0360_000F_7987()
 *
 * @name f__0AEC_0360_000F_7987
 * @implements 0AEC:0360:000F:7987 ()
 *
 * Called From: 0AEC:035B:000A:C4B6
 */
void f__0AEC_0360_000F_7987()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x036F); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0AEC_036F_0014_9BC6();
}

/**
 * Decompiled function f__0AEC_036F_0014_9BC6()
 *
 * @name f__0AEC_036F_0014_9BC6
 * @implements 0AEC:036F:0014:9BC6 ()
 *
 * Called From: 0AEC:036F:000F:7987
 */
void f__0AEC_036F_0014_9BC6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FC));
	if (emu_flags.zf) { f__0AEC_0386_0011_A949(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0383); emu_cs = 0x1423; emu_ip = 0x0B48; emu_last_cs = 0x0AEC; emu_last_ip = 0x037E; emu_last_length = 0x0014; emu_last_crc = 0x9BC6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0386_0011_A949()
 *
 * @name f__0AEC_0386_0011_A949
 * @implements 0AEC:0386:0011:A949 ()
 *
 * Called From: 0AEC:0379:0014:9BC6
 */
void f__0AEC_0386_0011_A949()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x38F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x0397); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0AEC_0397_0035_696E();
}

/**
 * Decompiled function f__0AEC_0397_0035_696E()
 *
 * @name f__0AEC_0397_0035_696E
 * @implements 0AEC:0397:0035:696E ()
 *
 * Called From: 0AEC:0397:0011:A949
 */
void f__0AEC_0397_0035_696E()
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
	if (emu_flags.zf) { f__0AEC_03D0_000C_BB87(); return; }
	emu_cmpws(&emu_si, 0x5);
	if (emu_flags.zf) { f__0AEC_03D0_000C_BB87(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
	f__0AEC_03CC_0004_59BF();
}

/**
 * Decompiled function f__0AEC_03CC_0004_59BF()
 *
 * @name f__0AEC_03CC_0004_59BF
 * @implements 0AEC:03CC:0004:59BF ()
 *
 * Called From: 0AEC:03CC:0035:696E
 */
void f__0AEC_03CC_0004_59BF()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	f__0AEC_03D7_0005_BFC0(); return;
}

/**
 * Decompiled function f__0AEC_03D0_000C_BB87()
 *
 * @name f__0AEC_03D0_000C_BB87
 * @implements 0AEC:03D0:000C:BB87 ()
 *
 * Called From: 0AEC:03B9:0035:696E
 * Called From: 0AEC:03BE:0035:696E
 */
void f__0AEC_03D0_000C_BB87()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03DC); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0AEC_03DC_0013_2700();
}

/**
 * Decompiled function f__0AEC_03D7_0005_BFC0()
 *
 * @name f__0AEC_03D7_0005_BFC0
 * @implements 0AEC:03D7:0005:BFC0 ()
 *
 * Called From: 0AEC:03CE:0004:59BF
 */
void f__0AEC_03D7_0005_BFC0()
{
	emu_push(emu_cs); emu_push(0x03DC); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0AEC_03DC_0013_2700();
}

/**
 * Decompiled function f__0AEC_03DC_0013_2700()
 *
 * @name f__0AEC_03DC_0013_2700
 * @implements 0AEC:03DC:0013:2700 ()
 *
 * Called From: 0AEC:03DC:000C:BB87
 * Called From: 0AEC:03DC:0005:BFC0
 */
void f__0AEC_03DC_0013_2700()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x03EF); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__0AEC_03EF_0011_DC23();
}

/**
 * Decompiled function f__0AEC_03EF_0011_DC23()
 *
 * @name f__0AEC_03EF_0011_DC23
 * @implements 0AEC:03EF:0011:DC23 ()
 *
 * Called From: 0AEC:03EF:0013:2700
 */
void f__0AEC_03EF_0011_DC23()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_si);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__0AEC_0400_0010_476E(); return; }
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { f__0AEC_0415_000D_926F(); return; }
	f__0AEC_0422_0010_A74E(); return;
}

/**
 * Decompiled function f__0AEC_0400_0010_476E()
 *
 * @name f__0AEC_0400_0010_476E
 * @implements 0AEC:0400:0010:476E ()
 *
 * Called From: 0AEC:03F7:0011:DC23
 */
void f__0AEC_0400_0010_476E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	f__0AEC_0410_0005_A7EE();
}

/**
 * Decompiled function f__0AEC_0410_0005_A7EE()
 *
 * @name f__0AEC_0410_0005_A7EE
 * @implements 0AEC:0410:0005:A7EE ()
 *
 * Called From: 0AEC:0410:0010:476E
 */
void f__0AEC_0410_0005_A7EE()
{
	emu_addws(&emu_sp, 0x6);
	f__0AEC_045B_0010_6B0D(); return;
}

/**
 * Decompiled function f__0AEC_0415_000D_926F()
 *
 * @name f__0AEC_0415_000D_926F
 * @implements 0AEC:0415:000D:926F ()
 *
 * Called From: 0AEC:03FC:0011:DC23
 */
void f__0AEC_0415_000D_926F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	f__0AEC_045B_0010_6B0D(); return;
}

/**
 * Decompiled function f__0AEC_0422_0010_A74E()
 *
 * @name f__0AEC_0422_0010_A74E
 * @implements 0AEC:0422:0010:A74E ()
 *
 * Called From: 0AEC:03FE:0011:DC23
 */
void f__0AEC_0422_0010_A74E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_cs); emu_push(0x0432); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	f__0AEC_0432_0010_8719();
}

/**
 * Decompiled function f__0AEC_0432_0010_8719()
 *
 * @name f__0AEC_0432_0010_8719
 * @implements 0AEC:0432:0010:8719 ()
 *
 * Called From: 0AEC:0432:0010:A74E
 */
void f__0AEC_0432_0010_8719()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__0AEC_0442_0019_27F9();
}

/**
 * Decompiled function f__0AEC_0442_0019_27F9()
 *
 * @name f__0AEC_0442_0019_27F9
 * @implements 0AEC:0442:0019:27F9 ()
 *
 * Called From: 0AEC:0442:0010:8719
 */
void f__0AEC_0442_0019_27F9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { f__0AEC_0459_0002_C03A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x8);
	f__0AEC_045B_0010_6B0D(); return;
}

/**
 * Decompiled function f__0AEC_0459_0002_C03A()
 *
 * @name f__0AEC_0459_0002_C03A
 * @implements 0AEC:0459:0002:C03A ()
 *
 * Called From: 0AEC:044F:0019:27F9
 */
void f__0AEC_0459_0002_C03A()
{
	f__0AEC_045B_0010_6B0D(); return;
}

/**
 * Decompiled function f__0AEC_045B_0010_6B0D()
 *
 * @name f__0AEC_045B_0010_6B0D
 * @implements 0AEC:045B:0010:6B0D ()
 *
 * Called From: 0AEC:0413:0005:A7EE
 * Called From: 0AEC:0420:000D:926F
 * Called From: 0AEC:0459:0019:27F9
 * Called From: 0AEC:0459:0002:C03A
 */
void f__0AEC_045B_0010_6B0D()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x046E; emu_last_cs = 0x0AEC; emu_last_ip = 0x0460; emu_last_length = 0x0010; emu_last_crc = 0x6B0D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046B); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	f__0AEC_046B_0003_EE9A();
}

/**
 * Decompiled function f__0AEC_046B_0003_EE9A()
 *
 * @name f__0AEC_046B_0003_EE9A
 * @implements 0AEC:046B:0003:EE9A ()
 *
 * Called From: 0AEC:046B:0010:6B0D
 */
void f__0AEC_046B_0003_EE9A()
{
	emu_pop(&emu_cx.x);
	f__0AEC_04B9_001B_FE60(); return;
}

/**
 * Decompiled function f__0AEC_04B9_001B_FE60()
 *
 * @name f__0AEC_04B9_001B_FE60
 * @implements 0AEC:04B9:001B:FE60 ()
 *
 * Called From: 0AEC:046C:0003:EE9A
 */
void f__0AEC_04B9_001B_FE60()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), 0xFFFF);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D4); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_04D4_0003_DCA3();
}

/**
 * Decompiled function f__0AEC_04D4_0003_DCA3()
 *
 * @name f__0AEC_04D4_0003_DCA3
 * @implements 0AEC:04D4:0003:DCA3 ()
 *
 * Called From: 0AEC:04D4:001B:FE60
 */
void f__0AEC_04D4_0003_DCA3()
{
	f__0AEC_07E6_0004_B1A1(); return;
}

/**
 * Decompiled function f__0AEC_04D7_0009_9033()
 *
 * @name f__0AEC_04D7_0009_9033
 * @implements 0AEC:04D7:0009:9033 ()
 *
 * Called From: 0AEC:0353:000E:AD63
 * Called From: 0AEC:035D:000A:C4B6
 */
void f__0AEC_04D7_0009_9033()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_04E0_000A_C920(); return; }
	f__0AEC_0719_0009_511D(); return;
}

/**
 * Decompiled function f__0AEC_04E0_000A_C920()
 *
 * @name f__0AEC_04E0_000A_C920
 * @implements 0AEC:04E0:000A:C920 ()
 *
 * Called From: 0AEC:04DB:0009:9033
 */
void f__0AEC_04E0_000A_C920()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (emu_flags.zf) { f__0AEC_04EA_0024_77D8(); return; }
	f__0AEC_0719_0009_511D(); return;
}

/**
 * Decompiled function f__0AEC_04EA_0024_77D8()
 *
 * @name f__0AEC_04EA_0024_77D8
 * @implements 0AEC:04EA:0024:77D8 ()
 *
 * Called From: 0AEC:04E5:000A:C920
 */
void f__0AEC_04EA_0024_77D8()
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
	emu_push(emu_cs); emu_push(0x050E); emu_cs = 0x0C3A; f__0C3A_01BA_0018_69C9();
	f__0AEC_050E_000A_889E();
}

/**
 * Decompiled function f__0AEC_050E_000A_889E()
 *
 * @name f__0AEC_050E_000A_889E
 * @implements 0AEC:050E:000A:889E ()
 *
 * Called From: 0AEC:050E:0024:77D8
 */
void f__0AEC_050E_000A_889E()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0AEC_0518_000F_6E04(); return; }
	f__0AEC_069E_000F_5504(); return;
}

/**
 * Decompiled function f__0AEC_0518_000F_6E04()
 *
 * @name f__0AEC_0518_000F_6E04
 * @implements 0AEC:0518:000F:6E04 ()
 *
 * Called From: 0AEC:0513:000A:889E
 */
void f__0AEC_0518_000F_6E04()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x3483; ovl__3483(0);
	f__0AEC_0527_001D_6B69();
}

/**
 * Decompiled function f__0AEC_0527_001D_6B69()
 *
 * @name f__0AEC_0527_001D_6B69
 * @implements 0AEC:0527:001D:6B69 ()
 *
 * Called From: 0AEC:0527:000F:6E04
 */
void f__0AEC_0527_001D_6B69()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__0AEC_055D_0022_5BD5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x10BE; emu_ip = 0x06EF; emu_last_cs = 0x0AEC; emu_last_ip = 0x053F; emu_last_length = 0x001D; emu_last_crc = 0x6B69; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_055D_0022_5BD5()
 *
 * @name f__0AEC_055D_0022_5BD5
 * @implements 0AEC:055D:0022:5BD5 ()
 *
 * Called From: 0AEC:0533:001D:6B69
 */
void f__0AEC_055D_0022_5BD5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xC);
	if (!emu_flags.zf) { f__0AEC_05C7_0009_BAB5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x05C7; emu_last_cs = 0x0AEC; emu_last_ip = 0x0569; emu_last_length = 0x0022; emu_last_crc = 0x5BD5; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x057F); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0AEC_057F_0010_F5AC();
}

/**
 * Decompiled function f__0AEC_057F_0010_F5AC()
 *
 * @name f__0AEC_057F_0010_F5AC
 * @implements 0AEC:057F:0010:F5AC ()
 *
 * Called From: 0AEC:057F:0022:5BD5
 */
void f__0AEC_057F_0010_F5AC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x058F); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
	f__0AEC_058F_001F_D112();
}

/**
 * Decompiled function f__0AEC_058F_001F_D112()
 *
 * @name f__0AEC_058F_001F_D112
 * @implements 0AEC:058F:001F:D112 ()
 *
 * Called From: 0AEC:058F:0010:F5AC
 */
void f__0AEC_058F_001F_D112()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.zf) { f__0AEC_05AE_0010_37DB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_ip = 0x05C7; emu_last_cs = 0x0AEC; emu_last_ip = 0x05AC; emu_last_length = 0x001F; emu_last_crc = 0xD112; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_05AE_0010_37DB()
 *
 * @name f__0AEC_05AE_0010_37DB
 * @implements 0AEC:05AE:0010:37DB ()
 *
 * Called From: 0AEC:05A2:001F:D112
 */
void f__0AEC_05AE_0010_37DB()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x05BE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0AEC_05BE_0012_A28E();
}

/**
 * Decompiled function f__0AEC_05BE_0012_A28E()
 *
 * @name f__0AEC_05BE_0012_A28E
 * @implements 0AEC:05BE:0012:A28E ()
 *
 * Called From: 0AEC:05BE:0010:37DB
 */
void f__0AEC_05BE_0012_A28E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05D0); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_05D0_000A_7F37();
}

/**
 * Decompiled function f__0AEC_05C7_0009_BAB5()
 *
 * @name f__0AEC_05C7_0009_BAB5
 * @implements 0AEC:05C7:0009:BAB5 ()
 *
 * Called From: 0AEC:0562:0022:5BD5
 */
void f__0AEC_05C7_0009_BAB5()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05D0); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_05D0_000A_7F37();
}

/**
 * Decompiled function f__0AEC_05D0_000A_7F37()
 *
 * @name f__0AEC_05D0_000A_7F37
 * @implements 0AEC:05D0:000A:7F37 ()
 *
 * Called From: 0AEC:05D0:0009:BAB5
 * Called From: 0AEC:05D0:0012:A28E
 */
void f__0AEC_05D0_000A_7F37()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_cs); emu_push(0x05DA); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_05DA_001A_1D41();
}

/**
 * Decompiled function f__0AEC_05DA_001A_1D41()
 *
 * @name f__0AEC_05DA_001A_1D41
 * @implements 0AEC:05DA:001A:1D41 ()
 *
 * Called From: 0AEC:05DA:000A:7F37
 */
void f__0AEC_05DA_001A_1D41()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { emu_ip = 0x0625; emu_last_cs = 0x0AEC; emu_last_ip = 0x05E7; emu_last_length = 0x001A; emu_last_crc = 0x1D41; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
	f__0AEC_05F4_0015_DE27();
}

/**
 * Decompiled function f__0AEC_05F4_0015_DE27()
 *
 * @name f__0AEC_05F4_0015_DE27
 * @implements 0AEC:05F4:0015:DE27 ()
 *
 * Called From: 0AEC:05F4:001A:1D41
 */
void f__0AEC_05F4_0015_DE27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x4C));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x0609); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	f__0AEC_0609_0019_DF1A();
}

/**
 * Decompiled function f__0AEC_0609_0019_DF1A()
 *
 * @name f__0AEC_0609_0019_DF1A
 * @implements 0AEC:0609:0019:DF1A ()
 *
 * Called From: 0AEC:0609:0015:DE27
 */
void f__0AEC_0609_0019_DF1A()
{
	emu_pop(&emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (!emu_flags.zf) { f__0AEC_0625_002B_F4D5(); return; }
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x0C3A; emu_ip = 0x1A4F; emu_last_cs = 0x0AEC; emu_last_ip = 0x061D; emu_last_length = 0x0019; emu_last_crc = 0xDF1A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0625_002B_F4D5()
 *
 * @name f__0AEC_0625_002B_F4D5
 * @implements 0AEC:0625:002B:F4D5 ()
 *
 * Called From: 0AEC:0611:0019:DF1A
 */
void f__0AEC_0625_002B_F4D5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2B));
	emu_push(emu_cs); emu_push(0x0650); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__0AEC_0650_000B_36A0();
}

/**
 * Decompiled function f__0AEC_0650_000B_36A0()
 *
 * @name f__0AEC_0650_000B_36A0
 * @implements 0AEC:0650:000B:36A0 ()
 *
 * Called From: 0AEC:0650:002B:F4D5
 */
void f__0AEC_0650_000B_36A0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x065B); emu_cs = 0x34CD; ovl__34CD(16);
	f__0AEC_065B_0036_0E6D();
}

/**
 * Decompiled function f__0AEC_065B_0036_0E6D()
 *
 * @name f__0AEC_065B_0036_0E6D
 * @implements 0AEC:065B:0036:0E6D ()
 *
 * Called From: 0AEC:065B:000B:36A0
 */
void f__0AEC_065B_0036_0E6D()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_069C_0002_FC3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0x4);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x069C; emu_last_cs = 0x0AEC; emu_last_ip = 0x0682; emu_last_length = 0x0036; emu_last_crc = 0x0E6D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0FCB; emu_ip = 0x06F0; emu_last_cs = 0x0AEC; emu_last_ip = 0x068C; emu_last_length = 0x0036; emu_last_crc = 0x0E6D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_069C_0002_FC3A()
 *
 * @name f__0AEC_069C_0002_FC3A
 * @implements 0AEC:069C:0002:FC3A ()
 *
 * Called From: 0AEC:066C:0036:0E6D
 */
void f__0AEC_069C_0002_FC3A()
{
	f__0AEC_0716_0003_E198(); return;
}

/**
 * Decompiled function f__0AEC_069E_000F_5504()
 *
 * @name f__0AEC_069E_000F_5504
 * @implements 0AEC:069E:000F:5504 ()
 *
 * Called From: 0AEC:0515:000A:889E
 */
void f__0AEC_069E_000F_5504()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x2F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06AD); emu_cs = 0x3483; ovl__3483(0);
	f__0AEC_06AD_001E_C418();
}

/**
 * Decompiled function f__0AEC_06AD_001E_C418()
 *
 * @name f__0AEC_06AD_001E_C418
 * @implements 0AEC:06AD:001E:C418 ()
 *
 * Called From: 0AEC:06AD:000F:5504
 */
void f__0AEC_06AD_001E_C418()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0x0);
	if (emu_flags.zf) { f__0AEC_06BE_000D_201F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0x1);
	if (!emu_flags.zf) { f__0AEC_06CF_000D_1D7F(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x87);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x0FCB; emu_ip = 0x072A; emu_last_cs = 0x0AEC; emu_last_ip = 0x06C6; emu_last_length = 0x001E; emu_last_crc = 0xC418; emu_call(); // Jump does not resolve
	f__0AEC_06CB_0004_457F();
}

/**
 * Decompiled function f__0AEC_06BE_000D_201F()
 *
 * @name f__0AEC_06BE_000D_201F
 * @implements 0AEC:06BE:000D:201F ()
 *
 * Called From: 0AEC:06B5:001E:C418
 */
void f__0AEC_06BE_000D_201F()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x87);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_06CB_0004_457F();
}

/**
 * Decompiled function f__0AEC_06CB_0004_457F()
 *
 * @name f__0AEC_06CB_0004_457F
 * @implements 0AEC:06CB:0004:457F ()
 *
 * Called From: 0AEC:06CB:000D:201F
 */
void f__0AEC_06CB_0004_457F()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	f__0AEC_070D_0006_FDC2(); return;
}

/**
 * Decompiled function f__0AEC_06CF_000D_1D7F()
 *
 * @name f__0AEC_06CF_000D_1D7F
 * @implements 0AEC:06CF:000D:1D7F ()
 *
 * Called From: 0AEC:06BC:001E:C418
 */
void f__0AEC_06CF_000D_1D7F()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06DC); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__0AEC_06DC_000D_92EB();
}

/**
 * Decompiled function f__0AEC_06DC_000D_92EB()
 *
 * @name f__0AEC_06DC_000D_92EB
 * @implements 0AEC:06DC:000D:92EB ()
 *
 * Called From: 0AEC:06DC:000D:1D7F
 */
void f__0AEC_06DC_000D_92EB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x06E9); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_06E9_000C_A4A0();
}

/**
 * Decompiled function f__0AEC_06E9_000C_A4A0()
 *
 * @name f__0AEC_06E9_000C_A4A0
 * @implements 0AEC:06E9:000C:A4A0 ()
 *
 * Called From: 0AEC:06E9:000D:92EB
 */
void f__0AEC_06E9_000C_A4A0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x86);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06F5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_06F5_000D_A042();
}

/**
 * Decompiled function f__0AEC_06F5_000D_A042()
 *
 * @name f__0AEC_06F5_000D_A042
 * @implements 0AEC:06F5:000D:A042 ()
 *
 * Called From: 0AEC:06F5:000C:A4A0
 */
void f__0AEC_06F5_000D_A042()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0702); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__0AEC_0702_0011_8982();
}

/**
 * Decompiled function f__0AEC_0702_0011_8982()
 *
 * @name f__0AEC_0702_0011_8982
 * @implements 0AEC:0702:0011:8982 ()
 *
 * Called From: 0AEC:0702:000D:A042
 */
void f__0AEC_0702_0011_8982()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0713); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0AEC_0713_0006_8BBA();
}

/**
 * Decompiled function f__0AEC_070D_0006_FDC2()
 *
 * @name f__0AEC_070D_0006_FDC2
 * @implements 0AEC:070D:0006:FDC2 ()
 *
 * Called From: 0AEC:06CD:0004:457F
 */
void f__0AEC_070D_0006_FDC2()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0713); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0AEC_0713_0006_8BBA();
}

/**
 * Decompiled function f__0AEC_0713_0006_8BBA()
 *
 * @name f__0AEC_0713_0006_8BBA
 * @implements 0AEC:0713:0006:8BBA ()
 *
 * Called From: 0AEC:0713:0006:FDC2
 * Called From: 0AEC:0713:0011:8982
 */
void f__0AEC_0713_0006_8BBA()
{
	emu_addws(&emu_sp, 0x6);
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_0716_0003_E198()
 *
 * @name f__0AEC_0716_0003_E198
 * @implements 0AEC:0716:0003:E198 ()
 *
 * Called From: 0AEC:069C:0002:FC3A
 */
void f__0AEC_0716_0003_E198()
{
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_0719_0009_511D()
 *
 * @name f__0AEC_0719_0009_511D
 * @implements 0AEC:0719:0009:511D ()
 *
 * Called From: 0AEC:04DD:0009:9033
 * Called From: 0AEC:04E7:000A:C920
 */
void f__0AEC_0719_0009_511D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_0722_0016_D5E1(); return; }
	f__0AEC_07A4_001E_F4A8(); return;
}

/**
 * Decompiled function f__0AEC_0722_0016_D5E1()
 *
 * @name f__0AEC_0722_0016_D5E1
 * @implements 0AEC:0722:0016:D5E1 ()
 *
 * Called From: 0AEC:071D:0009:511D
 */
void f__0AEC_0722_0016_D5E1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2B);
	if (!emu_flags.zf) { f__0AEC_07A4_001E_F4A8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0AEC_0738_0008_C3DB(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ip = 0x0743; emu_last_cs = 0x0AEC; emu_last_ip = 0x0736; emu_last_length = 0x0016; emu_last_crc = 0xD5E1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0738_0008_C3DB()
 *
 * @name f__0AEC_0738_0008_C3DB
 * @implements 0AEC:0738:0008:C3DB ()
 *
 * Called From: 0AEC:0731:0016:D5E1
 */
void f__0AEC_0738_0008_C3DB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
	f__0AEC_0740_002B_39A2();
}

/**
 * Decompiled function f__0AEC_0740_002B_39A2()
 *
 * @name f__0AEC_0740_002B_39A2
 * @implements 0AEC:0740:002B:39A2 ()
 *
 * Called From: 0AEC:0740:0008:C3DB
 */
void f__0AEC_0740_002B_39A2()
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
	if (!emu_flags.zf) { f__0AEC_0765_0006_06EE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0AEC_078D_0013_A8AF(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x076B); emu_cs = 0x34CD; emu_ip = 0x082B; emu_last_cs = 0x0AEC; emu_last_ip = 0x0766; emu_last_length = 0x002B; emu_last_crc = 0x39A2; emu_call(); // Jump does not resolve
	f__0AEC_076B_0012_C656();
}

/**
 * Decompiled function f__0AEC_0765_0006_06EE()
 *
 * @name f__0AEC_0765_0006_06EE
 * @implements 0AEC:0765:0006:06EE ()
 *
 * Called From: 0AEC:075C:002B:39A2
 */
void f__0AEC_0765_0006_06EE()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x076B); emu_cs = 0x34CD; ovl__34CD(32);
	f__0AEC_076B_0012_C656();
}

/**
 * Decompiled function f__0AEC_076B_0012_C656()
 *
 * @name f__0AEC_076B_0012_C656
 * @implements 0AEC:076B:0012:C656 ()
 *
 * Called From: 0AEC:076B:0006:06EE
 */
void f__0AEC_076B_0012_C656()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__0AEC_0777_0006_0B02(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0AEC_078D_0013_A8AF(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x077D); emu_cs = 0x0F78; emu_ip = 0x0A52; emu_last_cs = 0x0AEC; emu_last_ip = 0x0778; emu_last_length = 0x0012; emu_last_crc = 0xC656; emu_call(); // Jump does not resolve
	f__0AEC_077D_000E_A7DE();
}

/**
 * Decompiled function f__0AEC_0777_0006_0B02()
 *
 * @name f__0AEC_0777_0006_0B02
 * @implements 0AEC:0777:0006:0B02 ()
 *
 * Called From: 0AEC:076E:0012:C656
 */
void f__0AEC_0777_0006_0B02()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x077D); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	f__0AEC_077D_000E_A7DE();
}

/**
 * Decompiled function f__0AEC_077D_000E_A7DE()
 *
 * @name f__0AEC_077D_000E_A7DE
 * @implements 0AEC:077D:000E:A7DE ()
 *
 * Called From: 0AEC:077D:0006:0B02
 */
void f__0AEC_077D_000E_A7DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x078B); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
	f__0AEC_078B_0015_3A62();
}

/**
 * Decompiled function f__0AEC_078B_0015_3A62()
 *
 * @name f__0AEC_078B_0015_3A62
 * @implements 0AEC:078B:0015:3A62 ()
 *
 * Called From: 0AEC:078B:000E:A7DE
 */
void f__0AEC_078B_0015_3A62()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1000);
	if (emu_flags.zf) { f__0AEC_07A1_0003_A1B5(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07A0); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07A0_0004_31B0();
}

/**
 * Decompiled function f__0AEC_078D_0013_A8AF()
 *
 * @name f__0AEC_078D_0013_A8AF
 * @implements 0AEC:078D:0013:A8AF ()
 *
 * Called From: 0AEC:0763:002B:39A2
 * Called From: 0AEC:0775:0012:C656
 */
void f__0AEC_078D_0013_A8AF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1000);
	if (emu_flags.zf) { f__0AEC_07A1_0003_A1B5(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07A0); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07A0_0004_31B0();
}

/**
 * Decompiled function f__0AEC_07A0_0004_31B0()
 *
 * @name f__0AEC_07A0_0004_31B0
 * @implements 0AEC:07A0:0004:31B0 ()
 *
 * Called From: 0AEC:07A0:0013:A8AF
 * Called From: 0AEC:07A0:0015:3A62
 */
void f__0AEC_07A0_0004_31B0()
{
	emu_pop(&emu_cx.x);
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_07A1_0003_A1B5()
 *
 * @name f__0AEC_07A1_0003_A1B5
 * @implements 0AEC:07A1:0003:A1B5 ()
 *
 * Called From: 0AEC:0796:0015:3A62
 * Called From: 0AEC:0796:0013:A8AF
 */
void f__0AEC_07A1_0003_A1B5()
{
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_07A4_001E_F4A8()
 *
 * @name f__0AEC_07A4_001E_F4A8
 * @implements 0AEC:07A4:001E:F4A8 ()
 *
 * Called From: 0AEC:071F:0009:511D
 * Called From: 0AEC:072A:0016:D5E1
 */
void f__0AEC_07A4_001E_F4A8()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0AEC_07B0_0012_353C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0AEC_07C4_000F_8BC4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2C);
	if (!emu_flags.zf) { f__0AEC_07C4_000F_8BC4(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07C2); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07C2_0002_D13A();
}

/**
 * Decompiled function f__0AEC_07B0_0012_353C()
 *
 * @name f__0AEC_07B0_0012_353C
 * @implements 0AEC:07B0:0012:353C ()
 *
 * Called From: 0AEC:07A8:001E:F4A8
 */
void f__0AEC_07B0_0012_353C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2C);
	if (!emu_flags.zf) { emu_ip = 0x07C4; emu_last_cs = 0x0AEC; emu_last_ip = 0x07B8; emu_last_length = 0x0012; emu_last_crc = 0x353C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07C2); emu_cs = 0x34CD; ovl__34CD(20);
	f__0AEC_07C2_0002_D13A();
}

/**
 * Decompiled function f__0AEC_07C2_0002_D13A()
 *
 * @name f__0AEC_07C2_0002_D13A
 * @implements 0AEC:07C2:0002:D13A ()
 *
 * Called From: 0AEC:07C2:0012:353C
 * Called From: 0AEC:07C2:001E:F4A8
 */
void f__0AEC_07C2_0002_D13A()
{
	f__0AEC_07E6_0004_B1A1(); return;
}

/**
 * Decompiled function f__0AEC_07C4_000F_8BC4()
 *
 * @name f__0AEC_07C4_000F_8BC4
 * @implements 0AEC:07C4:000F:8BC4 ()
 *
 * Called From: 0AEC:07AE:001E:F4A8
 * Called From: 0AEC:07B8:001E:F4A8
 */
void f__0AEC_07C4_000F_8BC4()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (!emu_flags.zf) { f__0AEC_07D7_000F_54F3(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
	f__0AEC_07D3_0004_5F3F();
}

/**
 * Decompiled function f__0AEC_07D3_0004_5F3F()
 *
 * @name f__0AEC_07D3_0004_5F3F
 * @implements 0AEC:07D3:0004:5F3F ()
 *
 * Called From: 0AEC:07D3:000F:8BC4
 */
void f__0AEC_07D3_0004_5F3F()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	f__0AEC_07E1_0005_5303(); return;
}

/**
 * Decompiled function f__0AEC_07D7_000F_54F3()
 *
 * @name f__0AEC_07D7_000F_54F3
 * @implements 0AEC:07D7:000F:54F3 ()
 *
 * Called From: 0AEC:07C9:000F:8BC4
 */
void f__0AEC_07D7_000F_54F3()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__0AEC_07EA_0003_E1A3(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	f__0AEC_07E6_0004_B1A1();
}

/**
 * Decompiled function f__0AEC_07E1_0005_5303()
 *
 * @name f__0AEC_07E1_0005_5303
 * @implements 0AEC:07E1:0005:5303 ()
 *
 * Called From: 0AEC:07D5:0004:5F3F
 */
void f__0AEC_07E1_0005_5303()
{
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	f__0AEC_07E6_0004_B1A1();
}

/**
 * Decompiled function f__0AEC_07E6_0004_B1A1()
 *
 * @name f__0AEC_07E6_0004_B1A1
 * @implements 0AEC:07E6:0004:B1A1 ()
 *
 * Called From: 0AEC:04D4:0003:DCA3
 * Called From: 0AEC:07C2:0002:D13A
 * Called From: 0AEC:07E6:0005:5303
 * Called From: 0AEC:07E6:000F:54F3
 */
void f__0AEC_07E6_0004_B1A1()
{
	emu_pop(&emu_cx.x);
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_07EA_0003_E1A3()
 *
 * @name f__0AEC_07EA_0003_E1A3
 * @implements 0AEC:07EA:0003:E1A3 ()
 *
 * Called From: 0AEC:07DC:000F:54F3
 */
void f__0AEC_07EA_0003_E1A3()
{
	f__0AEC_00FB_0006_FE11(); return;
}

/**
 * Decompiled function f__0AEC_07ED_0006_F7CE()
 *
 * @name f__0AEC_07ED_0006_F7CE
 * @implements 0AEC:07ED:0006:F7CE ()
 *
 * Called From: 0AEC:00FE:0006:FE11
 * Called From: 0AEC:00FE:0019:CDE8
 * Called From: 0AEC:00FE:0010:6EE9
 */
void f__0AEC_07ED_0006_F7CE()
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
 * Decompiled function f__0AEC_0809_001D_BEB5()
 *
 * @name f__0AEC_0809_001D_BEB5
 * @implements 0AEC:0809:001D:BEB5 ()
 *
 * Called From: B4A2:0941:0011:88EC
 */
void f__0AEC_0809_001D_BEB5()
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
	if (!emu_flags.zf) { f__0AEC_0826_0009_6093(); return; }
	emu_ip = 0x0C77; emu_last_cs = 0x0AEC; emu_last_ip = 0x0823; emu_last_length = 0x001D; emu_last_crc = 0xBEB5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0826_0009_6093()
 *
 * @name f__0AEC_0826_0009_6093
 * @implements 0AEC:0826:0009:6093 ()
 *
 * Called From: 0AEC:0821:001D:BEB5
 */
void f__0AEC_0826_0009_6093()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x082F); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_082F_0012_E7A1();
}

/**
 * Decompiled function f__0AEC_082F_0012_E7A1()
 *
 * @name f__0AEC_082F_0012_E7A1
 * @implements 0AEC:082F:0012:E7A1 ()
 *
 * Called From: 0AEC:082F:0009:6093
 */
void f__0AEC_082F_0012_E7A1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__0AEC_0841_0005_08A0(); return; }
	emu_ip = 0x0C77; emu_last_cs = 0x0AEC; emu_last_ip = 0x083E; emu_last_length = 0x0012; emu_last_crc = 0xE7A1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0841_0005_08A0()
 *
 * @name f__0AEC_0841_0005_08A0
 * @implements 0AEC:0841:0005:08A0 ()
 *
 * Called From: 0AEC:083C:0012:E7A1
 */
void f__0AEC_0841_0005_08A0()
{
	emu_push(emu_cs); emu_push(0x0846); emu_cs = 0x10E4; f__10E4_2290_0012_78BD();
	f__0AEC_0846_0015_4A00();
}

/**
 * Decompiled function f__0AEC_0846_0015_4A00()
 *
 * @name f__0AEC_0846_0015_4A00
 * @implements 0AEC:0846:0015:4A00 ()
 *
 * Called From: 0AEC:0846:0005:08A0
 */
void f__0AEC_0846_0015_4A00()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_085C_0010_A835(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x085B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0AEC_085B_0011_84B5();
}

/**
 * Decompiled function f__0AEC_085B_0011_84B5()
 *
 * @name f__0AEC_085B_0011_84B5
 * @implements 0AEC:085B:0011:84B5 ()
 *
 * Called From: 0AEC:085B:0015:4A00
 */
void f__0AEC_085B_0011_84B5()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_086C_0044_7B19(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_086E_0042_531A(); return;
}

/**
 * Decompiled function f__0AEC_085C_0010_A835()
 *
 * @name f__0AEC_085C_0010_A835
 * @implements 0AEC:085C:0010:A835 ()
 *
 * Called From: 0AEC:0850:0015:4A00
 */
void f__0AEC_085C_0010_A835()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_086C_0044_7B19(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x086E; emu_last_cs = 0x0AEC; emu_last_ip = 0x086A; emu_last_length = 0x0010; emu_last_crc = 0xA835; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_086C_0044_7B19()
 *
 * @name f__0AEC_086C_0044_7B19
 * @implements 0AEC:086C:0044:7B19 ()
 *
 * Called From: 0AEC:0865:0010:A835
 * Called From: 0AEC:0865:0011:84B5
 */
void f__0AEC_086C_0044_7B19()
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
	emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0AEC_08B0_001D_86CA();
}

/**
 * Decompiled function f__0AEC_086E_0042_531A()
 *
 * @name f__0AEC_086E_0042_531A
 * @implements 0AEC:086E:0042:531A ()
 *
 * Called From: 0AEC:086A:0011:84B5
 */
void f__0AEC_086E_0042_531A()
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
	emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0AEC_08B0_001D_86CA();
}

/**
 * Decompiled function f__0AEC_08B0_001D_86CA()
 *
 * @name f__0AEC_08B0_001D_86CA
 * @implements 0AEC:08B0:001D:86CA ()
 *
 * Called From: 0AEC:08B0:0044:7B19
 * Called From: 0AEC:08B0:0042:531A
 */
void f__0AEC_08B0_001D_86CA()
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
	emu_push(emu_cs); emu_push(0x08CD); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	f__0AEC_08CD_001F_6F14();
}

/**
 * Decompiled function f__0AEC_08CD_001F_6F14()
 *
 * @name f__0AEC_08CD_001F_6F14
 * @implements 0AEC:08CD:001F:6F14 ()
 *
 * Called From: 0AEC:08CD:001D:86CA
 */
void f__0AEC_08CD_001F_6F14()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_cx.x, 0x9);
	emu_movw(&emu_bx.x, 0xC7D);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_flags.zf) { f__0AEC_08EC_0004_36FB(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__0AEC_08DC_0010_F760(); return; }
	emu_ip = 0x0A34; emu_last_cs = 0x0AEC; emu_last_ip = 0x08E9; emu_last_length = 0x001F; emu_last_crc = 0x6F14; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_08DC_0010_F760()
 *
 * @name f__0AEC_08DC_0010_F760
 * @implements 0AEC:08DC:0010:F760 ()
 *
 * Called From: 0AEC:08E7:001F:6F14
 * Called From: 0AEC:08E7:0010:F760
 */
void f__0AEC_08DC_0010_F760()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_flags.zf) { f__0AEC_08EC_0004_36FB(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__0AEC_08DC_0010_F760(); return; }
	emu_ip = 0x0A34; emu_last_cs = 0x0AEC; emu_last_ip = 0x08E9; emu_last_length = 0x0010; emu_last_crc = 0xF760; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_08EC_0004_36FB()
 *
 * @name f__0AEC_08EC_0004_36FB
 * @implements 0AEC:08EC:0004:36FB ()
 *
 * Called From: 0AEC:08E2:0010:F760
 * Called From: 0AEC:08E2:001F:6F14
 */
void f__0AEC_08EC_0004_36FB()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x12);
	switch (emu_ip) {
		case 0x08F0: f__0AEC_08F0_000D_5D3C(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x08EC; emu_last_length = 0x0004; emu_last_crc = 0x36FB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_08F0_000D_5D3C()
 *
 * @name f__0AEC_08F0_000D_5D3C
 * @implements 0AEC:08F0:000D:5D3C ()
 *
 * Called From: 0AEC:08EC:0004:36FB
 */
void f__0AEC_08F0_000D_5D3C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__0AEC_08FD_0039_D31B(); return; }
	emu_ip = 0x0A02; emu_last_cs = 0x0AEC; emu_last_ip = 0x08FA; emu_last_length = 0x000D; emu_last_crc = 0x5D3C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_08FD_0039_D31B()
 *
 * @name f__0AEC_08FD_0039_D31B
 * @implements 0AEC:08FD:0039:D31B ()
 *
 * Called From: 0AEC:08F8:000D:5D3C
 */
void f__0AEC_08FD_0039_D31B()
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
	emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__0AEC_0936_0022_44A5();
}

/**
 * Decompiled function f__0AEC_0936_0022_44A5()
 *
 * @name f__0AEC_0936_0022_44A5
 * @implements 0AEC:0936:0022:44A5 ()
 *
 * Called From: 0AEC:0936:0039:D31B
 */
void f__0AEC_0936_0022_44A5()
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
	emu_push(emu_cs); emu_push(0x0958); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	f__0AEC_0958_0032_5DE1();
}

/**
 * Decompiled function f__0AEC_0958_0032_5DE1()
 *
 * @name f__0AEC_0958_0032_5DE1
 * @implements 0AEC:0958:0032:5DE1 ()
 *
 * Called From: 0AEC:0958:0022:44A5
 */
void f__0AEC_0958_0032_5DE1()
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
	f__0AEC_09DF_0023_F51E(); return;
}

/**
 * Decompiled function f__0AEC_098A_0015_5433()
 *
 * @name f__0AEC_098A_0015_5433
 * @implements 0AEC:098A:0015:5433 ()
 *
 * Called From: 0AEC:09E3:0023:F51E
 * Called From: 0AEC:09E3:0032:084A
 */
void f__0AEC_098A_0015_5433()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E40));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	f__0AEC_09D6_002C_055A(); return;
}

/**
 * Decompiled function f__0AEC_099F_0031_D7BE()
 *
 * @name f__0AEC_099F_0031_D7BE
 * @implements 0AEC:099F:0031:D7BE ()
 *
 * Called From: 0AEC:09DA:002C:055A
 * Called From: 0AEC:09DA:0032:084A
 */
void f__0AEC_099F_0031_D7BE()
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
	emu_push(emu_cs); emu_push(0x09D0); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__0AEC_09D0_0032_084A();
}

/**
 * Decompiled function f__0AEC_09D0_0032_084A()
 *
 * @name f__0AEC_09D0_0032_084A
 * @implements 0AEC:09D0:0032:084A ()
 *
 * Called From: 0AEC:09D0:0031:D7BE
 */
void f__0AEC_09D0_0032_084A()
{
	emu_addws(&emu_sp, 0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_099F_0031_D7BE(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_098A_0015_5433(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__0AEC_0A1D_0002_CE3A(); return;
}

/**
 * Decompiled function f__0AEC_09D6_002C_055A()
 *
 * @name f__0AEC_09D6_002C_055A
 * @implements 0AEC:09D6:002C:055A ()
 *
 * Called From: 0AEC:099D:0015:5433
 */
void f__0AEC_09D6_002C_055A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_099F_0031_D7BE(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x098A; emu_last_cs = 0x0AEC; emu_last_ip = 0x09E3; emu_last_length = 0x002C; emu_last_crc = 0x055A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x0A1D; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A00; emu_last_length = 0x002C; emu_last_crc = 0x055A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_09DF_0023_F51E()
 *
 * @name f__0AEC_09DF_0023_F51E
 * @implements 0AEC:09DF:0023:F51E ()
 *
 * Called From: 0AEC:0988:0032:5DE1
 */
void f__0AEC_09DF_0023_F51E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0AEC_098A_0015_5433(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x0A1D; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A00; emu_last_length = 0x0023; emu_last_crc = 0xF51E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0A1D_0002_CE3A()
 *
 * @name f__0AEC_0A1D_0002_CE3A
 * @implements 0AEC:0A1D:0002:CE3A ()
 *
 * Called From: 0AEC:0A00:0032:084A
 */
void f__0AEC_0A1D_0002_CE3A()
{
	f__0AEC_0A3B_0043_91CA(); return;
}

/**
 * Decompiled function f__0AEC_0A3B_0043_91CA()
 *
 * @name f__0AEC_0A3B_0043_91CA
 * @implements 0AEC:0A3B:0043:91CA ()
 *
 * Called From: 0AEC:0A1D:0002:CE3A
 */
void f__0AEC_0A3B_0043_91CA()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A81; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A3F; emu_last_length = 0x0043; emu_last_crc = 0x91CA; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__0AEC_0A7E_000D_8613();
}

/**
 * Decompiled function f__0AEC_0A7E_000D_8613()
 *
 * @name f__0AEC_0A7E_000D_8613
 * @implements 0AEC:0A7E:000D:8613 ()
 *
 * Called From: 0AEC:0A7E:0043:91CA
 */
void f__0AEC_0A7E_000D_8613()
{
	emu_addws(&emu_sp, 0x14);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x2E);
	if (emu_flags.zf) { f__0AEC_0A8B_0027_DD35(); return; }
	f__0AEC_0B1C_000D_E475(); return;
}

/**
 * Decompiled function f__0AEC_0A8B_0027_DD35()
 *
 * @name f__0AEC_0A8B_0027_DD35
 * @implements 0AEC:0A8B:0027:DD35 ()
 *
 * Called From: 0AEC:0A86:000D:8613
 */
void f__0AEC_0A8B_0027_DD35()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x0AB2; emu_last_cs = 0x0AEC; emu_last_ip = 0x0A93; emu_last_length = 0x0027; emu_last_crc = 0xDD35; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	f__0AEC_0AEF_001C_1C21(); return;
}

/**
 * Decompiled function f__0AEC_0AEF_001C_1C21()
 *
 * @name f__0AEC_0AEF_001C_1C21
 * @implements 0AEC:0AEF:001C:1C21 ()
 *
 * Called From: 0AEC:0AB0:0027:DD35
 */
void f__0AEC_0AEF_001C_1C21()
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
	f__0AEC_0B0B_000C_4B24();
}

/**
 * Decompiled function f__0AEC_0B0B_000C_4B24()
 *
 * @name f__0AEC_0B0B_000C_4B24
 * @implements 0AEC:0B0B:000C:4B24 ()
 *
 * Called From: 0AEC:0B0B:001C:1C21
 */
void f__0AEC_0B0B_000C_4B24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x64);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B17); emu_cs = 0x34C1; ovl__34C1(0);
	f__0AEC_0B17_0012_07D2();
}

/**
 * Decompiled function f__0AEC_0B17_0012_07D2()
 *
 * @name f__0AEC_0B17_0012_07D2
 * @implements 0AEC:0B17:0012:07D2 ()
 *
 * Called From: 0AEC:0B17:000C:4B24
 */
void f__0AEC_0B17_0012_07D2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__0AEC_0B29_0040_84EA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xE);
	f__0AEC_0B2E_003B_73ED(); return;
}

/**
 * Decompiled function f__0AEC_0B1C_000D_E475()
 *
 * @name f__0AEC_0B1C_000D_E475
 * @implements 0AEC:0B1C:000D:E475 ()
 *
 * Called From: 0AEC:0A88:000D:8613
 */
void f__0AEC_0B1C_000D_E475()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__0AEC_0B29_0040_84EA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xE);
	f__0AEC_0B2E_003B_73ED(); return;
}

/**
 * Decompiled function f__0AEC_0B29_0040_84EA()
 *
 * @name f__0AEC_0B29_0040_84EA
 * @implements 0AEC:0B29:0040:84EA ()
 *
 * Called From: 0AEC:0B20:000D:E475
 * Called From: 0AEC:0B20:0012:07D2
 */
void f__0AEC_0B29_0040_84EA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xF);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0B7A_0016_DAC5(); return; }
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
	emu_push(emu_cs); emu_push(0x0B69); emu_cs = 0x0FCB; emu_ip = 0x0BC8; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B64; emu_last_length = 0x0040; emu_last_crc = 0x84EA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0B2E_003B_73ED()
 *
 * @name f__0AEC_0B2E_003B_73ED
 * @implements 0AEC:0B2E:003B:73ED ()
 *
 * Called From: 0AEC:0B27:000D:E475
 * Called From: 0AEC:0B27:0012:07D2
 */
void f__0AEC_0B2E_003B_73ED()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0B7A_0016_DAC5(); return; }
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
	emu_push(emu_cs); emu_push(0x0B69); emu_cs = 0x0FCB; emu_ip = 0x0BC8; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B64; emu_last_length = 0x003B; emu_last_crc = 0x73ED; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_0B7A_0016_DAC5()
 *
 * @name f__0AEC_0B7A_0016_DAC5
 * @implements 0AEC:0B7A:0016:DAC5 ()
 *
 * Called From: 0AEC:0B34:0040:84EA
 * Called From: 0AEC:0B34:003B:73ED
 */
void f__0AEC_0B7A_0016_DAC5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, 0x121);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x26);
	if (!emu_flags.zf) { f__0AEC_0B90_0011_5AE7(); return; }
	emu_movw(&emu_ax.x, 0xEF);
	f__0AEC_0B93_000E_FF20(); return;
}

/**
 * Decompiled function f__0AEC_0B90_0011_5AE7()
 *
 * @name f__0AEC_0B90_0011_5AE7
 * @implements 0AEC:0B90:0011:5AE7 ()
 *
 * Called From: 0AEC:0B89:0016:DAC5
 */
void f__0AEC_0B90_0011_5AE7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0BA1_0020_6A79(); return; }
	emu_movw(&emu_ax.x, 0xA);
	emu_ip = 0x0BA3; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B9F; emu_last_length = 0x0011; emu_last_crc = 0x5AE7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0B93_000E_FF20()
 *
 * @name f__0AEC_0B93_000E_FF20
 * @implements 0AEC:0B93:000E:FF20 ()
 *
 * Called From: 0AEC:0B8E:0016:DAC5
 */
void f__0AEC_0B93_000E_FF20()
{
	emu_push(emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x90);
	if (!emu_flags.zf) { f__0AEC_0BA1_0020_6A79(); return; }
	emu_movw(&emu_ax.x, 0xA);
	emu_ip = 0x0BA3; emu_last_cs = 0x0AEC; emu_last_ip = 0x0B9F; emu_last_length = 0x000E; emu_last_crc = 0xFF20; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0BA1_0020_6A79()
 *
 * @name f__0AEC_0BA1_0020_6A79
 * @implements 0AEC:0BA1:0020:6A79 ()
 *
 * Called From: 0AEC:0B9A:0011:5AE7
 * Called From: 0AEC:0B9A:000E:FF20
 */
void f__0AEC_0BA1_0020_6A79()
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
	emu_push(emu_cs); emu_push(0x0BC1); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0BC1_0008_0683();
}

/**
 * Decompiled function f__0AEC_0BC1_0008_0683()
 *
 * @name f__0AEC_0BC1_0008_0683
 * @implements 0AEC:0BC1:0008:0683 ()
 *
 * Called From: 0AEC:0BC1:0020:6A79
 */
void f__0AEC_0BC1_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BC9); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	f__0AEC_0BC9_000C_54F8();
}

/**
 * Decompiled function f__0AEC_0BC9_000C_54F8()
 *
 * @name f__0AEC_0BC9_000C_54F8
 * @implements 0AEC:0BC9:000C:54F8 ()
 *
 * Called From: 0AEC:0BC9:0008:0683
 */
void f__0AEC_0BC9_000C_54F8()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_push(emu_cs); emu_push(0x0BD5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0BD5_000F_E74D();
}

/**
 * Decompiled function f__0AEC_0BD5_000F_E74D()
 *
 * @name f__0AEC_0BD5_000F_E74D
 * @implements 0AEC:0BD5:000F:E74D ()
 *
 * Called From: 0AEC:0BD5:000C:54F8
 */
void f__0AEC_0BD5_000F_E74D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BE4); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	f__0AEC_0BE4_0018_A44D();
}

/**
 * Decompiled function f__0AEC_0BE4_0018_A44D()
 *
 * @name f__0AEC_0BE4_0018_A44D
 * @implements 0AEC:0BE4:0018:A44D ()
 *
 * Called From: 0AEC:0BE4:000F:E74D
 */
void f__0AEC_0BE4_0018_A44D()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x681B), 0x2E);
	if (!emu_flags.zf) { f__0AEC_0C13_0021_651E(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BFC); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0BFC_000F_E74D();
}

/**
 * Decompiled function f__0AEC_0BFC_000F_E74D()
 *
 * @name f__0AEC_0BFC_000F_E74D
 * @implements 0AEC:0BFC:000F:E74D ()
 *
 * Called From: 0AEC:0BFC:0018:A44D
 */
void f__0AEC_0BFC_000F_E74D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	f__0AEC_0C0B_0029_2057();
}

/**
 * Decompiled function f__0AEC_0C0B_0029_2057()
 *
 * @name f__0AEC_0C0B_0029_2057
 * @implements 0AEC:0C0B:0029:2057 ()
 *
 * Called From: 0AEC:0C0B:000F:E74D
 */
void f__0AEC_0C0B_0029_2057()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0C77_0006_F7CE(); return; }
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
	emu_push(emu_cs); emu_push(0x0C34); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	f__0AEC_0C34_0032_F661();
}

/**
 * Decompiled function f__0AEC_0C13_0021_651E()
 *
 * @name f__0AEC_0C13_0021_651E
 * @implements 0AEC:0C13:0021:651E ()
 *
 * Called From: 0AEC:0BF1:0018:A44D
 */
void f__0AEC_0C13_0021_651E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0C77_0006_F7CE(); return; }
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
	emu_push(emu_cs); emu_push(0x0C34); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	f__0AEC_0C34_0032_F661();
}

/**
 * Decompiled function f__0AEC_0C34_0032_F661()
 *
 * @name f__0AEC_0C34_0032_F661
 * @implements 0AEC:0C34:0032:F661 ()
 *
 * Called From: 0AEC:0C34:0021:651E
 * Called From: 0AEC:0C34:0029:2057
 */
void f__0AEC_0C34_0032_F661()
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
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0C61; emu_last_length = 0x0032; emu_last_crc = 0xF661;
			emu_call();
			return;
	}
	f__0AEC_0C66_0008_F38A();
}

/**
 * Decompiled function f__0AEC_0C66_0008_F38A()
 *
 * @name f__0AEC_0C66_0008_F38A
 * @implements 0AEC:0C66:0008:F38A ()
 *
 * Called From: 0AEC:0C66:0032:F661
 */
void f__0AEC_0C66_0008_F38A()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0C6E); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	f__0AEC_0C6E_0008_64F7();
}

/**
 * Decompiled function f__0AEC_0C6E_0008_64F7()
 *
 * @name f__0AEC_0C6E_0008_64F7
 * @implements 0AEC:0C6E:0008:64F7 ()
 *
 * Called From: 0AEC:0C6E:0008:F38A
 */
void f__0AEC_0C6E_0008_64F7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C76); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0AEC_0C76_0007_F77C();
}

/**
 * Decompiled function f__0AEC_0C76_0007_F77C()
 *
 * @name f__0AEC_0C76_0007_F77C
 * @implements 0AEC:0C76:0007:F77C ()
 *
 * Called From: 0AEC:0C76:0008:64F7
 */
void f__0AEC_0C76_0007_F77C()
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
 * Decompiled function f__0AEC_0C77_0006_F7CE()
 *
 * @name f__0AEC_0C77_0006_F7CE
 * @implements 0AEC:0C77:0006:F7CE ()
 *
 * Called From: 0AEC:0C17:0021:651E
 * Called From: 0AEC:0C17:0029:2057
 */
void f__0AEC_0C77_0006_F7CE()
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
 * Decompiled function f__0AEC_0CA1_0013_A57D()
 *
 * @name f__0AEC_0CA1_0013_A57D
 * @implements 0AEC:0CA1:0013:A57D ()
 *
 * Called From: B4A2:0941:0011:88EC
 */
void f__0AEC_0CA1_0013_A57D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0AEC_0CB4_0015_4A00(); return; }
	emu_ip = 0x0E38; emu_last_cs = 0x0AEC; emu_last_ip = 0x0CB1; emu_last_length = 0x0013; emu_last_crc = 0xA57D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0CB4_0015_4A00()
 *
 * @name f__0AEC_0CB4_0015_4A00
 * @implements 0AEC:0CB4:0015:4A00 ()
 *
 * Called From: 0AEC:0CAF:0013:A57D
 */
void f__0AEC_0CB4_0015_4A00()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0CCA_0028_7895(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CC9); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0AEC_0CC9_0029_F8B9();
}

/**
 * Decompiled function f__0AEC_0CC9_0029_F8B9()
 *
 * @name f__0AEC_0CC9_0029_F8B9
 * @implements 0AEC:0CC9:0029:F8B9 ()
 *
 * Called From: 0AEC:0CC9:0015:4A00
 */
void f__0AEC_0CC9_0029_F8B9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0AEC_0CF2_0009_6093(); return; }
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
	emu_ip = 0x0D2B; emu_last_cs = 0x0AEC; emu_last_ip = 0x0CF0; emu_last_length = 0x0029; emu_last_crc = 0xF8B9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0CCA_0028_7895()
 *
 * @name f__0AEC_0CCA_0028_7895
 * @implements 0AEC:0CCA:0028:7895 ()
 *
 * Called From: 0AEC:0CBE:0015:4A00
 */
void f__0AEC_0CCA_0028_7895()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0AEC_0CF2_0009_6093(); return; }
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
	emu_ip = 0x0D2B; emu_last_cs = 0x0AEC; emu_last_ip = 0x0CF0; emu_last_length = 0x0028; emu_last_crc = 0x7895; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0CF2_0009_6093()
 *
 * @name f__0AEC_0CF2_0009_6093
 * @implements 0AEC:0CF2:0009:6093 ()
 *
 * Called From: 0AEC:0CD1:0028:7895
 * Called From: 0AEC:0CD1:0029:F8B9
 */
void f__0AEC_0CF2_0009_6093()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x0CFB); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_0CFB_002D_6664();
}

/**
 * Decompiled function f__0AEC_0CFB_002D_6664()
 *
 * @name f__0AEC_0CFB_002D_6664
 * @implements 0AEC:0CFB:002D:6664 ()
 *
 * Called From: 0AEC:0CFB:0009:6093
 */
void f__0AEC_0CFB_002D_6664()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { emu_ip = 0x0D28; emu_last_cs = 0x0AEC; emu_last_ip = 0x0D08; emu_last_length = 0x002D; emu_last_crc = 0x6664; emu_call(); return; } // Jump does not resolve
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
	f__0AEC_0D2B_0010_A835(); return;
}

/**
 * Decompiled function f__0AEC_0D2B_0010_A835()
 *
 * @name f__0AEC_0D2B_0010_A835
 * @implements 0AEC:0D2B:0010:A835 ()
 *
 * Called From: 0AEC:0D26:002D:6664
 */
void f__0AEC_0D2B_0010_A835()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_0D3B_0044_7B19(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0D3D_0042_531A(); return;
}

/**
 * Decompiled function f__0AEC_0D3B_0044_7B19()
 *
 * @name f__0AEC_0D3B_0044_7B19
 * @implements 0AEC:0D3B:0044:7B19 ()
 *
 * Called From: 0AEC:0D34:0010:A835
 */
void f__0AEC_0D3B_0044_7B19()
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
	emu_push(emu_cs); emu_push(0x0D7F); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0AEC_0D7F_0036_9D34();
}

/**
 * Decompiled function f__0AEC_0D3D_0042_531A()
 *
 * @name f__0AEC_0D3D_0042_531A
 * @implements 0AEC:0D3D:0042:531A ()
 *
 * Called From: 0AEC:0D39:0010:A835
 */
void f__0AEC_0D3D_0042_531A()
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
	emu_push(emu_cs); emu_push(0x0D7F); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0AEC_0D7F_0036_9D34();
}

/**
 * Decompiled function f__0AEC_0D7F_0036_9D34()
 *
 * @name f__0AEC_0D7F_0036_9D34
 * @implements 0AEC:0D7F:0036:9D34 ()
 *
 * Called From: 0AEC:0D7F:0044:7B19
 * Called From: 0AEC:0D7F:0042:531A
 */
void f__0AEC_0D7F_0036_9D34()
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
	emu_push(emu_cs); emu_push(0x0DB5); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__0AEC_0DB5_001C_B1BE();
}

/**
 * Decompiled function f__0AEC_0DB5_001C_B1BE()
 *
 * @name f__0AEC_0DB5_001C_B1BE
 * @implements 0AEC:0DB5:001C:B1BE ()
 *
 * Called From: 0AEC:0DB5:0036:9D34
 */
void f__0AEC_0DB5_001C_B1BE()
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
	emu_push(emu_cs); emu_push(0x0DD1); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	f__0AEC_0DD1_0024_4D95();
}

/**
 * Decompiled function f__0AEC_0DD1_0024_4D95()
 *
 * @name f__0AEC_0DD1_0024_4D95
 * @implements 0AEC:0DD1:0024:4D95 ()
 *
 * Called From: 0AEC:0DD1:001C:B1BE
 */
void f__0AEC_0DD1_0024_4D95()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0AEC_0E38_0006_F7CE(); return; }
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
	emu_push(emu_cs); emu_push(0x0DF5); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	f__0AEC_0DF5_0032_F661();
}

/**
 * Decompiled function f__0AEC_0DF5_0032_F661()
 *
 * @name f__0AEC_0DF5_0032_F661
 * @implements 0AEC:0DF5:0032:F661 ()
 *
 * Called From: 0AEC:0DF5:0024:4D95
 */
void f__0AEC_0DF5_0032_F661()
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
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0E22; emu_last_length = 0x0032; emu_last_crc = 0xF661;
			emu_call();
			return;
	}
	f__0AEC_0E27_0008_F38A();
}

/**
 * Decompiled function f__0AEC_0E27_0008_F38A()
 *
 * @name f__0AEC_0E27_0008_F38A
 * @implements 0AEC:0E27:0008:F38A ()
 *
 * Called From: 0AEC:0E27:0032:F661
 */
void f__0AEC_0E27_0008_F38A()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	f__0AEC_0E2F_0008_64F7();
}

/**
 * Decompiled function f__0AEC_0E2F_0008_64F7()
 *
 * @name f__0AEC_0E2F_0008_64F7
 * @implements 0AEC:0E2F:0008:64F7 ()
 *
 * Called From: 0AEC:0E2F:0008:F38A
 */
void f__0AEC_0E2F_0008_64F7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0AEC_0E37_0007_F77C();
}

/**
 * Decompiled function f__0AEC_0E37_0007_F77C()
 *
 * @name f__0AEC_0E37_0007_F77C
 * @implements 0AEC:0E37:0007:F77C ()
 *
 * Called From: 0AEC:0E37:0008:64F7
 */
void f__0AEC_0E37_0007_F77C()
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
 * Decompiled function f__0AEC_0E38_0006_F7CE()
 *
 * @name f__0AEC_0E38_0006_F7CE
 * @implements 0AEC:0E38:0006:F7CE ()
 *
 * Called From: 0AEC:0DD8:0024:4D95
 */
void f__0AEC_0E38_0006_F7CE()
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
 * Decompiled function f__0AEC_0E3E_0013_E57C()
 *
 * @name f__0AEC_0E3E_0013_E57C
 * @implements 0AEC:0E3E:0013:E57C ()
 *
 * Called From: B4A2:0941:0011:88EC
 */
void f__0AEC_0E3E_0013_E57C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0AEC_0E51_0015_7A06(); return; }
	emu_ip = 0x0FD2; emu_last_cs = 0x0AEC; emu_last_ip = 0x0E4E; emu_last_length = 0x0013; emu_last_crc = 0xE57C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_0E51_0015_7A06()
 *
 * @name f__0AEC_0E51_0015_7A06
 * @implements 0AEC:0E51:0015:7A06 ()
 *
 * Called From: 0AEC:0E4C:0013:E57C
 */
void f__0AEC_0E51_0015_7A06()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__0AEC_0E67_001A_595C(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E66); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0AEC_0E66_001B_7957();
}

/**
 * Decompiled function f__0AEC_0E66_001B_7957()
 *
 * @name f__0AEC_0E66_001B_7957
 * @implements 0AEC:0E66:001B:7957 ()
 *
 * Called From: 0AEC:0E66:0015:7A06
 */
void f__0AEC_0E66_001B_7957()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (emu_flags.zf) { f__0AEC_0E81_0015_4590(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E83_0013_4404(); return;
}

/**
 * Decompiled function f__0AEC_0E67_001A_595C()
 *
 * @name f__0AEC_0E67_001A_595C
 * @implements 0AEC:0E67:001A:595C ()
 *
 * Called From: 0AEC:0E5B:0015:7A06
 */
void f__0AEC_0E67_001A_595C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (emu_flags.zf) { f__0AEC_0E81_0015_4590(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E83_0013_4404(); return;
}

/**
 * Decompiled function f__0AEC_0E81_0015_4590()
 *
 * @name f__0AEC_0E81_0015_4590
 * @implements 0AEC:0E81:0015:4590 ()
 *
 * Called From: 0AEC:0E7A:001A:595C
 * Called From: 0AEC:0E7A:001B:7957
 */
void f__0AEC_0E81_0015_4590()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_0E96_0044_7D3B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E98_0042_5538(); return;
}

/**
 * Decompiled function f__0AEC_0E83_0013_4404()
 *
 * @name f__0AEC_0E83_0013_4404
 * @implements 0AEC:0E83:0013:4404 ()
 *
 * Called From: 0AEC:0E7F:001A:595C
 * Called From: 0AEC:0E7F:001B:7957
 */
void f__0AEC_0E83_0013_4404()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__0AEC_0E96_0044_7D3B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_0E98_0042_5538(); return;
}

/**
 * Decompiled function f__0AEC_0E96_0044_7D3B()
 *
 * @name f__0AEC_0E96_0044_7D3B
 * @implements 0AEC:0E96:0044:7D3B ()
 *
 * Called From: 0AEC:0E8F:0015:4590
 * Called From: 0AEC:0E8F:0013:4404
 */
void f__0AEC_0E96_0044_7D3B()
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
	emu_push(emu_cs); emu_push(0x0EDA); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0AEC_0EDA_001D_E4CA();
}

/**
 * Decompiled function f__0AEC_0E98_0042_5538()
 *
 * @name f__0AEC_0E98_0042_5538
 * @implements 0AEC:0E98:0042:5538 ()
 *
 * Called From: 0AEC:0E94:0015:4590
 * Called From: 0AEC:0E94:0013:4404
 */
void f__0AEC_0E98_0042_5538()
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
	emu_push(emu_cs); emu_push(0x0EDA); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0AEC_0EDA_001D_E4CA();
}

/**
 * Decompiled function f__0AEC_0EDA_001D_E4CA()
 *
 * @name f__0AEC_0EDA_001D_E4CA
 * @implements 0AEC:0EDA:001D:E4CA ()
 *
 * Called From: 0AEC:0EDA:0044:7D3B
 * Called From: 0AEC:0EDA:0042:5538
 */
void f__0AEC_0EDA_001D_E4CA()
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
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	f__0AEC_0EF7_0010_2086();
}

/**
 * Decompiled function f__0AEC_0EF7_0010_2086()
 *
 * @name f__0AEC_0EF7_0010_2086
 * @implements 0AEC:0EF7:0010:2086 ()
 *
 * Called From: 0AEC:0EF7:001D:E4CA
 */
void f__0AEC_0EF7_0010_2086()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__0AEC_0F07_000D_E434(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	f__0AEC_0F24_0020_45D7(); return;
}

/**
 * Decompiled function f__0AEC_0F07_000D_E434()
 *
 * @name f__0AEC_0F07_000D_E434
 * @implements 0AEC:0F07:000D:E434 ()
 *
 * Called From: 0AEC:0EFE:0010:2086
 */
void f__0AEC_0F07_000D_E434()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__0AEC_0F14_0030_42F4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x6);
	f__0AEC_0F19_002B_B5D3(); return;
}

/**
 * Decompiled function f__0AEC_0F14_0030_42F4()
 *
 * @name f__0AEC_0F14_0030_42F4
 * @implements 0AEC:0F14:0030:42F4 ()
 *
 * Called From: 0AEC:0F0B:000D:E434
 */
void f__0AEC_0F14_0030_42F4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xF);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x22);
	if (!emu_flags.zf) { f__0AEC_0F24_0020_45D7(); return; }
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
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0F44_0008_0683();
}

/**
 * Decompiled function f__0AEC_0F19_002B_B5D3()
 *
 * @name f__0AEC_0F19_002B_B5D3
 * @implements 0AEC:0F19:002B:B5D3 ()
 *
 * Called From: 0AEC:0F12:000D:E434
 */
void f__0AEC_0F19_002B_B5D3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x22);
	if (!emu_flags.zf) { f__0AEC_0F24_0020_45D7(); return; }
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
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0F44_0008_0683();
}

/**
 * Decompiled function f__0AEC_0F24_0020_45D7()
 *
 * @name f__0AEC_0F24_0020_45D7
 * @implements 0AEC:0F24:0020:45D7 ()
 *
 * Called From: 0AEC:0F05:0010:2086
 * Called From: 0AEC:0F1D:0030:42F4
 * Called From: 0AEC:0F1D:002B:B5D3
 */
void f__0AEC_0F24_0020_45D7()
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
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0F44_0008_0683();
}

/**
 * Decompiled function f__0AEC_0F44_0008_0683()
 *
 * @name f__0AEC_0F44_0008_0683
 * @implements 0AEC:0F44:0008:0683 ()
 *
 * Called From: 0AEC:0F44:0020:45D7
 * Called From: 0AEC:0F44:0030:42F4
 * Called From: 0AEC:0F44:002B:B5D3
 */
void f__0AEC_0F44_0008_0683()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F4C); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	f__0AEC_0F4C_000B_559F();
}

/**
 * Decompiled function f__0AEC_0F4C_000B_559F()
 *
 * @name f__0AEC_0F4C_000B_559F
 * @implements 0AEC:0F4C:000B:559F ()
 *
 * Called From: 0AEC:0F4C:0008:0683
 */
void f__0AEC_0F4C_000B_559F()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F57); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0AEC_0F57_000F_E74D();
}

/**
 * Decompiled function f__0AEC_0F57_000F_E74D()
 *
 * @name f__0AEC_0F57_000F_E74D
 * @implements 0AEC:0F57:000F:E74D ()
 *
 * Called From: 0AEC:0F57:000B:559F
 */
void f__0AEC_0F57_000F_E74D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	f__0AEC_0F66_0029_2C59();
}

/**
 * Decompiled function f__0AEC_0F66_0029_2C59()
 *
 * @name f__0AEC_0F66_0029_2C59
 * @implements 0AEC:0F66:0029:2C59 ()
 *
 * Called From: 0AEC:0F66:000F:E74D
 */
void f__0AEC_0F66_0029_2C59()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__0AEC_0FD2_0006_F7CE(); return; }
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
	emu_push(emu_cs); emu_push(0x0F8F); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	f__0AEC_0F8F_0032_EA61();
}

/**
 * Decompiled function f__0AEC_0F8F_0032_EA61()
 *
 * @name f__0AEC_0F8F_0032_EA61
 * @implements 0AEC:0F8F:0032:EA61 ()
 *
 * Called From: 0AEC:0F8F:0029:2C59
 */
void f__0AEC_0F8F_0032_EA61()
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
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0FBC; emu_last_length = 0x0032; emu_last_crc = 0xEA61;
			emu_call();
			return;
	}
	f__0AEC_0FC1_0008_F38A();
}

/**
 * Decompiled function f__0AEC_0FC1_0008_F38A()
 *
 * @name f__0AEC_0FC1_0008_F38A
 * @implements 0AEC:0FC1:0008:F38A ()
 *
 * Called From: 0AEC:0FC1:0032:EA61
 */
void f__0AEC_0FC1_0008_F38A()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	f__0AEC_0FC9_0008_64F7();
}

/**
 * Decompiled function f__0AEC_0FC9_0008_64F7()
 *
 * @name f__0AEC_0FC9_0008_64F7
 * @implements 0AEC:0FC9:0008:64F7 ()
 *
 * Called From: 0AEC:0FC9:0008:F38A
 */
void f__0AEC_0FC9_0008_64F7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FD1); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0AEC_0FD1_0007_F77C();
}

/**
 * Decompiled function f__0AEC_0FD1_0007_F77C()
 *
 * @name f__0AEC_0FD1_0007_F77C
 * @implements 0AEC:0FD1:0007:F77C ()
 *
 * Called From: 0AEC:0FD1:0008:64F7
 */
void f__0AEC_0FD1_0007_F77C()
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
 * Decompiled function f__0AEC_0FD2_0006_F7CE()
 *
 * @name f__0AEC_0FD2_0006_F7CE
 * @implements 0AEC:0FD2:0006:F7CE ()
 *
 * Called From: 0AEC:0F72:0029:2C59
 */
void f__0AEC_0FD2_0006_F7CE()
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
 * Decompiled function f__0AEC_0FD8_0017_6202()
 *
 * @name f__0AEC_0FD8_0017_6202
 * @implements 0AEC:0FD8:0017:6202 ()
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void f__0AEC_0FD8_0017_6202()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFF);
	if (emu_flags.zf) { f__0AEC_1041_003B_40DA(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34CD; emu_ip = 0x10A5; emu_last_cs = 0x0AEC; emu_last_ip = 0x0FEA; emu_last_length = 0x0017; emu_last_crc = 0x6202; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_1041_003B_40DA()
 *
 * @name f__0AEC_1041_003B_40DA
 * @implements 0AEC:1041:003B:40DA ()
 *
 * Called From: 0AEC:0FE4:0017:6202
 */
void f__0AEC_1041_003B_40DA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F4));
	if (emu_flags.zf) { emu_ip = 0x1089; emu_last_cs = 0x0AEC; emu_last_ip = 0x1048; emu_last_length = 0x003B; emu_last_crc = 0x40DA; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	f__0AEC_107C_000C_379D();
}

/**
 * Decompiled function f__0AEC_107C_000C_379D()
 *
 * @name f__0AEC_107C_000C_379D
 * @implements 0AEC:107C:000C:379D ()
 *
 * Called From: 0AEC:107C:003B:40DA
 */
void f__0AEC_107C_000C_379D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1088); emu_cs = 0x34E9; ovl__34E9(2);
	f__0AEC_1088_0006_B1FB();
}

/**
 * Decompiled function f__0AEC_1088_0006_B1FB()
 *
 * @name f__0AEC_1088_0006_B1FB
 * @implements 0AEC:1088:0006:B1FB ()
 *
 * Called From: 0AEC:1088:000C:379D
 */
void f__0AEC_1088_0006_B1FB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__0AEC_108E_0005_8BCF(); return;
}

/**
 * Decompiled function f__0AEC_108E_0005_8BCF()
 *
 * @name f__0AEC_108E_0005_8BCF
 * @implements 0AEC:108E:0005:8BCF ()
 *
 * Called From: 0AEC:108C:0006:B1FB
 */
void f__0AEC_108E_0005_8BCF()
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
 * Decompiled function f__0AEC_1093_000F_2295()
 *
 * @name f__0AEC_1093_000F_2295
 * @implements 0AEC:1093:000F:2295 ()
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void f__0AEC_1093_000F_2295()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x10A2); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_10A2_0016_DDD2();
}

/**
 * Decompiled function f__0AEC_10A2_0016_DDD2()
 *
 * @name f__0AEC_10A2_0016_DDD2
 * @implements 0AEC:10A2:0016:DDD2 ()
 *
 * Called From: 0AEC:10A2:000F:2295
 */
void f__0AEC_10A2_0016_DDD2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x681B));
	emu_subws(&emu_bx.x, 0x26);
	emu_cmpws(&emu_bx.x, 0x8);
	if ((emu_flags.cf || emu_flags.zf)) { f__0AEC_10B8_0007_A0A5(); return; }
	emu_ip = 0x1165; emu_last_cs = 0x0AEC; emu_last_ip = 0x10B5; emu_last_length = 0x0016; emu_last_crc = 0xDDD2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0AEC_10B8_0007_A0A5()
 *
 * @name f__0AEC_10B8_0007_A0A5
 * @implements 0AEC:10B8:0007:A0A5 ()
 *
 * Called From: 0AEC:10B3:0016:DDD2
 */
void f__0AEC_10B8_0007_A0A5()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x116F);
	switch (emu_ip) {
		case 0x10BF: f__0AEC_10BF_0018_52CC(); return;
		case 0x1121: f__0AEC_1121_000B_597F(); return;
		case 0x112C: f__0AEC_112C_0013_430C(); return;
		case 0x113F: f__0AEC_113F_0012_7EA1(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x10BA; emu_last_length = 0x0007; emu_last_crc = 0xA0A5;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0AEC_10BF_0018_52CC()
 *
 * @name f__0AEC_10BF_0018_52CC
 * @implements 0AEC:10BF:0018:52CC ()
 *
 * Called From: 0AEC:10BA:0007:A0A5
 */
void f__0AEC_10BF_0018_52CC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x111F; emu_last_cs = 0x0AEC; emu_last_ip = 0x10C7; emu_last_length = 0x0018; emu_last_crc = 0x52CC; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10D7); emu_cs = 0x1082; f__1082_03A1_0023_9F5D();
	f__0AEC_10D7_002B_C27D();
}

/**
 * Decompiled function f__0AEC_10D7_002B_C27D()
 *
 * @name f__0AEC_10D7_002B_C27D
 * @implements 0AEC:10D7:002B:C27D ()
 *
 * Called From: 0AEC:10D7:0018:52CC
 */
void f__0AEC_10D7_002B_C27D()
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
	emu_push(emu_cs); emu_push(0x1102); emu_cs = 0x0C3A; f__0C3A_0C5C_004D_2837();
	f__0AEC_1102_001C_5E7F();
}

/**
 * Decompiled function f__0AEC_1102_001C_5E7F()
 *
 * @name f__0AEC_1102_001C_5E7F
 * @implements 0AEC:1102:001C:5E7F ()
 *
 * Called From: 0AEC:1102:002B:C27D
 */
void f__0AEC_1102_001C_5E7F()
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
	f__0AEC_111E_0003_E81A();
}

/**
 * Decompiled function f__0AEC_111E_0003_E81A()
 *
 * @name f__0AEC_111E_0003_E81A
 * @implements 0AEC:111E:0003:E81A ()
 *
 * Called From: 0AEC:111E:001C:5E7F
 */
void f__0AEC_111E_0003_E81A()
{
	emu_pop(&emu_cx.x);
	f__0AEC_1167_0004_E839(); return;
}

/**
 * Decompiled function f__0AEC_1121_000B_597F()
 *
 * @name f__0AEC_1121_000B_597F
 * @implements 0AEC:1121:000B:597F ()
 *
 * Called From: 0AEC:10BA:0007:A0A5
 */
void f__0AEC_1121_000B_597F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4000);
	f__0AEC_1167_0004_E839(); return;
}

/**
 * Decompiled function f__0AEC_112C_0013_430C()
 *
 * @name f__0AEC_112C_0013_430C
 * @implements 0AEC:112C:0013:430C ()
 *
 * Called From: 0AEC:10BA:0007:A0A5
 */
void f__0AEC_112C_0013_430C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x9FFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0xFD);
	f__0AEC_1167_0004_E839(); return;
}

/**
 * Decompiled function f__0AEC_113F_0012_7EA1()
 *
 * @name f__0AEC_113F_0012_7EA1
 * @implements 0AEC:113F:0012:7EA1 ()
 *
 * Called From: 0AEC:10BA:0007:A0A5
 */
void f__0AEC_113F_0012_7EA1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
	f__0AEC_1151_0005_8C6E();
}

/**
 * Decompiled function f__0AEC_1151_0005_8C6E()
 *
 * @name f__0AEC_1151_0005_8C6E
 * @implements 0AEC:1151:0005:8C6E ()
 *
 * Called From: 0AEC:1151:0012:7EA1
 */
void f__0AEC_1151_0005_8C6E()
{
	emu_addws(&emu_sp, 0x6);
	f__0AEC_1167_0004_E839(); return;
}

/**
 * Decompiled function f__0AEC_1167_0004_E839()
 *
 * @name f__0AEC_1167_0004_E839
 * @implements 0AEC:1167:0004:E839 ()
 *
 * Called From: 0AEC:111F:0003:E81A
 * Called From: 0AEC:112A:000B:597F
 * Called From: 0AEC:113D:0013:430C
 * Called From: 0AEC:1154:0005:8C6E
 */
void f__0AEC_1167_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_116B_0004_893F(); return;
}

/**
 * Decompiled function f__0AEC_116B_0004_893F()
 *
 * @name f__0AEC_116B_0004_893F
 * @implements 0AEC:116B:0004:893F ()
 *
 * Called From: 0AEC:1169:0004:E839
 */
void f__0AEC_116B_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_1181_001C_DFE4()
 *
 * @name f__0AEC_1181_001C_DFE4
 * @implements 0AEC:1181:001C:DFE4 ()
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void f__0AEC_1181_001C_DFE4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0AEC_11A1_0009_6093(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x119D); emu_cs = 0x1A34; emu_ip = 0x3945; emu_last_cs = 0x0AEC; emu_last_ip = 0x1198; emu_last_length = 0x001C; emu_last_crc = 0xDFE4; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_11A1_0009_6093()
 *
 * @name f__0AEC_11A1_0009_6093
 * @implements 0AEC:11A1:0009:6093 ()
 *
 * Called From: 0AEC:118E:001C:DFE4
 */
void f__0AEC_11A1_0009_6093()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x11AA); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_11AA_0041_E018();
}

/**
 * Decompiled function f__0AEC_11AA_0041_E018()
 *
 * @name f__0AEC_11AA_0041_E018
 * @implements 0AEC:11AA:0041:E018 ()
 *
 * Called From: 0AEC:11AA:0009:6093
 */
void f__0AEC_11AA_0041_E018()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11B7; emu_last_length = 0x0041; emu_last_crc = 0xE018; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.zf) { emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11DA; emu_last_length = 0x0041; emu_last_crc = 0xE018; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11EB); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
	f__0AEC_11EB_0007_F90C();
}

/**
 * Decompiled function f__0AEC_11EB_0007_F90C()
 *
 * @name f__0AEC_11EB_0007_F90C
 * @implements 0AEC:11EB:0007:F90C ()
 *
 * Called From: 0AEC:11EB:0041:E018
 */
void f__0AEC_11EB_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_11F2_0004_893F(); return;
}

/**
 * Decompiled function f__0AEC_11F2_0004_893F()
 *
 * @name f__0AEC_11F2_0004_893F
 * @implements 0AEC:11F2:0004:893F ()
 *
 * Called From: 0AEC:11F0:0007:F90C
 */
void f__0AEC_11F2_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0AEC_11F6_000F_2195()
 *
 * @name f__0AEC_11F6_000F_2195
 * @implements 0AEC:11F6:000F:2195 ()
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void f__0AEC_11F6_000F_2195()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x1205); emu_cs = 0x34CD; ovl__34CD(30);
	f__0AEC_1205_001C_6F1D();
}

/**
 * Decompiled function f__0AEC_1205_001C_6F1D()
 *
 * @name f__0AEC_1205_001C_6F1D
 * @implements 0AEC:1205:001C:6F1D ()
 *
 * Called From: 0AEC:1205:000F:2195
 */
void f__0AEC_1205_001C_6F1D()
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
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
	f__0AEC_1221_001C_8D4B();
}

/**
 * Decompiled function f__0AEC_1221_001C_8D4B()
 *
 * @name f__0AEC_1221_001C_8D4B
 * @implements 0AEC:1221:001C:8D4B ()
 *
 * Called From: 0AEC:1221:001C:6F1D
 */
void f__0AEC_1221_001C_8D4B()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0AEC_1240_0004_E839(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x0C3A; emu_ip = 0x3951; emu_last_cs = 0x0AEC; emu_last_ip = 0x1238; emu_last_length = 0x001C; emu_last_crc = 0x8D4B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0AEC_1240_0004_E839()
 *
 * @name f__0AEC_1240_0004_E839
 * @implements 0AEC:1240:0004:E839 ()
 *
 * Called From: 0AEC:1226:001C:8D4B
 */
void f__0AEC_1240_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0AEC_1244_0004_893F(); return;
}

/**
 * Decompiled function f__0AEC_1244_0004_893F()
 *
 * @name f__0AEC_1244_0004_893F
 * @implements 0AEC:1244:0004:893F ()
 *
 * Called From: 0AEC:1242:0004:E839
 */
void f__0AEC_1244_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
