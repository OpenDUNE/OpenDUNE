/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1FB5_0005_000F_6025()
 *
 * @name f__1FB5_0005_000F_6025
 * @implements 1FB5:0005:000F:6025 ()
 *
 * Called From: 1FB5:15F3:0005:0D68
 */
void f__1FB5_0005_000F_6025()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_cs); emu_push(0x0014); emu_cs = 0x01F7; f__01F7_0428_0010_4994();
	f__1FB5_0014_000C_AB54();
}

/**
 * Decompiled function f__1FB5_0014_000C_AB54()
 *
 * @name f__1FB5_0014_000C_AB54
 * @implements 1FB5:0014:000C:AB54 ()
 *
 * Called From: 1FB5:0014:000F:6025
 */
void f__1FB5_0014_000C_AB54()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_0020_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_0020_0004_0F7A()
 *
 * @name f__1FB5_0020_0004_0F7A
 * @implements 1FB5:0020:0004:0F7A ()
 *
 * Called From: 1FB5:001E:000C:AB54
 */
void f__1FB5_0020_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0047_0012_481D()
 *
 * @name f__1FB5_0047_0012_481D
 * @implements 1FB5:0047:0012:481D ()
 *
 * Called From: 1FB5:026F:000F:8873
 * Called From: 1FB5:0A80:0014:214A
 * Called From: 1FB5:15EE:000F:C9F1
 */
void f__1FB5_0047_0012_481D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x01F7; f__01F7_23CC_0013_04A4();
	f__1FB5_0059_000D_8B5F();
}

/**
 * Decompiled function f__1FB5_0059_000D_8B5F()
 *
 * @name f__1FB5_0059_000D_8B5F
 * @implements 1FB5:0059:000D:8B5F ()
 *
 * Called From: 1FB5:0059:0012:481D
 */
void f__1FB5_0059_000D_8B5F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_0066_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_0066_0004_0F7A()
 *
 * @name f__1FB5_0066_0004_0F7A
 * @implements 1FB5:0066:0004:0F7A ()
 *
 * Called From: 1FB5:0064:000D:8B5F
 */
void f__1FB5_0066_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0091_001B_F50E()
 *
 * @name f__1FB5_0091_001B_F50E
 * @implements 1FB5:0091:001B:F50E ()
 *
 * Called From: 1FB5:07D2:0055:5423
 * Called From: 1FB5:0802:0030:7781
 * Called From: 1FB5:13BA:0031:2940
 * Called From: 1FB5:14B4:0054:4780
 * Called From: 1FB5:1503:0010:B146
 */
void f__1FB5_0091_001B_F50E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00AC); emu_cs = 0x01F7; f__01F7_0773_001E_492D();
	f__1FB5_00AC_0015_009F();
}

/**
 * Decompiled function f__1FB5_00AC_0015_009F()
 *
 * @name f__1FB5_00AC_0015_009F
 * @implements 1FB5:00AC:0015:009F ()
 *
 * Called From: 1FB5:00AC:001B:F50E
 */
void f__1FB5_00AC_0015_009F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1FB5_00C1_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_00C1_0004_0F7A()
 *
 * @name f__1FB5_00C1_0004_0F7A
 * @implements 1FB5:00C1:0004:0F7A ()
 *
 * Called From: 1FB5:00BF:0015:009F
 */
void f__1FB5_00C1_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_00C5_001B_F75E()
 *
 * @name f__1FB5_00C5_001B_F75E
 * @implements 1FB5:00C5:001B:F75E ()
 *
 * Called From: 1FB5:0D7E:000E:B299
 * Called From: 1FB5:0D7E:0011:33D7
 */
void f__1FB5_00C5_001B_F75E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00E0); emu_cs = 0x01F7; f__01F7_3354_0003_0606();
	f__1FB5_00E0_000F_2B25();
}

/**
 * Decompiled function f__1FB5_00E0_000F_2B25()
 *
 * @name f__1FB5_00E0_000F_2B25
 * @implements 1FB5:00E0:000F:2B25 ()
 *
 * Called From: 1FB5:00E0:001B:F75E
 */
void f__1FB5_00E0_000F_2B25()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_00EF_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_00EF_0004_0F7A()
 *
 * @name f__1FB5_00EF_0004_0F7A
 * @implements 1FB5:00EF:0004:0F7A ()
 *
 * Called From: 1FB5:00ED:000F:2B25
 */
void f__1FB5_00EF_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_00F3_001B_F9B6()
 *
 * @name f__1FB5_00F3_001B_F9B6
 * @implements 1FB5:00F3:001B:F9B6 ()
 *
 * Called From: 1FB5:10F5:000E:B05D
 */
void f__1FB5_00F3_001B_F9B6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x010E); emu_cs = 0x01F7; f__01F7_4481_0003_0774();
	f__1FB5_010E_000F_2B25();
}

/**
 * Decompiled function f__1FB5_010E_000F_2B25()
 *
 * @name f__1FB5_010E_000F_2B25
 * @implements 1FB5:010E:000F:2B25 ()
 *
 * Called From: 1FB5:010E:001B:F9B6
 */
void f__1FB5_010E_000F_2B25()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_011D_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_011D_0004_0F7A()
 *
 * @name f__1FB5_011D_0004_0F7A
 * @implements 1FB5:011D:0004:0F7A ()
 *
 * Called From: 1FB5:011B:000F:2B25
 */
void f__1FB5_011D_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0121_001B_F2B6()
 *
 * @name f__1FB5_0121_001B_F2B6
 * @implements 1FB5:0121:001B:F2B6 ()
 *
 * Called From: 1FB5:0260:001C:BB8F
 * Called From: 1FB5:0753:000E:1FB6
 * Called From: 1FB5:0753:0011:9E46
 * Called From: 1FB5:15DF:0018:1B2C
 */
void f__1FB5_0121_001B_F2B6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x01F7; f__01F7_2A06_002A_FCED();
	f__1FB5_013C_000F_2B25();
}

/**
 * Decompiled function f__1FB5_013C_000F_2B25()
 *
 * @name f__1FB5_013C_000F_2B25
 * @implements 1FB5:013C:000F:2B25 ()
 *
 * Called From: 1FB5:013C:001B:F2B6
 */
void f__1FB5_013C_000F_2B25()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_014B_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_014B_0004_0F7A()
 *
 * @name f__1FB5_014B_0004_0F7A
 * @implements 1FB5:014B:0004:0F7A ()
 *
 * Called From: 1FB5:0149:000F:2B25
 */
void f__1FB5_014B_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_01FA_0010_D47C()
 *
 * @name f__1FB5_01FA_0010_D47C
 * @implements 1FB5:01FA:0010:D47C ()
 *
 * Called From: 0FCB:00C6:001B:4438
 * Called From: 1FB5:02DD:0032:7039
 * Called From: 253D:000E:0013:AAD7
 * Called From: 253D:009B:0016:A6D3
 * Called From: 253D:011B:0016:AC6F
 * Called From: 256D:0033:000F:ABDD
 * Called From: B495:1A36:0012:7EAA
 * Called From: B4B1:0011:0016:A6CB
 * Called From: B4B1:002C:0010:AB84
 * Called From: B4B8:1CBB:0018:AD37
 * Called From: B4CA:0221:0017:B156
 * Called From: B4E0:068C:0015:A1D9
 * Called From: B4F2:005E:0012:60AA
 * Called From: B503:11CF:0016:A6CB
 * Called From: B518:07F6:0010:155A
 * Called From: B52A:0014:0019:C6A1
 * Called From: B52A:02E7:0012:A851
 * Called From: B52A:09A8:0013:83C3
 */
void f__1FB5_01FA_0010_D47C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_xorw(&emu_di, emu_di);
	f__1FB5_0220_0019_D46D(); return;
}

/**
 * Decompiled function f__1FB5_020A_0015_BDD0()
 *
 * @name f__1FB5_020A_0015_BDD0
 * @implements 1FB5:020A:0015:BDD0 ()
 *
 * Called From: 1FB5:0223:0019:D46D
 */
void f__1FB5_020A_0015_BDD0()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x021F; emu_last_cs = 0x1FB5; emu_last_ip = 0x021B; emu_last_length = 0x0015; emu_last_crc = 0xBDD0; emu_call(); return; } // Jump does not resolve
	f__1FB5_0225_0014_24CC(); return;
}

/**
 * Decompiled function f__1FB5_0220_0019_D46D()
 *
 * @name f__1FB5_0220_0019_D46D
 * @implements 1FB5:0220:0019:D46D ()
 *
 * Called From: 1FB5:0208:0010:D47C
 */
void f__1FB5_0220_0019_D46D()
{
	emu_cmpws(&emu_di, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_020A_0015_BDD0(); return; }
	emu_cmpws(&emu_di, 0x14);
	if (!emu_flags.zf) { emu_ip = 0x023C; emu_last_cs = 0x1FB5; emu_last_ip = 0x0228; emu_last_length = 0x0019; emu_last_crc = 0xD46D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0239); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0236; emu_last_length = 0x0019; emu_last_crc = 0xD46D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0225_0014_24CC()
 *
 * @name f__1FB5_0225_0014_24CC
 * @implements 1FB5:0225:0014:24CC ()
 *
 * Called From: 1FB5:021D:0015:BDD0
 */
void f__1FB5_0225_0014_24CC()
{
	emu_cmpws(&emu_di, 0x14);
	if (!emu_flags.zf) { f__1FB5_023C_000B_E1DA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0239); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0236; emu_last_length = 0x0014; emu_last_crc = 0x24CC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_023C_000B_E1DA()
 *
 * @name f__1FB5_023C_000B_E1DA
 * @implements 1FB5:023C:000B:E1DA ()
 *
 * Called From: 1FB5:0228:0014:24CC
 */
void f__1FB5_023C_000B_E1DA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0247); f__1FB5_1ABA_0031_1268();
	f__1FB5_0247_001C_BB8F();
}

/**
 * Decompiled function f__1FB5_0247_001C_BB8F()
 *
 * @name f__1FB5_0247_001C_BB8F
 * @implements 1FB5:0247:001C:BB8F ()
 *
 * Called From: 1FB5:0247:000B:E1DA
 */
void f__1FB5_0247_001C_BB8F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8001);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0263); f__1FB5_0121_001B_F2B6();
	f__1FB5_0263_000F_8873();
}

/**
 * Decompiled function f__1FB5_0263_000F_8873()
 *
 * @name f__1FB5_0263_000F_8873
 * @implements 1FB5:0263:000F:8873 ()
 *
 * Called From: 1FB5:0263:001C:BB8F
 */
void f__1FB5_0263_000F_8873()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_0278_0009_30A1(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0272); f__1FB5_0047_0012_481D();
	f__1FB5_0272_000F_38BB();
}

/**
 * Decompiled function f__1FB5_0272_000F_38BB()
 *
 * @name f__1FB5_0272_000F_38BB
 * @implements 1FB5:0272:000F:38BB ()
 *
 * Called From: 1FB5:0272:000F:8873
 */
void f__1FB5_0272_000F_38BB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0281_001A_92F9(); return; }
	f__1FB5_0570_0019_0B43(); return;
}

/**
 * Decompiled function f__1FB5_0278_0009_30A1()
 *
 * @name f__1FB5_0278_0009_30A1
 * @implements 1FB5:0278:0009:30A1 ()
 *
 * Called From: 1FB5:026B:000F:8873
 */
void f__1FB5_0278_0009_30A1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0281_001A_92F9(); return; }
	f__1FB5_0570_0019_0B43(); return;
}

/**
 * Decompiled function f__1FB5_0281_001A_92F9()
 *
 * @name f__1FB5_0281_001A_92F9
 * @implements 1FB5:0281:001A:92F9 ()
 *
 * Called From: 1FB5:027C:0009:30A1
 * Called From: 1FB5:027C:000F:38BB
 */
void f__1FB5_0281_001A_92F9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (!emu_flags.zf) { f__1FB5_029B_0009_0ECD(); return; }
	f__1FB5_0570_0019_0B43(); return;
}

/**
 * Decompiled function f__1FB5_029B_0009_0ECD()
 *
 * @name f__1FB5_029B_0009_0ECD
 * @implements 1FB5:029B:0009:0ECD ()
 *
 * Called From: 1FB5:0296:001A:92F9
 */
