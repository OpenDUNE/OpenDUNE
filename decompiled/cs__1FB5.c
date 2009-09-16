/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1FB5_0005_000F_62CC()
 *
 * @name f__1FB5_0005_000F_62CC
 * @implements 1FB5:0005:000F:62CC ()
 *
 * Called From: 1FB5:15F3:0005:4ACB
 */
void f__1FB5_0005_000F_62CC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_cs); emu_push(0x0014); emu_cs = 0x01F7; f__01F7_0428_0010_87B4();
	f__1FB5_0014_000C_221B();
}

/**
 * Decompiled function f__1FB5_0014_000C_221B()
 *
 * @name f__1FB5_0014_000C_221B
 * @implements 1FB5:0014:000C:221B ()
 *
 * Called From: 1FB5:0014:000F:62CC
 */
void f__1FB5_0014_000C_221B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_0020_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_0020_0004_893F()
 *
 * @name f__1FB5_0020_0004_893F
 * @implements 1FB5:0020:0004:893F ()
 *
 * Called From: 1FB5:001E:000C:221B
 */
void f__1FB5_0020_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0047_0012_2389()
 *
 * @name f__1FB5_0047_0012_2389
 * @implements 1FB5:0047:0012:2389 ()
 *
 * Called From: 1FB5:026F:000F:7FED
 * Called From: 1FB5:0A80:0014:AF1C
 * Called From: 1FB5:15EE:000F:2C44
 */
void f__1FB5_0047_0012_2389()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x01F7; f__01F7_23CC_0013_6B52();
	f__1FB5_0059_000D_EA19();
}

/**
 * Decompiled function f__1FB5_0059_000D_EA19()
 *
 * @name f__1FB5_0059_000D_EA19
 * @implements 1FB5:0059:000D:EA19 ()
 *
 * Called From: 1FB5:0059:0012:2389
 */
void f__1FB5_0059_000D_EA19()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_0066_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_0066_0004_893F()
 *
 * @name f__1FB5_0066_0004_893F
 * @implements 1FB5:0066:0004:893F ()
 *
 * Called From: 1FB5:0064:000D:EA19
 */
void f__1FB5_0066_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_006A_0015_A08C()
 *
 * @name f__1FB5_006A_0015_A08C
 * @implements 1FB5:006A:0015:A08C ()
 *
 * Called From: 1FB5:1883:000A:608D
 */
void f__1FB5_006A_0015_A08C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x01F7; f__01F7_10EF_000B_AF8B();
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0091_001B_4066()
 *
 * @name f__1FB5_0091_001B_4066
 * @implements 1FB5:0091:001B:4066 ()
 *
 * Called From: 1FB5:07D2:0055:2064
 * Called From: 1FB5:0802:0030:FC0F
 * Called From: 1FB5:13BA:0031:4F89
 * Called From: 1FB5:14B4:0054:A029
 * Called From: 1FB5:1503:0010:F2FF
 */
void f__1FB5_0091_001B_4066()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00AC); emu_cs = 0x01F7; f__01F7_0773_001E_D7DA();
	f__1FB5_00AC_0015_C132();
}

/**
 * Decompiled function f__1FB5_00AC_0015_C132()
 *
 * @name f__1FB5_00AC_0015_C132
 * @implements 1FB5:00AC:0015:C132 ()
 *
 * Called From: 1FB5:00AC:001B:4066
 */
void f__1FB5_00AC_0015_C132()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1FB5_00C1_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_00C1_0004_893F()
 *
 * @name f__1FB5_00C1_0004_893F
 * @implements 1FB5:00C1:0004:893F ()
 *
 * Called From: 1FB5:00BF:0015:C132
 */
void f__1FB5_00C1_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_00C5_001B_2EE4()
 *
 * @name f__1FB5_00C5_001B_2EE4
 * @implements 1FB5:00C5:001B:2EE4 ()
 *
 * Called From: 1FB5:0D7E:000E:D343
 * Called From: 1FB5:0D7E:0011:7543
 */
void f__1FB5_00C5_001B_2EE4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00E0); emu_cs = 0x01F7; f__01F7_3354_0003_62AB();
	f__1FB5_00E0_000F_670A();
}

/**
 * Decompiled function f__1FB5_00E0_000F_670A()
 *
 * @name f__1FB5_00E0_000F_670A
 * @implements 1FB5:00E0:000F:670A ()
 *
 * Called From: 1FB5:00E0:001B:2EE4
 */
void f__1FB5_00E0_000F_670A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_00EF_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_00EF_0004_893F()
 *
 * @name f__1FB5_00EF_0004_893F
 * @implements 1FB5:00EF:0004:893F ()
 *
 * Called From: 1FB5:00ED:000F:670A
 */
void f__1FB5_00EF_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_00F3_001B_7009()
 *
 * @name f__1FB5_00F3_001B_7009
 * @implements 1FB5:00F3:001B:7009 ()
 *
 * Called From: 1FB5:10F5:000E:1D6C
 */
void f__1FB5_00F3_001B_7009()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x010E); emu_cs = 0x01F7; f__01F7_4481_0003_623C();
	f__1FB5_010E_000F_670A();
}

/**
 * Decompiled function f__1FB5_010E_000F_670A()
 *
 * @name f__1FB5_010E_000F_670A
 * @implements 1FB5:010E:000F:670A ()
 *
 * Called From: 1FB5:010E:001B:7009
 */
void f__1FB5_010E_000F_670A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_011D_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_011D_0004_893F()
 *
 * @name f__1FB5_011D_0004_893F
 * @implements 1FB5:011D:0004:893F ()
 *
 * Called From: 1FB5:011B:000F:670A
 */
void f__1FB5_011D_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_0121_001B_0DC1()
 *
 * @name f__1FB5_0121_001B_0DC1
 * @implements 1FB5:0121:001B:0DC1 ()
 *
 * Called From: 1FB5:0260:001C:AD69
 * Called From: 1FB5:0753:000E:D1BE
 * Called From: 1FB5:0753:0011:8F3E
 * Called From: 1FB5:15DF:0018:805C
 */
void f__1FB5_0121_001B_0DC1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x01F7; f__01F7_2A06_002A_9A90();
	f__1FB5_013C_000F_670A();
}

/**
 * Decompiled function f__1FB5_013C_000F_670A()
 *
 * @name f__1FB5_013C_000F_670A
 * @implements 1FB5:013C:000F:670A ()
 *
 * Called From: 1FB5:013C:001B:0DC1
 */
void f__1FB5_013C_000F_670A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1FB5_014B_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_014B_0004_893F()
 *
 * @name f__1FB5_014B_0004_893F
 * @implements 1FB5:014B:0004:893F ()
 *
 * Called From: 1FB5:0149:000F:670A
 */
void f__1FB5_014B_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_01FA_0010_F89C()
 *
 * @name f__1FB5_01FA_0010_F89C
 * @implements 1FB5:01FA:0010:F89C ()
 *
 * Called From: 0FCB:00C6:001B:5ECC
 * Called From: 1FB5:02DD:0032:3133
 * Called From: 253D:000E:0013:38F4
 * Called From: 253D:009B:0016:007A
 * Called From: 253D:011B:0016:F834
 * Called From: 256D:0033:000F:8420
 * Called From: B495:1A36:0012:DF2C
 * Called From: B4B1:0011:0016:067A
 * Called From: B4B1:002C:0010:8479
 * Called From: B4B8:1CBB:0018:7248
 * Called From: B4CA:0221:0017:A939
 * Called From: B4E0:068C:0015:539F
 * Called From: B4F2:005E:0012:A048
 * Called From: B503:11CF:0016:067A
 * Called From: B511:080A:000F:842C
 * Called From: B518:05D6:0010:4D64
 * Called From: B518:07F6:0010:4D64
 * Called From: B52A:0014:0019:1617
 * Called From: B52A:02E7:0012:2608
 * Called From: B52A:09A8:0013:6D27
 */
void f__1FB5_01FA_0010_F89C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_xorw(&emu_di, emu_di);
	f__1FB5_0220_0019_5AD0(); return;
}

/**
 * Decompiled function f__1FB5_020A_0015_DDD3()
 *
 * @name f__1FB5_020A_0015_DDD3
 * @implements 1FB5:020A:0015:DDD3 ()
 *
 * Called From: 1FB5:0223:0019:5AD0
 */
void f__1FB5_020A_0015_DDD3()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x021F; emu_last_cs = 0x1FB5; emu_last_ip = 0x021B; emu_last_length = 0x0015; emu_last_crc = 0xDDD3; emu_call(); return; } // Jump does not resolve
	f__1FB5_0225_0014_D290(); return;
}

/**
 * Decompiled function f__1FB5_0220_0019_5AD0()
 *
 * @name f__1FB5_0220_0019_5AD0
 * @implements 1FB5:0220:0019:5AD0 ()
 *
 * Called From: 1FB5:0208:0010:F89C
 */
void f__1FB5_0220_0019_5AD0()
{
	emu_cmpws(&emu_di, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_020A_0015_DDD3(); return; }
	emu_cmpws(&emu_di, 0x14);
	if (!emu_flags.zf) { emu_ip = 0x023C; emu_last_cs = 0x1FB5; emu_last_ip = 0x0228; emu_last_length = 0x0019; emu_last_crc = 0x5AD0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0239); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0236; emu_last_length = 0x0019; emu_last_crc = 0x5AD0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0225_0014_D290()
 *
 * @name f__1FB5_0225_0014_D290
 * @implements 1FB5:0225:0014:D290 ()
 *
 * Called From: 1FB5:021D:0015:DDD3
 */
void f__1FB5_0225_0014_D290()
{
	emu_cmpws(&emu_di, 0x14);
	if (!emu_flags.zf) { f__1FB5_023C_000B_2FEB(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0239); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0236; emu_last_length = 0x0014; emu_last_crc = 0xD290; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_023C_000B_2FEB()
 *
 * @name f__1FB5_023C_000B_2FEB
 * @implements 1FB5:023C:000B:2FEB ()
 *
 * Called From: 1FB5:0228:0014:D290
 */
void f__1FB5_023C_000B_2FEB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0247); f__1FB5_1ABA_0031_8318();
	f__1FB5_0247_001C_AD69();
}

/**
 * Decompiled function f__1FB5_0247_001C_AD69()
 *
 * @name f__1FB5_0247_001C_AD69
 * @implements 1FB5:0247:001C:AD69 ()
 *
 * Called From: 1FB5:0247:000B:2FEB
 */
void f__1FB5_0247_001C_AD69()
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
	emu_push(0x0263); f__1FB5_0121_001B_0DC1();
	f__1FB5_0263_000F_7FED();
}

/**
 * Decompiled function f__1FB5_0263_000F_7FED()
 *
 * @name f__1FB5_0263_000F_7FED
 * @implements 1FB5:0263:000F:7FED ()
 *
 * Called From: 1FB5:0263:001C:AD69
 */
void f__1FB5_0263_000F_7FED()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_0278_0009_EC05(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0272); f__1FB5_0047_0012_2389();
	f__1FB5_0272_000F_429B();
}

/**
 * Decompiled function f__1FB5_0272_000F_429B()
 *
 * @name f__1FB5_0272_000F_429B
 * @implements 1FB5:0272:000F:429B ()
 *
 * Called From: 1FB5:0272:000F:7FED
 */
void f__1FB5_0272_000F_429B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0281_001A_1FE7(); return; }
	f__1FB5_0570_0019_510D(); return;
}

/**
 * Decompiled function f__1FB5_0278_0009_EC05()
 *
 * @name f__1FB5_0278_0009_EC05
 * @implements 1FB5:0278:0009:EC05 ()
 *
 * Called From: 1FB5:026B:000F:7FED
 */
void f__1FB5_0278_0009_EC05()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0281_001A_1FE7(); return; }
	f__1FB5_0570_0019_510D(); return;
}

