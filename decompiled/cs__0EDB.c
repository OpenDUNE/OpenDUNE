/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0EDB_00B7_003B_92E3()
 *
 * @name f__0EDB_00B7_003B_92E3
 * @implements 0EDB:00B7:003B:92E3 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_00B7_003B_92E3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_bx.x, 0x5);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_cx.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	f__0EDB_00F2_0004_893F(); return;
}

/**
 * Decompiled function f__0EDB_00F2_0004_893F()
 *
 * @name f__0EDB_00F2_0004_893F
 * @implements 0EDB:00F2:0004:893F ()
 *
 * Called From: 0EDB:00F0:003B:92E3
 */
void f__0EDB_00F2_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_00F6_000C_3B74()
 *
 * @name f__0EDB_00F6_000C_3B74
 * @implements 0EDB:00F6:000C:3B74 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_00F6_000C_3B74()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0EDB_0102_0019_65F3();
}

/**
 * Decompiled function f__0EDB_0102_0019_65F3()
 *
 * @name f__0EDB_0102_0019_65F3
 * @implements 0EDB:0102:0019:65F3 ()
 *
 * Called From: 0EDB:0102:000C:3B74
 */
void f__0EDB_0102_0019_65F3()
{
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x34C1; ovl__34C1(0);
	f__0EDB_011B_0025_98EB();
}

/**
 * Decompiled function f__0EDB_011B_0025_98EB()
 *
 * @name f__0EDB_011B_0025_98EB
 * @implements 0EDB:011B:0025:98EB ()
 *
 * Called From: 0EDB:011B:0019:65F3
 */
void f__0EDB_011B_0025_98EB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, 0x5);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	f__0EDB_0140_0005_8BCF(); return;
}

/**
 * Decompiled function f__0EDB_0140_0005_8BCF()
 *
 * @name f__0EDB_0140_0005_8BCF
 * @implements 0EDB:0140:0005:8BCF ()
 *
 * Called From: 0EDB:013E:0025:98EB
 */
void f__0EDB_0140_0005_8BCF()
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
 * Decompiled function f__0EDB_0145_002F_C125()
 *
 * @name f__0EDB_0145_002F_C125
 * @implements 0EDB:0145:002F:C125 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0145_002F_C125()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_incw(&emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__0EDB_0174_0004_5B1F();
}

/**
 * Decompiled function f__0EDB_0174_0004_5B1F()
 *
 * @name f__0EDB_0174_0004_5B1F
 * @implements 0EDB:0174:0004:5B1F ()
 *
 * Called From: 0EDB:0174:002F:C125
 */
void f__0EDB_0174_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0EDB_0178_0002_2597(); return;
}

/**
 * Decompiled function f__0EDB_0178_0002_2597()
 *
 * @name f__0EDB_0178_0002_2597
 * @implements 0EDB:0178:0002:2597 ()
 *
 * Called From: 0EDB:0176:0004:5B1F
 */
void f__0EDB_0178_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_01F7_0020_4DC9()
 *
 * @name f__0EDB_01F7_0020_4DC9
 * @implements 0EDB:01F7:0020:4DC9 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_01F7_0020_4DC9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0217); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__0EDB_0217_000B_3104();
}

/**
 * Decompiled function f__0EDB_0217_000B_3104()
 *
 * @name f__0EDB_0217_000B_3104
 * @implements 0EDB:0217:000B:3104 ()
 *
 * Called From: 0EDB:0217:0020:4DC9
 */
void f__0EDB_0217_000B_3104()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_0241_0005_5695(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0222); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__0EDB_0222_0014_ECFD();
}

/**
 * Decompiled function f__0EDB_0222_0014_ECFD()
 *
 * @name f__0EDB_0222_0014_ECFD
 * @implements 0EDB:0222:0014:ECFD ()
 *
 * Called From: 0EDB:0222:000B:3104
 */
void f__0EDB_0222_0014_ECFD()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0236); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__0EDB_0236_000B_99BD();
}

/**
 * Decompiled function f__0EDB_0236_000B_99BD()
 *
 * @name f__0EDB_0236_000B_99BD
 * @implements 0EDB:0236:000B:99BD ()
 *
 * Called From: 0EDB:0236:0014:ECFD
 */
