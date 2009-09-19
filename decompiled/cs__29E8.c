/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29E8_026C_0015_3543()
 *
 * @name f__29E8_026C_0015_3543
 * @implements 29E8:026C:0015:3543 ()
 *
 * Called From: 29E8:047F:0009:A77A
 * Called From: 29E8:06B5:0012:72C8
 * Called From: 29E8:06B5:0014:5ACB
 * Called From: 29E8:083D:0023:1368
 */
void f__29E8_026C_0015_3543()
{
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_testw(&emu_ax.x, 0x8000);
	if (!emu_flags.zf) { f__29E8_027A_0007_5A2E(); return; }
	emu_testb(&emu_ax.h, 0x8);
	if (emu_flags.zf) { f__29E8_0281_0012_4D00(); return; }
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
 * Decompiled function f__29E8_027A_0007_5A2E()
 *
 * @name f__29E8_027A_0007_5A2E
 * @implements 29E8:027A:0007:5A2E ()
 *
 * Called From: 29E8:0273:0015:3543
 */
void f__29E8_027A_0007_5A2E()
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
 * Decompiled function f__29E8_0281_0012_4D00()
 *
 * @name f__29E8_0281_0012_4D00
 * @implements 29E8:0281:0012:4D00 ()
 *
 * Called From: 29E8:0278:0015:3543
 */
void f__29E8_0281_0012_4D00()
{
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_cmpb(&emu_ax.l, 0x6E);
	if (!emu_flags.zf) { f__29E8_0293_0015_08FC(); return; }
	f__29E8_0343_0007_372B(); return;
}

/**
 * Decompiled function f__29E8_0293_0015_08FC()
 *
 * @name f__29E8_0293_0015_08FC
 * @implements 29E8:0293:0015:08FC ()
 *
 * Called From: 29E8:028E:0012:4D00
 */
void f__29E8_0293_0015_08FC()
{
	emu_cmpb(&emu_ax.l, 0x3E);
	if (!emu_flags.cf) { f__29E8_02DB_0028_AB44(); return; }
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_andws(&emu_bx.x, 0x3F);
	emu_testb(&emu_ax.h, 0x1);
	if (!emu_flags.zf) { f__29E8_02B6_0025_93AF(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x34A));
	f__29E8_02BB_0020_2395(); return;
}

/**
 * Decompiled function f__29E8_02B6_0025_93AF()
 *
 * @name f__29E8_02B6_0025_93AF
 * @implements 29E8:02B6:0025:93AF ()
 *
 * Called From: 29E8:029F:0015:08FC
 */
void f__29E8_02B6_0025_93AF()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x388));
	emu_testb(&emu_ax.h, 0x2);
	if (emu_flags.zf) { f__29E8_02D9_0002_F53A(); return; }
	emu_movw(&emu_di, emu_bx.x);
	emu_andws(&emu_di, 0x7);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, emu_di,  0x2E));
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testb(&emu_cx.l, emu_get_memory8(emu_cs, emu_bx.x,  0x212));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02D9; emu_last_cs = 0x29E8; emu_last_ip = 0x02D5; emu_last_length = 0x0025; emu_last_crc = 0x93AF; emu_call(); return; }
	emu_andb(&emu_ax.l, 0x1F);
	/* Unresolved jump */ emu_ip = 0x0345; emu_last_cs = 0x29E8; emu_last_ip = 0x02D9; emu_last_length = 0x0025; emu_last_crc = 0x93AF; emu_call();
}

/**
 * Decompiled function f__29E8_02BB_0020_2395()
 *
 * @name f__29E8_02BB_0020_2395
 * @implements 29E8:02BB:0020:2395 ()
 *
 * Called From: 29E8:02A6:0015:08FC
 */
void f__29E8_02BB_0020_2395()
{
	emu_testb(&emu_ax.h, 0x2);
	if (emu_flags.zf) { f__29E8_02D9_0002_F53A(); return; }
	emu_movw(&emu_di, emu_bx.x);
	emu_andws(&emu_di, 0x7);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, emu_di,  0x2E));
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testb(&emu_cx.l, emu_get_memory8(emu_cs, emu_bx.x,  0x212));
	if (emu_flags.zf) { f__29E8_02D9_0002_F53A(); return; }
	emu_andb(&emu_ax.l, 0x1F);
	/* Unresolved jump */ emu_ip = 0x0345; emu_last_cs = 0x29E8; emu_last_ip = 0x02D9; emu_last_length = 0x0020; emu_last_crc = 0x2395; emu_call();
}

/**
 * Decompiled function f__29E8_02D9_0002_F53A()
 *
 * @name f__29E8_02D9_0002_F53A
 * @implements 29E8:02D9:0002:F53A ()
 *
 * Called From: 29E8:02BE:0020:2395
 * Called From: 29E8:02BE:0025:93AF
 * Called From: 29E8:02D5:0020:2395
 */
void f__29E8_02D9_0002_F53A()
{
	f__29E8_0345_0005_5A4B(); return;
}

/**
 * Decompiled function f__29E8_02DB_0028_AB44()
 *
 * @name f__29E8_02DB_0028_AB44
 * @implements 29E8:02DB:0028:AB44 ()
 *
 * Called From: 29E8:0295:0015:08FC
 */
void f__29E8_02DB_0028_AB44()
{
	emu_cmpb(&emu_ax.l, 0x4B);
	if (emu_flags.cf) { f__29E8_0337_0008_6739(); return; }
	emu_cmpb(&emu_ax.l, 0x6E);
	if (!emu_flags.cf) { f__29E8_030D_002A_00F8(); return; }
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_bx.l, emu_ax.l);
	emu_subb(&emu_bx.l, 0x4B);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B3), 0x200);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02FC; emu_last_cs = 0x29E8; emu_last_ip = 0x02F1; emu_last_length = 0x0028; emu_last_crc = 0xAB44; emu_call(); return; }
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0303; emu_last_cs = 0x29E8; emu_last_ip = 0x02FA; emu_last_length = 0x0028; emu_last_crc = 0xAB44; emu_call(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x442));
	f__29E8_0345_0005_5A4B(); return;
}

/**
 * Decompiled function f__29E8_030D_002A_00F8()
 *
 * @name f__29E8_030D_002A_00F8
 * @implements 29E8:030D:002A:00F8 ()
 *
 * Called From: 29E8:02E1:0028:AB44
 */
void f__29E8_030D_002A_00F8()
{
	emu_cmpb(&emu_ax.l, 0x70);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x033F; emu_last_cs = 0x29E8; emu_last_ip = 0x030F; emu_last_length = 0x002A; emu_last_crc = 0x00F8; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x79);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_033F_0004_113A(); return; }
	emu_movb(&emu_bx.l, emu_ax.l);
	emu_subb(&emu_bx.l, 0x70);
	emu_movb(&emu_bx.h, 0xC5);
	emu_testb(&emu_ax.h, 0x7);
	if (emu_flags.zf) { f__29E8_0331_0006_D00A(); return; }
	emu_movb(&emu_bx.h, 0x98);
	emu_testb(&emu_ax.h, 0x4);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0331; emu_last_cs = 0x29E8; emu_last_ip = 0x0326; emu_last_length = 0x002A; emu_last_crc = 0x00F8; emu_call(); return; }
	emu_movb(&emu_bx.h, 0xA2);
	emu_testb(&emu_ax.h, 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0331; emu_last_cs = 0x29E8; emu_last_ip = 0x032D; emu_last_length = 0x002A; emu_last_crc = 0x00F8; emu_call(); return; }
	emu_movb(&emu_bx.h, 0xAC);
	emu_subb(&emu_bx.h, emu_bx.l);
	emu_movb(&emu_ax.l, emu_bx.h);
	/* Unresolved jump */ emu_ip = 0x0345; emu_last_cs = 0x29E8; emu_last_ip = 0x0335; emu_last_length = 0x002A; emu_last_crc = 0x00F8; emu_call();
}