/**
 * Decompiled function f__1FB5_0281_001A_1FE7()
 *
 * @name f__1FB5_0281_001A_1FE7
 * @implements 1FB5:0281:001A:1FE7 ()
 *
 * Called From: 1FB5:027C:0009:EC05
 * Called From: 1FB5:027C:000F:429B
 */
void f__1FB5_0281_001A_1FE7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (!emu_flags.zf) { f__1FB5_029B_0009_D002(); return; }
	f__1FB5_0570_0019_510D(); return;
}

/**
 * Decompiled function f__1FB5_029B_0009_D002()
 *
 * @name f__1FB5_029B_0009_D002
 * @implements 1FB5:029B:0009:D002 ()
 *
 * Called From: 1FB5:0296:001A:1FE7
 */
void f__1FB5_029B_0009_D002()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__1FB5_02A4_000A_9857(); return; }
	emu_ip = 0x0570; emu_last_cs = 0x1FB5; emu_last_ip = 0x02A1; emu_last_length = 0x0009; emu_last_crc = 0xD002; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_02A4_000A_9857()
 *
 * @name f__1FB5_02A4_000A_9857
 * @implements 1FB5:02A4:000A:9857 ()
 *
 * Called From: 1FB5:029F:0009:D002
 */
void f__1FB5_02A4_000A_9857()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x2);
	if (emu_flags.zf) { f__1FB5_02AE_0032_3133(); return; }
	emu_ip = 0x0570; emu_last_cs = 0x1FB5; emu_last_ip = 0x02AB; emu_last_length = 0x000A; emu_last_crc = 0x9857; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_02AE_0032_3133()
 *
 * @name f__1FB5_02AE_0032_3133
 * @implements 1FB5:02AE:0032:3133 ()
 *
 * Called From: 1FB5:02A9:000A:9857
 */
void f__1FB5_02AE_0032_3133()
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
	emu_push(0x02E0); f__1FB5_01FA_0010_F89C();
	f__1FB5_02E0_0030_827F();
}

/**
 * Decompiled function f__1FB5_02E0_0030_827F()
 *
 * @name f__1FB5_02E0_0030_827F
 * @implements 1FB5:02E0:0030:827F ()
 *
 * Called From: 1FB5:02E0:0032:3133
 */
void f__1FB5_02E0_0030_827F()
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
	if (emu_flags.zf) { f__1FB5_0310_0008_ADC6(); return; }
	f__1FB5_051A_0050_77B6(); return;
}

/**
 * Decompiled function f__1FB5_0310_0008_ADC6()
 *
 * @name f__1FB5_0310_0008_ADC6
 * @implements 1FB5:0310:0008:ADC6 ()
 *
 * Called From: 1FB5:030B:0030:827F
 */
void f__1FB5_0310_0008_ADC6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFFFF);
	f__1FB5_0491_0012_DCC6(); return;
}

/**
 * Decompiled function f__1FB5_0318_001C_C5E1()
 *
 * @name f__1FB5_0318_001C_C5E1
 * @implements 1FB5:0318:001C:C5E1 ()
 *
 * Called From: 1FB5:04AE:000E:1157
 */
void f__1FB5_0318_001C_C5E1()
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
	emu_push(0x0334); f__1FB5_0AEC_001B_A5E4();
	f__1FB5_0334_001E_6179();
}

/**
 * Decompiled function f__1FB5_031D_0017_3519()
 *
 * @name f__1FB5_031D_0017_3519
 * @implements 1FB5:031D:0017:3519 ()
 *
 * Called From: 1FB5:0346:001E:6179
 */
void f__1FB5_031D_0017_3519()
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
	emu_push(0x0334); f__1FB5_0AEC_001B_A5E4();
	f__1FB5_0334_001E_6179();
}

/**
 * Decompiled function f__1FB5_0334_001E_6179()
 *
 * @name f__1FB5_0334_001E_6179
 * @implements 1FB5:0334:001E:6179 ()
 *
 * Called From: 1FB5:0334:001C:C5E1
 * Called From: 1FB5:0334:0017:3519
 */
void f__1FB5_0334_001E_6179()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__1FB5_031D_0017_3519(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0352); f__1FB5_1ABA_0031_8318();
	f__1FB5_0352_000E_50DC();
}

/**
 * Decompiled function f__1FB5_0352_000E_50DC()
 *
 * @name f__1FB5_0352_000E_50DC
 * @implements 1FB5:0352:000E:50DC ()
 *
 * Called From: 1FB5:0352:001E:6179
 */
void f__1FB5_0352_000E_50DC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0360_001A_1657(); return; }
	emu_ip = 0x0491; emu_last_cs = 0x1FB5; emu_last_ip = 0x035D; emu_last_length = 0x000E; emu_last_crc = 0x50DC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0360_001A_1657()
 *
 * @name f__1FB5_0360_001A_1657
 * @implements 1FB5:0360:001A:1657 ()
 *
 * Called From: 1FB5:035B:000E:50DC
 */
void f__1FB5_0360_001A_1657()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (!emu_flags.zf) { f__1FB5_037A_002A_8900(); return; }
	emu_ip = 0x048F; emu_last_cs = 0x1FB5; emu_last_ip = 0x0377; emu_last_length = 0x001A; emu_last_crc = 0x1657; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_037A_002A_8900()
 *
 * @name f__1FB5_037A_002A_8900
 * @implements 1FB5:037A:002A:8900 ()
 *
 * Called From: 1FB5:0375:001A:1657
 */
void f__1FB5_037A_002A_8900()
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
	if (emu_flags.zf) { f__1FB5_03A4_00ED_27BE(); return; }
	f__1FB5_048F_0002_C03A(); return;
}

/**
 * Decompiled function f__1FB5_03A4_00ED_27BE()
 *
 * @name f__1FB5_03A4_00ED_27BE
 * @implements 1FB5:03A4:00ED:27BE ()
 *
 * Called From: 1FB5:039F:002A:8900
 */
void f__1FB5_03A4_00ED_27BE()
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
	if (emu_flags.zf) { f__1FB5_0489_0008_F9F9(); return; }
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
	f__1FB5_0491_0012_DCC6(); return;
}

/**
 * Decompiled function f__1FB5_0489_0008_F9F9()
 *
 * @name f__1FB5_0489_0008_F9F9
 * @implements 1FB5:0489:0008:F9F9 ()
 *
 * Called From: 1FB5:0434:00ED:27BE
 */
void f__1FB5_0489_0008_F9F9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__1FB5_0491_0012_DCC6(); return;
}

/**
 * Decompiled function f__1FB5_048F_0002_C03A()
 *
 * @name f__1FB5_048F_0002_C03A
 * @implements 1FB5:048F:0002:C03A ()
 *
 * Called From: 1FB5:03A1:002A:8900
 */
void f__1FB5_048F_0002_C03A()
{
	f__1FB5_0491_0012_DCC6(); return;
}

/**
 * Decompiled function f__1FB5_0491_0012_DCC6()
 *
 * @name f__1FB5_0491_0012_DCC6
 * @implements 1FB5:0491:0012:DCC6 ()
 *
 * Called From: 1FB5:0315:0008:ADC6
 * Called From: 1FB5:048F:0002:C03A
 * Called From: 1FB5:048F:0008:F9F9
 * Called From: 1FB5:048F:00ED:27BE
 */
void f__1FB5_0491_0012_DCC6()
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
	emu_push(0x04A3); f__1FB5_0AEC_001B_A5E4();
	f__1FB5_04A3_000E_1157();
}

/**
 * Decompiled function f__1FB5_04A3_000E_1157()
 *
 * @name f__1FB5_04A3_000E_1157
 * @implements 1FB5:04A3:000E:1157 ()
 *
 * Called From: 1FB5:04A3:0012:DCC6
 */
void f__1FB5_04A3_000E_1157()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__1FB5_04B1_000C_AC45(); return; }
	f__1FB5_0318_001C_C5E1(); return;
}

/**
 * Decompiled function f__1FB5_04B1_000C_AC45()
 *
 * @name f__1FB5_04B1_000C_AC45
 * @implements 1FB5:04B1:000C:AC45 ()
 *
 * Called From: 1FB5:04AC:000E:1157
 */
void f__1FB5_04B1_000C_AC45()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x04F8; emu_last_cs = 0x1FB5; emu_last_ip = 0x04B5; emu_last_length = 0x000C; emu_last_crc = 0xAC45; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04BD); f__1FB5_16D5_006A_679B();
	f__1FB5_04BD_00AD_8BDB();
}

/**
 * Decompiled function f__1FB5_04BD_00AD_8BDB()
 *
 * @name f__1FB5_04BD_00AD_8BDB
 * @implements 1FB5:04BD:00AD:8BDB ()
 *
 * Called From: 1FB5:04BD:000C:AC45
 */
void f__1FB5_04BD_00AD_8BDB()
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
	emu_push(0x056A); f__1FB5_1207_001B_2A6C();
	f__1FB5_056A_0006_9510();
}

/**
 * Decompiled function f__1FB5_051A_0050_77B6()
 *
 * @name f__1FB5_051A_0050_77B6
 * @implements 1FB5:051A:0050:77B6 ()
 *
 * Called From: 1FB5:030D:0030:827F
 */
void f__1FB5_051A_0050_77B6()
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
	emu_push(0x056A); f__1FB5_1207_001B_2A6C();
	f__1FB5_056A_0006_9510();
}

/**
 * Decompiled function f__1FB5_056A_0006_9510()
 *
 * @name f__1FB5_056A_0006_9510
 * @implements 1FB5:056A:0006:9510 ()
 *
 * Called From: 1FB5:056A:00AD:8BDB
 * Called From: 1FB5:056A:0050:77B6
 */
void f__1FB5_056A_0006_9510()
{
	emu_addws(&emu_sp, 0x8);
	f__1FB5_09B8_0009_3949(); return;
}

/**
 * Decompiled function f__1FB5_0570_0019_510D()
 *
 * @name f__1FB5_0570_0019_510D
 * @implements 1FB5:0570:0019:510D ()
 *
 * Called From: 1FB5:027E:000F:429B
 * Called From: 1FB5:027E:0009:EC05
 * Called From: 1FB5:0298:001A:1FE7
 */
void f__1FB5_0570_0019_510D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__1FB5_0589_0007_CF55(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__1FB5_0597_0007_E435(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x0590; emu_last_cs = 0x1FB5; emu_last_ip = 0x0585; emu_last_length = 0x0019; emu_last_crc = 0x510D; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x059E; emu_last_cs = 0x1FB5; emu_last_ip = 0x0587; emu_last_length = 0x0019; emu_last_crc = 0x510D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0589_0007_CF55()
 *
 * @name f__1FB5_0589_0007_CF55
 * @implements 1FB5:0589:0007:CF55 ()
 *
 * Called From: 1FB5:057B:0019:510D
 */
void f__1FB5_0589_0007_CF55()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	f__1FB5_05B2_000A_194C(); return;
}

/**
 * Decompiled function f__1FB5_0597_0007_E435()
 *
 * @name f__1FB5_0597_0007_E435
 * @implements 1FB5:0597:0007:E435 ()
 *
 * Called From: 1FB5:0580:0019:510D
 */
void f__1FB5_0597_0007_E435()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8302);
	f__1FB5_05B2_000A_194C(); return;
}

/**
 * Decompiled function f__1FB5_05B2_000A_194C()
 *
 * @name f__1FB5_05B2_000A_194C
 * @implements 1FB5:05B2:000A:194C ()
 *
 * Called From: 1FB5:058E:0007:CF55
 * Called From: 1FB5:059C:0007:E435
 */
void f__1FB5_05B2_000A_194C()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x2);
	if (!emu_flags.zf) { f__1FB5_05BC_0009_ED1E(); return; }
	f__1FB5_0648_0009_AD12(); return;
}

/**
 * Decompiled function f__1FB5_05BC_0009_ED1E()
 *
 * @name f__1FB5_05BC_0009_ED1E
 * @implements 1FB5:05BC:0009:ED1E ()
 *
 * Called From: 1FB5:05B7:000A:194C
 */
