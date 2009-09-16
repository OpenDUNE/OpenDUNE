/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E9_0000_0013_DC68()
 *
 * @name f__B4E9_0000_0013_DC68
 * @implements B4E9:0000:0013:DC68 ()
 *
 * Called From: 34E9:0020:0005:0000
 * Called From: B4E9:00BA:000B:15E3
 * Called From: B4E9:026A:0008:1572
 * Called From: B4E9:02D4:0009:1570
 * Called From: B4E9:02D4:0008:955C
 * Called From: B4E9:03B7:000A:2956
 * Called From: B4E9:03C9:0009:B9A3
 */
void f__B4E9_0000_0013_DC68()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4E9_0015_0009_A588(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0013); emu_cs = 0x2618; f__2618_0008_001B_FAA6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0013_0002_C4BA();
}

/**
 * Decompiled function f__B4E9_0013_0002_C4BA()
 *
 * @name f__B4E9_0013_0002_C4BA
 * @implements B4E9:0013:0002:C4BA ()
 *
 * Called From: B4E9:0013:0013:DC68
 */
void f__B4E9_0013_0002_C4BA()
{
	f__B4E9_001E_0007_43C2(); return;
}

/**
 * Decompiled function f__B4E9_0015_0009_A588()
 *
 * @name f__B4E9_0015_0009_A588
 * @implements B4E9:0015:0009:A588 ()
 *
 * Called From: B4E9:0008:0013:DC68
 */
void f__B4E9_0015_0009_A588()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001E); emu_cs = 0x2618; f__2618_003F_001B_FAA6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_001E_0007_43C2();
}

/**
 * Decompiled function f__B4E9_001E_0007_43C2()
 *
 * @name f__B4E9_001E_0007_43C2
 * @implements B4E9:001E:0007:43C2 ()
 *
 * Called From: B4E9:0013:0002:C4BA
 * Called From: B4E9:001E:0009:A588
 */
void f__B4E9_001E_0007_43C2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B4E9_0025_0003_2E57(); return;
}

/**
 * Decompiled function f__B4E9_0025_0003_2E57()
 *
 * @name f__B4E9_0025_0003_2E57
 * @implements B4E9:0025:0003:2E57 ()
 *
 * Called From: B4E9:0023:0007:43C2
 */
void f__B4E9_0025_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E9_0028_0013_DF68()
 *
 * @name f__B4E9_0028_0013_DF68
 * @implements B4E9:0028:0013:DF68 ()
 *
 * Called From: 34E9:0025:0005:0000
 */
void f__B4E9_0028_0013_DF68()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x003D; emu_last_cs = 0xB4E9; emu_last_ip = 0x0030; emu_last_length = 0x0013; emu_last_crc = 0xDF68; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x2618; f__2618_0008_001B_FAA6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_003B_0002_C4BA();
}

/**
 * Decompiled function f__B4E9_003B_0002_C4BA()
 *
 * @name f__B4E9_003B_0002_C4BA
 * @implements B4E9:003B:0002:C4BA ()
 *
 * Called From: B4E9:003B:0013:DF68
 */
void f__B4E9_003B_0002_C4BA()
{
	f__B4E9_0046_0007_43C2(); return;
}

/**
 * Decompiled function f__B4E9_0046_0007_43C2()
 *
 * @name f__B4E9_0046_0007_43C2
 * @implements B4E9:0046:0007:43C2 ()
 *
 * Called From: B4E9:003B:0002:C4BA
 */
void f__B4E9_0046_0007_43C2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	f__B4E9_004D_0003_2E57(); return;
}

/**
 * Decompiled function f__B4E9_004D_0003_2E57()
 *
 * @name f__B4E9_004D_0003_2E57
 * @implements B4E9:004D:0003:2E57 ()
 *
 * Called From: B4E9:004B:0007:43C2
 */
void f__B4E9_004D_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E9_0050_003F_292A()
 *
 * @name f__B4E9_0050_003F_292A
 * @implements B4E9:0050:003F:292A ()
 *
 * Called From: 34E9:002A:0005:0000
 */
