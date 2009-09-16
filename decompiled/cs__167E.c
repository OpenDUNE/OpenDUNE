/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__167E_0005_0013_D62A()
 *
 * @name f__167E_0005_0013_D62A
 * @implements 167E:0005:0013:D62A ()
 *
 * Called From: 0C10:0017:0014:1007
 * Called From: 0C10:0022:000B:1287
 * Called From: 0EDB:0212:0020:E7C9
 * Called From: 0EDB:0263:001D:A7F9
 * Called From: 0EDB:03D1:001D:A7F9
 * Called From: 0EDB:0524:001D:A7F9
 * Called From: 176C:147C:0006:0704
 * Called From: 176C:19EB:0020:160C
 * Called From: 176C:1ABE:0024:8118
 * Called From: 176C:1B62:0022:FDCD
 * Called From: 176C:1C87:001D:A7F9
 * Called From: 176C:1D7E:000D:27DF
 * Called From: 176C:1F83:0008:E9C4
 * Called From: 1A34:1A72:0011:4E2C
 * Called From: 1A34:1B7C:0019:2EA6
 * Called From: 1A34:2537:000F:5ECB
 */
void f__167E_0005_0013_D62A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__167E_0018_0005_0CCC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_0082_0006_137A(); return;
}

/**
 * Decompiled function f__167E_0014_0004_0648()
 *
 * @name f__167E_0014_0004_0648
 * @implements 167E:0014:0004:0648 ()
 *
 * Called From: 167E:0060:0011:386F
 */
void f__167E_0014_0004_0648()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_0082_0006_137A(); return;
}

/**
 * Decompiled function f__167E_0016_0002_0378()
 *
 * @name f__167E_0016_0002_0378
 * @implements 167E:0016:0002:0378 ()
 *
 * Called From: 167E:0080:0005:1594
 */
void f__167E_0016_0002_0378()
{
	f__167E_0082_0006_137A(); return;
}

/**
 * Decompiled function f__167E_0018_0005_0CCC()
 *
 * @name f__167E_0018_0005_0CCC
 * @implements 167E:0018:0005:0CCC ()
 *
 * Called From: 167E:0012:0013:D62A
 */
void f__167E_0018_0005_0CCC()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x001D); f__167E_0088_001A_4DC5();
	f__167E_001D_000A_68A2();
}

/**
 * Decompiled function f__167E_001D_000A_68A2()
 *
 * @name f__167E_001D_000A_68A2
 * @implements 167E:001D:000A:68A2 ()
 *
 * Called From: 167E:001D:0005:0CCC
 */
void f__167E_001D_000A_68A2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0027); f__167E_00B7_0034_8ECB();
	f__167E_0027_0013_F00C();
}

/**
 * Decompiled function f__167E_0027_0013_F00C()
 *
 * @name f__167E_0027_0013_F00C
 * @implements 167E:0027:0013:F00C ()
 *
 * Called From: 167E:0027:000A:68A2
 */
void f__167E_0027_0013_F00C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_003A_0006_0AF6(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0064_0006_0EA0(); return; }
	f__167E_007B_0002_03AC(); return;
}

/**
 * Decompiled function f__167E_003A_0006_0AF6()
 *
 * @name f__167E_003A_0006_0AF6
 * @implements 167E:003A:0006:0AF6 ()
 *
 * Called From: 167E:0031:0013:F00C
 */
void f__167E_003A_0006_0AF6()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0040); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__167E_0040_0011_C4D5();
}

/**
 * Decompiled function f__167E_0040_0011_C4D5()
 *
 * @name f__167E_0040_0011_C4D5
 * @implements 167E:0040:0011:C4D5 ()
 *
 * Called From: 167E:0040:0006:0AF6
 */
void f__167E_0040_0011_C4D5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__167E_0051_0011_386F(); return; }
	emu_ip = 0x0014; emu_last_cs = 0x167E; emu_last_ip = 0x004F; emu_last_length = 0x0011; emu_last_crc = 0xC4D5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__167E_0051_0011_386F()
 *
 * @name f__167E_0051_0011_386F
 * @implements 167E:0051:0011:386F ()
 *
 * Called From: 167E:004D:0011:C4D5
 */
void f__167E_0051_0011_386F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x3);
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0062_0002_039E(); return; }
	f__167E_0014_0004_0648(); return;
}

/**
 * Decompiled function f__167E_0062_0002_039E()
 *
 * @name f__167E_0062_0002_039E
 * @implements 167E:0062:0002:039E ()
 *
 * Called From: 167E:005E:0011:386F
 */
void f__167E_0062_0002_039E()
{
	f__167E_007D_0005_1594(); return;
}

/**
 * Decompiled function f__167E_0064_0006_0EA0()
 *
 * @name f__167E_0064_0006_0EA0
 * @implements 167E:0064:0006:0EA0 ()
 *
 * Called From: 167E:0036:0013:F00C
 */
void f__167E_0064_0006_0EA0()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__167E_006A_000F_8680();
}

/**
 * Decompiled function f__167E_006A_000F_8680()
 *
 * @name f__167E_006A_000F_8680
 * @implements 167E:006A:000F:8680 ()
 *
 * Called From: 167E:006A:0006:0EA0
 */