void f__1FB5_05BC_0009_ED1E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x05C5; emu_last_cs = 0x1FB5; emu_last_ip = 0x05C0; emu_last_length = 0x0009; emu_last_crc = 0xED1E; emu_call(); return; } // Jump does not resolve
	f__1FB5_0648_0009_AD12(); return;
}

/**
 * Decompiled function f__1FB5_0648_0009_AD12()
 *
 * @name f__1FB5_0648_0009_AD12
 * @implements 1FB5:0648:0009:AD12 ()
 *
 * Called From: 1FB5:05B9:000A:194C
 * Called From: 1FB5:05C2:0009:ED1E
 */
void f__1FB5_0648_0009_AD12()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_0651_001E_836D(); return; }
	f__1FB5_0703_0012_6404(); return;
}

/**
 * Decompiled function f__1FB5_0651_001E_836D()
 *
 * @name f__1FB5_0651_001E_836D
 * @implements 1FB5:0651:001E:836D ()
 *
 * Called From: 1FB5:064C:0009:AD12
 */
void f__1FB5_0651_001E_836D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	if (!emu_flags.zf) { emu_ip = 0x066F; emu_last_cs = 0x1FB5; emu_last_ip = 0x066A; emu_last_length = 0x001E; emu_last_crc = 0x836D; emu_call(); return; } // Jump does not resolve
	f__1FB5_0703_0012_6404(); return;
}

/**
 * Decompiled function f__1FB5_0703_0012_6404()
 *
 * @name f__1FB5_0703_0012_6404
 * @implements 1FB5:0703:0012:6404 ()
 *
 * Called From: 1FB5:064E:0009:AD12
 * Called From: 1FB5:066C:001E:836D
 */
void f__1FB5_0703_0012_6404()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (emu_flags.zf) { f__1FB5_0727_000B_24D7(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0715); f__1FB5_1574_000F_E31E();
	f__1FB5_0715_0010_AC67();
}

/**
 * Decompiled function f__1FB5_0715_0010_AC67()
 *
 * @name f__1FB5_0715_0010_AC67
 * @implements 1FB5:0715:0010:AC67 ()
 *
 * Called From: 1FB5:0715:0012:6404
 */
void f__1FB5_0715_0010_AC67()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_0725_0002_C6BA(); return; }
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x09C1; emu_last_cs = 0x1FB5; emu_last_ip = 0x0722; emu_last_length = 0x0010; emu_last_crc = 0xAC67; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0722_0003_1C07()
 *
 * @name f__1FB5_0722_0003_1C07
 * @implements 1FB5:0722:0003:1C07 ()
 *
 * Called From: 1FB5:09BE:0009:3949
 */
void f__1FB5_0722_0003_1C07()
{
	f__1FB5_09C1_0006_F7CE(); return;
}

/**
 * Decompiled function f__1FB5_0725_0002_C6BA()
 *
 * @name f__1FB5_0725_0002_C6BA
 * @implements 1FB5:0725:0002:C6BA ()
 *
 * Called From: 1FB5:0719:0010:AC67
 */
void f__1FB5_0725_0002_C6BA()
{
	f__1FB5_0734_0011_4393(); return;
}

/**
 * Decompiled function f__1FB5_0727_000B_24D7()
 *
 * @name f__1FB5_0727_000B_24D7
 * @implements 1FB5:0727:000B:24D7 ()
 *
 * Called From: 1FB5:0708:0012:6404
 */
void f__1FB5_0727_000B_24D7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__1FB5_15B5_0015_6A00();
	f__1FB5_0732_0013_08A5();
}

/**
 * Decompiled function f__1FB5_0732_0013_08A5()
 *
 * @name f__1FB5_0732_0013_08A5
 * @implements 1FB5:0732:0013:08A5 ()
 *
 * Called From: 1FB5:0732:000B:24D7
 */
void f__1FB5_0732_0013_08A5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	if (!emu_flags.zf) { f__1FB5_0745_0011_8F3E(); return; }
	emu_movw(&emu_ax.x, 0x100);
	emu_ip = 0x0748; emu_last_cs = 0x1FB5; emu_last_ip = 0x0743; emu_last_length = 0x0013; emu_last_crc = 0x08A5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0734_0011_4393()
 *
 * @name f__1FB5_0734_0011_4393
 * @implements 1FB5:0734:0011:4393 ()
 *
 * Called From: 1FB5:0725:0002:C6BA
 */
void f__1FB5_0734_0011_4393()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8001);
	if (!emu_flags.zf) { emu_ip = 0x0745; emu_last_cs = 0x1FB5; emu_last_ip = 0x073E; emu_last_length = 0x0011; emu_last_crc = 0x4393; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x100);
	f__1FB5_0748_000E_D1BE(); return;
}

/**
 * Decompiled function f__1FB5_0745_0011_8F3E()
 *
 * @name f__1FB5_0745_0011_8F3E
 * @implements 1FB5:0745:0011:8F3E ()
 *
 * Called From: 1FB5:073E:0013:08A5
 */
void f__1FB5_0745_0011_8F3E()
{
	emu_movw(&emu_ax.x, 0x180);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0756); f__1FB5_0121_001B_0DC1();
	f__1FB5_0756_000E_E1DE();
}

/**
 * Decompiled function f__1FB5_0748_000E_D1BE()
 *
 * @name f__1FB5_0748_000E_D1BE
 * @implements 1FB5:0748:000E:D1BE ()
 *
 * Called From: 1FB5:0743:0011:4393
 */
void f__1FB5_0748_000E_D1BE()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0756); f__1FB5_0121_001B_0DC1();
	f__1FB5_0756_000E_E1DE();
}

/**
 * Decompiled function f__1FB5_0756_000E_E1DE()
 *
 * @name f__1FB5_0756_000E_E1DE
 * @implements 1FB5:0756:000E:E1DE ()
 *
 * Called From: 1FB5:0756:000E:D1BE
 * Called From: 1FB5:0756:0011:8F3E
 */
void f__1FB5_0756_000E_E1DE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0766; emu_last_cs = 0x1FB5; emu_last_ip = 0x0760; emu_last_length = 0x000E; emu_last_crc = 0xE1DE; emu_call(); return; } // Jump does not resolve
	f__1FB5_0780_0055_2064(); return;
}

/**
 * Decompiled function f__1FB5_0780_0055_2064()
 *
 * @name f__1FB5_0780_0055_2064
 * @implements 1FB5:0780:0055:2064 ()
 *
 * Called From: 1FB5:0762:000E:E1DE
 */
void f__1FB5_0780_0055_2064()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__1FB5_07BE_0017_9084(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1FB5_07BE_0017_9084(); return; }
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
	if (emu_flags.zf) { emu_ip = 0x0808; emu_last_cs = 0x1FB5; emu_last_ip = 0x07C2; emu_last_length = 0x0055; emu_last_crc = 0x2064; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x07D5); f__1FB5_0091_001B_4066();
	f__1FB5_07D5_0030_FC0F();
}

/**
 * Decompiled function f__1FB5_07BE_0017_9084()
 *
 * @name f__1FB5_07BE_0017_9084
 * @implements 1FB5:07BE:0017:9084 ()
 *
 * Called From: 1FB5:0784:0055:2064
 * Called From: 1FB5:078A:0055:2064
 */
void f__1FB5_07BE_0017_9084()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (emu_flags.zf) { f__1FB5_0808_009A_E169(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x07D5); emu_ip = 0x0091; emu_last_cs = 0x1FB5; emu_last_ip = 0x07D2; emu_last_length = 0x0017; emu_last_crc = 0x9084; emu_call(); // Jump does not resolve
	f__1FB5_07D5_0030_FC0F();
}

/**
 * Decompiled function f__1FB5_07D5_0030_FC0F()
 *
 * @name f__1FB5_07D5_0030_FC0F
 * @implements 1FB5:07D5:0030:FC0F ()
 *
 * Called From: 1FB5:07D5:0055:2064
 */
void f__1FB5_07D5_0030_FC0F()
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
	emu_push(0x0805); f__1FB5_0091_001B_4066();
	f__1FB5_0805_009D_F52C();
}

/**
 * Decompiled function f__1FB5_0805_009D_F52C()
 *
 * @name f__1FB5_0805_009D_F52C
 * @implements 1FB5:0805:009D:F52C ()
 *
 * Called From: 1FB5:0805:0030:FC0F
 */
void f__1FB5_0805_009D_F52C()
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
	if (emu_flags.zf) { emu_ip = 0x08A2; emu_last_cs = 0x1FB5; emu_last_ip = 0x0870; emu_last_length = 0x009D; emu_last_crc = 0xF52C; emu_call(); return; } // Jump does not resolve
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
	f__1FB5_08BB_0009_2D03(); return;
}

/**
 * Decompiled function f__1FB5_0808_009A_E169()
 *
 * @name f__1FB5_0808_009A_E169
 * @implements 1FB5:0808:009A:E169 ()
 *
 * Called From: 1FB5:07C2:0017:9084
 */
void f__1FB5_0808_009A_E169()
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
	if (emu_flags.zf) { f__1FB5_08A2_0022_420C(); return; }
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
	emu_ip = 0x08BB; emu_last_cs = 0x1FB5; emu_last_ip = 0x08A0; emu_last_length = 0x009A; emu_last_crc = 0xE169; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_08A2_0022_420C()
 *
 * @name f__1FB5_08A2_0022_420C
 * @implements 1FB5:08A2:0022:420C ()
 *
 * Called From: 1FB5:0870:009A:E169
 */
void f__1FB5_08A2_0022_420C()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x08C4; emu_last_cs = 0x1FB5; emu_last_ip = 0x08BF; emu_last_length = 0x0022; emu_last_crc = 0x420C; emu_call(); return; } // Jump does not resolve
	f__1FB5_09B8_0009_3949(); return;
}

/**
 * Decompiled function f__1FB5_08BB_0009_2D03()
 *
 * @name f__1FB5_08BB_0009_2D03
 * @implements 1FB5:08BB:0009:2D03 ()
 *
 * Called From: 1FB5:08A0:009D:F52C
 */
void f__1FB5_08BB_0009_2D03()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__1FB5_08C4_001A_86E4(); return; }
	emu_ip = 0x09B8; emu_last_cs = 0x1FB5; emu_last_ip = 0x08C1; emu_last_length = 0x0009; emu_last_crc = 0x2D03; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_08C4_001A_86E4()
 *
 * @name f__1FB5_08C4_001A_86E4
 * @implements 1FB5:08C4:001A:86E4 ()
 *
 * Called From: 1FB5:08BF:0009:2D03
 */
void f__1FB5_08C4_001A_86E4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x08DE; emu_last_cs = 0x1FB5; emu_last_ip = 0x08D9; emu_last_length = 0x001A; emu_last_crc = 0x86E4; emu_call(); return; } // Jump does not resolve
	f__1FB5_09B8_0009_3949(); return;
}

/**
 * Decompiled function f__1FB5_09B8_0009_3949()
 *
 * @name f__1FB5_09B8_0009_3949
 * @implements 1FB5:09B8:0009:3949 ()
 *
 * Called From: 1FB5:056D:0006:9510
 * Called From: 1FB5:08C1:0022:420C
 * Called From: 1FB5:08DB:001A:86E4
 */
void f__1FB5_09B8_0009_3949()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_ax.x, emu_di);
	f__1FB5_0722_0003_1C07(); return;
}

/**
 * Decompiled function f__1FB5_09C1_0006_F7CE()
 *
 * @name f__1FB5_09C1_0006_F7CE
 * @implements 1FB5:09C1:0006:F7CE ()
 *
 * Called From: 1FB5:0722:0003:1C07
 */
