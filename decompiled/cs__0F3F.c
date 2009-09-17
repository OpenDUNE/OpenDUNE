/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0F3F_000D_0019_5076()
 *
 * @name f__0F3F_000D_0019_5076
 * @implements 0F3F:000D:0019:5076 ()
 *
 * Called From: B4CD:06CF:0014:54A9
 */
void f__0F3F_000D_0019_5076()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_dx.x, 0xC000);
	emu_andw(&emu_ax.x, 0xC000);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__0F3F_0026_0004_E839(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0F3F_0028_0002_C03A(); return;
}

/**
 * Decompiled function f__0F3F_0026_0004_E839()
 *
 * @name f__0F3F_0026_0004_E839
 * @implements 0F3F:0026:0004:E839 ()
 *
 * Called From: 0F3F:001F:0019:5076
 */
void f__0F3F_0026_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0F3F_002A_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_0028_0002_C03A()
 *
 * @name f__0F3F_0028_0002_C03A
 * @implements 0F3F:0028:0002:C03A ()
 *
 * Called From: 0F3F:0024:0019:5076
 */
void f__0F3F_0028_0002_C03A()
{
	f__0F3F_002A_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_002A_0002_2597()
 *
 * @name f__0F3F_002A_0002_2597
 * @implements 0F3F:002A:0002:2597 ()
 *
 * Called From: 0F3F:0028:0004:E839
 * Called From: 0F3F:0028:0002:C03A
 */
void f__0F3F_002A_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_002C_000B_51FA()
 *
 * @name f__0F3F_002C_000B_51FA
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
void f__0F3F_002C_000B_51FA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0037_000F_E3D8()
 *
 * @name f__0F3F_0037_000F_E3D8
 * @implements 0F3F:0037:000F:E3D8 ()
 *
 * Called From: B4CD:083A:000F:D6F6
 * Called From: B4CD:089E:0016:F6CE
 */
void f__0F3F_0037_000F_E3D8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xchgb(&emu_dx.l, &emu_dx.h);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0046_000C_9E1E()
 *
 * @name f__0F3F_0046_000C_9E1E
 * @implements 0F3F:0046:000C:9E1E ()
 *
 * Called From: B4CD:05A4:000B:812D
 */
void f__0F3F_0046_000C_9E1E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0052_000C_9E02()
 *
 * @name f__0F3F_0052_000C_9E02
 * @implements 0F3F:0052:000C:9E02 ()
 *
 * Called From: B4CD:05B4:0010:4FF3
 */
void f__0F3F_0052_000C_9E02()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0076_0008_A51E()
 *
 * @name f__0F3F_0076_0008_A51E
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
void f__0F3F_0076_0008_A51E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_007E_0008_A4DE()
 *
 * @name f__0F3F_007E_0008_A4DE
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
void f__0F3F_007E_0008_A4DE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0086_0017_EA43()
 *
 * @name f__0F3F_0086_0017_EA43
 * @implements 0F3F:0086:0017:EA43 ()
 *
 * Called From: 0642:0393:0009:3ADE
 * Called From: 06F7:002C:0011:E117
 * Called From: 06F7:02B7:0015:A544
 * Called From: 06F7:04AE:000B:8922
 * Called From: 06F7:05C7:0031:20FF
 * Called From: 06F7:073E:0018:F05F
 * Called From: 06F7:08EB:0013:C78B
 * Called From: 06F7:0921:0013:C78B
 * Called From: 06F7:0A7D:0016:FA05
 * Called From: 07D4:0963:0025:DC26
 * Called From: 07D4:0982:001F:FE51
 * Called From: 07D4:09AE:0019:1306
 * Called From: 07D4:0E8F:0028:D70C
 * Called From: 07D4:0EAE:001F:9139
 * Called From: 07D4:0F0E:0018:85E3
 * Called From: 07D4:1003:0025:DC26
 * Called From: 07D4:1022:001F:FE51
 * Called From: 07D4:104E:0019:1306
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
 * Called From: 176C:04E5:001C:D8DA
 * Called From: 176C:04E5:001F:EDCB
 * Called From: 176C:14B3:0020:094B
 * Called From: 176C:1F9C:0011:1BC3
 * Called From: 176C:22E1:0009:3ADE
 * Called From: 176C:22FD:0012:5BD5
 * Called From: 176C:2712:0011:1BC3
 * Called From: 1A34:016C:0011:25DB
 * Called From: 1A34:040B:000B:4959
 * Called From: 1A34:0E66:0028:1D74
 * Called From: 1A34:1297:0010:14B9
 * Called From: 1A34:12D7:0015:EDBF
 * Called From: 1A34:1373:002A:789C
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
 */
void f__0F3F_0086_0017_EA43()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorb(&emu_bx.l, emu_bx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_shrw(&emu_ax.x, 0x1);
	emu_shrw(&emu_ax.x, 0x1);
	emu_orb(&emu_ax.l, emu_bx.h);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_009D_0017_8464()
 *
 * @name f__0F3F_009D_0017_8464
 * @implements 0F3F:009D:0017:8464 ()
 *
 * Called From: 0972:0D62:0015:DD16
 * Called From: 0972:1574:001E:7AB4
 * Called From: 0972:1615:0009:0491
 * Called From: 0C3A:03AF:006A:8924
 * Called From: 0C3A:0545:0018:2318
 * Called From: 0C3A:0586:0039:9E74
 * Called From: 167E:03A6:0016:379C
 * Called From: 1A34:2349:0008:0AE5
 * Called From: B4B5:0503:0008:0AE5
 * Called From: B4B8:0551:000C:B6C6
 */
void f__0F3F_009D_0017_8464()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shlw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, 0x1);
	emu_movb(&emu_dx.l, 0x80);
	emu_andw(&emu_ax.x, 0x3F);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, 0x80);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_00B4_002A_89B2()
 *
 * @name f__0F3F_00B4_002A_89B2
 * @implements 0F3F:00B4:002A:89B2 ()
 *
 * Called From: 06F7:0088:002E:4089
 * Called From: 0C3A:2397:005A:53AA
 * Called From: 0EDB:0231:0014:ECFD
 * Called From: 0F3F:0114:0013:C3B8
 * Called From: 167E:03CB:001E:4E1D
 * Called From: 176C:10E6:0018:D147
 * Called From: 1A34:015B:001F:F414
 * Called From: 1A34:015B:0016:17F2
 * Called From: 1A34:02BA:0022:BC63
 * Called From: 1A34:02BA:0037:505C
 * Called From: 1A34:144E:0029:435F
 * Called From: 1A34:21A9:0033:EFF3
 * Called From: 1A34:3404:001B:E20F
 */
