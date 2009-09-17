/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B52A_0000_0019_1617()
 *
 * @name f__B52A_0000_0019_1617
 * @implements B52A:0000:0019:1617 ()
 *
 * Called From: 352A:0020:0005:0000
 */
void f__B52A_0000_0019_1617()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x44);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0019); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0019_0017_365A();
}

/**
 * Decompiled function f__B52A_0019_0017_365A()
 *
 * @name f__B52A_0019_0017_365A
 * @implements B52A:0019:0017:365A ()
 *
 * Called From: B52A:0019:0019:1617
 */
void f__B52A_0019_0017_365A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0030); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0030_0030_5D25();
}

/**
 * Decompiled function f__B52A_0030_0030_5D25()
 *
 * @name f__B52A_0030_0030_5D25
 * @implements B52A:0030:0030:5D25 ()
 *
 * Called From: B52A:0030:0017:365A
 */
void f__B52A_0030_0030_5D25()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), 0x1);
	if (emu_flags.zf) { f__B52A_007B_0015_C75F(); return; }
	emu_orw(&emu_si, 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x300);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0xB52A; emu_last_ip = 0x0049; emu_last_length = 0x0030; emu_last_crc = 0x5D25; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x1FB5; emu_ip = 0x1207; emu_last_cs = 0xB52A; emu_last_ip = 0x005B; emu_last_length = 0x0030; emu_last_crc = 0x5D25; emu_call();
	/* Unresolved jump */ emu_ip = 0x0060; emu_last_cs = 0xB52A; emu_last_ip = 0x0060; emu_last_length = 0x0030; emu_last_crc = 0x5D25; emu_call();
}

/**
 * Decompiled function f__B52A_007B_0015_C75F()
 *
 * @name f__B52A_007B_0015_C75F
 * @implements B52A:007B:0015:C75F ()
 *
 * Called From: B52A:0038:0030:5D25
 */
void f__B52A_007B_0015_C75F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0090_002B_8277();
}

/**
 * Decompiled function f__B52A_0090_002B_8277()
 *
 * @name f__B52A_0090_002B_8277
 * @implements B52A:0090:002B:8277 ()
 *
 * Called From: B52A:0090:0015:C75F
 */
void f__B52A_0090_002B_8277()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x38));
	if (emu_flags.zf) { f__B52A_00BB_001E_9A65(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__B52A_00C3_0016_1D8A(); return;
}

/**
 * Decompiled function f__B52A_00BB_001E_9A65()
 *
 * @name f__B52A_00BB_001E_9A65
 * @implements B52A:00BB:001E:9A65 ()
 *
 * Called From: B52A:009F:002B:8277
 */
void f__B52A_00BB_001E_9A65()
{
	emu_orws(&emu_si, 0x40);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_00D9_0019_2572();
}

/**
 * Decompiled function f__B52A_00C3_0016_1D8A()
 *
 * @name f__B52A_00C3_0016_1D8A
 * @implements B52A:00C3:0016:1D8A ()
 *
 * Called From: B52A:00B9:002B:8277
 */
void f__B52A_00C3_0016_1D8A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_00D9_0019_2572();
}

/**
 * Decompiled function f__B52A_00D9_0019_2572()
 *
 * @name f__B52A_00D9_0019_2572
 * @implements B52A:00D9:0019:2572 ()
 *
 * Called From: B52A:00D9:0016:1D8A
 * Called From: B52A:00D9:001E:9A65
 */
void f__B52A_00D9_0019_2572()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { f__B52A_00FA_0060_192B(); return; }
	emu_orws(&emu_si, 0x10);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_00F2_0008_D619();
}

/**
 * Decompiled function f__B52A_00F2_0008_D619()
 *
 * @name f__B52A_00F2_0008_D619
 * @implements B52A:00F2:0008:D619 ()
 *
 * Called From: B52A:00F2:0019:2572
 */
void f__B52A_00F2_0008_D619()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__B52A_0104_0056_67EF(); return;
}

/**
 * Decompiled function f__B52A_00FA_0060_192B()
 *
 * @name f__B52A_00FA_0060_192B
 * @implements B52A:00FA:0060:192B ()
 *
 * Called From: B52A:00DE:0019:2572
 */
void f__B52A_00FA_0060_192B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0137; emu_last_length = 0x0060; emu_last_crc = 0x192B; emu_call(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_0141_0019_667E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x013F; emu_last_length = 0x0060; emu_last_crc = 0x192B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x014A; emu_last_length = 0x0060; emu_last_crc = 0x192B; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0060; emu_last_crc = 0x192B; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) { f__B52A_015A_000B_64B1(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0470; emu_last_cs = 0xB52A; emu_last_ip = 0x0157; emu_last_length = 0x0060; emu_last_crc = 0x192B; emu_call();
}

/**
 * Decompiled function f__B52A_0104_0056_67EF()
 *
 * @name f__B52A_0104_0056_67EF
 * @implements B52A:0104:0056:67EF ()
 *
 * Called From: B52A:00F8:0008:D619
 */
void f__B52A_0104_0056_67EF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0137; emu_last_length = 0x0056; emu_last_crc = 0x67EF; emu_call(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_0141_0019_667E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x013F; emu_last_length = 0x0056; emu_last_crc = 0x67EF; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x014A; emu_last_length = 0x0056; emu_last_crc = 0x67EF; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0056; emu_last_crc = 0x67EF; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0151; emu_last_length = 0x0056; emu_last_crc = 0x67EF; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0470; emu_last_cs = 0xB52A; emu_last_ip = 0x0157; emu_last_length = 0x0056; emu_last_crc = 0x67EF; emu_call();
}

/**
 * Decompiled function f__B52A_0141_0019_667E()
 *
 * @name f__B52A_0141_0019_667E
 * @implements B52A:0141:0019:667E ()
 *
 * Called From: B52A:0139:0056:67EF
 * Called From: B52A:0139:0060:192B
 */
void f__B52A_0141_0019_667E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_015A_000B_64B1(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0019; emu_last_crc = 0x667E; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0151; emu_last_length = 0x0019; emu_last_crc = 0x667E; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0470; emu_last_cs = 0xB52A; emu_last_ip = 0x0157; emu_last_length = 0x0019; emu_last_crc = 0x667E; emu_call();
}

/**
 * Decompiled function f__B52A_0157_0003_9CA5()
 *
 * @name f__B52A_0157_0003_9CA5
 * @implements B52A:0157:0003:9CA5 ()
 *
 * Called From: B52A:046D:0013:8EF4
 */
void f__B52A_0157_0003_9CA5()
{
	f__B52A_0470_0006_F7CE(); return;
}

/**
 * Decompiled function f__B52A_015A_000B_64B1()
 *
 * @name f__B52A_015A_000B_64B1
 * @implements B52A:015A:000B:64B1 ()
 *
 * Called From: B52A:014A:0019:667E
 * Called From: B52A:0151:0060:192B
 */
void f__B52A_015A_000B_64B1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0165; emu_last_cs = 0xB52A; emu_last_ip = 0x0160; emu_last_length = 0x000B; emu_last_crc = 0x64B1; emu_call(); return; }
	f__B52A_0209_0021_B33E(); return;
}

