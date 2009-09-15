/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0F3F_000D_0019_C11D()
 *
 * @name f__0F3F_000D_0019_C11D
 * @implements 0F3F:000D:0019:C11D ()
 *
 * Called From: B4CD:06CF:0014:3259
 */
void f__0F3F_000D_0019_C11D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_dx.x, 0xC000);
	emu_andw(&emu_ax.x, 0xC000);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__0F3F_0026_0004_069C(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0F3F_0028_0002_03AC(); return;
}

/**
 * Decompiled function f__0F3F_0026_0004_069C()
 *
 * @name f__0F3F_0026_0004_069C
 * @implements 0F3F:0026:0004:069C ()
 *
 * Called From: 0F3F:001F:0019:C11D
 */
void f__0F3F_0026_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0F3F_002A_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_0028_0002_03AC()
 *
 * @name f__0F3F_0028_0002_03AC
 * @implements 0F3F:0028:0002:03AC ()
 *
 * Called From: 0F3F:0024:0019:C11D
 */
void f__0F3F_0028_0002_03AC()
{
	f__0F3F_002A_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_002A_0002_00E2()
 *
 * @name f__0F3F_002A_0002_00E2
 * @implements 0F3F:002A:0002:00E2 ()
 *
 * Called From: 0F3F:0028:0004:069C
 * Called From: 0F3F:0028:0002:03AC
 */
void f__0F3F_002A_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_002C_000B_E123()
 *
 * @name f__0F3F_002C_000B_E123
 * @implements 0F3F:002C:000B:E123 ()
 *
 * Called From: 0F3F:0242:0008:F4A6
 * Called From: 0F3F:0315:004B:5A49
 * Called From: 167E:0207:0026:D7D2
 * Called From: 176C:1196:0015:E2FD
 * Called From: B4CD:010B:0009:F3A3
 */
void f__0F3F_002C_000B_E123()
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
 * Decompiled function f__0F3F_0037_000F_EA0C()
 *
 * @name f__0F3F_0037_000F_EA0C
 * @implements 0F3F:0037:000F:EA0C ()
 *
 * Called From: B4CD:083A:000F:BA5C
 * Called From: B4CD:089E:0016:E5D7
 */
void f__0F3F_0037_000F_EA0C()
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
 * Decompiled function f__0F3F_0046_000C_D261()
 *
 * @name f__0F3F_0046_000C_D261
 * @implements 0F3F:0046:000C:D261 ()
 *
 * Called From: B4CD:05A4:000B:E5C4
 */
void f__0F3F_0046_000C_D261()
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
 * Decompiled function f__0F3F_0052_000C_D561()
 *
 * @name f__0F3F_0052_000C_D561
 * @implements 0F3F:0052:000C:D561 ()
 *
 * Called From: B4CD:05B4:0010:44D5
 */
void f__0F3F_0052_000C_D561()
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
 * Decompiled function f__0F3F_0076_0008_3E52()
 *
 * @name f__0F3F_0076_0008_3E52
 * @implements 0F3F:0076:0008:3E52 ()
 *
 * Called From: 0F3F:013C:000D:49CD
 * Called From: 0F3F:0156:000D:4CE5
 * Called From: 0F3F:01C0:000A:7E53
 * Called From: 0F3F:02BB:000A:7E79
 * Called From: 176C:1114:000E:1AFD
 * Called From: 176C:1134:0010:E195
 * Called From: B4CD:00B6:0016:CC59
 */
void f__0F3F_0076_0008_3E52()
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
 * Decompiled function f__0F3F_007E_0008_3E22()
 *
 * @name f__0F3F_007E_0008_3E22
 * @implements 0F3F:007E:0008:3E22 ()
 *
 * Called From: 0F3F:012F:000D:0828
 * Called From: 0F3F:0149:000D:4C59
 * Called From: 0F3F:01CE:000E:6E39
 * Called From: 0F3F:02CA:000F:0E75
 * Called From: 0FE4:00A1:0010:269E
 * Called From: 0FE4:00A1:0018:E0CE
 * Called From: 0FE4:00B5:0014:221B
 * Called From: 176C:1124:0010:DA15
 * Called From: 176C:1146:0012:C0BA
 * Called From: B4CD:00C5:000F:C1E0
 */
void f__0F3F_007E_0008_3E22()
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
 * Decompiled function f__0F3F_0086_0017_9220()
 *
 * @name f__0F3F_0086_0017_9220
 * @implements 0F3F:0086:0017:9220 ()
 *
 * Called From: 0642:0393:0009:CDC2
 * Called From: 06F7:002C:0011:6880
 * Called From: 06F7:02B7:0015:252F
 * Called From: 06F7:04AE:000B:E544
 * Called From: 06F7:05C7:0031:AE21
 * Called From: 06F7:073E:0018:E346
 * Called From: 06F7:0921:0013:D6FC
 * Called From: 06F7:0A7D:0016:DAEC
 * Called From: 07D4:0963:0025:C574
 * Called From: 07D4:0982:001F:BAAE
 * Called From: 07D4:09AE:0019:0DC5
 * Called From: 07D4:0E8F:0028:E091
 * Called From: 07D4:0EAE:001F:4420
 * Called From: 07D4:0F0E:0018:8F1C
 * Called From: 07D4:1003:0025:C574
 * Called From: 07D4:1022:001F:BAAE
 * Called From: 07D4:104E:0019:0DC5
 * Called From: 0C3A:097C:0028:C332
 * Called From: 0C3A:09FA:001D:C29F
 * Called From: 0C3A:24BB:0009:CDC2
 * Called From: 0EDB:0483:0032:A8C3
 * Called From: 0F78:0398:0010:291F
 * Called From: 0F78:0398:0012:28C9
 * Called From: 151A:001C:0013:54E3
 * Called From: 151A:0165:0034:68C8
 * Called From: 151A:0323:0018:9006
 * Called From: 151A:03FC:0014:A6F4
 * Called From: 151A:0481:0017:BECC
 * Called From: 151A:0549:0028:A1C7
 * Called From: 151A:060C:001D:EE4F
 * Called From: 167E:01A8:0012:A917
 * Called From: 167E:034F:002B:27EB
 * Called From: 176C:04E5:001F:50E5
 * Called From: 176C:04E5:001C:1095
 * Called From: 176C:14B3:0020:6093
 * Called From: 176C:1F9C:0011:A870
 * Called From: 176C:22E1:0009:CDC2
 * Called From: 176C:22FD:0012:A914
 * Called From: 176C:2712:0011:A870
 * Called From: 1A34:016C:0011:58A6
 * Called From: 1A34:040B:000B:3945
 * Called From: 1A34:0E66:0028:F857
 * Called From: 1A34:1297:0010:A923
 * Called From: 1A34:12D7:0015:B69C
 * Called From: 1A34:1373:002A:FE23
 * Called From: 1A34:1707:0014:E1D7
 * Called From: 1A34:1B1E:001A:3549
 * Called From: 1A34:2895:0027:77C1
 * Called From: 1A34:29FD:002C:51E8
 * Called From: 1A34:2FFD:001F:F519
 * Called From: 1A34:3470:0014:A208
 * Called From: B483:002E:001A:A8A0
 * Called From: B4B5:056D:0021:D4BF
 * Called From: B4B8:0563:000A:AAC1
 * Called From: B4CD:0235:001C:AA24
 * Called From: B4CD:024A:0015:232B
 * Called From: B4CD:043E:001C:0F08
 * Called From: B4CD:06E0:0011:5511
 * Called From: B4CD:0802:0013:5FE1
 */
void f__0F3F_0086_0017_9220()
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
 * Decompiled function f__0F3F_009D_0017_C9BF()
 *
 * @name f__0F3F_009D_0017_C9BF
 * @implements 0F3F:009D:0017:C9BF ()
 *
 * Called From: 0972:0D62:0015:9E5F
 * Called From: 0C3A:03AF:006A:F091
 * Called From: 0C3A:0545:0018:9E4E
 * Called From: 0C3A:0586:0039:E8A8
 * Called From: 167E:03A6:0016:9F94
 * Called From: 1A34:2349:0008:7BF2
 * Called From: B4B5:0503:0008:7BF2
 * Called From: B4B8:0551:000C:EDF1
 */
void f__0F3F_009D_0017_C9BF()
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
 * Decompiled function f__0F3F_00B4_002A_0887()
 *
 * @name f__0F3F_00B4_002A_0887
 * @implements 0F3F:00B4:002A:0887 ()
 *
 * Called From: 06F7:0088:002E:47F3
 * Called From: 0C3A:2397:005A:1C01
 * Called From: 0EDB:0231:0014:6D15
 * Called From: 0F3F:0114:0013:AF6A
 * Called From: 167E:03CB:001E:87CA
 * Called From: 176C:10E6:0018:6898
 * Called From: 1A34:015B:001F:DB85
 * Called From: 1A34:015B:0016:B28A
 * Called From: 1A34:02BA:0022:119E
 * Called From: 1A34:02BA:0037:EA25
 * Called From: 1A34:144E:0029:4B80
 * Called From: 1A34:21A9:0033:6F92
 * Called From: 1A34:3404:001B:4796
 */
void f__0F3F_00B4_002A_0887()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.sf) { f__0F3F_00C5_0019_14C3(); return; }
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_bx.x, emu_cx.x);
	if (!emu_flags.sf) { f__0F3F_00D1_000D_3183(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_00D6_0008_BB8A(); return; }
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
 * Decompiled function f__0F3F_00C5_0019_14C3()
 *
 * @name f__0F3F_00C5_0019_14C3
 * @implements 0F3F:00C5:0019:14C3 ()
 *
 * Called From: 0F3F:00C1:002A:0887
 */
void f__0F3F_00C5_0019_14C3()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_bx.x, emu_cx.x);
	if (!emu_flags.sf) { f__0F3F_00D1_000D_3183(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_00D6_0008_BB8A(); return; }
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
 * Decompiled function f__0F3F_00D1_000D_3183()
 *
 * @name f__0F3F_00D1_000D_3183
 * @implements 0F3F:00D1:000D:3183 ()
 *
 * Called From: 0F3F:00CD:0019:14C3
 * Called From: 0F3F:00CD:002A:0887
 */
void f__0F3F_00D1_000D_3183()
{
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_00D6_0008_BB8A(); return; }
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
 * Decompiled function f__0F3F_00D6_0008_BB8A()
 *
 * @name f__0F3F_00D6_0008_BB8A
 * @implements 0F3F:00D6:0008:BB8A ()
 *
 * Called From: 0F3F:00D3:000D:3183
 * Called From: 0F3F:00D3:0019:14C3
 * Called From: 0F3F:00D3:002A:0887
 */
void f__0F3F_00D6_0008_BB8A()
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
 * Decompiled function f__0F3F_00F3_0011_D3FE()
 *
 * @name f__0F3F_00F3_0011_D3FE
 * @implements 0F3F:00F3:0011:D3FE ()
 *
 * Called From: B4CD:06BB:0011:0F5B
 */
void f__0F3F_00F3_0011_D3FE()
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
 * Decompiled function f__0F3F_0104_0013_AF6A()
 *
 * @name f__0F3F_0104_0013_AF6A
 * @implements 0F3F:0104:0013:AF6A ()
 *
 * Called From: 0C3A:22A1:0043:C508
 * Called From: 176C:2A2B:003A:D34F
 * Called From: 1A34:12C2:001B:AC9F
 * Called From: B4CD:08B7:0019:0A11
 */
void f__0F3F_0104_0013_AF6A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0117); f__0F3F_00B4_002A_0887();
	f__0F3F_0117_000C_9E12();
}