void f__167E_006A_000F_8680()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__167E_0079_0002_03A8(); return; }
	emu_ip = 0x0014; emu_last_cs = 0x167E; emu_last_ip = 0x0077; emu_last_length = 0x000F; emu_last_crc = 0x8680; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__167E_0079_0002_03A8()
 *
 * @name f__167E_0079_0002_03A8
 * @implements 167E:0079:0002:03A8 ()
 *
 * Called From: 167E:0075:000F:8680
 */
void f__167E_0079_0002_03A8()
{
	f__167E_007D_0005_1594(); return;
}

/**
 * Decompiled function f__167E_007B_0002_03AC()
 *
 * @name f__167E_007B_0002_03AC
 * @implements 167E:007B:0002:03AC ()
 *
 * Called From: 167E:0038:0013:F00C
 */
void f__167E_007B_0002_03AC()
{
	f__167E_007D_0005_1594(); return;
}

/**
 * Decompiled function f__167E_007D_0005_1594()
 *
 * @name f__167E_007D_0005_1594
 * @implements 167E:007D:0005:1594 ()
 *
 * Called From: 167E:0062:0002:039E
 * Called From: 167E:0079:0002:03A8
 * Called From: 167E:007B:0002:03AC
 */
void f__167E_007D_0005_1594()
{
	emu_movw(&emu_ax.x, 0x1);
	f__167E_0016_0002_0378(); return;
}

/**
 * Decompiled function f__167E_0082_0006_137A()
 *
 * @name f__167E_0082_0006_137A
 * @implements 167E:0082:0006:137A ()
 *
 * Called From: 167E:0016:0013:D62A
 * Called From: 167E:0016:0002:0378
 * Called From: 167E:0016:0004:0648
 */
void f__167E_0082_0006_137A()
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
 * Decompiled function f__167E_0088_001A_4DC5()
 *
 * @name f__167E_0088_001A_4DC5
 * @implements 167E:0088:001A:4DC5 ()
 *
 * Called From: 0EDB:03DC:000B:1B17
 * Called From: 0EDB:052F:000B:3017
 * Called From: 167E:001A:0005:0CCC
 * Called From: 167E:0174:0008:2C7A
 * Called From: 167E:01D0:0008:2EE8
 * Called From: 167E:028D:000C:AAF8
 * Called From: 167E:02B7:000C:AA20
 * Called From: 167E:02E1:000C:AB88
 * Called From: 176C:03A2:000D:2F8F
 * Called From: 176C:089E:000D:2F0F
 * Called From: 176C:1556:0006:0FD4
 * Called From: 176C:161F:0006:0FD4
 * Called From: 1A34:042C:0019:5535
 * Called From: 1A34:1A94:0006:0F94
 * Called From: 1A34:1B96:0006:0F94
 */
void f__167E_0088_001A_4DC5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xC000);
	emu_cmpw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { f__167E_00A2_0005_1490(); return; }
	emu_cmpw(&emu_ax.x, 0x8000);
	if (emu_flags.zf) { f__167E_00A7_0005_156E(); return; }
	emu_cmpw(&emu_ax.x, 0xC000);
	if (emu_flags.zf) { f__167E_00AC_0005_1554(); return; }
	f__167E_00B1_0004_077C(); return;
}

/**
 * Decompiled function f__167E_00A2_0005_1490()
 *
 * @name f__167E_00A2_0005_1490
 * @implements 167E:00A2:0005:1490 ()
 *
 * Called From: 167E:0094:001A:4DC5
 */
void f__167E_00A2_0005_1490()
{
	emu_movw(&emu_ax.x, 0x2);
	f__167E_00B5_0002_00E2(); return;
}

/**
 * Decompiled function f__167E_00A5_0002_03B0()
 *
 * @name f__167E_00A5_0002_03B0
 * @implements 167E:00A5:0002:03B0 ()
 *
 * Called From: 167E:00AA:0005:156E
 * Called From: 167E:00AF:0005:1554
 * Called From: 167E:00B3:0004:077C
 */
void f__167E_00A5_0002_03B0()
{
	f__167E_00B5_0002_00E2(); return;
}

/**
 * Decompiled function f__167E_00A7_0005_156E()
 *
 * @name f__167E_00A7_0005_156E
 * @implements 167E:00A7:0005:156E ()
 *
 * Called From: 167E:0099:001A:4DC5
 */
void f__167E_00A7_0005_156E()
{
	emu_movw(&emu_ax.x, 0x3);
	f__167E_00A5_0002_03B0(); return;
}

/**
 * Decompiled function f__167E_00AC_0005_1554()
 *
 * @name f__167E_00AC_0005_1554
 * @implements 167E:00AC:0005:1554 ()
 *
 * Called From: 167E:009E:001A:4DC5
 */
void f__167E_00AC_0005_1554()
{
	emu_movw(&emu_ax.x, 0x1);
	f__167E_00A5_0002_03B0(); return;
}

/**
 * Decompiled function f__167E_00B1_0004_077C()
 *
 * @name f__167E_00B1_0004_077C
 * @implements 167E:00B1:0004:077C ()
 *
 * Called From: 167E:00A0:001A:4DC5
 */