void f__1FB5_029B_0009_0ECD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__1FB5_02A4_000A_51F7(); return; }
	emu_ip = 0x0570; emu_last_cs = 0x1FB5; emu_last_ip = 0x02A1; emu_last_length = 0x0009; emu_last_crc = 0x0ECD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_02A4_000A_51F7()
 *
 * @name f__1FB5_02A4_000A_51F7
 * @implements 1FB5:02A4:000A:51F7 ()
 *
 * Called From: 1FB5:029F:0009:0ECD
 */
void f__1FB5_02A4_000A_51F7()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x2);
	if (emu_flags.zf) { f__1FB5_02AE_0032_7039(); return; }
	emu_ip = 0x0570; emu_last_cs = 0x1FB5; emu_last_ip = 0x02AB; emu_last_length = 0x000A; emu_last_crc = 0x51F7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_02AE_0032_7039()
 *
 * @name f__1FB5_02AE_0032_7039
 * @implements 1FB5:02AE:0032:7039 ()
 *
 * Called From: 1FB5:02A9:000A:51F7
 */
void f__1FB5_02AE_0032_7039()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x10));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x02E0); f__1FB5_01FA_0010_D47C();
	f__1FB5_02E0_0030_3FAE();
}

/**
 * Decompiled function f__1FB5_02E0_0030_3FAE()
 *
 * @name f__1FB5_02E0_0030_3FAE
 * @implements 1FB5:02E0:0030:3FAE ()
 *
 * Called From: 1FB5:02E0:0032:7039
 */
void f__1FB5_02E0_0030_3FAE()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x12));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__1FB5_0310_0008_CEBE(); return; }
	f__1FB5_051A_0050_DE2C(); return;
}

/**
 * Decompiled function f__1FB5_0310_0008_CEBE()
 *
 * @name f__1FB5_0310_0008_CEBE
 * @implements 1FB5:0310:0008:CEBE ()
 *
 * Called From: 1FB5:030B:0030:3FAE
 */
void f__1FB5_0310_0008_CEBE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFFFF);
	f__1FB5_0491_0012_F4B1(); return;
}

/**
 * Decompiled function f__1FB5_0318_001C_C2E3()
 *
 * @name f__1FB5_0318_001C_C2E3
 * @implements 1FB5:0318:001C:C2E3 ()
 *
 * Called From: 1FB5:04AE:000E:5424
 */
void f__1FB5_0318_001C_C2E3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0334); f__1FB5_0AEC_001B_7557();
	f__1FB5_0334_001E_9A87();
}

/**
 * Decompiled function f__1FB5_031D_0017_4AEE()
 *
 * @name f__1FB5_031D_0017_4AEE
 * @implements 1FB5:031D:0017:4AEE ()
 *
 * Called From: 1FB5:0346:001E:9A87
 */
void f__1FB5_031D_0017_4AEE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0334); f__1FB5_0AEC_001B_7557();
	f__1FB5_0334_001E_9A87();
}

/**
 * Decompiled function f__1FB5_0334_001E_9A87()
 *
 * @name f__1FB5_0334_001E_9A87
 * @implements 1FB5:0334:001E:9A87 ()
 *
 * Called From: 1FB5:0334:0017:4AEE
 * Called From: 1FB5:0334:001C:C2E3
 */
void f__1FB5_0334_001E_9A87()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__1FB5_031D_0017_4AEE(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0352); f__1FB5_1ABA_0031_1268();
	f__1FB5_0352_000E_3FCB();
}

/**
 * Decompiled function f__1FB5_0352_000E_3FCB()
 *
 * @name f__1FB5_0352_000E_3FCB
 * @implements 1FB5:0352:000E:3FCB ()
 *
 * Called From: 1FB5:0352:001E:9A87
 */
void f__1FB5_0352_000E_3FCB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0360_001A_99FF(); return; }
	emu_ip = 0x0491; emu_last_cs = 0x1FB5; emu_last_ip = 0x035D; emu_last_length = 0x000E; emu_last_crc = 0x3FCB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0360_001A_99FF()
 *
 * @name f__1FB5_0360_001A_99FF
 * @implements 1FB5:0360:001A:99FF ()
 *
 * Called From: 1FB5:035B:000E:3FCB
 */
void f__1FB5_0360_001A_99FF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (!emu_flags.zf) { f__1FB5_037A_002A_AF04(); return; }
	emu_ip = 0x048F; emu_last_cs = 0x1FB5; emu_last_ip = 0x0377; emu_last_length = 0x001A; emu_last_crc = 0x99FF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_037A_002A_AF04()
 *
 * @name f__1FB5_037A_002A_AF04
 * @implements 1FB5:037A:002A:AF04 ()
 *
 * Called From: 1FB5:0375:001A:99FF
 */
void f__1FB5_037A_002A_AF04()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x10));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x33E0);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { f__1FB5_03A4_00ED_04E0(); return; }
	emu_ip = 0x048F; emu_last_cs = 0x1FB5; emu_last_ip = 0x03A1; emu_last_length = 0x002A; emu_last_crc = 0xAF04; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_03A4_00ED_04E0()
 *
 * @name f__1FB5_03A4_00ED_04E0
 * @implements 1FB5:03A4:00ED:04E0 ()
 *
 * Called From: 1FB5:039F:002A:AF04
 */
void f__1FB5_03A4_00ED_04E0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x10));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_bx.x, 0x13);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_addw(&emu_cx.x, emu_get_memory16(emu_es, emu_si,  0xC));
	emu_adcw(&emu_bx.x, emu_get_memory16(emu_es, emu_si,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_es, emu_dx.x);
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFF);
	if (emu_flags.zf) { f__1FB5_0489_0008_85EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_bx.x, 0x13);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_pop(&emu_dx.x);
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_bx.x, 0x13);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__1FB5_0491_0012_F4B1(); return;
}

/**
 * Decompiled function f__1FB5_0489_0008_85EC()
 *
 * @name f__1FB5_0489_0008_85EC
 * @implements 1FB5:0489:0008:85EC ()
 *
 * Called From: 1FB5:0434:00ED:04E0
 */
void f__1FB5_0489_0008_85EC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__1FB5_0491_0012_F4B1(); return;
}

/**
 * Decompiled function f__1FB5_0491_0012_F4B1()
 *
 * @name f__1FB5_0491_0012_F4B1
 * @implements 1FB5:0491:0012:F4B1 ()
 *
 * Called From: 1FB5:0315:0008:CEBE
 * Called From: 1FB5:048F:0008:85EC
 * Called From: 1FB5:048F:00ED:04E0
 */
void f__1FB5_0491_0012_F4B1()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04A3); f__1FB5_0AEC_001B_7557();
	f__1FB5_04A3_000E_5424();
}

/**
 * Decompiled function f__1FB5_04A3_000E_5424()
 *
 * @name f__1FB5_04A3_000E_5424
 * @implements 1FB5:04A3:000E:5424 ()
 *
 * Called From: 1FB5:04A3:0012:F4B1
 */
void f__1FB5_04A3_000E_5424()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__1FB5_04B1_000C_AAAD(); return; }
	f__1FB5_0318_001C_C2E3(); return;
}

/**
 * Decompiled function f__1FB5_04B1_000C_AAAD()
 *
 * @name f__1FB5_04B1_000C_AAAD
 * @implements 1FB5:04B1:000C:AAAD ()
 *
 * Called From: 1FB5:04AC:000E:5424
 */
void f__1FB5_04B1_000C_AAAD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x04F8; emu_last_cs = 0x1FB5; emu_last_ip = 0x04B5; emu_last_length = 0x000C; emu_last_crc = 0xAAAD; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04BD); f__1FB5_16D5_006A_A7D9();
	f__1FB5_04BD_00AD_92E0();
}

/**
 * Decompiled function f__1FB5_04BD_00AD_92E0()
 *
 * @name f__1FB5_04BD_00AD_92E0
 * @implements 1FB5:04BD:00AD:92E0 ()
 *
 * Called From: 1FB5:04BD:000C:AAAD
 */
void f__1FB5_04BD_00AD_92E0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_bx.x, 0x13);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x1);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x056A); f__1FB5_1207_001B_7505();
	f__1FB5_056A_0006_3EA0();
}

/**
 * Decompiled function f__1FB5_051A_0050_DE2C()
 *
 * @name f__1FB5_051A_0050_DE2C
 * @implements 1FB5:051A:0050:DE2C ()
 *
 * Called From: 1FB5:030D:0030:3FAE
 */
void f__1FB5_051A_0050_DE2C()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x056A); f__1FB5_1207_001B_7505();
	f__1FB5_056A_0006_3EA0();
}

/**
 * Decompiled function f__1FB5_056A_0006_3EA0()
 *
 * @name f__1FB5_056A_0006_3EA0
 * @implements 1FB5:056A:0006:3EA0 ()
 *
 * Called From: 1FB5:056A:0050:DE2C
 * Called From: 1FB5:056A:00AD:92E0
 */
void f__1FB5_056A_0006_3EA0()
{
	emu_addws(&emu_sp, 0x8);
	f__1FB5_09B8_0009_F827(); return;
}

/**
 * Decompiled function f__1FB5_0570_0019_0B43()
 *
 * @name f__1FB5_0570_0019_0B43
 * @implements 1FB5:0570:0019:0B43 ()
 *
 * Called From: 1FB5:027E:000F:38BB
 * Called From: 1FB5:027E:0009:30A1
 * Called From: 1FB5:0298:001A:92F9
 */
void f__1FB5_0570_0019_0B43()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__1FB5_0589_0007_6A78(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__1FB5_0597_0007_6A3C(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0590; emu_last_cs = 0x1FB5; emu_last_ip = 0x0585; emu_last_length = 0x0019; emu_last_crc = 0x0B43; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x059E; emu_last_cs = 0x1FB5; emu_last_ip = 0x0587; emu_last_length = 0x0019; emu_last_crc = 0x0B43; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0589_0007_6A78()
 *
 * @name f__1FB5_0589_0007_6A78
 * @implements 1FB5:0589:0007:6A78 ()
 *
 * Called From: 1FB5:057B:0019:0B43
 */
void f__1FB5_0589_0007_6A78()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	f__1FB5_05B2_000A_50EB(); return;
}

/**
 * Decompiled function f__1FB5_0597_0007_6A3C()
 *
 * @name f__1FB5_0597_0007_6A3C
 * @implements 1FB5:0597:0007:6A3C ()
 *
 * Called From: 1FB5:0580:0019:0B43
 */
void f__1FB5_0597_0007_6A3C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8302);
	f__1FB5_05B2_000A_50EB(); return;
}

/**
 * Decompiled function f__1FB5_05B2_000A_50EB()
 *
 * @name f__1FB5_05B2_000A_50EB
 * @implements 1FB5:05B2:000A:50EB ()
 *
 * Called From: 1FB5:058E:0007:6A78
 * Called From: 1FB5:059C:0007:6A3C
 */
void f__1FB5_05B2_000A_50EB()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x2);
	if (!emu_flags.zf) { f__1FB5_05BC_0009_3115(); return; }
	f__1FB5_0648_0009_31D1(); return;
}

/**
 * Decompiled function f__1FB5_05BC_0009_3115()
 *
 * @name f__1FB5_05BC_0009_3115
 * @implements 1FB5:05BC:0009:3115 ()
 *
 * Called From: 1FB5:05B7:000A:50EB
 */
void f__1FB5_05BC_0009_3115()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x05C5; emu_last_cs = 0x1FB5; emu_last_ip = 0x05C0; emu_last_length = 0x0009; emu_last_crc = 0x3115; emu_call(); return; } // Jump does not resolve
	f__1FB5_0648_0009_31D1(); return;
}

/**
 * Decompiled function f__1FB5_0648_0009_31D1()
 *
 * @name f__1FB5_0648_0009_31D1
 * @implements 1FB5:0648:0009:31D1 ()
 *
 * Called From: 1FB5:05B9:000A:50EB
 * Called From: 1FB5:05C2:0009:3115
 */
void f__1FB5_0648_0009_31D1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0651_001E_208F(); return; }
	f__1FB5_0703_0012_3213(); return;
}