void f__B4E9_0050_003F_292A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { f__B4E9_006C_0023_EC45(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__B4E9_006C_0023_EC45(); return; }
	emu_movw(&emu_si, 0x4);
	emu_cmpws(&emu_si, 0x4);
	if (!emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0xB4E9; emu_last_ip = 0x006F; emu_last_length = 0x003F; emu_last_crc = 0x292A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0xB4E9; emu_last_ip = 0x0078; emu_last_length = 0x003F; emu_last_crc = 0x292A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; emu_ip = 0x008F; emu_last_cs = 0xB4E9; emu_last_ip = 0x008A; emu_last_length = 0x003F; emu_last_crc = 0x292A; emu_call(); // Jump does not resolve
	f__B4E9_008F_0023_2EF9();
}

/**
 * Decompiled function f__B4E9_006C_0023_EC45()
 *
 * @name f__B4E9_006C_0023_EC45
 * @implements B4E9:006C:0023:EC45 ()
 *
 * Called From: B4E9:005E:003F:292A
 * Called From: B4E9:0067:003F:292A
 */
void f__B4E9_006C_0023_EC45()
{
	emu_cmpws(&emu_si, 0x4);
	if (!emu_flags.zf) { f__B4E9_0086_0009_542B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__B4E9_0086_0009_542B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; emu_ip = 0x008F; emu_last_cs = 0xB4E9; emu_last_ip = 0x008A; emu_last_length = 0x0023; emu_last_crc = 0xEC45; emu_call(); // Jump does not resolve
	f__B4E9_008F_0023_2EF9();
}

/**
 * Decompiled function f__B4E9_0086_0009_542B()
 *
 * @name f__B4E9_0086_0009_542B
 * @implements B4E9:0086:0009:542B ()
 *
 * Called From: B4E9:006F:0023:EC45
 * Called From: B4E9:0078:0023:EC45
 */
void f__B4E9_0086_0009_542B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_008F_0023_2EF9();
}

/**
 * Decompiled function f__B4E9_008F_0023_2EF9()
 *
 * @name f__B4E9_008F_0023_2EF9
 * @implements B4E9:008F:0023:2EF9 ()
 *
 * Called From: B4E9:008F:0009:542B
 */
void f__B4E9_008F_0023_2EF9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), emu_si);
	if (!emu_flags.zf) { f__B4E9_00B2_000B_15E3(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x18), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00B2; emu_last_cs = 0xB4E9; emu_last_ip = 0x00AD; emu_last_length = 0x0023; emu_last_crc = 0x2EF9; emu_call(); return; } // Jump does not resolve
	f__B4E9_031E_0008_1199(); return;
}

/**
 * Decompiled function f__B4E9_00B2_000B_15E3()
 *
 * @name f__B4E9_00B2_000B_15E3
 * @implements B4E9:00B2:000B:15E3 ()
 *
 * Called From: B4E9:0097:0023:2EF9
 */
void f__B4E9_00B2_000B_15E3()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00BD); f__B4E9_0000_0013_DC68();
	f__B4E9_00BD_001D_7A58();
}

/**
 * Decompiled function f__B4E9_00BD_001D_7A58()
 *
 * @name f__B4E9_00BD_001D_7A58
 * @implements B4E9:00BD:001D:7A58 ()
 *
 * Called From: B4E9:00BD:000B:15E3
 */
void f__B4E9_00BD_001D_7A58()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A10), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B8), 0x1);
	emu_movw(&emu_bx.x, emu_di);
	emu_cmpws(&emu_bx.x, 0x4);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4E9_0133_0002_C03A(); return; }
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x33B);
	switch (emu_ip) {
		case 0x00DA: f__B4E9_00DA_0009_049C(); return;
		case 0x00E4: f__B4E9_00E4_0015_9971(); return;
		case 0x00FE: f__B4E9_00FE_0024_BE26(); return;
		case 0x0133: f__B4E9_0133_0002_C03A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E9; emu_last_ip = 0x00D5; emu_last_length = 0x001D; emu_last_crc = 0x7A58;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E9_00DA_0009_049C()
 *
 * @name f__B4E9_00DA_0009_049C
 * @implements B4E9:00DA:0009:049C ()
 *
 * Called From: B4E9:00D5:001D:7A58
 */
void f__B4E9_00DA_0009_049C()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_00E3_0016_FD70();
}