/**
 * Decompiled function f__B52A_0209_0021_B33E()
 *
 * @name f__B52A_0209_0021_B33E
 * @implements B52A:0209:0021:B33E ()
 *
 * Called From: B52A:0162:000B:64B1
 */
void f__B52A_0209_0021_B33E()
{
	emu_orws(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x21);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_cs);
	emu_push(0x022A); f__B52A_07A5_0010_C5C7();
	f__B52A_022A_001A_9C3E();
}

/**
 * Decompiled function f__B52A_022A_001A_9C3E()
 *
 * @name f__B52A_022A_001A_9C3E
 * @implements B52A:022A:001A:9C3E ()
 *
 * Called From: B52A:022A:0021:B33E
 */
void f__B52A_022A_001A_9C3E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs);
	emu_push(0x0244); f__B52A_07A5_0010_C5C7();
	f__B52A_0244_0020_17D8();
}

/**
 * Decompiled function f__B52A_0244_0020_17D8()
 *
 * @name f__B52A_0244_0020_17D8
 * @implements B52A:0244:0020:17D8 ()
 *
 * Called From: B52A:0244:001A:9C3E
 */
void f__B52A_0244_0020_17D8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { f__B52A_0267_0073_107F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0264); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0264_0076_9A5D();
}

/**
 * Decompiled function f__B52A_0264_0076_9A5D()
 *
 * @name f__B52A_0264_0076_9A5D
 * @implements B52A:0264:0076:9A5D ()
 *
 * Called From: B52A:0264:0020:17D8
 */
void f__B52A_0264_0076_9A5D()
{
	emu_addws(&emu_sp, 0x8);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x8000);
	if (emu_flags.zf) { f__B52A_0277_0063_F767(); return; }
	emu_orw(&emu_si, 0x80);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x7FFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, 0x21);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; emu_ip = 0x38F6; emu_last_cs = 0xB52A; emu_last_ip = 0x02D5; emu_last_length = 0x0076; emu_last_crc = 0x9A5D; emu_call();
	f__B52A_02DA_0012_2608();
}

/**
 * Decompiled function f__B52A_0267_0073_107F()
 *
 * @name f__B52A_0267_0073_107F
 * @implements B52A:0267:0073:107F ()
 *
 * Called From: B52A:0251:0020:17D8
 */
void f__B52A_0267_0073_107F()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x8000);
	if (emu_flags.zf) { f__B52A_0277_0063_F767(); return; }
	emu_orw(&emu_si, 0x80);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x7FFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, 0x21);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; emu_ip = 0x38F6; emu_last_cs = 0xB52A; emu_last_ip = 0x02D5; emu_last_length = 0x0073; emu_last_crc = 0x107F; emu_call();
	f__B52A_02DA_0012_2608();
}

/**
 * Decompiled function f__B52A_0277_0063_F767()
 *
 * @name f__B52A_0277_0063_F767
 * @implements B52A:0277:0063:F767 ()
 *
 * Called From: B52A:026C:0076:9A5D
 * Called From: B52A:026C:0073:107F
 */
void f__B52A_0277_0063_F767()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, 0x21);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_02DA_0012_2608();
}

/**
 * Decompiled function f__B52A_02DA_0012_2608()
 *
 * @name f__B52A_02DA_0012_2608
 * @implements B52A:02DA:0012:2608 ()
 *
 * Called From: B52A:02DA:0063:F767
 */
void f__B52A_02DA_0012_2608()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02EC); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_02EC_0020_8B0D();
}

/**
 * Decompiled function f__B52A_02EC_0020_8B0D()
 *
 * @name f__B52A_02EC_0020_8B0D
 * @implements B52A:02EC:0020:8B0D ()
 *
 * Called From: B52A:02EC:0012:2608
 */
void f__B52A_02EC_0020_8B0D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_addw(&emu_ax.x, 0x2);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_030C_000A_607E(); return; }
	f__B52A_03CD_0012_3633(); return;
}

/**
 * Decompiled function f__B52A_030C_000A_607E()
 *
 * @name f__B52A_030C_000A_607E
 * @implements B52A:030C:000A:607E ()
 *
 * Called From: B52A:0307:0020:8B0D
 */
void f__B52A_030C_000A_607E()
{
	if (!emu_flags.zf) { f__B52A_0316_0015_BAC6(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { f__B52A_0316_0015_BAC6(); return; }
	/* Unresolved jump */ emu_ip = 0x03CD; emu_last_cs = 0xB52A; emu_last_ip = 0x0313; emu_last_length = 0x000A; emu_last_crc = 0x607E; emu_call();
}

/**
 * Decompiled function f__B52A_0316_0015_BAC6()
 *
 * @name f__B52A_0316_0015_BAC6
 * @implements B52A:0316:0015:BAC6 ()
 *
 * Called From: B52A:030C:000A:607E
 * Called From: B52A:0311:000A:607E
 */
void f__B52A_0316_0015_BAC6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs);
	emu_push(0x032B); f__B52A_07A5_0010_C5C7();
	f__B52A_032B_001E_1AA7();
}

/**
 * Decompiled function f__B52A_032B_001E_1AA7()
 *
 * @name f__B52A_032B_001E_1AA7
 * @implements B52A:032B:001E:1AA7 ()
 *
 * Called From: B52A:032B:0015:BAC6
 */
void f__B52A_032B_001E_1AA7()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0349_001A_C5D4();
}

/**
 * Decompiled function f__B52A_0349_001A_C5D4()
 *
 * @name f__B52A_0349_001A_C5D4
 * @implements B52A:0349:001A:C5D4 ()
 *
 * Called From: B52A:0349:001E:1AA7
 */
void f__B52A_0349_001A_C5D4()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0363); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0363_0017_D157();
}

/**
 * Decompiled function f__B52A_0363_0017_D157()
 *
 * @name f__B52A_0363_0017_D157
 * @implements B52A:0363:0017:D157 ()
 *
 * Called From: B52A:0363:001A:C5D4
 */
void f__B52A_0363_0017_D157()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x037A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_037A_0026_FDF7();
}

/**
 * Decompiled function f__B52A_037A_0026_FDF7()
 *
 * @name f__B52A_037A_0026_FDF7
 * @implements B52A:037A:0026:FDF7 ()
 *
 * Called From: B52A:037A:0017:D157
 */
void f__B52A_037A_0026_FDF7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_03A0_001C_0968();
}

/**
 * Decompiled function f__B52A_03A0_001C_0968()
 *
 * @name f__B52A_03A0_001C_0968
 * @implements B52A:03A0:001C:0968 ()
 *
 * Called From: B52A:03A0:0026:FDF7
 */
void f__B52A_03A0_001C_0968()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_cs);
	emu_push(0x03BC); f__B52A_07CD_003B_4734();
	f__B52A_03BC_000C_FBEB();
}

