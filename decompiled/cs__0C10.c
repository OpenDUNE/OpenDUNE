/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0C10_0008_0014_1007()
 *
 * @name f__0C10_0008_0014_1007
 * @implements 0C10:0008:0014:1007 ()
 *
 * Called From: 1A34:1C95:0008:7218
 */
void f__0C10_0008_0014_1007()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x001C); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__0C10_001C_000B_1287();
}

/**
 * Decompiled function f__0C10_001C_000B_1287()
 *
 * @name f__0C10_001C_000B_1287
 * @implements 0C10:001C:000B:1287 ()
 *
 * Called From: 0C10:001C:0014:1007
 */
void f__0C10_001C_000B_1287()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x002C; emu_last_cs = 0x0C10; emu_last_ip = 0x001F; emu_last_length = 0x000B; emu_last_crc = 0x1287; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0027); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__0C10_0027_000A_8685();
}

/**
 * Decompiled function f__0C10_0027_000A_8685()
 *
 * @name f__0C10_0027_000A_8685
 * @implements 0C10:0027:000A:8685 ()
 *
 * Called From: 0C10:0027:000B:1287
 */
void f__0C10_0027_000A_8685()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C10_0031_0006_0A84(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x00CC; emu_last_cs = 0x0C10; emu_last_ip = 0x002E; emu_last_length = 0x000A; emu_last_crc = 0x8685; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C10_002E_0003_0524()
 *
 * @name f__0C10_002E_0003_0524
 * @implements 0C10:002E:0003:0524 ()
 *
 * Called From: 0C10:00C9:0009:E81F
 */
void f__0C10_002E_0003_0524()
{
	f__0C10_00CC_0006_137A(); return;
}

/**
 * Decompiled function f__0C10_0031_0006_0A84()
 *
 * @name f__0C10_0031_0006_0A84
 * @implements 0C10:0031:0006:0A84 ()
 *
 * Called From: 0C10:002A:000A:8685
 */
void f__0C10_0031_0006_0A84()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x167E; f__167E_02D8_000C_AB88();
	f__0C10_0037_000D_D8C7();
}

/**
 * Decompiled function f__0C10_0037_000D_D8C7()
 *
 * @name f__0C10_0037_000D_D8C7
 * @implements 0C10:0037:000D:D8C7 ()
 *
 * Called From: 0C10:0037:0006:0A84
 */
void f__0C10_0037_000D_D8C7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x167E; f__167E_02D8_000C_AB88();
	f__0C10_0044_0019_A860();
}

/**
 * Decompiled function f__0C10_0044_0019_A860()
 *
 * @name f__0C10_0044_0019_A860
 * @implements 0C10:0044:0019:A860 ()
 *
 * Called From: 0C10:0044:000D:D8C7
 */
void f__0C10_0044_0019_A860()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x005B; emu_last_cs = 0x0C10; emu_last_ip = 0x0051; emu_last_length = 0x0019; emu_last_crc = 0xA860; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0C10_005D_000B_32A5(); return; }
	emu_ip = 0x002C; emu_last_cs = 0x0C10; emu_last_ip = 0x005B; emu_last_length = 0x0019; emu_last_crc = 0xA860; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C10_005D_000B_32A5()
 *
 * @name f__0C10_005D_000B_32A5
 * @implements 0C10:005D:000B:32A5 ()
 *
 * Called From: 0C10:0059:0019:A860
 */
void f__0C10_005D_000B_32A5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0068); f__0C10_0168_0014_CCE7();
	f__0C10_0068_000E_5877();
}

/**
 * Decompiled function f__0C10_0068_000E_5877()
 *
 * @name f__0C10_0068_000E_5877
 * @implements 0C10:0068:000E:5877 ()
 *
 * Called From: 0C10:0068:000B:32A5
 */
void f__0C10_0068_000E_5877()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0076); f__0C10_0168_0014_CCE7();
	f__0C10_0076_0012_90E5();
}

/**
 * Decompiled function f__0C10_0076_0012_90E5()
 *
 * @name f__0C10_0076_0012_90E5
 * @implements 0C10:0076:0012:90E5 ()
 *
 * Called From: 0C10:0076:000E:5877
 */