/**
 * Decompiled function f__0F3F_0117_000C_9E12()
 *
 * @name f__0F3F_0117_000C_9E12
 * @implements 0F3F:0117:000C:9E12 ()
 *
 * Called From: 0F3F:0117:0013:AF6A
 */
void f__0F3F_0117_000C_9E12()
{
	emu_addws(&emu_sp, 0x8);
	emu_addw(&emu_ax.x, 0x80);
	emu_movb(&emu_cx.l, 0x8);
	emu_sarw(&emu_ax.x, emu_cx.l);
	f__0F3F_0123_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_0123_0002_00E2()
 *
 * @name f__0F3F_0123_0002_00E2
 * @implements 0F3F:0123:0002:00E2 ()
 *
 * Called From: 0F3F:0121:000C:9E12
 */
void f__0F3F_0123_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0125_000D_0828()
 *
 * @name f__0F3F_0125_000D_0828
 * @implements 0F3F:0125:000D:0828 ()
 *
 * Called From: 0972:0DBD:003A:2770
 * Called From: 1423:0AF1:002C:99A1
 * Called From: 167E:0387:0038:3DC7
 * Called From: 176C:040E:0023:9BC0
 * Called From: 176C:11DD:0011:7E30
 * Called From: 176C:15DC:0017:D2E8
 * Called From: 176C:1A0E:0014:A408
 * Called From: 176C:1B90:0014:A408
 * Called From: 176C:1CDC:0030:F7C4
 * Called From: 1A34:2370:001A:7DA0
 * Called From: 1A34:2564:0011:05B3
 * Called From: 1A34:26B8:0011:05B3
 */
void f__0F3F_0125_000D_0828()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0132); f__0F3F_007E_0008_3E22();
	f__0F3F_0132_000D_49CD();
}