void f__167E_00B1_0004_077C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_00A5_0002_03B0(); return;
}

/**
 * Decompiled function f__167E_00B5_0002_00E2()
 *
 * @name f__167E_00B5_0002_00E2
 * @implements 167E:00B5:0002:00E2 ()
 *
 * Called From: 167E:00A5:0002:03B0
 * Called From: 167E:00A5:0005:1490
 */
void f__167E_00B5_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_00B7_0034_8ECB()
 *
 * @name f__167E_00B7_0034_8ECB
 * @implements 167E:00B7:0034:8ECB ()
 *
 * Called From: 167E:0024:000A:68A2
 * Called From: 167E:016C:000D:3E1A
 * Called From: 167E:01C8:0010:ECB8
 * Called From: 167E:0298:000B:0DAE
 * Called From: 167E:02C2:000B:0C10
 * Called From: 167E:02F3:0005:0F9E
 * Called From: 167E:0302:0005:0E52
 * Called From: 1A34:1AA0:000C:28E0
 * Called From: 1A34:1BA2:000C:30E0
 */
void f__167E_00B7_0034_8ECB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0xC000);
	emu_cmpw(&emu_ax.x, 0xC000);
	if (!emu_flags.zf) { f__167E_00EB_0004_0CE2(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x3F00);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x7E);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax.x, 0x3FFF);
	f__167E_00EF_0004_0F7A(); return;
}

/**
 * Decompiled function f__167E_00E6_0005_090C()
 *
 * @name f__167E_00E6_0005_090C
 * @implements 167E:00E6:0005:090C ()
 *
 * Called From: 167E:00ED:0004:0CE2
 */
void f__167E_00E6_0005_090C()
{
	emu_andw(&emu_ax.x, 0x3FFF);
	f__167E_00EF_0004_0F7A(); return;
}

/**
 * Decompiled function f__167E_00EB_0004_0CE2()
 *
 * @name f__167E_00EB_0004_0CE2
 * @implements 167E:00EB:0004:0CE2 ()
 *
 * Called From: 167E:00C8:0034:8ECB
 */
void f__167E_00EB_0004_0CE2()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	f__167E_00E6_0005_090C(); return;
}

/**
 * Decompiled function f__167E_00EF_0004_0F7A()
 *
 * @name f__167E_00EF_0004_0F7A
 * @implements 167E:00EF:0004:0F7A ()
 *
 * Called From: 167E:00E9:0034:8ECB
 * Called From: 167E:00E9:0005:090C
 */
void f__167E_00EF_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_00F3_001E_D821()
 *
 * @name f__167E_00F3_001E_D821
 * @implements 167E:00F3:001E:D821 ()
 *
 * Called From: 0972:0A93:0017:BB46
 * Called From: 0AEC:03D7:000C:CCAF
 * Called From: 0AEC:03D7:0005:1DA4
 * Called From: 0AEC:057A:0022:B058
 * Called From: 0AEC:05B9:0010:9958
 * Called From: 0EDB:049E:0013:F5CA
 * Called From: 176C:14BB:0008:7C24
 * Called From: 176C:182D:0021:C015
 * Called From: 176C:260C:002D:6C71
 * Called From: 176C:2A8B:0012:3E39
 * Called From: 176C:2C0D:001F:41C3
 * Called From: 1A34:078A:000D:D27A
 * Called From: 1A34:137B:0008:7C24
 * Called From: 1A34:1AC7:001E:87B9
 * Called From: 1A34:1B04:000F:9DBA
 * Called From: 1A34:1C7B:0033:BCB7
 * Called From: 1A34:1C7B:000F:21BB
 * Called From: 1A34:1C8D:0012:9C3C
 * Called From: 1A34:3069:003F:BC35
 * Called From: 1A34:307D:0014:C0BC
 * Called From: 1A34:30D9:0024:3238
 * Called From: 1A34:3451:0027:2893
 * Called From: 1A34:3478:0008:7C24
 * Called From: 1A34:3611:000F:21BB
 * Called From: 1A34:3611:0008:49E4
 * Called From: 1A34:366A:000F:9DBA
 */
void f__167E_00F3_001E_D821()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__167E_0111_0025_B645(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_0136_0006_0AB6(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0150_0007_4896(); return; }
	emu_ip = 0x0157; emu_last_cs = 0x167E; emu_last_ip = 0x010F; emu_last_length = 0x001E; emu_last_crc = 0xD821; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__167E_0111_0025_B645()
 *
 * @name f__167E_0111_0025_B645
 * @implements 167E:0111:0025:B645 ()
 *
 * Called From: 167E:0103:001E:D821
 */
void f__167E_0111_0025_B645()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x3F);
	emu_shlw(&emu_ax.x, 0x1);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0xFC0);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, 0xC000);
	f__167E_015D_0005_04BA(); return;
}

/**
 * Decompiled function f__167E_0134_0002_03E2()
 *
 * @name f__167E_0134_0002_03E2
 * @implements 167E:0134:0002:03E2 ()
 *
 * Called From: 167E:0155:0007:4896
 * Called From: 167E:0155:0004:0496
 */
void f__167E_0134_0002_03E2()
{
	f__167E_015D_0005_04BA(); return;
}