/**
 * Decompiled function f__B52A_03BC_000C_FBEB()
 *
 * @name f__B52A_03BC_000C_FBEB
 * @implements B52A:03BC:000C:FBEB ()
 *
 * Called From: B52A:03BC:001C:0968
 */
void f__B52A_03BC_000C_FBEB()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B52A_03C8_0005_31AE(); return; }
	emu_orws(&emu_si, 0x8);
	f__B52A_03CB_0002_D0BA(); return;
}

/**
 * Decompiled function f__B52A_03C8_0005_31AE()
 *
 * @name f__B52A_03C8_0005_31AE
 * @implements B52A:03C8:0005:31AE ()
 *
 * Called From: B52A:03C1:000C:FBEB
 */
void f__B52A_03C8_0005_31AE()
{
	emu_orws(&emu_si, 0x28);
	f__B52A_03EE_0019_B319(); return;
}

/**
 * Decompiled function f__B52A_03CB_0002_D0BA()
 *
 * @name f__B52A_03CB_0002_D0BA
 * @implements B52A:03CB:0002:D0BA ()
 *
 * Called From: B52A:03C6:000C:FBEB
 */
void f__B52A_03CB_0002_D0BA()
{
	f__B52A_03EE_0019_B319(); return;
}

/**
 * Decompiled function f__B52A_03CD_0012_3633()
 *
 * @name f__B52A_03CD_0012_3633
 * @implements B52A:03CD:0012:3633 ()
 *
 * Called From: B52A:0309:0020:8B0D
 */
void f__B52A_03CD_0012_3633()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03DF); f__B52A_0850_0021_2409();
	f__B52A_03DF_000C_FA6B();
}

/**
 * Decompiled function f__B52A_03DF_000C_FA6B()
 *
 * @name f__B52A_03DF_000C_FA6B
 * @implements B52A:03DF:000C:FA6B ()
 *
 * Called From: B52A:03DF:0012:3633
 */
void f__B52A_03DF_000C_FA6B()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B52A_03EB_001C_7230(); return; }
	emu_orws(&emu_si, 0x4);
	f__B52A_03EE_0019_B319(); return;
}

/**
 * Decompiled function f__B52A_03EB_001C_7230()
 *
 * @name f__B52A_03EB_001C_7230
 * @implements B52A:03EB:001C:7230 ()
 *
 * Called From: B52A:03E4:000C:FA6B
 */
void f__B52A_03EB_001C_7230()
{
	emu_orws(&emu_si, 0x24);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs);
	emu_push(0x0407); f__B52A_07A5_0010_C5C7();
	f__B52A_0407_001F_C579();
}

/**
 * Decompiled function f__B52A_03EE_0019_B319()
 *
 * @name f__B52A_03EE_0019_B319
 * @implements B52A:03EE:0019:B319 ()
 *
 * Called From: B52A:03CB:0005:31AE
 * Called From: B52A:03CB:0002:D0BA
 * Called From: B52A:03E9:000C:FA6B
 */
void f__B52A_03EE_0019_B319()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs);
	emu_push(0x0407); f__B52A_07A5_0010_C5C7();
	f__B52A_0407_001F_C579();
}

/**
 * Decompiled function f__B52A_0407_001F_C579()
 *
 * @name f__B52A_0407_001F_C579
 * @implements B52A:0407:001F:C579 ()
 *
 * Called From: B52A:0407:0019:B319
 * Called From: B52A:0407:001C:7230
 */
void f__B52A_0407_001F_C579()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, 0xA);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0426); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0426_0015_1289();
}

/**
 * Decompiled function f__B52A_0426_0015_1289()
 *
 * @name f__B52A_0426_0015_1289
 * @implements B52A:0426:0015:1289 ()
 *
 * Called From: B52A:0426:001F:C579
 */
void f__B52A_0426_0015_1289()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_043B_0009_2205();
}

/**
 * Decompiled function f__B52A_043B_0009_2205()
 *
 * @name f__B52A_043B_0009_2205
 * @implements B52A:043B:0009:2205 ()
 *
 * Called From: B52A:043B:0015:1289
 */
void f__B52A_043B_0009_2205()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0444_0019_419F();
}

/**
 * Decompiled function f__B52A_0444_0019_419F()
 *
 * @name f__B52A_0444_0019_419F
 * @implements B52A:0444:0019:419F ()
 *
 * Called From: B52A:0444:0009:2205
 */
void f__B52A_0444_0019_419F()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x045D); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_045D_0013_8EF4();
}

/**
 * Decompiled function f__B52A_045D_0013_8EF4()
 *
 * @name f__B52A_045D_0013_8EF4
 * @implements B52A:045D:0013:8EF4 ()
 *
 * Called From: B52A:045D:0019:419F
 */
void f__B52A_045D_0013_8EF4()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	f__B52A_0157_0003_9CA5(); return;
}

/**
 * Decompiled function f__B52A_0470_0006_F7CE()
 *
 * @name f__B52A_0470_0006_F7CE
 * @implements B52A:0470:0006:F7CE ()
 *
 * Called From: B52A:0157:0003:9CA5
 */
void f__B52A_0470_0006_F7CE()
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
 * Decompiled function f__B52A_0476_0030_9D41()
 *
 * @name f__B52A_0476_0030_9D41
 * @implements B52A:0476:0030:9D41 ()
 *
 * Called From: 352A:0025:0005:0000
 */
void f__B52A_0476_0030_9D41()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B52A_04A8_0004_893F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x2);
	if (emu_flags.zf) { f__B52A_04A8_0004_893F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x04A6); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0xB52A; emu_last_ip = 0x04A1; emu_last_length = 0x0030; emu_last_crc = 0x9D41; emu_call();
	/* Unresolved jump */ emu_ip = 0x04A6; emu_last_cs = 0xB52A; emu_last_ip = 0x04A6; emu_last_length = 0x0030; emu_last_crc = 0x9D41; emu_call();
}

/**
 * Decompiled function f__B52A_04A8_0004_893F()
 *
 * @name f__B52A_04A8_0004_893F
 * @implements B52A:04A8:0004:893F ()
 *
 * Called From: B52A:048E:0030:9D41
 * Called From: B52A:0499:0030:9D41
 */
void f__B52A_04A8_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_04AC_0033_548A()
 *
 * @name f__B52A_04AC_0033_548A
 * @implements B52A:04AC:0033:548A ()
 *
 * Called From: 352A:002A:0005:0000
 */
void f__B52A_04AC_0033_548A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B52A_04DA_0005_5DB0(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_04DF_001D_40AA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B52A_06F0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B52A_04DA_0005_5DB0()
 *
 * @name f__B52A_04DA_0005_5DB0
 * @implements B52A:04DA:0005:5DB0 ()
 *
 * Called From: B52A:04D3:0033:548A
 */
void f__B52A_04DA_0005_5DB0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B52A_06F0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B52A_04DC_0003_5C24()
 *
 * @name f__B52A_04DC_0003_5C24
 * @implements B52A:04DC:0003:5C24 ()
 *
 * Called From: B52A:06ED:000F:F5B1
 * Called From: B52A:06ED:0006:8391
 */
void f__B52A_04DC_0003_5C24()
{
	f__B52A_06F0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B52A_04DF_001D_40AA()
 *
 * @name f__B52A_04DF_001D_40AA
 * @implements B52A:04DF:001D:40AA ()
 *
 * Called From: B52A:04D8:0033:548A
 */
void f__B52A_04DF_001D_40AA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_051F_0008_99B6(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x21);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x04FC); f__B52A_07A5_0010_C5C7();
	f__B52A_04FC_0014_B383();
}

