/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__3FF1_0000_0018_A5BC()
 *
 * @name f__3FF1_0000_0018_A5BC
 * @implements 3FF1:0000:0018:A5BC ()
 *
 * Called From: 3480:0020:0005:1EFA
 */
void f__3FF1_0000_0018_A5BC()
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
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x24E6; f__24E6_006E_001A_7053();
	f__3FF1_0018_0011_FD5C();
}

/**
 * Decompiled function f__3FF1_0018_0011_FD5C()
 *
 * @name f__3FF1_0018_0011_FD5C
 * @implements 3FF1:0018:0011:FD5C ()
 *
 * Called From: 3FF1:0018:0018:A5BC
 */
void f__3FF1_0018_0011_FD5C()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__3FF1_0034_0025_1789(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0xC5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x01F7; emu_ip = 0x2BED; emu_last_cs = 0x3FF1; emu_last_ip = 0x0024; emu_last_length = 0x0011; emu_last_crc = 0xFD5C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__3FF1_0034_0025_1789()
 *
 * @name f__3FF1_0034_0025_1789
 * @implements 3FF1:0034:0025:1789 ()
 *
 * Called From: 3FF1:001D:0011:FD5C
 */
void f__3FF1_0034_0025_1789()
{
	emu_xorw(&emu_si, emu_si);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x0);
	if (emu_flags.zf) { f__3FF1_004C_000D_D064(); return; }
	emu_addw(&emu_si, 0x3E80);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x004C; emu_last_cs = 0x3FF1; emu_last_ip = 0x0046; emu_last_length = 0x0025; emu_last_crc = 0x1789; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, 0x7D0);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671E), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0059; emu_last_cs = 0x3FF1; emu_last_ip = 0x0051; emu_last_length = 0x0025; emu_last_crc = 0x1789; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, 0x59D8);
	emu_ip = 0x0064; emu_last_cs = 0x3FF1; emu_last_ip = 0x0057; emu_last_length = 0x0025; emu_last_crc = 0x1789; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__3FF1_004C_000D_D064()
 *
 * @name f__3FF1_004C_000D_D064
 * @implements 3FF1:004C:000D:D064 ()
 *
 * Called From: 3FF1:003B:0025:1789
 */
void f__3FF1_004C_000D_D064()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671E), 0x1);
	if (!emu_flags.zf) { f__3FF1_0059_0021_E269(); return; }
	emu_addw(&emu_si, 0x59D8);
	emu_ip = 0x0064; emu_last_cs = 0x3FF1; emu_last_ip = 0x0057; emu_last_length = 0x000D; emu_last_crc = 0xD064; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__3FF1_0059_0021_E269()
 *
 * @name f__3FF1_0059_0021_E269
 * @implements 3FF1:0059:0021:E269 ()
 *
 * Called From: 3FF1:0051:000D:D064
 */
void f__3FF1_0059_0021_E269()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671E), 0x0);
	if (emu_flags.zf) { f__3FF1_0064_0016_0184(); return; }
	emu_addw(&emu_si, 0x7530);
	emu_addw(&emu_si, 0x1770);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x3));
	emu_cwd();
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x01F7; emu_ip = 0x0608; emu_last_cs = 0x3FF1; emu_last_ip = 0x0075; emu_last_length = 0x0021; emu_last_crc = 0xE269; emu_call(); // Jump does not resolve
	f__3FF1_007A_000C_A6D0();
}

/**
 * Decompiled function f__3FF1_0064_0016_0184()
 *
 * @name f__3FF1_0064_0016_0184
 * @implements 3FF1:0064:0016:0184 ()
 *
 * Called From: 3FF1:005E:0021:E269
 */
void f__3FF1_0064_0016_0184()
{
	emu_addw(&emu_si, 0x1770);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x3));
	emu_cwd();
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	f__3FF1_007A_000C_A6D0();
}

/**
 * Decompiled function f__3FF1_007A_000C_A6D0()
 *
 * @name f__3FF1_007A_000C_A6D0
 * @implements 3FF1:007A:000C:A6D0 ()
 *
 * Called From: 3FF1:007A:0016:0184
 */
void f__3FF1_007A_000C_A6D0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9E), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9C), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0086); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	f__3FF1_0086_0051_A233();
}