/**
 * Decompiled function f__29E8_0331_0006_D00A()
 *
 * @name f__29E8_0331_0006_D00A
 * @implements 29E8:0331:0006:D00A ()
 *
 * Called From: 29E8:031F:002A:00F8
 */
void f__29E8_0331_0006_D00A()
{
	emu_subb(&emu_bx.h, emu_bx.l);
	emu_movb(&emu_ax.l, emu_bx.h);
	f__29E8_0345_0005_5A4B(); return;
}

/**
 * Decompiled function f__29E8_0337_0008_6739()
 *
 * @name f__29E8_0337_0008_6739
 * @implements 29E8:0337:0008:6739 ()
 *
 * Called From: 29E8:02DD:0028:AB44
 */
void f__29E8_0337_0008_6739()
{
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { f__29E8_033F_0004_113A(); return; }
	emu_addb(&emu_ax.l, 0x85);
	f__29E8_0345_0005_5A4B(); return;
}

/**
 * Decompiled function f__29E8_033F_0004_113A()
 *
 * @name f__29E8_033F_0004_113A
 * @implements 29E8:033F:0004:113A ()
 *
 * Called From: 29E8:0313:002A:00F8
 * Called From: 29E8:0339:0008:6739
 */
void f__29E8_033F_0004_113A()
{
	emu_orb(&emu_ax.l, 0x80);
	f__29E8_0345_0005_5A4B(); return;
}

/**
 * Decompiled function f__29E8_0343_0007_372B()
 *
 * @name f__29E8_0343_0007_372B
 * @implements 29E8:0343:0007:372B ()
 *
 * Called From: 29E8:0290:0012:4D00
 */
void f__29E8_0343_0007_372B()
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
 * Decompiled function f__29E8_0345_0005_5A4B()
 *
 * @name f__29E8_0345_0005_5A4B
 * @implements 29E8:0345:0005:5A4B ()
 *
 * Called From: 29E8:02D9:0002:F53A
 * Called From: 29E8:0301:0028:AB44
 * Called From: 29E8:0335:0006:D00A
 * Called From: 29E8:033D:0008:6739
 * Called From: 29E8:0341:0004:113A
 */
void f__29E8_0345_0005_5A4B()
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
 * Decompiled function f__29E8_0479_0009_A77A()
 *
 * @name f__29E8_0479_0009_A77A
 * @implements 29E8:0479:0009:A77A ()
 *
 * Called From: B4E6:03D6:000E:C8A0
 * Called From: B527:01CA:0008:8702
 */
void f__29E8_0479_0009_A77A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0482); f__29E8_026C_0015_3543();
	f__29E8_0482_0002_2597();
}

/**
 * Decompiled function f__29E8_0482_0002_2597()
 *
 * @name f__29E8_0482_0002_2597
 * @implements 29E8:0482:0002:2597 ()
 *
 * Called From: 29E8:0482:0009:A77A
 */
void f__29E8_0482_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0484_002B_0A28()
 *
 * @name f__29E8_0484_002B_0A28
 * @implements 29E8:0484:002B:0A28 ()
 *
 * Called From: 29E8:08C3:0007:D960
 * Called From: 29E8:0E72:000A:53F7
 */
void f__29E8_0484_002B_0A28()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x2);
	if (!emu_flags.zf) { f__29E8_04AA_0005_5C4F(); return; }
	emu_movw(&emu_cx.x, 0x10);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x8E);
	emu_repne_scasb();
	if (emu_cx.x == 0) { f__29E8_04AA_0005_5C4F(); return; }
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
 * Decompiled function f__29E8_04AA_0005_5C4F()
 *
 * @name f__29E8_04AA_0005_5C4F
 * @implements 29E8:04AA:0005:5C4F ()
 *
 * Called From: 29E8:0493:002B:0A28
 * Called From: 29E8:049F:002B:0A28
 */
void f__29E8_04AA_0005_5C4F()
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
 * Decompiled function f__29E8_04AF_003C_ECA0()
 *
 * @name f__29E8_04AF_003C_ECA0
 * @implements 29E8:04AF:003C:ECA0 ()
 *
 * Called From: B4E0:0017:000D:9EA7
 * Called From: B527:0011:0016:BBD9
 * Called From: B527:0298:000A:B6BD
 */
void f__29E8_04AF_003C_ECA0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x700E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700E));
	emu_testw(&emu_ax.x, 0x800);
	if (emu_flags.zf) { f__29E8_04E9_0002_2597(); return; }
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
 * Decompiled function f__29E8_04E9_0002_2597()
 *
 * @name f__29E8_04E9_0002_2597
 * @implements 29E8:04E9:0002:2597 ()
 *
 * Called From: 29E8:04BF:003C:ECA0
 */
void f__29E8_04E9_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04EB_0011_9CC8()
 *
 * @name f__29E8_04EB_0011_9CC8
 * @implements 29E8:04EB:0011:9CC8 ()
 *
 * Called From: B4B8:1713:000C:840B
 * Called From: B4E0:013C:0024:0DEA
 * Called From: B527:001B:000A:F6B9
 * Called From: B527:028E:0009:E2B9
 */
void f__29E8_04EB_0011_9CC8()
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
 * Decompiled function f__29E8_04FC_0028_0C66()
 *
 * @name f__29E8_04FC_0028_0C66
 * @implements 29E8:04FC:0028:0C66 ()
 *
 * Called From: 29E8:0648:0008:ED98
 * Called From: 29E8:073B:000F:651A
 * Called From: 29E8:08BC:000A:FC14
 */
void f__29E8_04FC_0028_0C66()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (emu_flags.zf) { f__29E8_0533_0001_6180(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0533; emu_last_cs = 0x29E8; emu_last_ip = 0x0508; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x701B), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x050F; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7015));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x76A6), emu_ax.x);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x0518; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7013));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (!emu_flags.zf) { f__29E8_0527_000D_25CF(); return; }
	/* Unresolved call */ emu_push(0x0524); emu_ip = 0x0534; emu_last_cs = 0x29E8; emu_last_ip = 0x0521; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call();
	/* Unresolved jump */ emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x0524; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call();
}

/**
 * Decompiled function f__29E8_0527_000D_25CF()
 *
 * @name f__29E8_0527_000D_25CF
 * @implements 29E8:0527:000D:25CF ()
 *
 * Called From: 29E8:051F:0028:0C66
 */
void f__29E8_0527_000D_25CF()
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
 * Decompiled function f__29E8_0533_0001_6180()
 *
 * @name f__29E8_0533_0001_6180
 * @implements 29E8:0533:0001:6180 ()
 *
 * Called From: 29E8:0501:0028:0C66
 */