/**
 * Decompiled function f__B52A_04FC_0014_B383()
 *
 * @name f__B52A_04FC_0014_B383
 * @implements B52A:04FC:0014:B383 ()
 *
 * Called From: B52A:04FC:001D:40AA
 */
void f__B52A_04FC_0014_B383()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0510); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0510_000F_79FB();
}

/**
 * Decompiled function f__B52A_0510_000F_79FB()
 *
 * @name f__B52A_0510_000F_79FB
 * @implements B52A:0510:000F:79FB ()
 *
 * Called From: B52A:0510:0014:B383
 */
void f__B52A_0510_000F_79FB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	f__B52A_0541_003D_54CB(); return;
}

/**
 * Decompiled function f__B52A_051F_0008_99B6()
 *
 * @name f__B52A_051F_0008_99B6
 * @implements B52A:051F:0008:99B6 ()
 *
 * Called From: B52A:04E8:001D:40AA
 */
void f__B52A_051F_0008_99B6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x252E; f__252E_001B_0018_EA2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0527_0057_BCE0();
}

/**
 * Decompiled function f__B52A_0527_0057_BCE0()
 *
 * @name f__B52A_0527_0057_BCE0
 * @implements B52A:0527:0057:BCE0 ()
 *
 * Called From: B52A:0527:0008:99B6
 */
void f__B52A_0527_0057_BCE0()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, 0x140);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B52A_05A4_0014_703F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x40);
	if (!emu_flags.zf) { f__B52A_059C_001C_4469(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0583; emu_last_cs = 0xB52A; emu_last_ip = 0x055B; emu_last_length = 0x0057; emu_last_crc = 0xBCE0; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x057E); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_057E_0005_892E();
}

/**
 * Decompiled function f__B52A_0541_003D_54CB()
 *
 * @name f__B52A_0541_003D_54CB
 * @implements B52A:0541:003D:54CB ()
 *
 * Called From: B52A:051D:000F:79FB
 */
void f__B52A_0541_003D_54CB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B52A_05A4_0014_703F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x40);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x059C; emu_last_cs = 0xB52A; emu_last_ip = 0x0555; emu_last_length = 0x003D; emu_last_crc = 0x54CB; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B52A_0583_0016_5135(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x057E); emu_cs = 0x2AE1; emu_ip = 0x029F; emu_last_cs = 0xB52A; emu_last_ip = 0x0579; emu_last_length = 0x003D; emu_last_crc = 0x54CB; emu_call();
	f__B52A_057E_0005_892E();
}

/**
 * Decompiled function f__B52A_057E_0005_892E()
 *
 * @name f__B52A_057E_0005_892E
 * @implements B52A:057E:0005:892E ()
 *
 * Called From: B52A:057E:0057:BCE0
 */
void f__B52A_057E_0005_892E()
{
	emu_addws(&emu_sp, 0xC);
	f__B52A_059C_001C_4469(); return;
}

/**
 * Decompiled function f__B52A_0583_0016_5135()
 *
 * @name f__B52A_0583_0016_5135
 * @implements B52A:0583:0016:5135 ()
 *
 * Called From: B52A:055B:003D:54CB
 */
void f__B52A_0583_0016_5135()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x2AE1; f__2AE1_00B7_0014_51EF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0599_001F_0178();
}

/**
 * Decompiled function f__B52A_0599_001F_0178()
 *
 * @name f__B52A_0599_001F_0178
 * @implements B52A:0599:001F:0178 ()
 *
 * Called From: B52A:0599:0016:5135
 */
void f__B52A_0599_001F_0178()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05B8_0034_A879(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x05BC; emu_last_cs = 0xB52A; emu_last_ip = 0x05B6; emu_last_length = 0x001F; emu_last_crc = 0x0178; emu_call();
}

/**
 * Decompiled function f__B52A_059C_001C_4469()
 *
 * @name f__B52A_059C_001C_4469
 * @implements B52A:059C:001C:4469 ()
 *
 * Called From: B52A:0555:0057:BCE0
 * Called From: B52A:0581:0005:892E
 */
void f__B52A_059C_001C_4469()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05B8_0034_A879(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x05BC; emu_last_cs = 0xB52A; emu_last_ip = 0x05B6; emu_last_length = 0x001C; emu_last_crc = 0x4469; emu_call();
}

/**
 * Decompiled function f__B52A_05A4_0014_703F()
 *
 * @name f__B52A_05A4_0014_703F
 * @implements B52A:05A4:0014:703F ()
 *
 * Called From: B52A:054A:003D:54CB
 * Called From: B52A:054A:0057:BCE0
 */
void f__B52A_05A4_0014_703F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05B8_0034_A879(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B52A_05BC_0030_A33B(); return;
}

/**
 * Decompiled function f__B52A_05B8_0034_A879()
 *
 * @name f__B52A_05B8_0034_A879
 * @implements B52A:05B8:0034:A879 ()
 *
 * Called From: B52A:05AE:001F:0178
 * Called From: B52A:05AE:0014:703F
 * Called From: B52A:05AE:001C:4469
 */
void f__B52A_05B8_0034_A879()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_05F4_0035_B5E7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05EC; emu_last_cs = 0xB52A; emu_last_ip = 0x05D8; emu_last_length = 0x0034; emu_last_crc = 0xA879; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x20);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05EC; emu_last_cs = 0xB52A; emu_last_ip = 0x05E3; emu_last_length = 0x0034; emu_last_crc = 0xA879; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x05F2; emu_last_cs = 0xB52A; emu_last_ip = 0x05EA; emu_last_length = 0x0034; emu_last_crc = 0xA879; emu_call();
}

/**
 * Decompiled function f__B52A_05BC_0030_A33B()
 *
 * @name f__B52A_05BC_0030_A33B
 * @implements B52A:05BC:0030:A33B ()
 *
 * Called From: B52A:05B6:0014:703F
 */
void f__B52A_05BC_0030_A33B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05F4; emu_last_cs = 0xB52A; emu_last_ip = 0x05C6; emu_last_length = 0x0030; emu_last_crc = 0xA33B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05EC_0008_C579(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x20);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05EC; emu_last_cs = 0xB52A; emu_last_ip = 0x05E3; emu_last_length = 0x0030; emu_last_crc = 0xA33B; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x05F2; emu_last_cs = 0xB52A; emu_last_ip = 0x05EA; emu_last_length = 0x0030; emu_last_crc = 0xA33B; emu_call();
}

/**
 * Decompiled function f__B52A_05EC_0008_C579()
 *
 * @name f__B52A_05EC_0008_C579
 * @implements B52A:05EC:0008:C579 ()
 *
 * Called From: B52A:05D8:0030:A33B
 */
