/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B480_0000_0018_A09B()
 *
 * @name f__B480_0000_0018_A09B
 * @implements B480:0000:0018:A09B ()
 *
 * Called From: 3480:0020:0005:0000
 */
void f__B480_0000_0018_A09B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xCC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x98E1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0xBC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x24E6; f__24E6_006E_001A_719E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_0018_0011_F5E0();
}

/**
 * Decompiled function f__B480_0018_0011_F5E0()
 *
 * @name f__B480_0018_0011_F5E0
 * @implements B480:0018:0011:F5E0 ()
 *
 * Called From: B480:0018:0018:A09B
 */
void f__B480_0018_0011_F5E0()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B480_0034_0025_74D3(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0xC5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x01F7; emu_ip = 0x2BED; emu_last_cs = 0xB480; emu_last_ip = 0x0024; emu_last_length = 0x0011; emu_last_crc = 0xF5E0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B480_0034_0025_74D3()
 *
 * @name f__B480_0034_0025_74D3
 * @implements B480:0034:0025:74D3 ()
 *
 * Called From: B480:001D:0011:F5E0
 */
void f__B480_0034_0025_74D3()
{
	emu_xorw(&emu_si, emu_si);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x0);
	if (emu_flags.zf) { f__B480_004C_000D_DC51(); return; }
	emu_addw(&emu_si, 0x3E80);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x004C; emu_last_cs = 0xB480; emu_last_ip = 0x0046; emu_last_length = 0x0025; emu_last_crc = 0x74D3; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, 0x7D0);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671E), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0059; emu_last_cs = 0xB480; emu_last_ip = 0x0051; emu_last_length = 0x0025; emu_last_crc = 0x74D3; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, 0x59D8);
	emu_ip = 0x0064; emu_last_cs = 0xB480; emu_last_ip = 0x0057; emu_last_length = 0x0025; emu_last_crc = 0x74D3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B480_004C_000D_DC51()
 *
 * @name f__B480_004C_000D_DC51
 * @implements B480:004C:000D:DC51 ()
 *
 * Called From: B480:003B:0025:74D3
 */
void f__B480_004C_000D_DC51()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671E), 0x1);
	if (!emu_flags.zf) { f__B480_0059_0021_7086(); return; }
	emu_addw(&emu_si, 0x59D8);
	emu_ip = 0x0064; emu_last_cs = 0xB480; emu_last_ip = 0x0057; emu_last_length = 0x000D; emu_last_crc = 0xDC51; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B480_0059_0021_7086()
 *
 * @name f__B480_0059_0021_7086
 * @implements B480:0059:0021:7086 ()
 *
 * Called From: B480:0051:000D:DC51
 */
void f__B480_0059_0021_7086()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671E), 0x0);
	if (emu_flags.zf) { f__B480_0064_0016_6150(); return; }
	emu_addw(&emu_si, 0x7530);
	emu_addw(&emu_si, 0x1770);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x3));
	emu_cwd();
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x01F7; emu_ip = 0x0608; emu_last_cs = 0xB480; emu_last_ip = 0x0075; emu_last_length = 0x0021; emu_last_crc = 0x7086; emu_call(); // Jump does not resolve
	f__B480_007A_000C_5821();
}

/**
 * Decompiled function f__B480_0064_0016_6150()
 *
 * @name f__B480_0064_0016_6150
 * @implements B480:0064:0016:6150 ()
 *
 * Called From: B480:005E:0021:7086
 */
void f__B480_0064_0016_6150()
{
	emu_addw(&emu_si, 0x1770);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x3));
	emu_cwd();
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_007A_000C_5821();
}

/**
 * Decompiled function f__B480_007A_000C_5821()
 *
 * @name f__B480_007A_000C_5821
 * @implements B480:007A:000C:5821 ()
 *
 * Called From: B480:007A:0016:6150
 */
void f__B480_007A_000C_5821()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9E), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9C), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0086); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_0086_0051_4C66();
}

/**
 * Decompiled function f__B480_0086_0051_4C66()
 *
 * @name f__B480_0086_0051_4C66
 * @implements B480:0086:0051:4C66 ()
 *
 * Called From: B480:0086:000C:5821
 */