/**
 * Decompiled function f__0F3F_0132_000D_49CD()
 *
 * @name f__0F3F_0132_000D_49CD
 * @implements 0F3F:0132:000D:49CD ()
 *
 * Called From: 0F3F:0132:000D:0828
 */
void f__0F3F_0132_000D_49CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x013F); f__0F3F_0076_0008_3E52();
	f__0F3F_013F_000D_4C59();
}

/**
 * Decompiled function f__0F3F_013F_000D_4C59()
 *
 * @name f__0F3F_013F_000D_4C59
 * @implements 0F3F:013F:000D:4C59 ()
 *
 * Called From: 0F3F:013F:000D:49CD
 */
void f__0F3F_013F_000D_4C59()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x014C); f__0F3F_007E_0008_3E22();
	f__0F3F_014C_000D_4CE5();
}

/**
 * Decompiled function f__0F3F_014C_000D_4CE5()
 *
 * @name f__0F3F_014C_000D_4CE5
 * @implements 0F3F:014C:000D:4CE5 ()
 *
 * Called From: 0F3F:014C:000D:4C59
 */
void f__0F3F_014C_000D_4CE5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0159); f__0F3F_0076_0008_3E52();
	f__0F3F_0159_0008_73FC();
}

/**
 * Decompiled function f__0F3F_0159_0008_73FC()
 *
 * @name f__0F3F_0159_0008_73FC
 * @implements 0F3F:0159:0008:73FC ()
 *
 * Called From: 0F3F:0159:000D:4CE5
 */
