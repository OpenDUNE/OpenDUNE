/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Tile_IsValid()
 *
 * @name emu_Tile_IsValid
 * @implements 0F3F:000D:0019:5076 ()
 * @implements 0F3F:0026:0004:E839
 * @implements 0F3F:0028:0002:C03A
 * @implements 0F3F:002A:0002:2597
 *
 * Called From: B4CD:06CF:0014:54A9
 */
void emu_Tile_IsValid()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_dx, 0xC000);
	emu_andw(&emu_ax, 0xC000);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) goto l__0026;
	emu_ax = 0x1;
	goto l__0028;
l__0026:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0028;
l__0028:
	goto l__002A;
l__002A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetXY()
 *
 * @name emu_Tile_GetXY
 * @implements 0F3F:002C:000B:51FA ()
 *
 * Called From: 06F7:0A3F:001D:1D75
 * Called From: 0F3F:0242:0008:46EE
 * Called From: 0F3F:0315:004B:E1B3
 * Called From: 167E:0207:0026:5B15
 * Called From: 176C:1196:0013:A1AD
 * Called From: 176C:1196:0015:D5F9
 * Called From: B4CD:010B:0009:A8DF
 */
void emu_Tile_GetXY()
{
l__002C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetPosXY()
 *
 * @name emu_Tile_GetPosXY
 * @implements 0F3F:0037:000F:E3D8 ()
 *
 * Called From: 16C5:0469:001B:4B24
 * Called From: B4CD:083A:000F:D6F6
 * Called From: B4CD:089E:0016:F6CE
 */
void emu_Tile_GetPosXY()
{
l__0037:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xchgb(&emu_al, &emu_ah);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xchgb(&emu_dl, &emu_dh);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetPosX()
 *
 * @name emu_Tile_GetPosX
 * @implements 0F3F:0046:000C:9E1E ()
 *
 * Called From: 16C5:0413:0023:C4F4
 * Called From: B4CD:05A4:000B:812D
 */
void emu_Tile_GetPosX()
{
l__0046:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xchgb(&emu_al, &emu_ah);
	emu_xorb(&emu_ah, emu_ah);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetPosY()
 *
 * @name emu_Tile_GetPosY
 * @implements 0F3F:0052:000C:9E02 ()
 *
 * Called From: 16C5:0427:0014:7049
 * Called From: B4CD:05B4:0010:4FF3
 */
void emu_Tile_GetPosY()
{
l__0052:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xchgb(&emu_al, &emu_ah);
	emu_xorb(&emu_ah, emu_ah);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetX()
 *
 * @name emu_Tile_GetX
 * @implements 0F3F:0076:0008:A51E ()
 *
 * Called From: 0F3F:013C:000D:6541
 * Called From: 0F3F:0156:000D:E12B
 * Called From: 0F3F:01C0:000A:AC18
 * Called From: 0F3F:02BB:000A:6D9A
 * Called From: 176C:1114:000E:633F
 * Called From: 176C:1134:0010:FEEC
 * Called From: B4CD:00B6:0016:24FA
 */
void emu_Tile_GetX()
{
l__0076:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetY()
 *
 * @name emu_Tile_GetY
 * @implements 0F3F:007E:0008:A4DE ()
 *
 * Called From: 0F3F:012F:000D:4868
 * Called From: 0F3F:0149:000D:2120
 * Called From: 0F3F:01CE:000E:EDD6
 * Called From: 0F3F:02CA:000F:1287
 * Called From: 0FE4:00A1:0010:976E
 * Called From: 0FE4:00A1:0018:0071
 * Called From: 0FE4:00B5:0014:B079
 * Called From: 176C:1124:0010:4ECA
 * Called From: 176C:1146:0012:4512
 * Called From: B4CD:00C5:000F:DDCF
 */
void emu_Tile_GetY()
{
l__007E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_PackTile()
 *
 * @name emu_Tile_PackTile
 * @implements 0F3F:0086:0017:EA43 ()
 *
 * Called From: 0642:0393:0009:3ADE
 * Called From: 06F7:002C:0011:E117
 * Called From: 06F7:002C:000E:BD07
 * Called From: 06F7:02B7:0015:A544
 * Called From: 06F7:04AE:000B:8922
 * Called From: 06F7:05C7:0031:20FF
 * Called From: 06F7:073E:0018:F05F
 * Called From: 06F7:08EB:0013:C78B
 * Called From: 06F7:0921:0013:C78B
 * Called From: 06F7:094D:002C:6E65
 * Called From: 06F7:0976:0014:1157
 * Called From: 06F7:0A7D:0016:FA05
 * Called From: 07D4:0621:0019:1306
 * Called From: 07D4:0963:0025:DC26
 * Called From: 07D4:0982:001F:FE51
 * Called From: 07D4:09AE:0019:1306
 * Called From: 07D4:0E8F:0028:D70C
 * Called From: 07D4:0EAE:001F:9139
 * Called From: 07D4:0F0E:0018:85E3
 * Called From: 07D4:1003:0025:DC26
 * Called From: 07D4:1022:001F:FE51
 * Called From: 07D4:104E:0019:1306
 * Called From: 0972:1038:0008:BAF2
 * Called From: 0972:104E:0016:DE64
 * Called From: 0972:1537:0018:014D
 * Called From: 0972:15B6:0019:AB1E
 * Called From: 0972:16C2:000A:CB50
 * Called From: 0AEC:002F:001F:3C46
 * Called From: 0C3A:097C:0028:6D6C
 * Called From: 0C3A:09FA:001D:98C0
 * Called From: 0C3A:1020:0010:1489
 * Called From: 0C3A:115D:0039:970B
 * Called From: 0C3A:24BB:0009:3ADE
 * Called From: 0EDB:0483:0032:B7E5
 * Called From: 0F78:0398:0010:1771
 * Called From: 0F78:0398:0012:7BE7
 * Called From: 151A:001C:0013:5840
 * Called From: 151A:0165:0034:AEFE
 * Called From: 151A:0323:0018:831F
 * Called From: 151A:03FC:0014:6217
 * Called From: 151A:0481:0017:2508
 * Called From: 151A:0549:0028:A3A6
 * Called From: 151A:060C:001D:0441
 * Called From: 167E:01A8:0012:B212
 * Called From: 167E:034F:002B:09A6
 * Called From: 16C5:066B:000A:CB50
 * Called From: 16C5:0747:0012:7F5F
 * Called From: 16C5:092B:000A:CB50
 * Called From: 16C5:0955:000F:345F
 * Called From: 176C:04E5:001C:D8DA
 * Called From: 176C:04E5:001F:EDCB
 * Called From: 176C:0AAA:0009:3ADE
 * Called From: 176C:0CC1:0024:C63E
 * Called From: 176C:0D17:0018:47A5
 * Called From: 176C:0F65:0017:D921
 * Called From: 176C:14B3:0020:094B
 * Called From: 176C:1F9C:0011:1BC3
 * Called From: 176C:22E1:0009:3ADE
 * Called From: 176C:22FD:0012:5BD5
 * Called From: 176C:2712:0011:1BC3
 * Called From: 176C:28FF:000A:CB50
 * Called From: 176C:2AE2:0014:B34A
 * Called From: 1A34:016C:0011:25DB
 * Called From: 1A34:040B:000B:4959
 * Called From: 1A34:043D:0011:C8E7
 * Called From: 1A34:05A9:001B:8929
 * Called From: 1A34:05CC:0023:F92D
 * Called From: 1A34:0C41:0029:43CA
 * Called From: 1A34:0E66:0028:1D74
 * Called From: 1A34:1269:0010:14B9
 * Called From: 1A34:1297:0010:14B9
 * Called From: 1A34:12D7:0015:EDBF
 * Called From: 1A34:1373:002A:789C
 * Called From: 1A34:1510:0010:14B9
 * Called From: 1A34:154A:002A:E54A
 * Called From: 1A34:1707:0014:4C64
 * Called From: 1A34:1B1E:001A:C543
 * Called From: 1A34:2895:0027:D7D0
 * Called From: 1A34:29FD:002C:34BE
 * Called From: 1A34:2FFD:001F:2746
 * Called From: 1A34:3470:0014:BCA2
 * Called From: B483:002E:001A:284C
 * Called From: B4B5:056D:0021:D3B7
 * Called From: B4B8:0563:000A:CB50
 * Called From: B4CD:0235:001C:3ED6
 * Called From: B4CD:024A:0015:6D4D
 * Called From: B4CD:043E:001C:06C2
 * Called From: B4CD:06E0:0011:DCE0
 * Called From: B4CD:0802:0013:6862
 * Called From: B4CD:1A6E:000A:CB50
 * Called From: B4CD:1CAC:000A:CB50
 */
void emu_Tile_PackTile()
{
l__0086:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xorb(&emu_bl, emu_bl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xorb(&emu_al, emu_al);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_orb(&emu_al, emu_bh);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_Unpack()
 *
 * @name emu_Tile_Unpack
 * @implements 0F3F:009D:0017:8464 ()
 *
 * Called From: 0972:0D62:0015:DD16
 * Called From: 0972:10B1:0008:04B9
 * Called From: 0972:10BC:000B:281A
 * Called From: 0972:1574:001E:7AB4
 * Called From: 0972:1615:0009:0491
 * Called From: 0C3A:0296:006B:40B4
 * Called From: 0C3A:03AF:006A:8924
 * Called From: 0C3A:04AC:006A:E922
 * Called From: 0C3A:0545:0018:2318
 * Called From: 0C3A:0586:0039:9E74
 * Called From: 0C3A:0586:000E:D924
 * Called From: 1391:02F5:0008:0AE5
 * Called From: 167E:03A6:0016:379C
 * Called From: 1A34:2349:0008:0AE5
 * Called From: B4B5:0503:0008:0AE5
 * Called From: B4B8:0551:000C:B6C6
 * Called From: B4CD:1516:0036:B84B
 * Called From: B4CD:16F4:000F:CF15
 * Called From: B4CD:1C9A:001A:031C
 * Called From: B4CD:1C9A:0017:2D16
 */
void emu_Tile_Unpack()
{
l__009D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_ax;
	emu_shlw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, 0x1);
	emu_dl = 0x80;
	emu_andw(&emu_ax, 0x3F);
	emu_xchgb(&emu_al, &emu_ah);
	emu_al = 0x80;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetDistance()
 *
 * @name emu_Tile_GetDistance
 * @implements 0F3F:00B4:002A:89B2 ()
 * @implements 0F3F:00C5:0019:7495
 * @implements 0F3F:00D1:000D:D00B
 * @implements 0F3F:00D6:0008:643C
 *
 * Called From: 06F7:0088:002E:4089
 * Called From: 06F7:044D:0016:DBF2
 * Called From: 0972:0F38:001C:C333
 * Called From: 0972:1270:000E:E53D
 * Called From: 0C3A:2397:005A:53AA
 * Called From: 0C3A:23B5:0016:3ADC
 * Called From: 0C3A:23B5:001E:17E0
 * Called From: 0EDB:0231:0014:ECFD
 * Called From: 0F3F:0114:0013:C3B8
 * Called From: 167E:03CB:001E:4E1D
 * Called From: 16C5:02D7:0028:C684
 * Called From: 16C5:0336:0033:424B
 * Called From: 16C5:08B4:0016:8B23
 * Called From: 176C:10E6:0018:D147
 * Called From: 1A34:015B:001F:F414
 * Called From: 1A34:015B:0016:17F2
 * Called From: 1A34:02BA:0022:BC63
 * Called From: 1A34:02BA:0037:505C
 * Called From: 1A34:144E:0029:435F
 * Called From: 1A34:1471:001B:B989
 * Called From: 1A34:21A9:0033:EFF3
 * Called From: 1A34:25F3:0016:9136
 * Called From: 1A34:3389:0025:D9FB
 * Called From: 1A34:3404:001B:E20F
 */
void emu_Tile_GetDistance()
{
l__00B4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_subw(&emu_ax, emu_bx);
	if (emu_flags.sf) {
		emu_negw(&emu_ax, emu_ax);
	}
	goto l__00C5;
l__00C5:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_subw(&emu_bx, emu_cx);
	if (emu_flags.sf) {
		emu_negw(&emu_bx, emu_bx);
	}
	goto l__00D1;
l__00D1:
	emu_cmpw(&emu_ax, emu_bx);
	if ((int16)emu_ax <= (int16)emu_bx) {
		emu_xchgw(&emu_ax, &emu_bx);
	}
	goto l__00D6;
l__00D6:
	emu_shrw(&emu_bx, 0x1);
	emu_addw(&emu_ax, emu_bx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_AddTileDiff()
 *
 * @name emu_Tile_AddTileDiff
 * @implements 0F3F:00F3:0011:5E67 ()
 *
 * Called From: 0C3A:1378:002F:8FCE
 * Called From: B4CD:06BB:0011:F3CE
 */
void emu_Tile_AddTileDiff()
{
l__00F3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0104_0013_C3B8()
 *
 * @name f__0F3F_0104_0013_C3B8
 * @implements 0F3F:0104:0013:C3B8 ()
 * @implements 0F3F:0117:000C:A15F
 * @implements 0F3F:0123:0002:2597
 *
 * Called From: 0C3A:22A1:0043:67B1
 * Called From: 16C5:04C1:002E:4299
 * Called From: 16C5:05BC:0023:DF62
 * Called From: 16C5:05E2:0026:0FE7
 * Called From: 16C5:05FF:001D:B1ED
 * Called From: 176C:0DE2:001C:A05B
 * Called From: 176C:2A2B:003A:2332
 * Called From: 1A34:12C2:001B:E25C
 * Called From: 1A34:15BA:001B:E25C
 * Called From: 1A34:15BA:001F:1633
 * Called From: 1A34:15BA:0033:7AA7
 * Called From: B4CD:08B7:0019:A93A
 */
void f__0F3F_0104_0013_C3B8()
{
l__0104:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0117); emu_Tile_GetDistance();
	goto l__0117;
l__0117:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0x80);
	emu_cl = 0x8;
	emu_sarw(&emu_ax, emu_cl);
	goto l__0123;
l__0123:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0125_000D_4868()
 *
 * @name f__0F3F_0125_000D_4868
 * @implements 0F3F:0125:000D:4868 ()
 * @implements 0F3F:0132:000D:6541
 * @implements 0F3F:013F:000D:2120
 * @implements 0F3F:014C:000D:E12B
 * @implements 0F3F:0159:0008:1751
 * @implements 0F3F:0161:0005:852E
 * @implements 0F3F:0166:0002:2597
 *
 * Called From: 0972:0DBD:003A:00C4
 * Called From: 0972:10C4:0008:8AD8
 * Called From: 1423:0AF1:002C:6E18
 * Called From: 167E:0387:0038:56F3
 * Called From: 16C5:08F0:0019:EFED
 * Called From: 176C:0340:0014:B1B8
 * Called From: 176C:040E:0023:D191
 * Called From: 176C:040E:0011:2BE9
 * Called From: 176C:11DD:0011:5E38
 * Called From: 176C:15DC:0017:0BB3
 * Called From: 176C:1A0E:0014:B1B8
 * Called From: 176C:1A84:001E:596A
 * Called From: 176C:1B90:0014:B1B8
 * Called From: 176C:1CDC:0030:808F
 * Called From: 1A34:2370:001A:C4B6
 * Called From: 1A34:2564:0011:ABE2
 * Called From: 1A34:26B8:0011:ABE2
 */
void f__0F3F_0125_000D_4868()
{
l__0125:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0132); emu_Tile_GetY();
	goto l__0132;
l__0132:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x013F); emu_Tile_GetX();
	goto l__013F;
l__013F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x014C); emu_Tile_GetY();
	goto l__014C;
l__014C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0159); emu_Tile_GetX();
	goto l__0159;
l__0159:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0161); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0000_0022_1807();
	goto l__0161;
l__0161:
	emu_addw(&emu_sp, 0x8);
	goto l__0166;
l__0166:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0168_0010_C9EF()
 *
 * @name f__0F3F_0168_0010_C9EF
 * @implements 0F3F:0168:0010:C9EF ()
 * @implements 0F3F:0178:0008:AFA3
 * @implements 0F3F:0180:0008:6FA8
 * @implements 0F3F:0188:0008:AFA7
 * @implements 0F3F:0190:0008:77D3
 * @implements 0F3F:0198:0005:852E
 * @implements 0F3F:019D:0004:DE52
 *
 * Called From: 1319:008F:0009:C4BD
 * Called From: 1319:00EB:0007:1BD6
 * Called From: 1319:01A0:0007:1BD6
 * Called From: B4CD:1C46:000E:D7F5
 */
void f__0F3F_0168_0010_C9EF()
{
l__0168:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0178); emu_Tile_GetPackY();
	goto l__0178;
l__0178:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0180); emu_Tile_GetPackX();
	goto l__0180;
l__0180:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0188); emu_Tile_GetPackY();
	goto l__0188;
l__0188:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0190); emu_Tile_GetPackX();
	goto l__0190;
l__0190:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0198); emu_cs = 0x07C4; f__07C4_001A_0045_DCB4();
	goto l__0198;
l__0198:
	emu_addw(&emu_sp, 0x8);
	goto l__019D;
l__019D:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_01A1_0018_9631()
 *
 * @name f__0F3F_01A1_0018_9631
 * @implements 0F3F:01A1:0018:9631 ()
 * @implements 0F3F:01B0:0009:056A
 * @implements 0F3F:01B6:0003:9D0D
 * @implements 0F3F:01B9:000A:AC18
 * @implements 0F3F:01C3:000E:EDD6
 * @implements 0F3F:01D1:000A:B69E
 * @implements 0F3F:01DB:0008:9FC8
 * @implements 0F3F:01E3:0010:CF58
 * @implements 0F3F:01E6:000D:1051
 * @implements 0F3F:01F3:004A:55D2
 * @implements 0F3F:023A:0003:A2BC
 * @implements 0F3F:023D:0008:46EE
 * @implements 0F3F:0245:0018:281D
 * @implements 0F3F:025D:0012:D28A
 * @implements 0F3F:0266:0009:FB31
 * @implements 0F3F:026F:0006:F7CE
 *
 * Called From: 0972:16B8:001F:6F53
 * Called From: 16C5:0661:0023:559B
 * Called From: 176C:1435:002A:1CFB
 * Called From: 176C:23FE:001A:7B69
 * Called From: 176C:28F5:001D:FB78
 * Called From: 1A34:261C:0014:85AF
 * Called From: 1A34:261C:0017:79E6
 * Called From: B4B8:0559:0008:CAD0
 * Called From: B4CD:16FC:0008:CAD0
 * Called From: B4CD:1A64:0029:FA07
 */
void f__0F3F_01A1_0018_9631()
{
l__01A1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__01B9;
	goto l__01B0;
l__01B0:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__01B6;
l__01B6:
	goto l__026F;
l__01B9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01C3); emu_Tile_GetX();
	goto l__01C3;
l__01C3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01D1); emu_Tile_GetY();
	goto l__01D1;
l__01D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__01DB;
l__01DB:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__01E6;
l__01E3:
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	goto l__01E6;
l__01E6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) > emu_si) goto l__01E3;
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__01F3;
l__01F3:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3C4C);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_cl = 0x7;
	emu_sarw(&emu_ax, emu_cl);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_di;
	emu_addw(&emu_dx, emu_ax);
	emu_di = emu_dx;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3D4C);
	emu_ax = (int8)emu_al;
	emu_negw(&emu_ax, emu_ax);
	emu_imuluw(&emu_ax, emu_si);
	emu_cl = 0x7;
	emu_sarw(&emu_ax, emu_cl);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_cmpw(&emu_di, 0x4000);
	if (emu_di <= 0x4000) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
		if (emu_get_memory16(emu_ss, emu_bp, -0x2) <= 0x4000) goto l__023D;
	}
	goto l__023A;