void f__0C10_0076_0012_90E5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { f__0C10_0097_000B_30CB(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0088); emu_ip = 0x0182; emu_last_cs = 0x0C10; emu_last_ip = 0x0085; emu_last_length = 0x0012; emu_last_crc = 0x90E5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C10_0097_000B_30CB()
 *
 * @name f__0C10_0097_000B_30CB
 * @implements 0C10:0097:000B:30CB ()
 *
 * Called From: 0C10:007B:0012:90E5
 */
void f__0C10_0097_000B_30CB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x00A2); f__0C10_013D_0016_CFFB();
	f__0C10_00A2_0012_C379();
}

/**
 * Decompiled function f__0C10_00A2_0012_C379()
 *
 * @name f__0C10_00A2_0012_C379
 * @implements 0C10:00A2:0012:C379 ()
 *
 * Called From: 0C10:00A2:000B:30CB
 */
void f__0C10_00A2_0012_C379()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x00C6; emu_last_cs = 0x0C10; emu_last_ip = 0x00A6; emu_last_length = 0x0012; emu_last_crc = 0xC379; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x00B4); f__0C10_00D2_000F_17F7();
	f__0C10_00B4_000F_1BEE();
}

/**
 * Decompiled function f__0C10_00B4_000F_1BEE()
 *
 * @name f__0C10_00B4_000F_1BEE
 * @implements 0C10:00B4:000F:1BEE ()
 *
 * Called From: 0C10:00B4:0012:C379
 */
void f__0C10_00B4_000F_1BEE()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x00C3); f__0C10_00D2_000F_17F7();
	f__0C10_00C3_0009_E81F();
}

/**
 * Decompiled function f__0C10_00C3_0009_E81F()
 *
 * @name f__0C10_00C3_0009_E81F
 * @implements 0C10:00C3:0009:E81F ()
 *
 * Called From: 0C10:00C3:000F:1BEE
 */
void f__0C10_00C3_0009_E81F()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0C10_002E_0003_0524(); return;
}

/**
 * Decompiled function f__0C10_00CC_0006_137A()
 *
 * @name f__0C10_00CC_0006_137A
 * @implements 0C10:00CC:0006:137A ()
 *
 * Called From: 0C10:002E:0003:0524
 */
void f__0C10_00CC_0006_137A()
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
 * Decompiled function f__0C10_00D2_000F_17F7()
 *
 * @name f__0C10_00D2_000F_17F7
 * @implements 0C10:00D2:000F:17F7 ()
 *
 * Called From: 0C10:00B1:0012:C379
 * Called From: 0C10:00C0:000F:1BEE
 */
void f__0C10_00D2_000F_17F7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C10_00E1_003D_FA05(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x013B; emu_last_cs = 0x0C10; emu_last_ip = 0x00DF; emu_last_length = 0x000F; emu_last_crc = 0x17F7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C10_00DF_0002_0318()
 *
 * @name f__0C10_00DF_0002_0318
 * @implements 0C10:00DF:0002:0318 ()
 *
 * Called From: 0C10:0139:0005:15F4
 * Called From: 0C10:0139:0008:F574
 */
void f__0C10_00DF_0002_0318()
{
	f__0C10_013B_0002_00E2(); return;
}

/**
 * Decompiled function f__0C10_00E1_003D_FA05()
 *
 * @name f__0C10_00E1_003D_FA05
 * @implements 0C10:00E1:003D:FA05 ()
 *
 * Called From: 0C10:00DB:000F:17F7
 */
void f__0C10_00E1_003D_FA05()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x1);
	if (!emu_flags.zf) { f__0C10_0136_0005_15F4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x10);
	if (emu_flags.zf) { emu_ip = 0x0136; emu_last_cs = 0x0C10; emu_last_ip = 0x0111; emu_last_length = 0x003D; emu_last_crc = 0xFA05; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x011E); emu_cs = 0x1A34; f__1A34_3491_0032_DE4A();
	f__0C10_011E_0015_A26F();
}