/**
 * Decompiled function f__3FF1_0086_0051_A233()
 *
 * @name f__3FF1_0086_0051_A233
 * @implements 3FF1:0086:0051:A233 ()
 *
 * Called From: 3FF1:0086:000C:A6D0
 */
void f__3FF1_0086_0051_A233()
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__3FF1_00E4_0030_230B(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x00BE; emu_last_cs = 0x3FF1; emu_last_ip = 0x00B6; emu_last_length = 0x0051; emu_last_crc = 0xA233; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (!emu_flags.cf) { emu_ip = 0x00E4; emu_last_cs = 0x3FF1; emu_last_ip = 0x00BC; emu_last_length = 0x0051; emu_last_crc = 0xA233; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x01F7; emu_ip = 0x2C9B; emu_last_cs = 0x3FF1; emu_last_ip = 0x00D2; emu_last_length = 0x0051; emu_last_crc = 0xA233; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__3FF1_00E4_0030_230B()
 *
 * @name f__3FF1_00E4_0030_230B
 * @implements 3FF1:00E4:0030:230B ()
 *
 * Called From: 3FF1:00B4:0051:A233
 */
void f__3FF1_00E4_0030_230B()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0123; emu_last_cs = 0x3FF1; emu_last_ip = 0x00E9; emu_last_length = 0x0030; emu_last_crc = 0x230B; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x1DB6; f__1DB6_0004_000B_BA01();
	f__3FF1_0114_000D_A00D();
}

/**
 * Decompiled function f__3FF1_0114_000D_A00D()
 *
 * @name f__3FF1_0114_000D_A00D
 * @implements 3FF1:0114:000D:A00D ()
 *
 * Called From: 3FF1:0114:0030:230B
 */
void f__3FF1_0114_000D_A00D()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__3FF1_0121_0002_03F2(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x03C0; emu_last_cs = 0x3FF1; emu_last_ip = 0x011E; emu_last_length = 0x000D; emu_last_crc = 0xA00D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__3FF1_0121_0002_03F2()
 *
 * @name f__3FF1_0121_0002_03F2
 * @implements 3FF1:0121:0002:03F2 ()
 *
 * Called From: 3FF1:0119:000D:A00D
 */
void f__3FF1_0121_0002_03F2()
{
	f__3FF1_0152_0017_ADA9(); return;
}

/**
 * Decompiled function f__3FF1_0152_0017_ADA9()
 *
 * @name f__3FF1_0152_0017_ADA9
 * @implements 3FF1:0152:0017:ADA9 ()
 *
 * Called From: 3FF1:0121:0002:03F2
 */
void f__3FF1_0152_0017_ADA9()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0190; emu_last_cs = 0x3FF1; emu_last_ip = 0x0157; emu_last_length = 0x0017; emu_last_crc = 0xADA9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__3FF1_0169_0018_9018();
}

/**
 * Decompiled function f__3FF1_0169_0018_9018()
 *
 * @name f__3FF1_0169_0018_9018
 * @implements 3FF1:0169:0018:9018 ()
 *
 * Called From: 3FF1:0169:0017:ADA9
 */
void f__3FF1_0169_0018_9018()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x0181; emu_last_cs = 0x3FF1; emu_last_ip = 0x0178; emu_last_length = 0x0018; emu_last_crc = 0x9018; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x671C), 0x0);
	f__3FF1_018E_0002_03A6(); return;
}

/**
 * Decompiled function f__3FF1_018E_0002_03A6()
 *
 * @name f__3FF1_018E_0002_03A6
 * @implements 3FF1:018E:0002:03A6 ()
 *
 * Called From: 3FF1:017F:0018:9018
 */
void f__3FF1_018E_0002_03A6()
{
	f__3FF1_0195_0012_85E5(); return;
}

/**
 * Decompiled function f__3FF1_0195_0012_85E5()
 *
 * @name f__3FF1_0195_0012_85E5
 * @implements 3FF1:0195:0012:85E5 ()
 *
 * Called From: 3FF1:018E:0002:03A6
 */
void f__3FF1_0195_0012_85E5()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671B));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__3FF1_01A8_001C_FA68(); return; }
	emu_movw(&emu_ax.x, 0x3000);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x29E8; emu_ip = 0x0656; emu_last_cs = 0x3FF1; emu_last_ip = 0x01A2; emu_last_length = 0x0012; emu_last_crc = 0x85E5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__3FF1_01A8_001C_FA68()
 *
 * @name f__3FF1_01A8_001C_FA68
 * @implements 3FF1:01A8:001C:FA68 ()
 *
 * Called From: 3FF1:019C:0012:85E5
 */