void f__29E8_0533_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_0534_000E_6213()
 *
 * @name f__29E8_0534_000E_6213
 * @implements 29E8:0534:000E:6213 ()
 *
 * Called From: 29E8:0840:0003:233C
 * Called From: 29E8:08B1:0004:D32F
 */
void f__29E8_0534_000E_6213()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0542; emu_last_cs = 0x29E8; emu_last_ip = 0x053D; emu_last_length = 0x000E; emu_last_crc = 0x6213; emu_call(); return; }
	f__29E8_0632_0005_F80B(); return;
}

/**
 * Decompiled function f__29E8_0632_0005_F80B()
 *
 * @name f__29E8_0632_0005_F80B
 * @implements 29E8:0632:0005:F80B ()
 *
 * Called From: 29E8:053F:000E:6213
 */
void f__29E8_0632_0005_F80B()
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
 * Decompiled function f__29E8_0643_0008_ED98()
 *
 * @name f__29E8_0643_0008_ED98
 * @implements 29E8:0643:0008:ED98 ()
 *
 * Called From: B4BE:001E:0005:20AE
 * Called From: B4BE:01C2:000E:CC0C
 * Called From: B4BE:01DE:0005:20AE
 * Called From: B4BE:02CA:0005:20AE
 * Called From: B4BE:036B:0005:20AE
 * Called From: B4ED:05E3:0005:20AE
 * Called From: B503:0896:0005:20AE
 * Called From: B503:13C5:0008:C4BB
 * Called From: B518:0511:0005:20AE
 */
void f__29E8_0643_0008_ED98()
{
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_pushf();
	emu_push(0x064B); f__29E8_04FC_0028_0C66();
	f__29E8_064B_0059_4AA8();
}

/**
 * Decompiled function f__29E8_064B_0059_4AA8()
 *
 * @name f__29E8_064B_0059_4AA8
 * @implements 29E8:064B:0059:4AA8 ()
 *
 * Called From: 29E8:064B:0008:ED98
 */
void f__29E8_064B_0059_4AA8()
{
	emu_cld();
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0663; emu_last_cs = 0x29E8; emu_last_ip = 0x065A; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (emu_flags.zf) { f__29E8_06A4_0014_5ACB(); return; }
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0675_002F_0D28(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0673; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x067F; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x0684; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x7A);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0688; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x0690; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call(); return; }
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	/* Unresolved jump */ emu_ip = 0x0650; emu_last_cs = 0x29E8; emu_last_ip = 0x06A2; emu_last_length = 0x0059; emu_last_crc = 0x4AA8; emu_call();
}

/**
 * Decompiled function f__29E8_0650_0054_F944()
 *
 * @name f__29E8_0650_0054_F944
 * @implements 29E8:0650:0054:F944 ()
 *
 * Called From: 29E8:06A2:001A:55A8
 * Called From: 29E8:06A2:000F:89E5
 */
void f__29E8_0650_0054_F944()
{
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0663; emu_last_cs = 0x29E8; emu_last_ip = 0x065A; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (emu_flags.zf) { f__29E8_06A4_0014_5ACB(); return; }
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0675_002F_0D28(); return; }
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0673; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x067F; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x068A; emu_last_cs = 0x29E8; emu_last_ip = 0x0684; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x7A);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x06A6; emu_last_cs = 0x29E8; emu_last_ip = 0x0688; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x0690; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	/* Unresolved jump */ emu_ip = 0x0650; emu_last_cs = 0x29E8; emu_last_ip = 0x06A2; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call();
}

/**
 * Decompiled function f__29E8_0675_002F_0D28()
 *
 * @name f__29E8_0675_002F_0D28
 * @implements 29E8:0675:002F:0D28 ()
 *
 * Called From: 29E8:066F:0059:4AA8
 * Called From: 29E8:066F:0054:F944
 */
void f__29E8_0675_002F_0D28()
{
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { f__29E8_068A_001A_55A8(); return; }
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { f__29E8_068A_001A_55A8(); return; }
	emu_cmpb(&emu_ax.l, 0x7A);
	if (emu_flags.cf) { f__29E8_06A6_0012_72C8(); return; }
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0695; emu_last_cs = 0x29E8; emu_last_ip = 0x068C; emu_last_length = 0x002F; emu_last_crc = 0x0D28; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_0695_000F_89E5(); return; }
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	/* Unresolved jump */ emu_ip = 0x0650; emu_last_cs = 0x29E8; emu_last_ip = 0x06A2; emu_last_length = 0x002F; emu_last_crc = 0x0D28; emu_call();
}

/**
 * Decompiled function f__29E8_068A_001A_55A8()
 *
 * @name f__29E8_068A_001A_55A8
 * @implements 29E8:068A:001A:55A8 ()
 *
 * Called From: 29E8:067F:002F:0D28
 * Called From: 29E8:0684:002F:0D28
 */
void f__29E8_068A_001A_55A8()
{
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { f__29E8_0695_000F_89E5(); return; }
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_0695_000F_89E5(); return; }
	emu_addws(&emu_si, 0x4);
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	f__29E8_0650_0054_F944(); return;
}

/**
 * Decompiled function f__29E8_0695_000F_89E5()
 *
 * @name f__29E8_0695_000F_89E5
 * @implements 29E8:0695:000F:89E5 ()
 *
 * Called From: 29E8:068C:001A:55A8
 * Called From: 29E8:0690:002F:0D28
 * Called From: 29E8:0690:001A:55A8
 */
void f__29E8_0695_000F_89E5()
{
	emu_addws(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_si);
	emu_sti();
	f__29E8_0650_0054_F944(); return;
}

/**
 * Decompiled function f__29E8_06A4_0014_5ACB()
 *
 * @name f__29E8_06A4_0014_5ACB
 * @implements 29E8:06A4:0014:5ACB ()
 *
 * Called From: 29E8:0661:0059:4AA8
 * Called From: 29E8:0661:0054:F944
 */
void f__29E8_06A4_0014_5ACB()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), emu_cx.x);
	emu_sti();
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__29E8_06BA_0006_A381(); return; }
	emu_push(0x06B8); f__29E8_026C_0015_3543();
	f__29E8_06B8_0008_9049();
}

/**
 * Decompiled function f__29E8_06A6_0012_72C8()
 *
 * @name f__29E8_06A6_0012_72C8
 * @implements 29E8:06A6:0012:72C8 ()
 *
 * Called From: 29E8:0688:002F:0D28
 */
void f__29E8_06A6_0012_72C8()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), emu_cx.x);
	emu_sti();
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__29E8_06BA_0006_A381(); return; }
	emu_push(0x06B8); f__29E8_026C_0015_3543();
	f__29E8_06B8_0008_9049();
}

/**
 * Decompiled function f__29E8_06B8_0008_9049()
 *
 * @name f__29E8_06B8_0008_9049
 * @implements 29E8:06B8:0008:9049 ()
 *
 * Called From: 29E8:06B8:0012:72C8
 * Called From: 29E8:06B8:0014:5ACB
 */
void f__29E8_06B8_0008_9049()
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
 * Decompiled function f__29E8_06BA_0006_A381()
 *
 * @name f__29E8_06BA_0006_A381
 * @implements 29E8:06BA:0006:A381 ()
 *
 * Called From: 29E8:06B3:0014:5ACB
 * Called From: 29E8:06B3:0012:72C8
 */
