/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__167E_0005_0013_AF0C()
 *
 * @name f__167E_0005_0013_AF0C
 * @implements 167E:0005:0013:AF0C ()
 * @implements 167E:0014:0004:DD39
 * @implements 167E:0016:0002:F53A
 * @implements 167E:0018:0005:3FAA
 * @implements 167E:001D:000A:2A37
 * @implements 167E:0027:0013:1DDD
 * @implements 167E:003A:0006:8FC7
 * @implements 167E:0040:0011:B96B
 * @implements 167E:0051:0011:16F5
 * @implements 167E:0062:0002:CCBA
 * @implements 167E:0064:0006:C09B
 * @implements 167E:006A:000F:2FDC
 * @implements 167E:0079:0002:C13A
 * @implements 167E:007B:0002:C03A
 * @implements 167E:007D:0005:9FFA
 * @implements 167E:0082:0006:F7CE
 *
 * Called From: 0972:11D4:0020:8DC9
 * Called From: 0C10:0017:0014:19CD
 * Called From: 0C10:0022:000B:D573
 * Called From: 0EDB:0212:0020:4DC9
 * Called From: 0EDB:0263:001D:2E46
 * Called From: 0EDB:03D1:001D:2E46
 * Called From: 0EDB:0524:001D:2E46
 * Called From: 176C:147C:0006:83CE
 * Called From: 176C:19EB:0020:1A9C
 * Called From: 176C:19EB:0018:6478
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
l__0005:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0018;
	goto l__0014;
l__0014:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0016;
l__0016:
	goto l__0082;
l__0018:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x001D); f__167E_0088_001A_60ED();
	goto l__001D;
l__001D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0027); f__167E_00B7_0034_F3DA();
	goto l__0027;
l__0027:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__003A;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0064;
	goto l__007B;
l__003A:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0040); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__0040;
l__0040:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__0051;
	goto l__0014;
l__0051:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_andw(&emu_ax, 0x3);
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0062;
	goto l__0014;
l__0062:
	goto l__007D;
l__0064:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	goto l__006A;
l__006A:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__0079;
	goto l__0014;
l__0079:
	goto l__007D;
l__007B:
	goto l__007D;
l__007D:
	emu_ax = 0x1;
	goto l__0016;
l__0082:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 167E:00A2:0005:E2FA
 * @implements 167E:00A5:0002:C73A
 * @implements 167E:00A7:0005:897A
 * @implements 167E:00AC:0005:AFFA
 * @implements 167E:00B1:0004:9039
 * @implements 167E:00B5:0002:2597
 *
 * Called From: 0972:11DF:000B:0103
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
 * Called From: 176C:1556:0013:C8FF
 * Called From: 176C:161F:0006:53C6
 * Called From: 176C:161F:0011:8B85
 * Called From: 176C:27C9:0009:5D1A
 * Called From: 176C:28D0:0024:58C9
 * Called From: 1A34:042C:0019:BEE7
 * Called From: 1A34:042C:000C:09F0
 * Called From: 1A34:1A94:0006:57C6
 * Called From: 1A34:1B96:0006:57C6
 */
void f__167E_0088_001A_60ED()
{
l__0088:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_ax, 0xC000);
	emu_cmpw(&emu_ax, 0x4000);
	if (emu_ax == 0x4000) goto l__00A2;
	emu_cmpw(&emu_ax, 0x8000);
	if (emu_ax == 0x8000) goto l__00A7;
	emu_cmpw(&emu_ax, 0xC000);
	if (emu_ax == 0xC000) goto l__00AC;
	goto l__00B1;
l__00A2:
	emu_ax = 0x2;
	goto l__00A5;
l__00A5:
	goto l__00B5;
l__00A7:
	emu_ax = 0x3;
	goto l__00A5;
l__00AC:
	emu_ax = 0x1;
	goto l__00A5;
l__00B1:
	emu_xorw(&emu_ax, emu_ax);
	goto l__00A5;
l__00B5:
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
 * @implements 167E:00E6:0005:34FD
 * @implements 167E:00EB:0004:13F2
 * @implements 167E:00EF:0004:893F
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
l__00B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_dx;
	emu_andw(&emu_ax, 0xC000);
	emu_cmpw(&emu_ax, 0xC000);
	if (emu_ax != 0xC000) goto l__00EB;
	emu_ax = emu_dx;
	emu_andw(&emu_ax, 0x3F00);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_dx;
	emu_andw(&emu_ax, 0x7E);
	emu_sarw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__00E6;
l__00E6:
	emu_andw(&emu_ax, 0x3FFF);
	goto l__00EF;
l__00EB:
	emu_ax = emu_dx;
	goto l__00E6;