void f__0F3F_00B4_002A_89B2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.sf) { f__0F3F_00C5_0019_7495(); return; }
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_bx.x, emu_cx.x);
	if (!emu_flags.sf) { f__0F3F_00D1_000D_D00B(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_00D6_0008_643C(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_00C5_0019_7495()
 *
 * @name f__0F3F_00C5_0019_7495
 * @implements 0F3F:00C5:0019:7495 ()
 *
 * Called From: 0F3F:00C1:002A:89B2
 */
void f__0F3F_00C5_0019_7495()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_bx.x, emu_cx.x);
	if (!emu_flags.sf) { f__0F3F_00D1_000D_D00B(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_00D6_0008_643C(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_00D1_000D_D00B()
 *
 * @name f__0F3F_00D1_000D_D00B
 * @implements 0F3F:00D1:000D:D00B ()
 *
 * Called From: 0F3F:00CD:0019:7495
 * Called From: 0F3F:00CD:002A:89B2
 */
void f__0F3F_00D1_000D_D00B()
{
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_00D6_0008_643C(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_00D6_0008_643C()
 *
 * @name f__0F3F_00D6_0008_643C
 * @implements 0F3F:00D6:0008:643C ()
 *
 * Called From: 0F3F:00D3:000D:D00B
 * Called From: 0F3F:00D3:0019:7495
 * Called From: 0F3F:00D3:002A:89B2
 */
void f__0F3F_00D6_0008_643C()
{
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_00F3_0011_5E67()
 *
 * @name f__0F3F_00F3_0011_5E67
 * @implements 0F3F:00F3:0011:5E67 ()
 *
 * Called From: 0C3A:1378:002F:8FCE
 * Called From: B4CD:06BB:0011:F3CE
 */
void f__0F3F_00F3_0011_5E67()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
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
 *
 * Called From: 0C3A:22A1:0043:67B1
 * Called From: 176C:2A2B:003A:2332
 * Called From: 1A34:12C2:001B:E25C
 * Called From: B4CD:08B7:0019:A93A
 */
void f__0F3F_0104_0013_C3B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0117); f__0F3F_00B4_002A_89B2();
	f__0F3F_0117_000C_A15F();
}

/**
 * Decompiled function f__0F3F_0117_000C_A15F()
 *
 * @name f__0F3F_0117_000C_A15F
 * @implements 0F3F:0117:000C:A15F ()
 *
 * Called From: 0F3F:0117:0013:C3B8
 */
void f__0F3F_0117_000C_A15F()
{
	emu_addws(&emu_sp, 0x8);
	emu_addw(&emu_ax.x, 0x80);
	emu_movb(&emu_cx.l, 0x8);
	emu_sarw(&emu_ax.x, emu_cx.l);
	f__0F3F_0123_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_0123_0002_2597()
 *
 * @name f__0F3F_0123_0002_2597
 * @implements 0F3F:0123:0002:2597 ()
 *
 * Called From: 0F3F:0121:000C:A15F
 */
void f__0F3F_0123_0002_2597()
{
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
 *
 * Called From: 0972:0DBD:003A:00C4
 * Called From: 1423:0AF1:002C:6E18
 * Called From: 167E:0387:0038:56F3
 * Called From: 176C:040E:0023:D191
 * Called From: 176C:11DD:0011:5E38
 * Called From: 176C:15DC:0017:0BB3
 * Called From: 176C:1A0E:0014:B1B8
 * Called From: 176C:1B90:0014:B1B8
 * Called From: 176C:1CDC:0030:808F
 * Called From: 1A34:2370:001A:C4B6
 * Called From: 1A34:2564:0011:ABE2
 * Called From: 1A34:26B8:0011:ABE2
 */
void f__0F3F_0125_000D_4868()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0132); f__0F3F_007E_0008_A4DE();
	f__0F3F_0132_000D_6541();
}

/**
 * Decompiled function f__0F3F_0132_000D_6541()
 *
 * @name f__0F3F_0132_000D_6541
 * @implements 0F3F:0132:000D:6541 ()
 *
 * Called From: 0F3F:0132:000D:4868
 */
void f__0F3F_0132_000D_6541()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x013F); f__0F3F_0076_0008_A51E();
	f__0F3F_013F_000D_2120();
}

/**
 * Decompiled function f__0F3F_013F_000D_2120()
 *
 * @name f__0F3F_013F_000D_2120
 * @implements 0F3F:013F:000D:2120 ()
 *
 * Called From: 0F3F:013F:000D:6541
 */
void f__0F3F_013F_000D_2120()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x014C); f__0F3F_007E_0008_A4DE();
	f__0F3F_014C_000D_E12B();
}

/**
 * Decompiled function f__0F3F_014C_000D_E12B()
 *
 * @name f__0F3F_014C_000D_E12B
 * @implements 0F3F:014C:000D:E12B ()
 *
 * Called From: 0F3F:014C:000D:2120
 */
void f__0F3F_014C_000D_E12B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0159); f__0F3F_0076_0008_A51E();
	f__0F3F_0159_0008_1751();
}