/**
 * Decompiled function f__1FB5_0651_001E_208F()
 *
 * @name f__1FB5_0651_001E_208F
 * @implements 1FB5:0651:001E:208F ()
 *
 * Called From: 1FB5:064C:0009:31D1
 */
void f__1FB5_0651_001E_208F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	if (!emu_flags.zf) { emu_ip = 0x066F; emu_last_cs = 0x1FB5; emu_last_ip = 0x066A; emu_last_length = 0x001E; emu_last_crc = 0x208F; emu_call(); return; } // Jump does not resolve
	f__1FB5_0703_0012_3213(); return;
}

/**
 * Decompiled function f__1FB5_0703_0012_3213()
 *
 * @name f__1FB5_0703_0012_3213
 * @implements 1FB5:0703:0012:3213 ()
 *
 * Called From: 1FB5:064E:0009:31D1
 * Called From: 1FB5:066C:001E:208F
 */
void f__1FB5_0703_0012_3213()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (emu_flags.zf) { f__1FB5_0727_000B_E236(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0715); f__1FB5_1574_000F_1723();
	f__1FB5_0715_0010_BF47();
}

/**
 * Decompiled function f__1FB5_0715_0010_BF47()
 *
 * @name f__1FB5_0715_0010_BF47
 * @implements 1FB5:0715:0010:BF47 ()
 *
 * Called From: 1FB5:0715:0012:3213
 */
void f__1FB5_0715_0010_BF47()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_0725_0002_03B6(); return; }
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x09C1; emu_last_cs = 0x1FB5; emu_last_ip = 0x0722; emu_last_length = 0x0010; emu_last_crc = 0xBF47; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0722_0003_053C()
 *
 * @name f__1FB5_0722_0003_053C
 * @implements 1FB5:0722:0003:053C ()
 *
 * Called From: 1FB5:09BE:0009:F827
 */
void f__1FB5_0722_0003_053C()
{
	f__1FB5_09C1_0006_137A(); return;
}

/**
 * Decompiled function f__1FB5_0725_0002_03B6()
 *
 * @name f__1FB5_0725_0002_03B6
 * @implements 1FB5:0725:0002:03B6 ()
 *
 * Called From: 1FB5:0719:0010:BF47
 */
void f__1FB5_0725_0002_03B6()
{
	f__1FB5_0734_0011_9CFD(); return;
}

/**
 * Decompiled function f__1FB5_0727_000B_E236()
 *
 * @name f__1FB5_0727_000B_E236
 * @implements 1FB5:0727:000B:E236 ()
 *
 * Called From: 1FB5:0708:0012:3213
 */
void f__1FB5_0727_000B_E236()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__1FB5_15B5_0015_6875();
	f__1FB5_0732_0013_9F51();
}

/**
 * Decompiled function f__1FB5_0732_0013_9F51()
 *
 * @name f__1FB5_0732_0013_9F51
 * @implements 1FB5:0732:0013:9F51 ()
 *
 * Called From: 1FB5:0732:000B:E236
 */
void f__1FB5_0732_0013_9F51()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	if (!emu_flags.zf) { f__1FB5_0745_0011_9E46(); return; }
	emu_movw(&emu_ax.x, 0x100);
	emu_ip = 0x0748; emu_last_cs = 0x1FB5; emu_last_ip = 0x0743; emu_last_length = 0x0013; emu_last_crc = 0x9F51; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0734_0011_9CFD()
 *
 * @name f__1FB5_0734_0011_9CFD
 * @implements 1FB5:0734:0011:9CFD ()
 *
 * Called From: 1FB5:0725:0002:03B6
 */
void f__1FB5_0734_0011_9CFD()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	if (!emu_flags.zf) { emu_ip = 0x0745; emu_last_cs = 0x1FB5; emu_last_ip = 0x073E; emu_last_length = 0x0011; emu_last_crc = 0x9CFD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x100);
	f__1FB5_0748_000E_1FB6(); return;
}

/**
 * Decompiled function f__1FB5_0739_000C_BD6A()
 *
 * @name f__1FB5_0739_000C_BD6A
 * @implements 1FB5:0739:000C:BD6A ()
 *
 * Called From: 1FB5:077E:0002:02DE
 */
void f__1FB5_0739_000C_BD6A()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	if (!emu_flags.zf) { f__1FB5_0745_0011_9E46(); return; }
	emu_movw(&emu_ax.x, 0x100);
	emu_ip = 0x0748; emu_last_cs = 0x1FB5; emu_last_ip = 0x0743; emu_last_length = 0x000C; emu_last_crc = 0xBD6A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0745_0011_9E46()
 *
 * @name f__1FB5_0745_0011_9E46
 * @implements 1FB5:0745:0011:9E46 ()
 *
 * Called From: 1FB5:073E:0013:9F51
 * Called From: 1FB5:073E:000C:BD6A
 */
void f__1FB5_0745_0011_9E46()
{
	emu_movw(&emu_ax.x, 0x180);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0756); f__1FB5_0121_001B_F2B6();
	f__1FB5_0756_000E_F4A8();
}

/**
 * Decompiled function f__1FB5_0748_000E_1FB6()
 *
 * @name f__1FB5_0748_000E_1FB6
 * @implements 1FB5:0748:000E:1FB6 ()
 *
 * Called From: 1FB5:0743:0011:9CFD
 */
void f__1FB5_0748_000E_1FB6()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0756); f__1FB5_0121_001B_F2B6();
	f__1FB5_0756_000E_F4A8();
}

/**
 * Decompiled function f__1FB5_0756_000E_F4A8()
 *
 * @name f__1FB5_0756_000E_F4A8
 * @implements 1FB5:0756:000E:F4A8 ()
 *
 * Called From: 1FB5:0756:000E:1FB6
 * Called From: 1FB5:0756:0011:9E46
 */
void f__1FB5_0756_000E_F4A8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (emu_flags.zf) { f__1FB5_0766_000F_2958(); return; }
	f__1FB5_0780_0055_5423(); return;
}

/**
 * Decompiled function f__1FB5_0766_000F_2958()
 *
 * @name f__1FB5_0766_000F_2958
 * @implements 1FB5:0766:000F:2958 ()
 *
 * Called From: 1FB5:0760:000E:F4A8
 */
void f__1FB5_0766_000F_2958()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0775); f__1FB5_1B21_0027_1B5D();
	f__1FB5_0775_0009_DE17();
}

/**
 * Decompiled function f__1FB5_0775_0009_DE17()
 *
 * @name f__1FB5_0775_0009_DE17
 * @implements 1FB5:0775:0009:DE17 ()
 *
 * Called From: 1FB5:0775:000F:2958
 */
void f__1FB5_0775_0009_DE17()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_077E_0002_02DE(); return; }
	emu_ip = 0x071B; emu_last_cs = 0x1FB5; emu_last_ip = 0x077C; emu_last_length = 0x0009; emu_last_crc = 0xDE17; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_077E_0002_02DE()
 *
 * @name f__1FB5_077E_0002_02DE
 * @implements 1FB5:077E:0002:02DE ()
 *
 * Called From: 1FB5:077A:0009:DE17
 */
void f__1FB5_077E_0002_02DE()
{
	f__1FB5_0739_000C_BD6A(); return;
}

/**
 * Decompiled function f__1FB5_0780_0055_5423()
 *
 * @name f__1FB5_0780_0055_5423
 * @implements 1FB5:0780:0055:5423 ()
 *
 * Called From: 1FB5:0762:000E:F4A8
 */
void f__1FB5_0780_0055_5423()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__1FB5_07BE_0017_760E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1FB5_07BE_0017_760E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0xEF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0808; emu_last_cs = 0x1FB5; emu_last_ip = 0x07C2; emu_last_length = 0x0055; emu_last_crc = 0x5423; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x07D5); f__1FB5_0091_001B_F50E();
	f__1FB5_07D5_0030_7781();
}

/**
 * Decompiled function f__1FB5_07BE_0017_760E()
 *
 * @name f__1FB5_07BE_0017_760E
 * @implements 1FB5:07BE:0017:760E ()
 *
 * Called From: 1FB5:0784:0055:5423
 * Called From: 1FB5:078A:0055:5423
 */
void f__1FB5_07BE_0017_760E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1FB5_0808_009A_B39E(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x07D5); emu_ip = 0x0091; emu_last_cs = 0x1FB5; emu_last_ip = 0x07D2; emu_last_length = 0x0017; emu_last_crc = 0x760E; emu_call(); // Jump does not resolve
	f__1FB5_07D5_0030_7781();
}

/**
 * Decompiled function f__1FB5_07D5_0030_7781()
 *
 * @name f__1FB5_07D5_0030_7781
 * @implements 1FB5:07D5:0030:7781 ()
 *
 * Called From: 1FB5:07D5:0055:5423
 */
void f__1FB5_07D5_0030_7781()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_bx.x, 0x13);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0805); f__1FB5_0091_001B_F50E();
	f__1FB5_0805_009D_D382();
}

/**
 * Decompiled function f__1FB5_0805_009D_D382()
 *
 * @name f__1FB5_0805_009D_D382
 * @implements 1FB5:0805:009D:D382 ()
 *
 * Called From: 1FB5:0805:0030:7781
 */
void f__1FB5_0805_009D_D382()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x08A2; emu_last_cs = 0x1FB5; emu_last_ip = 0x0870; emu_last_length = 0x009D; emu_last_crc = 0xD382; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	f__1FB5_08BB_0009_30C9(); return;
}

/**
 * Decompiled function f__1FB5_0808_009A_B39E()
 *
 * @name f__1FB5_0808_009A_B39E
 * @implements 1FB5:0808:009A:B39E ()
 *
 * Called From: 1FB5:07C2:0017:760E
 */
void f__1FB5_0808_009A_B39E()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1FB5_08A2_0022_F168(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_ip = 0x08BB; emu_last_cs = 0x1FB5; emu_last_ip = 0x08A0; emu_last_length = 0x009A; emu_last_crc = 0xB39E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_08A2_0022_F168()
 *
 * @name f__1FB5_08A2_0022_F168
 * @implements 1FB5:08A2:0022:F168 ()
 *
 * Called From: 1FB5:0870:009A:B39E
 */
void f__1FB5_08A2_0022_F168()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x08C4; emu_last_cs = 0x1FB5; emu_last_ip = 0x08BF; emu_last_length = 0x0022; emu_last_crc = 0xF168; emu_call(); return; } // Jump does not resolve
	f__1FB5_09B8_0009_F827(); return;
}

/**
 * Decompiled function f__1FB5_08BB_0009_30C9()
 *
 * @name f__1FB5_08BB_0009_30C9
 * @implements 1FB5:08BB:0009:30C9 ()
 *
 * Called From: 1FB5:08A0:009D:D382
 */
void f__1FB5_08BB_0009_30C9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_08C4_001A_9741(); return; }
	emu_ip = 0x09B8; emu_last_cs = 0x1FB5; emu_last_ip = 0x08C1; emu_last_length = 0x0009; emu_last_crc = 0x30C9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_08C4_001A_9741()
 *
 * @name f__1FB5_08C4_001A_9741
 * @implements 1FB5:08C4:001A:9741 ()
 *
 * Called From: 1FB5:08BF:0009:30C9
 */
void f__1FB5_08C4_001A_9741()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x08DE; emu_last_cs = 0x1FB5; emu_last_ip = 0x08D9; emu_last_length = 0x001A; emu_last_crc = 0x9741; emu_call(); return; } // Jump does not resolve
	f__1FB5_09B8_0009_F827(); return;
}

/**
 * Decompiled function f__1FB5_09B8_0009_F827()
 *
 * @name f__1FB5_09B8_0009_F827
 * @implements 1FB5:09B8:0009:F827 ()
 *
 * Called From: 1FB5:056D:0006:3EA0
 * Called From: 1FB5:08C1:0022:F168
 * Called From: 1FB5:08DB:001A:9741
 */
void f__1FB5_09B8_0009_F827()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_di);
	f__1FB5_0722_0003_053C(); return;
}