l__023A:
	goto l__01B0;
l__023D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0245); emu_Tile_GetXY();
	goto l__0245;
l__0245:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__0266;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x025D); emu_Tile_Center();
	goto l__025D;
l__025D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__0266;
l__0266:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__01B6;
l__026F:
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
 * Decompiled function emu_Tile_Center()
 *
 * @name emu_Tile_Center
 * @implements 0F3F:0275:0019:64C3 ()
 *
 * Called From: 0642:038A:002F:5F80
 * Called From: 0642:038A:0018:8AC7
 * Called From: 0972:0D6A:0008:8ABD
 * Called From: 0C3A:24B2:0028:5D23
 * Called From: 0F3F:025A:0018:281D
 * Called From: 176C:0AA1:0018:34CB
 * Called From: 176C:0AD0:0011:2B8C
 * Called From: 176C:22D8:0019:80C9
 * Called From: 1A34:2991:002B:7552
 */
void emu_Tile_Center()
{
l__0275:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_ax, 0xFF00);
	emu_addw(&emu_ax, 0x80);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_dx, 0xFF00);
	emu_addw(&emu_dx, 0x80);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_028E_0015_1153()
 *
 * @name f__0F3F_028E_0015_1153
 * @implements 0F3F:028E:0015:1153 ()
 * @implements 0F3F:02A3:0011:3834
 * @implements 0F3F:02A6:000E:64CB
 * @implements 0F3F:02B2:0002:F43A
 * @implements 0F3F:02B4:000A:6D9A
 * @implements 0F3F:02BE:000F:1287
 * @implements 0F3F:02CD:004B:E1B3
 * @implements 0F3F:0318:0004:101F
 * @implements 0F3F:031C:0006:F7CE
 *
 * Called From: 16C5:0921:000F:9BA4
 * Called From: 16C5:0921:001E:7ACA
 * Called From: 1A34:0061:0035:A18F
 * Called From: 1A34:26D0:0018:5400
 * Called From: 1A34:26EB:001B:C457
 * Called From: B4CD:1CA2:0008:3AB2
 */