/**
 * Decompiled function f__167E_0136_0006_0AB6()
 *
 * @name f__167E_0136_0006_0AB6
 * @implements 167E:0136:0006:0AB6 ()
 *
 * Called From: 167E:0108:001E:D821
 */
void f__167E_0136_0006_0AB6()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__167E_013C_0012_3132();
}

/**
 * Decompiled function f__167E_013C_0012_3132()
 *
 * @name f__167E_013C_0012_3132
 * @implements 167E:013C:0012:3132 ()
 *
 * Called From: 167E:013C:0006:0AB6
 */
void f__167E_013C_0012_3132()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x014E; emu_last_cs = 0x167E; emu_last_ip = 0x0147; emu_last_length = 0x0012; emu_last_crc = 0x3132; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4000);
	f__167E_0153_0004_0496(); return;
}

/**
 * Decompiled function f__167E_0150_0007_4896()
 *
 * @name f__167E_0150_0007_4896
 * @implements 167E:0150:0007:4896 ()
 *
 * Called From: 167E:010D:001E:D821
 */
void f__167E_0150_0007_4896()
{
	emu_movw(&emu_ax.x, 0x8000);
	emu_orw(&emu_ax.x, emu_si);
	f__167E_0134_0002_03E2(); return;
}

/**
 * Decompiled function f__167E_0153_0004_0496()
 *
 * @name f__167E_0153_0004_0496
 * @implements 167E:0153:0004:0496 ()
 *
 * Called From: 167E:014C:0012:3132
 */
void f__167E_0153_0004_0496()
{
	emu_orw(&emu_ax.x, emu_si);
	f__167E_0134_0002_03E2(); return;
}

/**
 * Decompiled function f__167E_015D_0005_04BA()
 *
 * @name f__167E_015D_0005_04BA
 * @implements 167E:015D:0005:04BA ()
 *
 * Called From: 167E:0134:0025:B645
 * Called From: 167E:0134:0002:03E2
 */
void f__167E_015D_0005_04BA()
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
 * Decompiled function f__167E_0162_000D_3E1A()
 *
 * @name f__167E_0162_000D_3E1A
 * @implements 167E:0162:000D:3E1A ()
 *
 * Called From: 06F7:02C6:000F:3901
 * Called From: 176C:1562:000C:19F8
 * Called From: 176C:1FA9:000D:F3B6
 */
void f__167E_0162_000D_3E1A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x016F); f__167E_00B7_0034_8ECB();
	f__167E_016F_0008_2C7A();
}

/**
 * Decompiled function f__167E_016F_0008_2C7A()
 *
 * @name f__167E_016F_0008_2C7A
 * @implements 167E:016F:0008:2C7A ()
 *
 * Called From: 167E:016F:000D:3E1A
 */
void f__167E_016F_0008_2C7A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0177); f__167E_0088_001A_4DC5();
	f__167E_0177_0012_B88C();
}

/**
 * Decompiled function f__167E_0177_0012_B88C()
 *
 * @name f__167E_0177_0012_B88C
 * @implements 167E:0177:0012:B88C ()
 *
 * Called From: 167E:0177:0008:2C7A
 */
void f__167E_0177_0012_B88C()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__167E_0189_0004_0D78(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_018D_0006_0AB6(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0195_0006_0EE0(); return; }
	emu_ip = 0x01B1; emu_last_cs = 0x167E; emu_last_ip = 0x0187; emu_last_length = 0x0012; emu_last_crc = 0xB88C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__167E_0189_0004_0D78()
 *
 * @name f__167E_0189_0004_0D78
 * @implements 167E:0189:0004:0D78 ()
 *
 * Called From: 167E:017B:0012:B88C
 */
void f__167E_0189_0004_0D78()
{
	emu_movw(&emu_ax.x, emu_si);
	f__167E_01B7_0004_07E2(); return;
}

/**
 * Decompiled function f__167E_018B_0002_03F8()
 *
 * @name f__167E_018B_0002_03F8
 * @implements 167E:018B:0002:03F8 ()
 *
 * Called From: 167E:01AF:0004:0540
 */
void f__167E_018B_0002_03F8()
{
	f__167E_01B7_0004_07E2(); return;
}

/**
 * Decompiled function f__167E_018D_0006_0AB6()
 *
 * @name f__167E_018D_0006_0AB6
 * @implements 167E:018D:0006:0AB6 ()
 *
 * Called From: 167E:0180:0012:B88C
 */
void f__167E_018D_0006_0AB6()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0193); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__167E_0193_0002_03A0();
}

/**
 * Decompiled function f__167E_0193_0002_03A0()
 *
 * @name f__167E_0193_0002_03A0
 * @implements 167E:0193:0002:03A0 ()
 *
 * Called From: 167E:0193:0006:0AB6
 */
void f__167E_0193_0002_03A0()
{
	f__167E_019B_0012_A917(); return;
}

/**
 * Decompiled function f__167E_0195_0006_0EE0()
 *
 * @name f__167E_0195_0006_0EE0
 * @implements 167E:0195:0006:0EE0 ()
 *
 * Called From: 167E:0185:0012:B88C
 */