/**
 * Decompiled function f__B4E9_00E3_0016_FD70()
 *
 * @name f__B4E9_00E3_0016_FD70
 * @implements B4E9:00E3:0016:FD70 ()
 *
 * Called From: B4E9:00E3:0009:049C
 */
void f__B4E9_00E3_0016_FD70()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A36), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00F9); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_00F9_0005_9F6E();
}

/**
 * Decompiled function f__B4E9_00E4_0015_9971()
 *
 * @name f__B4E9_00E4_0015_9971
 * @implements B4E9:00E4:0015:9971 ()
 *
 * Called From: B4E9:00D5:001D:7A58
 */
void f__B4E9_00E4_0015_9971()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A36), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00F9); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_00F9_0005_9F6E();
}

/**
 * Decompiled function f__B4E9_00F9_0005_9F6E()
 *
 * @name f__B4E9_00F9_0005_9F6E
 * @implements B4E9:00F9:0005:9F6E ()
 *
 * Called From: B4E9:00F9:0015:9971
 * Called From: B4E9:00F9:0016:FD70
 */
void f__B4E9_00F9_0005_9F6E()
{
	emu_addws(&emu_sp, 0x6);
	f__B4E9_0135_0040_197F(); return;
}

/**
 * Decompiled function f__B4E9_00FE_0024_BE26()
 *
 * @name f__B4E9_00FE_0024_BE26
 * @implements B4E9:00FE:0024:BE26 ()
 *
 * Called From: B4E9:00D5:001D:7A58
 */
void f__B4E9_00FE_0024_BE26()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__B4E9_0131_0002_C13A(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0131; emu_last_cs = 0xB4E9; emu_last_ip = 0x010A; emu_last_length = 0x0024; emu_last_crc = 0xBE26; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x1);
	if (emu_flags.zf) { f__B4E9_0131_0002_C13A(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x34CD; ovl__34CD(22);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0122_0011_1179();
}

/**
 * Decompiled function f__B4E9_0122_0011_1179()
 *
 * @name f__B4E9_0122_0011_1179
 * @implements B4E9:0122:0011:1179 ()
 *
 * Called From: B4E9:0122:0024:BE26
 */
void f__B4E9_0122_0011_1179()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	f__B4E9_0135_0040_197F(); return;
}

/**
 * Decompiled function f__B4E9_0131_0002_C13A()
 *
 * @name f__B4E9_0131_0002_C13A
 * @implements B4E9:0131:0002:C13A ()
 *
 * Called From: B4E9:0105:0024:BE26
 * Called From: B4E9:010F:0024:BE26
 */
void f__B4E9_0131_0002_C13A()
{
	f__B4E9_0135_0040_197F(); return;
}

/**
 * Decompiled function f__B4E9_0133_0002_C03A()
 *
 * @name f__B4E9_0133_0002_C03A
 * @implements B4E9:0133:0002:C03A ()
 *
 * Called From: B4E9:00D1:001D:7A58
 * Called From: B4E9:00D5:001D:7A58
 */
void f__B4E9_0133_0002_C03A()
{
	f__B4E9_0135_0040_197F(); return;
}

/**
 * Decompiled function f__B4E9_0135_0040_197F()
 *
 * @name f__B4E9_0135_0040_197F
 * @implements B4E9:0135:0040:197F ()
 *
 * Called From: B4E9:00FC:0005:9F6E
 * Called From: B4E9:0131:0002:C13A
 * Called From: B4E9:0131:0011:1179
 * Called From: B4E9:0133:0002:C03A
 */
void f__B4E9_0135_0040_197F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { f__B4E9_0176_0018_CEC4(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x0);
	if (emu_flags.zf) { f__B4E9_0176_0018_CEC4(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A14), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x10E4; f__10E4_2099_0012_A216();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0175_0019_4EE8();
}

/**
 * Decompiled function f__B4E9_0175_0019_4EE8()
 *
 * @name f__B4E9_0175_0019_4EE8
 * @implements B4E9:0175:0019:4EE8 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:0175:0040:197F
 */
void f__B4E9_0175_0019_4EE8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x018E); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_018E_0017_E657();
}