void f__B480_0086_0051_4C66()
{
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0xA2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0xA0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_addw(&emu_ax.x, 0x4530);
	emu_adcws(&emu_dx.x, 0x8);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0xA2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0xA0));
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_sbbw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B480_00E4_0030_016D(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x00BE; emu_last_cs = 0xB480; emu_last_ip = 0x00B6; emu_last_length = 0x0051; emu_last_crc = 0x4C66; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (!emu_flags.cf) { emu_ip = 0x00E4; emu_last_cs = 0xB480; emu_last_ip = 0x00BC; emu_last_length = 0x0051; emu_last_crc = 0x4C66; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_sbbw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x15D);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x01F7; emu_ip = 0x2C9B; emu_last_cs = 0xB480; emu_last_ip = 0x00D2; emu_last_length = 0x0051; emu_last_crc = 0x4C66; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B480_00E4_0030_016D()
 *
 * @name f__B480_00E4_0030_016D
 * @implements B480:00E4:0030:016D ()
 *
 * Called From: B480:00B4:0051:4C66
 */
void f__B480_00E4_0030_016D()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0123; emu_last_cs = 0xB480; emu_last_ip = 0x00E9; emu_last_length = 0x0030; emu_last_crc = 0x016D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_movw(&emu_dx.x, 0xE2B0);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_addw(&emu_ax.x, 0x4530);
	emu_adcws(&emu_dx.x, 0x8);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0xB2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x1DB6; f__1DB6_0004_000B_BFBA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_0114_000D_9EE4();
}

/**
 * Decompiled function f__B480_0114_000D_9EE4()
 *
 * @name f__B480_0114_000D_9EE4
 * @implements B480:0114:000D:9EE4 ()
 *
 * Called From: B480:0114:0030:016D
 */
void f__B480_0114_000D_9EE4()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B480_0121_0002_D7BA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x03C0; emu_last_cs = 0xB480; emu_last_ip = 0x011E; emu_last_length = 0x000D; emu_last_crc = 0x9EE4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B480_011E_0003_DC07()
 *
 * @name f__B480_011E_0003_DC07
 * @implements B480:011E:0003:DC07 ()
 *
 * Called From: B480:03BD:0008:48AB
 */
void f__B480_011E_0003_DC07()
{
	f__B480_03C0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B480_0121_0002_D7BA()
 *
 * @name f__B480_0121_0002_D7BA
 * @implements B480:0121:0002:D7BA ()
 *
 * Called From: B480:0119:000D:9EE4
 */
void f__B480_0121_0002_D7BA()
{
	f__B480_0152_0017_957F(); return;
}

/**
 * Decompiled function f__B480_0152_0017_957F()
 *
 * @name f__B480_0152_0017_957F
 * @implements B480:0152:0017:957F ()
 *
 * Called From: B480:0121:0002:D7BA
 */
void f__B480_0152_0017_957F()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0190; emu_last_cs = 0xB480; emu_last_ip = 0x0157; emu_last_length = 0x0017; emu_last_crc = 0x957F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_0169_0018_55D8();
}

/**
 * Decompiled function f__B480_0169_0018_55D8()
 *
 * @name f__B480_0169_0018_55D8
 * @implements B480:0169:0018:55D8 ()
 *
 * Called From: B480:0169:0017:957F
 */
void f__B480_0169_0018_55D8()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x0181; emu_last_cs = 0xB480; emu_last_ip = 0x0178; emu_last_length = 0x0018; emu_last_crc = 0x55D8; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x0);
	f__B480_018E_0002_C2BA(); return;
}

/**
 * Decompiled function f__B480_018E_0002_C2BA()
 *
 * @name f__B480_018E_0002_C2BA
 * @implements B480:018E:0002:C2BA ()
 *
 * Called From: B480:017F:0018:55D8
 */
void f__B480_018E_0002_C2BA()
{
	f__B480_0195_0012_4C62(); return;
}

/**
 * Decompiled function f__B480_0195_0012_4C62()
 *
 * @name f__B480_0195_0012_4C62
 * @implements B480:0195:0012:4C62 ()
 *
 * Called From: B480:018E:0002:C2BA
 */
void f__B480_0195_0012_4C62()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671B));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B480_01A8_001C_9836(); return; }
	emu_movw(&emu_ax.x, 0x3000);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x29E8; emu_ip = 0x0656; emu_last_cs = 0xB480; emu_last_ip = 0x01A2; emu_last_length = 0x0012; emu_last_crc = 0x4C62; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B480_01A8_001C_9836()
 *
 * @name f__B480_01A8_001C_9836
 * @implements B480:01A8:001C:9836 ()
 *
 * Called From: B480:019C:0012:4C62
 */