void f__1FB5_09C1_0006_F7CE()
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
 * Decompiled function f__1FB5_09C7_0018_922D()
 *
 * @name f__1FB5_09C7_0018_922D
 * @implements 1FB5:09C7:0018:922D ()
 *
 * Called From: 0FCB:0127:0009:2605
 * Called From: 253D:0034:000F:3D83
 * Called From: 253D:00E7:0009:2605
 * Called From: 253D:0213:0009:2605
 * Called From: 256D:00A0:0009:2605
 * Called From: B495:1A59:0009:2605
 * Called From: B4B1:001C:000B:B9A3
 * Called From: B4B1:008F:0012:D287
 * Called From: B4B8:1CC9:000E:6633
 * Called From: B4CA:0251:000B:6CAB
 * Called From: B4E0:06E6:0009:2601
 * Called From: B4F2:007E:0009:2605
 * Called From: B503:121A:0009:2605
 * Called From: B511:0A7F:0009:260D
 * Called From: B518:05FD:000F:00FF
 * Called From: B518:081D:000F:00FF
 * Called From: B52A:00D4:0016:1D8A
 * Called From: B52A:00D4:001E:9A65
 * Called From: B52A:043F:0009:2205
 * Called From: B52A:0A53:0006:6250
 */
void f__1FB5_09C7_0018_922D()
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
	emu_push(0x09DF); f__1FB5_1A6C_0020_9634();
	f__1FB5_09DF_000A_4613();
}

/**
 * Decompiled function f__1FB5_09DF_000A_4613()
 *
 * @name f__1FB5_09DF_000A_4613
 * @implements 1FB5:09DF:000A:4613 ()
 *
 * Called From: 1FB5:09DF:0018:922D
 */
void f__1FB5_09DF_000A_4613()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_09E9_0066_0F4A(); return; }
	emu_ip = 0x0A9A; emu_last_cs = 0x1FB5; emu_last_ip = 0x09E6; emu_last_length = 0x000A; emu_last_crc = 0x4613; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_09E9_0066_0F4A()
 *
 * @name f__1FB5_09E9_0066_0F4A
 * @implements 1FB5:09E9:0066:0F4A ()
 *
 * Called From: 1FB5:09E4:000A:4613
 */
void f__1FB5_09E9_0066_0F4A()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_0A6F_0014_AF1C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	if (emu_flags.zf) { f__1FB5_0A6F_0014_AF1C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x8);
	if (emu_flags.zf) { emu_ip = 0x0A6D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0A30; emu_last_length = 0x0066; emu_last_crc = 0x0F4A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs); emu_push(0x0A4F); emu_cs = 0x23E1; emu_ip = 0x0C11; emu_last_cs = 0x1FB5; emu_last_ip = 0x0A4A; emu_last_length = 0x0066; emu_last_crc = 0x0F4A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0A6F_0014_AF1C()
 *
 * @name f__1FB5_0A6F_0014_AF1C
 * @implements 1FB5:0A6F:0014:AF1C ()
 *
 * Called From: 1FB5:0A00:0066:0F4A
 * Called From: 1FB5:0A1A:0066:0F4A
 */
void f__1FB5_0A6F_0014_AF1C()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_cs);
	emu_push(0x0A83); f__1FB5_0047_0012_2389();
	f__1FB5_0A83_001B_80A7();
}

/**
 * Decompiled function f__1FB5_0A83_001B_80A7()
 *
 * @name f__1FB5_0A83_001B_80A7
 * @implements 1FB5:0A83:001B:80A7 ()
 *
 * Called From: 1FB5:0A83:0014:AF1C
 */
void f__1FB5_0A83_001B_80A7()
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
 * Decompiled function f__1FB5_0AEC_001B_A5E4()
 *
 * @name f__1FB5_0AEC_001B_A5E4
 * @implements 1FB5:0AEC:001B:A5E4 ()
 *
 * Called From: 0FCB:00F2:0015:AB73
 * Called From: 0FCB:011E:0014:0A45
 * Called From: 1FB5:0331:001C:C5E1
 * Called From: 1FB5:0331:0017:3519
 * Called From: 1FB5:04A0:0012:DCC6
 * Called From: 253D:0025:0017:236C
 * Called From: 253D:00DE:0023:4714
 * Called From: 253D:0132:0017:515A
 * Called From: 253D:0148:0016:B57F
 * Called From: 253D:0172:002A:786F
 * Called From: 253D:020A:0019:DC1B
 * Called From: 256D:004A:0017:575A
 * Called From: 256D:0097:002C:8C80
 * Called From: B495:1A50:001A:4B96
 * Called From: B4B1:0043:0017:5F5A
 * Called From: B4B1:00BD:002A:CE8A
 * Called From: B4B1:00BD:0012:E067
 * Called From: B4B1:00EE:001A:7444
 * Called From: B4B1:0117:0012:E467
 * Called From: B4B1:01F2:002A:CE8A
 * Called From: B4B1:01F2:0012:E067
 * Called From: B4B1:0223:001A:7444
 * Called From: B4B1:024C:0012:E467
 * Called From: B4B1:02C4:001E:075C
 * Called From: B4CA:0246:0014:C0C9
 * Called From: B4E0:06B5:0015:76F1
 * Called From: B503:1211:0015:49AC
 * Called From: B52A:002B:0017:365A
 * Called From: B52A:035E:001A:C5D4
 * Called From: B52A:039B:0026:FDF7
 * Called From: B52A:0436:0015:1289
 * Called From: B52A:0881:0015:A573
 * Called From: B52A:0A3E:001B:0B21
 */
void f__1FB5_0AEC_001B_A5E4()
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
	emu_push(0x0B07); f__1FB5_1A6C_0020_9634();
	f__1FB5_0B07_000E_E0C0();
}

/**
 * Decompiled function f__1FB5_0B07_000E_E0C0()
 *
 * @name f__1FB5_0B07_000E_E0C0
 * @implements 1FB5:0B07:000E:E0C0 ()
 *
 * Called From: 1FB5:0B07:001B:A5E4
 */
void f__1FB5_0B07_000E_E0C0()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_0B15_0050_1E07(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0E96; emu_last_cs = 0x1FB5; emu_last_ip = 0x0B12; emu_last_length = 0x000E; emu_last_crc = 0xE0C0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0B12_0003_5C80()
 *
 * @name f__1FB5_0B12_0003_5C80
 * @implements 1FB5:0B12:0003:5C80 ()
 *
 * Called From: 1FB5:0E93:000D:AC5D
 */
void f__1FB5_0B12_0003_5C80()
{
	f__1FB5_0E96_0006_F7CE(); return;
}

/**
 * Decompiled function f__1FB5_0B15_0050_1E07()
 *
 * @name f__1FB5_0B15_0050_1E07
 * @implements 1FB5:0B15:0050:1E07 ()
 *
 * Called From: 1FB5:0B0C:000E:E0C0
 */
void f__1FB5_0B15_0050_1E07()
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
	if (!emu_flags.zf) { f__1FB5_0B65_0008_D056(); return; }
	f__1FB5_0BFB_0015_DBAE(); return;
}

/**
 * Decompiled function f__1FB5_0B65_0008_D056()
 *
 * @name f__1FB5_0B65_0008_D056
 * @implements 1FB5:0B65:0008:D056 ()
 *
 * Called From: 1FB5:0B60:0050:1E07
 */
void f__1FB5_0B65_0008_D056()
{
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__1FB5_0B6D_0082_2E61(); return; }
	emu_ip = 0x0BFB; emu_last_cs = 0x1FB5; emu_last_ip = 0x0B6A; emu_last_length = 0x0008; emu_last_crc = 0xD056; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0B6D_0082_2E61()
 *
 * @name f__1FB5_0B6D_0082_2E61
 * @implements 1FB5:0B6D:0082:2E61 ()
 *
 * Called From: 1FB5:0B68:0008:D056
 */
void f__1FB5_0B6D_0082_2E61()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	if (emu_flags.zf) { emu_ip = 0x0BFB; emu_last_cs = 0x1FB5; emu_last_ip = 0x0B85; emu_last_length = 0x0082; emu_last_crc = 0x2E61; emu_call(); return; } // Jump does not resolve
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
	if (!(emu_flags.cf || emu_flags.zf)) { f__1FB5_0BEF_0021_3C8C(); return; }
	if (emu_flags.cf) { f__1FB5_0BC0_002F_CFD3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { f__1FB5_0BEF_0021_3C8C(); return; }
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
	f__1FB5_0BF5_001B_57B4(); return;
}

/**
 * Decompiled function f__1FB5_0BC0_002F_CFD3()
 *
 * @name f__1FB5_0BC0_002F_CFD3
 * @implements 1FB5:0BC0:002F:CFD3 ()
 *
 * Called From: 1FB5:0BB9:0082:2E61
 */
void f__1FB5_0BC0_002F_CFD3()
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
	f__1FB5_0BF5_001B_57B4(); return;
}

/**
 * Decompiled function f__1FB5_0BEF_0021_3C8C()
 *
 * @name f__1FB5_0BEF_0021_3C8C
 * @implements 1FB5:0BEF:0021:3C8C ()
 *
 * Called From: 1FB5:0BB7:0082:2E61
 * Called From: 1FB5:0BBE:0082:2E61
 */
void f__1FB5_0BEF_0021_3C8C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1FB5_0C10_000B_B328(); return; }
	f__1FB5_0E89_000D_AC5D(); return;
}

/**
 * Decompiled function f__1FB5_0BF5_001B_57B4()
 *
 * @name f__1FB5_0BF5_001B_57B4
 * @implements 1FB5:0BF5:001B:57B4 ()
 *
 * Called From: 1FB5:0BED:0082:2E61
 * Called From: 1FB5:0BED:002F:CFD3
 */
void f__1FB5_0BF5_001B_57B4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1FB5_0C10_000B_B328(); return; }
	f__1FB5_0E89_000D_AC5D(); return;
}

/**
 * Decompiled function f__1FB5_0BFB_0015_DBAE()
 *
 * @name f__1FB5_0BFB_0015_DBAE
 * @implements 1FB5:0BFB:0015:DBAE ()
 *
 * Called From: 1FB5:0B62:0050:1E07
 */
void f__1FB5_0BFB_0015_DBAE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__1FB5_0C10_000B_B328(); return; }
	emu_ip = 0x0E89; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C0D; emu_last_length = 0x0015; emu_last_crc = 0xDBAE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0C10_000B_B328()
 *
 * @name f__1FB5_0C10_000B_B328
 * @implements 1FB5:0C10:000B:B328 ()
 *
 * Called From: 1FB5:0C0B:0021:3C8C
 * Called From: 1FB5:0C0B:001B:57B4
 * Called From: 1FB5:0C0B:0015:DBAE
 */
void f__1FB5_0C10_000B_B328()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0C1B); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1FB5_0C1B_0011_B498();
}

/**
 * Decompiled function f__1FB5_0C1B_0011_B498()
 *
 * @name f__1FB5_0C1B_0011_B498
 * @implements 1FB5:0C1B:0011:B498 ()
 *
 * Called From: 1FB5:0C1B:000B:B328
 */
void f__1FB5_0C1B_0011_B498()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1FB5_0C2C_000B_94DE(); return; }
	emu_ip = 0x0E03; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C29; emu_last_length = 0x0011; emu_last_crc = 0xB498; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0C2C_000B_94DE()
 *
 * @name f__1FB5_0C2C_000B_94DE
 * @implements 1FB5:0C2C:000B:94DE ()
 *
 * Called From: 1FB5:0C27:0011:B498
 */
void f__1FB5_0C2C_000B_94DE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0C37); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	f__1FB5_0C37_0009_B737();
}

/**
 * Decompiled function f__1FB5_0C37_0009_B737()
 *
 * @name f__1FB5_0C37_0009_B737
 * @implements 1FB5:0C37:0009:B737 ()
 *
 * Called From: 1FB5:0C37:000B:94DE
 */
void f__1FB5_0C37_0009_B737()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0C40; emu_last_cs = 0x1FB5; emu_last_ip = 0x0C3B; emu_last_length = 0x0009; emu_last_crc = 0xB737; emu_call(); return; } // Jump does not resolve
	f__1FB5_0D59_0003_5D06(); return;
}

