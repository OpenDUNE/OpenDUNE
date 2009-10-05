/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__167E_0005_0013_AF0C()
 *
 * @name f__167E_0005_0013_AF0C
 * @implements 167E:0005:0013:AF0C ()
 *
 * Called From: 0C10:0017:0014:19CD
 * Called From: 0C10:0022:000B:D573
 * Called From: 0EDB:0212:0020:4DC9
 * Called From: 0EDB:0263:001D:2E46
 * Called From: 0EDB:03D1:001D:2E46
 * Called From: 0EDB:0524:001D:2E46
 * Called From: 176C:147C:0006:83CE
 * Called From: 176C:19EB:0020:1A9C
 * Called From: 176C:1A5B:0020:8DC9
 * Called From: 176C:1ABE:0024:813F
 * Called From: 176C:1B62:0022:208C
 * Called From: 176C:1C87:001D:2E46
 * Called From: 176C:1D7E:000D:4158
 * Called From: 176C:1F83:0008:D020
 * Called From: 1A34:1A72:0011:34D4
 * Called From: 1A34:1B7C:0019:AAA0
 * Called From: 1A34:2537:000F:5EE3
 */
void f__167E_0005_0013_AF0C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__167E_0018_0005_3FAA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_0082_0006_F7CE(); return;
}

/**
 * Decompiled function f__167E_0014_0004_DD39()
 *
 * @name f__167E_0014_0004_DD39
 * @implements 167E:0014:0004:DD39 ()
 *
 * Called From: 167E:0060:0011:16F5
 * Called From: 167E:0077:000F:2FDC
 */
void f__167E_0014_0004_DD39()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_0082_0006_F7CE(); return;
}

/**
 * Decompiled function f__167E_0016_0002_F53A()
 *
 * @name f__167E_0016_0002_F53A
 * @implements 167E:0016:0002:F53A ()
 *
 * Called From: 167E:0080:0005:9FFA
 */
void f__167E_0016_0002_F53A()
{
	f__167E_0082_0006_F7CE(); return;
}

/**
 * Decompiled function f__167E_0018_0005_3FAA()
 *
 * @name f__167E_0018_0005_3FAA
 * @implements 167E:0018:0005:3FAA ()
 *
 * Called From: 167E:0012:0013:AF0C
 */
void f__167E_0018_0005_3FAA()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x001D); f__167E_0088_001A_60ED();
	f__167E_001D_000A_2A37();
}

/**
 * Decompiled function f__167E_001D_000A_2A37()
 *
 * @name f__167E_001D_000A_2A37
 * @implements 167E:001D:000A:2A37 ()
 *
 * Called From: 167E:001D:0005:3FAA
 */
void f__167E_001D_000A_2A37()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0027); f__167E_00B7_0034_F3DA();
	f__167E_0027_0013_1DDD();
}

/**
 * Decompiled function f__167E_0027_0013_1DDD()
 *
 * @name f__167E_0027_0013_1DDD
 * @implements 167E:0027:0013:1DDD ()
 *
 * Called From: 167E:0027:000A:2A37
 */
void f__167E_0027_0013_1DDD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_003A_0006_8FC7(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0064_0006_C09B(); return; }
	f__167E_007B_0002_C03A(); return;
}

/**
 * Decompiled function f__167E_003A_0006_8FC7()
 *
 * @name f__167E_003A_0006_8FC7
 * @implements 167E:003A:0006:8FC7 ()
 *
 * Called From: 167E:0031:0013:1DDD
 */
void f__167E_003A_0006_8FC7()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0040); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__167E_0040_0011_B96B();
}

/**
 * Decompiled function f__167E_0040_0011_B96B()
 *
 * @name f__167E_0040_0011_B96B
 * @implements 167E:0040:0011:B96B ()
 *
 * Called From: 167E:0040:0006:8FC7
 */
void f__167E_0040_0011_B96B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__167E_0051_0011_16F5(); return; }
	/* Unresolved jump */ emu_ip = 0x0014; emu_last_cs = 0x167E; emu_last_ip = 0x004F; emu_last_length = 0x0011; emu_last_crc = 0xB96B; emu_call();
}

/**
 * Decompiled function f__167E_0051_0011_16F5()
 *
 * @name f__167E_0051_0011_16F5
 * @implements 167E:0051:0011:16F5 ()
 *
 * Called From: 167E:004D:0011:B96B
 */
void f__167E_0051_0011_16F5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x3);
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0062_0002_CCBA(); return; }
	f__167E_0014_0004_DD39(); return;
}

/**
 * Decompiled function f__167E_0062_0002_CCBA()
 *
 * @name f__167E_0062_0002_CCBA
 * @implements 167E:0062:0002:CCBA ()
 *
 * Called From: 167E:005E:0011:16F5
 */
void f__167E_0062_0002_CCBA()
{
	f__167E_007D_0005_9FFA(); return;
}

/**
 * Decompiled function f__167E_0064_0006_C09B()
 *
 * @name f__167E_0064_0006_C09B
 * @implements 167E:0064:0006:C09B ()
 *
 * Called From: 167E:0036:0013:1DDD
 */
void f__167E_0064_0006_C09B()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__167E_006A_000F_2FDC();
}

/**
 * Decompiled function f__167E_006A_000F_2FDC()
 *
 * @name f__167E_006A_000F_2FDC
 * @implements 167E:006A:000F:2FDC ()
 *
 * Called From: 167E:006A:0006:C09B
 */
void f__167E_006A_000F_2FDC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__167E_0079_0002_C13A(); return; }
	f__167E_0014_0004_DD39(); return;
}