void f__167E_0195_0006_0EE0()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019B); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__167E_019B_0012_A917();
}

/**
 * Decompiled function f__167E_019B_0012_A917()
 *
 * @name f__167E_019B_0012_A917
 * @implements 167E:019B:0012:A917 ()
 *
 * Called From: 167E:0193:0002:03A0
 * Called From: 167E:019B:0006:0EE0
 */
void f__167E_019B_0012_A917()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x01AD); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__167E_01AD_0004_0540();
}

/**
 * Decompiled function f__167E_01AD_0004_0540()
 *
 * @name f__167E_01AD_0004_0540
 * @implements 167E:01AD:0004:0540 ()
 *
 * Called From: 167E:01AD:0012:A917
 */
void f__167E_01AD_0004_0540()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__167E_018B_0002_03F8(); return;
}

/**
 * Decompiled function f__167E_01B7_0004_07E2()
 *
 * @name f__167E_01B7_0004_07E2
 * @implements 167E:01B7:0004:07E2 ()
 *
 * Called From: 167E:018B:0002:03F8
 * Called From: 167E:018B:0004:0D78
 */
void f__167E_01B7_0004_07E2()
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
 * Decompiled function f__167E_01BB_0010_ECB8()
 *
 * @name f__167E_01BB_0010_ECB8
 * @implements 167E:01BB:0010:ECB8 ()
 *
 * Called From: 0C3A:22FD:000C:2AE2
 * Called From: 0EDB:021D:000B:0E2F
 * Called From: 167E:03AF:0005:0C98
 * Called From: 176C:10CE:001A:49A2
 * Called From: 176C:1596:0006:0CEC
 * Called From: 176C:19FA:0008:E2AC
 * Called From: 176C:1B7C:0006:0CAC
 * Called From: 176C:1CAC:0006:0CAC
 * Called From: 176C:1CAC:0025:1418
 * Called From: 1A34:1392:000C:2AE2
 * Called From: 1A34:2528:002F:1117
 */
void f__167E_01BB_0010_ECB8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x01CB); f__167E_00B7_0034_8ECB();
	f__167E_01CB_0008_2EE8();
}

/**
 * Decompiled function f__167E_01CB_0008_2EE8()
 *
 * @name f__167E_01CB_0008_2EE8
 * @implements 167E:01CB:0008:2EE8 ()
 *
 * Called From: 167E:01CB:0010:ECB8
 */
void f__167E_01CB_0008_2EE8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x01D3); f__167E_0088_001A_4DC5();
	f__167E_01D3_0013_4529();
}

/**
 * Decompiled function f__167E_01D3_0013_4529()
 *
 * @name f__167E_01D3_0013_4529
 * @implements 167E:01D3:0013:4529 ()
 *
 * Called From: 167E:01D3:0008:2EE8
 */
void f__167E_01D3_0013_4529()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__167E_01E6_0026_D7D2(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_0210_0006_0AB6(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0225_0006_0EE0(); return; }
	emu_ip = 0x0276; emu_last_cs = 0x167E; emu_last_ip = 0x01E3; emu_last_length = 0x0013; emu_last_crc = 0x4529; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__167E_01E6_0026_D7D2()
 *
 * @name f__167E_01E6_0026_D7D2
 * @implements 167E:01E6:0026:D7D2 ()
 *
 * Called From: 167E:01D7:0013:4529
 */
void f__167E_01E6_0026_D7D2()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_andw(&emu_ax.x, 0x3FFF);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movb(&emu_cx.l, 0x7);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x3F80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x020C); emu_cs = 0x0F3F; f__0F3F_002C_000B_E123();
	f__167E_020C_0004_0428();
}

/**
 * Decompiled function f__167E_020C_0004_0428()
 *
 * @name f__167E_020C_0004_0428
 * @implements 167E:020C:0004:0428 ()
 *
 * Called From: 167E:020C:0026:D7D2
 */
void f__167E_020C_0004_0428()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__167E_027E_0006_137A(); return;
}

/**
 * Decompiled function f__167E_020E_0002_0370()
 *
 * @name f__167E_020E_0002_0370
 * @implements 167E:020E:0002:0370 ()
 *
 * Called From: 167E:0223:000F:71A4
 * Called From: 167E:0274:004B:2BE3
 */
void f__167E_020E_0002_0370()
{
	f__167E_027E_0006_137A(); return;
}

/**
 * Decompiled function f__167E_0210_0006_0AB6()
 *
 * @name f__167E_0210_0006_0AB6
 * @implements 167E:0210:0006:0AB6 ()
 *
 * Called From: 167E:01DC:0013:4529
 */
void f__167E_0210_0006_0AB6()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__167E_0216_000F_71A4();
}

/**
 * Decompiled function f__167E_0216_000F_71A4()
 *
 * @name f__167E_0216_000F_71A4
 * @implements 167E:0216:000F:71A4 ()
 *
 * Called From: 167E:0216:0006:0AB6
 */
void f__167E_0216_000F_71A4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	f__167E_020E_0002_0370(); return;
}

/**
 * Decompiled function f__167E_0225_0006_0EE0()
 *
 * @name f__167E_0225_0006_0EE0
 * @implements 167E:0225:0006:0EE0 ()
 *
 * Called From: 167E:01E1:0013:4529
 */