/**
 * Decompiled function f__B4E9_0176_0018_CEC4()
 *
 * @name f__B4E9_0176_0018_CEC4
 * @implements B4E9:0176:0018:CEC4 ()
 *
 * Called From: B4E9:0149:0040:197F
 * Called From: B4E9:015F:0040:197F
 */
void f__B4E9_0176_0018_CEC4()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x018E); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_018E_0017_E657();
}

/**
 * Decompiled function f__B4E9_018E_0017_E657()
 *
 * @name f__B4E9_018E_0017_E657
 * @implements B4E9:018E:0017:E657 ()
 *
 * Called From: B4E9:018E:0018:CEC4
 * Called From: B4E9:018E:0019:4EE8
 */
void f__B4E9_018E_0017_E657()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D5D), 0x0);
	if (emu_flags.zf) { f__B4E9_01A8_0007_36B5(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x10E4; emu_ip = 0x0724; emu_last_cs = 0xB4E9; emu_last_ip = 0x01A0; emu_last_length = 0x0017; emu_last_crc = 0xE657; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4E9_01A8_0007_36B5()
 *
 * @name f__B4E9_01A8_0007_36B5
 * @implements B4E9:01A8:0007:36B5 ()
 *
 * Called From: B4E9:0194:0017:E657
 */
void f__B4E9_01A8_0007_36B5()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E9_01AF_002D_29DB(); return; }
	f__B4E9_0252_000C_F767(); return;
}

/**
 * Decompiled function f__B4E9_01AF_002D_29DB()
 *
 * @name f__B4E9_01AF_002D_29DB
 * @implements B4E9:01AF:002D:29DB ()
 *
 * Called From: B4E9:01AA:0007:36B5
 */
void f__B4E9_01AF_002D_29DB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__B4E9_0235_0015_2C39(); return;
}

/**
 * Decompiled function f__B4E9_01DC_002D_A3B3()
 *
 * @name f__B4E9_01DC_002D_A3B3
 * @implements B4E9:01DC:002D:A3B3 ()
 *
 * Called From: B4E9:023B:0015:2C39
 * Called From: B4E9:023B:0027:798D
 */
void f__B4E9_01DC_002D_A3B3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0209); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0209_001A_4ABF();
}

/**
 * Decompiled function f__B4E9_0209_001A_4ABF()
 *
 * @name f__B4E9_0209_001A_4ABF
 * @implements B4E9:0209:001A:4ABF ()
 *
 * Called From: B4E9:0209:002D:A3B3
 */
void f__B4E9_0209_001A_4ABF()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B4E9_0218_000B_74F4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0xF7);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0223); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0223_0027_798D();
}

/**
 * Decompiled function f__B4E9_0218_000B_74F4()
 *
 * @name f__B4E9_0218_000B_74F4
 * @implements B4E9:0218:000B:74F4 ()
 *
 * Called From: B4E9:020E:001A:4ABF
 */
void f__B4E9_0218_000B_74F4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0223); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0223_0027_798D();
}

/**
 * Decompiled function f__B4E9_0223_0027_798D()
 *
 * @name f__B4E9_0223_0027_798D
 * @implements B4E9:0223:0027:798D ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:0223:001A:4ABF
 * Called From: B4E9:0223:000B:74F4
 */
void f__B4E9_0223_0027_798D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4E9_01DC_002D_A3B3(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_024A_0014_DFB3();
}

/**
 * Decompiled function f__B4E9_0235_0015_2C39()
 *
 * @name f__B4E9_0235_0015_2C39
 * @implements B4E9:0235:0015:2C39 ()
 *
 * Called From: B4E9:01DA:002D:29DB
 */
void f__B4E9_0235_0015_2C39()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4E9_01DC_002D_A3B3(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x348B; emu_ip = 0x028D; emu_last_cs = 0xB4E9; emu_last_ip = 0x0245; emu_last_length = 0x0015; emu_last_crc = 0x2C39; emu_call(); // Jump does not resolve
	f__B4E9_024A_0014_DFB3();
}

