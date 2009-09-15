/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__25C4_000E_0019_2C31()
 *
 * @name f__25C4_000E_0019_2C31
 * @implements 25C4:000E:0019:2C31 ()
 *
 * Called From: 3FF1:029D:0018:2FB0
 * Called From: B480:029D:0018:2FB0
 */
void f__25C4_000E_0019_2C31()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_di);
	emu_cmpws(&emu_bx.x, 0x5);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0049; emu_last_cs = 0x25C4; emu_last_ip = 0x001E; emu_last_length = 0x0019; emu_last_crc = 0x2C31; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x410);
	switch (emu_ip) {
		case 0x002D: f__25C4_002D_0013_1968(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x0022; emu_last_length = 0x0019; emu_last_crc = 0x2C31;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__25C4_002D_0013_1968()
 *
 * @name f__25C4_002D_0013_1968
 * @implements 25C4:002D:0013:1968 ()
 *
 * Called From: 25C4:0022:0019:2C31
 */
void f__25C4_002D_0013_1968()
{
	emu_movw(&emu_ax.x, 0xFA00);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA000);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0040); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__25C4_0040_0005_1FC4();
}

/**
 * Decompiled function f__25C4_0040_0005_1FC4()
 *
 * @name f__25C4_0040_0005_1FC4
 * @implements 25C4:0040:0005:1FC4 ()
 *
 * Called From: 25C4:0040:0013:1968
 */
void f__25C4_0040_0005_1FC4()
{
	emu_addws(&emu_sp, 0x8);
	f__25C4_0049_000B_BD57(); return;
}

/**
 * Decompiled function f__25C4_0049_000B_BD57()
 *
 * @name f__25C4_0049_000B_BD57
 * @implements 25C4:0049:000B:BD57 ()
 *
 * Called From: 25C4:0043:0005:1FC4
 */
void f__25C4_0049_000B_BD57()
{
	emu_cmpws(&emu_di, 0x8);
	if (emu_flags.zf) { emu_ip = 0x00C1; emu_last_cs = 0x25C4; emu_last_ip = 0x004C; emu_last_length = 0x000B; emu_last_crc = 0xBD57; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_002F_0016_AA17();
	f__25C4_0054_0006_058E();
}

/**
 * Decompiled function f__25C4_0054_0006_058E()
 *
 * @name f__25C4_0054_0006_058E
 * @implements 25C4:0054:0006:058E ()
 *
 * Called From: 25C4:0054:000B:BD57
 */
void f__25C4_0054_0006_058E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x005A); emu_cs = 0x29A3; f__29A3_0224_0009_C96E();
	f__25C4_005A_0018_9A7C();
}

/**
 * Decompiled function f__25C4_005A_0018_9A7C()
 *
 * @name f__25C4_005A_0018_9A7C
 * @implements 25C4:005A:0018:9A7C ()
 *
 * Called From: 25C4:005A:0006:058E
 */
void f__25C4_005A_0018_9A7C()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6F22);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x6DB4));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x6DB2));
	emu_push(emu_cs); emu_push(0x0072); emu_cs = 0x22A3; f__22A3_000D_0010_0CEE();
	f__25C4_0072_0010_94FD();
}

/**
 * Decompiled function f__25C4_0072_0010_94FD()
 *
 * @name f__25C4_0072_0010_94FD
 * @implements 25C4:0072:0010:94FD ()
 *
 * Called From: 25C4:0072:0018:9A7C
 */
void f__25C4_0072_0010_94FD()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__25C4_00C1_0009_776F(); return; }
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0082); emu_cs = 0x263B; emu_ip = 0x00B1; emu_last_cs = 0x25C4; emu_last_ip = 0x007D; emu_last_length = 0x0010; emu_last_crc = 0x94FD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__25C4_00BE_0003_07F2()
 *
 * @name f__25C4_00BE_0003_07F2
 * @implements 25C4:00BE:0003:07F2 ()
 *
 * Called From: 25C4:03ED:0007:0728
 */
void f__25C4_00BE_0003_07F2()
{
	f__25C4_03F0_0006_137A(); return;
}

/**
 * Decompiled function f__25C4_00C1_0009_776F()
 *
 * @name f__25C4_00C1_0009_776F
 * @implements 25C4:00C1:0009:776F ()
 *
 * Called From: 25C4:0077:0010:94FD
 */
void f__25C4_00C1_0009_776F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!emu_flags.zf) { f__25C4_00CA_0010_7219(); return; }
	emu_ip = 0x01F7; emu_last_cs = 0x25C4; emu_last_ip = 0x00C7; emu_last_length = 0x0009; emu_last_crc = 0x776F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__25C4_00CA_0010_7219()
 *
 * @name f__25C4_00CA_0010_7219
 * @implements 25C4:00CA:0010:7219 ()
 *
 * Called From: 25C4:00C5:0009:776F
 */