/**
 * Decompiled function f__167E_0079_0002_C13A()
 *
 * @name f__167E_0079_0002_C13A
 * @implements 167E:0079:0002:C13A ()
 *
 * Called From: 167E:0075:000F:2FDC
 */
void f__167E_0079_0002_C13A()
{
	f__167E_007D_0005_9FFA(); return;
}

/**
 * Decompiled function f__167E_007B_0002_C03A()
 *
 * @name f__167E_007B_0002_C03A
 * @implements 167E:007B:0002:C03A ()
 *
 * Called From: 167E:0038:0013:1DDD
 */
void f__167E_007B_0002_C03A()
{
	f__167E_007D_0005_9FFA(); return;
}

/**
 * Decompiled function f__167E_007D_0005_9FFA()
 *
 * @name f__167E_007D_0005_9FFA
 * @implements 167E:007D:0005:9FFA ()
 *
 * Called From: 167E:0062:0002:CCBA
 * Called From: 167E:0079:0002:C13A
 * Called From: 167E:007B:0002:C03A
 */
void f__167E_007D_0005_9FFA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__167E_0016_0002_F53A(); return;
}

/**
 * Decompiled function f__167E_0082_0006_F7CE()
 *
 * @name f__167E_0082_0006_F7CE
 * @implements 167E:0082:0006:F7CE ()
 *
 * Called From: 167E:0016:0013:AF0C
 * Called From: 167E:0016:0002:F53A
 * Called From: 167E:0016:0004:DD39
 */
void f__167E_0082_0006_F7CE()
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
 * Decompiled function f__167E_0088_001A_60ED()
 *
 * @name f__167E_0088_001A_60ED
 * @implements 167E:0088:001A:60ED ()
 *
 * Called From: 0EDB:03DC:000B:017F
 * Called From: 0EDB:052F:000B:01D3
 * Called From: 167E:001A:0005:3FAA
 * Called From: 167E:0174:0008:5829
 * Called From: 167E:01D0:0008:5880
 * Called From: 167E:028D:000C:4C88
 * Called From: 167E:02B7:000C:CC85
 * Called From: 167E:02E1:000C:4C9F
 * Called From: 176C:03A2:000D:9950
 * Called From: 176C:089E:000D:9150
 * Called From: 176C:0BF5:000D:9150
 * Called From: 176C:1556:0006:53C6
 * Called From: 176C:161F:0006:53C6
 * Called From: 176C:27C9:0009:5D1A
 * Called From: 176C:28D0:0024:58C9
 * Called From: 1A34:042C:0019:BEE7
 * Called From: 1A34:1A94:0006:57C6
 * Called From: 1A34:1B96:0006:57C6
 */
void f__167E_0088_001A_60ED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xC000);
	emu_cmpw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { f__167E_00A2_0005_E2FA(); return; }
	emu_cmpw(&emu_ax.x, 0x8000);
	if (emu_flags.zf) { f__167E_00A7_0005_897A(); return; }
	emu_cmpw(&emu_ax.x, 0xC000);
	if (emu_flags.zf) { f__167E_00AC_0005_AFFA(); return; }
	f__167E_00B1_0004_9039(); return;
}

/**
 * Decompiled function f__167E_00A2_0005_E2FA()
 *
 * @name f__167E_00A2_0005_E2FA
 * @implements 167E:00A2:0005:E2FA ()
 *
 * Called From: 167E:0094:001A:60ED
 */
void f__167E_00A2_0005_E2FA()
{
	emu_movw(&emu_ax.x, 0x2);
	f__167E_00B5_0002_2597(); return;
}

/**
 * Decompiled function f__167E_00A5_0002_C73A()
 *
 * @name f__167E_00A5_0002_C73A
 * @implements 167E:00A5:0002:C73A ()
 *
 * Called From: 167E:00AA:0005:897A
 * Called From: 167E:00AF:0005:AFFA
 * Called From: 167E:00B3:0004:9039
 */
void f__167E_00A5_0002_C73A()
{
	f__167E_00B5_0002_2597(); return;
}

/**
 * Decompiled function f__167E_00A7_0005_897A()
 *
 * @name f__167E_00A7_0005_897A
 * @implements 167E:00A7:0005:897A ()
 *
 * Called From: 167E:0099:001A:60ED
 */
void f__167E_00A7_0005_897A()
{
	emu_movw(&emu_ax.x, 0x3);
	f__167E_00A5_0002_C73A(); return;
}

/**
 * Decompiled function f__167E_00AC_0005_AFFA()
 *
 * @name f__167E_00AC_0005_AFFA
 * @implements 167E:00AC:0005:AFFA ()
 *
 * Called From: 167E:009E:001A:60ED
 */
void f__167E_00AC_0005_AFFA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__167E_00A5_0002_C73A(); return;
}

/**
 * Decompiled function f__167E_00B1_0004_9039()
 *
 * @name f__167E_00B1_0004_9039
 * @implements 167E:00B1:0004:9039 ()
 *
 * Called From: 167E:00A0:001A:60ED
 */
void f__167E_00B1_0004_9039()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_00A5_0002_C73A(); return;
}

/**
 * Decompiled function f__167E_00B5_0002_2597()
 *
 * @name f__167E_00B5_0002_2597
 * @implements 167E:00B5:0002:2597 ()
 *
 * Called From: 167E:00A5:0002:C73A
 * Called From: 167E:00A5:0005:E2FA
 */