void f__0EDB_0236_000B_99BD()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__0EDB_0246_0005_8BCF(); return;
}

/**
 * Decompiled function f__0EDB_023F_0002_C2BA()
 *
 * @name f__0EDB_023F_0002_C2BA
 * @implements 0EDB:023F:0002:C2BA ()
 *
 * Called From: 0EDB:0244:0005:5695
 */
void f__0EDB_023F_0002_C2BA()
{
	f__0EDB_0246_0005_8BCF(); return;
}

/**
 * Decompiled function f__0EDB_0241_0005_5695()
 *
 * @name f__0EDB_0241_0005_5695
 * @implements 0EDB:0241:0005:5695 ()
 *
 * Called From: 0EDB:021A:000B:3104
 */
void f__0EDB_0241_0005_5695()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_023F_0002_C2BA(); return;
}

/**
 * Decompiled function f__0EDB_0246_0005_8BCF()
 *
 * @name f__0EDB_0246_0005_8BCF
 * @implements 0EDB:0246:0005:8BCF ()
 *
 * Called From: 0EDB:023F:000B:99BD
 * Called From: 0EDB:023F:0002:C2BA
 */
void f__0EDB_0246_0005_8BCF()
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
 * Decompiled function f__0EDB_024B_001D_2E46()
 *
 * @name f__0EDB_024B_001D_2E46
 * @implements 0EDB:024B:001D:2E46 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_024B_001D_2E46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__0EDB_0268_0013_346E();
}

/**
 * Decompiled function f__0EDB_0268_0013_346E()
 *
 * @name f__0EDB_0268_0013_346E
 * @implements 0EDB:0268:0013:346E ()
 *
 * Called From: 0EDB:0268:001D:2E46
 */
void f__0EDB_0268_0013_346E()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_0280_0005_5695(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x027B); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	f__0EDB_027B_0005_866E();
}

/**
 * Decompiled function f__0EDB_027B_0005_866E()
 *
 * @name f__0EDB_027B_0005_866E
 * @implements 0EDB:027B:0005:866E ()
 *
 * Called From: 0EDB:027B:0013:346E
 */
void f__0EDB_027B_0005_866E()
{
	emu_addws(&emu_sp, 0x6);
	f__0EDB_0285_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_027E_0002_C2BA()
 *
 * @name f__0EDB_027E_0002_C2BA
 * @implements 0EDB:027E:0002:C2BA ()
 *
 * Called From: 0EDB:0283:0005:5695
 */
void f__0EDB_027E_0002_C2BA()
{
	f__0EDB_0285_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_0280_0005_5695()
 *
 * @name f__0EDB_0280_0005_5695
 * @implements 0EDB:0280:0005:5695 ()
 *
 * Called From: 0EDB:026B:0013:346E
 */
void f__0EDB_0280_0005_5695()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_027E_0002_C2BA(); return;
}

/**
 * Decompiled function f__0EDB_0285_0003_2E57()
 *
 * @name f__0EDB_0285_0003_2E57
 * @implements 0EDB:0285:0003:2E57 ()
 *
 * Called From: 0EDB:027E:0005:866E
 * Called From: 0EDB:027E:0002:C2BA
 */
void f__0EDB_0285_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0288_0020_3D83()
 *
 * @name f__0EDB_0288_0020_3D83
 * @implements 0EDB:0288:0020:3D83 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0288_0020_3D83()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02A8); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__0EDB_02A8_001E_E8BB();
}

/**
 * Decompiled function f__0EDB_02A8_001E_E8BB()
 *
 * @name f__0EDB_02A8_001E_E8BB
 * @implements 0EDB:02A8:001E:E8BB ()
 *
 * Called From: 0EDB:02A8:0020:3D83
 */
void f__0EDB_02A8_001E_E8BB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0EDB_02D1_0006_5783(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02C6); emu_cs = 0x167E; emu_ip = 0x00F3; emu_last_cs = 0x0EDB; emu_last_ip = 0x02C1; emu_last_length = 0x001E; emu_last_crc = 0xE8BB; emu_call();
	/* Unresolved jump */ emu_ip = 0x02C6; emu_last_cs = 0x0EDB; emu_last_ip = 0x02C6; emu_last_length = 0x001E; emu_last_crc = 0xE8BB; emu_call();
}

