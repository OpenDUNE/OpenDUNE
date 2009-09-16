/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29E8_026C_0015_4E04()
 *
 * @name f__29E8_026C_0015_4E04
 * @implements 29E8:026C:0015:4E04 ()
 *
 * Called From: 29E8:047F:0009:7872
 * Called From: 29E8:06B5:0012:FBC3
 * Called From: 29E8:06B5:0014:FEF3
 * Called From: 29E8:083D:0023:969A
 */
void f__29E8_026C_0015_4E04()
{
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_testw(&emu_ax.x, 0x8000);
	if (!emu_flags.zf) { f__29E8_027A_0007_2DB2(); return; }
	emu_testb(&emu_ax.h, 0x8);
	if (emu_flags.zf) { f__29E8_0281_0012_6096(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_027A_0007_2DB2()
 *
 * @name f__29E8_027A_0007_2DB2
 * @implements 29E8:027A:0007:2DB2 ()
 *
 * Called From: 29E8:0273:0015:4E04
 */
void f__29E8_027A_0007_2DB2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0281_0012_6096()
 *
 * @name f__29E8_0281_0012_6096
 * @implements 29E8:0281:0012:6096 ()
 *
 * Called From: 29E8:0278:0015:4E04
 */
void f__29E8_0281_0012_6096()
{
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_cmpb(&emu_ax.l, 0x6E);
	if (!emu_flags.zf) { f__29E8_0293_0015_3E03(); return; }
	f__29E8_0343_0007_5AF2(); return;
}

/**
 * Decompiled function f__29E8_0293_0015_3E03()
 *
 * @name f__29E8_0293_0015_3E03
 * @implements 29E8:0293:0015:3E03 ()
 *
 * Called From: 29E8:028E:0012:6096
 */
void f__29E8_0293_0015_3E03()
{
	emu_cmpb(&emu_ax.l, 0x3E);
	if (!emu_flags.cf) { f__29E8_02DB_0028_D16E(); return; }
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_andws(&emu_bx.x, 0x3F);
	emu_testb(&emu_ax.h, 0x1);
	if (!emu_flags.zf) { f__29E8_02B6_0025_7E8E(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x34A));
	f__29E8_02BB_0020_75F0(); return;
}

/**
 * Decompiled function f__29E8_02B6_0025_7E8E()
 *
 * @name f__29E8_02B6_0025_7E8E
 * @implements 29E8:02B6:0025:7E8E ()
 *
 * Called From: 29E8:029F:0015:3E03
 */
void f__29E8_02B6_0025_7E8E()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x388));
	emu_testb(&emu_ax.h, 0x2);
	if (emu_flags.zf) { f__29E8_02D9_0002_0378(); return; }
	emu_movw(&emu_di, emu_bx.x);
	emu_andws(&emu_di, 0x7);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, emu_di,  0x2E));
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testb(&emu_cx.l, emu_get_memory8(emu_cs, emu_bx.x,  0x212));
	if (emu_flags.zf) { emu_ip = 0x02D9; emu_last_cs = 0x29E8; emu_last_ip = 0x02D5; emu_last_length = 0x0025; emu_last_crc = 0x7E8E; emu_call(); return; } // Jump does not resolve
	emu_andb(&emu_ax.l, 0x1F);
	emu_ip = 0x0345; emu_last_cs = 0x29E8; emu_last_ip = 0x02D9; emu_last_length = 0x0025; emu_last_crc = 0x7E8E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_02BB_0020_75F0()
 *
 * @name f__29E8_02BB_0020_75F0
 * @implements 29E8:02BB:0020:75F0 ()
 *
 * Called From: 29E8:02A6:0015:3E03
 */
void f__29E8_02BB_0020_75F0()
{
	emu_testb(&emu_ax.h, 0x2);
	if (emu_flags.zf) { f__29E8_02D9_0002_0378(); return; }
	emu_movw(&emu_di, emu_bx.x);
	emu_andws(&emu_di, 0x7);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, emu_di,  0x2E));
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testb(&emu_cx.l, emu_get_memory8(emu_cs, emu_bx.x,  0x212));
	if (emu_flags.zf) { f__29E8_02D9_0002_0378(); return; }
	emu_andb(&emu_ax.l, 0x1F);
	emu_ip = 0x0345; emu_last_cs = 0x29E8; emu_last_ip = 0x02D9; emu_last_length = 0x0020; emu_last_crc = 0x75F0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_02D9_0002_0378()
 *
 * @name f__29E8_02D9_0002_0378
 * @implements 29E8:02D9:0002:0378 ()
 *
 * Called From: 29E8:02BE:0020:75F0
 * Called From: 29E8:02BE:0025:7E8E
 * Called From: 29E8:02D5:0020:75F0
 */
void f__29E8_02D9_0002_0378()
{
	f__29E8_0345_0005_0432(); return;
}

/**
 * Decompiled function f__29E8_02DB_0028_D16E()
 *
 * @name f__29E8_02DB_0028_D16E
 * @implements 29E8:02DB:0028:D16E ()
 *
 * Called From: 29E8:0295:0015:3E03
 */
void f__29E8_02DB_0028_D16E()
{
	emu_cmpb(&emu_ax.l, 0x4B);
	if (emu_flags.cf) { f__29E8_0337_0008_0748(); return; }
	emu_cmpb(&emu_ax.l, 0x6E);
	if (!emu_flags.cf) { emu_ip = 0x030D; emu_last_cs = 0x29E8; emu_last_ip = 0x02E1; emu_last_length = 0x0028; emu_last_crc = 0xD16E; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_bx.l, emu_ax.l);
	emu_subb(&emu_bx.l, 0x4B);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x200);
	if (!emu_flags.zf) { emu_ip = 0x02FC; emu_last_cs = 0x29E8; emu_last_ip = 0x02F1; emu_last_length = 0x0028; emu_last_crc = 0xD16E; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0303; emu_last_cs = 0x29E8; emu_last_ip = 0x02FA; emu_last_length = 0x0028; emu_last_crc = 0xD16E; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x442));
	f__29E8_0345_0005_0432(); return;
}

/**
 * Decompiled function f__29E8_0337_0008_0748()
 *
 * @name f__29E8_0337_0008_0748
 * @implements 29E8:0337:0008:0748 ()
 *
 * Called From: 29E8:02DD:0028:D16E
 */
void f__29E8_0337_0008_0748()
{
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { emu_ip = 0x033F; emu_last_cs = 0x29E8; emu_last_ip = 0x0339; emu_last_length = 0x0008; emu_last_crc = 0x0748; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x85);
	f__29E8_0345_0005_0432(); return;
}

/**
 * Decompiled function f__29E8_0343_0007_5AF2()
 *
 * @name f__29E8_0343_0007_5AF2
 * @implements 29E8:0343:0007:5AF2 ()
 *
 * Called From: 29E8:0290:0012:6096
 */
void f__29E8_0343_0007_5AF2()
{
	emu_movb(&emu_ax.l, 0x1B);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0345_0005_0432()
 *
 * @name f__29E8_0345_0005_0432
 * @implements 29E8:0345:0005:0432 ()
 *
 * Called From: 29E8:02D9:0002:0378
 * Called From: 29E8:0301:0028:D16E
 * Called From: 29E8:033D:0008:0748
 */
void f__29E8_0345_0005_0432()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0479_0009_7872()
 *
 * @name f__29E8_0479_0009_7872
 * @implements 29E8:0479:0009:7872 ()
 *
 * Called From: B4E6:03D6:000E:9E17
 * Called From: B527:01CA:0008:EC82
 */
void f__29E8_0479_0009_7872()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0482); f__29E8_026C_0015_4E04();
	f__29E8_0482_0002_00E2();
}

/**
 * Decompiled function f__29E8_0482_0002_00E2()
 *
 * @name f__29E8_0482_0002_00E2
 * @implements 29E8:0482:0002:00E2 ()
 *
 * Called From: 29E8:0482:0009:7872
 */
void f__29E8_0482_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0484_002B_6762()
 *
 * @name f__29E8_0484_002B_6762
 * @implements 29E8:0484:002B:6762 ()
 *
 * Called From: 29E8:08C3:0007:666E
 * Called From: 29E8:0E72:000A:2B70
 */
void f__29E8_0484_002B_6762()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x2);
	if (!emu_flags.zf) { f__29E8_04AA_0005_09BA(); return; }
	emu_movw(&emu_cx.x, 0x10);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x8E);
	emu_repne_scasb();
	if (emu_cx.x == 0) { f__29E8_04AA_0005_09BA(); return; }
	emu_movw(&emu_di, 0xAE);
	emu_decw(&emu_di);
	emu_subw(&emu_di, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04AA_0005_09BA()
 *
 * @name f__29E8_04AA_0005_09BA
 * @implements 29E8:04AA:0005:09BA ()
 *
 * Called From: 29E8:0493:002B:6762
 * Called From: 29E8:049F:002B:6762
 */
void f__29E8_04AA_0005_09BA()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04AF_003C_3CE9()
 *
 * @name f__29E8_04AF_003C_3CE9
 * @implements 29E8:04AF:003C:3CE9 ()
 *
 * Called From: B4E0:0017:000D:0761
 * Called From: B527:0011:0016:D14C
 * Called From: B527:0298:000A:0A62
 */
void f__29E8_04AF_003C_3CE9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x700E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_testw(&emu_ax.x, 0x800);
	if (emu_flags.zf) { f__29E8_04E9_0002_00E2(); return; }
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x232), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x234), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x236), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x238), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x23A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x23C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x23E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x240), emu_ax.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04E9_0002_00E2()
 *
 * @name f__29E8_04E9_0002_00E2
 * @implements 29E8:04E9:0002:00E2 ()
 *
 * Called From: 29E8:04BF:003C:3CE9
 */