void f__167E_00B5_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_00B7_0034_F3DA()
 *
 * @name f__167E_00B7_0034_F3DA
 * @implements 167E:00B7:0034:F3DA ()
 *
 * Called From: 167E:0024:000A:2A37
 * Called From: 167E:016C:000D:A6D2
 * Called From: 167E:01C8:0010:85F6
 * Called From: 167E:0298:000B:9317
 * Called From: 167E:02C2:000B:92AC
 * Called From: 167E:02F3:0005:C100
 * Called From: 167E:0302:0005:011C
 * Called From: 176C:27C0:0021:7EE9
 * Called From: 1A34:1AA0:000C:77A4
 * Called From: 1A34:1BA2:000C:77C4
 */
void f__167E_00B7_0034_F3DA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0xC000);
	emu_cmpw(&emu_ax.x, 0xC000);
	if (!emu_flags.zf) { f__167E_00EB_0004_13F2(); return; }
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
	f__167E_00EF_0004_893F(); return;
}

/**
 * Decompiled function f__167E_00E6_0005_34FD()
 *
 * @name f__167E_00E6_0005_34FD
 * @implements 167E:00E6:0005:34FD ()
 *
 * Called From: 167E:00ED:0004:13F2
 */
void f__167E_00E6_0005_34FD()
{
	emu_andw(&emu_ax.x, 0x3FFF);
	f__167E_00EF_0004_893F(); return;
}

/**
 * Decompiled function f__167E_00EB_0004_13F2()
 *
 * @name f__167E_00EB_0004_13F2
 * @implements 167E:00EB:0004:13F2 ()
 *
 * Called From: 167E:00C8:0034:F3DA
 */
void f__167E_00EB_0004_13F2()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	f__167E_00E6_0005_34FD(); return;
}

/**
 * Decompiled function f__167E_00EF_0004_893F()
 *
 * @name f__167E_00EF_0004_893F
 * @implements 167E:00EF:0004:893F ()
 *
 * Called From: 167E:00E9:0034:F3DA
 * Called From: 167E:00E9:0005:34FD
 */
void f__167E_00EF_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_00F3_001E_8CB3()
 *
 * @name f__167E_00F3_001E_8CB3
 * @implements 167E:00F3:001E:8CB3 ()
 *
 * Called From: 0972:0A93:0017:2EC7
 * Called From: 0972:0BA9:0018:4D07
 * Called From: 0972:0BDE:0020:614B
 * Called From: 0972:16CA:0008:A673
 * Called From: 0AEC:03D7:0005:BFC0
 * Called From: 0AEC:03D7:000C:BB87
 * Called From: 0AEC:057A:0022:5BD5
 * Called From: 0AEC:05B9:0010:37DB
 * Called From: 0C3A:2945:000F:A6A8
 * Called From: 0EDB:049E:0013:CDD0
 * Called From: 1391:033C:0008:A673
 * Called From: 176C:0D31:0012:9ABF
 * Called From: 176C:0EF1:0011:8A0E
 * Called From: 176C:0F04:0013:75C0
 * Called From: 176C:1390:0013:AA74
 * Called From: 176C:14BB:0008:A673
 * Called From: 176C:182D:0021:E595
 * Called From: 176C:24C1:0010:16F6
 * Called From: 176C:24EE:002D:83BF
 * Called From: 176C:2529:0020:614B
 * Called From: 176C:260C:002D:1FC4
 * Called From: 176C:2907:0008:A673
 * Called From: 176C:2A8B:0012:04F6
 * Called From: 176C:2BC4:001F:5AB6
 * Called From: 176C:2C0D:001F:0151
 * Called From: 1A34:078A:000D:9925
 * Called From: 1A34:137B:0008:A673
 * Called From: 1A34:1AC7:001E:E8B0
 * Called From: 1A34:1AF1:001E:6C91
 * Called From: 1A34:1B04:000F:A6AC
 * Called From: 1A34:1B04:0013:A8EA
 * Called From: 1A34:1B26:0008:A673
 * Called From: 1A34:1BD9:002E:EAD1
 * Called From: 1A34:1C03:001E:6C91
 * Called From: 1A34:1C7B:000F:A6D7
 * Called From: 1A34:1C7B:0033:213E
 * Called From: 1A34:1C8D:0012:CA6A
 * Called From: 1A34:22DF:001C:2671
 * Called From: 1A34:3069:003F:CF75
 * Called From: 1A34:307D:0014:5E5F
 * Called From: 1A34:30D9:0024:9E02
 * Called From: 1A34:3451:0027:51AB
 * Called From: 1A34:3451:0017:3A91
 * Called From: 1A34:3478:0008:A673
 * Called From: 1A34:3611:0008:443E
 * Called From: 1A34:3611:000F:A6D7
 * Called From: 1A34:3611:0017:BAEA
 * Called From: 1A34:366A:000F:A6AC
 */
void f__167E_00F3_001E_8CB3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__167E_0111_0025_96F6(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_0136_0006_8BC7(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0150_0007_030A(); return; }
	f__167E_0157_0002_C03A(); return;
}

/**
 * Decompiled function f__167E_0111_0025_96F6()
 *
 * @name f__167E_0111_0025_96F6
 * @implements 167E:0111:0025:96F6 ()
 *
 * Called From: 167E:0103:001E:8CB3
 */
void f__167E_0111_0025_96F6()
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
	f__167E_015D_0005_8BCF(); return;
}