/**
 * Decompiled function f__0EDB_02CF_0002_CA3A()
 *
 * @name f__0EDB_02CF_0002_CA3A
 * @implements 0EDB:02CF:0002:CA3A ()
 *
 * Called From: 0EDB:02E3:0002:B53A
 */
void f__0EDB_02CF_0002_CA3A()
{
	f__0EDB_02E5_0005_8BCF(); return;
}

/**
 * Decompiled function f__0EDB_02D1_0006_5783()
 *
 * @name f__0EDB_02D1_0006_5783
 * @implements 0EDB:02D1:0006:5783 ()
 *
 * Called From: 0EDB:02B5:001E:E8BB
 */
void f__0EDB_02D1_0006_5783()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	f__0EDB_02D7_000A_9455();
}

/**
 * Decompiled function f__0EDB_02D7_000A_9455()
 *
 * @name f__0EDB_02D7_000A_9455
 * @implements 0EDB:02D7:000A:9455 ()
 *
 * Called From: 0EDB:02D7:0006:5783
 */
void f__0EDB_02D7_000A_9455()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02E1; emu_last_cs = 0x0EDB; emu_last_ip = 0x02DA; emu_last_length = 0x000A; emu_last_crc = 0x9455; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0EDB_02E3_0002_B53A(); return;
}

/**
 * Decompiled function f__0EDB_02E3_0002_B53A()
 *
 * @name f__0EDB_02E3_0002_B53A
 * @implements 0EDB:02E3:0002:B53A ()
 *
 * Called From: 0EDB:02DF:000A:9455
 */
void f__0EDB_02E3_0002_B53A()
{
	f__0EDB_02CF_0002_CA3A(); return;
}

/**
 * Decompiled function f__0EDB_02E5_0005_8BCF()
 *
 * @name f__0EDB_02E5_0005_8BCF
 * @implements 0EDB:02E5:0005:8BCF ()
 *
 * Called From: 0EDB:02CF:0002:CA3A
 */
void f__0EDB_02E5_0005_8BCF()
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
 * Decompiled function f__0EDB_02EA_001E_F83C()
 *
 * @name f__0EDB_02EA_001E_F83C
 * @implements 0EDB:02EA:001E:F83C ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_02EA_001E_F83C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0308); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__0EDB_0308_001A_CA96();
}

/**
 * Decompiled function f__0EDB_0308_001A_CA96()
 *
 * @name f__0EDB_0308_001A_CA96
 * @implements 0EDB:0308:001A:CA96 ()
 *
 * Called From: 0EDB:0308:001E:F83C
 */
void f__0EDB_0308_001A_CA96()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0EDB_0322_0005_B972(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	/* Unresolved jump */ emu_ip = 0x0327; emu_last_cs = 0x0EDB; emu_last_ip = 0x0320; emu_last_length = 0x001A; emu_last_crc = 0xCA96; emu_call();
}

/**
 * Decompiled function f__0EDB_0320_0002_C2BA()
 *
 * @name f__0EDB_0320_0002_C2BA
 * @implements 0EDB:0320:0002:C2BA ()
 *
 * Called From: 0EDB:0325:0005:B972
 */
void f__0EDB_0320_0002_C2BA()
{
	f__0EDB_0327_0004_893F(); return;
}

/**
 * Decompiled function f__0EDB_0322_0005_B972()
 *
 * @name f__0EDB_0322_0005_B972
 * @implements 0EDB:0322:0005:B972 ()
 *
 * Called From: 0EDB:0315:001A:CA96
 */
void f__0EDB_0322_0005_B972()
{
	emu_movw(&emu_ax.x, 0x80);
	f__0EDB_0320_0002_C2BA(); return;
}

/**
 * Decompiled function f__0EDB_0327_0004_893F()
 *
 * @name f__0EDB_0327_0004_893F
 * @implements 0EDB:0327:0004:893F ()
 *
 * Called From: 0EDB:0320:0002:C2BA
 */