void f__29E8_04E9_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04EB_0011_D0DB()
 *
 * @name f__29E8_04EB_0011_D0DB
 * @implements 29E8:04EB:0011:D0DB ()
 *
 * Called From: B4B8:1713:000C:AAAD
 * Called From: B4E0:013C:0024:C4AB
 * Called From: B527:001B:000A:0E22
 * Called From: B527:028E:0009:7823
 */
void f__29E8_04EB_0011_D0DB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x700E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04FC_0028_18FA()
 *
 * @name f__29E8_04FC_0028_18FA
 * @implements 29E8:04FC:0028:18FA ()
 *
 * Called From: 29E8:0648:0008:40B8
 * Called From: 29E8:073B:000F:6188
 * Called From: 29E8:08BC:000A:9E8C
 */
void f__29E8_04FC_0028_18FA()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (emu_flags.zf) { f__29E8_0533_0001_0186(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0533; emu_last_cs = 0x29E8; emu_last_ip = 0x0508; emu_last_length = 0x0028; emu_last_crc = 0x18FA; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x701B), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x050F; emu_last_length = 0x0028; emu_last_crc = 0x18FA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7015));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x76A6), emu_ax.x);
	if (emu_flags.cf) { emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x0518; emu_last_length = 0x0028; emu_last_crc = 0x18FA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7013));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (!emu_flags.zf) { f__29E8_0527_000D_D0E7(); return; }
	emu_push(0x0524); emu_ip = 0x0534; emu_last_cs = 0x29E8; emu_last_ip = 0x0521; emu_last_length = 0x0028; emu_last_crc = 0x18FA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0527_000D_D0E7()
 *
 * @name f__29E8_0527_000D_D0E7
 * @implements 29E8:0527:000D:D0E7 ()
 *
 * Called From: 29E8:051F:0028:18FA
 */
void f__29E8_0527_000D_D0E7()
{
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_movw(&emu_get_memory16(emu_cs, emu_di,  0xAF), emu_ax.x);
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0533_0001_0186()
 *
 * @name f__29E8_0533_0001_0186
 * @implements 29E8:0533:0001:0186 ()
 *
 * Called From: 29E8:0501:0028:18FA
 */
void f__29E8_0533_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0534_000E_9603()
 *
 * @name f__29E8_0534_000E_9603
 * @implements 29E8:0534:000E:9603 ()
 *
 * Called From: 29E8:0840:0003:057C
 * Called From: 29E8:08B1:0004:0B08
 */
void f__29E8_0534_000E_9603()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0542; emu_last_cs = 0x29E8; emu_last_ip = 0x053D; emu_last_length = 0x000E; emu_last_crc = 0x9603; emu_call(); return; } // Jump does not resolve
	f__29E8_0632_0005_0C4E(); return;
}

/**
 * Decompiled function f__29E8_0632_0005_0C4E()
 *
 * @name f__29E8_0632_0005_0C4E
 * @implements 29E8:0632:0005:0C4E ()
 *
 * Called From: 29E8:053F:000E:9603
 */
void f__29E8_0632_0005_0C4E()
{
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0643_0008_40B8()
 *
 * @name f__29E8_0643_0008_40B8
 * @implements 29E8:0643:0008:40B8 ()
 *
 * Called From: B4BE:001E:0005:14B2
 * Called From: B4BE:01C2:000E:34A4
 * Called From: B4BE:01DE:0005:14B2
 * Called From: B4BE:02CA:0005:14B2
 * Called From: B4BE:036B:0005:14B2
 * Called From: B4ED:05E3:0005:14B2
 * Called From: B503:0896:0005:14B2
 * Called From: B503:13C5:0008:3F32
 * Called From: B518:0511:0005:14B2
 */
void f__29E8_0643_0008_40B8()
{
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_pushf();
	emu_push(0x064B); f__29E8_04FC_0028_18FA();
	f__29E8_064B_0059_B24E();
}

/**
 * Decompiled function f__29E8_064B_0059_B24E()
 *
 * @name f__29E8_064B_0059_B24E
 * @implements 29E8:064B:0059:B24E ()
 *
 * Called From: 29E8:064B:0008:40B8
 */
void f__29E8_064B_0059_B24E()
{
	emu_cld();
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0663; emu_last_cs = 0x29E8; emu_last_ip = 0x065A; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (emu_flags.zf) { f__29E8_06A4_0014_FEF3(); return; }
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0675_002F_1431(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0673; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x067F; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x0684; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x7A);
	if (emu_flags.cf) { emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0688; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x0690; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	emu_ip = 0x0650; emu_last_cs = 0x29E8; emu_last_ip = 0x06A2; emu_last_length = 0x0059; emu_last_crc = 0xB24E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0650_0054_99CF()
 *
 * @name f__29E8_0650_0054_99CF
 * @implements 29E8:0650:0054:99CF ()
 *
 * Called From: 29E8:06A2:001A:EB4C
 */
void f__29E8_0650_0054_99CF()
{
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0663; emu_last_cs = 0x29E8; emu_last_ip = 0x065A; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (emu_flags.zf) { f__29E8_06A4_0014_FEF3(); return; }
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0675_002F_1431(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0673; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x067F; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x0684; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x7A);
	if (emu_flags.cf) { emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0688; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x0690; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	emu_ip = 0x0650; emu_last_cs = 0x29E8; emu_last_ip = 0x06A2; emu_last_length = 0x0054; emu_last_crc = 0x99CF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0675_002F_1431()
 *
 * @name f__29E8_0675_002F_1431
 * @implements 29E8:0675:002F:1431 ()
 *
 * Called From: 29E8:066F:0054:99CF
 * Called From: 29E8:066F:0059:B24E
 */
void f__29E8_0675_002F_1431()
{
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x067F; emu_last_length = 0x002F; emu_last_crc = 0x1431; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { f__29E8_068A_001A_EB4C(); return; }
	emu_cmpb(&emu_ax.l, 0x7A);
	if (emu_flags.cf) { f__29E8_06A6_0012_FBC3(); return; }
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x002F; emu_last_crc = 0x1431; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x0690; emu_last_length = 0x002F; emu_last_crc = 0x1431; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	emu_ip = 0x0650; emu_last_cs = 0x29E8; emu_last_ip = 0x06A2; emu_last_length = 0x002F; emu_last_crc = 0x1431; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_068A_001A_EB4C()
 *
 * @name f__29E8_068A_001A_EB4C
 * @implements 29E8:068A:001A:EB4C ()
 *
 * Called From: 29E8:0684:002F:1431
 */
void f__29E8_068A_001A_EB4C()
{
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x001A; emu_last_crc = 0xEB4C; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x0690; emu_last_length = 0x001A; emu_last_crc = 0xEB4C; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	f__29E8_0650_0054_99CF(); return;
}

/**
 * Decompiled function f__29E8_06A4_0014_FEF3()
 *
 * @name f__29E8_06A4_0014_FEF3
 * @implements 29E8:06A4:0014:FEF3 ()
 *
 * Called From: 29E8:0661:0054:99CF
 * Called From: 29E8:0661:0059:B24E
 */
void f__29E8_06A4_0014_FEF3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), emu_cx.x);
	emu_sti();
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__29E8_06BA_0006_29BA(); return; }
	emu_push(0x06B8); f__29E8_026C_0015_4E04();
	f__29E8_06B8_0008_69BA();
}

/**
 * Decompiled function f__29E8_06A6_0012_FBC3()
 *
 * @name f__29E8_06A6_0012_FBC3
 * @implements 29E8:06A6:0012:FBC3 ()
 *
 * Called From: 29E8:0688:002F:1431
 */
void f__29E8_06A6_0012_FBC3()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), emu_cx.x);
	emu_sti();
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x06BA; emu_last_cs = 0x29E8; emu_last_ip = 0x06B3; emu_last_length = 0x0012; emu_last_crc = 0xFBC3; emu_call(); return; } // Jump does not resolve
	emu_push(0x06B8); f__29E8_026C_0015_4E04();
	f__29E8_06B8_0008_69BA();
}

/**
 * Decompiled function f__29E8_06B8_0008_69BA()
 *
 * @name f__29E8_06B8_0008_69BA
 * @implements 29E8:06B8:0008:69BA ()
 *
 * Called From: 29E8:06B8:0012:FBC3
 * Called From: 29E8:06B8:0014:FEF3
 */