void f__0F3F_0159_0008_73FC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0161); emu_cs = 0x34C1; ovl__34C1(1);
	f__0F3F_0161_0005_1FCC();
}

/**
 * Decompiled function f__0F3F_0161_0005_1FCC()
 *
 * @name f__0F3F_0161_0005_1FCC
 * @implements 0F3F:0161:0005:1FCC ()
 *
 * Called From: 0F3F:0161:0008:73FC
 */
void f__0F3F_0161_0005_1FCC()
{
	emu_addws(&emu_sp, 0x8);
	f__0F3F_0166_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_0166_0002_00E2()
 *
 * @name f__0F3F_0166_0002_00E2
 * @implements 0F3F:0166:0002:00E2 ()
 *
 * Called From: 0F3F:0164:0005:1FCC
 */
void f__0F3F_0166_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0168_0010_0597()
 *
 * @name f__0F3F_0168_0010_0597
 * @implements 0F3F:0168:0010:0597 ()
 *
 * Called From: 1319:008F:0009:40AA
 * Called From: 1319:00EB:0007:2B2A
 * Called From: 1319:01A0:0007:2B2A
 */
void f__0F3F_0168_0010_0597()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0178); f__0F3F_0335_0015_8E86();
	f__0F3F_0178_0008_A74A();
}

/**
 * Decompiled function f__0F3F_0178_0008_A74A()
 *
 * @name f__0F3F_0178_0008_A74A
 * @implements 0F3F:0178:0008:A74A ()
 *
 * Called From: 0F3F:0178:0010:0597
 */
void f__0F3F_0178_0008_A74A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0180); f__0F3F_0322_0011_0960();
	f__0F3F_0180_0008_A756();
}

/**
 * Decompiled function f__0F3F_0180_0008_A756()
 *
 * @name f__0F3F_0180_0008_A756
 * @implements 0F3F:0180:0008:A756 ()
 *
 * Called From: 0F3F:0180:0008:A74A
 */
void f__0F3F_0180_0008_A756()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0188); f__0F3F_0335_0015_8E86();
	f__0F3F_0188_0008_A7AA();
}

/**
 * Decompiled function f__0F3F_0188_0008_A7AA()
 *
 * @name f__0F3F_0188_0008_A7AA
 * @implements 0F3F:0188:0008:A7AA ()
 *
 * Called From: 0F3F:0188:0008:A756
 */
void f__0F3F_0188_0008_A7AA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0190); f__0F3F_0322_0011_0960();
	f__0F3F_0190_0008_B97E();
}

/**
 * Decompiled function f__0F3F_0190_0008_B97E()
 *
 * @name f__0F3F_0190_0008_B97E
 * @implements 0F3F:0190:0008:B97E ()
 *
 * Called From: 0F3F:0190:0008:A7AA
 */
void f__0F3F_0190_0008_B97E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0198); emu_cs = 0x07C4; f__07C4_001A_0045_57F3();
	f__0F3F_0198_0005_1FCC();
}

/**
 * Decompiled function f__0F3F_0198_0005_1FCC()
 *
 * @name f__0F3F_0198_0005_1FCC
 * @implements 0F3F:0198:0005:1FCC ()
 *
 * Called From: 0F3F:0198:0008:B97E
 */