void f__0EDB_0327_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_032B_0031_E91B()
 *
 * @name f__0EDB_032B_0031_E91B
 * @implements 0EDB:032B:0031:E91B ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_032B_0031_E91B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x035C); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__0EDB_035C_0005_822E();
}

/**
 * Decompiled function f__0EDB_035C_0005_822E()
 *
 * @name f__0EDB_035C_0005_822E
 * @implements 0EDB:035C:0005:822E ()
 *
 * Called From: 0EDB:035C:0031:E91B
 */
void f__0EDB_035C_0005_822E()
{
	emu_addws(&emu_sp, 0x8);
	f__0EDB_036F_0012_1350(); return;
}

/**
 * Decompiled function f__0EDB_0361_000C_7DFF()
 *
 * @name f__0EDB_0361_000C_7DFF
 * @implements 0EDB:0361:000C:7DFF ()
 *
 * Called From: 0EDB:037B:0012:1350
 */
void f__0EDB_0361_000C_7DFF()
{
	emu_incw(&emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__0EDB_036D_0014_8875();
}

/**
 * Decompiled function f__0EDB_036D_0014_8875()
 *
 * @name f__0EDB_036D_0014_8875
 * @implements 0EDB:036D:0014:8875 ()
 *
 * Called From: 0EDB:036D:000C:7DFF
 */
void f__0EDB_036D_0014_8875()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0361; emu_last_cs = 0x0EDB; emu_last_ip = 0x037B; emu_last_length = 0x0014; emu_last_crc = 0x8875; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0EDB_0381_0005_8BCF(); return;
}

/**
 * Decompiled function f__0EDB_036F_0012_1350()
 *
 * @name f__0EDB_036F_0012_1350
 * @implements 0EDB:036F:0012:1350 ()
 *
 * Called From: 0EDB:035F:0005:822E
 */
void f__0EDB_036F_0012_1350()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0EDB_0361_000C_7DFF(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0EDB_0381_0005_8BCF(); return;
}

/**
 * Decompiled function f__0EDB_0381_0005_8BCF()
 *
 * @name f__0EDB_0381_0005_8BCF
 * @implements 0EDB:0381:0005:8BCF ()
 *
 * Called From: 0EDB:037F:0012:1350
 * Called From: 0EDB:037F:0014:8875
 */
void f__0EDB_0381_0005_8BCF()
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
 * Decompiled function f__0EDB_03B9_001D_2E46()
 *
 * @name f__0EDB_03B9_001D_2E46
 * @implements 0EDB:03B9:001D:2E46 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_03B9_001D_2E46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__0EDB_03D6_000B_017F();
}

/**
 * Decompiled function f__0EDB_03D6_000B_017F()
 *
 * @name f__0EDB_03D6_000B_017F
 * @implements 0EDB:03D6:000B:017F ()
 *
 * Called From: 0EDB:03D6:001D:2E46
 */
void f__0EDB_03D6_000B_017F()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_03E4_0005_5695(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__0EDB_03E1_0003_C99A();
}

/**
 * Decompiled function f__0EDB_03E1_0003_C99A()
 *
 * @name f__0EDB_03E1_0003_C99A
 * @implements 0EDB:03E1:0003:C99A ()
 *
 * Called From: 0EDB:03E1:000B:017F
 */
void f__0EDB_03E1_0003_C99A()
{
	emu_pop(&emu_cx.x);
	f__0EDB_03E9_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_03E2_0002_C2BA()
 *
 * @name f__0EDB_03E2_0002_C2BA
 * @implements 0EDB:03E2:0002:C2BA ()
 *
 * Called From: 0EDB:03E7:0005:5695
 */
void f__0EDB_03E2_0002_C2BA()
{
	f__0EDB_03E9_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_03E4_0005_5695()
 *
 * @name f__0EDB_03E4_0005_5695
 * @implements 0EDB:03E4:0005:5695 ()
 *
 * Called From: 0EDB:03D9:000B:017F
 */
void f__0EDB_03E4_0005_5695()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_03E2_0002_C2BA(); return;
}

/**
 * Decompiled function f__0EDB_03E9_0003_2E57()
 *
 * @name f__0EDB_03E9_0003_2E57
 * @implements 0EDB:03E9:0003:2E57 ()
 *
 * Called From: 0EDB:03E2:0003:C99A
 * Called From: 0EDB:03E2:0002:C2BA
 */
void f__0EDB_03E9_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_03EC_0020_629E()
 *
 * @name f__0EDB_03EC_0020_629E
 * @implements 0EDB:03EC:0020:629E ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_03EC_0020_629E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__0EDB_041D_0005_5695(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x040C); emu_cs = 0x0FE4; f__0FE4_05FD_002C_15BA();
	f__0EDB_040C_0011_5969();
}