/**
 * Decompiled function f__B4E9_024A_0014_DFB3()
 *
 * @name f__B4E9_024A_0014_DFB3
 * @implements B4E9:024A:0014:DFB3 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:024A:0027:798D
 */
void f__B4E9_024A_0014_DFB3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_cmpws(&emu_bx.x, 0x4);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4E9_025E_0007_29B2(); return; }
	f__B4E9_031C_0002_C03A(); return;
}

/**
 * Decompiled function f__B4E9_0252_000C_F767()
 *
 * @name f__B4E9_0252_000C_F767
 * @implements B4E9:0252:000C:F767 ()
 *
 * Called From: B4E9:01AC:0007:36B5
 */
void f__B4E9_0252_000C_F767()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	emu_cmpws(&emu_bx.x, 0x4);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4E9_025E_0007_29B2(); return; }
	emu_ip = 0x031C; emu_last_cs = 0xB4E9; emu_last_ip = 0x025B; emu_last_length = 0x000C; emu_last_crc = 0xF767; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E9_025E_0007_29B2()
 *
 * @name f__B4E9_025E_0007_29B2
 * @implements B4E9:025E:0007:29B2 ()
 *
 * Called From: B4E9:0259:000C:F767
 * Called From: B4E9:0259:0014:DFB3
 */
void f__B4E9_025E_0007_29B2()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x331);
	switch (emu_ip) {
		case 0x0265: f__B4E9_0265_0008_1572(); return;
		case 0x027B: f__B4E9_027B_000F_7A73(); return;
		case 0x0293: f__B4E9_0293_000B_C287(); return;
		case 0x02C5: f__B4E9_02C5_0009_EC55(); return;
		case 0x02D9: f__B4E9_02D9_0025_A3BA(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E9; emu_last_ip = 0x0260; emu_last_length = 0x0007; emu_last_crc = 0x29B2;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E9_0265_0008_1572()
 *
 * @name f__B4E9_0265_0008_1572
 * @implements B4E9:0265:0008:1572 ()
 *
 * Called From: B4E9:0260:0007:29B2
 */
void f__B4E9_0265_0008_1572()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs);
	emu_push(0x026D); f__B4E9_0000_0013_DC68();
	f__B4E9_026D_000A_FA15();
}

/**
 * Decompiled function f__B4E9_026D_000A_FA15()
 *
 * @name f__B4E9_026D_000A_FA15
 * @implements B4E9:026D:000A:FA15 ()
 *
 * Called From: B4E9:026D:0008:1572
 */
void f__B4E9_026D_000A_FA15()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0277_0004_4D0D();
}

/**
 * Decompiled function f__B4E9_0277_0004_4D0D()
 *
 * @name f__B4E9_0277_0004_4D0D
 * @implements B4E9:0277:0004:4D0D ()
 *
 * Called From: B4E9:0277:000A:FA15
 * Called From: B4E9:02D7:0002:8F3A
 * Called From: B4E9:0319:0003:A2B6
 */
void f__B4E9_0277_0004_4D0D()
{
	emu_pop(&emu_cx.x);
	f__B4E9_031E_0008_1199(); return;
}

/**
 * Decompiled function f__B4E9_027B_000F_7A73()
 *
 * @name f__B4E9_027B_000F_7A73
 * @implements B4E9:027B:000F:7A73 ()
 *
 * Called From: B4E9:0260:0007:29B2
 */
void f__B4E9_027B_000F_7A73()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F0), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_028A_0009_10CA();
}

/**
 * Decompiled function f__B4E9_028A_0009_10CA()
 *
 * @name f__B4E9_028A_0009_10CA
 * @implements B4E9:028A:0009:10CA ()
 *
 * Called From: B4E9:028A:000F:7A73
 */
void f__B4E9_028A_0009_10CA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A36), 0x5);
	f__B4E9_02CF_0008_955C(); return;
}