/**
 * Decompiled function f__167E_0134_0002_D3BA()
 *
 * @name f__167E_0134_0002_D3BA
 * @implements 167E:0134:0002:D3BA ()
 *
 * Called From: 167E:0155:0007:030A
 * Called From: 167E:0155:0004:067A
 * Called From: 167E:015B:0004:83B9
 */
void f__167E_0134_0002_D3BA()
{
	f__167E_015D_0005_8BCF(); return;
}

/**
 * Decompiled function f__167E_0136_0006_8BC7()
 *
 * @name f__167E_0136_0006_8BC7
 * @implements 167E:0136:0006:8BC7 ()
 *
 * Called From: 167E:0108:001E:8CB3
 */
void f__167E_0136_0006_8BC7()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__167E_013C_0012_1FAD();
}

/**
 * Decompiled function f__167E_013C_0012_1FAD()
 *
 * @name f__167E_013C_0012_1FAD
 * @implements 167E:013C:0012:1FAD ()
 *
 * Called From: 167E:013C:0006:8BC7
 */
void f__167E_013C_0012_1FAD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { f__167E_014E_0002_C4BA(); return; }
	emu_movw(&emu_ax.x, 0x4000);
	f__167E_0153_0004_067A(); return;
}

/**
 * Decompiled function f__167E_014E_0002_C4BA()
 *
 * @name f__167E_014E_0002_C4BA
 * @implements 167E:014E:0002:C4BA ()
 *
 * Called From: 167E:0147:0012:1FAD
 */
void f__167E_014E_0002_C4BA()
{
	f__167E_0159_0004_83B9(); return;
}

/**
 * Decompiled function f__167E_0150_0007_030A()
 *
 * @name f__167E_0150_0007_030A
 * @implements 167E:0150:0007:030A ()
 *
 * Called From: 167E:010D:001E:8CB3
 */
void f__167E_0150_0007_030A()
{
	emu_movw(&emu_ax.x, 0x8000);
	emu_orw(&emu_ax.x, emu_si);
	f__167E_0134_0002_D3BA(); return;
}

/**
 * Decompiled function f__167E_0153_0004_067A()
 *
 * @name f__167E_0153_0004_067A
 * @implements 167E:0153:0004:067A ()
 *
 * Called From: 167E:014C:0012:1FAD
 */
void f__167E_0153_0004_067A()
{
	emu_orw(&emu_ax.x, emu_si);
	f__167E_0134_0002_D3BA(); return;
}

/**
 * Decompiled function f__167E_0157_0002_C03A()
 *
 * @name f__167E_0157_0002_C03A
 * @implements 167E:0157:0002:C03A ()
 *
 * Called From: 167E:010F:001E:8CB3
 */
void f__167E_0157_0002_C03A()
{
	f__167E_0159_0004_83B9(); return;
}

/**
 * Decompiled function f__167E_0159_0004_83B9()
 *
 * @name f__167E_0159_0004_83B9
 * @implements 167E:0159:0004:83B9 ()
 *
 * Called From: 167E:014E:0002:C4BA
 * Called From: 167E:0157:0002:C03A
 */
void f__167E_0159_0004_83B9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_0134_0002_D3BA(); return;
}

/**
 * Decompiled function f__167E_015D_0005_8BCF()
 *
 * @name f__167E_015D_0005_8BCF
 * @implements 167E:015D:0005:8BCF ()
 *
 * Called From: 167E:0134:0025:96F6
 * Called From: 167E:0134:0002:D3BA
 */
void f__167E_015D_0005_8BCF()
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
 * Decompiled function f__167E_0162_000D_A6D2()
 *
 * @name f__167E_0162_000D_A6D2
 * @implements 167E:0162:000D:A6D2 ()
 *
 * Called From: 06F7:02C6:000F:C338
 * Called From: 176C:1562:000C:2379
 * Called From: 176C:1FA9:000D:5C7A
 */
void f__167E_0162_000D_A6D2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x016F); f__167E_00B7_0034_F3DA();
	f__167E_016F_0008_5829();
}

/**
 * Decompiled function f__167E_016F_0008_5829()
 *
 * @name f__167E_016F_0008_5829
 * @implements 167E:016F:0008:5829 ()
 *
 * Called From: 167E:016F:000D:A6D2
 */
void f__167E_016F_0008_5829()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0177); f__167E_0088_001A_60ED();
	f__167E_0177_0012_EE2A();
}

/**
 * Decompiled function f__167E_0177_0012_EE2A()
 *
 * @name f__167E_0177_0012_EE2A
 * @implements 167E:0177:0012:EE2A ()
 *
 * Called From: 167E:0177:0008:5829
 */
void f__167E_0177_0012_EE2A()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__167E_0189_0004_7DF2(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_018D_0006_8BC7(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0195_0006_C49B(); return; }
	/* Unresolved jump */ emu_ip = 0x01B1; emu_last_cs = 0x167E; emu_last_ip = 0x0187; emu_last_length = 0x0012; emu_last_crc = 0xEE2A; emu_call();
}

/**
 * Decompiled function f__167E_0189_0004_7DF2()
 *
 * @name f__167E_0189_0004_7DF2
 * @implements 167E:0189:0004:7DF2 ()
 *
 * Called From: 167E:017B:0012:EE2A
 */
void f__167E_0189_0004_7DF2()
{
	emu_movw(&emu_ax.x, emu_si);
	f__167E_01B7_0004_DE52(); return;
}

/**
 * Decompiled function f__167E_018B_0002_D53A()
 *
 * @name f__167E_018B_0002_D53A
 * @implements 167E:018B:0002:D53A ()
 *
 * Called From: 167E:01AF:0004:361F
 */