void f__0F3F_028E_0015_1153()
{
l__028E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_si, 0xFF);
	if (emu_si >= 0xFF) goto l__02A3;
	emu_ax = emu_si;
	goto l__02A6;
l__02A3:
	emu_ax = 0xFF;
	goto l__02A6;
l__02A6:
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__02B4;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__02B2;
l__02B2:
	goto l__031C;
l__02B4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02BE); emu_Tile_GetX();
	goto l__02BE;
l__02BE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02CD); emu_Tile_GetY();
	goto l__02CD;
l__02CD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_bx, 0xFF);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3C4C);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_di = emu_ax;
	emu_addw(&emu_di, 0x40);
	emu_cl = 0x7;
	emu_sarw(&emu_di, emu_cl);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_bx, 0xFF);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3D4C);
	emu_ax = (int8)emu_al;
	emu_negw(&emu_ax, emu_ax);
	emu_imuluw(&emu_ax, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
	emu_cl = 0x7;
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0318); emu_Tile_GetXY();
	goto l__0318;
l__0318:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__02B2;
l__031C:
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
 * Decompiled function emu_Tile_GetPackX()
 *
 * @name emu_Tile_GetPackX
 * @implements 0F3F:0322:0011:5AAA ()
 * @implements 0F3F:0333:0002:2597
 *
 * Called From: 07D4:006D:0009:B0BE
 * Called From: 07D4:0087:000D:8CA0
 * Called From: 07D4:0813:0009:BD42
 * Called From: 07D4:081E:000B:84B1
 * Called From: 07D4:1642:0008:04D1
 * Called From: 0AEC:0240:0022:AED2
 * Called From: 0F3F:017D:0008:AFA3
 * Called From: 0F3F:018D:0008:AFA7
 * Called From: 0F78:00AC:0006:BB3C
 * Called From: 0F78:043E:000E:32E0
 * Called From: B4B8:08FC:000B:6174
 * Called From: B4CD:081F:0008:E4D2
 * Called From: B4CD:090D:002B:DC75
 * Called From: B4CD:0919:000C:28CD
 * Called From: B4CD:0C78:0016:6AD3
 * Called From: B4CD:0FA2:0006:BB3C
 * Called From: B4CD:1180:000D:B1D5
 * Called From: B4CD:12C4:0006:BB3C
 * Called From: B4CD:13FC:0016:BAD0
 * Called From: B4CD:1562:0006:BF3C
 * Called From: B4CD:1B67:0011:08DE
 * Called From: B4CD:1B7D:000D:8FA0
 */