/**
 * Decompiled function f__0C10_011E_0015_A26F()
 *
 * @name f__0C10_011E_0015_A26F
 * @implements 0C10:011E:0015:A26F ()
 *
 * Called From: 0C10:011E:003D:FA05
 */
void f__0C10_011E_0015_A26F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0136; emu_last_cs = 0x0C10; emu_last_ip = 0x0122; emu_last_length = 0x0015; emu_last_crc = 0xA26F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0133); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__0C10_0133_0008_F574();
}

/**
 * Decompiled function f__0C10_0133_0008_F574()
 *
 * @name f__0C10_0133_0008_F574
 * @implements 0C10:0133:0008:F574 ()
 *
 * Called From: 0C10:0133:0015:A26F
 */
void f__0C10_0133_0008_F574()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0C10_00DF_0002_0318(); return;
}

/**
 * Decompiled function f__0C10_0136_0005_15F4()
 *
 * @name f__0C10_0136_0005_15F4
 * @implements 0C10:0136:0005:15F4 ()
 *
 * Called From: 0C10:00F4:003D:FA05
 */
void f__0C10_0136_0005_15F4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0C10_00DF_0002_0318(); return;
}

/**
 * Decompiled function f__0C10_013B_0002_00E2()
 *
 * @name f__0C10_013B_0002_00E2
 * @implements 0C10:013B:0002:00E2 ()
 *
 * Called From: 0C10:00DF:0002:0318
 */
void f__0C10_013B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_013D_0016_CFFB()
 *
 * @name f__0C10_013D_0016_CFFB
 * @implements 0C10:013D:0016:CFFB ()
 *
 * Called From: 0C10:009F:000B:30CB
 * Called From: 1A34:0111:0020:0E63
 * Called From: 1A34:28DC:000B:E546
 */
void f__0C10_013D_0016_CFFB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0162; emu_last_cs = 0x0C10; emu_last_ip = 0x0146; emu_last_length = 0x0016; emu_last_crc = 0xCFFB; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0153); f__0C10_0168_0014_CCE7();
	f__0C10_0153_000B_55FB();
}

/**
 * Decompiled function f__0C10_0153_000B_55FB()
 *
 * @name f__0C10_0153_000B_55FB
 * @implements 0C10:0153:000B:55FB ()
 *
 * Called From: 0C10:0153:0016:CFFB
 */
void f__0C10_0153_000B_55FB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C10_015E_0004_0694(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0160; emu_last_cs = 0x0C10; emu_last_ip = 0x015C; emu_last_length = 0x000B; emu_last_crc = 0x55FB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C10_015E_0004_0694()
 *
 * @name f__0C10_015E_0004_0694
 * @implements 0C10:015E:0004:0694 ()
 *
 * Called From: 0C10:0157:000B:55FB
 */
void f__0C10_015E_0004_0694()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C10_0166_0002_00E2(); return;
}

/**
 * Decompiled function f__0C10_0166_0002_00E2()
 *
 * @name f__0C10_0166_0002_00E2
 * @implements 0C10:0166:0002:00E2 ()
 *
 * Called From: 0C10:0160:0004:0694
 */
void f__0C10_0166_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0168_0014_CCE7()
 *
 * @name f__0C10_0168_0014_CCE7
 * @implements 0C10:0168:0014:CCE7 ()
 *
 * Called From: 0972:0AA5:0012:918D
 * Called From: 0972:0AC1:0012:72ED
 * Called From: 0C10:0065:000B:32A5
 * Called From: 0C10:0073:000E:5877
 * Called From: 0C10:0150:0016:CFFB
 * Called From: 176C:2BE4:0014:938A
 * Called From: 1A34:311B:001E:86EB
 * Called From: 1A34:36C1:000B:3297
 * Called From: 1A34:36C1:002F:0A0C
 */
void f__0C10_0168_0014_CCE7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0C10_017C_0004_0768(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	f__0C10_0180_0002_00E2(); return;
}

/**
 * Decompiled function f__0C10_017A_0002_03A4()
 *
 * @name f__0C10_017A_0002_03A4
 * @implements 0C10:017A:0002:03A4 ()
 *
 * Called From: 0C10:017E:0004:0768
 */