/**
 * Decompiled function f__0EDB_040C_0011_5969()
 *
 * @name f__0EDB_040C_0011_5969
 * @implements 0EDB:040C:0011:5969 ()
 *
 * Called From: 0EDB:040C:0020:629E
 */
void f__0EDB_040C_0011_5969()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__0EDB_0422_0004_893F(); return;
}

/**
 * Decompiled function f__0EDB_041B_0002_C2BA()
 *
 * @name f__0EDB_041B_0002_C2BA
 * @implements 0EDB:041B:0002:C2BA ()
 *
 * Called From: 0EDB:0420:0005:5695
 */
void f__0EDB_041B_0002_C2BA()
{
	f__0EDB_0422_0004_893F(); return;
}

/**
 * Decompiled function f__0EDB_041D_0005_5695()
 *
 * @name f__0EDB_041D_0005_5695
 * @implements 0EDB:041D:0005:5695 ()
 *
 * Called From: 0EDB:03FB:0020:629E
 */
void f__0EDB_041D_0005_5695()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_041B_0002_C2BA(); return;
}

/**
 * Decompiled function f__0EDB_0422_0004_893F()
 *
 * @name f__0EDB_0422_0004_893F
 * @implements 0EDB:0422:0004:893F ()
 *
 * Called From: 0EDB:041B:0011:5969
 * Called From: 0EDB:041B:0002:C2BA
 */
void f__0EDB_0422_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0426_0027_711D()
 *
 * @name f__0EDB_0426_0027_711D
 * @implements 0EDB:0426:0027:711D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0426_0027_711D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x044D); emu_cs = 0x3483; ovl__3483(0);
	f__0EDB_044D_0007_F90C();
}

/**
 * Decompiled function f__0EDB_044D_0007_F90C()
 *
 * @name f__0EDB_044D_0007_F90C
 * @implements 0EDB:044D:0007:F90C ()
 *
 * Called From: 0EDB:044D:0027:711D
 */
void f__0EDB_044D_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0454_0002_2597(); return;
}

/**
 * Decompiled function f__0EDB_0454_0002_2597()
 *
 * @name f__0EDB_0454_0002_2597
 * @implements 0EDB:0454:0002:2597 ()
 *
 * Called From: 0EDB:0452:0007:F90C
 */
void f__0EDB_0454_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0456_0032_B7E5()
 *
 * @name f__0EDB_0456_0032_B7E5
 * @implements 0EDB:0456:0032:B7E5 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0456_0032_B7E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0EDB_0488_0008_375A();
}

/**
 * Decompiled function f__0EDB_0488_0008_375A()
 *
 * @name f__0EDB_0488_0008_375A
 * @implements 0EDB:0488:0008:375A ()
 *
 * Called From: 0EDB:0488:0032:B7E5
 */
void f__0EDB_0488_0008_375A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; ovl__34CD(27);
	f__0EDB_0490_0013_CDD0();
}

/**
 * Decompiled function f__0EDB_0490_0013_CDD0()
 *
 * @name f__0EDB_0490_0013_CDD0
 * @implements 0EDB:0490:0013:CDD0 ()
 *
 * Called From: 0EDB:0490:0008:375A
 */
void f__0EDB_0490_0013_CDD0()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0EDB_04A7_0004_9539(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04A3); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0EDB_04A3_0004_591F();
}

/**
 * Decompiled function f__0EDB_04A3_0004_591F()
 *
 * @name f__0EDB_04A3_0004_591F
 * @implements 0EDB:04A3:0004:591F ()
 *
 * Called From: 0EDB:04A3:0013:CDD0
 */