void f__3FF1_01A8_001C_FA68()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671F));
	emu_movb(&emu_ax.h, 0x0);
	emu_subw(&emu_ax.x, 0x7);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x5);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x01CC; emu_last_cs = 0x3FF1; emu_last_ip = 0x01BB; emu_last_length = 0x001C; emu_last_crc = 0xFA68; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3D0);
	switch (emu_ip) {
		case 0x01C4: f__3FF1_01C4_0008_D7AA(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x3FF1; emu_last_ip = 0x01BF; emu_last_length = 0x001C; emu_last_crc = 0xFA68;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__3FF1_01C4_0008_D7AA()
 *
 * @name f__3FF1_01C4_0008_D7AA
 * @implements 3FF1:01C4:0008:D7AA ()
 *
 * Called From: 3FF1:01BF:001C:FA68
 */
void f__3FF1_01C4_0008_D7AA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	f__3FF1_01E7_0016_BC52(); return;
}

/**
 * Decompiled function f__3FF1_01E7_0016_BC52()
 *
 * @name f__3FF1_01E7_0016_BC52
 * @implements 3FF1:01E7:0016:BC52 ()
 *
 * Called From: 3FF1:01CA:0008:D7AA
 */
void f__3FF1_01E7_0016_BC52()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x671E));
	emu_movb(&emu_ax.h, 0x0);
	emu_subw(&emu_ax.x, 0x8);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { f__3FF1_0204_0002_03AC(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3C6);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x3FF1; emu_last_ip = 0x01F8; emu_last_length = 0x0016; emu_last_crc = 0xBC52;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__3FF1_0204_0002_03AC()
 *
 * @name f__3FF1_0204_0002_03AC
 * @implements 3FF1:0204:0002:03AC ()
 *
 * Called From: 3FF1:01F4:0016:BC52
 */
void f__3FF1_0204_0002_03AC()
{
	f__3FF1_0206_0084_8807(); return;
}

/**
 * Decompiled function f__3FF1_0206_0084_8807()
 *
 * @name f__3FF1_0206_0084_8807
 * @implements 3FF1:0206:0084:8807 ()
 *
 * Called From: 3FF1:0204:0002:03AC
 */
void f__3FF1_0206_0084_8807()
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
	if (!emu_flags.zf) { f__3FF1_0273_0017_744F(); return; }
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
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x1DD7; emu_ip = 0x0625; emu_last_cs = 0x3FF1; emu_last_ip = 0x0285; emu_last_length = 0x0084; emu_last_crc = 0x8807; emu_call(); // Jump does not resolve
	f__3FF1_028A_0018_2FB0();
}

/**
 * Decompiled function f__3FF1_0273_0017_744F()
 *
 * @name f__3FF1_0273_0017_744F
 * @implements 3FF1:0273:0017:744F ()
 *
 * Called From: 3FF1:026C:0084:8807
 */
void f__3FF1_0273_0017_744F()
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
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x1DD7; f__1DD7_039B_0008_344E();
	f__3FF1_028A_0018_2FB0();
}

/**
 * Decompiled function f__3FF1_028A_0018_2FB0()
 *
 * @name f__3FF1_028A_0018_2FB0
 * @implements 3FF1:028A:0018:2FB0 ()
 *
 * Called From: 3FF1:028A:0017:744F
 */
void f__3FF1_028A_0018_2FB0()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x96));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x94));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C76));
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x25C4; f__25C4_000E_0019_2C31();
	f__3FF1_02A2_0032_22B2();
}

/**
 * Decompiled function f__3FF1_02A2_0032_22B2()
 *
 * @name f__3FF1_02A2_0032_22B2
 * @implements 3FF1:02A2:0032:22B2 ()
 *
 * Called From: 3FF1:02A2:0018:2FB0
 */
void f__3FF1_02A2_0032_22B2()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x02D7; emu_last_cs = 0x3FF1; emu_last_ip = 0x02A7; emu_last_length = 0x0032; emu_last_crc = 0x22B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C82), 0x353B);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C80), 0x20);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C88), 0x2528);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C86), 0x4);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x0642; f__0642_000C_001A_8CFF();
	emu_unknown_call();
}