void f__25C4_00CA_0010_7219()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_si, 0x2);
	f__25C4_016D_0008_F0B2(); return;
}

/**
 * Decompiled function f__25C4_00DA_0041_2D77()
 *
 * @name f__25C4_00DA_0041_2D77
 * @implements 25C4:00DA:0041:2D77 ()
 *
 * Called From: 25C4:0172:0008:F0B2
 * Called From: 25C4:0172:003F:57A7
 */
void f__25C4_00DA_0041_2D77()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD9));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD7));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addws(&emu_dx.x, 0xF);
	emu_adcw(&emu_ax.x, 0x0);
	emu_andws(&emu_dx.x, 0xF0);
	emu_andw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0xFF00);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { f__25C4_0136_003F_57A7(); return; }
	emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x3500; emu_ip = 0x013B; emu_last_cs = 0x25C4; emu_last_ip = 0x0116; emu_last_length = 0x0041; emu_last_crc = 0x2D77; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__25C4_0136_003F_57A7()
 *
 * @name f__25C4_0136_003F_57A7
 * @implements 25C4:0136:003F:57A7 ()
 *
 * Called From: 25C4:0114:0041:2D77
 */
void f__25C4_0136_003F_57A7()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD7), emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_addws(&emu_si, 0x2);
	emu_cmpws(&emu_si, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__25C4_0175_0012_B434(); return; }
	f__25C4_00DA_0041_2D77(); return;
}

/**
 * Decompiled function f__25C4_016D_0008_F0B2()
 *
 * @name f__25C4_016D_0008_F0B2
 * @implements 25C4:016D:0008:F0B2 ()
 *
 * Called From: 25C4:00D7:0010:7219
 */
void f__25C4_016D_0008_F0B2()
{
	emu_cmpws(&emu_si, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0175; emu_last_cs = 0x25C4; emu_last_ip = 0x0170; emu_last_length = 0x0008; emu_last_crc = 0xF0B2; emu_call(); return; } // Jump does not resolve
	f__25C4_00DA_0041_2D77(); return;
}

/**
 * Decompiled function f__25C4_0175_0012_B434()
 *
 * @name f__25C4_0175_0012_B434
 * @implements 25C4:0175:0012:B434 ()
 *
 * Called From: 25C4:0170:003F:57A7
 */
void f__25C4_0175_0012_B434()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x670F));
	emu_orw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__25C4_0187_000E_44C6();
}

/**
 * Decompiled function f__25C4_0187_000E_44C6()
 *
 * @name f__25C4_0187_000E_44C6
 * @implements 25C4:0187:000E:44C6 ()
 *
 * Called From: 25C4:0187:0012:B434
 */
void f__25C4_0187_000E_44C6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_si, 0x2);
	f__25C4_01F0_0007_7DDA(); return;
}

/**
 * Decompiled function f__25C4_0195_003F_551D()
 *
 * @name f__25C4_0195_003F_551D
 * @implements 25C4:0195:003F:551D ()
 *
 * Called From: 25C4:01F3:0007:7DDA
 * Called From: 25C4:01F3:000A:FFD9
 * Called From: 25C4:01F3:0012:FE81
 */
void f__25C4_0195_003F_551D()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	if (emu_flags.zf) { f__25C4_01ED_000A_FFD9(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6C95), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x6C93), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01D4); emu_cs = 0x01F7; f__01F7_05F0_0010_2A38();
	f__25C4_01D4_0011_3135();
}

/**
 * Decompiled function f__25C4_01D4_0011_3135()
 *
 * @name f__25C4_01D4_0011_3135
 * @implements 25C4:01D4:0011:3135 ()
 *
 * Called From: 25C4:01D4:003F:551D
 */
void f__25C4_01D4_0011_3135()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01E5); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__25C4_01E5_0012_FE81();
}

/**
 * Decompiled function f__25C4_01E5_0012_FE81()
 *
 * @name f__25C4_01E5_0012_FE81
 * @implements 25C4:01E5:0012:FE81 ()
 *
 * Called From: 25C4:01E5:0011:3135
 */
void f__25C4_01E5_0012_FE81()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_addws(&emu_si, 0x2);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__25C4_0195_003F_551D(); return; }
	emu_ip = 0x0252; emu_last_cs = 0x25C4; emu_last_ip = 0x01F5; emu_last_length = 0x0012; emu_last_crc = 0xFE81; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__25C4_01ED_000A_FFD9()
 *
 * @name f__25C4_01ED_000A_FFD9
 * @implements 25C4:01ED:000A:FFD9 ()
 *
 * Called From: 25C4:01A3:003F:551D
 */