void f__B480_01A8_001C_9836()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671F));
	emu_movb(&emu_ax.h, 0x0);
	emu_subw(&emu_ax.x, 0x7);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x5);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x01CC; emu_last_cs = 0xB480; emu_last_ip = 0x01BB; emu_last_length = 0x001C; emu_last_crc = 0x9836; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3D0);
	switch (emu_ip) {
		case 0x01C4: f__B480_01C4_0008_E1D7(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB480; emu_last_ip = 0x01BF; emu_last_length = 0x001C; emu_last_crc = 0x9836;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B480_01C4_0008_E1D7()
 *
 * @name f__B480_01C4_0008_E1D7
 * @implements B480:01C4:0008:E1D7 ()
 *
 * Called From: B480:01BF:001C:9836
 */
void f__B480_01C4_0008_E1D7()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	f__B480_01E7_0016_CBA2(); return;
}

/**
 * Decompiled function f__B480_01E7_0016_CBA2()
 *
 * @name f__B480_01E7_0016_CBA2
 * @implements B480:01E7:0016:CBA2 ()
 *
 * Called From: B480:01CA:0008:E1D7
 */
void f__B480_01E7_0016_CBA2()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671E));
	emu_movb(&emu_ax.h, 0x0);
	emu_subw(&emu_ax.x, 0x8);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B480_0204_0002_C03A(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3C6);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB480; emu_last_ip = 0x01F8; emu_last_length = 0x0016; emu_last_crc = 0xCBA2;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B480_0204_0002_C03A()
 *
 * @name f__B480_0204_0002_C03A
 * @implements B480:0204:0002:C03A ()
 *
 * Called From: B480:01F4:0016:CBA2
 */
void f__B480_0204_0002_C03A()
{
	f__B480_0206_0084_2794(); return;
}

/**
 * Decompiled function f__B480_0206_0084_2794()
 *
 * @name f__B480_0206_0084_2794
 * @implements B480:0206:0084:2794 ()
 *
 * Called From: B480:0204:0002:C03A
 */
void f__B480_0206_0084_2794()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFA00);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CD9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CD7), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CD5), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CD3), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFBF4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CE1), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CDF), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CDD), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CDB), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFA00);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CE9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CE7), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CE5), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CE3), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFD0D);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CF1), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CEF), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CED), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CEB), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xA044);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CF9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CF7), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CF5), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6CF3), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671A));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B480_0273_0017_043A(); return; }
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671C));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671E));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671D));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x1DD7; emu_ip = 0x0625; emu_last_cs = 0xB480; emu_last_ip = 0x0285; emu_last_length = 0x0084; emu_last_crc = 0x2794; emu_call(); // Jump does not resolve
	f__B480_028A_0018_576D();
}

/**
 * Decompiled function f__B480_0273_0017_043A()
 *
 * @name f__B480_0273_0017_043A
 * @implements B480:0273:0017:043A ()
 *
 * Called From: B480:026C:0084:2794
 */
void f__B480_0273_0017_043A()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671C));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671E));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671D));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x1DD7; f__1DD7_039B_0008_D3BD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_028A_0018_576D();
}

/**
 * Decompiled function f__B480_028A_0018_576D()
 *
 * @name f__B480_028A_0018_576D
 * @implements B480:028A:0018:576D ()
 *
 * Called From: B480:028A:0017:043A
 */
void f__B480_028A_0018_576D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x96));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x94));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C76));
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x25C4; f__25C4_000E_0019_12FF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_02A2_0032_E148();
}

/**
 * Decompiled function f__B480_02A2_0032_E148()
 *
 * @name f__B480_02A2_0032_E148
 * @implements B480:02A2:0032:E148 ()
 *
 * Called From: B480:02A2:0018:576D
 */
void f__B480_02A2_0032_E148()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x02D7; emu_last_cs = 0xB480; emu_last_ip = 0x02A7; emu_last_length = 0x0032; emu_last_crc = 0xE148; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C82), 0x353B);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C80), 0x20);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C88), 0x2528);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C86), 0x4);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x0642; f__0642_000C_001A_AF29();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_02D4_0008_84DA();
}