/**
 * Decompiled function f__0F3F_0159_0008_1751()
 *
 * @name f__0F3F_0159_0008_1751
 * @implements 0F3F:0159:0008:1751 ()
 *
 * Called From: 0F3F:0159:000D:E12B
 */
void f__0F3F_0159_0008_1751()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0161); emu_cs = 0x34C1; ovl__34C1(1);
	f__0F3F_0161_0005_852E();
}

/**
 * Decompiled function f__0F3F_0161_0005_852E()
 *
 * @name f__0F3F_0161_0005_852E
 * @implements 0F3F:0161:0005:852E ()
 *
 * Called From: 0F3F:0161:0008:1751
 */
void f__0F3F_0161_0005_852E()
{
	emu_addws(&emu_sp, 0x8);
	f__0F3F_0166_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_0166_0002_2597()
 *
 * @name f__0F3F_0166_0002_2597
 * @implements 0F3F:0166:0002:2597 ()
 *
 * Called From: 0F3F:0164:0005:852E
 */
void f__0F3F_0166_0002_2597()
{
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
 *
 * Called From: 1319:008F:0009:C4BD
 * Called From: 1319:00EB:0007:1BD6
 * Called From: 1319:01A0:0007:1BD6
 */
void f__0F3F_0168_0010_C9EF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0178); f__0F3F_0335_0015_2275();
	f__0F3F_0178_0008_AFA3();
}