void f__29E8_06B8_0008_69BA()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_06BA_0006_29BA()
 *
 * @name f__29E8_06BA_0006_29BA
 * @implements 29E8:06BA:0006:29BA ()
 *
 * Called From: 29E8:06B3:0014:FEF3
 */
void f__29E8_06BA_0006_29BA()
{
	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_072F_000F_6188()
 *
 * @name f__29E8_072F_000F_6188
 * @implements 29E8:072F:000F:6188 ()
 *
 * Called From: B4A2:003F:000B:3C7B
 * Called From: B4E6:028C:0091:88EF
 */
void f__29E8_072F_000F_6188()
{
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_xorw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	emu_popf();
	emu_push(0x073E); f__29E8_04FC_0028_18FA();
	f__29E8_073E_0001_0196();
}

/**
 * Decompiled function f__29E8_073E_0001_0196()
 *
 * @name f__29E8_073E_0001_0196
 * @implements 29E8:073E:0001:0196 ()
 *
 * Called From: 29E8:073E:000F:6188
 */
void f__29E8_073E_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_073F_000E_A6E4()
 *
 * @name f__29E8_073F_000E_A6E4
 * @implements 29E8:073F:000E:A6E4 ()
 *
 * Called From: 10E4:0491:000E:EF42
 * Called From: 10E4:2285:0007:29BA
 * Called From: B4AE:0003:0008:38FA
 * Called From: B4B8:2199:0006:053A
 * Called From: B4DA:0BEE:003F:67FA
 * Called From: B4DA:107D:0006:053A
 * Called From: B4DA:148D:0005:137A
 * Called From: B4DA:163F:0017:682C
 * Called From: B4DA:16AF:0006:053A
 * Called From: B4E0:001D:0006:053A
 * Called From: B4E6:01F5:0005:137A
 * Called From: B4ED:01EF:0006:053A
 * Called From: B503:0281:0008:F3FA
 * Called From: B503:0311:0008:F67A
 * Called From: B503:0524:0008:F07A
 * Called From: B503:07ED:0005:137A
 * Called From: B511:0F92:0005:137A
 * Called From: B511:0F92:000C:AE3B
 * Called From: B511:14D3:0008:F07A
 * Called From: B518:01DD:0008:F67A
 * Called From: B518:0507:0005:137A
 * Called From: B518:051A:0009:C3FA
 * Called From: B518:083B:000D:FE70
 * Called From: B518:0870:0007:29BA
 * Called From: B53B:01CC:0008:F17A
 */
void f__29E8_073F_000E_A6E4()
{
	emu_push(emu_ax.x);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_ax.x);
	emu_popf();
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_074D_0066_2323()
 *
 * @name f__29E8_074D_0066_2323
 * @implements 29E8:074D:0066:2323 ()
 *
 * Called From: 29E8:081A:0003:067E
 * Called From: 29E8:08AD:0003:04C8
 */
void f__29E8_074D_0066_2323()
{
	emu_push(emu_ds);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0765_004E_500F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7013));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7013), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x0771; emu_last_length = 0x0066; emu_last_crc = 0x2323; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x07B3; emu_last_cs = 0x29E8; emu_last_ip = 0x0775; emu_last_length = 0x0066; emu_last_crc = 0x2323; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0787; emu_last_cs = 0x29E8; emu_last_ip = 0x0782; emu_last_length = 0x0066; emu_last_crc = 0x2323; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x07A3; emu_last_cs = 0x29E8; emu_last_ip = 0x079E; emu_last_length = 0x0066; emu_last_crc = 0x2323; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x07B1; emu_last_length = 0x0066; emu_last_crc = 0x2323; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0765_004E_500F()
 *
 * @name f__29E8_0765_004E_500F
 * @implements 29E8:0765:004E:500F ()
 *
 * Called From: 29E8:0760:0066:2323
 */
void f__29E8_0765_004E_500F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7013), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { f__29E8_07EB_000F_39B9(); return; }
	emu_cmpb(&emu_ax.l, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07B3_0047_9D3A(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0787_002C_E16F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x07A3; emu_last_cs = 0x29E8; emu_last_ip = 0x079E; emu_last_length = 0x004E; emu_last_crc = 0x500F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x07B1; emu_last_length = 0x004E; emu_last_crc = 0x500F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0787_002C_E16F()
 *
 * @name f__29E8_0787_002C_E16F
 * @implements 29E8:0787:002C:E16F ()
 *
 * Called From: 29E8:0782:004E:500F
 */
void f__29E8_0787_002C_E16F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_07A3_0010_97B0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x07B1; emu_last_length = 0x002C; emu_last_crc = 0xE16F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_07A3_0010_97B0()
 *
 * @name f__29E8_07A3_0010_97B0
 * @implements 29E8:07A3:0010:97B0 ()
 *
 * Called From: 29E8:079E:002C:E16F
 */
void f__29E8_07A3_0010_97B0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	f__29E8_07EB_000F_39B9(); return;
}

/**
 * Decompiled function f__29E8_07B3_0047_9D3A()
 *
 * @name f__29E8_07B3_0047_9D3A
 * @implements 29E8:07B3:0047:9D3A ()
 *
 * Called From: 29E8:0775:004E:500F
 */
void f__29E8_07B3_0047_9D3A()
{
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07EB_000F_39B9(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x07C7; emu_last_cs = 0x29E8; emu_last_ip = 0x07C2; emu_last_length = 0x0047; emu_last_crc = 0x9D3A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x07E0; emu_last_cs = 0x29E8; emu_last_ip = 0x07DB; emu_last_length = 0x0047; emu_last_crc = 0x9D3A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_pop(&emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x0047; emu_last_crc = 0x9D3A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_07EB_000F_39B9()
 *
 * @name f__29E8_07EB_000F_39B9
 * @implements 29E8:07EB:000F:39B9 ()
 *
 * Called From: 29E8:0771:004E:500F
 * Called From: 29E8:07B1:0010:97B0
 * Called From: 29E8:07B5:0047:9D3A
 */
void f__29E8_07EB_000F_39B9()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x000F; emu_last_crc = 0x39B9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_07FA_0020_41C7()
 *
 * @name f__29E8_07FA_0020_41C7
 * @implements 29E8:07FA:0020:41C7 ()
 *
 * Called From: 10E4:049B:0005:1F2A
 * Called From: B503:08A3:0005:1F2A
 * Called From: B53B:01D1:0005:1F2A
 */
void f__29E8_07FA_0020_41C7()
{
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x081A; emu_last_cs = 0x29E8; emu_last_ip = 0x080A; emu_last_length = 0x0020; emu_last_crc = 0x41C7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (!emu_flags.zf) { f__29E8_081A_0003_067E(); return; }
	emu_sti();
	f__29E8_0804_0016_EFB2(); return;
}

/**
 * Decompiled function f__29E8_0804_0016_EFB2()
 *
 * @name f__29E8_0804_0016_EFB2
 * @implements 29E8:0804:0016:EFB2 ()
 *
 * Called From: 29E8:0818:0020:41C7
 * Called From: 29E8:0818:0016:EFB2
 * Called From: 29E8:0837:0023:969A
 */
void f__29E8_0804_0016_EFB2()
{
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { f__29E8_081A_0003_067E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (!emu_flags.zf) { f__29E8_081A_0003_067E(); return; }
	emu_sti();
	f__29E8_0804_0016_EFB2(); return;
}

/**
 * Decompiled function f__29E8_081A_0003_067E()
 *
 * @name f__29E8_081A_0003_067E
 * @implements 29E8:081A:0003:067E ()
 *
 * Called From: 29E8:080A:0016:EFB2
 * Called From: 29E8:0815:0016:EFB2
 * Called From: 29E8:0815:0020:41C7
 */
void f__29E8_081A_0003_067E()
{
	emu_push(0x081D); f__29E8_074D_0066_2323();
	f__29E8_081D_0023_969A();
}

/**
 * Decompiled function f__29E8_081D_0023_969A()
 *
 * @name f__29E8_081D_0023_969A
 * @implements 29E8:081D:0023:969A ()
 *
 * Called From: 29E8:081D:0003:067E
 */
void f__29E8_081D_0023_969A()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), emu_cx.x);
	emu_sti();
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x0804; emu_last_cs = 0x29E8; emu_last_ip = 0x0832; emu_last_length = 0x0023; emu_last_crc = 0x969A; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { f__29E8_0804_0016_EFB2(); return; }
	emu_cmpb(&emu_ax.l, 0x7A);
	if (!emu_flags.cf) { emu_ip = 0x0804; emu_last_cs = 0x29E8; emu_last_ip = 0x083B; emu_last_length = 0x0023; emu_last_crc = 0x969A; emu_call(); return; } // Jump does not resolve
	emu_push(0x0840); f__29E8_026C_0015_4E04();
	f__29E8_0840_0003_057C();
}

/**
 * Decompiled function f__29E8_0840_0003_057C()
 *
 * @name f__29E8_0840_0003_057C
 * @implements 29E8:0840:0003:057C ()
 *
 * Called From: 29E8:0840:0023:969A
 */
void f__29E8_0840_0003_057C()
{
	emu_push(0x0843); f__29E8_0534_000E_9603();
	f__29E8_0843_0008_4E62();
}

/**
 * Decompiled function f__29E8_0843_0008_4E62()
 *
 * @name f__29E8_0843_0008_4E62
 * @implements 29E8:0843:0008:4E62 ()
 *
 * Called From: 29E8:0843:0003:057C
 */
void f__29E8_0843_0008_4E62()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0897_0016_EFB2()
 *
 * @name f__29E8_0897_0016_EFB2
 * @implements 29E8:0897:0016:EFB2 ()
 *
 * Called From: 29E8:08AB:0016:EFB2
 * Called From: B4A2:0048:0009:F442
 * Called From: B4E6:0295:0009:F742
 */
void f__29E8_0897_0016_EFB2()
{
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x08AD; emu_last_cs = 0x29E8; emu_last_ip = 0x089D; emu_last_length = 0x0016; emu_last_crc = 0xEFB2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (!emu_flags.zf) { f__29E8_08AD_0003_04C8(); return; }
	emu_sti();
	f__29E8_0897_0016_EFB2(); return;
}

/**
 * Decompiled function f__29E8_08AD_0003_04C8()
 *
 * @name f__29E8_08AD_0003_04C8
 * @implements 29E8:08AD:0003:04C8 ()
 *
 * Called From: 29E8:08A8:0016:EFB2
 */
void f__29E8_08AD_0003_04C8()
{
	emu_push(0x08B0); f__29E8_074D_0066_2323();
	f__29E8_08B0_0004_0B08();
}

/**
 * Decompiled function f__29E8_08B0_0004_0B08()
 *
 * @name f__29E8_08B0_0004_0B08
 * @implements 29E8:08B0:0004:0B08 ()
 *
 * Called From: 29E8:08B0:0003:04C8
 */
void f__29E8_08B0_0004_0B08()
{
	emu_sti();
	emu_push(0x08B4); f__29E8_0534_000E_9603();
	f__29E8_08B4_0001_0196();
}

/**
 * Decompiled function f__29E8_08B4_0001_0196()
 *
 * @name f__29E8_08B4_0001_0196
 * @implements 29E8:08B4:0001:0196 ()
 *
 * Called From: 29E8:08B4:0004:0B08
 */
void f__29E8_08B4_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_08B5_000A_9E8C()
 *
 * @name f__29E8_08B5_000A_9E8C
 * @implements 29E8:08B5:000A:9E8C ()
 *
 * Called From: B4A2:00B0:001B:68C8
 * Called From: B4A2:00B0:0034:53D6
 * Called From: B4A2:00C4:0009:3DA3
 * Called From: B4A2:00C4:0014:43D9
 * Called From: B4DA:05A7:000E:9E95
 * Called From: B4DA:05B5:000E:8DBB
 * Called From: B4DA:06C6:000E:9E95
 * Called From: B4DA:06D4:000E:8DBB
 */
void f__29E8_08B5_000A_9E8C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(0x08BF); f__29E8_04FC_0028_18FA();
	f__29E8_08BF_0007_666E();
}

/**
 * Decompiled function f__29E8_08BF_0007_666E()
 *
 * @name f__29E8_08BF_0007_666E
 * @implements 29E8:08BF:0007:666E ()
 *
 * Called From: 29E8:08BF:000A:9E8C
 */
void f__29E8_08BF_0007_666E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08C6); f__29E8_0484_002B_6762();
	f__29E8_08C6_001F_4234();
}