void f__29E8_06BA_0006_A381()
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
 * Decompiled function f__29E8_072F_000F_651A()
 *
 * @name f__29E8_072F_000F_651A
 * @implements 29E8:072F:000F:651A ()
 *
 * Called From: B4A2:003F:000B:EC51
 * Called From: B4E6:028C:0091:FAEA
 */
void f__29E8_072F_000F_651A()
{
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_xorw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	emu_popf();
	emu_push(0x073E); f__29E8_04FC_0028_0C66();
	f__29E8_073E_0001_6580();
}

/**
 * Decompiled function f__29E8_073E_0001_6580()
 *
 * @name f__29E8_073E_0001_6580
 * @implements 29E8:073E:0001:6580 ()
 *
 * Called From: 29E8:073E:000F:651A
 */
void f__29E8_073E_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_073F_000E_6816()
 *
 * @name f__29E8_073F_000E_6816
 * @implements 29E8:073F:000E:6816 ()
 *
 * Called From: 10E4:0491:000E:9A5B
 * Called From: 10E4:2285:0007:843A
 * Called From: B4AE:0003:0008:049C
 * Called From: B4B8:2199:0006:8488
 * Called From: B4B8:2199:0005:E089
 * Called From: B4DA:0BEE:003F:C2EE
 * Called From: B4DA:107D:0006:8488
 * Called From: B4DA:148D:0005:E089
 * Called From: B4DA:163F:0017:9D01
 * Called From: B4DA:16AF:0006:8488
 * Called From: B4E0:001D:0006:8488
 * Called From: B4E6:01F5:0005:E089
 * Called From: B4ED:01EF:0006:8488
 * Called From: B503:0281:0008:7A01
 * Called From: B503:0311:0008:2201
 * Called From: B503:0524:0008:4201
 * Called From: B503:07ED:0005:E089
 * Called From: B511:0F92:0005:E089
 * Called From: B511:0F92:000C:C06C
 * Called From: B511:14D3:0008:4201
 * Called From: B518:01DD:0008:2201
 * Called From: B518:0507:0005:E089
 * Called From: B518:051A:0009:6867
 * Called From: B518:083B:000D:2172
 * Called From: B518:0870:0007:843A
 * Called From: B53B:01CC:0008:5201
 */
void f__29E8_073F_000E_6816()
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
 * Decompiled function f__29E8_074D_0066_6E9B()
 *
 * @name f__29E8_074D_0066_6E9B
 * @implements 29E8:074D:0066:6E9B ()
 *
 * Called From: 29E8:081A:0003:628C
 * Called From: 29E8:08AD:0003:2227
 */
void f__29E8_074D_0066_6E9B()
{
	emu_push(emu_ds);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0765_004E_D57F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7013));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7013), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x0771; emu_last_length = 0x0066; emu_last_crc = 0x6E9B; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x07B3; emu_last_cs = 0x29E8; emu_last_ip = 0x0775; emu_last_length = 0x0066; emu_last_crc = 0x6E9B; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0787; emu_last_cs = 0x29E8; emu_last_ip = 0x0782; emu_last_length = 0x0066; emu_last_crc = 0x6E9B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07A3; emu_last_cs = 0x29E8; emu_last_ip = 0x079E; emu_last_length = 0x0066; emu_last_crc = 0x6E9B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x07B1; emu_last_length = 0x0066; emu_last_crc = 0x6E9B; emu_call();
}

/**
 * Decompiled function f__29E8_0765_004E_D57F()
 *
 * @name f__29E8_0765_004E_D57F
 * @implements 29E8:0765:004E:D57F ()
 *
 * Called From: 29E8:0760:0066:6E9B
 */
void f__29E8_0765_004E_D57F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7013), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_ax.l, 0x41);
	if (emu_flags.cf) { f__29E8_07EB_000F_32F6(); return; }
	emu_cmpb(&emu_ax.l, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07B3_0047_79F3(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0787_002C_CB98(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07A3; emu_last_cs = 0x29E8; emu_last_ip = 0x079E; emu_last_length = 0x004E; emu_last_crc = 0xD57F; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x07B1; emu_last_length = 0x004E; emu_last_crc = 0xD57F; emu_call();
}

/**
 * Decompiled function f__29E8_0787_002C_CB98()
 *
 * @name f__29E8_0787_002C_CB98
 * @implements 29E8:0787:002C:CB98 ()
 *
 * Called From: 29E8:0782:004E:D57F
 */
void f__29E8_0787_002C_CB98()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7064), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_07A3_0010_602B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x07EB; emu_last_cs = 0x29E8; emu_last_ip = 0x07B1; emu_last_length = 0x002C; emu_last_crc = 0xCB98; emu_call();
}

/**
 * Decompiled function f__29E8_07A3_0010_602B()
 *
 * @name f__29E8_07A3_0010_602B
 * @implements 29E8:07A3:0010:602B ()
 *
 * Called From: 29E8:079E:002C:CB98
 */
void f__29E8_07A3_0010_602B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7066), emu_ax.x);
	emu_pop(&emu_ax.x);
	f__29E8_07EB_000F_32F6(); return;
}

/**
 * Decompiled function f__29E8_07B3_0047_79F3()
 *
 * @name f__29E8_07B3_0047_79F3
 * @implements 29E8:07B3:0047:79F3 ()
 *
 * Called From: 29E8:0775:004E:D57F
 */
void f__29E8_07B3_0047_79F3()
{
	emu_cmpb(&emu_ax.l, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07EB_000F_32F6(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07C7; emu_last_cs = 0x29E8; emu_last_ip = 0x07C2; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7017), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_di,  0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x29E8; emu_last_ip = 0x07DB; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7019), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_pop(&emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_07EB_000F_32F6()
 *
 * @name f__29E8_07EB_000F_32F6
 * @implements 29E8:07EB:000F:32F6 ()
 *
 * Called From: 29E8:0771:004E:D57F
 * Called From: 29E8:07B1:0010:602B
 * Called From: 29E8:07B5:0047:79F3
 */
void f__29E8_07EB_000F_32F6()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x000F; emu_last_crc = 0x32F6; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1AF), emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_07FA_0020_177A()
 *
 * @name f__29E8_07FA_0020_177A
 * @implements 29E8:07FA:0020:177A ()
 *
 * Called From: 10E4:049B:0005:B085
 * Called From: B503:08A3:0005:B085
 * Called From: B503:13CE:0009:9868
 * Called From: B53B:01D1:0005:B085
 */
void f__29E8_07FA_0020_177A()
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x081A; emu_last_cs = 0x29E8; emu_last_ip = 0x080A; emu_last_length = 0x0020; emu_last_crc = 0x177A; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (!emu_flags.zf) { f__29E8_081A_0003_628C(); return; }
	emu_sti();
	f__29E8_0804_0016_2028(); return;
}

/**
 * Decompiled function f__29E8_0804_0016_2028()
 *
 * @name f__29E8_0804_0016_2028
 * @implements 29E8:0804:0016:2028 ()
 *
 * Called From: 29E8:0818:0020:177A
 * Called From: 29E8:0818:0016:2028
 * Called From: 29E8:0837:0023:1368
 */