/**
 * Decompiled function f__1FB5_09C1_0006_137A()
 *
 * @name f__1FB5_09C1_0006_137A
 * @implements 1FB5:09C1:0006:137A ()
 *
 * Called From: 1FB5:0722:0003:053C
 */
void f__1FB5_09C1_0006_137A()
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
 * Decompiled function f__1FB5_09C7_0018_F3A8()
 *
 * @name f__1FB5_09C7_0018_F3A8
 * @implements 1FB5:09C7:0018:F3A8 ()
 *
 * Called From: 0FCB:0127:0009:CF13
 * Called From: 253D:0034:000F:FB68
 * Called From: 253D:00E7:0009:CF13
 * Called From: 253D:0213:0009:CF13
 * Called From: 256D:00A0:0009:CF13
 * Called From: B495:1A59:0009:CF13
 * Called From: B4B1:001C:000B:FF15
 * Called From: B4B1:008F:0012:013D
 * Called From: B4CA:0251:000B:FA15
 * Called From: B4E0:06E6:0009:CE13
 * Called From: B4F2:007E:0009:CF13
 * Called From: B503:121A:0009:CF13
 * Called From: B518:081D:000F:0C2B
 * Called From: B52A:00D4:0016:5D42
 * Called From: B52A:00D4:001E:8979
 * Called From: B52A:043F:0009:CF53
 * Called From: B52A:0A53:0006:0812
 */
void f__1FB5_09C7_0018_F3A8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x09DF); f__1FB5_1A6C_0020_1B52();
	f__1FB5_09DF_000A_B29F();
}

/**
 * Decompiled function f__1FB5_09DF_000A_B29F()
 *
 * @name f__1FB5_09DF_000A_B29F
 * @implements 1FB5:09DF:000A:B29F ()
 *
 * Called From: 1FB5:09DF:0018:F3A8
 */
void f__1FB5_09DF_000A_B29F()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_09E9_0066_8CAF(); return; }
	emu_ip = 0x0A9A; emu_last_cs = 0x1FB5; emu_last_ip = 0x09E6; emu_last_length = 0x000A; emu_last_crc = 0xB29F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_09E9_0066_8CAF()
 *
 * @name f__1FB5_09E9_0066_8CAF
 * @implements 1FB5:09E9:0066:8CAF ()
 *
 * Called From: 1FB5:09E4:000A:B29F
 */
void f__1FB5_09E9_0066_8CAF()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_0A6F_0014_214A(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	if (emu_flags.zf) { f__1FB5_0A6F_0014_214A(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x8);
	if (emu_flags.zf) { emu_ip = 0x0A6D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0A30; emu_last_length = 0x0066; emu_last_crc = 0x8CAF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs); emu_push(0x0A4F); emu_cs = 0x23E1; emu_ip = 0x0C11; emu_last_cs = 0x1FB5; emu_last_ip = 0x0A4A; emu_last_length = 0x0066; emu_last_crc = 0x8CAF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0A6F_0014_214A()
 *
 * @name f__1FB5_0A6F_0014_214A
 * @implements 1FB5:0A6F:0014:214A ()
 *
 * Called From: 1FB5:0A00:0066:8CAF
 * Called From: 1FB5:0A1A:0066:8CAF
 */
void f__1FB5_0A6F_0014_214A()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_cs);
	emu_push(0x0A83); f__1FB5_0047_0012_481D();
	f__1FB5_0A83_001B_1EE1();
}

/**
 * Decompiled function f__1FB5_0A83_001B_1EE1()
 *
 * @name f__1FB5_0A83_001B_1EE1
 * @implements 1FB5:0A83:001B:1EE1 ()
 *
 * Called From: 1FB5:0A83:0014:214A
 */
void f__1FB5_0A83_001B_1EE1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x1);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0AEC_001B_7557()
 *
 * @name f__1FB5_0AEC_001B_7557
 * @implements 1FB5:0AEC:001B:7557 ()
 *
 * Called From: 0FCB:00F2:0015:E920
 * Called From: 0FCB:011E:0014:5907
 * Called From: 1FB5:0331:0017:4AEE
 * Called From: 1FB5:0331:001C:C2E3
 * Called From: 1FB5:04A0:0012:F4B1
 * Called From: 253D:0025:0017:4BA4
 * Called From: 253D:00DE:0023:8607
 * Called From: 253D:0132:0017:8A30
 * Called From: 253D:0148:0016:34AE
 * Called From: 253D:0172:002A:D0F1
 * Called From: 253D:020A:0019:B831
 * Called From: 256D:004A:0017:8C30
 * Called From: 256D:0097:002C:FD7C
 * Called From: B495:1A50:001A:C341
 * Called From: B4B1:0043:0017:8833
 * Called From: B4B1:00BD:0012:F743
 * Called From: B4B1:00BD:002A:4C8A
 * Called From: B4B1:00EE:001A:A699
 * Called From: B4B1:0117:0012:F343
 * Called From: B4B1:01F2:0012:F743
 * Called From: B4B1:01F2:002A:4C8A
 * Called From: B4B1:024C:0012:F343
 * Called From: B4B1:02C4:001E:5CB6
 * Called From: B4CA:0246:0014:0B5D
 * Called From: B4E0:06B5:0015:FF63
 * Called From: B503:1211:0015:6844
 * Called From: B52A:002B:0017:C838
 * Called From: B52A:035E:001A:2D66
 * Called From: B52A:039B:0026:DEBD
 * Called From: B52A:0436:0015:94F5
 * Called From: B52A:0881:0015:EB23
 * Called From: B52A:0A3E:001B:832B
 */
void f__1FB5_0AEC_001B_7557()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0B07); f__1FB5_1A6C_0020_1B52();
	f__1FB5_0B07_000E_5711();
}

/**
 * Decompiled function f__1FB5_0B07_000E_5711()
 *
 * @name f__1FB5_0B07_000E_5711
 * @implements 1FB5:0B07:000E:5711 ()
 *
 * Called From: 1FB5:0B07:001B:7557
 */
void f__1FB5_0B07_000E_5711()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_0B15_0050_FCF4(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0E96; emu_last_cs = 0x1FB5; emu_last_ip = 0x0B12; emu_last_length = 0x000E; emu_last_crc = 0x5711; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0B12_0003_054A()
 *
 * @name f__1FB5_0B12_0003_054A
 * @implements 1FB5:0B12:0003:054A ()
 *
 * Called From: 1FB5:0E93:000D:3E3F
 */
void f__1FB5_0B12_0003_054A()
{
	f__1FB5_0E96_0006_137A(); return;
}

/**
 * Decompiled function f__1FB5_0B15_0050_FCF4()
 *
 * @name f__1FB5_0B15_0050_FCF4
 * @implements 1FB5:0B15:0050:FCF4 ()
 *
 * Called From: 1FB5:0B0C:000E:5711
 */
void f__1FB5_0B15_0050_FCF4()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1FB5_0B65_0008_C8A0(); return; }
	f__1FB5_0BFB_0015_E024(); return;
}

/**
 * Decompiled function f__1FB5_0B65_0008_C8A0()
 *
 * @name f__1FB5_0B65_0008_C8A0
 * @implements 1FB5:0B65:0008:C8A0 ()
 *
 * Called From: 1FB5:0B60:0050:FCF4
 */
void f__1FB5_0B65_0008_C8A0()
{
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__1FB5_0B6D_0082_53D5(); return; }
	emu_ip = 0x0BFB; emu_last_cs = 0x1FB5; emu_last_ip = 0x0B6A; emu_last_length = 0x0008; emu_last_crc = 0xC8A0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0B6D_0082_53D5()
 *
 * @name f__1FB5_0B6D_0082_53D5
 * @implements 1FB5:0B6D:0082:53D5 ()
 *
 * Called From: 1FB5:0B68:0008:C8A0
 */
void f__1FB5_0B6D_0082_53D5()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	if (emu_flags.zf) { emu_ip = 0x0BFB; emu_last_cs = 0x1FB5; emu_last_ip = 0x0B85; emu_last_length = 0x0082; emu_last_crc = 0x53D5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_subw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1FB5_0BEF_0021_844C(); return; }
	if (emu_flags.cf) { f__1FB5_0BC0_002F_98D4(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { f__1FB5_0BEF_0021_844C(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	f__1FB5_0BF5_001B_4521(); return;
}

/**
 * Decompiled function f__1FB5_0BC0_002F_98D4()
 *
 * @name f__1FB5_0BC0_002F_98D4
 * @implements 1FB5:0BC0:002F:98D4 ()
 *
 * Called From: 1FB5:0BB9:0082:53D5
 */
void f__1FB5_0BC0_002F_98D4()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	f__1FB5_0BF5_001B_4521(); return;
}

/**
 * Decompiled function f__1FB5_0BEF_0021_844C()
 *
 * @name f__1FB5_0BEF_0021_844C
 * @implements 1FB5:0BEF:0021:844C ()
 *
 * Called From: 1FB5:0BB7:0082:53D5
 * Called From: 1FB5:0BBE:0082:53D5
 */
void f__1FB5_0BEF_0021_844C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1FB5_0C10_000B_EC28(); return; }
	f__1FB5_0E89_000D_3E3F(); return;
}

/**
 * Decompiled function f__1FB5_0BF5_001B_4521()
 *
 * @name f__1FB5_0BF5_001B_4521
 * @implements 1FB5:0BF5:001B:4521 ()
 *
 * Called From: 1FB5:0BED:002F:98D4
 * Called From: 1FB5:0BED:0082:53D5
 */
void f__1FB5_0BF5_001B_4521()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1FB5_0C10_000B_EC28(); return; }
	f__1FB5_0E89_000D_3E3F(); return;
}

/**
 * Decompiled function f__1FB5_0BFB_0015_E024()
 *
 * @name f__1FB5_0BFB_0015_E024
 * @implements 1FB5:0BFB:0015:E024 ()
 *
 * Called From: 1FB5:0B62:0050:FCF4
 */
void f__1FB5_0BFB_0015_E024()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1FB5_0C10_000B_EC28(); return; }
	emu_ip = 0x0E89; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C0D; emu_last_length = 0x0015; emu_last_crc = 0xE024; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0C10_000B_EC28()
 *
 * @name f__1FB5_0C10_000B_EC28
 * @implements 1FB5:0C10:000B:EC28 ()
 *
 * Called From: 1FB5:0C0B:0015:E024
 * Called From: 1FB5:0C0B:001B:4521
 * Called From: 1FB5:0C0B:0021:844C
 */
void f__1FB5_0C10_000B_EC28()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0C1B); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1FB5_0C1B_0011_CD36();
}

/**
 * Decompiled function f__1FB5_0C1B_0011_CD36()
 *
 * @name f__1FB5_0C1B_0011_CD36
 * @implements 1FB5:0C1B:0011:CD36 ()
 *
 * Called From: 1FB5:0C1B:000B:EC28
 */
void f__1FB5_0C1B_0011_CD36()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1FB5_0C2C_000B_EA96(); return; }
	emu_ip = 0x0E03; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C29; emu_last_length = 0x0011; emu_last_crc = 0xCD36; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0C2C_000B_EA96()
 *
 * @name f__1FB5_0C2C_000B_EA96
 * @implements 1FB5:0C2C:000B:EA96 ()
 *
 * Called From: 1FB5:0C27:0011:CD36
 */
void f__1FB5_0C2C_000B_EA96()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0C37); emu_cs = 0x2649; f__2649_0BAE_001D_D0BE();
	f__1FB5_0C37_0009_D73E();
}

/**
 * Decompiled function f__1FB5_0C37_0009_D73E()
 *
 * @name f__1FB5_0C37_0009_D73E
 * @implements 1FB5:0C37:0009:D73E ()
 *
 * Called From: 1FB5:0C37:000B:EA96
 */
void f__1FB5_0C37_0009_D73E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0C40; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C3B; emu_last_length = 0x0009; emu_last_crc = 0xD73E; emu_call(); return; } // Jump does not resolve
	f__1FB5_0D59_0003_052C(); return;
}

/**
 * Decompiled function f__1FB5_0D59_0003_052C()
 *
 * @name f__1FB5_0D59_0003_052C
 * @implements 1FB5:0D59:0003:052C ()
 *
 * Called From: 1FB5:0C3D:0009:D73E
 */