void f__25C4_01ED_000A_FFD9()
{
	emu_addws(&emu_si, 0x2);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__25C4_0195_003F_551D(); return; }
	f__25C4_0252_000E_3F80(); return;
}

/**
 * Decompiled function f__25C4_01F0_0007_7DDA()
 *
 * @name f__25C4_01F0_0007_7DDA
 * @implements 25C4:01F0:0007:7DDA ()
 *
 * Called From: 25C4:0193:000E:44C6
 */
void f__25C4_01F0_0007_7DDA()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__25C4_0195_003F_551D(); return; }
	emu_ip = 0x0252; emu_last_cs = 0x25C4; emu_last_ip = 0x01F5; emu_last_length = 0x0007; emu_last_crc = 0x7DDA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__25C4_0252_000E_3F80()
 *
 * @name f__25C4_0252_000E_3F80
 * @implements 25C4:0252:000E:3F80 ()
 *
 * Called From: 25C4:01F5:000A:FFD9
 */
void f__25C4_0252_000E_3F80()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_cmpws(&emu_bx.x, 0x8);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x02BE; emu_last_cs = 0x25C4; emu_last_ip = 0x0257; emu_last_length = 0x000E; emu_last_crc = 0x3F80; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3FE);
	switch (emu_ip) {
		case 0x02B7: f__25C4_02B7_0005_10E2(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x025B; emu_last_length = 0x000E; emu_last_crc = 0x3F80;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__25C4_0263_0008_EFBA()
 *
 * @name f__25C4_0263_0008_EFBA
 * @implements 25C4:0263:0008:EFBA ()
 *
 * Called From: 25C4:02BA:0005:10E2
 */
void f__25C4_0263_0008_EFBA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C95), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C93), emu_ax.x);
	f__25C4_02BE_000F_4675(); return;
}

/**
 * Decompiled function f__25C4_02B7_0005_10E2()
 *
 * @name f__25C4_02B7_0005_10E2
 * @implements 25C4:02B7:0005:10E2 ()
 *
 * Called From: 25C4:025B:000E:3F80
 */
void f__25C4_02B7_0005_10E2()
{
	emu_movw(&emu_ax.x, 0xA000);
	f__25C4_0263_0008_EFBA(); return;
}

/**
 * Decompiled function f__25C4_02BE_000F_4675()
 *
 * @name f__25C4_02BE_000F_4675
 * @implements 25C4:02BE:000F:4675 ()
 *
 * Called From: 25C4:0269:0008:EFBA
 */
void f__25C4_02BE_000F_4675()
{
	emu_cmpws(&emu_di, 0x8);
	if (emu_flags.zf) { emu_ip = 0x0335; emu_last_cs = 0x25C4; emu_last_ip = 0x02C1; emu_last_length = 0x000F; emu_last_crc = 0x4675; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x02CD);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_3851(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x02C8; emu_last_length = 0x000F; emu_last_crc = 0x4675;
			emu_call();
			return;
	}
	f__25C4_02CD_0013_E58A();
}

/**
 * Decompiled function f__25C4_02CD_0013_E58A()
 *
 * @name f__25C4_02CD_0013_E58A
 * @implements 25C4:02CD:0013:E58A ()
 *
 * Called From: 25C4:02CD:000F:4675
 */
void f__25C4_02CD_0013_E58A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { emu_ip = 0x0335; emu_last_cs = 0x25C4; emu_last_ip = 0x02D3; emu_last_length = 0x0013; emu_last_crc = 0xE58A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x256D; f__256D_0004_001C_37ED();
	f__25C4_02E0_001B_5F58();
}

/**
 * Decompiled function f__25C4_02E0_001B_5F58()
 *
 * @name f__25C4_02E0_001B_5F58
 * @implements 25C4:02E0:001B:5F58 ()
 *
 * Called From: 25C4:02E0:0013:E58A
 */
void f__25C4_02E0_001B_5F58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x660F), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6611), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660F));
	if (!emu_flags.zf) { f__25C4_0326_000D_E600(); return; }
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02FB); emu_cs = 0x263B; emu_ip = 0x032A; emu_last_cs = 0x25C4; emu_last_ip = 0x02F6; emu_last_length = 0x001B; emu_last_crc = 0x5F58; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__25C4_0326_000D_E600()
 *
 * @name f__25C4_0326_000D_E600
 * @implements 25C4:0326:000D:E600 ()
 *
 * Called From: 25C4:02F0:001B:5F58
 */