void f__0F3F_0198_0005_1FCC()
{
	emu_addws(&emu_sp, 0x8);
	f__0F3F_019D_0004_07E2(); return;
}

/**
 * Decompiled function f__0F3F_019D_0004_07E2()
 *
 * @name f__0F3F_019D_0004_07E2
 * @implements 0F3F:019D:0004:07E2 ()
 *
 * Called From: 0F3F:019B:0005:1FCC
 */
void f__0F3F_019D_0004_07E2()
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
 * Decompiled function f__0F3F_01A1_0018_53C8()
 *
 * @name f__0F3F_01A1_0018_53C8
 * @implements 0F3F:01A1:0018:53C8 ()
 *
 * Called From: B4B8:0559:0008:7DBA
 */
void f__0F3F_01A1_0018_53C8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0F3F_01B9_000A_7E53(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_026F_0006_137A(); return;
}

/**
 * Decompiled function f__0F3F_01B0_0009_6BF1()
 *
 * @name f__0F3F_01B0_0009_6BF1
 * @implements 0F3F:01B0:0009:6BF1 ()
 *
 * Called From: 0F3F:023A:004A:573B
 * Called From: 0F3F:023A:0003:077A
 */
void f__0F3F_01B0_0009_6BF1()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_026F_0006_137A(); return;
}

/**
 * Decompiled function f__0F3F_01B6_0003_0590()
 *
 * @name f__0F3F_01B6_0003_0590
 * @implements 0F3F:01B6:0003:0590 ()
 *
 * Called From: 0F3F:026C:0012:D6E7
 */
void f__0F3F_01B6_0003_0590()
{
	f__0F3F_026F_0006_137A(); return;
}

/**
 * Decompiled function f__0F3F_01B9_000A_7E53()
 *
 * @name f__0F3F_01B9_000A_7E53
 * @implements 0F3F:01B9:000A:7E53 ()
 *
 * Called From: 0F3F:01AE:0018:53C8
 */
void f__0F3F_01B9_000A_7E53()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01C3); f__0F3F_0076_0008_3E52();
	f__0F3F_01C3_000E_6E39();
}

/**
 * Decompiled function f__0F3F_01C3_000E_6E39()
 *
 * @name f__0F3F_01C3_000E_6E39
 * @implements 0F3F:01C3:000E:6E39 ()
 *
 * Called From: 0F3F:01C3:000A:7E53
 */
void f__0F3F_01C3_000E_6E39()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01D1); f__0F3F_007E_0008_3E22();
	f__0F3F_01D1_000A_5207();
}

/**
 * Decompiled function f__0F3F_01D1_000A_5207()
 *
 * @name f__0F3F_01D1_000A_5207
 * @implements 0F3F:01D1:000A:5207 ()
 *
 * Called From: 0F3F:01D1:000E:6E39
 */
void f__0F3F_01D1_000A_5207()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__0F3F_01DB_0008_4BDA();
}

/**
 * Decompiled function f__0F3F_01DB_0008_4BDA()
 *
 * @name f__0F3F_01DB_0008_4BDA
 * @implements 0F3F:01DB:0008:4BDA ()
 *
 * Called From: 0F3F:01DB:000A:5207
 */
void f__0F3F_01DB_0008_4BDA()
{
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__0F3F_01E6_000D_4001(); return;
}

/**
 * Decompiled function f__0F3F_01E3_0010_C0DA()
 *
 * @name f__0F3F_01E3_0010_C0DA
 * @implements 0F3F:01E3:0010:C0DA ()
 *
 * Called From: 0F3F:01E9:000D:4001
 * Called From: 0F3F:01E9:0010:C0DA
 */
void f__0F3F_01E3_0010_C0DA()
{
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_si);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0F3F_01E3_0010_C0DA(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__0F3F_01F3_004A_573B();
}

/**
 * Decompiled function f__0F3F_01E6_000D_4001()
 *
 * @name f__0F3F_01E6_000D_4001
 * @implements 0F3F:01E6:000D:4001 ()
 *
 * Called From: 0F3F:01E1:0008:4BDA
 */