l__00EF:
	emu_sp = emu_bp;
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
 * @implements 167E:0111:0025:96F6
 * @implements 167E:0134:0002:D3BA
 * @implements 167E:0136:0006:8BC7
 * @implements 167E:013C:0012:1FAD
 * @implements 167E:014E:0002:C4BA
 * @implements 167E:0150:0007:030A
 * @implements 167E:0153:0004:067A
 * @implements 167E:0157:0002:C03A
 * @implements 167E:0159:0004:83B9
 * @implements 167E:015D:0005:8BCF
 *
 * Called From: 0972:0A93:0017:2EC7
 * Called From: 0972:0BA9:0018:4D07
 * Called From: 0972:0BDE:0020:614B
 * Called From: 0972:0FF3:0017:BA46
 * Called From: 0972:131F:001D:FAC5
 * Called From: 0972:16CA:0008:A673
 * Called From: 0AEC:03D7:0005:BFC0
 * Called From: 0AEC:03D7:000C:BB87
 * Called From: 0AEC:057A:0022:5BD5
 * Called From: 0AEC:05B9:0010:37DB
 * Called From: 0C3A:2945:000F:A6A8
 * Called From: 0EDB:049E:0013:CDD0
 * Called From: 1391:033C:0008:A673
 * Called From: 1391:0642:0039:B7A1
 * Called From: 16C5:0673:0008:A673
 * Called From: 16C5:07CD:0025:40DD
 * Called From: 16C5:095D:0005:BFC0
 * Called From: 16C5:095D:0008:A673
 * Called From: 176C:0CC9:0008:A673
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
l__00F3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0111;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0136;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0150;
	goto l__0157;
l__0111:
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x3F);
	emu_shlw(&emu_ax, 0x1);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0xFC0);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x80);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, 0xC000);
	goto l__0134;
l__0134:
	goto l__015D;
l__0136:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__013C;
l__013C:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__014E;
	emu_ax = 0x4000;
	goto l__0153;
l__014E:
	goto l__0159;
l__0150:
	emu_ax = 0x8000;
	goto l__0153;
l__0153:
	emu_orw(&emu_ax, emu_si);
	goto l__0134;
l__0157:
	goto l__0159;
l__0159:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0134;
l__015D:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 167E:016F:0008:5829
 * @implements 167E:0177:0012:EE2A
 * @implements 167E:0189:0004:7DF2
 * @implements 167E:018B:0002:D53A
 * @implements 167E:018D:0006:8BC7
 * @implements 167E:0193:0002:C33A
 * @implements 167E:0195:0006:C49B
 * @implements 167E:019B:0012:B212
 * @implements 167E:01AD:0004:361F
 * @implements 167E:01B7:0004:DE52
 *
 * Called From: 06F7:02C6:000F:C338
 * Called From: 16C5:050F:003D:5378
 * Called From: 16C5:0735:0021:53DA
 * Called From: 176C:1562:000C:2379
 * Called From: 176C:1FA9:000D:5C7A
 */
void f__167E_0162_000D_A6D2()
{
l__0162:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x016F); f__167E_00B7_0034_F3DA();
	goto l__016F;
l__016F:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0177); f__167E_0088_001A_60ED();
	goto l__0177;
l__0177:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0189;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__018D;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0195;
	/* Unresolved jump */ emu_ip = 0x01B1; emu_last_cs = 0x167E; emu_last_ip = 0x0187; emu_last_length = 0x0012; emu_last_crc = 0xEE2A; emu_call();
l__0189:
	emu_ax = emu_si;
	goto l__018B;
l__018B:
	goto l__01B7;
l__018D:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0193); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__0193;
l__0193:
	goto l__019B;
l__0195:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019B); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	goto l__019B;
l__019B:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x01AD); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__01AD;
l__01AD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__018B;
l__01B7:
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
 * @implements 167E:01CB:0008:5880
 * @implements 167E:01D3:0013:5505
 * @implements 167E:01E6:0026:5B15
 * @implements 167E:020C:0004:6C1F
 * @implements 167E:020E:0002:F73A
 * @implements 167E:0210:0006:8BC7
 * @implements 167E:0216:000F:BFA9
 * @implements 167E:0225:0006:C49B
 * @implements 167E:022B:004B:0A01
 * @implements 167E:0276:0002:C03A
 * @implements 167E:0278:0006:6AA9
 * @implements 167E:027E:0006:F7CE
 *
 * Called From: 0972:1030:0008:180B
 * Called From: 0972:1262:0019:3598
 * Called From: 0C3A:22FD:000C:39D3
 * Called From: 0EDB:021D:000B:3104
 * Called From: 167E:03AF:0005:C0BA
 * Called From: 16C5:0599:000C:6B53
 * Called From: 16C5:07A8:000D:11BB
 * Called From: 176C:032C:0039:0847
 * Called From: 176C:03E6:0031:621B
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
l__01BB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x01CB); f__167E_00B7_0034_F3DA();
	goto l__01CB;
l__01CB:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x01D3); f__167E_0088_001A_60ED();
	goto l__01D3;
l__01D3:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__01E6;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0210;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0225;
	goto l__0276;
l__01E6:
	emu_ax = emu_di;
	emu_andw(&emu_ax, 0x3FFF);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x7F);
	emu_cl = 0x7;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x3F80);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x020C); emu_cs = 0x0F3F; emu_Tile_GetXY();
	goto l__020C;
l__020C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__020E;
l__020E:
	goto l__027E;
l__0210:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__0216;
l__0216:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	goto l__020E;
l__0225:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x022B); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	goto l__022B;
l__022B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x2E5C));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E5E));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__020E;
l__0276:
	goto l__0278;