void f__167E_018B_0002_D53A()
{
	f__167E_01B7_0004_DE52(); return;
}

/**
 * Decompiled function f__167E_018D_0006_8BC7()
 *
 * @name f__167E_018D_0006_8BC7
 * @implements 167E:018D:0006:8BC7 ()
 *
 * Called From: 167E:0180:0012:EE2A
 */
void f__167E_018D_0006_8BC7()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0193); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__167E_0193_0002_C33A();
}

/**
 * Decompiled function f__167E_0193_0002_C33A()
 *
 * @name f__167E_0193_0002_C33A
 * @implements 167E:0193:0002:C33A ()
 *
 * Called From: 167E:0193:0006:8BC7
 */
void f__167E_0193_0002_C33A()
{
	f__167E_019B_0012_B212(); return;
}

/**
 * Decompiled function f__167E_0195_0006_C49B()
 *
 * @name f__167E_0195_0006_C49B
 * @implements 167E:0195:0006:C49B ()
 *
 * Called From: 167E:0185:0012:EE2A
 */
void f__167E_0195_0006_C49B()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019B); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__167E_019B_0012_B212();
}

/**
 * Decompiled function f__167E_019B_0012_B212()
 *
 * @name f__167E_019B_0012_B212
 * @implements 167E:019B:0012:B212 ()
 *
 * Called From: 167E:0193:0002:C33A
 * Called From: 167E:019B:0006:C49B
 */
void f__167E_019B_0012_B212()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x01AD); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__167E_01AD_0004_361F();
}

/**
 * Decompiled function f__167E_01AD_0004_361F()
 *
 * @name f__167E_01AD_0004_361F
 * @implements 167E:01AD:0004:361F ()
 *
 * Called From: 167E:01AD:0012:B212
 */
void f__167E_01AD_0004_361F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__167E_018B_0002_D53A(); return;
}

/**
 * Decompiled function f__167E_01B7_0004_DE52()
 *
 * @name f__167E_01B7_0004_DE52
 * @implements 167E:01B7:0004:DE52 ()
 *
 * Called From: 167E:018B:0002:D53A
 * Called From: 167E:018B:0004:7DF2
 */
void f__167E_01B7_0004_DE52()
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
 * Decompiled function f__167E_01BB_0010_85F6()
 *
 * @name f__167E_01BB_0010_85F6
 * @implements 167E:01BB:0010:85F6 ()
 *
 * Called From: 0C3A:22FD:000C:39D3
 * Called From: 0EDB:021D:000B:3104
 * Called From: 167E:03AF:0005:C0BA
 * Called From: 176C:10CE:001A:65A9
 * Called From: 176C:1596:0006:63E5
 * Called From: 176C:19FA:0008:380B
 * Called From: 176C:1A66:000B:311C
 * Called From: 176C:1B7C:0006:67E5
 * Called From: 176C:1CAC:0006:67E5
 * Called From: 176C:1CAC:0025:9AD8
 * Called From: 176C:280B:0016:9F64
 * Called From: 1A34:1392:000C:39D3
 * Called From: 1A34:2528:002F:672A
 */
void f__167E_01BB_0010_85F6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x01CB); f__167E_00B7_0034_F3DA();
	f__167E_01CB_0008_5880();
}

/**
 * Decompiled function f__167E_01CB_0008_5880()
 *
 * @name f__167E_01CB_0008_5880
 * @implements 167E:01CB:0008:5880 ()
 *
 * Called From: 167E:01CB:0010:85F6
 */
void f__167E_01CB_0008_5880()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x01D3); f__167E_0088_001A_60ED();
	f__167E_01D3_0013_5505();
}

/**
 * Decompiled function f__167E_01D3_0013_5505()
 *
 * @name f__167E_01D3_0013_5505
 * @implements 167E:01D3:0013:5505 ()
 *
 * Called From: 167E:01D3:0008:5880
 */
void f__167E_01D3_0013_5505()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__167E_01E6_0026_5B15(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_0210_0006_8BC7(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_0225_0006_C49B(); return; }
	/* Unresolved jump */ emu_ip = 0x0276; emu_last_cs = 0x167E; emu_last_ip = 0x01E3; emu_last_length = 0x0013; emu_last_crc = 0x5505; emu_call();
}

/**
 * Decompiled function f__167E_01E6_0026_5B15()
 *
 * @name f__167E_01E6_0026_5B15
 * @implements 167E:01E6:0026:5B15 ()
 *
 * Called From: 167E:01D7:0013:5505
 */
void f__167E_01E6_0026_5B15()
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
	emu_push(emu_cs); emu_push(0x020C); emu_cs = 0x0F3F; f__0F3F_002C_000B_51FA();
	f__167E_020C_0004_6C1F();
}

/**
 * Decompiled function f__167E_020C_0004_6C1F()
 *
 * @name f__167E_020C_0004_6C1F
 * @implements 167E:020C:0004:6C1F ()
 *
 * Called From: 167E:020C:0026:5B15
 */
void f__167E_020C_0004_6C1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__167E_027E_0006_F7CE(); return;
}

/**
 * Decompiled function f__167E_020E_0002_F73A()
 *
 * @name f__167E_020E_0002_F73A
 * @implements 167E:020E:0002:F73A ()
 *
 * Called From: 167E:0223:000F:BFA9
 * Called From: 167E:0274:004B:0A01
 */
void f__167E_020E_0002_F73A()
{
	f__167E_027E_0006_F7CE(); return;
}