void f__0EDB_04A3_0004_591F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0EDB_04AB_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_04A5_0002_C23A()
 *
 * @name f__0EDB_04A5_0002_C23A
 * @implements 0EDB:04A5:0002:C23A ()
 *
 * Called From: 0EDB:04A9:0004:9539
 */
void f__0EDB_04A5_0002_C23A()
{
	f__0EDB_04AB_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_04A7_0004_9539()
 *
 * @name f__0EDB_04A7_0004_9539
 * @implements 0EDB:04A7:0004:9539 ()
 *
 * Called From: 0EDB:0497:0013:CDD0
 */
void f__0EDB_04A7_0004_9539()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_04A5_0002_C23A(); return;
}

/**
 * Decompiled function f__0EDB_04AB_0003_2E57()
 *
 * @name f__0EDB_04AB_0003_2E57
 * @implements 0EDB:04AB:0003:2E57 ()
 *
 * Called From: 0EDB:04A5:0004:591F
 * Called From: 0EDB:04A5:0002:C23A
 */
void f__0EDB_04AB_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_04AE_0024_408E()
 *
 * @name f__0EDB_04AE_0024_408E
 * @implements 0EDB:04AE:0024:408E ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_04AE_0024_408E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	f__0EDB_04D2_0029_06BF();
}

/**
 * Decompiled function f__0EDB_04D2_0029_06BF()
 *
 * @name f__0EDB_04D2_0029_06BF
 * @implements 0EDB:04D2:0029:06BF ()
 *
 * Called From: 0EDB:04D2:0024:408E
 */
void f__0EDB_04D2_0029_06BF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0EDB_0504_0004_9539(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x5);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0504; emu_last_cs = 0x0EDB; emu_last_ip = 0x04EE; emu_last_length = 0x0029; emu_last_crc = 0x06BF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x04FB); f__0EDB_050C_001D_2E46();
	f__0EDB_04FB_0009_722F();
}

/**
 * Decompiled function f__0EDB_04FB_0009_722F()
 *
 * @name f__0EDB_04FB_0009_722F
 * @implements 0EDB:04FB:0009:722F ()
 *
 * Called From: 0EDB:04FB:0029:06BF
 */
void f__0EDB_04FB_0009_722F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	f__0EDB_0508_0004_893F(); return;
}

/**
 * Decompiled function f__0EDB_0502_0002_C23A()
 *
 * @name f__0EDB_0502_0002_C23A
 * @implements 0EDB:0502:0002:C23A ()
 *
 * Called From: 0EDB:0506:0004:9539
 */
void f__0EDB_0502_0002_C23A()
{
	f__0EDB_0508_0004_893F(); return;
}

/**
 * Decompiled function f__0EDB_0504_0004_9539()
 *
 * @name f__0EDB_0504_0004_9539
 * @implements 0EDB:0504:0004:9539 ()
 *
 * Called From: 0EDB:04DF:0029:06BF
 */
void f__0EDB_0504_0004_9539()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0502_0002_C23A(); return;
}

/**
 * Decompiled function f__0EDB_0508_0004_893F()
 *
 * @name f__0EDB_0508_0004_893F
 * @implements 0EDB:0508:0004:893F ()
 *
 * Called From: 0EDB:0502:0009:722F
 * Called From: 0EDB:0502:0002:C23A
 */
void f__0EDB_0508_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_050C_001D_2E46()
 *
 * @name f__0EDB_050C_001D_2E46
 * @implements 0EDB:050C:001D:2E46 ()
 *
 * Called From: 0EDB:04F8:0029:06BF
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_050C_001D_2E46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__0EDB_0529_000B_01D3();
}

/**
 * Decompiled function f__0EDB_0529_000B_01D3()
 *
 * @name f__0EDB_0529_000B_01D3
 * @implements 0EDB:0529:000B:01D3 ()
 *
 * Called From: 0EDB:0529:001D:2E46
 */
void f__0EDB_0529_000B_01D3()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_058D_0004_8339(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__0EDB_0534_000D_20EF();
}

/**
 * Decompiled function f__0EDB_0534_000D_20EF()
 *
 * @name f__0EDB_0534_000D_20EF
 * @implements 0EDB:0534:000D:20EF ()
 *
 * Called From: 0EDB:0534:000B:01D3
 */