void f__B52A_05EC_0008_C579()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	f__B52A_061C_000D_23E0(); return;
}

/**
 * Decompiled function f__B52A_05F4_0035_B5E7()
 *
 * @name f__B52A_05F4_0035_B5E7
 * @implements B52A:05F4:0035:B5E7 ()
 *
 * Called From: B52A:05C6:0034:A879
 */
void f__B52A_05F4_0035_B5E7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_0611_0018_A9B0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x20);
	if (emu_flags.zf) { f__B52A_061C_000D_23E0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0655; emu_last_cs = 0xB52A; emu_last_ip = 0x0620; emu_last_length = 0x0035; emu_last_crc = 0xB5E7; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	/* Unresolved jump */ emu_ip = 0x064B; emu_last_cs = 0xB52A; emu_last_ip = 0x0627; emu_last_length = 0x0035; emu_last_crc = 0xB5E7; emu_call();
}

/**
 * Decompiled function f__B52A_0611_0018_A9B0()
 *
 * @name f__B52A_0611_0018_A9B0
 * @implements B52A:0611:0018:A9B0 ()
 *
 * Called From: B52A:0604:0035:B5E7
 */
void f__B52A_0611_0018_A9B0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_0655_0007_CF25(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	/* Unresolved jump */ emu_ip = 0x064B; emu_last_cs = 0xB52A; emu_last_ip = 0x0627; emu_last_length = 0x0018; emu_last_crc = 0xA9B0; emu_call();
}

/**
 * Decompiled function f__B52A_061C_000D_23E0()
 *
 * @name f__B52A_061C_000D_23E0
 * @implements B52A:061C:000D:23E0 ()
 *
 * Called From: B52A:05F2:0008:C579
 * Called From: B52A:060F:0035:B5E7
 */
void f__B52A_061C_000D_23E0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0655; emu_last_cs = 0xB52A; emu_last_ip = 0x0620; emu_last_length = 0x000D; emu_last_crc = 0x23E0; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B52A_064B_000A_CD49(); return;
}

/**
 * Decompiled function f__B52A_0629_0015_6520()
 *
 * @name f__B52A_0629_0015_6520
 * @implements B52A:0629:0015:6520 ()
 *
 * Called From: B52A:0651:000A:CD49
 */
void f__B52A_0629_0015_6520()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x063E); f__B52A_08B3_001B_1BB9();
	f__B52A_063E_0017_01C2();
}

/**
 * Decompiled function f__B52A_063E_0017_01C2()
 *
 * @name f__B52A_063E_0017_01C2
 * @implements B52A:063E:0017:01C2 ()
 *
 * Called From: B52A:063E:0015:6520
 */
void f__B52A_063E_0017_01C2()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B52A_0648_000D_7130(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0629; emu_last_cs = 0xB52A; emu_last_ip = 0x0651; emu_last_length = 0x0017; emu_last_crc = 0x01C2; emu_call(); return; }
	f__B52A_0686_005B_E187(); return;
}

/**
 * Decompiled function f__B52A_0648_000D_7130()
 *
 * @name f__B52A_0648_000D_7130
 * @implements B52A:0648:000D:7130 ()
 *
 * Called From: B52A:0644:0017:01C2
 */
void f__B52A_0648_000D_7130()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0629; emu_last_cs = 0xB52A; emu_last_ip = 0x0651; emu_last_length = 0x000D; emu_last_crc = 0x7130; emu_call(); return; }
	f__B52A_0686_005B_E187(); return;
}

/**
 * Decompiled function f__B52A_064B_000A_CD49()
 *
 * @name f__B52A_064B_000A_CD49
 * @implements B52A:064B:000A:CD49 ()
 *
 * Called From: B52A:0627:000D:23E0
 */
void f__B52A_064B_000A_CD49()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__B52A_0629_0015_6520(); return; }
	/* Unresolved jump */ emu_ip = 0x0686; emu_last_cs = 0xB52A; emu_last_ip = 0x0653; emu_last_length = 0x000A; emu_last_crc = 0xCD49; emu_call();
}

/**
 * Decompiled function f__B52A_0655_0007_CF25()
 *
 * @name f__B52A_0655_0007_CF25
 * @implements B52A:0655:0007:CF25 ()
 *
 * Called From: B52A:0620:0018:A9B0
 */
void f__B52A_0655_0007_CF25()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B52A_067E_0063_6B7E(); return;
}

/**
 * Decompiled function f__B52A_065C_0019_DA1D()
 *
 * @name f__B52A_065C_0019_DA1D
 * @implements B52A:065C:0019:DA1D ()
 *
 * Called From: B52A:0684:0063:6B7E
 */
void f__B52A_065C_0019_DA1D()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B52A_0663_0012_DBED(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0675); emu_ip = 0x08B3; emu_last_cs = 0xB52A; emu_last_ip = 0x0672; emu_last_length = 0x0019; emu_last_crc = 0xDA1D; emu_call();
	f__B52A_0675_006C_C807();
}

/**
 * Decompiled function f__B52A_0663_0012_DBED()
 *
 * @name f__B52A_0663_0012_DBED
 * @implements B52A:0663:0012:DBED ()
 *
 * Called From: B52A:065E:0019:DA1D
 */
void f__B52A_0663_0012_DBED()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0675); f__B52A_08B3_001B_1BB9();
	f__B52A_0675_006C_C807();
}

/**
 * Decompiled function f__B52A_0675_006C_C807()
 *
 * @name f__B52A_0675_006C_C807
 * @implements B52A:0675:006C:C807 ()
 *
 * Called From: B52A:0675:0012:DBED
 */
void f__B52A_0675_006C_C807()
{
	emu_addws(&emu_sp, 0xA);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x065C; emu_last_cs = 0xB52A; emu_last_ip = 0x0684; emu_last_length = 0x006C; emu_last_crc = 0xC807; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_06EA_0006_8391(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xFF00);
	emu_movb(&emu_cx.l, 0xE);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; emu_ip = 0x000A; emu_last_cs = 0xB52A; emu_last_ip = 0x06DC; emu_last_length = 0x006C; emu_last_crc = 0xC807; emu_call();
	f__B52A_06E1_000F_F5B1();
}

/**
 * Decompiled function f__B52A_067E_0063_6B7E()
 *
 * @name f__B52A_067E_0063_6B7E
 * @implements B52A:067E:0063:6B7E ()
 *
 * Called From: B52A:065A:0007:CF25
 */
void f__B52A_067E_0063_6B7E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__B52A_065C_0019_DA1D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_06EA_0006_8391(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xFF00);
	emu_movb(&emu_cx.l, 0xE);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; f__28E6_000A_0040_D751();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_06E1_000F_F5B1();
}

/**
 * Decompiled function f__B52A_0686_005B_E187()
 *
 * @name f__B52A_0686_005B_E187
 * @implements B52A:0686:005B:E187 ()
 *
 * Called From: B52A:0653:000D:7130
 * Called From: B52A:0653:0017:01C2
 */