/**
 * Decompiled function f__B4E9_0293_000B_C287()
 *
 * @name f__B4E9_0293_000B_C287
 * @implements B4E9:0293:000B:C287 ()
 *
 * Called From: B4E9:0260:0007:29B2
 */
void f__B4E9_0293_000B_C287()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x029E); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_029E_000B_DA1E();
}

/**
 * Decompiled function f__B4E9_029E_000B_DA1E()
 *
 * @name f__B4E9_029E_000B_DA1E
 * @implements B4E9:029E:000B:DA1E ()
 *
 * Called From: B4E9:029E:000B:C287
 */
void f__B4E9_029E_000B_DA1E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A9); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02A9_001A_E38F();
}

/**
 * Decompiled function f__B4E9_02A9_001A_E38F()
 *
 * @name f__B4E9_02A9_001A_E38F
 * @implements B4E9:02A9:001A:E38F ()
 *
 * Called From: B4E9:02A9:000B:DA1E
 */
void f__B4E9_02A9_001A_E38F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x0F78; f__0F78_0285_001C_04DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02C3_0002_C4BA();
}

/**
 * Decompiled function f__B4E9_02C3_0002_C4BA()
 *
 * @name f__B4E9_02C3_0002_C4BA
 * @implements B4E9:02C3:0002:C4BA ()
 *
 * Called From: B4E9:02C3:001A:E38F
 */
void f__B4E9_02C3_0002_C4BA()
{
	f__B4E9_02CE_0009_1570(); return;
}

/**
 * Decompiled function f__B4E9_02C5_0009_EC55()
 *
 * @name f__B4E9_02C5_0009_EC55
 * @implements B4E9:02C5:0009:EC55 ()
 *
 * Called From: B4E9:0260:0007:29B2
 */
void f__B4E9_02C5_0009_EC55()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CE); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02CE_0009_1570();
}

/**
 * Decompiled function f__B4E9_02CE_0009_1570()
 *
 * @name f__B4E9_02CE_0009_1570
 * @implements B4E9:02CE:0009:1570 ()
 *
 * Called From: B4E9:02C3:0002:C4BA
 * Called From: B4E9:02CE:0009:EC55
 */
void f__B4E9_02CE_0009_1570()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs);
	emu_push(0x02D7); f__B4E9_0000_0013_DC68();
	f__B4E9_02D7_0002_8F3A();
}

/**
 * Decompiled function f__B4E9_02CF_0008_955C()
 *
 * @name f__B4E9_02CF_0008_955C
 * @implements B4E9:02CF:0008:955C ()
 *
 * Called From: B4E9:0291:0009:10CA
 */
void f__B4E9_02CF_0008_955C()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37AA));
	emu_push(emu_cs);
	emu_push(0x02D7); f__B4E9_0000_0013_DC68();
	f__B4E9_02D7_0002_8F3A();
}

/**
 * Decompiled function f__B4E9_02D7_0002_8F3A()
 *
 * @name f__B4E9_02D7_0002_8F3A
 * @implements B4E9:02D7:0002:8F3A ()
 *
 * Called From: B4E9:02D7:0009:1570
 * Called From: B4E9:02D7:0008:955C
 */
void f__B4E9_02D7_0002_8F3A()
{
	f__B4E9_0277_0004_4D0D(); return;
}

/**
 * Decompiled function f__B4E9_02D9_0025_A3BA()
 *
 * @name f__B4E9_02D9_0025_A3BA
 * @implements B4E9:02D9:0025:A3BA ()
 *
 * Called From: B4E9:0260:0007:29B2
 */
void f__B4E9_02D9_0025_A3BA()
{
	emu_cmpws(&emu_di, 0x7);
	if (emu_flags.zf) { f__B4E9_0301_0018_CEC4(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02FE); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_02FE_001B_9FD0();
}

/**
 * Decompiled function f__B4E9_02FE_001B_9FD0()
 *
 * @name f__B4E9_02FE_001B_9FD0
 * @implements B4E9:02FE:001B:9FD0 ()
 *
 * Called From: B4E9:02FE:0025:A3BA
 */
void f__B4E9_02FE_001B_9FD0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0319); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0319_0003_A2B6();
}