void f__0C10_017A_0002_03A4()
{
	f__0C10_0180_0002_00E2(); return;
}

/**
 * Decompiled function f__0C10_017C_0004_0768()
 *
 * @name f__0C10_017C_0004_0768
 * @implements 0C10:017C:0004:0768 ()
 *
 * Called From: 0C10:0171:0014:CCE7
 */
void f__0C10_017C_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C10_017A_0002_03A4(); return;
}

/**
 * Decompiled function f__0C10_0180_0002_00E2()
 *
 * @name f__0C10_0180_0002_00E2
 * @implements 0C10:0180:0002:00E2 ()
 *
 * Called From: 0C10:017A:0014:CCE7
 * Called From: 0C10:017A:0002:03A4
 */
void f__0C10_0180_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0182_0012_8DA5()
 *
 * @name f__0C10_0182_0012_8DA5
 * @implements 0C10:0182:0012:8DA5 ()
 *
 * Called From: 0972:0ADD:000B:3C37
 * Called From: 0972:0AEC:000F:DE55
 * Called From: 0972:0E3A:0010:9E8F
 * Called From: 0AEC:0392:0011:657F
 * Called From: 176C:0A1A:0010:1E8C
 * Called From: 176C:2C65:000D:1E6F
 * Called From: 1A34:1DCF:000D:D0AD
 * Called From: 1A34:3679:000F:4E92
 */
void f__0C10_0182_0012_8DA5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C10_0194_000D_B098(); return; }
	f__0C10_023E_0004_069C(); return;
}

/**
 * Decompiled function f__0C10_0194_000D_B098()
 *
 * @name f__0C10_0194_000D_B098
 * @implements 0C10:0194:000D:B098 ()
 *
 * Called From: 0C10:018F:0012:8DA5
 */
void f__0C10_0194_000D_B098()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x167E; f__167E_02D8_000C_AB88();
	f__0C10_01A1_0012_A20C();
}

/**
 * Decompiled function f__0C10_01A1_0012_A20C()
 *
 * @name f__0C10_01A1_0012_A20C
 * @implements 0C10:01A1:0012:A20C ()
 *
 * Called From: 0C10:01A1:000D:B098
 */
void f__0C10_01A1_0012_A20C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01B3); f__0C10_0247_000D_C74D();
	f__0C10_01B3_000D_80B5();
}

/**
 * Decompiled function f__0C10_01B3_000D_80B5()
 *
 * @name f__0C10_01B3_000D_80B5
 * @implements 0C10:01B3:000D:80B5 ()
 *
 * Called From: 0C10:01B3:0012:A20C
 */
void f__0C10_01B3_000D_80B5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x01C0); f__0C10_0247_000D_C74D();
	f__0C10_01C0_0016_4CD9();
}

/**
 * Decompiled function f__0C10_01C0_0016_4CD9()
 *
 * @name f__0C10_01C0_0016_4CD9
 * @implements 0C10:01C0:0016:4CD9 ()
 *
 * Called From: 0C10:01C0:000D:80B5
 */
void f__0C10_01C0_0016_4CD9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C10_023E_0004_069C(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01D6); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__0C10_01D6_0036_BBF9();
}

/**
 * Decompiled function f__0C10_01D6_0036_BBF9()
 *
 * @name f__0C10_01D6_0036_BBF9
 * @implements 0C10:01D6:0036:BBF9 ()
 *
 * Called From: 0C10:01D6:0016:4CD9
 */
void f__0C10_01D6_0036_BBF9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__0C10_020C_0006_0DE4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	if (!emu_flags.zf) { emu_ip = 0x020A; emu_last_cs = 0x0C10; emu_last_ip = 0x01FF; emu_last_length = 0x0036; emu_last_crc = 0xBBF9; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_ip = 0x0224; emu_last_cs = 0x0C10; emu_last_ip = 0x020A; emu_last_length = 0x0036; emu_last_crc = 0xBBF9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C10_020C_0006_0DE4()
 *
 * @name f__0C10_020C_0006_0DE4
 * @implements 0C10:020C:0006:0DE4 ()
 *
 * Called From: 0C10:01E3:0036:BBF9
 */
void f__0C10_020C_0006_0DE4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0212); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__0C10_0212_000B_1F67();
}