void f__25C4_0326_000D_E600()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x2605; f__2605_000C_006D_4FAF();
	f__25C4_0333_0012_F629();
}

/**
 * Decompiled function f__25C4_0333_0012_F629()
 *
 * @name f__25C4_0333_0012_F629
 * @implements 25C4:0333:0012:F629 ()
 *
 * Called From: 25C4:0333:000D:E600
 */
void f__25C4_0333_0012_F629()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__25C4_0345_001B_8208();
}

/**
 * Decompiled function f__25C4_0345_001B_8208()
 *
 * @name f__25C4_0345_001B_8208
 * @implements 25C4:0345:001B:8208 ()
 *
 * Called From: 25C4:0345:0012:F629
 */
void f__25C4_0345_001B_8208()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6674), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6676), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_subws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x03C8; emu_last_cs = 0x25C4; emu_last_ip = 0x0357; emu_last_length = 0x001B; emu_last_crc = 0x8208; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x3F6);
	switch (emu_ip) {
		case 0x039C: f__25C4_039C_0018_D8BD(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x25C4; emu_last_ip = 0x035B; emu_last_length = 0x001B; emu_last_crc = 0x8208;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__25C4_039C_0018_D8BD()
 *
 * @name f__25C4_039C_0018_D8BD
 * @implements 25C4:039C:0018:D8BD ()
 *
 * Called From: 25C4:035B:001B:8208
 */
void f__25C4_039C_0018_D8BD()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_addw(&emu_ax.x, 0x2D);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__25C4_03B4_0010_3ACA();
}

/**
 * Decompiled function f__25C4_03B4_0010_3ACA()
 *
 * @name f__25C4_03B4_0010_3ACA
 * @implements 25C4:03B4:0010:3ACA ()
 *
 * Called From: 25C4:03B4:0018:D8BD
 */
void f__25C4_03B4_0010_3ACA()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__25C4_03C4_0004_04F4();
}

/**
 * Decompiled function f__25C4_03C4_0004_04F4()
 *
 * @name f__25C4_03C4_0004_04F4
 * @implements 25C4:03C4:0004:04F4 ()
 *
 * Called From: 25C4:03C4:0010:3ACA
 */
void f__25C4_03C4_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__25C4_03C8_0005_1316(); return;
}

/**
 * Decompiled function f__25C4_03C8_0005_1316()
 *
 * @name f__25C4_03C8_0005_1316
 * @implements 25C4:03C8:0005:1316 ()
 *
 * Called From: 25C4:03C6:0004:04F4
 */
void f__25C4_03C8_0005_1316()
{
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x2533; p__2533_000D_001C_DBFD();
	f__25C4_03CD_000B_036C();
}

/**
 * Decompiled function f__25C4_03CD_000B_036C()
 *
 * @name f__25C4_03CD_000B_036C
 * @implements 25C4:03CD:000B:036C ()
 *
 * Called From: 25C4:03CD:0005:1316
 */
void f__25C4_03CD_000B_036C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x03D8); emu_cs = 0x01F7; f__01F7_103F_0010_38BE();
	f__25C4_03D8_0008_7C66();
}

/**
 * Decompiled function f__25C4_03D8_0008_7C66()
 *
 * @name f__25C4_03D8_0008_7C66
 * @implements 25C4:03D8:0008:7C66 ()
 *
 * Called From: 25C4:03D8:000B:036C
 */
void f__25C4_03D8_0008_7C66()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E0); emu_cs = 0x01F7; f__01F7_07D4_0011_EC70();
	f__25C4_03E0_0009_E4F6();
}

/**
 * Decompiled function f__25C4_03E0_0009_E4F6()
 *
 * @name f__25C4_03E0_0009_E4F6
 * @implements 25C4:03E0:0009:E4F6 ()
 *
 * Called From: 25C4:03E0:0008:7C66
 */
void f__25C4_03E0_0009_E4F6()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__25C4_03E9_0007_0728();
}

/**
 * Decompiled function f__25C4_03E9_0007_0728()
 *
 * @name f__25C4_03E9_0007_0728
 * @implements 25C4:03E9:0007:0728 ()
 *
 * Called From: 25C4:03E9:0009:E4F6
 */
void f__25C4_03E9_0007_0728()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__25C4_00BE_0003_07F2(); return;
}

/**
 * Decompiled function f__25C4_03F0_0006_137A()
 *
 * @name f__25C4_03F0_0006_137A
 * @implements 25C4:03F0:0006:137A ()
 *
 * Called From: 25C4:00BE:0003:07F2
 */
void f__25C4_03F0_0006_137A()
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