void f__29E8_0804_0016_2028()
{
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { f__29E8_081A_0003_628C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (!emu_flags.zf) { f__29E8_081A_0003_628C(); return; }
	emu_sti();
	f__29E8_0804_0016_2028(); return;
}

/**
 * Decompiled function f__29E8_081A_0003_628C()
 *
 * @name f__29E8_081A_0003_628C
 * @implements 29E8:081A:0003:628C ()
 *
 * Called From: 29E8:080A:0016:2028
 * Called From: 29E8:0815:0016:2028
 * Called From: 29E8:0815:0020:177A
 */
void f__29E8_081A_0003_628C()
{
	emu_push(0x081D); f__29E8_074D_0066_6E9B();
	f__29E8_081D_0023_1368();
}

/**
 * Decompiled function f__29E8_081D_0023_1368()
 *
 * @name f__29E8_081D_0023_1368
 * @implements 29E8:081D:0023:1368 ()
 *
 * Called From: 29E8:081D:0003:628C
 */
void f__29E8_081D_0023_1368()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1B7), emu_cx.x);
	emu_sti();
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0804; emu_last_cs = 0x29E8; emu_last_ip = 0x0832; emu_last_length = 0x0023; emu_last_crc = 0x1368; emu_call(); return; }
	emu_testb(&emu_ax.h, 0x8);
	if (!emu_flags.zf) { f__29E8_0804_0016_2028(); return; }
	emu_cmpb(&emu_ax.l, 0x7A);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0804; emu_last_cs = 0x29E8; emu_last_ip = 0x083B; emu_last_length = 0x0023; emu_last_crc = 0x1368; emu_call(); return; }
	emu_push(0x0840); f__29E8_026C_0015_3543();
	f__29E8_0840_0003_233C();
}

/**
 * Decompiled function f__29E8_0840_0003_233C()
 *
 * @name f__29E8_0840_0003_233C
 * @implements 29E8:0840:0003:233C ()
 *
 * Called From: 29E8:0840:0023:1368
 */
void f__29E8_0840_0003_233C()
{
	emu_push(0x0843); f__29E8_0534_000E_6213();
	f__29E8_0843_0008_9386();
}

/**
 * Decompiled function f__29E8_0843_0008_9386()
 *
 * @name f__29E8_0843_0008_9386
 * @implements 29E8:0843:0008:9386 ()
 *
 * Called From: 29E8:0843:0003:233C
 */
void f__29E8_0843_0008_9386()
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
 * Decompiled function f__29E8_0897_0016_2028()
 *
 * @name f__29E8_0897_0016_2028
 * @implements 29E8:0897:0016:2028 ()
 *
 * Called From: 29E8:08AB:0016:2028
 * Called From: B4A2:0048:0009:3D8E
 * Called From: B4E6:0295:0009:0D8E
 */
void f__29E8_0897_0016_2028()
{
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { f__29E8_08AD_0003_2227(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1AF));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1B1));
	if (!emu_flags.zf) { f__29E8_08AD_0003_2227(); return; }
	emu_sti();
	f__29E8_0897_0016_2028(); return;
}

/**
 * Decompiled function f__29E8_08AD_0003_2227()
 *
 * @name f__29E8_08AD_0003_2227
 * @implements 29E8:08AD:0003:2227 ()
 *
 * Called From: 29E8:089D:0016:2028
 * Called From: 29E8:08A8:0016:2028
 */
void f__29E8_08AD_0003_2227()
{
	emu_push(0x08B0); f__29E8_074D_0066_6E9B();
	f__29E8_08B0_0004_D32F();
}

/**
 * Decompiled function f__29E8_08B0_0004_D32F()
 *
 * @name f__29E8_08B0_0004_D32F
 * @implements 29E8:08B0:0004:D32F ()
 *
 * Called From: 29E8:08B0:0003:2227
 */
void f__29E8_08B0_0004_D32F()
{
	emu_sti();
	emu_push(0x08B4); f__29E8_0534_000E_6213();
	f__29E8_08B4_0001_6580();
}

/**
 * Decompiled function f__29E8_08B4_0001_6580()
 *
 * @name f__29E8_08B4_0001_6580
 * @implements 29E8:08B4:0001:6580 ()
 *
 * Called From: 29E8:08B4:0004:D32F
 */
void f__29E8_08B4_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_08B5_000A_FC14()
 *
 * @name f__29E8_08B5_000A_FC14
 * @implements 29E8:08B5:000A:FC14 ()
 *
 * Called From: B4A2:00B0:001B:68B5
 * Called From: B4A2:00B0:0034:D555
 * Called From: B4A2:00C4:0009:433C
 * Called From: B4A2:00C4:0014:CD20
 * Called From: B4DA:05A7:000E:7C82
 * Called From: B4DA:05B5:000E:B5D6
 * Called From: B4DA:06C6:000E:7C82
 * Called From: B4DA:06D4:000E:B5D6
 */
void f__29E8_08B5_000A_FC14()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(0x08BF); f__29E8_04FC_0028_0C66();
	f__29E8_08BF_0007_D960();
}

/**
 * Decompiled function f__29E8_08BF_0007_D960()
 *
 * @name f__29E8_08BF_0007_D960
 * @implements 29E8:08BF:0007:D960 ()
 *
 * Called From: 29E8:08BF:000A:FC14
 */
void f__29E8_08BF_0007_D960()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08C6); f__29E8_0484_002B_0A28();
	f__29E8_08C6_001F_C389();
}

/**
 * Decompiled function f__29E8_08C6_001F_C389()
 *
 * @name f__29E8_08C6_001F_C389
 * @implements 29E8:08C6:001F:C389 ()
 *
 * Called From: 29E8:08C6:0007:D960
 */
void f__29E8_08C6_001F_C389()
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
 * Decompiled function f__29E8_0971_0071_E515()
 *
 * @name f__29E8_0971_0071_E515
 * @implements 29E8:0971:0071:E515 ()
 *
 * Called From: 1DB6:01AB:0007:65FE
 */
void f__29E8_0971_0071_E515()
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
	if (emu_flags.zf) { f__29E8_0989_0059_380D(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x1);
	emu_testb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0993; emu_last_cs = 0x29E8; emu_last_ip = 0x098B; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x099D; emu_last_cs = 0x29E8; emu_last_ip = 0x0995; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09BA; emu_last_cs = 0x29E8; emu_last_ip = 0x09B5; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call(); return; }
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0071; emu_last_crc = 0xE515; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_0989_0059_380D()
 *
 * @name f__29E8_0989_0059_380D
 * @implements 29E8:0989:0059:380D ()
 *
 * Called From: 29E8:0981:0071:E515
 */