/**
 * Decompiled function f__1FB5_0D59_0003_5D06()
 *
 * @name f__1FB5_0D59_0003_5D06
 * @implements 1FB5:0D59:0003:5D06 ()
 *
 * Called From: 1FB5:0C3D:0009:B737
 */
void f__1FB5_0D59_0003_5D06()
{
	f__1FB5_0DF5_000B_130C(); return;
}

/**
 * Decompiled function f__1FB5_0D5C_0014_9CEB()
 *
 * @name f__1FB5_0D5C_0014_9CEB
 * @implements 1FB5:0D5C:0014:9CEB ()
 *
 * Called From: 1FB5:0DFD:000B:130C
 * Called From: 1FB5:0DFD:0013:3A4A
 */
void f__1FB5_0D5C_0014_9CEB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { f__1FB5_0D70_0011_7543(); return; }
	if (emu_flags.cf) { emu_ip = 0x0D6B; emu_last_cs = 0x1FB5; emu_last_ip = 0x0D62; emu_last_length = 0x0014; emu_last_crc = 0x9CEB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x7D00);
	if (!emu_flags.cf) { f__1FB5_0D70_0011_7543(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	f__1FB5_0D73_000E_D343(); return;
}

/**
 * Decompiled function f__1FB5_0D70_0011_7543()
 *
 * @name f__1FB5_0D70_0011_7543
 * @implements 1FB5:0D70:0011:7543 ()
 *
 * Called From: 1FB5:0D60:0014:9CEB
 * Called From: 1FB5:0D69:0014:9CEB
 */
void f__1FB5_0D70_0011_7543()
{
	emu_movw(&emu_ax.x, 0x7D00);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0D81); f__1FB5_00C5_001B_2EE4();
	f__1FB5_0D81_004F_1ABD();
}

/**
 * Decompiled function f__1FB5_0D73_000E_D343()
 *
 * @name f__1FB5_0D73_000E_D343
 * @implements 1FB5:0D73:000E:D343 ()
 *
 * Called From: 1FB5:0D6E:0014:9CEB
 */
void f__1FB5_0D73_000E_D343()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0D81); f__1FB5_00C5_001B_2EE4();
	f__1FB5_0D81_004F_1ABD();
}

/**
 * Decompiled function f__1FB5_0D81_004F_1ABD()
 *
 * @name f__1FB5_0D81_004F_1ABD
 * @implements 1FB5:0D81:004F:1ABD ()
 *
 * Called From: 1FB5:0D81:000E:D343
 * Called From: 1FB5:0D81:0011:7543
 */
void f__1FB5_0D81_004F_1ABD()
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DD0; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DC3; emu_last_length = 0x004F; emu_last_crc = 0x1ABD; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCE; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DC5; emu_last_length = 0x004F; emu_last_crc = 0x1ABD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x7D00);
	if (!emu_flags.cf) { f__1FB5_0DD0_001D_00AD(); return; }
	f__1FB5_0E00_0003_9D01(); return;
}

/**
 * Decompiled function f__1FB5_0DD0_001D_00AD()
 *
 * @name f__1FB5_0DD0_001D_00AD
 * @implements 1FB5:0DD0:001D:00AD ()
 *
 * Called From: 1FB5:0DCC:004F:1ABD
 */
void f__1FB5_0DD0_001D_00AD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0DED); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1FB5_0DED_0013_3A4A();
}

/**
 * Decompiled function f__1FB5_0DED_0013_3A4A()
 *
 * @name f__1FB5_0DED_0013_3A4A
 * @implements 1FB5:0DED:0013:3A4A ()
 *
 * Called From: 1FB5:0DED:001D:00AD
 */
void f__1FB5_0DED_0013_3A4A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { emu_ip = 0x0E00; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DFB; emu_last_length = 0x0013; emu_last_crc = 0x3A4A; emu_call(); return; } // Jump does not resolve
	f__1FB5_0D5C_0014_9CEB(); return;
}

/**
 * Decompiled function f__1FB5_0DF5_000B_130C()
 *
 * @name f__1FB5_0DF5_000B_130C
 * @implements 1FB5:0DF5:000B:130C ()
 *
 * Called From: 1FB5:0D59:0003:5D06
 */
void f__1FB5_0DF5_000B_130C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { emu_ip = 0x0E00; emu_last_cs = 0x1FB5; emu_last_ip = 0x0DFB; emu_last_length = 0x000B; emu_last_crc = 0x130C; emu_call(); return; } // Jump does not resolve
	f__1FB5_0D5C_0014_9CEB(); return;
}

/**
 * Decompiled function f__1FB5_0E00_0003_9D01()
 *
 * @name f__1FB5_0E00_0003_9D01
 * @implements 1FB5:0E00:0003:9D01 ()
 *
 * Called From: 1FB5:0DCE:004F:1ABD
 */
void f__1FB5_0E00_0003_9D01()
{
	f__1FB5_0E89_000D_AC5D(); return;
}

/**
 * Decompiled function f__1FB5_0E89_000D_AC5D()
 *
 * @name f__1FB5_0E89_000D_AC5D
 * @implements 1FB5:0E89:000D:AC5D ()
 *
 * Called From: 1FB5:0C0D:001B:57B4
 * Called From: 1FB5:0C0D:0021:3C8C
 * Called From: 1FB5:0E00:0003:9D01
 */
void f__1FB5_0E89_000D_AC5D()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__1FB5_0B12_0003_5C80(); return;
}

/**
 * Decompiled function f__1FB5_0E96_0006_F7CE()
 *
 * @name f__1FB5_0E96_0006_F7CE
 * @implements 1FB5:0E96:0006:F7CE ()
 *
 * Called From: 1FB5:0B12:0003:5C80
 */
void f__1FB5_0E96_0006_F7CE()
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
 * Decompiled function f__1FB5_0E9C_001B_37D1()
 *
 * @name f__1FB5_0E9C_001B_37D1
 * @implements 1FB5:0E9C:001B:37D1 ()
 *
 * Called From: B4B1:03AE:0026:282D
 * Called From: B4B1:03DC:001B:A317
 * Called From: B4B1:03F1:0015:290C
 * Called From: B4B1:046B:001A:55EF
 * Called From: B4B1:04B5:001A:55EF
 * Called From: B4F2:0075:0017:F3DE
 * Called From: B511:082B:0021:E6D5
 * Called From: B511:084A:001F:5866
 * Called From: B511:0869:001F:AE21
 * Called From: B511:0893:001C:2075
 * Called From: B511:08D6:001A:7CEF
 * Called From: B511:08EB:0015:0963
 * Called From: B511:091A:002F:3CDB
 * Called From: B518:05EE:0018:058D
 * Called From: B518:080E:0018:058D
 */
void f__1FB5_0E9C_001B_37D1()
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
	emu_push(0x0EB7); f__1FB5_1A6C_0020_9634();
	f__1FB5_0EB7_000E_A0EF();
}

/**
 * Decompiled function f__1FB5_0EB7_000E_A0EF()
 *
 * @name f__1FB5_0EB7_000E_A0EF
 * @implements 1FB5:0EB7:000E:A0EF ()
 *
 * Called From: 1FB5:0EB7:001B:37D1
 */
void f__1FB5_0EB7_000E_A0EF()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_0EC5_004A_EB70(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1201; emu_last_cs = 0x1FB5; emu_last_ip = 0x0EC2; emu_last_length = 0x000E; emu_last_crc = 0xA0EF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_0EC2_0003_1CAF()
 *
 * @name f__1FB5_0EC2_0003_1CAF
 * @implements 1FB5:0EC2:0003:1CAF ()
 *
 * Called From: 1FB5:11FE:000D:2C7A
 */
void f__1FB5_0EC2_0003_1CAF()
{
	f__1FB5_1201_0006_F7CE(); return;
}

/**
 * Decompiled function f__1FB5_0EC5_004A_EB70()
 *
 * @name f__1FB5_0EC5_004A_EB70
 * @implements 1FB5:0EC5:004A:EB70 ()
 *
 * Called From: 1FB5:0EBC:000E:A0EF
 */
void f__1FB5_0EC5_004A_EB70()
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
	if (!emu_flags.zf) { f__1FB5_0F14_0019_04E8(); return; }
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
	emu_push(0x0F0F); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F0C; emu_last_length = 0x004A; emu_last_crc = 0xEB70; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_0F14_0019_04E8()
 *
 * @name f__1FB5_0F14_0019_04E8
 * @implements 1FB5:0F14:0019:04E8 ()
 *
 * Called From: 1FB5:0EEC:004A:EB70
 */
void f__1FB5_0F14_0019_04E8()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0F2D); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	f__1FB5_0F2D_0009_7717();
}

/**
 * Decompiled function f__1FB5_0F2D_0009_7717()
 *
 * @name f__1FB5_0F2D_0009_7717
 * @implements 1FB5:0F2D:0009:7717 ()
 *
 * Called From: 1FB5:0F2D:0019:04E8
 */
void f__1FB5_0F2D_0009_7717()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0F36; emu_last_cs = 0x1FB5; emu_last_ip = 0x0F31; emu_last_length = 0x0009; emu_last_crc = 0x7717; emu_call(); return; } // Jump does not resolve
	f__1FB5_10D0_0003_9DA5(); return;
}

/**
 * Decompiled function f__1FB5_10D0_0003_9DA5()
 *
 * @name f__1FB5_10D0_0003_9DA5
 * @implements 1FB5:10D0:0003:9DA5 ()
 *
 * Called From: 1FB5:0F33:0009:7717
 */
void f__1FB5_10D0_0003_9DA5()
{
	f__1FB5_11E9_000B_D3AC(); return;
}

/**
 * Decompiled function f__1FB5_10D3_0014_9CDB()
 *
 * @name f__1FB5_10D3_0014_9CDB
 * @implements 1FB5:10D3:0014:9CDB ()
 *
 * Called From: 1FB5:11F1:000B:D3AC
 */
void f__1FB5_10D3_0014_9CDB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x10E7; emu_last_cs = 0x1FB5; emu_last_ip = 0x10D7; emu_last_length = 0x0014; emu_last_crc = 0x9CDB; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x10E2; emu_last_cs = 0x1FB5; emu_last_ip = 0x10D9; emu_last_length = 0x0014; emu_last_crc = 0x9CDB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x7D00);
	if (!emu_flags.cf) { emu_ip = 0x10E7; emu_last_cs = 0x1FB5; emu_last_ip = 0x10E0; emu_last_length = 0x0014; emu_last_crc = 0x9CDB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	f__1FB5_10EA_000E_1D6C(); return;
}

/**
 * Decompiled function f__1FB5_10EA_000E_1D6C()
 *
 * @name f__1FB5_10EA_000E_1D6C
 * @implements 1FB5:10EA:000E:1D6C ()
 *
 * Called From: 1FB5:10E5:0014:9CDB
 */
void f__1FB5_10EA_000E_1D6C()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x10F8); f__1FB5_00F3_001B_7009();
	f__1FB5_10F8_0049_98F1();
}

/**
 * Decompiled function f__1FB5_10F8_0049_98F1()
 *
 * @name f__1FB5_10F8_0049_98F1
 * @implements 1FB5:10F8:0049:98F1 ()
 *
 * Called From: 1FB5:10F8:000E:1D6C
 */
void f__1FB5_10F8_0049_98F1()
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
	if (!emu_flags.zf) { f__1FB5_1141_0052_A97B(); return; }
	emu_ip = 0x11F4; emu_last_cs = 0x1FB5; emu_last_ip = 0x113E; emu_last_length = 0x0049; emu_last_crc = 0x98F1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1141_0052_A97B()
 *
 * @name f__1FB5_1141_0052_A97B
 * @implements 1FB5:1141:0052:A97B ()
 *
 * Called From: 1FB5:113C:0049:98F1
 */