void f__1FB5_0D59_0003_052C()
{
	f__1FB5_0DF5_000B_7AF3(); return;
}

/**
 * Decompiled function f__1FB5_0D5C_0014_E895()
 *
 * @name f__1FB5_0D5C_0014_E895
 * @implements 1FB5:0D5C:0014:E895 ()
 *
 * Called From: 1FB5:0DFD:000B:7AF3
 * Called From: 1FB5:0DFD:0013:7834
 */
void f__1FB5_0D5C_0014_E895()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { f__1FB5_0D70_0011_33D7(); return; }
	if (emu_flags.cf) { emu_ip = 0x0D6B; emu_last_cs = 0x1FB5; emu_last_ip = 0x0D62; emu_last_length = 0x0014; emu_last_crc = 0xE895; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x7D00);
	if (!emu_flags.cf) { f__1FB5_0D70_0011_33D7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	f__1FB5_0D73_000E_B299(); return;
}

/**
 * Decompiled function f__1FB5_0D70_0011_33D7()
 *
 * @name f__1FB5_0D70_0011_33D7
 * @implements 1FB5:0D70:0011:33D7 ()
 *
 * Called From: 1FB5:0D60:0014:E895
 * Called From: 1FB5:0D69:0014:E895
 */
void f__1FB5_0D70_0011_33D7()
{
	emu_movw(&emu_ax.x, 0x7D00);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0D81); f__1FB5_00C5_001B_F75E();
	f__1FB5_0D81_004F_8DE6();
}

/**
 * Decompiled function f__1FB5_0D73_000E_B299()
 *
 * @name f__1FB5_0D73_000E_B299
 * @implements 1FB5:0D73:000E:B299 ()
 *
 * Called From: 1FB5:0D6E:0014:E895
 */
void f__1FB5_0D73_000E_B299()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0D81); f__1FB5_00C5_001B_F75E();
	f__1FB5_0D81_004F_8DE6();
}

/**
 * Decompiled function f__1FB5_0D81_004F_8DE6()
 *
 * @name f__1FB5_0D81_004F_8DE6
 * @implements 1FB5:0D81:004F:8DE6 ()
 *
 * Called From: 1FB5:0D81:000E:B299
 * Called From: 1FB5:0D81:0011:33D7
 */
void f__1FB5_0D81_004F_8DE6()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_es, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_cx.x);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DD0; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DC3; emu_last_length = 0x004F; emu_last_crc = 0x8DE6; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCE; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DC5; emu_last_length = 0x004F; emu_last_crc = 0x8DE6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x7D00);
	if (!emu_flags.cf) { f__1FB5_0DD0_001D_3FD6(); return; }
	f__1FB5_0E00_0003_0550(); return;
}

/**
 * Decompiled function f__1FB5_0DD0_001D_3FD6()
 *
 * @name f__1FB5_0DD0_001D_3FD6
 * @implements 1FB5:0DD0:001D:3FD6 ()
 *
 * Called From: 1FB5:0DCC:004F:8DE6
 */
void f__1FB5_0DD0_001D_3FD6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0DED); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1FB5_0DED_0013_7834();
}

/**
 * Decompiled function f__1FB5_0DED_0013_7834()
 *
 * @name f__1FB5_0DED_0013_7834
 * @implements 1FB5:0DED:0013:7834 ()
 *
 * Called From: 1FB5:0DED:001D:3FD6
 */
void f__1FB5_0DED_0013_7834()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { emu_ip = 0x0E00; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DFB; emu_last_length = 0x0013; emu_last_crc = 0x7834; emu_call(); return; } // Jump does not resolve
	f__1FB5_0D5C_0014_E895(); return;
}

/**
 * Decompiled function f__1FB5_0DF5_000B_7AF3()
 *
 * @name f__1FB5_0DF5_000B_7AF3
 * @implements 1FB5:0DF5:000B:7AF3 ()
 *
 * Called From: 1FB5:0D59:0003:052C
 */
void f__1FB5_0DF5_000B_7AF3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { emu_ip = 0x0E00; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DFB; emu_last_length = 0x000B; emu_last_crc = 0x7AF3; emu_call(); return; } // Jump does not resolve
	f__1FB5_0D5C_0014_E895(); return;
}

/**
 * Decompiled function f__1FB5_0E00_0003_0550()
 *
 * @name f__1FB5_0E00_0003_0550
 * @implements 1FB5:0E00:0003:0550 ()
 *
 * Called From: 1FB5:0DCE:004F:8DE6
 */
void f__1FB5_0E00_0003_0550()
{
	f__1FB5_0E89_000D_3E3F(); return;
}

/**
 * Decompiled function f__1FB5_0E89_000D_3E3F()
 *
 * @name f__1FB5_0E89_000D_3E3F
 * @implements 1FB5:0E89:000D:3E3F ()
 *
 * Called From: 1FB5:0C0D:001B:4521
 * Called From: 1FB5:0C0D:0021:844C
 * Called From: 1FB5:0E00:0003:0550
 */
void f__1FB5_0E89_000D_3E3F()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__1FB5_0B12_0003_054A(); return;
}

/**
 * Decompiled function f__1FB5_0E96_0006_137A()
 *
 * @name f__1FB5_0E96_0006_137A
 * @implements 1FB5:0E96:0006:137A ()
 *
 * Called From: 1FB5:0B12:0003:054A
 */
void f__1FB5_0E96_0006_137A()
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
 * Decompiled function f__1FB5_0E9C_001B_711F()
 *
 * @name f__1FB5_0E9C_001B_711F
 * @implements 1FB5:0E9C:001B:711F ()
 *
 * Called From: B4F2:0075:0017:AE15
 * Called From: B518:080E:0018:F5C6
 */
void f__1FB5_0E9C_001B_711F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0EB7); f__1FB5_1A6C_0020_1B52();
	f__1FB5_0EB7_000E_55E5();
}

/**
 * Decompiled function f__1FB5_0EB7_000E_55E5()
 *
 * @name f__1FB5_0EB7_000E_55E5
 * @implements 1FB5:0EB7:000E:55E5 ()
 *
 * Called From: 1FB5:0EB7:001B:711F
 */
void f__1FB5_0EB7_000E_55E5()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_0EC5_004A_BD3D(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1201; emu_last_cs = 0x1FB5; emu_last_ip = 0x0EC2; emu_last_length = 0x000E; emu_last_crc = 0x55E5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0EC2_0003_07BE()
 *
 * @name f__1FB5_0EC2_0003_07BE
 * @implements 1FB5:0EC2:0003:07BE ()
 *
 * Called From: 1FB5:11FE:000D:3E0B
 */
void f__1FB5_0EC2_0003_07BE()
{
	f__1FB5_1201_0006_137A(); return;
}

/**
 * Decompiled function f__1FB5_0EC5_004A_BD3D()
 *
 * @name f__1FB5_0EC5_004A_BD3D
 * @implements 1FB5:0EC5:004A:BD3D ()
 *
 * Called From: 1FB5:0EBC:000E:55E5
 */
void f__1FB5_0EC5_004A_BD3D()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1FB5_0F14_0019_9B2D(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F0F); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F0C; emu_last_length = 0x004A; emu_last_crc = 0xBD3D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0F14_0019_9B2D()
 *
 * @name f__1FB5_0F14_0019_9B2D
 * @implements 1FB5:0F14:0019:9B2D ()
 *
 * Called From: 1FB5:0EEC:004A:BD3D
 */
void f__1FB5_0F14_0019_9B2D()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0F2D); emu_cs = 0x2649; f__2649_0BAE_001D_D0BE();
	f__1FB5_0F2D_0009_D532();
}

/**
 * Decompiled function f__1FB5_0F2D_0009_D532()
 *
 * @name f__1FB5_0F2D_0009_D532
 * @implements 1FB5:0F2D:0009:D532 ()
 *
 * Called From: 1FB5:0F2D:0019:9B2D
 */
void f__1FB5_0F2D_0009_D532()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0F36; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F31; emu_last_length = 0x0009; emu_last_crc = 0xD532; emu_call(); return; } // Jump does not resolve
	f__1FB5_10D0_0003_0712(); return;
}

/**
 * Decompiled function f__1FB5_10D0_0003_0712()
 *
 * @name f__1FB5_10D0_0003_0712
 * @implements 1FB5:10D0:0003:0712 ()
 *
 * Called From: 1FB5:0F33:0009:D532
 */
void f__1FB5_10D0_0003_0712()
{
	f__1FB5_11E9_000B_78FD(); return;
}

/**
 * Decompiled function f__1FB5_10D3_0014_689E()
 *
 * @name f__1FB5_10D3_0014_689E
 * @implements 1FB5:10D3:0014:689E ()
 *
 * Called From: 1FB5:11F1:000B:78FD
 */
void f__1FB5_10D3_0014_689E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x10E7; emu_last_cs = 0x1FB5; emu_last_ip = 0x10D7; emu_last_length = 0x0014; emu_last_crc = 0x689E; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x10E2; emu_last_cs = 0x1FB5; emu_last_ip = 0x10D9; emu_last_length = 0x0014; emu_last_crc = 0x689E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x7D00);
	if (!emu_flags.cf) { emu_ip = 0x10E7; emu_last_cs = 0x1FB5; emu_last_ip = 0x10E0; emu_last_length = 0x0014; emu_last_crc = 0x689E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	f__1FB5_10EA_000E_B05D(); return;
}

/**
 * Decompiled function f__1FB5_10EA_000E_B05D()
 *
 * @name f__1FB5_10EA_000E_B05D
 * @implements 1FB5:10EA:000E:B05D ()
 *
 * Called From: 1FB5:10E5:0014:689E
 */
void f__1FB5_10EA_000E_B05D()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x10F8); f__1FB5_00F3_001B_F9B6();
	f__1FB5_10F8_0049_3B64();
}

/**
 * Decompiled function f__1FB5_10F8_0049_3B64()
 *
 * @name f__1FB5_10F8_0049_3B64
 * @implements 1FB5:10F8:0049:3B64 ()
 *
 * Called From: 1FB5:10F8:000E:B05D
 */
void f__1FB5_10F8_0049_3B64()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_es, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_cx.x);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__1FB5_1141_0052_26C8(); return; }
	emu_ip = 0x11F4; emu_last_cs = 0x1FB5; emu_last_ip = 0x113E; emu_last_length = 0x0049; emu_last_crc = 0x3B64; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1141_0052_26C8()
 *
 * @name f__1FB5_1141_0052_26C8
 * @implements 1FB5:1141:0052:26C8 ()
 *
 * Called From: 1FB5:113C:0049:3B64
 */
void f__1FB5_1141_0052_26C8()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1FB5_11C4_001D_3F66(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	if (emu_flags.cf) { emu_ip = 0x1193; emu_last_cs = 0x1FB5; emu_last_ip = 0x116E; emu_last_length = 0x0052; emu_last_crc = 0x26C8; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1179; emu_last_cs = 0x1FB5; emu_last_ip = 0x1170; emu_last_length = 0x0052; emu_last_crc = 0x26C8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1193; emu_last_cs = 0x1FB5; emu_last_ip = 0x1177; emu_last_length = 0x0052; emu_last_crc = 0x26C8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_ip = 0x11A8; emu_last_cs = 0x1FB5; emu_last_ip = 0x1191; emu_last_length = 0x0052; emu_last_crc = 0x26C8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_11C4_001D_3F66()
 *
 * @name f__1FB5_11C4_001D_3F66
 * @implements 1FB5:11C4:001D:3F66 ()
 *
 * Called From: 1FB5:1144:0052:26C8
 */
void f__1FB5_11C4_001D_3F66()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x11E1); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__1FB5_11E1_0013_7A3A();
}

/**
 * Decompiled function f__1FB5_11E1_0013_7A3A()
 *
 * @name f__1FB5_11E1_0013_7A3A
 * @implements 1FB5:11E1:0013:7A3A ()
 *
 * Called From: 1FB5:11E1:001D:3F66
 */