void f__167E_0225_0006_0EE0()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x022B); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__167E_022B_004B_2BE3();
}

/**
 * Decompiled function f__167E_022B_004B_2BE3()
 *
 * @name f__167E_022B_004B_2BE3
 * @implements 167E:022B:004B:2BE3 ()
 *
 * Called From: 167E:022B:0006:0EE0
 */
void f__167E_022B_004B_2BE3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E5C));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E5E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__167E_020E_0002_0370(); return;
}

/**
 * Decompiled function f__167E_027E_0006_137A()
 *
 * @name f__167E_027E_0006_137A
 * @implements 167E:027E:0006:137A ()
 *
 * Called From: 167E:020E:0004:0428
 * Called From: 167E:020E:0002:0370
 */
void f__167E_027E_0006_137A()
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
 * Decompiled function f__167E_0284_000C_AAF8()
 *
 * @name f__167E_0284_000C_AAF8
 * @implements 167E:0284:000C:AAF8 ()
 *
 * Called From: 06F7:00EE:0008:DD44
 * Called From: 06F7:02A2:000C:F749
 * Called From: 06F7:02A2:0016:E108
 * Called From: 0972:0AAF:000A:2A45
 * Called From: 0AEC:043D:0010:17BA
 * Called From: 0C10:01D1:0016:4CD9
 * Called From: 0EDB:0303:001E:EA95
 * Called From: 0EDB:0542:0006:0F44
 * Called From: 176C:03B5:0013:6D4D
 * Called From: 176C:162B:000C:1D80
 * Called From: 176C:2566:0019:EB15
 * Called From: 1A34:2640:0016:72EF
 */
void f__167E_0284_000C_AAF8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0290); f__167E_0088_001A_4DC5();
	f__167E_0290_000B_0DAE();
}

/**
 * Decompiled function f__167E_0290_000B_0DAE()
 *
 * @name f__167E_0290_000B_0DAE
 * @implements 167E:0290:000B:0DAE ()
 *
 * Called From: 167E:0290:000C:AAF8
 */
void f__167E_0290_000B_0DAE()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__167E_02A5_0006_11EC(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x029B); f__167E_00B7_0034_8ECB();
	f__167E_029B_0007_27B6();
}

/**
 * Decompiled function f__167E_029B_0007_27B6()
 *
 * @name f__167E_029B_0007_27B6
 * @implements 167E:029B:0007:27B6 ()
 *
 * Called From: 167E:029B:000B:0DAE
 */
void f__167E_029B_0007_27B6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__167E_02A2_0003_0168();
}

/**
 * Decompiled function f__167E_02A2_0003_0168()
 *
 * @name f__167E_02A2_0003_0168
 * @implements 167E:02A2:0003:0168 ()
 *
 * Called From: 167E:02A2:0007:27B6
 */
void f__167E_02A2_0003_0168()
{
	emu_pop(&emu_cx.x);
	f__167E_02AB_0003_0212(); return;
}

/**
 * Decompiled function f__167E_02A3_0002_03A0()
 *
 * @name f__167E_02A3_0002_03A0
 * @implements 167E:02A3:0002:03A0 ()
 *
 * Called From: 167E:02A9:0006:11EC
 */
void f__167E_02A3_0002_03A0()
{
	f__167E_02AB_0003_0212(); return;
}

/**
 * Decompiled function f__167E_02A5_0006_11EC()
 *
 * @name f__167E_02A5_0006_11EC
 * @implements 167E:02A5:0006:11EC ()
 *
 * Called From: 167E:0294:000B:0DAE
 */
void f__167E_02A5_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_02A3_0002_03A0(); return;
}

/**
 * Decompiled function f__167E_02AB_0003_0212()
 *
 * @name f__167E_02AB_0003_0212
 * @implements 167E:02AB:0003:0212 ()
 *
 * Called From: 167E:02A3:0003:0168
 * Called From: 167E:02A3:0002:03A0
 */
void f__167E_02AB_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_02AE_000C_AA20()
 *
 * @name f__167E_02AE_000C_AA20
 * @implements 167E:02AE:000C:AA20 ()
 *
 * Called From: 0C10:020D:0006:0DE4
 * Called From: 0C10:0218:000B:1F67
 * Called From: 0EDB:02A3:0020:DD69
 * Called From: 0EDB:056A:0006:0DE4
 * Called From: 167E:0326:0010:3E1E
 * Called From: 176C:08C4:000D:2D7F
 * Called From: 176C:1AD4:0016:D679
 * Called From: 1A34:1C0D:0006:0DE4
 * Called From: 1A34:28C7:0016:1454
 */
void f__167E_02AE_000C_AA20()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02BA); f__167E_0088_001A_4DC5();
	f__167E_02BA_000B_0C10();
}

/**
 * Decompiled function f__167E_02BA_000B_0C10()
 *
 * @name f__167E_02BA_000B_0C10
 * @implements 167E:02BA:000B:0C10 ()
 *
 * Called From: 167E:02BA:000C:AA20
 */