void f__0EDB_0534_000D_20EF()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__0EDB_0541_0006_9786(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__0EDB_0569_0006_3784(); return; }
	/* Unresolved jump */ emu_ip = 0x058B; emu_last_cs = 0x0EDB; emu_last_ip = 0x053F; emu_last_length = 0x000D; emu_last_crc = 0x20EF; emu_call();
}

/**
 * Decompiled function f__0EDB_0541_0006_9786()
 *
 * @name f__0EDB_0541_0006_9786
 * @implements 0EDB:0541:0006:9786 ()
 *
 * Called From: 0EDB:0538:000D:20EF
 */
void f__0EDB_0541_0006_9786()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__0EDB_0547_0008_26BA();
}

/**
 * Decompiled function f__0EDB_0547_0008_26BA()
 *
 * @name f__0EDB_0547_0008_26BA
 * @implements 0EDB:0547:0008:26BA ()
 *
 * Called From: 0EDB:0547:0006:9786
 */
void f__0EDB_0547_0008_26BA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__0EDB_054F_0016_49F0();
}

/**
 * Decompiled function f__0EDB_054F_0016_49F0()
 *
 * @name f__0EDB_054F_0016_49F0
 * @implements 0EDB:054F:0016:49F0 ()
 *
 * Called From: 0EDB:054F:0008:26BA
 */
void f__0EDB_054F_0016_49F0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0565; emu_last_cs = 0x0EDB; emu_last_ip = 0x055E; emu_last_length = 0x0016; emu_last_crc = 0x49F0; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0EDB_0567_0002_D43A(); return;
}

/**
 * Decompiled function f__0EDB_0567_0002_D43A()
 *
 * @name f__0EDB_0567_0002_D43A
 * @implements 0EDB:0567:0002:D43A ()
 *
 * Called From: 0EDB:0563:0016:49F0
 * Called From: 0EDB:0589:0002:AE3A
 * Called From: 0EDB:0589:0004:8639
 * Called From: 0EDB:058F:0004:8339
 */
void f__0EDB_0567_0002_D43A()
{
	f__0EDB_0591_0003_2E57(); return;
}

/**
 * Decompiled function f__0EDB_0569_0006_3784()
 *
 * @name f__0EDB_0569_0006_3784
 * @implements 0EDB:0569:0006:3784 ()
 *
 * Called From: 0EDB:053D:000D:20EF
 */
void f__0EDB_0569_0006_3784()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__0EDB_056F_0018_C65D();
}

/**
 * Decompiled function f__0EDB_056F_0018_C65D()
 *
 * @name f__0EDB_056F_0018_C65D
 * @implements 0EDB:056F:0018:C65D ()
 *
 * Called From: 0EDB:056F:0006:3784
 */
void f__0EDB_056F_0018_C65D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { f__0EDB_0587_0004_8639(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0EDB_0589_0002_AE3A(); return;
}

/**
 * Decompiled function f__0EDB_0587_0004_8639()
 *
 * @name f__0EDB_0587_0004_8639
 * @implements 0EDB:0587:0004:8639 ()
 *
 * Called From: 0EDB:0580:0018:C65D
 */
void f__0EDB_0587_0004_8639()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0567_0002_D43A(); return;
}

/**
 * Decompiled function f__0EDB_0589_0002_AE3A()
 *
 * @name f__0EDB_0589_0002_AE3A
 * @implements 0EDB:0589:0002:AE3A ()
 *
 * Called From: 0EDB:0585:0018:C65D
 */
void f__0EDB_0589_0002_AE3A()
{
	f__0EDB_0567_0002_D43A(); return;
}

/**
 * Decompiled function f__0EDB_058D_0004_8339()
 *
 * @name f__0EDB_058D_0004_8339
 * @implements 0EDB:058D:0004:8339 ()
 *
 * Called From: 0EDB:052C:000B:01D3
 */
void f__0EDB_058D_0004_8339()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0567_0002_D43A(); return;
}

/**
 * Decompiled function f__0EDB_0591_0003_2E57()
 *
 * @name f__0EDB_0591_0003_2E57
 * @implements 0EDB:0591:0003:2E57 ()
 *
 * Called From: 0EDB:0567:0002:D43A
 */
void f__0EDB_0591_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