void f__1FB5_11E1_0013_7A3A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { f__1FB5_11F4_000D_3E0B(); return; }
	emu_ip = 0x10D3; emu_last_cs = 0x1FB5; emu_last_ip = 0x11F1; emu_last_length = 0x0013; emu_last_crc = 0x7A3A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_11E9_000B_78FD()
 *
 * @name f__1FB5_11E9_000B_78FD
 * @implements 1FB5:11E9:000B:78FD ()
 *
 * Called From: 1FB5:10D0:0003:0712
 */
void f__1FB5_11E9_000B_78FD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { emu_ip = 0x11F4; emu_last_cs = 0x1FB5; emu_last_ip = 0x11EF; emu_last_length = 0x000B; emu_last_crc = 0x78FD; emu_call(); return; } // Jump does not resolve
	f__1FB5_10D3_0014_689E(); return;
}

/**
 * Decompiled function f__1FB5_11F4_000D_3E0B()
 *
 * @name f__1FB5_11F4_000D_3E0B
 * @implements 1FB5:11F4:000D:3E0B ()
 *
 * Called From: 1FB5:11EF:0013:7A3A
 */
void f__1FB5_11F4_000D_3E0B()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__1FB5_0EC2_0003_07BE(); return;
}

/**
 * Decompiled function f__1FB5_1201_0006_137A()
 *
 * @name f__1FB5_1201_0006_137A
 * @implements 1FB5:1201:0006:137A ()
 *
 * Called From: 1FB5:0EC2:0003:07BE
 */
void f__1FB5_1201_0006_137A()
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
 * Decompiled function f__1FB5_1207_001B_7505()
 *
 * @name f__1FB5_1207_001B_7505
 * @implements 1FB5:1207:001B:7505 ()
 *
 * Called From: 0FCB:00DD:0017:38F8
 * Called From: 0FCB:010A:0018:47C7
 * Called From: 1FB5:0567:0050:DE2C
 * Called From: 1FB5:0567:00AD:92E0
 * Called From: 253D:0185:000E:9367
 * Called From: B4B1:0065:0022:37A8
 * Called From: B4B1:0163:002A:5DE9
 * Called From: B4B1:0186:0016:DCD0
 * Called From: B4B1:01B7:0028:EDF9
 * Called From: B4B1:0309:0045:9B22
 * Called From: B4B1:032C:0016:DCD0
 * Called From: B4B1:035D:0028:EDF9
 * Called From: B4E0:06A0:0014:9009
 * Called From: B503:11E4:0015:3AA1
 * Called From: B503:11FC:0018:5709
 * Called From: B52A:008B:0015:3E4D
 * Called From: B52A:0344:001E:AB94
 * Called From: B52A:0375:0017:1CF6
 * Called From: B52A:0421:001F:7C95
 * Called From: B52A:086C:0021:C8B0
 * Called From: B52A:0A05:000F:FBE7
 */
void f__1FB5_1207_001B_7505()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1222); f__1FB5_1A6C_0020_1B52();
	f__1FB5_1222_000E_55ED();
}

/**
 * Decompiled function f__1FB5_1222_000E_55ED()
 *
 * @name f__1FB5_1222_000E_55ED
 * @implements 1FB5:1222:000E:55ED ()
 *
 * Called From: 1FB5:1222:001B:7505
 */
void f__1FB5_1222_000E_55ED()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_1230_0033_4314(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x156E; emu_last_cs = 0x1FB5; emu_last_ip = 0x122D; emu_last_length = 0x000E; emu_last_crc = 0x55ED; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_122D_0003_07B6()
 *
 * @name f__1FB5_122D_0003_07B6
 * @implements 1FB5:122D:0003:07B6 ()
 *
 * Called From: 1FB5:13E5:002B:CFDE
 * Called From: 1FB5:156B:001C:4787
 * Called From: 1FB5:156B:0068:0520
 */
void f__1FB5_122D_0003_07B6()
{
	f__1FB5_156E_0006_137A(); return;
}

/**
 * Decompiled function f__1FB5_1230_0033_4314()
 *
 * @name f__1FB5_1230_0033_4314
 * @implements 1FB5:1230:0033:4314 ()
 *
 * Called From: 1FB5:1227:000E:55ED
 */
void f__1FB5_1230_0033_4314()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1263; emu_last_cs = 0x1FB5; emu_last_ip = 0x125E; emu_last_length = 0x0033; emu_last_crc = 0x4314; emu_call(); return; } // Jump does not resolve
	f__1FB5_1369_0009_320B(); return;
}

/**
 * Decompiled function f__1FB5_1369_0009_320B()
 *
 * @name f__1FB5_1369_0009_320B
 * @implements 1FB5:1369:0009:320B ()
 *
 * Called From: 1FB5:1260:0033:4314
 */
void f__1FB5_1369_0009_320B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFF);
	if (!emu_flags.zf) { f__1FB5_1372_001A_9603(); return; }
	emu_ip = 0x14F6; emu_last_cs = 0x1FB5; emu_last_ip = 0x136F; emu_last_length = 0x0009; emu_last_crc = 0x320B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1372_001A_9603()
 *
 * @name f__1FB5_1372_001A_9603
 * @implements 1FB5:1372:001A:9603 ()
 *
 * Called From: 1FB5:136D:0009:320B
 */
void f__1FB5_1372_001A_9603()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (!emu_flags.zf) { f__1FB5_138C_0031_2940(); return; }
	emu_ip = 0x14F6; emu_last_cs = 0x1FB5; emu_last_ip = 0x1389; emu_last_length = 0x001A; emu_last_crc = 0x9603; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_138C_0031_2940()
 *
 * @name f__1FB5_138C_0031_2940
 * @implements 1FB5:138C:0031:2940 ()
 *
 * Called From: 1FB5:1387:001A:9603
 */
void f__1FB5_138C_0031_2940()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!emu_flags.zf) { f__1FB5_13E8_0009_776F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_addw(&emu_cx.x, emu_get_memory16(emu_es, emu_si,  0xC));
	emu_adcw(&emu_bx.x, emu_get_memory16(emu_es, emu_si,  0xE));
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x13BD); f__1FB5_0091_001B_F50E();
	f__1FB5_13BD_002B_CFDE();
}

/**
 * Decompiled function f__1FB5_13BD_002B_CFDE()
 *
 * @name f__1FB5_13BD_002B_CFDE
 * @implements 1FB5:13BD:002B:CFDE ()
 *
 * Called From: 1FB5:13BD:0031:2940
 */
void f__1FB5_13BD_002B_CFDE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_cx.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	f__1FB5_122D_0003_07B6(); return;
}

/**
 * Decompiled function f__1FB5_13E8_0009_776F()
 *
 * @name f__1FB5_13E8_0009_776F
 * @implements 1FB5:13E8:0009:776F ()
 *
 * Called From: 1FB5:1390:0031:2940
 */
void f__1FB5_13E8_0009_776F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x2);
	if (emu_flags.zf) { f__1FB5_13F1_0016_D246(); return; }
	f__1FB5_14F6_0010_B146(); return;
}

/**
 * Decompiled function f__1FB5_13F1_0016_D246()
 *
 * @name f__1FB5_13F1_0016_D246
 * @implements 1FB5:13F1:0016:D246 ()
 *
 * Called From: 1FB5:13EC:0009:776F
 */
void f__1FB5_13F1_0016_D246()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1407; emu_last_cs = 0x1FB5; emu_last_ip = 0x13F5; emu_last_length = 0x0016; emu_last_crc = 0xD246; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x13FF; emu_last_cs = 0x1FB5; emu_last_ip = 0x13F7; emu_last_length = 0x0016; emu_last_crc = 0xD246; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1FB5_1407_003D_934C(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ip = 0x140B; emu_last_cs = 0x1FB5; emu_last_ip = 0x1405; emu_last_length = 0x0016; emu_last_crc = 0xD246; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1407_003D_934C()
 *
 * @name f__1FB5_1407_003D_934C
 * @implements 1FB5:1407:003D:934C ()
 *
 * Called From: 1FB5:13FD:0016:D246
 */
void f__1FB5_1407_003D_934C()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addws(&emu_dx.x, 0xFF);
	emu_adcw(&emu_ax.x, 0xFFFF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1444; emu_last_cs = 0x1FB5; emu_last_ip = 0x1433; emu_last_length = 0x003D; emu_last_crc = 0x934C; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1FB5_143C_0008_B452(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1444; emu_last_cs = 0x1FB5; emu_last_ip = 0x143A; emu_last_length = 0x003D; emu_last_crc = 0x934C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	f__1FB5_1463_0054_4780(); return;
}

/**
 * Decompiled function f__1FB5_143C_0008_B452()
 *
 * @name f__1FB5_143C_0008_B452
 * @implements 1FB5:143C:0008:B452 ()
 *
 * Called From: 1FB5:1435:003D:934C
 */
void f__1FB5_143C_0008_B452()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	f__1FB5_1463_0054_4780(); return;
}

/**
 * Decompiled function f__1FB5_1463_0054_4780()
 *
 * @name f__1FB5_1463_0054_4780
 * @implements 1FB5:1463:0054:4780 ()
 *
 * Called From: 1FB5:1442:0008:B452
 * Called From: 1FB5:1442:003D:934C
 */
void f__1FB5_1463_0054_4780()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, 0x13);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_pop(&emu_dx.x);
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0xFFFF);
	emu_adcws(&emu_dx.x, 0xFF);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x14B7); f__1FB5_0091_001B_F50E();
	f__1FB5_14B7_003F_9BBF();
}

/**
 * Decompiled function f__1FB5_14B7_003F_9BBF()
 *
 * @name f__1FB5_14B7_003F_9BBF
 * @implements 1FB5:14B7:003F:9BBF ()
 *
 * Called From: 1FB5:14B7:0054:4780
 */
void f__1FB5_14B7_003F_9BBF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addws(&emu_dx.x, 0xFF);
	emu_adcw(&emu_ax.x, 0xFFFF);
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_dx.x);
	f__1FB5_1552_001C_4787(); return;
}

/**
 * Decompiled function f__1FB5_14F6_0010_B146()
 *
 * @name f__1FB5_14F6_0010_B146
 * @implements 1FB5:14F6:0010:B146 ()
 *
 * Called From: 1FB5:13EE:0009:776F
 */
void f__1FB5_14F6_0010_B146()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x1506); f__1FB5_0091_001B_F50E();
	f__1FB5_1506_0068_0520();
}

/**
 * Decompiled function f__1FB5_1506_0068_0520()
 *
 * @name f__1FB5_1506_0068_0520
 * @implements 1FB5:1506:0068:0520 ()
 *
 * Called From: 1FB5:1506:0010:B146
 */
void f__1FB5_1506_0068_0520()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1552; emu_last_cs = 0x1FB5; emu_last_ip = 0x1522; emu_last_length = 0x0068; emu_last_crc = 0x0520; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, 0x33E0);
	emu_movw(&emu_es, emu_cx.x);
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1FB5_122D_0003_07B6(); return;
}

/**
 * Decompiled function f__1FB5_1552_001C_4787()
 *
 * @name f__1FB5_1552_001C_4787
 * @implements 1FB5:1552:001C:4787 ()
 *
 * Called From: 1FB5:14F4:003F:9BBF
 */
void f__1FB5_1552_001C_4787()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1FB5_122D_0003_07B6(); return;
}

/**
 * Decompiled function f__1FB5_156E_0006_137A()
 *
 * @name f__1FB5_156E_0006_137A
 * @implements 1FB5:156E:0006:137A ()
 *
 * Called From: 1FB5:122D:0003:07B6
 */
void f__1FB5_156E_0006_137A()
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
 * Decompiled function f__1FB5_1574_000F_1723()
 *
 * @name f__1FB5_1574_000F_1723
 * @implements 1FB5:1574:000F:1723 ()
 *
 * Called From: 1FB5:0712:0012:3213
 */
void f__1FB5_1574_000F_1723()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1FB5_1583_0002_039C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x15B3; emu_last_cs = 0x1FB5; emu_last_ip = 0x1581; emu_last_length = 0x000F; emu_last_crc = 0x1723; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1581_0002_03CC()
 *
 * @name f__1FB5_1581_0002_03CC
 * @implements 1FB5:1581:0002:03CC ()
 *
 * Called From: 1FB5:15B1:000B:60E3
 */
void f__1FB5_1581_0002_03CC()
{
	f__1FB5_15B3_0002_00E2(); return;
}