void f__0F3F_01E6_000D_4001()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_si);
	if (!(emu_flags.cf || emu_flags.zf)) { f__0F3F_01E3_0010_C0DA(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__0F3F_01F3_004A_573B();
}

/**
 * Decompiled function f__0F3F_01F3_004A_573B()
 *
 * @name f__0F3F_01F3_004A_573B
 * @implements 0F3F:01F3:004A:573B ()
 *
 * Called From: 0F3F:01F3:0010:C0DA
 * Called From: 0F3F:01F3:000D:4001
 */
void f__0F3F_01F3_004A_573B()
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
	if (!(emu_flags.cf || emu_flags.zf)) { f__0F3F_023A_0003_077A(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if ((emu_flags.cf || emu_flags.zf)) { f__0F3F_023D_0008_F4A6(); return; }
	f__0F3F_01B0_0009_6BF1(); return;
}

/**
 * Decompiled function f__0F3F_023A_0003_077A()
 *
 * @name f__0F3F_023A_0003_077A
 * @implements 0F3F:023A:0003:077A ()
 *
 * Called From: 0F3F:0231:004A:573B
 */
void f__0F3F_023A_0003_077A()
{
	f__0F3F_01B0_0009_6BF1(); return;
}

/**
 * Decompiled function f__0F3F_023D_0008_F4A6()
 *
 * @name f__0F3F_023D_0008_F4A6
 * @implements 0F3F:023D:0008:F4A6 ()
 *
 * Called From: 0F3F:0238:004A:573B
 */
void f__0F3F_023D_0008_F4A6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0245); f__0F3F_002C_000B_E123();
	f__0F3F_0245_0018_185F();
}

/**
 * Decompiled function f__0F3F_0245_0018_185F()
 *
 * @name f__0F3F_0245_0018_185F
 * @implements 0F3F:0245:0018:185F ()
 *
 * Called From: 0F3F:0245:0008:F4A6
 */
void f__0F3F_0245_0018_185F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0266; emu_last_cs = 0x0F3F; emu_last_ip = 0x0251; emu_last_length = 0x0018; emu_last_crc = 0x185F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x025D); f__0F3F_0275_0019_B286();
	f__0F3F_025D_0012_D6E7();
}

/**
 * Decompiled function f__0F3F_025D_0012_D6E7()
 *
 * @name f__0F3F_025D_0012_D6E7
 * @implements 0F3F:025D:0012:D6E7 ()
 *
 * Called From: 0F3F:025D:0018:185F
 */
void f__0F3F_025D_0012_D6E7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0F3F_01B6_0003_0590(); return;
}

/**
 * Decompiled function f__0F3F_026F_0006_137A()
 *
 * @name f__0F3F_026F_0006_137A
 * @implements 0F3F:026F:0006:137A ()
 *
 * Called From: 0F3F:01B6:0003:0590
 * Called From: 0F3F:01B6:0009:6BF1
 * Called From: 0F3F:01B6:0018:53C8
 */
void f__0F3F_026F_0006_137A()
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
 * Decompiled function f__0F3F_0275_0019_B286()
 *
 * @name f__0F3F_0275_0019_B286
 * @implements 0F3F:0275:0019:B286 ()
 *
 * Called From: 0642:038A:002F:17AE
 * Called From: 0642:038A:0018:3C7B
 * Called From: 0972:0D6A:0008:70E2
 * Called From: 0C3A:24B2:0028:CC12
 * Called From: 0F3F:025A:0018:185F
 * Called From: 176C:22D8:0019:CE9C
 * Called From: 1A34:2991:002B:1EBB
 */
void f__0F3F_0275_0019_B286()
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
 * Decompiled function f__0F3F_028E_0015_B0E3()
 *
 * @name f__0F3F_028E_0015_B0E3
 * @implements 0F3F:028E:0015:B0E3 ()
 *
 * Called From: 1A34:0061:0035:03C6
 * Called From: 1A34:26D0:0018:DD9D
 * Called From: 1A34:26EB:001B:AD34
 */
void f__0F3F_028E_0015_B0E3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_si, 0xFF);
	if (!emu_flags.cf) { emu_ip = 0x02A3; emu_last_cs = 0x0F3F; emu_last_ip = 0x029D; emu_last_length = 0x0015; emu_last_crc = 0xB0E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__0F3F_02A6_000E_B076(); return;
}

/**
 * Decompiled function f__0F3F_02A6_000E_B076()
 *
 * @name f__0F3F_02A6_000E_B076
 * @implements 0F3F:02A6:000E:B076 ()
 *
 * Called From: 0F3F:02A1:0015:B0E3
 */