void f__29E8_0989_0059_380D()
{
	emu_testb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { f__29E8_0993_004F_70A6(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x099D; emu_last_cs = 0x29E8; emu_last_ip = 0x0995; emu_last_length = 0x0059; emu_last_crc = 0x380D; emu_call(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09BA; emu_last_cs = 0x29E8; emu_last_ip = 0x09B5; emu_last_length = 0x0059; emu_last_crc = 0x380D; emu_call(); return; }
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x0059; emu_last_crc = 0x380D; emu_call(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0059; emu_last_crc = 0x380D; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0059; emu_last_crc = 0x380D; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0059; emu_last_crc = 0x380D; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_0993_004F_70A6()
 *
 * @name f__29E8_0993_004F_70A6
 * @implements 29E8:0993:004F:70A6 ()
 *
 * Called From: 29E8:098B:0059:380D
 */
void f__29E8_0993_004F_70A6()
{
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { f__29E8_099D_0045_17CA(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09BA; emu_last_cs = 0x29E8; emu_last_ip = 0x09B5; emu_last_length = 0x004F; emu_last_crc = 0x70A6; emu_call(); return; }
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x004F; emu_last_crc = 0x70A6; emu_call(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x004F; emu_last_crc = 0x70A6; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x004F; emu_last_crc = 0x70A6; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x004F; emu_last_crc = 0x70A6; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_099D_0045_17CA()
 *
 * @name f__29E8_099D_0045_17CA
 * @implements 29E8:099D:0045:17CA ()
 *
 * Called From: 29E8:0995:004F:70A6
 */
void f__29E8_099D_0045_17CA()
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
	if (emu_flags.zf) { f__29E8_09BA_0028_B31C(); return; }
	emu_orb(&emu_ax.h, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09C9; emu_last_cs = 0x29E8; emu_last_ip = 0x09C1; emu_last_length = 0x0045; emu_last_crc = 0x17CA; emu_call(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0045; emu_last_crc = 0x17CA; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0045; emu_last_crc = 0x17CA; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0045; emu_last_crc = 0x17CA; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09BA_0028_B31C()
 *
 * @name f__29E8_09BA_0028_B31C
 * @implements 29E8:09BA:0028:B31C ()
 *
 * Called From: 29E8:09B5:0045:17CA
 */
void f__29E8_09BA_0028_B31C()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x239), emu_ax.h);
	emu_testb(&emu_ax.l, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_6723(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09D3; emu_last_cs = 0x29E8; emu_last_ip = 0x09CB; emu_last_length = 0x0028; emu_last_crc = 0xB31C; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0028; emu_last_crc = 0xB31C; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0028; emu_last_crc = 0xB31C; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09C9_0019_6723()
 *
 * @name f__29E8_09C9_0019_6723
 * @implements 29E8:09C9:0019:6723 ()
 *
 * Called From: 29E8:09C1:0028:B31C
 */
void f__29E8_09C9_0019_6723()
{
	emu_testb(&emu_ax.l, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09DD; emu_last_cs = 0x29E8; emu_last_ip = 0x09D5; emu_last_length = 0x0019; emu_last_crc = 0x6723; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x0019; emu_last_crc = 0x6723; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09D3_000F_9D37()
 *
 * @name f__29E8_09D3_000F_9D37
 * @implements 29E8:09D3:000F:9D37 ()
 *
 * Called From: 29E8:09CB:0019:6723
 */
void f__29E8_09D3_000F_9D37()
{
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x2);
	emu_movw(&emu_ax.x, 0x3509);
	/* Unresolved jump */ emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x09E2); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x29E8; emu_last_ip = 0x09E0; emu_last_length = 0x000F; emu_last_crc = 0x9D37; emu_call();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09DD_0005_C3D3()
 *
 * @name f__29E8_09DD_0005_C3D3
 * @implements 29E8:09DD:0005:C3D3 ()
 *
 * Called From: 29E8:09D5:000F:9D37
 */
void f__29E8_09DD_0005_C3D3()
{
	emu_movw(&emu_ax.x, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); f__0070_0108_0005_E45B();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09E2_0016_59C4()
 *
 * @name f__29E8_09E2_0016_59C4
 * @implements 29E8:09E2:0016:59C4 ()
 *
 * Called From: 29E8:09E2:0005:C3D3
 */
void f__29E8_09E2_0016_59C4()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x258), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x25A), emu_es);
	emu_movw(&emu_bx.x, emu_cs);
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_dx.x, 0xD47);
	emu_movw(&emu_ax.x, 0x2509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09F8); f__0070_0108_0005_E45B();
	f__29E8_09F8_0005_63D1();
}

/**
 * Decompiled function f__29E8_09F8_0005_63D1()
 *
 * @name f__29E8_09F8_0005_63D1
 * @implements 29E8:09F8:0005:63D1 ()
 *
 * Called From: 29E8:09F8:0016:59C4
 */
void f__29E8_09F8_0005_63D1()
{
	emu_movw(&emu_ax.x, 0x3523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09FD); f__0070_0108_0005_E45B();
	f__29E8_09FD_0016_F12A();
}

/**
 * Decompiled function f__29E8_09FD_0016_F12A()
 *
 * @name f__29E8_09FD_0016_F12A
 * @implements 29E8:09FD:0016:F12A ()
 *
 * Called From: 29E8:09FD:0005:63D1
 */
void f__29E8_09FD_0016_F12A()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x25C), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x25E), emu_es);
	emu_movw(&emu_bx.x, emu_cs);
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_dx.x, 0xF79);
	emu_movw(&emu_ax.x, 0x2523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0A13); f__0070_0108_0005_E45B();
	f__29E8_0A13_0006_D20B();
}

/**
 * Decompiled function f__29E8_0A13_0006_D20B()
 *
 * @name f__29E8_0A13_0006_D20B
 * @implements 29E8:0A13:0006:D20B ()
 *
 * Called From: 29E8:0A13:0016:F12A
 */
void f__29E8_0A13_0006_D20B()
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
 * Decompiled function f__29E8_0D47_0096_3777()
 *
 * @name f__29E8_0D47_0096_3777
 * @implements 29E8:0D47:0096:3777 ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__29E8_0D47_0096_3777()
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
	if (emu_flags.zf) { f__29E8_0D69_0074_EB18(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x17), 0x20);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D77; emu_last_cs = 0x29E8; emu_last_ip = 0x0D6F; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DC7; emu_last_cs = 0x29E8; emu_last_ip = 0x0DBF; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DE0; emu_last_cs = 0x29E8; emu_last_ip = 0x0DCD; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call();
}

/**
 * Decompiled function f__29E8_0D69_0074_EB18()
 *
 * @name f__29E8_0D69_0074_EB18
 * @implements 29E8:0D69:0074:EB18 ()
 *
 * Called From: 29E8:0D61:0096:3777
 */
void f__29E8_0D69_0074_EB18()
{
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x17), 0x20);
	if (emu_flags.zf) { f__29E8_0D77_0066_8FA5(); return; }
	emu_orws(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DC7; emu_last_cs = 0x29E8; emu_last_ip = 0x0DBF; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DE0; emu_last_cs = 0x29E8; emu_last_ip = 0x0DCD; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call();
}

/**
 * Decompiled function f__29E8_0D77_0066_8FA5()
 *
 * @name f__29E8_0D77_0066_8FA5
 * @implements 29E8:0D77:0066:8FA5 ()
 *
 * Called From: 29E8:0D6F:0074:EB18
 */