/**
 * Decompiled function f__1FB5_1583_0002_039C()
 *
 * @name f__1FB5_1583_0002_039C
 * @implements 1FB5:1583:0002:039C ()
 *
 * Called From: 1FB5:157D:000F:1723
 */
void f__1FB5_1583_0002_039C()
{
	f__1FB5_159D_000B_E012(); return;
}

/**
 * Decompiled function f__1FB5_159D_000B_E012()
 *
 * @name f__1FB5_159D_000B_E012
 * @implements 1FB5:159D:000B:E012 ()
 *
 * Called From: 1FB5:1583:0002:039C
 */
void f__1FB5_159D_000B_E012()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x15A8); f__1FB5_15B5_0015_6875();
	f__1FB5_15A8_000B_60E3();
}

/**
 * Decompiled function f__1FB5_15A8_000B_60E3()
 *
 * @name f__1FB5_15A8_000B_60E3
 * @implements 1FB5:15A8:000B:60E3 ()
 *
 * Called From: 1FB5:15A8:000B:E012
 */
void f__1FB5_15A8_000B_60E3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1585; emu_last_cs = 0x1FB5; emu_last_ip = 0x15AC; emu_last_length = 0x000B; emu_last_crc = 0x60E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__1FB5_1581_0002_03CC(); return;
}

/**
 * Decompiled function f__1FB5_15B3_0002_00E2()
 *
 * @name f__1FB5_15B3_0002_00E2
 * @implements 1FB5:15B3:0002:00E2 ()
 *
 * Called From: 1FB5:1581:0002:03CC
 */
void f__1FB5_15B3_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_15B5_0015_6875()
 *
 * @name f__1FB5_15B5_0015_6875
 * @implements 1FB5:15B5:0015:6875 ()
 *
 * Called From: 15C2:0112:0022:659A
 * Called From: 15C2:0112:0024:60AA
 * Called From: 1DB6:00F7:000E:2FEC
 * Called From: 1FB5:072F:000B:E236
 * Called From: 1FB5:15A5:000B:E012
 * Called From: 1FB5:1659:0058:7FBB
 * Called From: 256D:001B:001C:37ED
 * Called From: B4B5:0054:000D:254F
 * Called From: B4B8:1188:000B:EFD4
 * Called From: B4B8:1B8B:000F:F73F
 * Called From: B4B8:1B9A:000F:CA7B
 * Called From: B4B8:1BD2:0018:8079
 * Called From: B4B8:1E14:000C:B254
 * Called From: B4F2:0008:000D:D456
 * Called From: B518:0572:000F:1135
 * Called From: B518:05A0:0011:C16E
 */
void f__1FB5_15B5_0015_6875()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1FB5_15CA_0018_1B2C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x16CF; emu_last_cs = 0x1FB5; emu_last_ip = 0x15C7; emu_last_length = 0x0015; emu_last_crc = 0x6875; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_15C5_0005_0D3E()
 *
 * @name f__1FB5_15C5_0005_0D3E
 * @implements 1FB5:15C5:0005:0D3E ()
 *
 * Called From: 1FB5:1669:000B:18C7
 */
void f__1FB5_15C5_0005_0D3E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1FB5_16CF_0006_137A(); return;
}

/**
 * Decompiled function f__1FB5_15C7_0003_075E()
 *
 * @name f__1FB5_15C7_0003_075E
 * @implements 1FB5:15C7:0003:075E ()
 *
 * Called From: 1FB5:15F7:0003:0030
 * Called From: 1FB5:165E:0005:099E
 */
void f__1FB5_15C7_0003_075E()
{
	f__1FB5_16CF_0006_137A(); return;
}

/**
 * Decompiled function f__1FB5_15CA_0018_1B2C()
 *
 * @name f__1FB5_15CA_0018_1B2C
 * @implements 1FB5:15CA:0018:1B2C ()
 *
 * Called From: 1FB5:15C3:0015:6875
 */
void f__1FB5_15CA_0018_1B2C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6796), 0xFFFF);
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8001);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x15E2); f__1FB5_0121_001B_F2B6();
	f__1FB5_15E2_000F_C9F1();
}

/**
 * Decompiled function f__1FB5_15E2_000F_C9F1()
 *
 * @name f__1FB5_15E2_000F_C9F1
 * @implements 1FB5:15E2:000F:C9F1 ()
 *
 * Called From: 1FB5:15E2:0018:1B2C
 */
void f__1FB5_15E2_000F_C9F1()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1FB5_15F9_000B_E2F6(); return; }
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x15F1); f__1FB5_0047_0012_481D();
	f__1FB5_15F1_0005_0D68();
}

/**
 * Decompiled function f__1FB5_15F1_0005_0D68()
 *
 * @name f__1FB5_15F1_0005_0D68
 * @implements 1FB5:15F1:0005:0D68 ()
 *
 * Called From: 1FB5:15F1:000F:C9F1
 */
void f__1FB5_15F1_0005_0D68()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x15F6); f__1FB5_0005_000F_6025();
	f__1FB5_15F6_0003_0030();
}

/**
 * Decompiled function f__1FB5_15F6_0003_0030()
 *
 * @name f__1FB5_15F6_0003_0030
 * @implements 1FB5:15F6:0003:0030 ()
 *
 * Called From: 1FB5:15F6:0005:0D68
 */
void f__1FB5_15F6_0003_0030()
{
	emu_incw(&emu_ax.x);
	f__1FB5_15C7_0003_075E(); return;
}

/**
 * Decompiled function f__1FB5_15F9_000B_E2F6()
 *
 * @name f__1FB5_15F9_000B_E2F6
 * @implements 1FB5:15F9:000B:E2F6 ()
 *
 * Called From: 1FB5:15EA:000F:C9F1
 */
void f__1FB5_15F9_000B_E2F6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1604); f__1FB5_1ABA_0031_1268();
	f__1FB5_1604_0058_7FBB();
}

/**
 * Decompiled function f__1FB5_1604_0058_7FBB()
 *
 * @name f__1FB5_1604_0058_7FBB
 * @implements 1FB5:1604:0058:7FBB ()
 *
 * Called From: 1FB5:1604:000B:E2F6
 */
void f__1FB5_1604_0058_7FBB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_1661_000B_18C7(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x10));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1661; emu_last_cs = 0x1FB5; emu_last_ip = 0x1627; emu_last_length = 0x0058; emu_last_crc = 0x7FBB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (emu_flags.zf) { emu_ip = 0x1661; emu_last_cs = 0x1FB5; emu_last_ip = 0x163D; emu_last_length = 0x0058; emu_last_crc = 0x7FBB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x165C); f__1FB5_15B5_0015_6875();
	f__1FB5_165C_0005_099E();
}

/**
 * Decompiled function f__1FB5_165C_0005_099E()
 *
 * @name f__1FB5_165C_0005_099E
 * @implements 1FB5:165C:0005:099E ()
 *
 * Called From: 1FB5:165C:0058:7FBB
 */
void f__1FB5_165C_0005_099E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1FB5_15C7_0003_075E(); return;
}

/**
 * Decompiled function f__1FB5_1661_000B_18C7()
 *
 * @name f__1FB5_1661_000B_18C7
 * @implements 1FB5:1661:000B:18C7 ()
 *
 * Called From: 1FB5:160B:0058:7FBB
 */
void f__1FB5_1661_000B_18C7()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x661C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x166C; emu_last_cs = 0x1FB5; emu_last_ip = 0x1667; emu_last_length = 0x000B; emu_last_crc = 0x18C7; emu_call(); return; } // Jump does not resolve
	f__1FB5_15C5_0005_0D3E(); return;
}

/**
 * Decompiled function f__1FB5_16CF_0006_137A()
 *
 * @name f__1FB5_16CF_0006_137A
 * @implements 1FB5:16CF:0006:137A ()
 *
 * Called From: 1FB5:15C7:0003:075E
 * Called From: 1FB5:15C7:0005:0D3E
 */
void f__1FB5_16CF_0006_137A()
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
 * Decompiled function f__1FB5_16D5_006A_A7D9()
 *
 * @name f__1FB5_16D5_006A_A7D9
 * @implements 1FB5:16D5:006A:A7D9 ()
 *
 * Called From: 1FB5:04BA:000C:AAAD
 * Called From: 253D:00A6:000B:FECD
 */
void f__1FB5_16D5_006A_A7D9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x173F; emu_last_cs = 0x1FB5; emu_last_ip = 0x16ED; emu_last_length = 0x006A; emu_last_crc = 0xA7D9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	if (emu_flags.zf) { emu_ip = 0x173F; emu_last_cs = 0x1FB5; emu_last_ip = 0x1715; emu_last_length = 0x006A; emu_last_crc = 0xA7D9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1FB5_1757_0003_0212(); return;
}

/**
 * Decompiled function f__1FB5_1757_0003_0212()
 *
 * @name f__1FB5_1757_0003_0212
 * @implements 1FB5:1757:0003:0212 ()
 *
 * Called From: 1FB5:173D:006A:A7D9
 */
void f__1FB5_1757_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_175A_000F_4174()
 *
 * @name f__1FB5_175A_000F_4174
 * @implements 1FB5:175A:000F:4174 ()
 *
 * Called From: B53B:017B:000C:76B1
 */
void f__1FB5_175A_000F_4174()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1769); f__1FB5_1ABA_0031_1268();
	f__1FB5_1769_004D_181C();
}

/**
 * Decompiled function f__1FB5_1769_004D_181C()
 *
 * @name f__1FB5_1769_004D_181C
 * @implements 1FB5:1769:004D:181C ()
 *
 * Called From: 1FB5:1769:000F:4174
 */
void f__1FB5_1769_004D_181C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_17D0_0004_0CE4(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (emu_flags.zf) { emu_ip = 0x17BA; emu_last_cs = 0x1FB5; emu_last_ip = 0x1786; emu_last_length = 0x004D; emu_last_crc = 0x181C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x10));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x17B6); emu_ip = 0x175A; emu_last_cs = 0x1FB5; emu_last_ip = 0x17B3; emu_last_length = 0x004D; emu_last_crc = 0x181C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_17B8_0002_0398()
 *
 * @name f__1FB5_17B8_0002_0398
 * @implements 1FB5:17B8:0002:0398 ()
 *
 * Called From: 1FB5:17D2:0004:0CE4
 */
void f__1FB5_17B8_0002_0398()
{
	f__1FB5_17D4_0003_0212(); return;
}

/**
 * Decompiled function f__1FB5_17D0_0004_0CE4()
 *
 * @name f__1FB5_17D0_0004_0CE4
 * @implements 1FB5:17D0:0004:0CE4 ()
 *
 * Called From: 1FB5:1770:004D:181C
 */
void f__1FB5_17D0_0004_0CE4()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1FB5_17B8_0002_0398(); return;
}

/**
 * Decompiled function f__1FB5_17D4_0003_0212()
 *
 * @name f__1FB5_17D4_0003_0212
 * @implements 1FB5:17D4:0003:0212 ()
 *
 * Called From: 1FB5:17B8:0002:0398
 */
void f__1FB5_17D4_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_17D7_0018_B75E()
 *
 * @name f__1FB5_17D7_0018_B75E
 * @implements 1FB5:17D7:0018:B75E ()
 *
 * Called From: B4B8:16F0:0022:A27C
 */
void f__1FB5_17D7_0018_B75E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x661C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x661C), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_17EF_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_17EF_0004_0F7A()
 *
 * @name f__1FB5_17EF_0004_0F7A
 * @implements 1FB5:17EF:0004:0F7A ()
 *
 * Called From: 1FB5:17ED:0018:B75E
 */
void f__1FB5_17EF_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_18D3_000E_2DA7()
 *
 * @name f__1FB5_18D3_000E_2DA7
 * @implements 1FB5:18D3:000E:2DA7 ()
 *
 * Called From: 1DB6:01B5:0005:1C5A
 */
void f__1FB5_18D3_000E_2DA7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	f__1FB5_18F4_000F_DD0A(); return;
}

/**
 * Decompiled function f__1FB5_18E1_0022_DC6E()
 *
 * @name f__1FB5_18E1_0022_DC6E
 * @implements 1FB5:18E1:0022:DC6E ()
 *
 * Called From: 1FB5:18F7:000F:DD0A
 * Called From: 1FB5:18F7:0022:DC6E
 */