l__0278:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__020E;
l__027E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 167E:0290:000B:9317
 * @implements 167E:029B:0007:9375
 * @implements 167E:02A2:0003:C81A
 * @implements 167E:02A3:0002:C33A
 * @implements 167E:02A5:0006:5EA9
 * @implements 167E:02AB:0003:2E57
 *
 * Called From: 06F7:00EE:0008:086B
 * Called From: 06F7:018F:000C:AE31
 * Called From: 06F7:02A2:000C:9030
 * Called From: 06F7:02A2:0016:E02E
 * Called From: 0972:0AAF:000A:8B0A
 * Called From: 0972:11EB:000C:47C7
 * Called From: 0AEC:043D:0010:8719
 * Called From: 0C10:01D1:0016:1D4B
 * Called From: 0EDB:0303:001E:F83C
 * Called From: 0EDB:0542:0006:9786
 * Called From: 176C:03B5:0013:F833
 * Called From: 176C:0D80:000D:5110
 * Called From: 176C:162B:000C:43CF
 * Called From: 176C:16FA:0009:D7CB
 * Called From: 176C:2566:0019:4894
 * Called From: 1A34:2640:0016:7F42
 * Called From: 1A34:2640:0024:2E24
 */
void f__167E_0284_000C_4C88()
{
l__0284:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0290); f__167E_0088_001A_60ED();
	goto l__0290;
l__0290:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__02A5;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x029B); f__167E_00B7_0034_F3DA();
	goto l__029B;
l__029B:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__02A2;
l__02A2:
	emu_pop(&emu_cx);
	goto l__02A3;
l__02A3:
	goto l__02AB;
l__02A5:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__02A3;
l__02AB:
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
 * @implements 167E:02BA:000B:92AC
 * @implements 167E:02C5:0007:DC29
 * @implements 167E:02CC:0003:C81A
 * @implements 167E:02CD:0002:C33A
 * @implements 167E:02CF:0006:5EA9
 * @implements 167E:02D5:0003:2E57
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
l__02AE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02BA); f__167E_0088_001A_60ED();
	goto l__02BA;
l__02BA:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax != 0x3) goto l__02CF;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02C5); f__167E_00B7_0034_F3DA();
	goto l__02C5;
l__02C5:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	goto l__02CC;
l__02CC:
	emu_pop(&emu_cx);
	goto l__02CD;
l__02CD:
	goto l__02D5;
l__02CF:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__02CD;
l__02D5:
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
 * @implements 167E:02E4:000D:1F6F
 * @implements 167E:02F1:0005:C100
 * @implements 167E:02F6:0007:DC29
 * @implements 167E:02FD:0003:C01A
 * @implements 167E:02FE:0002:CB3A
 * @implements 167E:0300:0005:011C
 * @implements 167E:0305:0007:9375
 * @implements 167E:030C:0002:B7BA
 * @implements 167E:030E:0002:C03A
 * @implements 167E:0310:0006:56A9
 * @implements 167E:0316:0003:2E57
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
l__02D8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02E4); f__167E_0088_001A_60ED();
	goto l__02E4;
l__02E4:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0300;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__02F1;
	goto l__030E;
l__02F1:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02F6); f__167E_00B7_0034_F3DA();
	goto l__02F6;
l__02F6:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02FD); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	goto l__02FD;
l__02FD:
	emu_pop(&emu_cx);
	goto l__02FE;
l__02FE:
	goto l__0316;
l__0300:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0305); f__167E_00B7_0034_F3DA();
	goto l__0305;
l__0305:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__030C;
l__030C:
	goto l__02FD;
l__030E:
	goto l__0310;
l__0310:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__02FE;
l__0316:
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
 * @implements 167E:0329:002B:09A6
 * @implements 167E:0354:0038:56F3
 * @implements 167E:038C:0009:AAB4
 * @implements 167E:0395:0016:379C
 * @implements 167E:03AB:0002:C2BA
 * @implements 167E:03AD:0005:C0BA
 * @implements 167E:03B2:001E:4E1D
 * @implements 167E:03D0:000B:8BBD
 * @implements 167E:03DB:0006:F7CE
 *
 * Called From: 0EDB:0276:0013:346E
 * Called From: 176C:15AB:0015:35C1
 */
void f__167E_0319_0010_B56F()
{
l__0319:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0329); f__167E_02AE_000C_CC85();
	goto l__0329;
l__0329:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__03AD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0354); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0354;
l__0354:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x44);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__038C;
l__038C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x34CD; ovl__34CD(19);
	goto l__0395;
l__0395:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x4);
	emu_andw(&emu_ax, 0x7);
	emu_shlw(&emu_ax, 0x1);
	emu_pop(&emu_bx);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_si, emu_get_memory16(emu_ds, emu_bx, 0x2CE2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__03AB;
l__03AB:
	goto l__03B2;
l__03AD:
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B2); f__167E_01BB_0010_85F6();
	goto l__03B2;
l__03B2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x03D0); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__03D0;
l__03D0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__03DB;
l__03DB:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