/**
 * Decompiled function f__0F3F_0178_0008_AFA3()
 *
 * @name f__0F3F_0178_0008_AFA3
 * @implements 0F3F:0178:0008:AFA3 ()
 *
 * Called From: 0F3F:0178:0010:C9EF
 */
void f__0F3F_0178_0008_AFA3()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0180); f__0F3F_0322_0011_5AAA();
	f__0F3F_0180_0008_6FA8();
}

/**
 * Decompiled function f__0F3F_0180_0008_6FA8()
 *
 * @name f__0F3F_0180_0008_6FA8
 * @implements 0F3F:0180:0008:6FA8 ()
 *
 * Called From: 0F3F:0180:0008:AFA3
 */
void f__0F3F_0180_0008_6FA8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0188); f__0F3F_0335_0015_2275();
	f__0F3F_0188_0008_AFA7();
}

/**
 * Decompiled function f__0F3F_0188_0008_AFA7()
 *
 * @name f__0F3F_0188_0008_AFA7
 * @implements 0F3F:0188:0008:AFA7 ()
 *
 * Called From: 0F3F:0188:0008:6FA8
 */
void f__0F3F_0188_0008_AFA7()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0190); f__0F3F_0322_0011_5AAA();
	f__0F3F_0190_0008_77D3();
}

/**
 * Decompiled function f__0F3F_0190_0008_77D3()
 *
 * @name f__0F3F_0190_0008_77D3
 * @implements 0F3F:0190:0008:77D3 ()
 *
 * Called From: 0F3F:0190:0008:AFA7
 */
void f__0F3F_0190_0008_77D3()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0198); emu_cs = 0x07C4; f__07C4_001A_0045_DCB4();
	f__0F3F_0198_0005_852E();
}

/**
 * Decompiled function f__0F3F_0198_0005_852E()
 *
 * @name f__0F3F_0198_0005_852E
 * @implements 0F3F:0198:0005:852E ()
 *
 * Called From: 0F3F:0198:0008:77D3
 */
void f__0F3F_0198_0005_852E()
{
	emu_addws(&emu_sp, 0x8);
	f__0F3F_019D_0004_DE52(); return;
}

/**
 * Decompiled function f__0F3F_019D_0004_DE52()
 *
 * @name f__0F3F_019D_0004_DE52
 * @implements 0F3F:019D:0004:DE52 ()
 *
 * Called From: 0F3F:019B:0005:852E
 */
void f__0F3F_019D_0004_DE52()
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
 * Decompiled function f__0F3F_01A1_0018_9631()
 *
 * @name f__0F3F_01A1_0018_9631
 * @implements 0F3F:01A1:0018:9631 ()
 *
 * Called From: 0972:16B8:001F:6F53
 * Called From: B4B8:0559:0008:CAD0
 */
void f__0F3F_01A1_0018_9631()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0F3F_01B9_000A_AC18(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_026F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F3F_01B0_0009_056A()
 *
 * @name f__0F3F_01B0_0009_056A
 * @implements 0F3F:01B0:0009:056A ()
 *
 * Called From: 0F3F:023A:004A:55D2
 * Called From: 0F3F:023A:0003:A2BC
 */
void f__0F3F_01B0_0009_056A()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_026F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F3F_01B6_0003_9D0D()
 *
 * @name f__0F3F_01B6_0003_9D0D
 * @implements 0F3F:01B6:0003:9D0D ()
 *
 * Called From: 0F3F:026C:0012:D28A
 */
void f__0F3F_01B6_0003_9D0D()
{
	f__0F3F_026F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F3F_01B9_000A_AC18()
 *
 * @name f__0F3F_01B9_000A_AC18
 * @implements 0F3F:01B9:000A:AC18 ()
 *
 * Called From: 0F3F:01AE:0018:9631
 */
void f__0F3F_01B9_000A_AC18()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01C3); f__0F3F_0076_0008_A51E();
	f__0F3F_01C3_000E_EDD6();
}

/**
 * Decompiled function f__0F3F_01C3_000E_EDD6()
 *
 * @name f__0F3F_01C3_000E_EDD6
 * @implements 0F3F:01C3:000E:EDD6 ()
 *
 * Called From: 0F3F:01C3:000A:AC18
 */