void emu_Tile_GetPackX()
{
l__0322:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_ax, 0x3F);
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__0333;
l__0333:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetPackY()
 *
 * @name emu_Tile_GetPackY
 * @implements 0F3F:0335:0015:2275 ()
 * @implements 0F3F:034A:0002:2597
 *
 * Called From: 07D4:007A:000D:FD25
 * Called From: 07D4:0096:000F:1144
 * Called From: 07D4:0831:0013:FB83
 * Called From: 07D4:083C:000B:F4B0
 * Called From: 07D4:164E:000C:40AE
 * Called From: 0AEC:0250:0010:9E2E
 * Called From: 0F3F:0175:0010:C9EF
 * Called From: 0F3F:0185:0008:6FA8
 * Called From: 0F78:00E1:0035:3DDF
 * Called From: 0F78:0455:0017:6AE3
 * Called From: B4B8:08F1:0006:CB3D
 * Called From: B4CD:082B:000C:A0AF
 * Called From: B4CD:0925:000C:58F5
 * Called From: B4CD:0931:000C:58F4
 * Called From: B4CD:0C84:000C:B8A9
 * Called From: B4CD:0FAB:0009:C1E1
 * Called From: B4CD:118B:000B:7663
 * Called From: B4CD:12CD:0009:C1E1
 * Called From: B4CD:1408:000C:A8AF
 * Called From: B4CD:156C:000A:1EC9
 * Called From: B4CD:1B70:0009:C1E1
 * Called From: B4CD:1B8A:000D:FF21
 */