/**
 * Decompiled function f__29E8_08C6_001F_4234()
 *
 * @name f__29E8_08C6_001F_4234
 * @implements 29E8:08C6:001F:4234 ()
 *
 * Called From: 29E8:08C6:0007:666E
 */
void f__29E8_08C6_001F_4234()
{
	emu_addws(&emu_sp, 0x2);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_di, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_di, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_andb(&emu_ax.l, emu_get_memory8(emu_cs, emu_di,  0x232));
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0971_0071_A820()
 *
 * @name f__29E8_0971_0071_A820
 * @implements 29E8:0971:0071:A820 ()
 *
 * Called From: 1DB6:01AB:0007:2D2A
 */
void f__29E8_0971_0071_A820()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, 0x40);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x17));
	emu_testb(&emu_ax.l, 0x40);
	if (emu_flags.zf) { f__29E8_0989_0059_D586(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x1);
	emu_testb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { emu_ip = 0x0993; emu_last_cs = 0x29E8; emu_last_ip = 0x098B; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x099D; emu_last_cs = 0x29E8; emu_last_ip = 0x0995; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x237), 0x10);
	emu_andb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x18));
	emu_shlb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_andb(&emu_ax.l, 0xC);
	emu_orb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x96));
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { emu_ip = 0x09BA; emu_last_cs = 0x29E8; emu_last_ip = 0x09B5; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0071; emu_last_crc = 0xA820; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_0989_0059_D586()
 *
 * @name f__29E8_0989_0059_D586
 * @implements 29E8:0989:0059:D586 ()
 *
 * Called From: 29E8:0981:0071:A820
 */
void f__29E8_0989_0059_D586()
{
	emu_testb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { f__29E8_0993_004F_9153(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x099D; emu_last_cs = 0x29E8; emu_last_ip = 0x0995; emu_last_length = 0x0059; emu_last_crc = 0xD586; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x237), 0x10);
	emu_andb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x18));
	emu_shlb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_andb(&emu_ax.l, 0xC);
	emu_orb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x96));
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { emu_ip = 0x09BA; emu_last_cs = 0x29E8; emu_last_ip = 0x09B5; emu_last_length = 0x0059; emu_last_crc = 0xD586; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x0059; emu_last_crc = 0xD586; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0059; emu_last_crc = 0xD586; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0059; emu_last_crc = 0xD586; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0059; emu_last_crc = 0xD586; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_0993_004F_9153()
 *
 * @name f__29E8_0993_004F_9153
 * @implements 29E8:0993:004F:9153 ()
 *
 * Called From: 29E8:098B:0059:D586
 */
void f__29E8_0993_004F_9153()
{
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { f__29E8_099D_0045_AF0A(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x237), 0x10);
	emu_andb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x18));
	emu_shlb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_andb(&emu_ax.l, 0xC);
	emu_orb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x96));
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { emu_ip = 0x09BA; emu_last_cs = 0x29E8; emu_last_ip = 0x09B5; emu_last_length = 0x004F; emu_last_crc = 0x9153; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x004F; emu_last_crc = 0x9153; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x004F; emu_last_crc = 0x9153; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x004F; emu_last_crc = 0x9153; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x004F; emu_last_crc = 0x9153; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_099D_0045_AF0A()
 *
 * @name f__29E8_099D_0045_AF0A
 * @implements 29E8:099D:0045:AF0A ()
 *
 * Called From: 29E8:0995:004F:9153
 */
void f__29E8_099D_0045_AF0A()
{
	emu_andb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x18));
	emu_shlb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_andb(&emu_ax.l, 0xC);
	emu_orb(&emu_ax.h, emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x96));
	emu_testb(&emu_ax.l, 0x8);
	if (emu_flags.zf) { f__29E8_09BA_0028_F3D1(); return; }
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x0045; emu_last_crc = 0xAF0A; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0045; emu_last_crc = 0xAF0A; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0045; emu_last_crc = 0xAF0A; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0045; emu_last_crc = 0xAF0A; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_09BA_0028_F3D1()
 *
 * @name f__29E8_09BA_0028_F3D1
 * @implements 29E8:09BA:0028:F3D1 ()
 *
 * Called From: 29E8:09B5:0045:AF0A
 */
void f__29E8_09BA_0028_F3D1()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_E6DA(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0028; emu_last_crc = 0xF3D1; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0028; emu_last_crc = 0xF3D1; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0028; emu_last_crc = 0xF3D1; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_09C9_0019_E6DA()
 *
 * @name f__29E8_09C9_0019_E6DA
 * @implements 29E8:09C9:0019:E6DA ()
 *
 * Called From: 29E8:09C1:0028:F3D1
 */
void f__29E8_09C9_0019_E6DA()
{
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_8796(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0019; emu_last_crc = 0xE6DA; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0019; emu_last_crc = 0xE6DA; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_09D3_000F_8796()
 *
 * @name f__29E8_09D3_000F_8796
 * @implements 29E8:09D3:000F:8796 ()
 *
 * Called From: 29E8:09CB:0019:E6DA
 */
void f__29E8_09D3_000F_8796()
{
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_154E(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x000F; emu_last_crc = 0x8796; emu_call(); // Jump does not resolve
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_09DD_0005_154E()
 *
 * @name f__29E8_09DD_0005_154E
 * @implements 29E8:09DD:0005:154E ()
 *
 * Called From: 29E8:09D5:000F:8796
 */
void f__29E8_09DD_0005_154E()
{
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); f__0070_0108_0005_1CF6();
	f__29E8_09E2_0016_404E();
}

/**
 * Decompiled function f__29E8_09E2_0016_404E()
 *
 * @name f__29E8_09E2_0016_404E
 * @implements 29E8:09E2:0016:404E ()
 *
 * Called From: 29E8:09E2:0005:154E
 */
void f__29E8_09E2_0016_404E()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x258), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x25A), emu_es);
	emu_movw(&emu_bx.x, emu_cs);
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_dx.x, 0xD47);
	emu_movw(&emu_ax.x, 0x2509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09F8); f__0070_0108_0005_1CF6();
	f__29E8_09F8_0005_17EE();
}