void f__1FB5_1141_0052_A97B()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1FB5_11C4_001D_008E(); return; }
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
	if (emu_flags.cf) { emu_ip = 0x1193; emu_last_cs = 0x1FB5; emu_last_ip = 0x116E; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1179; emu_last_cs = 0x1FB5; emu_last_ip = 0x1170; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1193; emu_last_cs = 0x1FB5; emu_last_ip = 0x1177; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_ip = 0x11A8; emu_last_cs = 0x1FB5; emu_last_ip = 0x1191; emu_last_length = 0x0052; emu_last_crc = 0xA97B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_11C4_001D_008E()
 *
 * @name f__1FB5_11C4_001D_008E
 * @implements 1FB5:11C4:001D:008E ()
 *
 * Called From: 1FB5:1144:0052:A97B
 */
void f__1FB5_11C4_001D_008E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x11E1); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__1FB5_11E1_0013_FAEA();
}

/**
 * Decompiled function f__1FB5_11E1_0013_FAEA()
 *
 * @name f__1FB5_11E1_0013_FAEA
 * @implements 1FB5:11E1:0013:FAEA ()
 *
 * Called From: 1FB5:11E1:001D:008E
 */
void f__1FB5_11E1_0013_FAEA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { f__1FB5_11F4_000D_2C7A(); return; }
	emu_ip = 0x10D3; emu_last_cs = 0x1FB5; emu_last_ip = 0x11F1; emu_last_length = 0x0013; emu_last_crc = 0xFAEA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_11E9_000B_D3AC()
 *
 * @name f__1FB5_11E9_000B_D3AC
 * @implements 1FB5:11E9:000B:D3AC ()
 *
 * Called From: 1FB5:10D0:0003:9DA5
 */
void f__1FB5_11E9_000B_D3AC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.zf) { emu_ip = 0x11F4; emu_last_cs = 0x1FB5; emu_last_ip = 0x11EF; emu_last_length = 0x000B; emu_last_crc = 0xD3AC; emu_call(); return; } // Jump does not resolve
	f__1FB5_10D3_0014_9CDB(); return;
}

/**
 * Decompiled function f__1FB5_11F4_000D_2C7A()
 *
 * @name f__1FB5_11F4_000D_2C7A
 * @implements 1FB5:11F4:000D:2C7A ()
 *
 * Called From: 1FB5:11EF:0013:FAEA
 */
void f__1FB5_11F4_000D_2C7A()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__1FB5_0EC2_0003_1CAF(); return;
}

/**
 * Decompiled function f__1FB5_1201_0006_F7CE()
 *
 * @name f__1FB5_1201_0006_F7CE
 * @implements 1FB5:1201:0006:F7CE ()
 *
 * Called From: 1FB5:0EC2:0003:1CAF
 */
void f__1FB5_1201_0006_F7CE()
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
 * Decompiled function f__1FB5_1207_001B_2A6C()
 *
 * @name f__1FB5_1207_001B_2A6C
 * @implements 1FB5:1207:001B:2A6C ()
 *
 * Called From: 0FCB:00DD:0017:6A41
 * Called From: 0FCB:010A:0018:1322
 * Called From: 1FB5:0567:00AD:8BDB
 * Called From: 1FB5:0567:0050:77B6
 * Called From: 253D:0185:000E:37D8
 * Called From: B4B1:0065:0022:DD12
 * Called From: B4B1:0163:002A:F6C5
 * Called From: B4B1:0186:0016:189C
 * Called From: B4B1:01B7:0028:14CC
 * Called From: B4B1:0309:0045:223B
 * Called From: B4B1:032C:0016:189C
 * Called From: B4B1:035D:0028:14CC
 * Called From: B4B1:03C1:0013:A9F2
 * Called From: B4B1:0404:0013:A9F2
 * Called From: B4B1:0435:000F:82CF
 * Called From: B4B1:047E:0013:70AD
 * Called From: B4B1:04C8:0013:AFF2
 * Called From: B4E0:06A0:0014:6B8A
 * Called From: B503:11E4:0015:4655
 * Called From: B503:11FC:0018:61C0
 * Called From: B52A:008B:0015:C75F
 * Called From: B52A:0344:001E:1AA7
 * Called From: B52A:0375:0017:D157
 * Called From: B52A:0421:001F:C579
 * Called From: B52A:086C:0021:2409
 * Called From: B52A:0A05:000F:8063
 */
void f__1FB5_1207_001B_2A6C()
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
	emu_push(0x1222); f__1FB5_1A6C_0020_9634();
	f__1FB5_1222_000E_20EF();
}

/**
 * Decompiled function f__1FB5_1222_000E_20EF()
 *
 * @name f__1FB5_1222_000E_20EF
 * @implements 1FB5:1222:000E:20EF ()
 *
 * Called From: 1FB5:1222:001B:2A6C
 */
void f__1FB5_1222_000E_20EF()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_1230_0033_9F26(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x156E; emu_last_cs = 0x1FB5; emu_last_ip = 0x122D; emu_last_length = 0x000E; emu_last_crc = 0x20EF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_122D_0003_9CAF()
 *
 * @name f__1FB5_122D_0003_9CAF
 * @implements 1FB5:122D:0003:9CAF ()
 *
 * Called From: 1FB5:13E5:002B:8E17
 * Called From: 1FB5:156B:0068:A561
 * Called From: 1FB5:156B:001C:9858
 */
void f__1FB5_122D_0003_9CAF()
{
	f__1FB5_156E_0006_F7CE(); return;
}

/**
 * Decompiled function f__1FB5_1230_0033_9F26()
 *
 * @name f__1FB5_1230_0033_9F26
 * @implements 1FB5:1230:0033:9F26 ()
 *
 * Called From: 1FB5:1227:000E:20EF
 */
void f__1FB5_1230_0033_9F26()
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
	if (emu_flags.zf) { emu_ip = 0x1263; emu_last_cs = 0x1FB5; emu_last_ip = 0x125E; emu_last_length = 0x0033; emu_last_crc = 0x9F26; emu_call(); return; } // Jump does not resolve
	f__1FB5_1369_0009_2D93(); return;
}

/**
 * Decompiled function f__1FB5_1369_0009_2D93()
 *
 * @name f__1FB5_1369_0009_2D93
 * @implements 1FB5:1369:0009:2D93 ()
 *
 * Called From: 1FB5:1260:0033:9F26
 */
void f__1FB5_1369_0009_2D93()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFF);
	if (!emu_flags.zf) { f__1FB5_1372_001A_D848(); return; }
	f__1FB5_14F6_0010_F2FF(); return;
}

/**
 * Decompiled function f__1FB5_1372_001A_D848()
 *
 * @name f__1FB5_1372_001A_D848
 * @implements 1FB5:1372:001A:D848 ()
 *
 * Called From: 1FB5:136D:0009:2D93
 */
void f__1FB5_1372_001A_D848()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (!emu_flags.zf) { f__1FB5_138C_0031_4F89(); return; }
	emu_ip = 0x14F6; emu_last_cs = 0x1FB5; emu_last_ip = 0x1389; emu_last_length = 0x001A; emu_last_crc = 0xD848; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_138C_0031_4F89()
 *
 * @name f__1FB5_138C_0031_4F89
 * @implements 1FB5:138C:0031:4F89 ()
 *
 * Called From: 1FB5:1387:001A:D848
 */
void f__1FB5_138C_0031_4F89()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (!emu_flags.zf) { f__1FB5_13E8_0009_9858(); return; }
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
	emu_push(0x13BD); f__1FB5_0091_001B_4066();
	f__1FB5_13BD_002B_8E17();
}

/**
 * Decompiled function f__1FB5_13BD_002B_8E17()
 *
 * @name f__1FB5_13BD_002B_8E17
 * @implements 1FB5:13BD:002B:8E17 ()
 *
 * Called From: 1FB5:13BD:0031:4F89
 */
void f__1FB5_13BD_002B_8E17()
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
	f__1FB5_122D_0003_9CAF(); return;
}

/**
 * Decompiled function f__1FB5_13E8_0009_9858()
 *
 * @name f__1FB5_13E8_0009_9858
 * @implements 1FB5:13E8:0009:9858 ()
 *
 * Called From: 1FB5:1390:0031:4F89
 */
void f__1FB5_13E8_0009_9858()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x2);
	if (emu_flags.zf) { f__1FB5_13F1_0016_4053(); return; }
	f__1FB5_14F6_0010_F2FF(); return;
}

/**
 * Decompiled function f__1FB5_13F1_0016_4053()
 *
 * @name f__1FB5_13F1_0016_4053
 * @implements 1FB5:13F1:0016:4053 ()
 *
 * Called From: 1FB5:13EC:0009:9858
 */
void f__1FB5_13F1_0016_4053()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1407; emu_last_cs = 0x1FB5; emu_last_ip = 0x13F5; emu_last_length = 0x0016; emu_last_crc = 0x4053; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x13FF; emu_last_cs = 0x1FB5; emu_last_ip = 0x13F7; emu_last_length = 0x0016; emu_last_crc = 0x4053; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1FB5_1407_003D_48A4(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ip = 0x140B; emu_last_cs = 0x1FB5; emu_last_ip = 0x1405; emu_last_length = 0x0016; emu_last_crc = 0x4053; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1407_003D_48A4()
 *
 * @name f__1FB5_1407_003D_48A4
 * @implements 1FB5:1407:003D:48A4 ()
 *
 * Called From: 1FB5:13FD:0016:4053
 */
void f__1FB5_1407_003D_48A4()
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1444; emu_last_cs = 0x1FB5; emu_last_ip = 0x1433; emu_last_length = 0x003D; emu_last_crc = 0x48A4; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1FB5_143C_0008_094A(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1444; emu_last_cs = 0x1FB5; emu_last_ip = 0x143A; emu_last_length = 0x003D; emu_last_crc = 0x48A4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	f__1FB5_1463_0054_A029(); return;
}

/**
 * Decompiled function f__1FB5_143C_0008_094A()
 *
 * @name f__1FB5_143C_0008_094A
 * @implements 1FB5:143C:0008:094A ()
 *
 * Called From: 1FB5:1435:003D:48A4
 */
void f__1FB5_143C_0008_094A()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	f__1FB5_1463_0054_A029(); return;
}

/**
 * Decompiled function f__1FB5_1463_0054_A029()
 *
 * @name f__1FB5_1463_0054_A029
 * @implements 1FB5:1463:0054:A029 ()
 *
 * Called From: 1FB5:1442:003D:48A4
 * Called From: 1FB5:1442:0008:094A
 */
void f__1FB5_1463_0054_A029()
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
	emu_push(0x14B7); f__1FB5_0091_001B_4066();
	f__1FB5_14B7_003F_AD3D();
}

/**
 * Decompiled function f__1FB5_14B7_003F_AD3D()
 *
 * @name f__1FB5_14B7_003F_AD3D
 * @implements 1FB5:14B7:003F:AD3D ()
 *
 * Called From: 1FB5:14B7:0054:A029
 */
void f__1FB5_14B7_003F_AD3D()
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
	f__1FB5_1552_001C_9858(); return;
}

/**
 * Decompiled function f__1FB5_14F6_0010_F2FF()
 *
 * @name f__1FB5_14F6_0010_F2FF
 * @implements 1FB5:14F6:0010:F2FF ()
 *
 * Called From: 1FB5:136F:0009:2D93
 * Called From: 1FB5:13EE:0009:9858
 */
void f__1FB5_14F6_0010_F2FF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x1506); f__1FB5_0091_001B_4066();
	f__1FB5_1506_0068_A561();
}

/**
 * Decompiled function f__1FB5_1506_0068_A561()
 *
 * @name f__1FB5_1506_0068_A561
 * @implements 1FB5:1506:0068:A561 ()
 *
 * Called From: 1FB5:1506:0010:F2FF
 */
void f__1FB5_1506_0068_A561()
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
	if (emu_flags.zf) { f__1FB5_1552_001C_9858(); return; }
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
	f__1FB5_122D_0003_9CAF(); return;
}