/**
 * Decompiled function f__167E_0210_0006_8BC7()
 *
 * @name f__167E_0210_0006_8BC7
 * @implements 167E:0210:0006:8BC7 ()
 *
 * Called From: 167E:01DC:0013:5505
 */
void f__167E_0210_0006_8BC7()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__167E_0216_000F_BFA9();
}

/**
 * Decompiled function f__167E_0216_000F_BFA9()
 *
 * @name f__167E_0216_000F_BFA9
 * @implements 167E:0216:000F:BFA9 ()
 *
 * Called From: 167E:0216:0006:8BC7
 */
void f__167E_0216_000F_BFA9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	f__167E_020E_0002_F73A(); return;
}

/**
 * Decompiled function f__167E_0225_0006_C49B()
 *
 * @name f__167E_0225_0006_C49B
 * @implements 167E:0225:0006:C49B ()
 *
 * Called From: 167E:01E1:0013:5505
 */
void f__167E_0225_0006_C49B()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x022B); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__167E_022B_004B_0A01();
}

/**
 * Decompiled function f__167E_022B_004B_0A01()
 *
 * @name f__167E_022B_004B_0A01
 * @implements 167E:022B:004B:0A01 ()
 *
 * Called From: 167E:022B:0006:C49B
 */
void f__167E_022B_004B_0A01()
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
	f__167E_020E_0002_F73A(); return;
}

/**
 * Decompiled function f__167E_027E_0006_F7CE()
 *
 * @name f__167E_027E_0006_F7CE
 * @implements 167E:027E:0006:F7CE ()
 *
 * Called From: 167E:020E:0004:6C1F
 * Called From: 167E:020E:0002:F73A
 */
void f__167E_027E_0006_F7CE()
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
 * Decompiled function f__167E_0284_000C_4C88()
 *
 * @name f__167E_0284_000C_4C88
 * @implements 167E:0284:000C:4C88 ()
 *
 * Called From: 06F7:00EE:0008:086B
 * Called From: 06F7:02A2:000C:9030
 * Called From: 06F7:02A2:0016:E02E
 * Called From: 0972:0AAF:000A:8B0A
 * Called From: 0AEC:043D:0010:8719
 * Called From: 0C10:01D1:0016:1D4B
 * Called From: 0EDB:0303:001E:F83C
 * Called From: 0EDB:0542:0006:9786
 * Called From: 176C:03B5:0013:F833
 * Called From: 176C:0D80:000D:5110
 * Called From: 176C:162B:000C:43CF
 * Called From: 176C:2566:0019:4894
 * Called From: 1A34:2640:0016:7F42
 */
void f__167E_0284_000C_4C88()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0290); f__167E_0088_001A_60ED();
	f__167E_0290_000B_9317();
}

/**
 * Decompiled function f__167E_0290_000B_9317()
 *
 * @name f__167E_0290_000B_9317
 * @implements 167E:0290:000B:9317 ()
 *
 * Called From: 167E:0290:000C:4C88
 */
void f__167E_0290_000B_9317()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__167E_02A5_0006_5EA9(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x029B); f__167E_00B7_0034_F3DA();
	f__167E_029B_0007_9375();
}

/**
 * Decompiled function f__167E_029B_0007_9375()
 *
 * @name f__167E_029B_0007_9375
 * @implements 167E:029B:0007:9375 ()
 *
 * Called From: 167E:029B:000B:9317
 */
void f__167E_029B_0007_9375()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__167E_02A2_0003_C81A();
}

/**
 * Decompiled function f__167E_02A2_0003_C81A()
 *
 * @name f__167E_02A2_0003_C81A
 * @implements 167E:02A2:0003:C81A ()
 *
 * Called From: 167E:02A2:0007:9375
 */
void f__167E_02A2_0003_C81A()
{
	emu_pop(&emu_cx.x);
	f__167E_02AB_0003_2E57(); return;
}

/**
 * Decompiled function f__167E_02A3_0002_C33A()
 *
 * @name f__167E_02A3_0002_C33A
 * @implements 167E:02A3:0002:C33A ()
 *
 * Called From: 167E:02A9:0006:5EA9
 */
void f__167E_02A3_0002_C33A()
{
	f__167E_02AB_0003_2E57(); return;
}

/**
 * Decompiled function f__167E_02A5_0006_5EA9()
 *
 * @name f__167E_02A5_0006_5EA9
 * @implements 167E:02A5:0006:5EA9 ()
 *
 * Called From: 167E:0294:000B:9317
 */
void f__167E_02A5_0006_5EA9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_02A3_0002_C33A(); return;
}

/**
 * Decompiled function f__167E_02AB_0003_2E57()
 *
 * @name f__167E_02AB_0003_2E57
 * @implements 167E:02AB:0003:2E57 ()
 *
 * Called From: 167E:02A3:0003:C81A
 * Called From: 167E:02A3:0002:C33A
 */
void f__167E_02AB_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_02AE_000C_CC85()
 *
 * @name f__167E_02AE_000C_CC85
 * @implements 167E:02AE:000C:CC85 ()
 *
 * Called From: 0C10:020D:0006:3784
 * Called From: 0C10:0218:000B:6134
 * Called From: 0EDB:02A3:0020:3D83
 * Called From: 0EDB:056A:0006:3784
 * Called From: 167E:0326:0010:B56F
 * Called From: 176C:08C4:000D:F112
 * Called From: 176C:0C13:000D:F112
 * Called From: 176C:1AD4:0016:C3C3
 * Called From: 1A34:1C0D:0006:3784
 * Called From: 1A34:1C0D:000A:2B08
 * Called From: 1A34:28C7:0016:FFBA
 */