void f__0F3F_02A6_000E_B076()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0F3F_02B4_000A_7E79(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x031C; emu_last_cs = 0x0F3F; emu_last_ip = 0x02B2; emu_last_length = 0x000E; emu_last_crc = 0xB076; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F3F_02B2_0002_037C()
 *
 * @name f__0F3F_02B2_0002_037C
 * @implements 0F3F:02B2:0002:037C ()
 *
 * Called From: 0F3F:031A:0004:05D8
 */
void f__0F3F_02B2_0002_037C()
{
	f__0F3F_031C_0006_137A(); return;
}

/**
 * Decompiled function f__0F3F_02B4_000A_7E79()
 *
 * @name f__0F3F_02B4_000A_7E79
 * @implements 0F3F:02B4:000A:7E79 ()
 *
 * Called From: 0F3F:02AA:000E:B076
 */
void f__0F3F_02B4_000A_7E79()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02BE); f__0F3F_0076_0008_3E52();
	f__0F3F_02BE_000F_0E75();
}

/**
 * Decompiled function f__0F3F_02BE_000F_0E75()
 *
 * @name f__0F3F_02BE_000F_0E75
 * @implements 0F3F:02BE:000F:0E75 ()
 *
 * Called From: 0F3F:02BE:000A:7E79
 */
void f__0F3F_02BE_000F_0E75()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02CD); f__0F3F_007E_0008_3E22();
	f__0F3F_02CD_004B_5A49();
}

/**
 * Decompiled function f__0F3F_02CD_004B_5A49()
 *
 * @name f__0F3F_02CD_004B_5A49
 * @implements 0F3F:02CD:004B:5A49 ()
 *
 * Called From: 0F3F:02CD:000F:0E75
 */
void f__0F3F_02CD_004B_5A49()
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
	emu_push(0x0318); f__0F3F_002C_000B_E123();
	f__0F3F_0318_0004_05D8();
}

/**
 * Decompiled function f__0F3F_0318_0004_05D8()
 *
 * @name f__0F3F_0318_0004_05D8
 * @implements 0F3F:0318:0004:05D8 ()
 *
 * Called From: 0F3F:0318:004B:5A49
 */
void f__0F3F_0318_0004_05D8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0F3F_02B2_0002_037C(); return;
}

/**
 * Decompiled function f__0F3F_031C_0006_137A()
 *
 * @name f__0F3F_031C_0006_137A
 * @implements 0F3F:031C:0006:137A ()
 *
 * Called From: 0F3F:02B2:0002:037C
 */
void f__0F3F_031C_0006_137A()
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
 * Decompiled function f__0F3F_0322_0011_0960()
 *
 * @name f__0F3F_0322_0011_0960
 * @implements 0F3F:0322:0011:0960 ()
 *
 * Called From: 07D4:006D:0009:A8DB
 * Called From: 07D4:0087:000D:E1D9
 * Called From: 07D4:0813:0009:D71B
 * Called From: 07D4:081E:000B:21D8
 * Called From: 07D4:1642:0008:D41A
 * Called From: 0AEC:0240:0022:3B21
 * Called From: 0F3F:017D:0008:A74A
 * Called From: 0F3F:018D:0008:A7AA
 * Called From: 0F78:00AC:0006:041A
 * Called From: 0F78:043E:000E:A5D2
 * Called From: B4B8:08FC:000B:9E18
 * Called From: B4CD:081F:0008:EA1A
 * Called From: B4CD:090D:002B:5180
 * Called From: B4CD:0919:000C:FC1C
 * Called From: B4CD:0C78:0016:B982
 * Called From: B4CD:0FA2:0006:041A
 * Called From: B4CD:1180:000D:521E
 * Called From: B4CD:12C4:0006:041A
 * Called From: B4CD:13FC:0016:B085
 * Called From: B4CD:1562:0006:045A
 * Called From: B4CD:1B67:0011:AB72
 * Called From: B4CD:1B7D:000D:D1D9
 */
void f__0F3F_0322_0011_0960()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0x3F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_0333_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_0333_0002_00E2()
 *
 * @name f__0F3F_0333_0002_00E2
 * @implements 0F3F:0333:0002:00E2 ()
 *
 * Called From: 0F3F:0331:0011:0960
 */
void f__0F3F_0333_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0335_0015_8E86()
 *
 * @name f__0F3F_0335_0015_8E86
 * @implements 0F3F:0335:0015:8E86 ()
 *
 * Called From: 07D4:007A:000D:F9A9
 * Called From: 07D4:0096:000F:F08D
 * Called From: 07D4:0831:0013:8507
 * Called From: 07D4:083C:000B:20A8
 * Called From: 07D4:164E:000C:E96B
 * Called From: 0AEC:0250:0010:3888
 * Called From: 0F3F:0175:0010:0597
 * Called From: 0F3F:0185:0008:A756
 * Called From: 0F78:00E1:0035:3DBC
 * Called From: 0F78:0455:0017:21B3
 * Called From: B4B8:08F1:0006:056A
 * Called From: B4CD:082B:000C:DF6B
 * Called From: B4CD:0925:000C:B26D
 * Called From: B4CD:0931:000C:F36C
 * Called From: B4CD:0C84:000C:C6EB
 * Called From: B4CD:0FAB:0009:406A
 * Called From: B4CD:118B:000B:D16B
 * Called From: B4CD:12CD:0009:406A
 * Called From: B4CD:1408:000C:DFEB
 * Called From: B4CD:156C:000A:492A
 * Called From: B4CD:1B70:0009:406A
 * Called From: B4CD:1B8A:000D:D8A9
 */