/**
 * Decompiled function f__B480_02D4_0008_84DA()
 *
 * @name f__B480_02D4_0008_84DA
 * @implements B480:02D4:0008:84DA ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B480_02D4_0008_84DA()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x02DC); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_02DC_0009_3238();
}

/**
 * Decompiled function f__B480_02DC_0009_3238()
 *
 * @name f__B480_02DC_0009_3238
 * @implements B480:02DC:0009:3238 ()
 *
 * Called From: B480:02DC:0008:84DA
 */
void f__B480_02DC_0009_3238()
{
	emu_movw(&emu_ax.x, 0x141);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_02E5_0008_98A4();
}

/**
 * Decompiled function f__B480_02E5_0008_98A4()
 *
 * @name f__B480_02E5_0008_98A4
 * @implements B480:02E5:0008:98A4 ()
 *
 * Called From: B480:02E5:0009:3238
 */
void f__B480_02E5_0008_98A4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02ED); emu_cs = 0x01F7; f__01F7_2BC4_0019_3608();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_02ED_0018_E196();
}

/**
 * Decompiled function f__B480_02ED_0018_E196()
 *
 * @name f__B480_02ED_0018_E196
 * @implements B480:02ED:0018:E196 ()
 *
 * Called From: B480:02ED:0008:98A4
 */
void f__B480_02ED_0018_E196()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02F6; emu_last_cs = 0xB480; emu_last_ip = 0x02F4; emu_last_length = 0x0018; emu_last_crc = 0xE196; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_di, 0x3);
	f__B480_0322_007D_1B34(); return;
}

/**
 * Decompiled function f__B480_0305_009A_0548()
 *
 * @name f__B480_0305_009A_0548
 * @implements B480:0305:009A:0548 ()
 *
 * Called From: B480:0325:007D:1B34
 * Called From: B480:0325:009A:0548
 */
void f__B480_0305_009A_0548()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_addws(&emu_di, 0x2);
	emu_cmpws(&emu_di, 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B480_0305_009A_0548(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0xA4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0xA6));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0xA4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0xA6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0xA2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0xA0));
	emu_subw(&emu_cx.x, emu_dx.x);
	emu_sbbw(&emu_bx.x, emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0xA4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0xA6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	emu_subw(&emu_cx.x, emu_dx.x);
	emu_sbbw(&emu_bx.x, emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x19E);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xCC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_039F_0019_950E();
}

/**
 * Decompiled function f__B480_0322_007D_1B34()
 *
 * @name f__B480_0322_007D_1B34
 * @implements B480:0322:007D:1B34 ()
 *
 * Called From: B480:0303:0018:E196
 */
void f__B480_0322_007D_1B34()
{
	emu_cmpws(&emu_di, 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B480_0305_009A_0548(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0xA4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0xA6));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0xA4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0xA6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0xA2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0xA0));
	emu_subw(&emu_cx.x, emu_dx.x);
	emu_sbbw(&emu_bx.x, emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0xA4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0xA6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	emu_subw(&emu_cx.x, emu_dx.x);
	emu_sbbw(&emu_bx.x, emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9E));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x9C));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x19E);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xCC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x01F7; emu_ip = 0x3B2C; emu_last_cs = 0xB480; emu_last_ip = 0x039A; emu_last_length = 0x007D; emu_last_crc = 0x1B34; emu_call(); // Jump does not resolve
	f__B480_039F_0019_950E();
}

/**
 * Decompiled function f__B480_039F_0019_950E()
 *
 * @name f__B480_039F_0019_950E
 * @implements B480:039F:0019:950E ()
 *
 * Called From: B480:039F:009A:0548
 */
void f__B480_039F_0019_950E()
{
	emu_addws(&emu_sp, 0x1C);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xCC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03B8); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3480) { ovl__3480(0xFF); }
	f__B480_03B8_0008_48AB();
}

/**
 * Decompiled function f__B480_03B8_0008_48AB()
 *
 * @name f__B480_03B8_0008_48AB
 * @implements B480:03B8:0008:48AB ()
 *
 * Called From: B480:03B8:0019:950E
 */
void f__B480_03B8_0008_48AB()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B480_011E_0003_DC07(); return;
}

/**
 * Decompiled function f__B480_03C0_0006_F7CE()
 *
 * @name f__B480_03C0_0006_F7CE
 * @implements B480:03C0:0006:F7CE ()
 *
 * Called From: B480:011E:0003:DC07
 */
void f__B480_03C0_0006_F7CE()
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