void f__167E_02AE_000C_CC85()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02BA); f__167E_0088_001A_60ED();
	f__167E_02BA_000B_92AC();
}

/**
 * Decompiled function f__167E_02BA_000B_92AC()
 *
 * @name f__167E_02BA_000B_92AC
 * @implements 167E:02BA:000B:92AC ()
 *
 * Called From: 167E:02BA:000C:CC85
 */
void f__167E_02BA_000B_92AC()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x3);
	if (!emu_flags.zf) { f__167E_02CF_0006_5EA9(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02C5); f__167E_00B7_0034_F3DA();
	f__167E_02C5_0007_DC29();
}

/**
 * Decompiled function f__167E_02C5_0007_DC29()
 *
 * @name f__167E_02C5_0007_DC29
 * @implements 167E:02C5:0007:DC29 ()
 *
 * Called From: 167E:02C5:000B:92AC
 */
void f__167E_02C5_0007_DC29()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__167E_02CC_0003_C81A();
}

/**
 * Decompiled function f__167E_02CC_0003_C81A()
 *
 * @name f__167E_02CC_0003_C81A
 * @implements 167E:02CC:0003:C81A ()
 *
 * Called From: 167E:02CC:0007:DC29
 */
void f__167E_02CC_0003_C81A()
{
	emu_pop(&emu_cx.x);
	f__167E_02D5_0003_2E57(); return;
}

/**
 * Decompiled function f__167E_02CD_0002_C33A()
 *
 * @name f__167E_02CD_0002_C33A
 * @implements 167E:02CD:0002:C33A ()
 *
 * Called From: 167E:02D3:0006:5EA9
 */
void f__167E_02CD_0002_C33A()
{
	f__167E_02D5_0003_2E57(); return;
}

/**
 * Decompiled function f__167E_02CF_0006_5EA9()
 *
 * @name f__167E_02CF_0006_5EA9
 * @implements 167E:02CF:0006:5EA9 ()
 *
 * Called From: 167E:02BE:000B:92AC
 */
void f__167E_02CF_0006_5EA9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_02CD_0002_C33A(); return;
}

/**
 * Decompiled function f__167E_02D5_0003_2E57()
 *
 * @name f__167E_02D5_0003_2E57
 * @implements 167E:02D5:0003:2E57 ()
 *
 * Called From: 167E:02CD:0003:C81A
 * Called From: 167E:02CD:0002:C33A
 */
void f__167E_02D5_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_02D8_000C_4C9F()
 *
 * @name f__167E_02D8_000C_4C9F
 * @implements 167E:02D8:000C:4C9F ()
 *
 * Called From: 0C10:0032:0006:5783
 * Called From: 0C10:003F:000D:AB27
 * Called From: 0C10:019C:000D:4CEC
 * Called From: 0EDB:02D2:0006:5783
 * Called From: 0EDB:04CD:0024:408E
 * Called From: 176C:2BEE:000A:4B0F
 */
void f__167E_02D8_000C_4C9F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02E4); f__167E_0088_001A_60ED();
	f__167E_02E4_000D_1F6F();
}

/**
 * Decompiled function f__167E_02E4_000D_1F6F()
 *
 * @name f__167E_02E4_000D_1F6F
 * @implements 167E:02E4:000D:1F6F ()
 *
 * Called From: 167E:02E4:000C:4C9F
 */
void f__167E_02E4_000D_1F6F()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__167E_0300_0005_011C(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__167E_02F1_0005_C100(); return; }
	f__167E_030E_0002_C03A(); return;
}

/**
 * Decompiled function f__167E_02F1_0005_C100()
 *
 * @name f__167E_02F1_0005_C100
 * @implements 167E:02F1:0005:C100 ()
 *
 * Called From: 167E:02ED:000D:1F6F
 */
void f__167E_02F1_0005_C100()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02F6); f__167E_00B7_0034_F3DA();
	f__167E_02F6_0007_DC29();
}

/**
 * Decompiled function f__167E_02F6_0007_DC29()
 *
 * @name f__167E_02F6_0007_DC29
 * @implements 167E:02F6:0007:DC29 ()
 *
 * Called From: 167E:02F6:0005:C100
 */
void f__167E_02F6_0007_DC29()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02FD); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__167E_02FD_0003_C01A();
}

/**
 * Decompiled function f__167E_02FD_0003_C01A()
 *
 * @name f__167E_02FD_0003_C01A
 * @implements 167E:02FD:0003:C01A ()
 *
 * Called From: 167E:02FD:0007:DC29
 * Called From: 167E:030C:0002:B7BA
 */
void f__167E_02FD_0003_C01A()
{
	emu_pop(&emu_cx.x);
	f__167E_0316_0003_2E57(); return;
}

/**
 * Decompiled function f__167E_02FE_0002_CB3A()
 *
 * @name f__167E_02FE_0002_CB3A
 * @implements 167E:02FE:0002:CB3A ()
 *
 * Called From: 167E:0314:0006:56A9
 */
void f__167E_02FE_0002_CB3A()
{
	f__167E_0316_0003_2E57(); return;
}

/**
 * Decompiled function f__167E_0300_0005_011C()
 *
 * @name f__167E_0300_0005_011C
 * @implements 167E:0300:0005:011C ()
 *
 * Called From: 167E:02E8:000D:1F6F
 */
void f__167E_0300_0005_011C()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0305); f__167E_00B7_0034_F3DA();
	f__167E_0305_0007_9375();
}