void f__0F3F_01C3_000E_EDD6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01D1); f__0F3F_007E_0008_A4DE();
	f__0F3F_01D1_000A_B69E();
}

/**
 * Decompiled function f__0F3F_01D1_000A_B69E()
 *
 * @name f__0F3F_01D1_000A_B69E
 * @implements 0F3F:01D1:000A:B69E ()
 *
 * Called From: 0F3F:01D1:000E:EDD6
 */
void f__0F3F_01D1_000A_B69E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0F3F_01DB_0008_9FC8();
}

/**
 * Decompiled function f__0F3F_01DB_0008_9FC8()
 *
 * @name f__0F3F_01DB_0008_9FC8
 * @implements 0F3F:01DB:0008:9FC8 ()
 *
 * Called From: 0F3F:01DB:000A:B69E
 */
void f__0F3F_01DB_0008_9FC8()
{
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__0F3F_01E6_000D_1051(); return;
}

/**
 * Decompiled function f__0F3F_01E3_0010_CF58()
 *
 * @name f__0F3F_01E3_0010_CF58
 * @implements 0F3F:01E3:0010:CF58 ()
 *
 * Called From: 0F3F:01E9:000D:1051
 * Called From: 0F3F:01E9:0010:CF58
 */
void f__0F3F_01E3_0010_CF58()
{
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_si);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0F3F_01E3_0010_CF58(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0F3F_01F3_004A_55D2();
}

/**
 * Decompiled function f__0F3F_01E6_000D_1051()
 *
 * @name f__0F3F_01E6_000D_1051
 * @implements 0F3F:01E6:000D:1051 ()
 *
 * Called From: 0F3F:01E1:0008:9FC8
 */
void f__0F3F_01E6_000D_1051()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_si);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0F3F_01E3_0010_CF58(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0F3F_01F3_004A_55D2();
}

/**
 * Decompiled function f__0F3F_01F3_004A_55D2()
 *
 * @name f__0F3F_01F3_004A_55D2
 * @implements 0F3F:01F3:004A:55D2 ()
 *
 * Called From: 0F3F:01F3:0010:CF58
 * Called From: 0F3F:01F3:000D:1051
 */
void f__0F3F_01F3_004A_55D2()
{
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3C4C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_di);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3D4C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x7);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_cmpw(&emu_di, 0x4000);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0F3F_023A_0003_A2BC(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if ((emu_flags.cf || emu_flags.zf)) { f__0F3F_023D_0008_46EE(); return; }
	f__0F3F_01B0_0009_056A(); return;
}

/**
 * Decompiled function f__0F3F_023A_0003_A2BC()
 *
 * @name f__0F3F_023A_0003_A2BC
 * @implements 0F3F:023A:0003:A2BC ()
 *
 * Called From: 0F3F:0231:004A:55D2
 */
void f__0F3F_023A_0003_A2BC()
{
	f__0F3F_01B0_0009_056A(); return;
}

/**
 * Decompiled function f__0F3F_023D_0008_46EE()
 *
 * @name f__0F3F_023D_0008_46EE
 * @implements 0F3F:023D:0008:46EE ()
 *
 * Called From: 0F3F:0238:004A:55D2
 */
void f__0F3F_023D_0008_46EE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0245); f__0F3F_002C_000B_51FA();
	f__0F3F_0245_0018_281D();
}

/**
 * Decompiled function f__0F3F_0245_0018_281D()
 *
 * @name f__0F3F_0245_0018_281D
 * @implements 0F3F:0245:0018:281D ()
 *
 * Called From: 0F3F:0245:0008:46EE
 */
void f__0F3F_0245_0018_281D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0266; emu_last_cs = 0x0F3F; emu_last_ip = 0x0251; emu_last_length = 0x0018; emu_last_crc = 0x281D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x025D); f__0F3F_0275_0019_64C3();
	f__0F3F_025D_0012_D28A();
}

/**
 * Decompiled function f__0F3F_025D_0012_D28A()
 *
 * @name f__0F3F_025D_0012_D28A
 * @implements 0F3F:025D:0012:D28A ()
 *
 * Called From: 0F3F:025D:0018:281D
 */
void f__0F3F_025D_0012_D28A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0F3F_01B6_0003_9D0D(); return;
}