void f__29E8_0D77_0066_8FA5()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00,  0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
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
	if (!emu_flags.zf) { f__29E8_0DC7_0016_492E(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DE0; emu_last_cs = 0x29E8; emu_last_ip = 0x0DCD; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call();
}

/**
 * Decompiled function f__29E8_0DC7_0016_492E()
 *
 * @name f__29E8_0DC7_0016_492E
 * @implements 29E8:0DC7:0016:492E ()
 *
 * Called From: 29E8:0DBF:0066:8FA5
 */
void f__29E8_0DC7_0016_492E()
{
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x257), 0x0);
	if (emu_flags.zf) { f__29E8_0DE0_000D_1FF6(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00,  0x257));
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0016; emu_last_crc = 0x492E; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0016; emu_last_crc = 0x492E; emu_call();
}

/**
 * Decompiled function f__29E8_0DE0_000D_1FF6()
 *
 * @name f__29E8_0DE0_000D_1FF6
 * @implements 29E8:0DE0:000D:1FF6 ()
 *
 * Called From: 29E8:0DCD:0016:492E
 */
void f__29E8_0DE0_000D_1FF6()
{
	emu_cmpb(&emu_ax.l, 0xE0);
	if (!emu_flags.zf) { f__29E8_0DED_002B_7693(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x1);
	f__29E8_0F3C_0012_01FA(); return;
}

/**
 * Decompiled function f__29E8_0DED_002B_7693()
 *
 * @name f__29E8_0DED_002B_7693
 * @implements 29E8:0DED:002B:7693 ()
 *
 * Called From: 29E8:0DE2:000D:1FF6
 */
void f__29E8_0DED_002B_7693()
{
	emu_testb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__29E8_0DF8_0020_D8CF(); return; }
	emu_xorb(&emu_bx.l, emu_bx.l);
	emu_andb(&emu_ax.l, 0x7F);
	emu_orb(&emu_ax.h, 0x8);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	if (emu_flags.zf) { f__29E8_0E26_0008_3DE4(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xF76), 0x1);
	emu_movw(&emu_di, 0x7E);
	emu_movw(&emu_cx.x, 0x10);
	emu_repne_scasb();
	if (emu_cx.x == 0) { f__29E8_0E18_0003_DDAC(); return; }
	/* Unresolved jump */ emu_ip = 0x0E1B; emu_last_cs = 0x29E8; emu_last_ip = 0x0E16; emu_last_length = 0x002B; emu_last_crc = 0x7693; emu_call();
}

/**
 * Decompiled function f__29E8_0DF8_0020_D8CF()
 *
 * @name f__29E8_0DF8_0020_D8CF
 * @implements 29E8:0DF8:0020:D8CF ()
 *
 * Called From: 29E8:0DEF:002B:7693
 */
void f__29E8_0DF8_0020_D8CF()
{
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	if (emu_flags.zf) { f__29E8_0E26_0008_3DE4(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x256), 0x0);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xF76), 0x1);
	emu_movw(&emu_di, 0x7E);
	emu_movw(&emu_cx.x, 0x10);
	emu_repne_scasb();
	if (emu_cx.x == 0) { /* Unresolved jump */ emu_ip = 0x0E18; emu_last_cs = 0x29E8; emu_last_ip = 0x0E14; emu_last_length = 0x0020; emu_last_crc = 0xD8CF; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0E1B; emu_last_cs = 0x29E8; emu_last_ip = 0x0E16; emu_last_length = 0x0020; emu_last_crc = 0xD8CF; emu_call();
}

/**
 * Decompiled function f__29E8_0E18_0003_DDAC()
 *
 * @name f__29E8_0E18_0003_DDAC
 * @implements 29E8:0E18:0003:DDAC ()
 *
 * Called From: 29E8:0E14:002B:7693
 */
void f__29E8_0E18_0003_DDAC()
{
	f__29E8_0F4E_0028_9BC1(); return;
}

/**
 * Decompiled function f__29E8_0E26_0008_3DE4()
 *
 * @name f__29E8_0E26_0008_3DE4
 * @implements 29E8:0E26:0008:3DE4 ()
 *
 * Called From: 29E8:0DFE:0020:D8CF
 * Called From: 29E8:0DFE:002B:7693
 */
void f__29E8_0E26_0008_3DE4()
{
	emu_cmpb(&emu_ax.l, 0x7A);
	if (!emu_flags.zf) { f__29E8_0E2E_002F_9EC9(); return; }
	emu_movb(&emu_ax.l, 0x80);
	/* Unresolved jump */ emu_ip = 0x0E38; emu_last_cs = 0x29E8; emu_last_ip = 0x0E2C; emu_last_length = 0x0008; emu_last_crc = 0x3DE4; emu_call();
}

/**
 * Decompiled function f__29E8_0E2E_002F_9EC9()
 *
 * @name f__29E8_0E2E_002F_9EC9
 * @implements 29E8:0E2E:002F:9EC9 ()
 *
 * Called From: 29E8:0E28:0008:3DE4
 */
void f__29E8_0E2E_002F_9EC9()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_andws(&emu_di, 0x7F);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_di,  0x1B9));
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x23A), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E3E; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x239), 0x4);
	if (emu_flags.zf) { f__29E8_0E60_0015_17DE(); return; }
	emu_cmpb(&emu_ax.l, 0x5A);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E4A; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00,  0xAE), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E52; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testw(&emu_dx.x, 0x80);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E58; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F4E; emu_last_cs = 0x29E8; emu_last_ip = 0x0E5A; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call();
}

/**
 * Decompiled function f__29E8_0E60_0015_17DE()
 *
 * @name f__29E8_0E60_0015_17DE
 * @implements 29E8:0E60:0015:17DE ()
 *
 * Called From: 29E8:0E46:002F:9EC9
 */
void f__29E8_0E60_0015_17DE()
{
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x239), 0x50);
	if (emu_flags.zf) { f__29E8_0E6B_000A_53F7(); return; }
	emu_orb(&emu_ax.h, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0E75); emu_ip = 0x0484; emu_last_cs = 0x29E8; emu_last_ip = 0x0E72; emu_last_length = 0x0015; emu_last_crc = 0x17DE; emu_call();
	f__29E8_0E75_008C_16C3();
}

/**
 * Decompiled function f__29E8_0E6B_000A_53F7()
 *
 * @name f__29E8_0E6B_000A_53F7
 * @implements 29E8:0E6B:000A:53F7 ()
 *
 * Called From: 29E8:0E66:0015:17DE
 */
void f__29E8_0E6B_000A_53F7()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0E75); f__29E8_0484_002B_0A28();
	f__29E8_0E75_008C_16C3();
}

/**
 * Decompiled function f__29E8_0E75_008C_16C3()
 *
 * @name f__29E8_0E75_008C_16C3
 * @implements 29E8:0E75:008C:16C3 ()
 *
 * Called From: 29E8:0E75:000A:53F7
 */