/**
 * Decompiled function f__29E8_09F8_0005_17EE()
 *
 * @name f__29E8_09F8_0005_17EE
 * @implements 29E8:09F8:0005:17EE ()
 *
 * Called From: 29E8:09F8:0016:404E
 */
void f__29E8_09F8_0005_17EE()
{
	emu_movw(&emu_ax.x, 0x3523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09FD); f__0070_0108_0005_1CF6();
	f__29E8_09FD_0016_5D4F();
}

/**
 * Decompiled function f__29E8_09FD_0016_5D4F()
 *
 * @name f__29E8_09FD_0016_5D4F
 * @implements 29E8:09FD:0016:5D4F ()
 *
 * Called From: 29E8:09FD:0005:17EE
 */
void f__29E8_09FD_0016_5D4F()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x25C), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x25E), emu_es);
	emu_movw(&emu_bx.x, emu_cs);
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_dx.x, 0xF79);
	emu_movw(&emu_ax.x, 0x2523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0A13); f__0070_0108_0005_1CF6();
	f__29E8_0A13_0006_05AE();
}

/**
 * Decompiled function f__29E8_0A13_0006_05AE()
 *
 * @name f__29E8_0A13_0006_05AE
 * @implements 29E8:0A13:0006:05AE ()
 *
 * Called From: 29E8:0A13:0016:5D4F
 */
void f__29E8_0A13_0006_05AE()
{
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0A19_002A_1614()
 *
 * @name f__29E8_0A19_002A_1614
 * @implements 29E8:0A19:002A:1614 ()
 *
 * Called From: 29E8:0C4F:0012:B956
 * Called From: 29E8:0C73:0009:9B96
 * Called From: 29E8:0C87:0014:BD7A
 */
void f__29E8_0A19_002A_1614()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	emu_movw(&emu_si, emu_ax.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_andw(&emu_ax.x, 0xFF);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_ax.x);
	if (emu_flags.zf) { f__29E8_0A43_0007_5BE2(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0xAF), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0A43_0007_5BE2()
 *
 * @name f__29E8_0A43_0007_5BE2
 * @implements 29E8:0A43:0007:5BE2 ()
 *
 * Called From: 29E8:0A2F:002A:1614
 */
void f__29E8_0A43_0007_5BE2()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0A4A_0040_4DD0()
 *
 * @name f__29E8_0A4A_0040_4DD0
 * @implements 29E8:0A4A:0040:4DD0 ()
 *
 * Called From: 10E4:04B4:0019:8F63
 * Called From: 29A3:00B4:0009:C343
 * Called From: 29E8:0EFE:0005:0D72
 * Called From: B4E0:03FF:000A:5142
 * Called From: B4E0:0409:000A:5242
 */
void f__29E8_0A4A_0040_4DD0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA98), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA9A), emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { f__29E8_0A8A_000A_9CA6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x6794), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A8A; emu_last_cs = 0x29E8; emu_last_ip = 0x0A85; emu_last_length = 0x0040; emu_last_crc = 0x4DD0; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0D3A; emu_last_cs = 0x29E8; emu_last_ip = 0x0A87; emu_last_length = 0x0040; emu_last_crc = 0x4DD0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0A8A_000A_9CA6()
 *
 * @name f__29E8_0A8A_000A_9CA6
 * @implements 29E8:0A8A:000A:9CA6 ()
 *
 * Called From: 29E8:0A79:0040:4DD0
 */
void f__29E8_0A8A_000A_9CA6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__29E8_0AD6_0010_CBAB(); return; }
	emu_ip = 0x0D3A; emu_last_cs = 0x29E8; emu_last_ip = 0x0A91; emu_last_length = 0x000A; emu_last_crc = 0x9CA6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0AD6_0010_CBAB()
 *
 * @name f__29E8_0AD6_0010_CBAB
 * @implements 29E8:0AD6:0010:CBAB ()
 *
 * Called From: 29E8:0A8F:000A:9CA6
 */
void f__29E8_0AD6_0010_CBAB()
{
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x0AE6; emu_last_cs = 0x29E8; emu_last_ip = 0x0AE1; emu_last_length = 0x0010; emu_last_crc = 0xCBAB; emu_call(); return; } // Jump does not resolve
	f__29E8_0C40_0012_B956(); return;
}

/**
 * Decompiled function f__29E8_0C40_0012_B956()
 *
 * @name f__29E8_0C40_0012_B956
 * @implements 29E8:0C40:0012:B956 ()
 *
 * Called From: 29E8:0AE3:0010:CBAB
 */
void f__29E8_0C40_0012_B956()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C52); f__29E8_0A19_002A_1614();
	f__29E8_0C52_0018_6700();
}

/**
 * Decompiled function f__29E8_0C52_0018_6700()
 *
 * @name f__29E8_0C52_0018_6700
 * @implements 29E8:0C52:0018:6700 ()
 *
 * Called From: 29E8:0C52:0012:B956
 */
void f__29E8_0C52_0018_6700()
{
	emu_addws(&emu_sp, 0x2);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__29E8_0C6A_0003_0458(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (emu_flags.zf) { f__29E8_0C6D_0009_9B96(); return; }
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.zf) { f__29E8_0C6D_0009_9B96(); return; }
	emu_cmpb(&emu_ax.l, 0x42);
	if (emu_flags.zf) { f__29E8_0C6D_0009_9B96(); return; }
	f__29E8_0C95_008E_A3E1(); return;
}

/**
 * Decompiled function f__29E8_0C6A_0003_0458()
 *
 * @name f__29E8_0C6A_0003_0458
 * @implements 29E8:0C6A:0003:0458 ()
 *
 * Called From: 29E8:0C57:0018:6700
 */
void f__29E8_0C6A_0003_0458()
{
	f__29E8_0D31_0016_097B(); return;
}

/**
 * Decompiled function f__29E8_0C6D_0009_9B96()
 *
 * @name f__29E8_0C6D_0009_9B96
 * @implements 29E8:0C6D:0009:9B96 ()
 *
 * Called From: 29E8:0C5E:0018:6700
 * Called From: 29E8:0C62:0018:6700
 * Called From: 29E8:0C66:0018:6700
 */
void f__29E8_0C6D_0009_9B96()
{
	emu_push(emu_get_memory16(emu_cs, 0x00,  0xA98));
	emu_push(emu_cs);
	emu_push(0x0C76); f__29E8_0A19_002A_1614();
	f__29E8_0C76_0014_BD7A();
}

/**
 * Decompiled function f__29E8_0C76_0014_BD7A()
 *
 * @name f__29E8_0C76_0014_BD7A
 * @implements 29E8:0C76:0014:BD7A ()
 *
 * Called From: 29E8:0C76:0009:9B96
 */
void f__29E8_0C76_0014_BD7A()
{
	emu_addws(&emu_sp, 0x2);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0C6A; emu_last_cs = 0x29E8; emu_last_ip = 0x0C7B; emu_last_length = 0x0014; emu_last_crc = 0xBD7A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_get_memory16(emu_cs, 0x00,  0xA9A));
	emu_push(emu_cs);
	emu_push(0x0C8A); f__29E8_0A19_002A_1614();
	f__29E8_0C8A_0099_79C5();
}

/**
 * Decompiled function f__29E8_0C8A_0099_79C5()
 *
 * @name f__29E8_0C8A_0099_79C5
 * @implements 29E8:0C8A:0099:79C5 ()
 *
 * Called From: 29E8:0C8A:0014:BD7A
 */
void f__29E8_0C8A_0099_79C5()
{
	emu_addws(&emu_sp, 0x2);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0C6A; emu_last_cs = 0x29E8; emu_last_ip = 0x0C8F; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_movw(&emu_bx.x, 0x101);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (emu_flags.zf) { f__29E8_0CBB_0068_F9E7(); return; }
	emu_cmpb(&emu_ax.l, 0x7F);
	if (emu_flags.zf) { emu_ip = 0x0CBB; emu_last_cs = 0x29E8; emu_last_ip = 0x0CA1; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_ax.h, 0x8);
	if (emu_flags.zf) { f__29E8_0CC0_0063_88D7(); return; }
	emu_xorb(&emu_bx.l, emu_bx.l);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x800);
	if (!emu_flags.zf) { emu_ip = 0x0CC0; emu_last_cs = 0x29E8; emu_last_ip = 0x0CB1; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.zf) { f__29E8_0CC0_0063_88D7(); return; }
	emu_cmpb(&emu_ax.l, 0x42);
	if (emu_flags.zf) { f__29E8_0CC0_0063_88D7(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_di, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_notb(&emu_bx.h, emu_bx.h);
	emu_testb(&emu_bx.l, emu_get_memory8(emu_cs, emu_di,  0x232));
	if (emu_flags.zf) { emu_ip = 0x0CE7; emu_last_cs = 0x29E8; emu_last_ip = 0x0CD7; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0CE7; emu_last_cs = 0x29E8; emu_last_ip = 0x0CE0; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_andb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.h);
	emu_orb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.l);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0CFB; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x7D);
	if (emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0D02; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA94), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA96), emu_ax.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_movw(&emu_bx.x, 0xA94);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7011));
	emu_push(emu_cs); emu_push(0x0D23); emu_cs = 0x1FB5; emu_ip = 0x1BBF; emu_last_cs = 0x29E8; emu_last_ip = 0x0D1E; emu_last_length = 0x0099; emu_last_crc = 0x79C5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0C95_008E_A3E1()
 *
 * @name f__29E8_0C95_008E_A3E1
 * @implements 29E8:0C95:008E:A3E1 ()
 *
 * Called From: 29E8:0C68:0018:6700
 */