/**
 * Decompiled function f__167E_0305_0007_9375()
 *
 * @name f__167E_0305_0007_9375
 * @implements 167E:0305:0007:9375 ()
 *
 * Called From: 167E:0305:0005:011C
 */
void f__167E_0305_0007_9375()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__167E_030C_0002_B7BA();
}

/**
 * Decompiled function f__167E_030C_0002_B7BA()
 *
 * @name f__167E_030C_0002_B7BA
 * @implements 167E:030C:0002:B7BA ()
 *
 * Called From: 167E:030C:0007:9375
 */
void f__167E_030C_0002_B7BA()
{
	f__167E_02FD_0003_C01A(); return;
}

/**
 * Decompiled function f__167E_030E_0002_C03A()
 *
 * @name f__167E_030E_0002_C03A
 * @implements 167E:030E:0002:C03A ()
 *
 * Called From: 167E:02EF:000D:1F6F
 */
void f__167E_030E_0002_C03A()
{
	f__167E_0310_0006_56A9(); return;
}

/**
 * Decompiled function f__167E_0310_0006_56A9()
 *
 * @name f__167E_0310_0006_56A9
 * @implements 167E:0310:0006:56A9 ()
 *
 * Called From: 167E:030E:0002:C03A
 */
void f__167E_0310_0006_56A9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__167E_02FE_0002_CB3A(); return;
}

/**
 * Decompiled function f__167E_0316_0003_2E57()
 *
 * @name f__167E_0316_0003_2E57
 * @implements 167E:0316:0003:2E57 ()
 *
 * Called From: 167E:02FE:0002:CB3A
 * Called From: 167E:02FE:0003:C01A
 */
void f__167E_0316_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_0319_0010_B56F()
 *
 * @name f__167E_0319_0010_B56F
 * @implements 167E:0319:0010:B56F ()
 *
 * Called From: 0EDB:0276:0013:346E
 * Called From: 176C:15AB:0015:35C1
 */
void f__167E_0319_0010_B56F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0329); f__167E_02AE_000C_CC85();
	f__167E_0329_002B_09A6();
}

/**
 * Decompiled function f__167E_0329_002B_09A6()
 *
 * @name f__167E_0329_002B_09A6
 * @implements 167E:0329:002B:09A6 ()
 *
 * Called From: 167E:0329:0010:B56F
 */
void f__167E_0329_002B_09A6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__167E_03AD_0005_C0BA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0354); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__167E_0354_0038_56F3();
}

/**
 * Decompiled function f__167E_0354_0038_56F3()
 *
 * @name f__167E_0354_0038_56F3
 * @implements 167E:0354:0038:56F3 ()
 *
 * Called From: 167E:0354:002B:09A6
 */
void f__167E_0354_0038_56F3()
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
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__167E_038C_0009_AAB4();
}

/**
 * Decompiled function f__167E_038C_0009_AAB4()
 *
 * @name f__167E_038C_0009_AAB4
 * @implements 167E:038C:0009:AAB4 ()
 *
 * Called From: 167E:038C:0038:56F3
 */
void f__167E_038C_0009_AAB4()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x34CD; ovl__34CD(19);
	f__167E_0395_0016_379C();
}

/**
 * Decompiled function f__167E_0395_0016_379C()
 *
 * @name f__167E_0395_0016_379C
 * @implements 167E:0395:0016:379C ()
 *
 * Called From: 167E:0395:0009:AAB4
 */
void f__167E_0395_0016_379C()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x4);
	emu_andw(&emu_ax.x, 0x7);
	emu_shlw(&emu_ax.x, 0x1);
	emu_pop(&emu_bx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_addw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x2CE2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__167E_03AB_0002_C2BA();
}

/**
 * Decompiled function f__167E_03AB_0002_C2BA()
 *
 * @name f__167E_03AB_0002_C2BA
 * @implements 167E:03AB:0002:C2BA ()
 *
 * Called From: 167E:03AB:0016:379C
 */
void f__167E_03AB_0002_C2BA()
{
	f__167E_03B2_001E_4E1D(); return;
}

/**
 * Decompiled function f__167E_03AD_0005_C0BA()
 *
 * @name f__167E_03AD_0005_C0BA
 * @implements 167E:03AD:0005:C0BA ()
 *
 * Called From: 167E:0336:002B:09A6
 */
void f__167E_03AD_0005_C0BA()
{
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B2); f__167E_01BB_0010_85F6();
	f__167E_03B2_001E_4E1D();
}

/**
 * Decompiled function f__167E_03B2_001E_4E1D()
 *
 * @name f__167E_03B2_001E_4E1D
 * @implements 167E:03B2:001E:4E1D ()
 *
 * Called From: 167E:03AB:0002:C2BA
 * Called From: 167E:03B2:0005:C0BA
 */
void f__167E_03B2_001E_4E1D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x03D0); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__167E_03D0_000B_8BBD();
}

/**
 * Decompiled function f__167E_03D0_000B_8BBD()
 *
 * @name f__167E_03D0_000B_8BBD
 * @implements 167E:03D0:000B:8BBD ()
 *
 * Called From: 167E:03D0:001E:4E1D
 */
void f__167E_03D0_000B_8BBD()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__167E_03DB_0006_F7CE(); return;
}

/**
 * Decompiled function f__167E_03DB_0006_F7CE()
 *
 * @name f__167E_03DB_0006_F7CE
 * @implements 167E:03DB:0006:F7CE ()
 *
 * Called From: 167E:03D9:000B:8BBD
 */
void f__167E_03DB_0006_F7CE()
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