void emu_Tile_GetPackY()
{
l__0335:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x6;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0x3F);
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__034A;
l__034A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_PackXY()
 *
 * @name emu_Tile_PackXY
 * @implements 0F3F:034C:0012:18EA ()
 * @implements 0F3F:035E:0002:2597
 *
 * Called From: 0AEC:0343:0009:A8A9
 * Called From: 0F78:0219:0007:5B94
 * Called From: 0F78:052A:0009:23D1
 * Called From: 0F78:052A:0024:7C89
 * Called From: 16C5:051A:000B:9CBA
 * Called From: B4B8:015B:0014:309A
 * Called From: B4B8:01D0:0021:1F5E
 * Called From: B4B8:01F6:0026:1563
 * Called From: B4B8:0507:0009:FC28
 * Called From: B4B8:0906:000A:9283
 * Called From: B4B8:09C4:0013:F1B4
 * Called From: B4CD:0615:0036:E0ED
 * Called From: B4CD:0888:0033:37A1
 * Called From: B4CD:125B:0009:23D1
 * Called From: B4CD:125B:0015:24F3
 * Called From: B4CD:1595:0013:97E3
 * Called From: B4CD:18CD:0006:433A
 * Called From: B4CD:18CD:0014:F426
 */
void emu_Tile_PackXY()
{
l__034C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x6;
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__035E;
l__035E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tile_GetDistanceOffset()
 *
 * @name emu_Tile_GetDistanceOffset
 * @implements 0F3F:0360:0038:97C0 ()
 * @implements 0F3F:0378:0020:E837
 * @implements 0F3F:038A:000E:E0AD
 * @implements 0F3F:038F:0009:FB77
 *
 * Called From: 06F7:02CD:0007:838A
 * Called From: 0C3A:258E:0027:DC19
 * Called From: 0C3A:25A1:000C:9CB0
 * Called From: 0C3A:25A1:0013:A3B5
 * Called From: 16C5:0522:0008:DA8A
 * Called From: 176C:207B:0009:68BB
 * Called From: B483:0036:0008:DA8A
 * Called From: B4CD:0A71:0009:A4FD
 * Called From: B4CD:15A3:000E:56C5
 * Called From: B4CD:1C38:0009:A4FE
 */
void emu_Tile_GetDistanceOffset()
{
l__0360:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_dx);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_ax, 0x3F);
	emu_andw(&emu_bx, 0x3F);
	emu_subw(&emu_ax, emu_bx);
	if (emu_flags.sf) {
		emu_negw(&emu_ax, emu_ax);
	}
	goto l__0378;
l__0378:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x6;
	emu_shrw(&emu_bx, emu_cl);
	emu_shrw(&emu_dx, emu_cl);
	emu_subw(&emu_bx, emu_dx);
	if (emu_flags.sf) {
		emu_negw(&emu_bx, emu_bx);
	}
	goto l__038A;
l__038A:
	emu_cmpw(&emu_ax, emu_bx);
	if ((int16)emu_ax <= (int16)emu_bx) {
		emu_xchgw(&emu_ax, &emu_bx);
	}
	goto l__038F;
l__038F:
	emu_shrw(&emu_bx, 0x1);
	emu_addw(&emu_ax, emu_bx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_dx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