void f__29E8_0C95_008E_A3E1()
{
	emu_movw(&emu_bx.x, 0x101);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (emu_flags.zf) { emu_ip = 0x0CBB; emu_last_cs = 0x29E8; emu_last_ip = 0x0C9D; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x7F);
	if (emu_flags.zf) { emu_ip = 0x0CBB; emu_last_cs = 0x29E8; emu_last_ip = 0x0CA1; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_ax.h, 0x8);
	if (emu_flags.zf) { f__29E8_0CC0_0063_88D7(); return; }
	emu_xorb(&emu_bx.l, emu_bx.l);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x800);
	if (!emu_flags.zf) { emu_ip = 0x0CC0; emu_last_cs = 0x29E8; emu_last_ip = 0x0CB1; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.zf) { emu_ip = 0x0CC0; emu_last_cs = 0x29E8; emu_last_ip = 0x0CB5; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x42);
	if (emu_flags.zf) { emu_ip = 0x0CC0; emu_last_cs = 0x29E8; emu_last_ip = 0x0CB9; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_di, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_notb(&emu_bx.h, emu_bx.h);
	emu_testb(&emu_bx.l, emu_get_memory8(emu_cs, emu_di,  0x232));
	if (emu_flags.zf) { f__29E8_0CE7_003C_254A(); return; }
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0CE7; emu_last_cs = 0x29E8; emu_last_ip = 0x0CE0; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_andb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.h);
	emu_orb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.l);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0CFB; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x7D);
	if (emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0D02; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA94), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA96), emu_ax.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_movw(&emu_bx.x, 0xA94);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7011));
	emu_push(emu_cs); emu_push(0x0D23); emu_cs = 0x1FB5; emu_ip = 0x1BBF; emu_last_cs = 0x29E8; emu_last_ip = 0x0D1E; emu_last_length = 0x008E; emu_last_crc = 0xA3E1; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0CBB_0068_F9E7()
 *
 * @name f__29E8_0CBB_0068_F9E7
 * @implements 29E8:0CBB:0068:F9E7 ()
 *
 * Called From: 29E8:0C9D:0099:79C5
 */
void f__29E8_0CBB_0068_F9E7()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_di, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_notb(&emu_bx.h, emu_bx.h);
	emu_testb(&emu_bx.l, emu_get_memory8(emu_cs, emu_di,  0x232));
	if (emu_flags.zf) { f__29E8_0CE7_003C_254A(); return; }
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x1);
	if (!emu_flags.zf) { f__29E8_0CE7_003C_254A(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_andb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.h);
	emu_orb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.l);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { f__29E8_0D2C_0005_14AE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x7D);
	if (emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0D02; emu_last_length = 0x0068; emu_last_crc = 0xF9E7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA94), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA96), emu_ax.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_movw(&emu_bx.x, 0xA94);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7011));
	emu_push(emu_cs); emu_push(0x0D23); emu_cs = 0x1FB5; emu_ip = 0x1BBF; emu_last_cs = 0x29E8; emu_last_ip = 0x0D1E; emu_last_length = 0x0068; emu_last_crc = 0xF9E7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0CC0_0063_88D7()
 *
 * @name f__29E8_0CC0_0063_88D7
 * @implements 29E8:0CC0:0063:88D7 ()
 *
 * Called From: 29E8:0CA6:008E:A3E1
 * Called From: 29E8:0CA6:0099:79C5
 * Called From: 29E8:0CB5:0099:79C5
 * Called From: 29E8:0CB9:0099:79C5
 */
void f__29E8_0CC0_0063_88D7()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_di, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_notb(&emu_bx.h, emu_bx.h);
	emu_testb(&emu_bx.l, emu_get_memory8(emu_cs, emu_di,  0x232));
	if (emu_flags.zf) { f__29E8_0CE7_003C_254A(); return; }
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0CE7; emu_last_cs = 0x29E8; emu_last_ip = 0x0CE0; emu_last_length = 0x0063; emu_last_crc = 0x88D7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_si);
	emu_andb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.h);
	emu_orb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.l);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0CFB; emu_last_length = 0x0063; emu_last_crc = 0x88D7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x7D);
	if (emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0D02; emu_last_length = 0x0063; emu_last_crc = 0x88D7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA94), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA96), emu_ax.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_movw(&emu_bx.x, 0xA94);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7011));
	emu_push(emu_cs); emu_push(0x0D23); emu_cs = 0x1FB5; emu_ip = 0x1BBF; emu_last_cs = 0x29E8; emu_last_ip = 0x0D1E; emu_last_length = 0x0063; emu_last_crc = 0x88D7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0CE7_003C_254A()
 *
 * @name f__29E8_0CE7_003C_254A
 * @implements 29E8:0CE7:003C:254A ()
 *
 * Called From: 29E8:0CD7:0063:88D7
 * Called From: 29E8:0CD7:0068:F9E7
 * Called From: 29E8:0CD7:008E:A3E1
 * Called From: 29E8:0CE0:0068:F9E7
 */
void f__29E8_0CE7_003C_254A()
{
	emu_andb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.h);
	emu_orb(&emu_get_memory8(emu_cs, emu_di,  0x232), emu_bx.l);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { f__29E8_0D2C_0005_14AE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, 0x7D);
	if (emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x29E8; emu_last_ip = 0x0D02; emu_last_length = 0x003C; emu_last_crc = 0x254A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA94), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xA96), emu_ax.x);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_movw(&emu_bx.x, 0xA94);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7011));
	emu_push(emu_cs); emu_push(0x0D23); emu_cs = 0x1FB5; emu_ip = 0x1BBF; emu_last_cs = 0x29E8; emu_last_ip = 0x0D1E; emu_last_length = 0x003C; emu_last_crc = 0x254A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0D2C_0005_14AE()
 *
 * @name f__29E8_0D2C_0005_14AE
 * @implements 29E8:0D2C:0005:14AE ()
 *
 * Called From: 29E8:0CFB:003C:254A
 * Called From: 29E8:0CFB:0068:F9E7
 */
void f__29E8_0D2C_0005_14AE()
{
	emu_movw(&emu_ax.x, 0x1);
	f__29E8_0D3A_000D_AE2D(); return;
}

/**
 * Decompiled function f__29E8_0D31_0016_097B()
 *
 * @name f__29E8_0D31_0016_097B
 * @implements 29E8:0D31:0016:097B ()
 *
 * Called From: 29E8:0C6A:0003:0458
 */
void f__29E8_0D31_0016_097B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B1), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0D3A_000D_AE2D()
 *
 * @name f__29E8_0D3A_000D_AE2D
 * @implements 29E8:0D3A:000D:AE2D ()
 *
 * Called From: 29E8:0D2F:0005:14AE
 */
void f__29E8_0D3A_000D_AE2D()
{
	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0D47_0096_DF8B()
 *
 * @name f__29E8_0D47_0096_DF8B
 * @implements 29E8:0D47:0096:DF8B ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__29E8_0D47_0096_DF8B()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0xFC);
	emu_movw(&emu_ax.x, 0x40);
	emu_movw(&emu_es, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x17), 0x40);
	if (emu_flags.zf) { f__29E8_0D69_0074_75F4(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x17), 0x20);
	if (emu_flags.zf) { emu_ip = 0x0D77; emu_last_cs = 0x29E8; emu_last_ip = 0x0D6F; emu_last_length = 0x0096; emu_last_crc = 0xDF8B; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x96), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0096; emu_last_crc = 0xDF8B; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x0);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), emu_dx.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_cld();
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_bx.x, 0x101);
	emu_inb(&emu_ax.l, 0x60);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x254));
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x242), emu_ax.l);
	emu_incw(&emu_bx.x);
	emu_andws(&emu_bx.x, 0xF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x254), emu_bx.x);
	emu_movw(&emu_bx.x, 0x101);
	emu_cmpb(&emu_ax.l, 0xE1);
	if (!emu_flags.zf) { emu_ip = 0x0DC7; emu_last_cs = 0x29E8; emu_last_ip = 0x0DBF; emu_last_length = 0x0096; emu_last_crc = 0xDF8B; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0DE0; emu_last_cs = 0x29E8; emu_last_ip = 0x0DCD; emu_last_length = 0x0096; emu_last_crc = 0xDF8B; emu_call(); return; } // Jump does not resolve
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0096; emu_last_crc = 0xDF8B; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0096; emu_last_crc = 0xDF8B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0D69_0074_75F4()
 *
 * @name f__29E8_0D69_0074_75F4
 * @implements 29E8:0D69:0074:75F4 ()
 *
 * Called From: 29E8:0D61:0096:DF8B
 */