/**
 * Decompiled function f__1FB5_1552_001C_9858()
 *
 * @name f__1FB5_1552_001C_9858
 * @implements 1FB5:1552:001C:9858 ()
 *
 * Called From: 1FB5:14F4:003F:AD3D
 * Called From: 1FB5:1522:0068:A561
 */
void f__1FB5_1552_001C_9858()
{
	emu_decb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__1FB5_122D_0003_9CAF(); return;
}

/**
 * Decompiled function f__1FB5_156E_0006_F7CE()
 *
 * @name f__1FB5_156E_0006_F7CE
 * @implements 1FB5:156E:0006:F7CE ()
 *
 * Called From: 1FB5:122D:0003:9CAF
 */
void f__1FB5_156E_0006_F7CE()
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
 * Decompiled function f__1FB5_1574_000F_E31E()
 *
 * @name f__1FB5_1574_000F_E31E
 * @implements 1FB5:1574:000F:E31E ()
 *
 * Called From: 1FB5:0712:0012:6404
 */
void f__1FB5_1574_000F_E31E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1FB5_1583_0002_CC3A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x15B3; emu_last_cs = 0x1FB5; emu_last_ip = 0x1581; emu_last_length = 0x000F; emu_last_crc = 0xE31E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1581_0002_D83A()
 *
 * @name f__1FB5_1581_0002_D83A
 * @implements 1FB5:1581:0002:D83A ()
 *
 * Called From: 1FB5:15B1:000B:985F
 */
void f__1FB5_1581_0002_D83A()
{
	f__1FB5_15B3_0002_2597(); return;
}

/**
 * Decompiled function f__1FB5_1583_0002_CC3A()
 *
 * @name f__1FB5_1583_0002_CC3A
 * @implements 1FB5:1583:0002:CC3A ()
 *
 * Called From: 1FB5:157D:000F:E31E
 */
void f__1FB5_1583_0002_CC3A()
{
	f__1FB5_159D_000B_A3F4(); return;
}

/**
 * Decompiled function f__1FB5_159D_000B_A3F4()
 *
 * @name f__1FB5_159D_000B_A3F4
 * @implements 1FB5:159D:000B:A3F4 ()
 *
 * Called From: 1FB5:1583:0002:CC3A
 */
void f__1FB5_159D_000B_A3F4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x15A8); f__1FB5_15B5_0015_6A00();
	f__1FB5_15A8_000B_985F();
}

/**
 * Decompiled function f__1FB5_15A8_000B_985F()
 *
 * @name f__1FB5_15A8_000B_985F
 * @implements 1FB5:15A8:000B:985F ()
 *
 * Called From: 1FB5:15A8:000B:A3F4
 */
void f__1FB5_15A8_000B_985F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1585; emu_last_cs = 0x1FB5; emu_last_ip = 0x15AC; emu_last_length = 0x000B; emu_last_crc = 0x985F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__1FB5_1581_0002_D83A(); return;
}

/**
 * Decompiled function f__1FB5_15B3_0002_2597()
 *
 * @name f__1FB5_15B3_0002_2597
 * @implements 1FB5:15B3:0002:2597 ()
 *
 * Called From: 1FB5:1581:0002:D83A
 */
void f__1FB5_15B3_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_15B5_0015_6A00()
 *
 * @name f__1FB5_15B5_0015_6A00
 * @implements 1FB5:15B5:0015:6A00 ()
 *
 * Called From: 15C2:0112:0022:2546
 * Called From: 15C2:0112:0024:0D45
 * Called From: 1DB6:00F7:000E:212B
 * Called From: 1FB5:072F:000B:24D7
 * Called From: 1FB5:15A5:000B:A3F4
 * Called From: 1FB5:1659:0058:3B72
 * Called From: 256D:001B:001C:9F23
 * Called From: B4B5:0054:000D:0FE8
 * Called From: B4B8:1188:000B:03A1
 * Called From: B4B8:1B8B:000F:A141
 * Called From: B4B8:1B9A:000F:DC51
 * Called From: B4B8:1BD2:0018:10AD
 * Called From: B4B8:1E14:000C:86D4
 * Called From: B4F2:0008:000D:C9F0
 * Called From: B4F2:11A0:000D:4FB1
 * Called From: B4F2:12A0:000D:4FB1
 * Called From: B511:0472:000F:1E3D
 * Called From: B518:0572:000F:25FE
 * Called From: B518:05A0:0011:90D1
 * Called From: B518:0AC1:000D:0B16
 */
void f__1FB5_15B5_0015_6A00()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1FB5_15CA_0018_805C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x16CF; emu_last_cs = 0x1FB5; emu_last_ip = 0x15C7; emu_last_length = 0x0015; emu_last_crc = 0x6A00; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_15C5_0005_5C35()
 *
 * @name f__1FB5_15C5_0005_5C35
 * @implements 1FB5:15C5:0005:5C35 ()
 *
 * Called From: 1FB5:1669:000B:8E2C
 */
void f__1FB5_15C5_0005_5C35()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1FB5_16CF_0006_F7CE(); return;
}

/**
 * Decompiled function f__1FB5_15C7_0003_5DA1()
 *
 * @name f__1FB5_15C7_0003_5DA1
 * @implements 1FB5:15C7:0003:5DA1 ()
 *
 * Called From: 1FB5:15F7:0003:AF3A
 * Called From: 1FB5:165E:0005:7074
 */
void f__1FB5_15C7_0003_5DA1()
{
	f__1FB5_16CF_0006_F7CE(); return;
}

/**
 * Decompiled function f__1FB5_15CA_0018_805C()
 *
 * @name f__1FB5_15CA_0018_805C
 * @implements 1FB5:15CA:0018:805C ()
 *
 * Called From: 1FB5:15C3:0015:6A00
 */
void f__1FB5_15CA_0018_805C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6796), 0xFFFF);
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8001);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x15E2); f__1FB5_0121_001B_0DC1();
	f__1FB5_15E2_000F_2C44();
}

/**
 * Decompiled function f__1FB5_15E2_000F_2C44()
 *
 * @name f__1FB5_15E2_000F_2C44
 * @implements 1FB5:15E2:000F:2C44 ()
 *
 * Called From: 1FB5:15E2:0018:805C
 */
void f__1FB5_15E2_000F_2C44()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__1FB5_15F9_000B_61DA(); return; }
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x15F1); f__1FB5_0047_0012_2389();
	f__1FB5_15F1_0005_4ACB();
}

/**
 * Decompiled function f__1FB5_15F1_0005_4ACB()
 *
 * @name f__1FB5_15F1_0005_4ACB
 * @implements 1FB5:15F1:0005:4ACB ()
 *
 * Called From: 1FB5:15F1:000F:2C44
 */
void f__1FB5_15F1_0005_4ACB()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x15F6); f__1FB5_0005_000F_62CC();
	f__1FB5_15F6_0003_AF3A();
}

/**
 * Decompiled function f__1FB5_15F6_0003_AF3A()
 *
 * @name f__1FB5_15F6_0003_AF3A
 * @implements 1FB5:15F6:0003:AF3A ()
 *
 * Called From: 1FB5:15F6:0005:4ACB
 */
void f__1FB5_15F6_0003_AF3A()
{
	emu_incw(&emu_ax.x);
	f__1FB5_15C7_0003_5DA1(); return;
}

/**
 * Decompiled function f__1FB5_15F9_000B_61DA()
 *
 * @name f__1FB5_15F9_000B_61DA
 * @implements 1FB5:15F9:000B:61DA ()
 *
 * Called From: 1FB5:15EA:000F:2C44
 */
void f__1FB5_15F9_000B_61DA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1604); f__1FB5_1ABA_0031_8318();
	f__1FB5_1604_0058_3B72();
}

/**
 * Decompiled function f__1FB5_1604_0058_3B72()
 *
 * @name f__1FB5_1604_0058_3B72
 * @implements 1FB5:1604:0058:3B72 ()
 *
 * Called From: 1FB5:1604:000B:61DA
 */
void f__1FB5_1604_0058_3B72()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_1661_000B_8E2C(); return; }
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
	if (emu_flags.zf) { emu_ip = 0x1661; emu_last_cs = 0x1FB5; emu_last_ip = 0x1627; emu_last_length = 0x0058; emu_last_crc = 0x3B72; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x10);
	if (emu_flags.zf) { emu_ip = 0x1661; emu_last_cs = 0x1FB5; emu_last_ip = 0x163D; emu_last_length = 0x0058; emu_last_crc = 0x3B72; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x165C); f__1FB5_15B5_0015_6A00();
	f__1FB5_165C_0005_7074();
}

/**
 * Decompiled function f__1FB5_165C_0005_7074()
 *
 * @name f__1FB5_165C_0005_7074
 * @implements 1FB5:165C:0005:7074 ()
 *
 * Called From: 1FB5:165C:0058:3B72
 */
void f__1FB5_165C_0005_7074()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1FB5_15C7_0003_5DA1(); return;
}

/**
 * Decompiled function f__1FB5_1661_000B_8E2C()
 *
 * @name f__1FB5_1661_000B_8E2C
 * @implements 1FB5:1661:000B:8E2C ()
 *
 * Called From: 1FB5:160B:0058:3B72
 */
void f__1FB5_1661_000B_8E2C()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x661C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x166C; emu_last_cs = 0x1FB5; emu_last_ip = 0x1667; emu_last_length = 0x000B; emu_last_crc = 0x8E2C; emu_call(); return; } // Jump does not resolve
	f__1FB5_15C5_0005_5C35(); return;
}

/**
 * Decompiled function f__1FB5_16CF_0006_F7CE()
 *
 * @name f__1FB5_16CF_0006_F7CE
 * @implements 1FB5:16CF:0006:F7CE ()
 *
 * Called From: 1FB5:15C7:0003:5DA1
 * Called From: 1FB5:15C7:0005:5C35
 */
void f__1FB5_16CF_0006_F7CE()
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
 * Decompiled function f__1FB5_16D5_006A_679B()
 *
 * @name f__1FB5_16D5_006A_679B
 * @implements 1FB5:16D5:006A:679B ()
 *
 * Called From: 1FB5:04BA:000C:AC45
 * Called From: 253D:00A6:000B:9A42
 */
void f__1FB5_16D5_006A_679B()
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
	if (emu_flags.zf) { emu_ip = 0x173F; emu_last_cs = 0x1FB5; emu_last_ip = 0x16ED; emu_last_length = 0x006A; emu_last_crc = 0x679B; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.zf) { emu_ip = 0x173F; emu_last_cs = 0x1FB5; emu_last_ip = 0x1715; emu_last_length = 0x006A; emu_last_crc = 0x679B; emu_call(); return; } // Jump does not resolve
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
	f__1FB5_1757_0003_2E57(); return;
}

/**
 * Decompiled function f__1FB5_1757_0003_2E57()
 *
 * @name f__1FB5_1757_0003_2E57
 * @implements 1FB5:1757:0003:2E57 ()
 *
 * Called From: 1FB5:173D:006A:679B
 */
void f__1FB5_1757_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_17D7_0018_F3C7()
 *
 * @name f__1FB5_17D7_0018_F3C7
 * @implements 1FB5:17D7:0018:F3C7 ()
 *
 * Called From: B4B8:16F0:0022:3C6A
 */
void f__1FB5_17D7_0018_F3C7()
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
	f__1FB5_17EF_0004_893F(); return;
}

/**
 * Decompiled function f__1FB5_17EF_0004_893F()
 *
 * @name f__1FB5_17EF_0004_893F
 * @implements 1FB5:17EF:0004:893F ()
 *
 * Called From: 1FB5:17ED:0018:F3C7
 */
void f__1FB5_17EF_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1FB5_17FE_0011_2DA9()
 *
 * @name f__1FB5_17FE_0011_2DA9
 * @implements 1FB5:17FE:0011:2DA9 ()
 *
 * Called From: B518:0AD1:0010:9A25
 */