/**
 * Decompiled function f__0F3F_026F_0006_F7CE()
 *
 * @name f__0F3F_026F_0006_F7CE
 * @implements 0F3F:026F:0006:F7CE ()
 *
 * Called From: 0F3F:01B6:0003:9D0D
 * Called From: 0F3F:01B6:0009:056A
 * Called From: 0F3F:01B6:0018:9631
 */
void f__0F3F_026F_0006_F7CE()
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
 * Decompiled function f__0F3F_0275_0019_64C3()
 *
 * @name f__0F3F_0275_0019_64C3
 * @implements 0F3F:0275:0019:64C3 ()
 *
 * Called From: 0642:038A:002F:5F80
 * Called From: 0642:038A:0018:8AC7
 * Called From: 0972:0D6A:0008:8ABD
 * Called From: 0C3A:24B2:0028:5D23
 * Called From: 0F3F:025A:0018:281D
 * Called From: 176C:22D8:0019:80C9
 * Called From: 1A34:2991:002B:7552
 */
void f__0F3F_0275_0019_64C3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xFF00);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_dx.x, 0xFF00);
	emu_addw(&emu_dx.x, 0x80);
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
 *
 * Called From: 1A34:0061:0035:A18F
 * Called From: 1A34:26D0:0018:5400
 * Called From: 1A34:26EB:001B:C457
 */
void f__0F3F_028E_0015_1153()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_si, 0xFF);
	if (!emu_flags.cf) { emu_ip = 0x02A3; emu_last_cs = 0x0F3F; emu_last_ip = 0x029D; emu_last_length = 0x0015; emu_last_crc = 0x1153; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__0F3F_02A6_000E_64CB(); return;
}

/**
 * Decompiled function f__0F3F_02A6_000E_64CB()
 *
 * @name f__0F3F_02A6_000E_64CB
 * @implements 0F3F:02A6:000E:64CB ()
 *
 * Called From: 0F3F:02A1:0015:1153
 */
void f__0F3F_02A6_000E_64CB()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0F3F_02B4_000A_6D9A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x031C; emu_last_cs = 0x0F3F; emu_last_ip = 0x02B2; emu_last_length = 0x000E; emu_last_crc = 0x64CB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F3F_02B2_0002_F43A()
 *
 * @name f__0F3F_02B2_0002_F43A
 * @implements 0F3F:02B2:0002:F43A ()
 *
 * Called From: 0F3F:031A:0004:101F
 */
void f__0F3F_02B2_0002_F43A()
{
	f__0F3F_031C_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F3F_02B4_000A_6D9A()
 *
 * @name f__0F3F_02B4_000A_6D9A
 * @implements 0F3F:02B4:000A:6D9A ()
 *
 * Called From: 0F3F:02AA:000E:64CB
 */
void f__0F3F_02B4_000A_6D9A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02BE); f__0F3F_0076_0008_A51E();
	f__0F3F_02BE_000F_1287();
}

/**
 * Decompiled function f__0F3F_02BE_000F_1287()
 *
 * @name f__0F3F_02BE_000F_1287
 * @implements 0F3F:02BE:000F:1287 ()
 *
 * Called From: 0F3F:02BE:000A:6D9A
 */
void f__0F3F_02BE_000F_1287()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02CD); f__0F3F_007E_0008_A4DE();
	f__0F3F_02CD_004B_E1B3();
}

/**
 * Decompiled function f__0F3F_02CD_004B_E1B3()
 *
 * @name f__0F3F_02CD_004B_E1B3
 * @implements 0F3F:02CD:004B:E1B3 ()
 *
 * Called From: 0F3F:02CD:000F:1287
 */
void f__0F3F_02CD_004B_E1B3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_bx.x, 0xFF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3C4C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_movw(&emu_di, emu_ax.x);
	emu_addws(&emu_di, 0x40);
	emu_movb(&emu_cx.l, 0x7);
	emu_sarw(&emu_di, emu_cx.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_bx.x, 0xFF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3D4C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
	emu_movb(&emu_cx.l, 0x7);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0318); f__0F3F_002C_000B_51FA();
	f__0F3F_0318_0004_101F();
}

/**
 * Decompiled function f__0F3F_0318_0004_101F()
 *
 * @name f__0F3F_0318_0004_101F
 * @implements 0F3F:0318:0004:101F ()
 *
 * Called From: 0F3F:0318:004B:E1B3
 */