void f__167E_02BA_000B_0C10()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x3);
	if (!emu_flags.zf) { f__167E_02CF_0006_11EC(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02C5); f__167E_00B7_0034_8ECB();
	f__167E_02C5_0007_23E0();
}

/**
 * Decompiled function f__167E_02C5_0007_23E0()
 *
 * @name f__167E_02C5_0007_23E0
 * @implements 167E:02C5:0007:23E0 ()
 *
 * Called From: 167E:02C5:000B:0C10
 */
void f__167E_02C5_0007_23E0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__167E_02CC_0003_0168();
}

/**
 * Decompiled function f__167E_02CC_0003_0168()
 *
 * @name f__167E_02CC_0003_0168
 * @implements 167E:02CC:0003:0168 ()
 *
 * Called From: 167E:02CC:0007:23E0
 */
void f__167E_02CC_0003_0168()
{
	emu_pop(&emu_cx.x);
	f__167E_02D5_0003_0212(); return;
}

/**
 * Decompiled function f__167E_02CD_0002_03A0()
 *
 * @name f__167E_02CD_0002_03A0
 * @implements 167E:02CD:0002:03A0 ()
 *
 * Called From: 167E:02D3:0006:11EC
 */
void f__167E_02CD_0002_03A0()
{
	f__167E_02D5_0003_0212(); return;
}

/**
 * Decompiled function f__167E_02CF_0006_11EC()
 *
 * @name f__167E_02CF_0006_11EC
 * @implements 167E:02CF:0006:11EC ()
 *
 * Called From: 167E:02BE:000B:0C10
 */
void f__167E_02CF_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_02CD_0002_03A0(); return;
}

/**
 * Decompiled function f__167E_02D5_0003_0212()
 *
 * @name f__167E_02D5_0003_0212
 * @implements 167E:02D5:0003:0212 ()
 *
 * Called From: 167E:02CD:0003:0168
 * Called From: 167E:02CD:0002:03A0
 */
void f__167E_02D5_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_02D8_000C_AB88()
 *
 * @name f__167E_02D8_000C_AB88
 * @implements 167E:02D8:000C:AB88 ()
 *
 * Called From: 0C10:0032:0006:0A84
 * Called From: 0C10:003F:000D:D8C7
 * Called From: 0C10:019C:000D:B098
 * Called From: 0EDB:02D2:0006:0A84
 * Called From: 0EDB:04CD:0024:55E6
 * Called From: 176C:2BEE:000A:2F85
 */
void f__167E_02D8_000C_AB88()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02E4); f__167E_0088_001A_4DC5();
	f__167E_02E4_000D_048E();
}

/**
 * Decompiled function f__167E_02E4_000D_048E()
 *
 * @name f__167E_02E4_000D_048E
 * @implements 167E:02E4:000D:048E ()
 *
 * Called From: 167E:02E4:000C:AB88
 */
void f__167E_02E4_000D_048E()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_0300_0005_0E52(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_02F1_0005_0F9E(); return; }
	f__167E_030E_0002_03AC(); return;
}

/**
 * Decompiled function f__167E_02F1_0005_0F9E()
 *
 * @name f__167E_02F1_0005_0F9E
 * @implements 167E:02F1:0005:0F9E ()
 *
 * Called From: 167E:02ED:000D:048E
 */
void f__167E_02F1_0005_0F9E()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02F6); f__167E_00B7_0034_8ECB();
	f__167E_02F6_0007_23E0();
}

/**
 * Decompiled function f__167E_02F6_0007_23E0()
 *
 * @name f__167E_02F6_0007_23E0
 * @implements 167E:02F6:0007:23E0 ()
 *
 * Called From: 167E:02F6:0005:0F9E
 */
void f__167E_02F6_0007_23E0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02FD); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__167E_02FD_0003_0148();
}

/**
 * Decompiled function f__167E_02FD_0003_0148()
 *
 * @name f__167E_02FD_0003_0148
 * @implements 167E:02FD:0003:0148 ()
 *
 * Called From: 167E:02FD:0007:23E0
 * Called From: 167E:030C:0002:0272
 */
void f__167E_02FD_0003_0148()
{
	emu_pop(&emu_cx.x);
	f__167E_0316_0003_0212(); return;
}

/**
 * Decompiled function f__167E_02FE_0002_0380()
 *
 * @name f__167E_02FE_0002_0380
 * @implements 167E:02FE:0002:0380 ()
 *
 * Called From: 167E:0314:0006:11CC
 */
void f__167E_02FE_0002_0380()
{
	f__167E_0316_0003_0212(); return;
}

/**
 * Decompiled function f__167E_0300_0005_0E52()
 *
 * @name f__167E_0300_0005_0E52
 * @implements 167E:0300:0005:0E52 ()
 *
 * Called From: 167E:02E8:000D:048E
 */
void f__167E_0300_0005_0E52()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0305); f__167E_00B7_0034_8ECB();
	f__167E_0305_0007_27B6();
}

/**
 * Decompiled function f__167E_0305_0007_27B6()
 *
 * @name f__167E_0305_0007_27B6
 * @implements 167E:0305:0007:27B6 ()
 *
 * Called From: 167E:0305:0005:0E52
 */
void f__167E_0305_0007_27B6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__167E_030C_0002_0272();
}