void f__0F3F_0335_0015_8E86()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0x3F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_034A_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_034A_0002_00E2()
 *
 * @name f__0F3F_034A_0002_00E2
 * @implements 0F3F:034A:0002:00E2 ()
 *
 * Called From: 0F3F:0348:0015:8E86
 */
void f__0F3F_034A_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_034C_0012_91EE()
 *
 * @name f__0F3F_034C_0012_91EE
 * @implements 0F3F:034C:0012:91EE ()
 *
 * Called From: 0AEC:0343:0009:F1BB
 * Called From: 0F78:0219:0007:297A
 * Called From: 0F78:052A:0009:C77B
 * Called From: 0F78:052A:0024:DCB5
 * Called From: B4B8:015B:0014:ACE8
 * Called From: B4B8:01D0:0021:773C
 * Called From: B4B8:01F6:0026:683C
 * Called From: B4B8:0507:0009:767A
 * Called From: B4B8:0906:000A:597B
 * Called From: B4B8:09C4:0013:B3A6
 * Called From: B4CD:0615:0036:F7CC
 * Called From: B4CD:0888:0033:67FE
 * Called From: B4CD:125B:0009:C77B
 * Called From: B4CD:125B:0015:F4AE
 * Called From: B4CD:1595:0013:D9CB
 * Called From: B4CD:18CD:0014:9C5A
 * Called From: B4CD:18CD:0006:037A
 */
void f__0F3F_034C_0012_91EE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__0F3F_035E_0002_00E2(); return;
}

/**
 * Decompiled function f__0F3F_035E_0002_00E2()
 *
 * @name f__0F3F_035E_0002_00E2
 * @implements 0F3F:035E:0002:00E2 ()
 *
 * Called From: 0F3F:035C:0012:91EE
 */
void f__0F3F_035E_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0360_0038_031A()
 *
 * @name f__0F3F_0360_0038_031A
 * @implements 0F3F:0360:0038:031A ()
 *
 * Called From: 06F7:02CD:0007:2D3A
 * Called From: 0C3A:258E:0027:8C2F
 * Called From: 0C3A:25A1:000C:5A73
 * Called From: 0C3A:25A1:0013:398A
 * Called From: 176C:207B:0009:F77B
 * Called From: B483:0036:0008:743A
 * Called From: B4CD:0A71:0009:443A
 * Called From: B4CD:15A3:000E:CF6F
 */
void f__0F3F_0360_0038_031A()
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
	if (!emu_flags.sf) { f__0F3F_0378_0020_6259(); return; }
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_subw(&emu_bx.x, emu_dx.x);
	if (!emu_flags.sf) { f__0F3F_038A_000E_60F0(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_038F_0009_74E3(); return; }
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
 * Decompiled function f__0F3F_0378_0020_6259()
 *
 * @name f__0F3F_0378_0020_6259
 * @implements 0F3F:0378:0020:6259 ()
 *
 * Called From: 0F3F:0374:0038:031A
 */
void f__0F3F_0378_0020_6259()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_subw(&emu_bx.x, emu_dx.x);
	if (!emu_flags.sf) { f__0F3F_038A_000E_60F0(); return; }
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_038F_0009_74E3(); return; }
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
 * Decompiled function f__0F3F_038A_000E_60F0()
 *
 * @name f__0F3F_038A_000E_60F0
 * @implements 0F3F:038A:000E:60F0 ()
 *
 * Called From: 0F3F:0386:0020:6259
 * Called From: 0F3F:0386:0038:031A
 */
void f__0F3F_038A_000E_60F0()
{
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F3F_038F_0009_74E3(); return; }
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
 * Decompiled function f__0F3F_038F_0009_74E3()
 *
 * @name f__0F3F_038F_0009_74E3
 * @implements 0F3F:038F:0009:74E3 ()
 *
 * Called From: 0F3F:038C:0020:6259
 * Called From: 0F3F:038C:000E:60F0
 * Called From: 0F3F:038C:0038:031A
 */
void f__0F3F_038F_0009_74E3()
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