void f__29E8_0D69_0074_75F4()
{
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x17), 0x20);
	if (emu_flags.zf) { f__29E8_0D77_0066_1A18(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x96), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0074; emu_last_crc = 0x75F4; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x0);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), emu_dx.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_cld();
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_bx.x, 0x101);
	emu_inb(&emu_ax.l, 0x60);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x254));
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x242), emu_ax.l);
	emu_incw(&emu_bx.x);
	emu_andws(&emu_bx.x, 0xF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x254), emu_bx.x);
	emu_movw(&emu_bx.x, 0x101);
	emu_cmpb(&emu_ax.l, 0xE1);
	if (!emu_flags.zf) { emu_ip = 0x0DC7; emu_last_cs = 0x29E8; emu_last_ip = 0x0DBF; emu_last_length = 0x0074; emu_last_crc = 0x75F4; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0DE0; emu_last_cs = 0x29E8; emu_last_ip = 0x0DCD; emu_last_length = 0x0074; emu_last_crc = 0x75F4; emu_call(); return; } // Jump does not resolve
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0074; emu_last_crc = 0x75F4; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0074; emu_last_crc = 0x75F4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0D77_0066_1A18()
 *
 * @name f__29E8_0D77_0066_1A18
 * @implements 29E8:0D77:0066:1A18 ()
 *
 * Called From: 29E8:0D6F:0074:75F4
 */
void f__29E8_0D77_0066_1A18()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x96), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0066; emu_last_crc = 0x1A18; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x0);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), emu_dx.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_cld();
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_bx.x, 0x101);
	emu_inb(&emu_ax.l, 0x60);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x254));
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x242), emu_ax.l);
	emu_incw(&emu_bx.x);
	emu_andws(&emu_bx.x, 0xF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x254), emu_bx.x);
	emu_movw(&emu_bx.x, 0x101);
	emu_cmpb(&emu_ax.l, 0xE1);
	if (!emu_flags.zf) { f__29E8_0DC7_0016_EE3D(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0DE0; emu_last_cs = 0x29E8; emu_last_ip = 0x0DCD; emu_last_length = 0x0066; emu_last_crc = 0x1A18; emu_call(); return; } // Jump does not resolve
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0066; emu_last_crc = 0x1A18; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0066; emu_last_crc = 0x1A18; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0DC7_0016_EE3D()
 *
 * @name f__29E8_0DC7_0016_EE3D
 * @implements 29E8:0DC7:0016:EE3D ()
 *
 * Called From: 29E8:0DBF:0066:1A18
 */
void f__29E8_0DC7_0016_EE3D()
{
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { f__29E8_0DE0_000D_86AC(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0016; emu_last_crc = 0xEE3D; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0016; emu_last_crc = 0xEE3D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0DE0_000D_86AC()
 *
 * @name f__29E8_0DE0_000D_86AC
 * @implements 29E8:0DE0:000D:86AC ()
 *
 * Called From: 29E8:0DCD:0016:EE3D
 */
void f__29E8_0DE0_000D_86AC()
{
	emu_cmpb(&emu_ax.l, 0xE0);
	if (!emu_flags.zf) { f__29E8_0DED_002B_9954(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	f__29E8_0F3C_0012_729D(); return;
}

/**
 * Decompiled function f__29E8_0DED_002B_9954()
 *
 * @name f__29E8_0DED_002B_9954
 * @implements 29E8:0DED:002B:9954 ()
 *
 * Called From: 29E8:0DE2:000D:86AC
 */
void f__29E8_0DED_002B_9954()
{
	emu_testb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__29E8_0DF8_0020_1DC3(); return; }
	emu_xorb(&emu_bx.l, emu_bx.l);
	emu_andb(&emu_ax.l, 0x7F);
	emu_orb(&emu_ax.h, 0x8);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	if (emu_flags.zf) { f__29E8_0E26_0008_1078(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xF76), 0x1);
	emu_movw(&emu_di, 0x7E);
	emu_movw(&emu_cx.x, 0x10);
	emu_repne_scasb();
	if (emu_cx.x == 0) { f__29E8_0E18_0003_0786(); return; }
	emu_ip = 0x0E1B; emu_last_cs = 0x29E8; emu_last_ip = 0x0E16; emu_last_length = 0x002B; emu_last_crc = 0x9954; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0DF8_0020_1DC3()
 *
 * @name f__29E8_0DF8_0020_1DC3
 * @implements 29E8:0DF8:0020:1DC3 ()
 *
 * Called From: 29E8:0DEF:002B:9954
 */
void f__29E8_0DF8_0020_1DC3()
{
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	if (emu_flags.zf) { f__29E8_0E26_0008_1078(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xF76), 0x1);
	emu_movw(&emu_di, 0x7E);
	emu_movw(&emu_cx.x, 0x10);
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x0E18; emu_last_cs = 0x29E8; emu_last_ip = 0x0E14; emu_last_length = 0x0020; emu_last_crc = 0x1DC3; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0E1B; emu_last_cs = 0x29E8; emu_last_ip = 0x0E16; emu_last_length = 0x0020; emu_last_crc = 0x1DC3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0E18_0003_0786()
 *
 * @name f__29E8_0E18_0003_0786
 * @implements 29E8:0E18:0003:0786 ()
 *
 * Called From: 29E8:0E14:002B:9954
 */
void f__29E8_0E18_0003_0786()
{
	f__29E8_0F4E_0028_1765(); return;
}

/**
 * Decompiled function f__29E8_0E26_0008_1078()
 *
 * @name f__29E8_0E26_0008_1078
 * @implements 29E8:0E26:0008:1078 ()
 *
 * Called From: 29E8:0DFE:0020:1DC3
 * Called From: 29E8:0DFE:002B:9954
 */
void f__29E8_0E26_0008_1078()
{
	emu_cmpb(&emu_ax.l, 0x7A);
	if (!emu_flags.zf) { f__29E8_0E2E_002F_ECD7(); return; }
	emu_movb(&emu_ax.l, 0x80);
	emu_ip = 0x0E38; emu_last_cs = 0x29E8; emu_last_ip = 0x0E2C; emu_last_length = 0x0008; emu_last_crc = 0x1078; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0E2E_002F_ECD7()
 *
 * @name f__29E8_0E2E_002F_ECD7
 * @implements 29E8:0E2E:002F:ECD7 ()
 *
 * Called From: 29E8:0E28:0008:1078
 */
void f__29E8_0E2E_002F_ECD7()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_di,  0x1B9));
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E3E; emu_last_length = 0x002F; emu_last_crc = 0xECD7; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x239), 0x4);
	if (emu_flags.zf) { f__29E8_0E60_0015_0176(); return; }
	emu_cmpb(&emu_ax.l, 0x5A);
	if (!emu_flags.zf) { emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E4A; emu_last_length = 0x002F; emu_last_crc = 0xECD7; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E52; emu_last_length = 0x002F; emu_last_crc = 0xECD7; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_dx.x, 0x80);
	if (!emu_flags.zf) { emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E58; emu_last_length = 0x002F; emu_last_crc = 0xECD7; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F4E; emu_last_cs = 0x29E8; emu_last_ip = 0x0E5A; emu_last_length = 0x002F; emu_last_crc = 0xECD7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0E60_0015_0176()
 *
 * @name f__29E8_0E60_0015_0176
 * @implements 29E8:0E60:0015:0176 ()
 *
 * Called From: 29E8:0E46:002F:ECD7
 */
void f__29E8_0E60_0015_0176()
{
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x239), 0x50);
	if (emu_flags.zf) { f__29E8_0E6B_000A_2B70(); return; }
	emu_orb(&emu_ax.h, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0E75); emu_ip = 0x0484; emu_last_cs = 0x29E8; emu_last_ip = 0x0E72; emu_last_length = 0x0015; emu_last_crc = 0x0176; emu_call(); // Jump does not resolve
	f__29E8_0E75_008C_C235();
}

/**
 * Decompiled function f__29E8_0E6B_000A_2B70()
 *
 * @name f__29E8_0E6B_000A_2B70
 * @implements 29E8:0E6B:000A:2B70 ()
 *
 * Called From: 29E8:0E66:0015:0176
 */
void f__29E8_0E6B_000A_2B70()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0E75); f__29E8_0484_002B_6762();
	f__29E8_0E75_008C_C235();
}

/**
 * Decompiled function f__29E8_0E75_008C_C235()
 *
 * @name f__29E8_0E75_008C_C235
 * @implements 29E8:0E75:008C:C235 ()
 *
 * Called From: 29E8:0E75:000A:2B70
 */
void f__29E8_0E75_008C_C235()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x237), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0E8A; emu_last_cs = 0x29E8; emu_last_ip = 0x0E80; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x239), 0x2);
	if (emu_flags.zf) { f__29E8_0E8D_0074_A0B0(); return; }
	emu_orb(&emu_ax.h, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_andws(&emu_bx.x, 0x7F);
	emu_andb(&emu_bx.l, 0x7);
	emu_movb(&emu_cx.h, emu_get_memory8(emu_cs, emu_bx.x,  0x2E));
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EAC; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x212));
	if (emu_flags.zf) { emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EB3; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, 0x1);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EBF; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x222));
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { emu_ip = 0x0EEB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EDD; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x008C; emu_last_crc = 0xC235; emu_call(); // Jump does not resolve
	f__29E8_0F01_0013_0A2D();
}