/**
 * Decompiled function f__167E_030C_0002_0272()
 *
 * @name f__167E_030C_0002_0272
 * @implements 167E:030C:0002:0272 ()
 *
 * Called From: 167E:030C:0007:27B6
 */
void f__167E_030C_0002_0272()
{
	f__167E_02FD_0003_0148(); return;
}

/**
 * Decompiled function f__167E_030E_0002_03AC()
 *
 * @name f__167E_030E_0002_03AC
 * @implements 167E:030E:0002:03AC ()
 *
 * Called From: 167E:02EF:000D:048E
 */
void f__167E_030E_0002_03AC()
{
	f__167E_0310_0006_11CC(); return;
}

/**
 * Decompiled function f__167E_0310_0006_11CC()
 *
 * @name f__167E_0310_0006_11CC
 * @implements 167E:0310:0006:11CC ()
 *
 * Called From: 167E:030E:0002:03AC
 */
void f__167E_0310_0006_11CC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_02FE_0002_0380(); return;
}

/**
 * Decompiled function f__167E_0316_0003_0212()
 *
 * @name f__167E_0316_0003_0212
 * @implements 167E:0316:0003:0212 ()
 *
 * Called From: 167E:02FE:0002:0380
 * Called From: 167E:02FE:0003:0148
 */
void f__167E_0316_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_0319_0010_3E1E()
 *
 * @name f__167E_0319_0010_3E1E
 * @implements 167E:0319:0010:3E1E ()
 *
 * Called From: 0EDB:0276:0013:154F
 * Called From: 176C:15AB:0015:D5DE
 */
void f__167E_0319_0010_3E1E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0329); f__167E_02AE_000C_AA20();
	f__167E_0329_002B_27EB();
}

/**
 * Decompiled function f__167E_0329_002B_27EB()
 *
 * @name f__167E_0329_002B_27EB
 * @implements 167E:0329:002B:27EB ()
 *
 * Called From: 167E:0329:0010:3E1E
 */
void f__167E_0329_002B_27EB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__167E_03AD_0005_0C98(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0354); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__167E_0354_0038_3DC7();
}

/**
 * Decompiled function f__167E_0354_0038_3DC7()
 *
 * @name f__167E_0354_0038_3DC7
 * @implements 167E:0354:0038:3DC7 ()
 *
 * Called From: 167E:0354:002B:27EB
 */
void f__167E_0354_0038_3DC7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__167E_038C_0009_C5ED();
}

/**
 * Decompiled function f__167E_038C_0009_C5ED()
 *
 * @name f__167E_038C_0009_C5ED
 * @implements 167E:038C:0009:C5ED ()
 *
 * Called From: 167E:038C:0038:3DC7
 */
void f__167E_038C_0009_C5ED()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x34CD; ovl__34CD(19);
	f__167E_0395_0016_9F94();
}

/**
 * Decompiled function f__167E_0395_0016_9F94()
 *
 * @name f__167E_0395_0016_9F94
 * @implements 167E:0395:0016:9F94 ()
 *
 * Called From: 167E:0395:0009:C5ED
 */
void f__167E_0395_0016_9F94()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x4);
	emu_andw(&emu_ax.x, 0x7);
	emu_shlw(&emu_ax.x, 0x1);
	emu_pop(&emu_bx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_addw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x2CE2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	f__167E_03AB_0002_03A6();
}

/**
 * Decompiled function f__167E_03AB_0002_03A6()
 *
 * @name f__167E_03AB_0002_03A6
 * @implements 167E:03AB:0002:03A6 ()
 *
 * Called From: 167E:03AB:0016:9F94
 */
void f__167E_03AB_0002_03A6()
{
	f__167E_03B2_001E_87CA(); return;
}

/**
 * Decompiled function f__167E_03AD_0005_0C98()
 *
 * @name f__167E_03AD_0005_0C98
 * @implements 167E:03AD:0005:0C98 ()
 *
 * Called From: 167E:0336:002B:27EB
 */
void f__167E_03AD_0005_0C98()
{
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B2); f__167E_01BB_0010_ECB8();
	f__167E_03B2_001E_87CA();
}

/**
 * Decompiled function f__167E_03B2_001E_87CA()
 *
 * @name f__167E_03B2_001E_87CA
 * @implements 167E:03B2:001E:87CA ()
 *
 * Called From: 167E:03AB:0002:03A6
 * Called From: 167E:03B2:0005:0C98
 */
void f__167E_03B2_001E_87CA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x03D0); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__167E_03D0_000B_9DFB();
}

/**
 * Decompiled function f__167E_03D0_000B_9DFB()
 *
 * @name f__167E_03D0_000B_9DFB
 * @implements 167E:03D0:000B:9DFB ()
 *
 * Called From: 167E:03D0:001E:87CA
 */
void f__167E_03D0_000B_9DFB()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__167E_03DB_0006_137A(); return;
}

/**
 * Decompiled function f__167E_03DB_0006_137A()
 *
 * @name f__167E_03DB_0006_137A
 * @implements 167E:03DB:0006:137A ()
 *
 * Called From: 167E:03D9:000B:9DFB
 */
void f__167E_03DB_0006_137A()
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