void f__0F3F_0318_0004_101F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0F3F_02B2_0002_F43A(); return;
}

/**
 * Decompiled function f__0F3F_031C_0006_F7CE()
 *
 * @name f__0F3F_031C_0006_F7CE
 * @implements 0F3F:031C:0006:F7CE ()
 *
 * Called From: 0F3F:02B2:0002:F43A
 */
void f__0F3F_031C_0006_F7CE()
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
 * Decompiled function f__0F3F_0322_0011_5AAA()
 *
 * @name f__0F3F_0322_0011_5AAA
 * @implements 0F3F:0322:0011:5AAA ()
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
void f__0F3F_0322_0011_5AAA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0x3F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_0333_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_0333_0002_2597()
 *
 * @name f__0F3F_0333_0002_2597
 * @implements 0F3F:0333:0002:2597 ()
 *
 * Called From: 0F3F:0331:0011:5AAA
 */
void f__0F3F_0333_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0335_0015_2275()
 *
 * @name f__0F3F_0335_0015_2275
 * @implements 0F3F:0335:0015:2275 ()
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
void f__0F3F_0335_0015_2275()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0x3F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_034A_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_034A_0002_2597()
 *
 * @name f__0F3F_034A_0002_2597
 * @implements 0F3F:034A:0002:2597 ()
 *
 * Called From: 0F3F:0348:0015:2275
 */
void f__0F3F_034A_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_034C_0012_18EA()
 *
 * @name f__0F3F_034C_0012_18EA
 * @implements 0F3F:034C:0012:18EA ()
 *
 * Called From: 0AEC:0343:0009:A8A9
 * Called From: 0F78:0219:0007:5B94
 * Called From: 0F78:052A:0009:23D1
 * Called From: 0F78:052A:0024:7C89
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
void f__0F3F_034C_0012_18EA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_035E_0002_2597(); return;
}

/**
 * Decompiled function f__0F3F_035E_0002_2597()
 *
 * @name f__0F3F_035E_0002_2597
 * @implements 0F3F:035E:0002:2597 ()
 *
 * Called From: 0F3F:035C:0012:18EA
 */
void f__0F3F_035E_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0360_0038_97C0()
 *
 * @name f__0F3F_0360_0038_97C0
 * @implements 0F3F:0360:0038:97C0 ()
 *
 * Called From: 06F7:02CD:0007:838A
 * Called From: 0C3A:258E:0027:DC19
 * Called From: 0C3A:25A1:000C:9CB0
 * Called From: 0C3A:25A1:0013:A3B5
 * Called From: 176C:207B:0009:68BB
 * Called From: B483:0036:0008:DA8A
 * Called From: B4CD:0A71:0009:A4FD
 * Called From: B4CD:15A3:000E:56C5
 */
void f__0F3F_0360_0038_97C0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_dx.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_ax.x, 0x3F);
	emu_andws(&emu_bx.x, 0x3F);
	emu_subw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.sf) { f__0F3F_0378_0020_E837(); return; }
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_subw(&emu_bx.x, emu_dx.x);
	if (!emu_flags.sf) { f__0F3F_038A_000E_E0AD(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_038F_0009_FB77(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0378_0020_E837()
 *
 * @name f__0F3F_0378_0020_E837
 * @implements 0F3F:0378:0020:E837 ()
 *
 * Called From: 0F3F:0374:0038:97C0
 */
void f__0F3F_0378_0020_E837()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_subw(&emu_bx.x, emu_dx.x);
	if (!emu_flags.sf) { f__0F3F_038A_000E_E0AD(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_038F_0009_FB77(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_038A_000E_E0AD()
 *
 * @name f__0F3F_038A_000E_E0AD
 * @implements 0F3F:038A:000E:E0AD ()
 *
 * Called From: 0F3F:0386:0020:E837
 * Called From: 0F3F:0386:0038:97C0
 */
void f__0F3F_038A_000E_E0AD()
{
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_038F_0009_FB77(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_038F_0009_FB77()
 *
 * @name f__0F3F_038F_0009_FB77
 * @implements 0F3F:038F:0009:FB77 ()
 *
 * Called From: 0F3F:038C:000E:E0AD
 * Called From: 0F3F:038C:0020:E837
 * Called From: 0F3F:038C:0038:97C0
 */
void f__0F3F_038F_0009_FB77()
{
	emu_shrw(&emu_bx.x, 0x1);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