/**
 * Decompiled function f__B4E9_0301_0018_CEC4()
 *
 * @name f__B4E9_0301_0018_CEC4
 * @implements B4E9:0301:0018:CEC4 ()
 *
 * Called From: B4E9:02DC:0025:A3BA
 */
void f__B4E9_0301_0018_CEC4()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0319); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0319_0003_A2B6();
}

/**
 * Decompiled function f__B4E9_0319_0003_A2B6()
 *
 * @name f__B4E9_0319_0003_A2B6
 * @implements B4E9:0319:0003:A2B6 ()
 *
 * Called From: B4E9:0319:0018:CEC4
 * Called From: B4E9:0319:001B:9FD0
 */
void f__B4E9_0319_0003_A2B6()
{
	f__B4E9_0277_0004_4D0D(); return;
}

/**
 * Decompiled function f__B4E9_031C_0002_C03A()
 *
 * @name f__B4E9_031C_0002_C03A
 * @implements B4E9:031C:0002:C03A ()
 *
 * Called From: B4E9:025B:0014:DFB3
 */
void f__B4E9_031C_0002_C03A()
{
	f__B4E9_031E_0008_1199(); return;
}

/**
 * Decompiled function f__B4E9_031E_0008_1199()
 *
 * @name f__B4E9_031E_0008_1199
 * @implements B4E9:031E:0008:1199 ()
 *
 * Called From: B4E9:00AF:0023:2EF9
 * Called From: B4E9:0278:0004:4D0D
 * Called From: B4E9:031C:0002:C03A
 */
void f__B4E9_031E_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0326_0005_EAF1();
}

/**
 * Decompiled function f__B4E9_0326_0005_EAF1()
 *
 * @name f__B4E9_0326_0005_EAF1
 * @implements B4E9:0326:0005:EAF1 ()
 *
 * Called From: B4E9:0326:0008:1199
 */
void f__B4E9_0326_0005_EAF1()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4E9_032B_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4E9_032B_0006_F7CE()
 *
 * @name f__B4E9_032B_0006_F7CE
 * @implements B4E9:032B:0006:F7CE ()
 *
 * Called From: B4E9:0329:0005:EAF1
 */
void f__B4E9_032B_0006_F7CE()
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
 * Decompiled function f__B4E9_0345_0023_FA52()
 *
 * @name f__B4E9_0345_0023_FA52
 * @implements B4E9:0345:0023:FA52 ()
 *
 * Called From: 34E9:002F:0005:0000
 */
void f__B4E9_0345_0023_FA52()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0368); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0368_000C_4B79();
}

/**
 * Decompiled function f__B4E9_0368_000C_4B79()
 *
 * @name f__B4E9_0368_000C_4B79
 * @implements B4E9:0368:000C:4B79 ()
 *
 * Called From: B4E9:0368:0023:FA52
 */
void f__B4E9_0368_000C_4B79()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0374); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0374_000C_5509();
}

/**
 * Decompiled function f__B4E9_0374_000C_5509()
 *
 * @name f__B4E9_0374_000C_5509
 * @implements B4E9:0374:000C:5509 ()
 *
 * Called From: B4E9:0374:000C:4B79
 */
void f__B4E9_0374_000C_5509()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0380_0015_1E42();
}

/**
 * Decompiled function f__B4E9_0380_0015_1E42()
 *
 * @name f__B4E9_0380_0015_1E42
 * @implements B4E9:0380:0015:1E42 ()
 *
 * Called From: B4E9:0380:000C:5509
 */
void f__B4E9_0380_0015_1E42()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3810));
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0395_0006_2AFD();
}

/**
 * Decompiled function f__B4E9_0395_0006_2AFD()
 *
 * @name f__B4E9_0395_0006_2AFD
 * @implements B4E9:0395:0006:2AFD ()
 *
 * Called From: B4E9:0395:0015:1E42
 */
void f__B4E9_0395_0006_2AFD()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x039B); emu_cs = 0x34B8; ovl__34B8(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_039B_0015_7EAD();
}

/**
 * Decompiled function f__B4E9_039B_0015_7EAD()
 *
 * @name f__B4E9_039B_0015_7EAD
 * @implements B4E9:039B:0015:7EAD ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:039B:0006:2AFD
 */