/**
 * Decompiled function f__29E8_0E8D_0074_A0B0()
 *
 * @name f__29E8_0E8D_0074_A0B0
 * @implements 29E8:0E8D:0074:A0B0 ()
 *
 * Called From: 29E8:0E88:008C:C235
 */
void f__29E8_0E8D_0074_A0B0()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_andws(&emu_bx.x, 0x7F);
	emu_andb(&emu_bx.l, 0x7);
	emu_movb(&emu_cx.h, emu_get_memory8(emu_cs, emu_bx.x,  0x2E));
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x1);
	if (emu_flags.zf) { f__29E8_0EB8_0049_5C8F(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x212));
	if (emu_flags.zf) { emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EB3; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, 0x1);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EBF; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x222));
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { emu_ip = 0x0EEB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EDD; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0074; emu_last_crc = 0xA0B0; emu_call(); // Jump does not resolve
	f__29E8_0F01_0013_0A2D();
}

/**
 * Decompiled function f__29E8_0EB8_0049_5C8F()
 *
 * @name f__29E8_0EB8_0049_5C8F
 * @implements 29E8:0EB8:0049:5C8F ()
 *
 * Called From: 29E8:0EAC:0074:A0B0
 */
void f__29E8_0EB8_0049_5C8F()
{
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	if (emu_flags.zf) { f__29E8_0ECB_0036_A0CA(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x222));
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x0049; emu_last_crc = 0x5C8F; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.h, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0049; emu_last_crc = 0x5C8F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0049; emu_last_crc = 0x5C8F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { emu_ip = 0x0EEB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EDD; emu_last_length = 0x0049; emu_last_crc = 0x5C8F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x0049; emu_last_crc = 0x5C8F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0049; emu_last_crc = 0x5C8F; emu_call(); // Jump does not resolve
	f__29E8_0F01_0013_0A2D();
}

/**
 * Decompiled function f__29E8_0ECB_0036_A0CA()
 *
 * @name f__29E8_0ECB_0036_A0CA
 * @implements 29E8:0ECB:0036:A0CA ()
 *
 * Called From: 29E8:0EBF:0049:5C8F
 */
void f__29E8_0ECB_0036_A0CA()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0036; emu_last_crc = 0xA0CA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0036; emu_last_crc = 0xA0CA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { f__29E8_0EEB_0016_2277(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x0036; emu_last_crc = 0xA0CA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0036; emu_last_crc = 0xA0CA; emu_call(); // Jump does not resolve
	f__29E8_0F01_0013_0A2D();
}

/**
 * Decompiled function f__29E8_0EEB_0016_2277()
 *
 * @name f__29E8_0EEB_0016_2277
 * @implements 29E8:0EEB:0016:2277 ()
 *
 * Called From: 29E8:0EDD:0036:A0CA
 */
void f__29E8_0EEB_0016_2277()
{
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_0D72(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0016; emu_last_crc = 0x2277; emu_call(); // Jump does not resolve
	f__29E8_0F01_0013_0A2D();
}

/**
 * Decompiled function f__29E8_0EFC_0005_0D72()
 *
 * @name f__29E8_0EFC_0005_0D72
 * @implements 29E8:0EFC:0005:0D72 ()
 *
 * Called From: 29E8:0EEE:0016:2277
 */
void f__29E8_0EFC_0005_0D72()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); f__29E8_0A4A_0040_4DD0();
	f__29E8_0F01_0013_0A2D();
}

/**
 * Decompiled function f__29E8_0F01_0013_0A2D()
 *
 * @name f__29E8_0F01_0013_0A2D
 * @implements 29E8:0F01:0013:0A2D ()
 *
 * Called From: 29E8:0F01:0005:0D72
 */
void f__29E8_0F01_0013_0A2D()
{
	emu_pop(&emu_ax.x);
	emu_cmpb(&emu_ax.l, 0x6E);
	if (!emu_flags.zf) { f__29E8_0F15_0021_DC65(); return; }
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x7C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0F15; emu_last_cs = 0x29E8; emu_last_ip = 0x0F0C; emu_last_length = 0x0013; emu_last_crc = 0x0A2D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x7A);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x7C);
	emu_push(0x0F14);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F0F; emu_last_length = 0x0013; emu_last_crc = 0x0A2D;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__29E8_0F15_0021_DC65()
 *
 * @name f__29E8_0F15_0021_DC65
 * @implements 29E8:0F15:0021:DC65 ()
 *
 * Called From: 29E8:0F04:0013:0A2D
 */
void f__29E8_0F15_0021_DC65()
{
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xA);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0F1F; emu_last_length = 0x0021; emu_last_crc = 0xDC65; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x36);
	emu_movw(&emu_cx.x, 0x22);
	emu_shrw(&emu_cx.x, 0x1);
	emu_repne_scasw();
	if (emu_cx.x == 0) { f__29E8_0F36_0018_E24D(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_di,  0x20));
	emu_andw(&emu_bx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0F36; emu_last_cs = 0x29E8; emu_last_ip = 0x0F32; emu_last_length = 0x0021; emu_last_crc = 0xDC65; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0F34; emu_last_length = 0x0021; emu_last_crc = 0xDC65; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29E8_0F36_0018_E24D()
 *
 * @name f__29E8_0F36_0018_E24D
 * @implements 29E8:0F36:0018:E24D ()
 *
 * Called From: 29E8:0F2B:0021:DC65
 */
void f__29E8_0F36_0018_E24D()
{
	emu_testw(&emu_dx.x, 0x4);
	if (emu_flags.zf) { f__29E8_0F4E_0028_1765(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x252));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x258);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x25A);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F49; emu_last_length = 0x0018; emu_last_crc = 0xE24D;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__29E8_0F3C_0012_729D()
 *
 * @name f__29E8_0F3C_0012_729D
 * @implements 29E8:0F3C:0012:729D ()
 *
 * Called From: 29E8:0DEA:000D:86AC
 */
void f__29E8_0F3C_0012_729D()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x252));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x258);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x25A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700048: f__0070_0048_0005_1DB6(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F49; emu_last_length = 0x0012; emu_last_crc = 0x729D;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__29E8_0F4E_0028_1765()
 *
 * @name f__29E8_0F4E_0028_1765
 * @implements 29E8:0F4E:0028:1765 ()
 *
 * Called From: 29E8:0E18:0003:0786
 * Called From: 29E8:0F3A:0018:E24D
 */
void f__29E8_0F4E_0028_1765()
{
	emu_inb(&emu_ax.l, 0x61);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_orb(&emu_ax.l, 0x80);
	emu_outb(0x61, emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_outb(0x61, emu_ax.l);
	emu_movw(&emu_ax.x, 0x40);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, 0x00,  0x96));
	emu_andb(&emu_ax.l, 0xFD);
	emu_movb(&emu_get_memory8(emu_es, 0x00,  0x96), emu_ax.l);
	emu_movb(&emu_ax.l, 0x20);
	emu_outb(0x20, emu_ax.l);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__29E8_0F7A_000D_CDE0()
 *
 * @name f__29E8_0F7A_000D_CDE0
 * @implements 29E8:0F7A:000D:CDE0 ()
 *
 * Called From: B500:003D:0005:176A
 */
void f__29E8_0F7A_000D_CDE0()
{
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_cs, 0x00,  0x25C));
	emu_movw(&emu_ax.x, 0x2523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F87); f__0070_0108_0005_1CF6();
	f__29E8_0F87_000A_1D4F();
}

/**
 * Decompiled function f__29E8_0F87_000A_1D4F()
 *
 * @name f__29E8_0F87_000A_1D4F
 * @implements 29E8:0F87:000A:1D4F ()
 *
 * Called From: 29E8:0F87:000D:CDE0
 */
void f__29E8_0F87_000A_1D4F()
{
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_cs, 0x00,  0x258));
	emu_movw(&emu_ax.x, 0x2509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F91); f__0070_0108_0005_1CF6();
	f__29E8_0F91_0004_03D6();
}

/**
 * Decompiled function f__29E8_0F91_0004_03D6()
 *
 * @name f__29E8_0F91_0004_03D6
 * @implements 29E8:0F91:0004:03D6 ()
 *
 * Called From: 29E8:0F91:000A:1D4F
 */
void f__29E8_0F91_0004_03D6()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