void f__29E8_0E75_008C_16C3()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x237), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8A; emu_last_cs = 0x29E8; emu_last_ip = 0x0E80; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00,  0x239), 0x2);
	if (emu_flags.zf) { f__29E8_0E8D_0074_0D35(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EAC; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x212));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EB3; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_xorb(&emu_ax.h, 0x1);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EBF; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x222));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_xorb(&emu_ax.h, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EEB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EDD; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0E8D_0074_0D35()
 *
 * @name f__29E8_0E8D_0074_0D35
 * @implements 29E8:0E8D:0074:0D35 ()
 *
 * Called From: 29E8:0E88:008C:16C3
 */
void f__29E8_0E8D_0074_0D35()
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
	if (emu_flags.zf) { f__29E8_0EB8_0049_69EA(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x212));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EB3; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_xorb(&emu_ax.h, 0x1);
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EBF; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x222));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_xorb(&emu_ax.h, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EEB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EDD; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0EB8_0049_69EA()
 *
 * @name f__29E8_0EB8_0049_69EA
 * @implements 29E8:0EB8:0049:69EA ()
 *
 * Called From: 29E8:0EAC:0074:0D35
 */
void f__29E8_0EB8_0049_69EA()
{
	emu_testw(&emu_get_memory16(emu_cs, 0x00,  0x1B5), 0x2);
	if (emu_flags.zf) { f__29E8_0ECB_0036_01D0(); return; }
	emu_testb(&emu_cx.h, emu_get_memory8(emu_cs, emu_di,  0x222));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_xorb(&emu_ax.h, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EEB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EDD; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0ECB_0036_01D0()
 *
 * @name f__29E8_0ECB_0036_01D0
 * @implements 29E8:0ECB:0036:01D0 ()
 *
 * Called From: 29E8:0EBF:0049:69EA
 */
void f__29E8_0ECB_0036_01D0()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x26B), emu_ax.h);
	emu_cmpw(&emu_ax.x, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0036; emu_last_crc = 0x01D0; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0036; emu_last_crc = 0x01D0; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x420);
	if (!emu_flags.zf) { f__29E8_0EEB_0016_D025(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700A));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EFC; emu_last_cs = 0x29E8; emu_last_ip = 0x0EEE; emu_last_length = 0x0036; emu_last_crc = 0x01D0; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0036; emu_last_crc = 0x01D0; emu_call();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0EEB_0016_D025()
 *
 * @name f__29E8_0EEB_0016_D025
 * @implements 29E8:0EEB:0016:D025 ()
 *
 * Called From: 29E8:0EDD:0036:01D0
 */
void f__29E8_0EEB_0016_D025()
{
	emu_cmpw(&emu_ax.x, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_C212(); return; }
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x700C));
	emu_xorw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0F01); emu_ip = 0x0A4A; emu_last_cs = 0x29E8; emu_last_ip = 0x0EFE; emu_last_length = 0x0016; emu_last_crc = 0xD025; emu_call();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0EFC_0005_C212()
 *
 * @name f__29E8_0EFC_0005_C212
 * @implements 29E8:0EFC:0005:C212 ()
 *
 * Called From: 29E8:0EEE:0016:D025
 */
void f__29E8_0EFC_0005_C212()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F01); p__29E8_0A4A_0040_5428();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0F01_0013_FF87()
 *
 * @name f__29E8_0F01_0013_FF87
 * @implements 29E8:0F01:0013:FF87 ()
 *
 * Called From: 29E8:0F01:0005:C212
 */
void f__29E8_0F01_0013_FF87()
{
	emu_pop(&emu_ax.x);
	emu_cmpb(&emu_ax.l, 0x6E);
	if (!emu_flags.zf) { f__29E8_0F15_0021_FE06(); return; }
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x7C), 0x0);
	if (emu_flags.zf) { f__29E8_0F15_0021_FE06(); return; }
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x7A);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x7C);
	emu_push(0x0F14);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F0F; emu_last_length = 0x0013; emu_last_crc = 0xFF87;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0F14; emu_last_cs = 0x29E8; emu_last_ip = 0x0F14; emu_last_length = 0x0013; emu_last_crc = 0xFF87; emu_call();
}

/**
 * Decompiled function f__29E8_0F15_0021_FE06()
 *
 * @name f__29E8_0F15_0021_FE06
 * @implements 29E8:0F15:0021:FE06 ()
 *
 * Called From: 29E8:0F04:0013:FF87
 * Called From: 29E8:0F0C:0013:FF87
 */
void f__29E8_0F15_0021_FE06()
{
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx.x, 0xA);
	emu_repne_scasb();
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0F1F; emu_last_length = 0x0021; emu_last_crc = 0xFE06; emu_call(); return; }
	emu_movw(&emu_di, 0x36);
	emu_movw(&emu_cx.x, 0x22);
	emu_shrw(&emu_cx.x, 0x1);
	emu_repne_scasw();
	if (emu_cx.x == 0) { f__29E8_0F36_0018_A539(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_di,  0x20));
	emu_andw(&emu_bx.x, emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F36; emu_last_cs = 0x29E8; emu_last_ip = 0x0F32; emu_last_length = 0x0021; emu_last_crc = 0xFE06; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0F34; emu_last_length = 0x0021; emu_last_crc = 0xFE06; emu_call();
}

/**
 * Decompiled function f__29E8_0F36_0018_A539()
 *
 * @name f__29E8_0F36_0018_A539
 * @implements 29E8:0F36:0018:A539 ()
 *
 * Called From: 29E8:0F2B:0021:FE06
 */
void f__29E8_0F36_0018_A539()
{
	emu_testw(&emu_dx.x, 0x4);
	if (emu_flags.zf) { f__29E8_0F4E_0028_9BC1(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x252));

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x258);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x25A);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F49; emu_last_length = 0x0018; emu_last_crc = 0xA539;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__29E8_0F3C_0012_01FA()
 *
 * @name f__29E8_0F3C_0012_01FA
 * @implements 29E8:0F3C:0012:01FA ()
 *
 * Called From: 29E8:0DEA:000D:1FF6
 */
void f__29E8_0F3C_0012_01FA()
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

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x258);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x25A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700048: f__0070_0048_0005_E15B(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F49; emu_last_length = 0x0012; emu_last_crc = 0x01FA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__29E8_0F4E_0028_9BC1()
 *
 * @name f__29E8_0F4E_0028_9BC1
 * @implements 29E8:0F4E:0028:9BC1 ()
 *
 * Called From: 29E8:0E18:0003:DDAC
 * Called From: 29E8:0F3A:0018:A539
 */
void f__29E8_0F4E_0028_9BC1()
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
 * Decompiled function f__29E8_0F7A_000D_B1AA()
 *
 * @name f__29E8_0F7A_000D_B1AA
 * @implements 29E8:0F7A:000D:B1AA ()
 *
 * Called From: B500:003D:0005:B18D
 */
void f__29E8_0F7A_000D_B1AA()
{
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_cs, 0x00,  0x25C));
	emu_movw(&emu_ax.x, 0x2523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F87); f__0070_0108_0005_E45B();
	f__29E8_0F87_000A_5481();
}

/**
 * Decompiled function f__29E8_0F87_000A_5481()
 *
 * @name f__29E8_0F87_000A_5481
 * @implements 29E8:0F87:000A:5481 ()
 *
 * Called From: 29E8:0F87:000D:B1AA
 */
void f__29E8_0F87_000A_5481()
{
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_cs, 0x00,  0x258));
	emu_movw(&emu_ax.x, 0x2509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F91); f__0070_0108_0005_E45B();
	f__29E8_0F91_0004_9ED7();
}

/**
 * Decompiled function f__29E8_0F91_0004_9ED7()
 *
 * @name f__29E8_0F91_0004_9ED7
 * @implements 29E8:0F91:0004:9ED7 ()
 *
 * Called From: 29E8:0F91:000A:5481
 */
void f__29E8_0F91_0004_9ED7()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