void f__1FB5_17FE_0011_2DA9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1FB5_180F_000F_774A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1898; emu_last_cs = 0x1FB5; emu_last_ip = 0x180C; emu_last_length = 0x0011; emu_last_crc = 0x2DA9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_180F_000F_774A()
 *
 * @name f__1FB5_180F_000F_774A
 * @implements 1FB5:180F:000F:774A ()
 *
 * Called From: 1FB5:1808:0011:2DA9
 */
void f__1FB5_180F_000F_774A()
{
	emu_incb(&emu_get_memory8(emu_ds, 0x00, -0x6794));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x181E); f__1FB5_1ABA_0031_8318();
	f__1FB5_181E_0040_701B();
}

/**
 * Decompiled function f__1FB5_181E_0040_701B()
 *
 * @name f__1FB5_181E_0040_701B
 * @implements 1FB5:181E:0040:701B ()
 *
 * Called From: 1FB5:181E:000F:774A
 */
void f__1FB5_181E_0040_701B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1FB5_187C_000A_608D(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	if (emu_flags.zf) { emu_ip = 0x187C; emu_last_cs = 0x1FB5; emu_last_ip = 0x183F; emu_last_length = 0x0040; emu_last_crc = 0x701B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x13);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E9C);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs); emu_push(0x185E); emu_cs = 0x23E1; emu_ip = 0x1A20; emu_last_cs = 0x1FB5; emu_last_ip = 0x1859; emu_last_length = 0x0040; emu_last_crc = 0x701B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_187C_000A_608D()
 *
 * @name f__1FB5_187C_000A_608D
 * @implements 1FB5:187C:000A:608D ()
 *
 * Called From: 1FB5:1825:0040:701B
 */
void f__1FB5_187C_000A_608D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1886); f__1FB5_006A_0015_A08C();
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_18D3_000E_76AC()
 *
 * @name f__1FB5_18D3_000E_76AC
 * @implements 1FB5:18D3:000E:76AC ()
 *
 * Called From: 1DB6:01B5:0005:7870
 */
void f__1FB5_18D3_000E_76AC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	f__1FB5_18F4_000F_8BA9(); return;
}

/**
 * Decompiled function f__1FB5_18E1_0022_A85B()
 *
 * @name f__1FB5_18E1_0022_A85B
 * @implements 1FB5:18E1:0022:A85B ()
 *
 * Called From: 1FB5:18F7:000F:8BA9
 * Called From: 1FB5:18F7:0022:A85B
 */
void f__1FB5_18E1_0022_A85B()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x1);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_18E1_0022_A85B(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (!emu_flags.zf) { f__1FB5_1903_000D_31E1(); return; }
	emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x1900; emu_last_length = 0x0022; emu_last_crc = 0xA85B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_18F4_000F_8BA9()
 *
 * @name f__1FB5_18F4_000F_8BA9
 * @implements 1FB5:18F4:000F:8BA9 ()
 *
 * Called From: 1FB5:18DF:000E:76AC
 */
void f__1FB5_18F4_000F_8BA9()
{
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_18E1_0022_A85B(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x671A), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1903; emu_last_cs = 0x1FB5; emu_last_ip = 0x18FE; emu_last_length = 0x000F; emu_last_crc = 0x8BA9; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x1900; emu_last_length = 0x000F; emu_last_crc = 0x8BA9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1903_000D_31E1()
 *
 * @name f__1FB5_1903_000D_31E1
 * @implements 1FB5:1903:000D:31E1 ()
 *
 * Called From: 1FB5:18FE:0022:A85B
 */
void f__1FB5_1903_000D_31E1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2E9C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__1FB5_1993_001B_129C(); return;
}

/**
 * Decompiled function f__1FB5_1910_0013_8016()
 *
 * @name f__1FB5_1910_0013_8016
 * @implements 1FB5:1910:0013:8016 ()
 *
 * Called From: 1FB5:19AB:001B:129C
 * Called From: 1FB5:19AB:001F:F4B2
 */
void f__1FB5_1910_0013_8016()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x12), 0x2);
	if (emu_flags.zf) { f__1FB5_198F_001F_F4B2(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1923); emu_cs = 0x2649; emu_ip = 0x1BDC; emu_last_cs = 0x1FB5; emu_last_ip = 0x191E; emu_last_length = 0x0013; emu_last_crc = 0x8016; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_198F_001F_F4B2()
 *
 * @name f__1FB5_198F_001F_F4B2
 * @implements 1FB5:198F:001F:F4B2 ()
 *
 * Called From: 1FB5:1918:0013:8016
 */
void f__1FB5_198F_001F_F4B2()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x13);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { f__1FB5_19AE_0006_F7CE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x19A9; emu_last_length = 0x001F; emu_last_crc = 0xF4B2; emu_call(); return; } // Jump does not resolve
	f__1FB5_1910_0013_8016(); return;
}

/**
 * Decompiled function f__1FB5_1993_001B_129C()
 *
 * @name f__1FB5_1993_001B_129C
 * @implements 1FB5:1993:001B:129C ()
 *
 * Called From: 1FB5:190D:000D:31E1
 */
void f__1FB5_1993_001B_129C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x199D; emu_last_length = 0x001B; emu_last_crc = 0x129C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19AE; emu_last_cs = 0x1FB5; emu_last_ip = 0x19A9; emu_last_length = 0x001B; emu_last_crc = 0x129C; emu_call(); return; } // Jump does not resolve
	f__1FB5_1910_0013_8016(); return;
}

/**
 * Decompiled function f__1FB5_19AE_0006_F7CE()
 *
 * @name f__1FB5_19AE_0006_F7CE
 * @implements 1FB5:19AE:0006:F7CE ()
 *
 * Called From: 1FB5:199D:001F:F4B2
 */
void f__1FB5_19AE_0006_F7CE()
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
 * Decompiled function f__1FB5_1A67_0005_8AB7()
 *
 * @name f__1FB5_1A67_0005_8AB7
 * @implements 1FB5:1A67:0005:8AB7 ()
 *
 * Called From: B500:0033:000C:D965
 */
void f__1FB5_1A67_0005_8AB7()
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
 * Decompiled function f__1FB5_1A6C_0020_9634()
 *
 * @name f__1FB5_1A6C_0020_9634
 * @implements 1FB5:1A6C:0020:9634 ()
 *
 * Called From: 1FB5:09DC:0018:922D
 * Called From: 1FB5:0B04:001B:A5E4
 * Called From: 1FB5:0EB4:001B:37D1
 * Called From: 1FB5:121F:001B:2A6C
 */
void f__1FB5_1A6C_0020_9634()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1A80; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A79; emu_last_length = 0x0020; emu_last_crc = 0x9634; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x14);
	if ((emu_flags.sf != emu_flags.of)) { f__1FB5_1A8F_001F_8D60(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1A8C); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x1A89; emu_last_length = 0x0020; emu_last_crc = 0x9634; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_1A8F_001F_8D60()
 *
 * @name f__1FB5_1A8F_001F_8D60
 * @implements 1FB5:1A8F:001F:8D60 ()
 *
 * Called From: 1FB5:1A7E:0020:9634
 */
void f__1FB5_1A8F_001F_8D60()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x33E0);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__1FB5_1AB1_0005_D5FA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1AAE); emu_ip = 0x1B8D; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AAB; emu_last_length = 0x001F; emu_last_crc = 0x8D60; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1FB5_1AB1_0005_D5FA()
 *
 * @name f__1FB5_1AB1_0005_D5FA
 * @implements 1FB5:1AB1:0005:D5FA ()
 *
 * Called From: 1FB5:1AA0:001F:8D60
 */
void f__1FB5_1AB1_0005_D5FA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1FB5_1AB6_0004_DE52(); return;
}

/**
 * Decompiled function f__1FB5_1AB6_0004_DE52()
 *
 * @name f__1FB5_1AB6_0004_DE52
 * @implements 1FB5:1AB6:0004:DE52 ()
 *
 * Called From: 1FB5:1AB4:0005:D5FA
 */
void f__1FB5_1AB6_0004_DE52()
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
 * Decompiled function f__1FB5_1ABA_0031_8318()
 *
 * @name f__1FB5_1ABA_0031_8318
 * @implements 1FB5:1ABA:0031:8318 ()
 *
 * Called From: 1FB5:0244:000B:2FEB
 * Called From: 1FB5:034F:001E:6179
 * Called From: 1FB5:1601:000B:61DA
 * Called From: 1FB5:181B:000F:774A
 */
void f__1FB5_1ABA_0031_8318()
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
	if (!emu_flags.zf) { f__1FB5_1AEB_000D_1FF1(); return; }
	emu_ip = 0x1B17; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AE9; emu_last_length = 0x0031; emu_last_crc = 0x8318; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1AC3_0028_DFE8()
 *
 * @name f__1FB5_1AC3_0028_DFE8
 * @implements 1FB5:1AC3:0028:DFE8 ()
 *
 * Called From: 1FB5:1B15:0003:9EFA
 */
void f__1FB5_1AC3_0028_DFE8()
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
	if (!emu_flags.zf) { f__1FB5_1AEB_000D_1FF1(); return; }
	f__1FB5_1B17_0005_5115(); return;
}

/**
 * Decompiled function f__1FB5_1AEB_000D_1FF1()
 *
 * @name f__1FB5_1AEB_000D_1FF1
 * @implements 1FB5:1AEB:000D:1FF1 ()
 *
 * Called From: 1FB5:1AE7:0031:8318
 * Called From: 1FB5:1AE7:0028:DFE8
 */
void f__1FB5_1AEB_000D_1FF1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_1AF8_0011_AD2D(); return; }
	emu_ip = 0x1B17; emu_last_cs = 0x1FB5; emu_last_ip = 0x1AF6; emu_last_length = 0x000D; emu_last_crc = 0x1FF1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1FB5_1AF8_0011_AD2D()
 *
 * @name f__1FB5_1AF8_0011_AD2D
 * @implements 1FB5:1AF8:0011:AD2D ()
 *
 * Called From: 1FB5:1AF4:000D:1FF1
 */
void f__1FB5_1AF8_0011_AD2D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__1FB5_1B09_000B_E347();
}

/**
 * Decompiled function f__1FB5_1B09_000B_E347()
 *
 * @name f__1FB5_1B09_000B_E347
 * @implements 1FB5:1B09:000B:E347 ()
 *
 * Called From: 1FB5:1B09:0011:AD2D
 */
void f__1FB5_1B09_000B_E347()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1FB5_1B14_0003_9EFA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1FB5_1B1C_0005_8BCF(); return;
}

/**
 * Decompiled function f__1FB5_1B12_0002_C43A()
 *
 * @name f__1FB5_1B12_0002_C43A
 * @implements 1FB5:1B12:0002:C43A ()
 *
 * Called From: 1FB5:1B1A:0005:5115
 */
void f__1FB5_1B12_0002_C43A()
{
	f__1FB5_1B1C_0005_8BCF(); return;
}

/**
 * Decompiled function f__1FB5_1B14_0003_9EFA()
 *
 * @name f__1FB5_1B14_0003_9EFA
 * @implements 1FB5:1B14:0003:9EFA ()
 *
 * Called From: 1FB5:1B0E:000B:E347
 */
void f__1FB5_1B14_0003_9EFA()
{
	emu_incw(&emu_si);
	f__1FB5_1AC3_0028_DFE8(); return;
}

/**
 * Decompiled function f__1FB5_1B17_0005_5115()
 *
 * @name f__1FB5_1B17_0005_5115
 * @implements 1FB5:1B17:0005:5115 ()
 *
 * Called From: 1FB5:1AE9:0028:DFE8
 */
void f__1FB5_1B17_0005_5115()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__1FB5_1B12_0002_C43A(); return;
}

/**
 * Decompiled function f__1FB5_1B1C_0005_8BCF()
 *
 * @name f__1FB5_1B1C_0005_8BCF
 * @implements 1FB5:1B1C:0005:8BCF ()
 *
 * Called From: 1FB5:1B12:000B:E347
 * Called From: 1FB5:1B12:0002:C43A
 */
void f__1FB5_1B1C_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