void f__B52A_0686_005B_E187()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_06EA_0006_8391(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xFF00);
	emu_movb(&emu_cx.l, 0xE);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; f__28E6_000A_0040_D751();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_06E1_000F_F5B1();
}

/**
 * Decompiled function f__B52A_06E1_000F_F5B1()
 *
 * @name f__B52A_06E1_000F_F5B1
 * @implements B52A:06E1:000F:F5B1 ()
 *
 * Called From: B52A:06E1:0063:6B7E
 * Called From: B52A:06E1:005B:E187
 */
void f__B52A_06E1_000F_F5B1()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_04DC_0003_5C24(); return;
}

/**
 * Decompiled function f__B52A_06EA_0006_8391()
 *
 * @name f__B52A_06EA_0006_8391
 * @implements B52A:06EA:0006:8391 ()
 *
 * Called From: B52A:0695:005B:E187
 * Called From: B52A:0695:0063:6B7E
 * Called From: B52A:0695:006C:C807
 */
void f__B52A_06EA_0006_8391()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_04DC_0003_5C24(); return;
}

/**
 * Decompiled function f__B52A_06F0_0006_F7CE()
 *
 * @name f__B52A_06F0_0006_F7CE
 * @implements B52A:06F0:0006:F7CE ()
 *
 * Called From: B52A:04DC:0003:5C24
 * Called From: B52A:04DC:0033:548A
 * Called From: B52A:04DC:0005:5DB0
 */
void f__B52A_06F0_0006_F7CE()
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
 * Decompiled function f__B52A_06F6_0012_197D()
 *
 * @name f__B52A_06F6_0012_197D
 * @implements B52A:06F6:0012:197D ()
 *
 * Called From: 352A:002F:0005:0000
 */
void f__B52A_06F6_0012_197D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B52A_0708_0015_9DC0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x071D; emu_last_cs = 0xB52A; emu_last_ip = 0x0706; emu_last_length = 0x0012; emu_last_crc = 0x197D; emu_call();
}

/**
 * Decompiled function f__B52A_0706_0002_CABA()
 *
 * @name f__B52A_0706_0002_CABA
 * @implements B52A:0706:0002:CABA ()
 *
 * Called From: B52A:071B:0015:9DC0
 */
void f__B52A_0706_0002_CABA()
{
	f__B52A_071D_0004_893F(); return;
}

/**
 * Decompiled function f__B52A_0708_0015_9DC0()
 *
 * @name f__B52A_0708_0015_9DC0
 * @implements B52A:0708:0015:9DC0 ()
 *
 * Called From: B52A:0702:0012:197D
 */
void f__B52A_0708_0015_9DC0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	f__B52A_0706_0002_CABA(); return;
}

/**
 * Decompiled function f__B52A_071D_0004_893F()
 *
 * @name f__B52A_071D_0004_893F
 * @implements B52A:071D:0004:893F ()
 *
 * Called From: B52A:0706:0002:CABA
 */
void f__B52A_071D_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_07A5_0010_C5C7()
 *
 * @name f__B52A_07A5_0010_C5C7
 * @implements B52A:07A5:0010:C5C7 ()
 *
 * Called From: B52A:0227:0021:B33E
 * Called From: B52A:0241:001A:9C3E
 * Called From: B52A:0328:0015:BAC6
 * Called From: B52A:0404:0019:B319
 * Called From: B52A:0404:001C:7230
 * Called From: B52A:04F9:001D:40AA
 * Called From: B52A:093F:0024:D733
 * Called From: B52A:0963:0024:0372
 * Called From: B52A:0A25:001E:0DD3
 */
void f__B52A_07A5_0010_C5C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cs); emu_push(0x07B5); emu_cs = 0x01F7; f__01F7_05AF_0015_0AD5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_07B5_0016_9698();
}

/**
 * Decompiled function f__B52A_07B5_0016_9698()
 *
 * @name f__B52A_07B5_0016_9698
 * @implements B52A:07B5:0016:9698 ()
 *
 * Called From: B52A:07B5:0010:C5C7
 */
void f__B52A_07B5_0016_9698()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0xF);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	f__B52A_07CB_0002_2597(); return;
}

/**
 * Decompiled function f__B52A_07CB_0002_2597()
 *
 * @name f__B52A_07CB_0002_2597
 * @implements B52A:07CB:0002:2597 ()
 *
 * Called From: B52A:07C9:0016:9698
 */
void f__B52A_07CB_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_07CD_003B_4734()
 *
 * @name f__B52A_07CD_003B_4734
 * @implements B52A:07CD:003B:4734 ()
 *
 * Called From: B52A:03B9:001C:0968
 * Called From: B52A:08FF:0010:FF24
 * Called From: B52A:091B:001C:965B
 */
void f__B52A_07CD_003B_4734()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { f__B52A_0808_003C_4B43(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B52A_0812_0032_A6D4(); return;
}

/**
 * Decompiled function f__B52A_0808_003C_4B43()
 *
 * @name f__B52A_0808_003C_4B43
 * @implements B52A:0808:003C:4B43 ()
 *
 * Called From: B52A:07E9:003B:4734
 */
void f__B52A_0808_003C_4B43()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { f__B52A_0846_0006_59A9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_cx.x, 0xA);
	emu_adcws(&emu_bx.x, 0x0);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sbbw(&emu_dx.x, emu_bx.x);
	f__B52A_084C_0004_893F(); return;
}

/**
 * Decompiled function f__B52A_0812_0032_A6D4()
 *
 * @name f__B52A_0812_0032_A6D4
 * @implements B52A:0812:0032:A6D4 ()
 *
 * Called From: B52A:0806:003B:4734
 */
void f__B52A_0812_0032_A6D4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { f__B52A_0846_0006_59A9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_cx.x, 0xA);
	emu_adcws(&emu_bx.x, 0x0);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sbbw(&emu_dx.x, emu_bx.x);
	f__B52A_084C_0004_893F(); return;
}

/**
 * Decompiled function f__B52A_0842_0002_C43A()
 *
 * @name f__B52A_0842_0002_C43A
 * @implements B52A:0842:0002:C43A ()
 *
 * Called From: B52A:084A:0006:59A9
 */
void f__B52A_0842_0002_C43A()
{
	f__B52A_084C_0004_893F(); return;
}

/**
 * Decompiled function f__B52A_0846_0006_59A9()
 *
 * @name f__B52A_0846_0006_59A9
 * @implements B52A:0846:0006:59A9 ()
 *
 * Called From: B52A:0826:0032:A6D4
 * Called From: B52A:0826:003C:4B43
 */
void f__B52A_0846_0006_59A9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B52A_0842_0002_C43A(); return;
}

/**
 * Decompiled function f__B52A_084C_0004_893F()
 *
 * @name f__B52A_084C_0004_893F
 * @implements B52A:084C:0004:893F ()
 *
 * Called From: B52A:0842:0002:C43A
 * Called From: B52A:0842:0032:A6D4
 * Called From: B52A:0842:003C:4B43
 */