void f__B4E9_039B_0015_7EAD()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03B0_000A_2956();
}

/**
 * Decompiled function f__B4E9_03B0_000A_2956()
 *
 * @name f__B4E9_03B0_000A_2956
 * @implements B4E9:03B0:000A:2956 ()
 *
 * Called From: B4E9:03B0:0015:7EAD
 */
void f__B4E9_03B0_000A_2956()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03BA); f__B4E9_0000_0013_DC68();
	f__B4E9_03BA_0009_EC47();
}

/**
 * Decompiled function f__B4E9_03BA_0009_EC47()
 *
 * @name f__B4E9_03BA_0009_EC47
 * @implements B4E9:03BA:0009:EC47 ()
 *
 * Called From: B4E9:03BA:000A:2956
 */
void f__B4E9_03BA_0009_EC47()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x34E0; ovl__34E0(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03C3_0009_B9A3();
}

/**
 * Decompiled function f__B4E9_03C3_0009_B9A3()
 *
 * @name f__B4E9_03C3_0009_B9A3
 * @implements B4E9:03C3:0009:B9A3 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4E9_03C3_0009_B9A3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03CC); f__B4E9_0000_0013_DC68();
	f__B4E9_03CC_000A_EDFF();
}

/**
 * Decompiled function f__B4E9_03CC_000A_EDFF()
 *
 * @name f__B4E9_03CC_000A_EDFF
 * @implements B4E9:03CC:000A:EDFF ()
 *
 * Called From: B4E9:03CC:0009:B9A3
 */
void f__B4E9_03CC_000A_EDFF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03D6_0015_3476();
}

/**
 * Decompiled function f__B4E9_03D6_0015_3476()
 *
 * @name f__B4E9_03D6_0015_3476
 * @implements B4E9:03D6:0015:3476 ()
 *
 * Called From: B4E9:03D6:000A:EDFF
 */
void f__B4E9_03D6_0015_3476()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03EB_0008_2C75();
}

/**
 * Decompiled function f__B4E9_03EB_0008_2C75()
 *
 * @name f__B4E9_03EB_0008_2C75
 * @implements B4E9:03EB:0008:2C75 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:03EB:0015:3476
 */
void f__B4E9_03EB_0008_2C75()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x03F3); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_03F3_000E_D57A();
}

/**
 * Decompiled function f__B4E9_03F3_000E_D57A()
 *
 * @name f__B4E9_03F3_000E_D57A
 * @implements B4E9:03F3:000E:D57A ()
 *
 * Called From: B4E9:03F3:0008:2C75
 */
void f__B4E9_03F3_000E_D57A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x10E4; f__10E4_2099_0012_A216();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0401_000D_0776();
}

/**
 * Decompiled function f__B4E9_0401_000D_0776()
 *
 * @name f__B4E9_0401_000D_0776
 * @implements B4E9:0401:000D:0776 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:0401:000E:D57A
 */
void f__B4E9_0401_000D_0776()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_040E_000B_70BA();
}

/**
 * Decompiled function f__B4E9_040E_000B_70BA()
 *
 * @name f__B4E9_040E_000B_70BA
 * @implements B4E9:040E:000B:70BA ()
 *
 * Called From: B4E9:040E:000D:0776
 */
void f__B4E9_040E_000B_70BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0419); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { ovl__34E9(0xFF); }
	f__B4E9_0419_0006_B1FB();
}

/**
 * Decompiled function f__B4E9_0419_0006_B1FB()
 *
 * @name f__B4E9_0419_0006_B1FB
 * @implements B4E9:0419:0006:B1FB ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E9:0419:000B:70BA
 */
void f__B4E9_0419_0006_B1FB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4E9_041F_0002_2597(); return;
}

/**
 * Decompiled function f__B4E9_041F_0002_2597()
 *
 * @name f__B4E9_041F_0002_2597
 * @implements B4E9:041F:0002:2597 ()
 *
 * Called From: B4E9:041D:0006:B1FB
 */
void f__B4E9_041F_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