/**
 * Decompiled function f__0C10_0212_000B_1F67()
 *
 * @name f__0C10_0212_000B_1F67
 * @implements 0C10:0212:000B:1F67 ()
 *
 * Called From: 0C10:0212:0006:0DE4
 */
void f__0C10_0212_000B_1F67()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0224; emu_last_cs = 0x0C10; emu_last_ip = 0x0215; emu_last_length = 0x000B; emu_last_crc = 0x1F67; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021D); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__0C10_021D_0025_2C73();
}

/**
 * Decompiled function f__0C10_021D_0025_2C73()
 *
 * @name f__0C10_021D_0025_2C73
 * @implements 0C10:021D:0025:2C73 ()
 *
 * Called From: 0C10:021D:000B:1F67
 */
void f__0C10_021D_0025_2C73()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x0235; emu_last_cs = 0x0C10; emu_last_ip = 0x022A; emu_last_length = 0x0025; emu_last_crc = 0x2C73; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C10_0242_0005_04BA(); return;
}

/**
 * Decompiled function f__0C10_023E_0004_069C()
 *
 * @name f__0C10_023E_0004_069C
 * @implements 0C10:023E:0004:069C ()
 *
 * Called From: 0C10:0191:0012:8DA5
 * Called From: 0C10:01C4:0016:4CD9
 */
void f__0C10_023E_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C10_0242_0005_04BA(); return;
}

/**
 * Decompiled function f__0C10_0242_0005_04BA()
 *
 * @name f__0C10_0242_0005_04BA
 * @implements 0C10:0242:0005:04BA ()
 *
 * Called From: 0C10:0240:0004:069C
 * Called From: 0C10:0240:0025:2C73
 */
void f__0C10_0242_0005_04BA()
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
 * Decompiled function f__0C10_0247_000D_C74D()
 *
 * @name f__0C10_0247_000D_C74D
 * @implements 0C10:0247:000D:C74D ()
 *
 * Called From: 0C10:01B0:0012:A20C
 * Called From: 0C10:01BD:000D:80B5
 */
void f__0C10_0247_000D_C74D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C10_0254_003C_DCD4(); return; }
	f__0C10_02A7_0002_00E2(); return;
}

/**
 * Decompiled function f__0C10_0254_003C_DCD4()
 *
 * @name f__0C10_0254_003C_DCD4
 * @implements 0C10:0254:003C:DCD4 ()
 *
 * Called From: 0C10:0250:000D:C74D
 */
void f__0C10_0254_003C_DCD4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x1);
	if (!emu_flags.zf) { f__0C10_02A7_0002_00E2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x10);
	if (emu_flags.zf) { emu_ip = 0x02A7; emu_last_cs = 0x0C10; emu_last_ip = 0x0283; emu_last_length = 0x003C; emu_last_crc = 0xDCD4; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x1A34; f__1A34_3491_0032_DE4A();
	f__0C10_0290_0014_A9B2();
}

/**
 * Decompiled function f__0C10_0290_0014_A9B2()
 *
 * @name f__0C10_0290_0014_A9B2
 * @implements 0C10:0290:0014:A9B2 ()
 *
 * Called From: 0C10:0290:003C:DCD4
 */
void f__0C10_0290_0014_A9B2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__0C10_02A7_0002_00E2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__0C10_02A4_0005_1CF2();
}

/**
 * Decompiled function f__0C10_02A4_0005_1CF2()
 *
 * @name f__0C10_02A4_0005_1CF2
 * @implements 0C10:02A4:0005:1CF2 ()
 *
 * Called From: 0C10:02A4:0014:A9B2
 */
void f__0C10_02A4_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_02A7_0002_00E2()
 *
 * @name f__0C10_02A7_0002_00E2
 * @implements 0C10:02A7:0002:00E2 ()
 *
 * Called From: 0C10:0252:000D:C74D
 * Called From: 0C10:0266:003C:DCD4
 * Called From: 0C10:0294:0014:A9B2
 */
void f__0C10_02A7_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