void f__B52A_084C_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_0850_0021_2409()
 *
 * @name f__B52A_0850_0021_2409
 * @implements B52A:0850:0021:2409 ()
 *
 * Called From: B52A:03DC:0012:3633
 * Called From: B52A:09B8:000E:157C
 * Called From: B52A:09CD:0015:3932
 */
void f__B52A_0850_0021_2409()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0xA);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0871); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0871_0015_A573();
}

/**
 * Decompiled function f__B52A_0871_0015_A573()
 *
 * @name f__B52A_0871_0015_A573
 * @implements B52A:0871:0015:A573 ()
 *
 * Called From: B52A:0871:0021:2409
 */
void f__B52A_0871_0015_A573()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0886_0028_75E4();
}

/**
 * Decompiled function f__B52A_0886_0028_75E4()
 *
 * @name f__B52A_0886_0028_75E4
 * @implements B52A:0886:0028:75E4 ()
 *
 * Called From: B52A:0886:0015:A573
 */
void f__B52A_0886_0028_75E4()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0892; emu_last_cs = 0xB52A; emu_last_ip = 0x088B; emu_last_length = 0x0028; emu_last_crc = 0x75E4; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B52A_089C_0012_135B(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x08AE; emu_last_cs = 0xB52A; emu_last_ip = 0x08AC; emu_last_length = 0x0028; emu_last_crc = 0x75E4; emu_call();
}

/**
 * Decompiled function f__B52A_089C_0012_135B()
 *
 * @name f__B52A_089C_0012_135B
 * @implements B52A:089C:0012:135B ()
 *
 * Called From: B52A:0890:0028:75E4
 */
void f__B52A_089C_0012_135B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B52A_08AE_0005_8BCF(); return;
}

/**
 * Decompiled function f__B52A_08AE_0005_8BCF()
 *
 * @name f__B52A_08AE_0005_8BCF
 * @implements B52A:08AE:0005:8BCF ()
 *
 * Called From: B52A:08AC:0012:135B
 */
void f__B52A_08AE_0005_8BCF()
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
 * Decompiled function f__B52A_08B3_001B_1BB9()
 *
 * @name f__B52A_08B3_001B_1BB9
 * @implements B52A:08B3:001B:1BB9 ()
 *
 * Called From: B52A:063B:0015:6520
 * Called From: B52A:0672:0012:DBED
 */
void f__B52A_08B3_001B_1BB9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x100);
	if (emu_flags.zf) { f__B52A_08CE_0024_6954(); return; }
	emu_movw(&emu_ax.x, 0x300);
	/* Unresolved jump */ emu_ip = 0x08D0; emu_last_cs = 0xB52A; emu_last_ip = 0x08CC; emu_last_length = 0x001B; emu_last_crc = 0x1BB9; emu_call();
}

/**
 * Decompiled function f__B52A_08CE_0024_6954()
 *
 * @name f__B52A_08CE_0024_6954
 * @implements B52A:08CE:0024:6954 ()
 *
 * Called From: B52A:08C7:001B:1BB9
 */
void f__B52A_08CE_0024_6954()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x8);
	if (!emu_flags.zf) { f__B52A_08F2_0010_FF24(); return; }
	f__B52A_098C_000E_7F3A(); return;
}

/**
 * Decompiled function f__B52A_08F2_0010_FF24()
 *
 * @name f__B52A_08F2_0010_FF24
 * @implements B52A:08F2:0010:FF24 ()
 *
 * Called From: B52A:08ED:0024:6954
 */
void f__B52A_08F2_0010_FF24()
{
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_cs);
	emu_push(0x0902); f__B52A_07CD_003B_4734();
	f__B52A_0902_001C_965B();
}

/**
 * Decompiled function f__B52A_0902_001C_965B()
 *
 * @name f__B52A_0902_001C_965B
 * @implements B52A:0902:001C:965B ()
 *
 * Called From: B52A:0902:0010:FF24
 */
void f__B52A_0902_001C_965B()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_cs);
	emu_push(0x091E); f__B52A_07CD_003B_4734();
	f__B52A_091E_0024_D733();
}

/**
 * Decompiled function f__B52A_091E_0024_D733()
 *
 * @name f__B52A_091E_0024_D733
 * @implements B52A:091E:0024:D733 ()
 *
 * Called From: B52A:091E:001C:965B
 */
void f__B52A_091E_0024_D733()
{
	emu_addws(&emu_sp, 0x6);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_cs);
	emu_push(0x0942); f__B52A_07A5_0010_C5C7();
	f__B52A_0942_0024_0372();
}

/**
 * Decompiled function f__B52A_0942_0024_0372()
 *
 * @name f__B52A_0942_0024_0372
 * @implements B52A:0942:0024:0372 ()
 *
 * Called From: B52A:0942:0024:D733
 */
void f__B52A_0942_0024_0372()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0966); f__B52A_07A5_0010_C5C7();
	f__B52A_0966_0020_CBC2();
}

/**
 * Decompiled function f__B52A_0966_0020_CBC2()
 *
 * @name f__B52A_0966_0020_CBC2
 * @implements B52A:0966:0020:CBC2 ()
 *
 * Called From: B52A:0966:0024:0372
 */
void f__B52A_0966_0020_CBC2()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0986_0006_9731();
}

/**
 * Decompiled function f__B52A_0986_0006_9731()
 *
 * @name f__B52A_0986_0006_9731
 * @implements B52A:0986:0006:9731 ()
 *
 * Called From: B52A:0986:0020:CBC2
 */
void f__B52A_0986_0006_9731()
{
	emu_addws(&emu_sp, 0xC);
	f__B52A_0A59_001D_12BE(); return;
}

/**
 * Decompiled function f__B52A_098C_000E_7F3A()
 *
 * @name f__B52A_098C_000E_7F3A
 * @implements B52A:098C:000E:7F3A ()
 *
 * Called From: B52A:08EF:0024:6954
 */
void f__B52A_098C_000E_7F3A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x4);
	if (!emu_flags.zf) { f__B52A_099A_0013_6D27(); return; }
	/* Unresolved jump */ emu_ip = 0x0A59; emu_last_cs = 0xB52A; emu_last_ip = 0x0997; emu_last_length = 0x000E; emu_last_crc = 0x7F3A; emu_call();
}

/**
 * Decompiled function f__B52A_099A_0013_6D27()
 *
 * @name f__B52A_099A_0013_6D27
 * @implements B52A:099A:0013:6D27 ()
 *
 * Called From: B52A:0995:000E:7F3A
 */
void f__B52A_099A_0013_6D27()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09AD); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_09AD_000E_157C();
}

/**
 * Decompiled function f__B52A_09AD_000E_157C()
 *
 * @name f__B52A_09AD_000E_157C
 * @implements B52A:09AD:000E:157C ()
 *
 * Called From: B52A:09AD:0013:6D27
 */
void f__B52A_09AD_000E_157C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x09BB); f__B52A_0850_0021_2409();
	f__B52A_09BB_0015_3932();
}