void f__1FB5_18E1_0022_DC6E()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x1);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_18E1_0022_DC6E(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (!emu_flags.zf) { f__1FB5_1903_000D_825D(); return; }
	emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x1900; emu_last_length = 0x0022; emu_last_crc = 0xDC6E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_18F4_000F_DD0A()
 *
 * @name f__1FB5_18F4_000F_DD0A
 * @implements 1FB5:18F4:000F:DD0A ()
 *
 * Called From: 1FB5:18DF:000E:2DA7
 */
void f__1FB5_18F4_000F_DD0A()
{
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_18E1_0022_DC6E(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1903; emu_last_cs = 0x1FB5; emu_last_ip = 0x18FE; emu_last_length = 0x000F; emu_last_crc = 0xDD0A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x1900; emu_last_length = 0x000F; emu_last_crc = 0xDD0A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1903_000D_825D()
 *
 * @name f__1FB5_1903_000D_825D
 * @implements 1FB5:1903:000D:825D ()
 *
 * Called From: 1FB5:18FE:0022:DC6E
 */
void f__1FB5_1903_000D_825D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2E9C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__1FB5_1993_001B_2281(); return;
}

/**
 * Decompiled function f__1FB5_1910_0013_AE45()
 *
 * @name f__1FB5_1910_0013_AE45
 * @implements 1FB5:1910:0013:AE45 ()
 *
 * Called From: 1FB5:19AB:001B:2281
 * Called From: 1FB5:19AB:001F:92CF
 */
void f__1FB5_1910_0013_AE45()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x2);
	if (emu_flags.zf) { f__1FB5_198F_001F_92CF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1923); emu_cs = 0x2649; emu_ip = 0x1BDC; emu_last_cs = 0x1FB5; emu_last_ip = 0x191E; emu_last_length = 0x0013; emu_last_crc = 0xAE45; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_198F_001F_92CF()
 *
 * @name f__1FB5_198F_001F_92CF
 * @implements 1FB5:198F:001F:92CF ()
 *
 * Called From: 1FB5:1918:0013:AE45
 */
void f__1FB5_198F_001F_92CF()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x13);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { f__1FB5_19AE_0006_137A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x19A9; emu_last_length = 0x001F; emu_last_crc = 0x92CF; emu_call(); return; } // Jump does not resolve
	f__1FB5_1910_0013_AE45(); return;
}

/**
 * Decompiled function f__1FB5_1993_001B_2281()
 *
 * @name f__1FB5_1993_001B_2281
 * @implements 1FB5:1993:001B:2281 ()
 *
 * Called From: 1FB5:190D:000D:825D
 */
void f__1FB5_1993_001B_2281()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x199D; emu_last_length = 0x001B; emu_last_crc = 0x2281; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x19A9; emu_last_length = 0x001B; emu_last_crc = 0x2281; emu_call(); return; } // Jump does not resolve
	f__1FB5_1910_0013_AE45(); return;
}

/**
 * Decompiled function f__1FB5_19AE_0006_137A()
 *
 * @name f__1FB5_19AE_0006_137A
 * @implements 1FB5:19AE:0006:137A ()
 *
 * Called From: 1FB5:199D:001F:92CF
 */
void f__1FB5_19AE_0006_137A()
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
 * Decompiled function f__1FB5_1A67_0005_0592()
 *
 * @name f__1FB5_1A67_0005_0592
 * @implements 1FB5:1A67:0005:0592 ()
 *
 * Called From: B500:0033:000C:C040
 */
void f__1FB5_1A67_0005_0592()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_1A6C_0020_1B52()
 *
 * @name f__1FB5_1A6C_0020_1B52
 * @implements 1FB5:1A6C:0020:1B52 ()
 *
 * Called From: 1FB5:09DC:0018:F3A8
 * Called From: 1FB5:0B04:001B:7557
 * Called From: 1FB5:0EB4:001B:711F
 * Called From: 1FB5:121F:001B:7505
 */
void f__1FB5_1A6C_0020_1B52()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1A80; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A79; emu_last_length = 0x0020; emu_last_crc = 0x1B52; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_1A8F_001F_DCE9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1A8C); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A89; emu_last_length = 0x0020; emu_last_crc = 0x1B52; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_1A8F_001F_DCE9()
 *
 * @name f__1FB5_1A8F_001F_DCE9
 * @implements 1FB5:1A8F:001F:DCE9 ()
 *
 * Called From: 1FB5:1A7E:0020:1B52
 */
void f__1FB5_1A8F_001F_DCE9()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__1FB5_1AB1_0005_14BC(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1AAE); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AAB; emu_last_length = 0x001F; emu_last_crc = 0xDCE9; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_1AB1_0005_14BC()
 *
 * @name f__1FB5_1AB1_0005_14BC
 * @implements 1FB5:1AB1:0005:14BC ()
 *
 * Called From: 1FB5:1AA0:001F:DCE9
 */
void f__1FB5_1AB1_0005_14BC()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1FB5_1AB6_0004_07E2(); return;
}

/**
 * Decompiled function f__1FB5_1AB6_0004_07E2()
 *
 * @name f__1FB5_1AB6_0004_07E2
 * @implements 1FB5:1AB6:0004:07E2 ()
 *
 * Called From: 1FB5:1AB4:0005:14BC
 */
void f__1FB5_1AB6_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_1ABA_0031_1268()
 *
 * @name f__1FB5_1ABA_0031_1268
 * @implements 1FB5:1ABA:0031:1268 ()
 *
 * Called From: 1FB5:0244:000B:E1DA
 * Called From: 1FB5:034F:001E:9A87
 * Called From: 1FB5:1601:000B:E2F6
 * Called From: 1FB5:1766:000F:4174
 */
void f__1FB5_1ABA_0031_1268()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1FB5_1AEB_000D_5909(); return; }
	emu_ip = 0x1B17; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AE9; emu_last_length = 0x0031; emu_last_crc = 0x1268; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1AC3_0028_8201()
 *
 * @name f__1FB5_1AC3_0028_8201
 * @implements 1FB5:1AC3:0028:8201 ()
 *
 * Called From: 1FB5:1B15:0003:00C4
 */
void f__1FB5_1AC3_0028_8201()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1FB5_1AEB_000D_5909(); return; }
	f__1FB5_1B17_0005_1D48(); return;
}

/**
 * Decompiled function f__1FB5_1AEB_000D_5909()
 *
 * @name f__1FB5_1AEB_000D_5909
 * @implements 1FB5:1AEB:000D:5909 ()
 *
 * Called From: 1FB5:1AE7:0028:8201
 * Called From: 1FB5:1AE7:0031:1268
 */
void f__1FB5_1AEB_000D_5909()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_1AF8_0011_51AC(); return; }
	emu_ip = 0x1B17; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AF6; emu_last_length = 0x000D; emu_last_crc = 0x5909; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1AF8_0011_51AC()
 *
 * @name f__1FB5_1AF8_0011_51AC
 * @implements 1FB5:1AF8:0011:51AC ()
 *
 * Called From: 1FB5:1AF4:000D:5909
 */
void f__1FB5_1AF8_0011_51AC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__1FB5_1B09_000B_63FB();
}

/**
 * Decompiled function f__1FB5_1B09_000B_63FB()
 *
 * @name f__1FB5_1B09_000B_63FB
 * @implements 1FB5:1B09:000B:63FB ()
 *
 * Called From: 1FB5:1B09:0011:51AC
 */
void f__1FB5_1B09_000B_63FB()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_1B14_0003_00C4(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1FB5_1B1C_0005_04BA(); return;
}

/**
 * Decompiled function f__1FB5_1B12_0002_03BC()
 *
 * @name f__1FB5_1B12_0002_03BC
 * @implements 1FB5:1B12:0002:03BC ()
 *
 * Called From: 1FB5:1B1A:0005:1D48
 */
void f__1FB5_1B12_0002_03BC()
{
	f__1FB5_1B1C_0005_04BA(); return;
}

/**
 * Decompiled function f__1FB5_1B14_0003_00C4()
 *
 * @name f__1FB5_1B14_0003_00C4
 * @implements 1FB5:1B14:0003:00C4 ()
 *
 * Called From: 1FB5:1B0E:000B:63FB
 */
void f__1FB5_1B14_0003_00C4()
{
	emu_incw(&emu_si);
	f__1FB5_1AC3_0028_8201(); return;
}

/**
 * Decompiled function f__1FB5_1B17_0005_1D48()
 *
 * @name f__1FB5_1B17_0005_1D48
 * @implements 1FB5:1B17:0005:1D48 ()
 *
 * Called From: 1FB5:1AE9:0028:8201
 */
void f__1FB5_1B17_0005_1D48()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__1FB5_1B12_0002_03BC(); return;
}

/**
 * Decompiled function f__1FB5_1B1C_0005_04BA()
 *
 * @name f__1FB5_1B1C_0005_04BA
 * @implements 1FB5:1B1C:0005:04BA ()
 *
 * Called From: 1FB5:1B12:0002:03BC
 * Called From: 1FB5:1B12:000B:63FB
 */
void f__1FB5_1B1C_0005_04BA()
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
 * Decompiled function f__1FB5_1B21_0027_1B5D()
 *
 * @name f__1FB5_1B21_0027_1B5D
 * @implements 1FB5:1B21:0027:1B5D ()
 *
 * Called From: 1FB5:0772:000F:2958
 */
void f__1FB5_1B21_0027_1B5D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { emu_ip = 0x1B6A; emu_last_cs = 0x1FB5; emu_last_ip = 0x1B37; emu_last_length = 0x0027; emu_last_crc = 0x1B5D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x5C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x1B48); emu_cs = 0x01F7; f__01F7_3A41_0011_E0FE();
	f__1FB5_1B48_0016_A6DF();
}

/**
 * Decompiled function f__1FB5_1B48_0016_A6DF()
 *
 * @name f__1FB5_1B48_0016_A6DF
 * @implements 1FB5:1B48:0016:A6DF ()
 *
 * Called From: 1FB5:1B48:0027:1B5D
 */
void f__1FB5_1B48_0016_A6DF()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1FB5_1B5E_0017_2545(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x1B6A; emu_last_cs = 0x1FB5; emu_last_ip = 0x1B5C; emu_last_length = 0x0016; emu_last_crc = 0xA6DF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1B5E_0017_2545()
 *
 * @name f__1FB5_1B5E_0017_2545
 * @implements 1FB5:1B5E:0017:2545 ()
 *
 * Called From: 1FB5:1B57:0016:A6DF
 */
void f__1FB5_1B5E_0017_2545()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B75); emu_cs = 0x01F7; f__01F7_3CD5_000D_BC7F();
	f__1FB5_1B75_000F_333E();
}

/**
 * Decompiled function f__1FB5_1B75_000F_333E()
 *
 * @name f__1FB5_1B75_000F_333E
 * @implements 1FB5:1B75:000F:333E ()
 *
 * Called From: 1FB5:1B75:0017:2545
 */
void f__1FB5_1B75_000F_333E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x6C82);
	emu_push(0x1B84);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x353B0020: ovl__353B(0); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1FB5; emu_last_ip = 0x1B80; emu_last_length = 0x000F; emu_last_crc = 0x333E;
			emu_call();
			return;
	}
	f__1FB5_1B84_0005_1FBC();
}

/**
 * Decompiled function f__1FB5_1B84_0005_1FBC()
 *
 * @name f__1FB5_1B84_0005_1FBC
 * @implements 1FB5:1B84:0005:1FBC ()
 *
 * Called From: 1FB5:1B84:000F:333E
 */
void f__1FB5_1B84_0005_1FBC()
{
	emu_addws(&emu_sp, 0x6);
	f__1FB5_1B89_0004_0F7A(); return;
}

/**
 * Decompiled function f__1FB5_1B89_0004_0F7A()
 *
 * @name f__1FB5_1B89_0004_0F7A
 * @implements 1FB5:1B89:0004:0F7A ()
 *
 * Called From: 1FB5:1B87:0005:1FBC
 */
void f__1FB5_1B89_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