/**
 * Decompiled function f__B52A_09BB_0015_3932()
 *
 * @name f__B52A_09BB_0015_3932
 * @implements B52A:09BB:0015:3932 ()
 *
 * Called From: B52A:09BB:000E:157C
 */
void f__B52A_09BB_0015_3932()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x09D0); f__B52A_0850_0021_2409();
	f__B52A_09D0_0025_5ED1();
}

/**
 * Decompiled function f__B52A_09D0_0025_5ED1()
 *
 * @name f__B52A_09D0_0025_5ED1
 * @implements B52A:09D0:0025:5ED1 ()
 *
 * Called From: B52A:09D0:0015:3932
 */
void f__B52A_09D0_0025_5ED1()
{
	emu_addws(&emu_sp, 0x6);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09EF; emu_last_cs = 0xB52A; emu_last_ip = 0x09E5; emu_last_length = 0x0025; emu_last_crc = 0x5ED1; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { f__B52A_09FB_000F_8063(); return; }
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x09F5); emu_cs = 0x1FB5; emu_ip = 0x09C7; emu_last_cs = 0xB52A; emu_last_ip = 0x09F0; emu_last_length = 0x0025; emu_last_crc = 0x5ED1; emu_call();
	/* Unresolved jump */ emu_ip = 0x09F5; emu_last_cs = 0xB52A; emu_last_ip = 0x09F5; emu_last_length = 0x0025; emu_last_crc = 0x5ED1; emu_call();
}

/**
 * Decompiled function f__B52A_09F8_0003_5D13()
 *
 * @name f__B52A_09F8_0003_5D13
 * @implements B52A:09F8:0003:5D13 ()
 *
 * Called From: B52A:0AC5:0006:82A6
 * Called From: B52A:0AC5:0009:C6FF
 */
void f__B52A_09F8_0003_5D13()
{
	f__B52A_0AC8_0006_F7CE(); return;
}

/**
 * Decompiled function f__B52A_09FB_000F_8063()
 *
 * @name f__B52A_09FB_000F_8063
 * @implements B52A:09FB:000F:8063 ()
 *
 * Called From: B52A:09ED:0025:5ED1
 */
void f__B52A_09FB_000F_8063()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A0A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A0A_001E_0DD3();
}

/**
 * Decompiled function f__B52A_0A0A_001E_0DD3()
 *
 * @name f__B52A_0A0A_001E_0DD3
 * @implements B52A:0A0A:001E:0DD3 ()
 *
 * Called From: B52A:0A0A:000F:8063
 */
void f__B52A_0A0A_001E_0DD3()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0A28); f__B52A_07A5_0010_C5C7();
	f__B52A_0A28_001B_0B21();
}

/**
 * Decompiled function f__B52A_0A28_001B_0B21()
 *
 * @name f__B52A_0A28_001B_0B21
 * @implements B52A:0A28:001B:0B21 ()
 *
 * Called From: B52A:0A28:001E:0DD3
 */
void f__B52A_0A28_001B_0B21()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A43_000F_FF8B();
}

/**
 * Decompiled function f__B52A_0A43_000F_FF8B()
 *
 * @name f__B52A_0A43_000F_FF8B
 * @implements B52A:0A43:000F:FF8B ()
 *
 * Called From: B52A:0A43:001B:0B21
 */
void f__B52A_0A43_000F_FF8B()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A50; emu_last_cs = 0xB52A; emu_last_ip = 0x0A49; emu_last_length = 0x000F; emu_last_crc = 0xFF8B; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B52A_0A52_0006_6250(); return; }
	/* Unresolved jump */ emu_ip = 0x09EF; emu_last_cs = 0xB52A; emu_last_ip = 0x0A50; emu_last_length = 0x000F; emu_last_crc = 0xFF8B; emu_call();
}

/**
 * Decompiled function f__B52A_0A52_0006_6250()
 *
 * @name f__B52A_0A52_0006_6250
 * @implements B52A:0A52:0006:6250 ()
 *
 * Called From: B52A:0A4E:000F:FF8B
 */
void f__B52A_0A52_0006_6250()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A58_001E_13DA();
}

/**
 * Decompiled function f__B52A_0A58_001E_13DA()
 *
 * @name f__B52A_0A58_001E_13DA
 * @implements B52A:0A58:001E:13DA ()
 *
 * Called From: B52A:0A58:0006:6250
 */
void f__B52A_0A58_001E_13DA()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A76_0024_8346();
}

/**
 * Decompiled function f__B52A_0A59_001D_12BE()
 *
 * @name f__B52A_0A59_001D_12BE
 * @implements B52A:0A59:001D:12BE ()
 *
 * Called From: B52A:0989:0006:9731
 */
void f__B52A_0A59_001D_12BE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A76_0024_8346();
}

/**
 * Decompiled function f__B52A_0A76_0024_8346()
 *
 * @name f__B52A_0A76_0024_8346
 * @implements B52A:0A76:0024:8346 ()
 *
 * Called From: B52A:0A76:001D:12BE
 * Called From: B52A:0A76:001E:13DA
 */
void f__B52A_0A76_0024_8346()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_0A9F_0020_7369(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x2AE1; f__2AE1_00B7_0014_51EF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A9A_0005_94AE();
}

/**
 * Decompiled function f__B52A_0A9A_0005_94AE()
 *
 * @name f__B52A_0A9A_0005_94AE
 * @implements B52A:0A9A:0005:94AE ()
 *
 * Called From: B52A:0A9A:0024:8346
 */
void f__B52A_0A9A_0005_94AE()
{
	emu_addws(&emu_sp, 0x8);
	f__B52A_0AC2_0006_82A6(); return;
}

/**
 * Decompiled function f__B52A_0A9F_0020_7369()
 *
 * @name f__B52A_0A9F_0020_7369
 * @implements B52A:0A9F:0020:7369 ()
 *
 * Called From: B52A:0A82:0024:8346
 */
void f__B52A_0A9F_0020_7369()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0ABF); emu_cs = 0x2AE1; f__2AE1_029F_0014_50E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0ABF_0009_C6FF();
}

/**
 * Decompiled function f__B52A_0ABF_0009_C6FF()
 *
 * @name f__B52A_0ABF_0009_C6FF
 * @implements B52A:0ABF:0009:C6FF ()
 *
 * Called From: B52A:0ABF:0020:7369
 */
void f__B52A_0ABF_0009_C6FF()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_09F8_0003_5D13(); return;
}

/**
 * Decompiled function f__B52A_0AC2_0006_82A6()
 *
 * @name f__B52A_0AC2_0006_82A6
 * @implements B52A:0AC2:0006:82A6 ()
 *
 * Called From: B52A:0A9D:0005:94AE
 */
void f__B52A_0AC2_0006_82A6()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_09F8_0003_5D13(); return;
}

/**
 * Decompiled function f__B52A_0AC8_0006_F7CE()
 *
 * @name f__B52A_0AC8_0006_F7CE
 * @implements B52A:0AC8:0006:F7CE ()
 *
 * Called From: B52A:09F8:0003:5D13
 */
void f__B52A_0AC8_0006_F7CE()
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
