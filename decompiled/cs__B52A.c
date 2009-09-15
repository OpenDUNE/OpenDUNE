/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B52A_0000_0019_C6A1()
 *
 * @name f__B52A_0000_0019_C6A1
 * @implements B52A:0000:0019:C6A1 ()
 *
 * Called From: 352A:0020:0005:1C8A
 * Called From: 352A:0020:0005:1CC0
 * Called From: 352A:0020:0005:1CD6
 * Called From: 352A:0020:0005:1D18
 * Called From: 352A:0020:0005:1D74
 * Called From: 352A:0020:0005:1D7C
 * Called From: 352A:0020:0005:1D8E
 * Called From: 352A:0020:0005:1D9A
 * Called From: 352A:0020:0005:1DC2
 * Called From: 352A:0020:0005:1DC8
 * Called From: 352A:0020:0005:1E4A
 * Called From: 352A:0020:0005:1E8C
 * Called From: 352A:0020:0005:1EFA
 * Called From: 352A:0020:0005:1F4E
 * Called From: 352A:0020:0005:1F94
 * Called From: 352A:0020:0005:1FC6
 * Called From: 352A:0020:0005:1FFC
 * Called From: 352A:0020:0005:1F78
 */
void f__B52A_0000_0019_C6A1()
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
	emu_push(emu_cs); emu_push(0x0019); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0019_0017_C838();
}

/**
 * Decompiled function f__B52A_0019_0017_C838()
 *
 * @name f__B52A_0019_0017_C838
 * @implements B52A:0019:0017:C838 ()
 *
 * Called From: B52A:0019:0019:C6A1
 */
void f__B52A_0019_0017_C838()
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
	emu_push(emu_cs); emu_push(0x0030); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0030_0030_9CFF();
}

/**
 * Decompiled function f__B52A_0030_0030_9CFF()
 *
 * @name f__B52A_0030_0030_9CFF
 * @implements B52A:0030:0030:9CFF ()
 *
 * Called From: B52A:0030:0017:C838
 */
void f__B52A_0030_0030_9CFF()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), 0x1);
	if (emu_flags.zf) { f__B52A_007B_0015_3E4D(); return; }
	emu_orw(&emu_si, 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x300);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_flags.zf) { emu_ip = 0x0079; emu_last_cs = 0xB52A; emu_last_ip = 0x0049; emu_last_length = 0x0030; emu_last_crc = 0x9CFF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x44));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x1FB5; emu_ip = 0x1267; emu_last_cs = 0xB52A; emu_last_ip = 0x005B; emu_last_length = 0x0030; emu_last_crc = 0x9CFF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B52A_007B_0015_3E4D()
 *
 * @name f__B52A_007B_0015_3E4D
 * @implements B52A:007B:0015:3E4D ()
 *
 * Called From: B52A:0038:0030:9CFF
 */
void f__B52A_007B_0015_3E4D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0090_002B_A69A();
}

/**
 * Decompiled function f__B52A_0090_002B_A69A()
 *
 * @name f__B52A_0090_002B_A69A
 * @implements B52A:0090:002B:A69A ()
 *
 * Called From: B52A:0090:0015:3E4D
 */
void f__B52A_0090_002B_A69A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x38));
	if (emu_flags.zf) { f__B52A_00BB_001E_8979(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__B52A_00C3_0016_5D42(); return;
}

/**
 * Decompiled function f__B52A_00BB_001E_8979()
 *
 * @name f__B52A_00BB_001E_8979
 * @implements B52A:00BB:001E:8979 ()
 *
 * Called From: B52A:009F:002B:A69A
 */
void f__B52A_00BB_001E_8979()
{
	emu_orws(&emu_si, 0x40);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_00D9_0019_E074();
}

/**
 * Decompiled function f__B52A_00C3_0016_5D42()
 *
 * @name f__B52A_00C3_0016_5D42
 * @implements B52A:00C3:0016:5D42 ()
 *
 * Called From: B52A:00B9:002B:A69A
 */
void f__B52A_00C3_0016_5D42()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_00D9_0019_E074();
}

/**
 * Decompiled function f__B52A_00D9_0019_E074()
 *
 * @name f__B52A_00D9_0019_E074
 * @implements B52A:00D9:0019:E074 ()
 *
 * Called From: B52A:00D9:0016:5D42
 * Called From: B52A:00D9:001E:8979
 */
void f__B52A_00D9_0019_E074()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { f__B52A_00FA_0060_48B3(); return; }
	emu_orws(&emu_si, 0x10);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x42));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_cs); emu_push(0x00F2); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_00F2_0008_8D48();
}

/**
 * Decompiled function f__B52A_00F2_0008_8D48()
 *
 * @name f__B52A_00F2_0008_8D48
 * @implements B52A:00F2:0008:8D48 ()
 *
 * Called From: B52A:00F2:0019:E074
 */
void f__B52A_00F2_0008_8D48()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	f__B52A_0104_0056_846F(); return;
}

/**
 * Decompiled function f__B52A_00FA_0060_48B3()
 *
 * @name f__B52A_00FA_0060_48B3
 * @implements B52A:00FA:0060:48B3 ()
 *
 * Called From: B52A:00DE:0019:E074
 */
void f__B52A_00FA_0060_48B3()
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0137; emu_last_length = 0x0060; emu_last_crc = 0x48B3; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_0141_0019_88E2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x013F; emu_last_length = 0x0060; emu_last_crc = 0x48B3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x014A; emu_last_length = 0x0060; emu_last_crc = 0x48B3; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0060; emu_last_crc = 0x48B3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) { f__B52A_015A_000B_746D(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0470; emu_last_cs = 0xB52A; emu_last_ip = 0x0157; emu_last_length = 0x0060; emu_last_crc = 0x48B3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0104_0056_846F()
 *
 * @name f__B52A_0104_0056_846F
 * @implements B52A:0104:0056:846F ()
 *
 * Called From: B52A:00F8:0008:8D48
 */
void f__B52A_0104_0056_846F()
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0137; emu_last_length = 0x0056; emu_last_crc = 0x846F; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_0141_0019_88E2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x013F; emu_last_length = 0x0056; emu_last_crc = 0x846F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x014A; emu_last_length = 0x0056; emu_last_crc = 0x846F; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0056; emu_last_crc = 0x846F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0151; emu_last_length = 0x0056; emu_last_crc = 0x846F; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0470; emu_last_cs = 0xB52A; emu_last_ip = 0x0157; emu_last_length = 0x0056; emu_last_crc = 0x846F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0141_0019_88E2()
 *
 * @name f__B52A_0141_0019_88E2
 * @implements B52A:0141:0019:88E2 ()
 *
 * Called From: B52A:0139:0056:846F
 * Called From: B52A:0139:0060:48B3
 */
void f__B52A_0141_0019_88E2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_015A_000B_746D(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0153; emu_last_cs = 0xB52A; emu_last_ip = 0x014C; emu_last_length = 0x0019; emu_last_crc = 0x88E2; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (!emu_flags.cf) { emu_ip = 0x015A; emu_last_cs = 0xB52A; emu_last_ip = 0x0151; emu_last_length = 0x0019; emu_last_crc = 0x88E2; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0470; emu_last_cs = 0xB52A; emu_last_ip = 0x0157; emu_last_length = 0x0019; emu_last_crc = 0x88E2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0157_0003_0716()
 *
 * @name f__B52A_0157_0003_0716
 * @implements B52A:0157:0003:0716 ()
 *
 * Called From: B52A:046D:0013:7A41
 */
void f__B52A_0157_0003_0716()
{
	f__B52A_0470_0006_137A(); return;
}

/**
 * Decompiled function f__B52A_015A_000B_746D()
 *
 * @name f__B52A_015A_000B_746D
 * @implements B52A:015A:000B:746D ()
 *
 * Called From: B52A:014A:0019:88E2
 * Called From: B52A:0151:0060:48B3
 */
void f__B52A_015A_000B_746D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0165; emu_last_cs = 0xB52A; emu_last_ip = 0x0160; emu_last_length = 0x000B; emu_last_crc = 0x746D; emu_call(); return; } // Jump does not resolve
	f__B52A_0209_0021_749F(); return;
}

/**
 * Decompiled function f__B52A_0209_0021_749F()
 *
 * @name f__B52A_0209_0021_749F
 * @implements B52A:0209:0021:749F ()
 *
 * Called From: B52A:0162:000B:746D
 */
void f__B52A_0209_0021_749F()
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
	emu_push(0x022A); f__B52A_07A5_0010_09FB();
	f__B52A_022A_001A_AEB8();
}

/**
 * Decompiled function f__B52A_022A_001A_AEB8()
 *
 * @name f__B52A_022A_001A_AEB8
 * @implements B52A:022A:001A:AEB8 ()
 *
 * Called From: B52A:022A:0021:749F
 */
void f__B52A_022A_001A_AEB8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs);
	emu_push(0x0244); f__B52A_07A5_0010_09FB();
	f__B52A_0244_0020_4A80();
}

/**
 * Decompiled function f__B52A_0244_0020_4A80()
 *
 * @name f__B52A_0244_0020_4A80
 * @implements B52A:0244:0020:4A80 ()
 *
 * Called From: B52A:0244:001A:AEB8
 */
void f__B52A_0244_0020_4A80()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { f__B52A_0267_0073_A4B3(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0264); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0264_0076_9C73();
}

/**
 * Decompiled function f__B52A_0264_0076_9C73()
 *
 * @name f__B52A_0264_0076_9C73
 * @implements B52A:0264:0076:9C73 ()
 *
 * Called From: B52A:0264:0020:4A80
 */
void f__B52A_0264_0076_9C73()
{
	emu_addws(&emu_sp, 0x8);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x8000);
	if (emu_flags.zf) { f__B52A_0277_0063_662B(); return; }
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
	emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; emu_ip = 0x3BD0; emu_last_cs = 0xB52A; emu_last_ip = 0x02D5; emu_last_length = 0x0076; emu_last_crc = 0x9C73; emu_call(); // Jump does not resolve
	f__B52A_02DA_0012_A851();
}

/**
 * Decompiled function f__B52A_0267_0073_A4B3()
 *
 * @name f__B52A_0267_0073_A4B3
 * @implements B52A:0267:0073:A4B3 ()
 *
 * Called From: B52A:0251:0020:4A80
 */
void f__B52A_0267_0073_A4B3()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x44), 0x8000);
	if (emu_flags.zf) { f__B52A_0277_0063_662B(); return; }
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
	emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; emu_ip = 0x3BD0; emu_last_cs = 0xB52A; emu_last_ip = 0x02D5; emu_last_length = 0x0073; emu_last_crc = 0xA4B3; emu_call(); // Jump does not resolve
	f__B52A_02DA_0012_A851();
}

/**
 * Decompiled function f__B52A_0277_0063_662B()
 *
 * @name f__B52A_0277_0063_662B
 * @implements B52A:0277:0063:662B ()
 *
 * Called From: B52A:026C:0073:A4B3
 * Called From: B52A:026C:0076:9C73
 */
void f__B52A_0277_0063_662B()
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
	emu_push(emu_cs); emu_push(0x02DA); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_02DA_0012_A851();
}

/**
 * Decompiled function f__B52A_02DA_0012_A851()
 *
 * @name f__B52A_02DA_0012_A851
 * @implements B52A:02DA:0012:A851 ()
 *
 * Called From: B52A:02DA:0063:662B
 */
void f__B52A_02DA_0012_A851()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02EC); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_02EC_0020_7A3A();
}

/**
 * Decompiled function f__B52A_02EC_0020_7A3A()
 *
 * @name f__B52A_02EC_0020_7A3A
 * @implements B52A:02EC:0020:7A3A ()
 *
 * Called From: B52A:02EC:0012:A851
 */
void f__B52A_02EC_0020_7A3A()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_030C_000A_E545(); return; }
	f__B52A_03CD_0012_8A2A(); return;
}

/**
 * Decompiled function f__B52A_030C_000A_E545()
 *
 * @name f__B52A_030C_000A_E545
 * @implements B52A:030C:000A:E545 ()
 *
 * Called From: B52A:0307:0020:7A3A
 */
void f__B52A_030C_000A_E545()
{
	if (!emu_flags.zf) { f__B52A_0316_0015_C409(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { f__B52A_0316_0015_C409(); return; }
	emu_ip = 0x03CD; emu_last_cs = 0xB52A; emu_last_ip = 0x0313; emu_last_length = 0x000A; emu_last_crc = 0xE545; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0316_0015_C409()
 *
 * @name f__B52A_0316_0015_C409
 * @implements B52A:0316:0015:C409 ()
 *
 * Called From: B52A:030C:000A:E545
 * Called From: B52A:0311:000A:E545
 */
void f__B52A_0316_0015_C409()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs);
	emu_push(0x032B); f__B52A_07A5_0010_09FB();
	f__B52A_032B_001E_AB94();
}

/**
 * Decompiled function f__B52A_032B_001E_AB94()
 *
 * @name f__B52A_032B_001E_AB94
 * @implements B52A:032B:001E:AB94 ()
 *
 * Called From: B52A:032B:0015:C409
 */
void f__B52A_032B_001E_AB94()
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
	emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0349_001A_2D66();
}

/**
 * Decompiled function f__B52A_0349_001A_2D66()
 *
 * @name f__B52A_0349_001A_2D66
 * @implements B52A:0349:001A:2D66 ()
 *
 * Called From: B52A:0349:001E:AB94
 */
void f__B52A_0349_001A_2D66()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0363); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0363_0017_1CF6();
}

/**
 * Decompiled function f__B52A_0363_0017_1CF6()
 *
 * @name f__B52A_0363_0017_1CF6
 * @implements B52A:0363:0017:1CF6 ()
 *
 * Called From: B52A:0363:001A:2D66
 */
void f__B52A_0363_0017_1CF6()
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
	emu_push(emu_cs); emu_push(0x037A); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_037A_0026_DEBD();
}

/**
 * Decompiled function f__B52A_037A_0026_DEBD()
 *
 * @name f__B52A_037A_0026_DEBD
 * @implements B52A:037A:0026:DEBD ()
 *
 * Called From: B52A:037A:0017:1CF6
 */
void f__B52A_037A_0026_DEBD()
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
	emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_03A0_001C_4C14();
}

/**
 * Decompiled function f__B52A_03A0_001C_4C14()
 *
 * @name f__B52A_03A0_001C_4C14
 * @implements B52A:03A0:001C:4C14 ()
 *
 * Called From: B52A:03A0:0026:DEBD
 */
void f__B52A_03A0_001C_4C14()
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
	emu_push(0x03BC); f__B52A_07CD_003B_BEC7();
	f__B52A_03BC_000C_F824();
}

/**
 * Decompiled function f__B52A_03BC_000C_F824()
 *
 * @name f__B52A_03BC_000C_F824
 * @implements B52A:03BC:000C:F824 ()
 *
 * Called From: B52A:03BC:001C:4C14
 */
void f__B52A_03BC_000C_F824()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B52A_03C8_0005_1E2E(); return; }
	emu_orws(&emu_si, 0x8);
	f__B52A_03CB_0002_03EE(); return;
}

/**
 * Decompiled function f__B52A_03C8_0005_1E2E()
 *
 * @name f__B52A_03C8_0005_1E2E
 * @implements B52A:03C8:0005:1E2E ()
 *
 * Called From: B52A:03C1:000C:F824
 */
void f__B52A_03C8_0005_1E2E()
{
	emu_orws(&emu_si, 0x28);
	f__B52A_03EE_0019_9E70(); return;
}

/**
 * Decompiled function f__B52A_03CB_0002_03EE()
 *
 * @name f__B52A_03CB_0002_03EE
 * @implements B52A:03CB:0002:03EE ()
 *
 * Called From: B52A:03C6:000C:F824
 */
void f__B52A_03CB_0002_03EE()
{
	f__B52A_03EE_0019_9E70(); return;
}

/**
 * Decompiled function f__B52A_03CD_0012_8A2A()
 *
 * @name f__B52A_03CD_0012_8A2A
 * @implements B52A:03CD:0012:8A2A ()
 *
 * Called From: B52A:0309:0020:7A3A
 */
void f__B52A_03CD_0012_8A2A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03DF); f__B52A_0850_0021_C8B0();
	f__B52A_03DF_000C_F844();
}

/**
 * Decompiled function f__B52A_03DF_000C_F844()
 *
 * @name f__B52A_03DF_000C_F844
 * @implements B52A:03DF:000C:F844 ()
 *
 * Called From: B52A:03DF:0012:8A2A
 */
void f__B52A_03DF_000C_F844()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B52A_03EB_001C_4E7E(); return; }
	emu_orws(&emu_si, 0x4);
	f__B52A_03EE_0019_9E70(); return;
}

/**
 * Decompiled function f__B52A_03EB_001C_4E7E()
 *
 * @name f__B52A_03EB_001C_4E7E
 * @implements B52A:03EB:001C:4E7E ()
 *
 * Called From: B52A:03E4:000C:F844
 */
void f__B52A_03EB_001C_4E7E()
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
	emu_push(0x0407); f__B52A_07A5_0010_09FB();
	f__B52A_0407_001F_7C95();
}

/**
 * Decompiled function f__B52A_03EE_0019_9E70()
 *
 * @name f__B52A_03EE_0019_9E70
 * @implements B52A:03EE:0019:9E70 ()
 *
 * Called From: B52A:03CB:0002:03EE
 * Called From: B52A:03CB:0005:1E2E
 * Called From: B52A:03E9:000C:F844
 */
void f__B52A_03EE_0019_9E70()
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
	emu_push(0x0407); f__B52A_07A5_0010_09FB();
	f__B52A_0407_001F_7C95();
}

/**
 * Decompiled function f__B52A_0407_001F_7C95()
 *
 * @name f__B52A_0407_001F_7C95
 * @implements B52A:0407:001F:7C95 ()
 *
 * Called From: B52A:0407:0019:9E70
 * Called From: B52A:0407:001C:4E7E
 */
void f__B52A_0407_001F_7C95()
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
	emu_push(emu_cs); emu_push(0x0426); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0426_0015_94F5();
}

/**
 * Decompiled function f__B52A_0426_0015_94F5()
 *
 * @name f__B52A_0426_0015_94F5
 * @implements B52A:0426:0015:94F5 ()
 *
 * Called From: B52A:0426:001F:7C95
 */
void f__B52A_0426_0015_94F5()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_043B_0009_CF53();
}

/**
 * Decompiled function f__B52A_043B_0009_CF53()
 *
 * @name f__B52A_043B_0009_CF53
 * @implements B52A:043B:0009:CF53 ()
 *
 * Called From: B52A:043B:0015:94F5
 */
void f__B52A_043B_0009_CF53()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0444_0019_B53B();
}

/**
 * Decompiled function f__B52A_0444_0019_B53B()
 *
 * @name f__B52A_0444_0019_B53B
 * @implements B52A:0444:0019:B53B ()
 *
 * Called From: B52A:0444:0009:CF53
 */
void f__B52A_0444_0019_B53B()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x045D); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_045D_0013_7A41();
}

/**
 * Decompiled function f__B52A_045D_0013_7A41()
 *
 * @name f__B52A_045D_0013_7A41
 * @implements B52A:045D:0013:7A41 ()
 *
 * Called From: B52A:045D:0019:B53B
 */
void f__B52A_045D_0013_7A41()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	f__B52A_0157_0003_0716(); return;
}

/**
 * Decompiled function f__B52A_0470_0006_137A()
 *
 * @name f__B52A_0470_0006_137A
 * @implements B52A:0470:0006:137A ()
 *
 * Called From: B52A:0157:0003:0716
 */
void f__B52A_0470_0006_137A()
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
 * Decompiled function f__B52A_0476_0030_36E0()
 *
 * @name f__B52A_0476_0030_36E0
 * @implements B52A:0476:0030:36E0 ()
 *
 * Called From: 352A:0025:0005:180E
 * Called From: 352A:0025:0005:18D4
 * Called From: 352A:0025:0005:190A
 * Called From: 352A:0025:0005:19B0
 * Called From: 352A:0025:0005:19BA
 * Called From: 352A:0025:0005:19CC
 * Called From: 352A:0025:0005:19FE
 * Called From: 352A:0025:0005:1A34
 * Called From: 352A:0025:0005:1A3C
 * Called From: 352A:0025:0005:1A58
 * Called From: 352A:0025:0005:1A70
 * Called From: 352A:0025:0005:1A82
 * Called From: 352A:0025:0005:1A88
 * Called From: 352A:0025:0005:1ACE
 * Called From: 352A:0025:0005:1ADA
 * Called From: 352A:0025:0005:1B80
 * Called From: 352A:0025:0005:1BCA
 */
void f__B52A_0476_0030_36E0()
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
	if (emu_flags.zf) { f__B52A_04A8_0004_0F7A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x2);
	if (emu_flags.zf) { f__B52A_04A8_0004_0F7A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04A6); emu_cs = 0x23E1; emu_ip = 0x0668; emu_last_cs = 0xB52A; emu_last_ip = 0x04A1; emu_last_length = 0x0030; emu_last_crc = 0x36E0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B52A_04A8_0004_0F7A()
 *
 * @name f__B52A_04A8_0004_0F7A
 * @implements B52A:04A8:0004:0F7A ()
 *
 * Called From: B52A:048E:0030:36E0
 * Called From: B52A:0499:0030:36E0
 */
void f__B52A_04A8_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_04AC_0033_B40C()
 *
 * @name f__B52A_04AC_0033_B40C
 * @implements B52A:04AC:0033:B40C ()
 *
 * Called From: 352A:002A:0005:1410
 * Called From: 352A:002A:0005:141A
 * Called From: 352A:002A:0005:145E
 * Called From: 352A:002A:0005:146C
 * Called From: 352A:002A:0005:14AA
 * Called From: 352A:002A:0005:1526
 * Called From: 352A:002A:0005:1574
 * Called From: 352A:002A:0005:15AE
 * Called From: 352A:002A:0005:1620
 * Called From: 352A:002A:0005:1636
 * Called From: 352A:002A:0005:166A
 * Called From: 352A:002A:0005:1722
 * Called From: 352A:002A:0005:1728
 * Called From: 352A:002A:0005:176E
 * Called From: 352A:002A:0005:177A
 * Called From: 352A:002A:0005:1794
 * Called From: 352A:002A:0005:179C
 * Called From: 352A:002A:0005:17D0
 * Called From: 352A:002A:0005:17F8
 */
void f__B52A_04AC_0033_B40C()
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
	if (emu_flags.zf) { f__B52A_04DA_0005_0D68(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_04DF_001D_2D9D(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B52A_06F0_0006_137A(); return;
}

/**
 * Decompiled function f__B52A_04DA_0005_0D68()
 *
 * @name f__B52A_04DA_0005_0D68
 * @implements B52A:04DA:0005:0D68 ()
 *
 * Called From: B52A:04D3:0033:B40C
 */
void f__B52A_04DA_0005_0D68()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B52A_06F0_0006_137A(); return;
}

/**
 * Decompiled function f__B52A_04DC_0003_0708()
 *
 * @name f__B52A_04DC_0003_0708
 * @implements B52A:04DC:0003:0708 ()
 *
 * Called From: B52A:06ED:0006:2B22
 * Called From: B52A:06ED:000F:2A58
 */
void f__B52A_04DC_0003_0708()
{
	f__B52A_06F0_0006_137A(); return;
}

/**
 * Decompiled function f__B52A_04DF_001D_2D9D()
 *
 * @name f__B52A_04DF_001D_2D9D
 * @implements B52A:04DF:001D:2D9D ()
 *
 * Called From: B52A:04D8:0033:B40C
 */
void f__B52A_04DF_001D_2D9D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_051F_0008_D202(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x21);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x04FC); f__B52A_07A5_0010_09FB();
	f__B52A_04FC_0014_378F();
}

/**
 * Decompiled function f__B52A_04FC_0014_378F()
 *
 * @name f__B52A_04FC_0014_378F
 * @implements B52A:04FC:0014:378F ()
 *
 * Called From: B52A:04FC:001D:2D9D
 */
void f__B52A_04FC_0014_378F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0510); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0510_000F_CF03();
}

/**
 * Decompiled function f__B52A_0510_000F_CF03()
 *
 * @name f__B52A_0510_000F_CF03
 * @implements B52A:0510:000F:CF03 ()
 *
 * Called From: B52A:0510:0014:378F
 */
void f__B52A_0510_000F_CF03()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	f__B52A_0541_003D_18C3(); return;
}

/**
 * Decompiled function f__B52A_051F_0008_D202()
 *
 * @name f__B52A_051F_0008_D202
 * @implements B52A:051F:0008:D202 ()
 *
 * Called From: B52A:04E8:001D:2D9D
 */
void f__B52A_051F_0008_D202()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x252E; f__252E_001B_0018_30C5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0527_0057_755B();
}

/**
 * Decompiled function f__B52A_0527_0057_755B()
 *
 * @name f__B52A_0527_0057_755B
 * @implements B52A:0527:0057:755B ()
 *
 * Called From: B52A:0527:0008:D202
 */
void f__B52A_0527_0057_755B()
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
	if (!emu_flags.zf) { f__B52A_05A4_0014_1197(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x40);
	if (!emu_flags.zf) { f__B52A_059C_001C_D91A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0583; emu_last_cs = 0xB52A; emu_last_ip = 0x055B; emu_last_length = 0x0057; emu_last_crc = 0x755B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x057E); emu_cs = 0x2AE1; f__2AE1_029F_0014_43E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_057E_0005_1FDE();
}

/**
 * Decompiled function f__B52A_0541_003D_18C3()
 *
 * @name f__B52A_0541_003D_18C3
 * @implements B52A:0541:003D:18C3 ()
 *
 * Called From: B52A:051D:000F:CF03
 */
void f__B52A_0541_003D_18C3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B52A_05A4_0014_1197(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x059C; emu_last_cs = 0xB52A; emu_last_ip = 0x0555; emu_last_length = 0x003D; emu_last_crc = 0x18C3; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__B52A_0583_0016_AA6B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x057E); emu_cs = 0x2AE1; emu_ip = 0x081D; emu_last_cs = 0xB52A; emu_last_ip = 0x0579; emu_last_length = 0x003D; emu_last_crc = 0x18C3; emu_call(); // Jump does not resolve
	f__B52A_057E_0005_1FDE();
}

/**
 * Decompiled function f__B52A_057E_0005_1FDE()
 *
 * @name f__B52A_057E_0005_1FDE
 * @implements B52A:057E:0005:1FDE ()
 *
 * Called From: B52A:057E:0057:755B
 */
void f__B52A_057E_0005_1FDE()
{
	emu_addws(&emu_sp, 0xC);
	f__B52A_059C_001C_D91A(); return;
}

/**
 * Decompiled function f__B52A_0583_0016_AA6B()
 *
 * @name f__B52A_0583_0016_AA6B
 * @implements B52A:0583:0016:AA6B ()
 *
 * Called From: B52A:055B:003D:18C3
 */
void f__B52A_0583_0016_AA6B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x2AE1; f__2AE1_00B7_0014_4343();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0599_001F_596B();
}

/**
 * Decompiled function f__B52A_0599_001F_596B()
 *
 * @name f__B52A_0599_001F_596B
 * @implements B52A:0599:001F:596B ()
 *
 * Called From: B52A:0599:0016:AA6B
 */
void f__B52A_0599_001F_596B()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05B8_0034_95AA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x05BC; emu_last_cs = 0xB52A; emu_last_ip = 0x05B6; emu_last_length = 0x001F; emu_last_crc = 0x596B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_059C_001C_D91A()
 *
 * @name f__B52A_059C_001C_D91A
 * @implements B52A:059C:001C:D91A ()
 *
 * Called From: B52A:0555:0057:755B
 * Called From: B52A:0581:0005:1FDE
 */
void f__B52A_059C_001C_D91A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05B8_0034_95AA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x05BC; emu_last_cs = 0xB52A; emu_last_ip = 0x05B6; emu_last_length = 0x001C; emu_last_crc = 0xD91A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_05A4_0014_1197()
 *
 * @name f__B52A_05A4_0014_1197
 * @implements B52A:05A4:0014:1197 ()
 *
 * Called From: B52A:054A:003D:18C3
 * Called From: B52A:054A:0057:755B
 */
void f__B52A_05A4_0014_1197()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05B8_0034_95AA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B52A_05BC_0030_9A08(); return;
}

/**
 * Decompiled function f__B52A_05B8_0034_95AA()
 *
 * @name f__B52A_05B8_0034_95AA
 * @implements B52A:05B8:0034:95AA ()
 *
 * Called From: B52A:05AE:0014:1197
 * Called From: B52A:05AE:001C:D91A
 * Called From: B52A:05AE:001F:596B
 */
void f__B52A_05B8_0034_95AA()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_05F4_0035_EF42(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x05EC; emu_last_cs = 0xB52A; emu_last_ip = 0x05D8; emu_last_length = 0x0034; emu_last_crc = 0x95AA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x20);
	if (!emu_flags.zf) { emu_ip = 0x05EC; emu_last_cs = 0xB52A; emu_last_ip = 0x05E3; emu_last_length = 0x0034; emu_last_crc = 0x95AA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_ip = 0x05F2; emu_last_cs = 0xB52A; emu_last_ip = 0x05EA; emu_last_length = 0x0034; emu_last_crc = 0x95AA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_05BC_0030_9A08()
 *
 * @name f__B52A_05BC_0030_9A08
 * @implements B52A:05BC:0030:9A08 ()
 *
 * Called From: B52A:05B6:0014:1197
 */
void f__B52A_05BC_0030_9A08()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x05F4; emu_last_cs = 0xB52A; emu_last_ip = 0x05C6; emu_last_length = 0x0030; emu_last_crc = 0x9A08; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_05EC_0008_871C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x20);
	if (!emu_flags.zf) { emu_ip = 0x05EC; emu_last_cs = 0xB52A; emu_last_ip = 0x05E3; emu_last_length = 0x0030; emu_last_crc = 0x9A08; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_ip = 0x05F2; emu_last_cs = 0xB52A; emu_last_ip = 0x05EA; emu_last_length = 0x0030; emu_last_crc = 0x9A08; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_05EC_0008_871C()
 *
 * @name f__B52A_05EC_0008_871C
 * @implements B52A:05EC:0008:871C ()
 *
 * Called From: B52A:05D8:0030:9A08
 */
void f__B52A_05EC_0008_871C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	f__B52A_061C_000D_90B8(); return;
}

/**
 * Decompiled function f__B52A_05F4_0035_EF42()
 *
 * @name f__B52A_05F4_0035_EF42
 * @implements B52A:05F4:0035:EF42 ()
 *
 * Called From: B52A:05C6:0034:95AA
 */
void f__B52A_05F4_0035_EF42()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { f__B52A_0611_0018_5D0F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x20);
	if (emu_flags.zf) { f__B52A_061C_000D_90B8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0655; emu_last_cs = 0xB52A; emu_last_ip = 0x0620; emu_last_length = 0x0035; emu_last_crc = 0xEF42; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_ip = 0x064B; emu_last_cs = 0xB52A; emu_last_ip = 0x0627; emu_last_length = 0x0035; emu_last_crc = 0xEF42; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0611_0018_5D0F()
 *
 * @name f__B52A_0611_0018_5D0F
 * @implements B52A:0611:0018:5D0F ()
 *
 * Called From: B52A:0604:0035:EF42
 */
void f__B52A_0611_0018_5D0F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B52A_0655_0007_6FA8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_ip = 0x064B; emu_last_cs = 0xB52A; emu_last_ip = 0x0627; emu_last_length = 0x0018; emu_last_crc = 0x5D0F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_061C_000D_90B8()
 *
 * @name f__B52A_061C_000D_90B8
 * @implements B52A:061C:000D:90B8 ()
 *
 * Called From: B52A:05F2:0008:871C
 * Called From: B52A:060F:0035:EF42
 */
void f__B52A_061C_000D_90B8()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0655; emu_last_cs = 0xB52A; emu_last_ip = 0x0620; emu_last_length = 0x000D; emu_last_crc = 0x90B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B52A_064B_000A_423C(); return;
}

/**
 * Decompiled function f__B52A_0629_0015_1041()
 *
 * @name f__B52A_0629_0015_1041
 * @implements B52A:0629:0015:1041 ()
 *
 * Called From: B52A:0651:000A:423C
 */
void f__B52A_0629_0015_1041()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x063E); f__B52A_08B3_001B_FD96();
	f__B52A_063E_0017_20C4();
}

/**
 * Decompiled function f__B52A_063E_0017_20C4()
 *
 * @name f__B52A_063E_0017_20C4
 * @implements B52A:063E:0017:20C4 ()
 *
 * Called From: B52A:063E:0015:1041
 */
void f__B52A_063E_0017_20C4()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B52A_0648_000D_5220(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0629; emu_last_cs = 0xB52A; emu_last_ip = 0x0651; emu_last_length = 0x0017; emu_last_crc = 0x20C4; emu_call(); return; } // Jump does not resolve
	f__B52A_0686_005B_E884(); return;
}

/**
 * Decompiled function f__B52A_0648_000D_5220()
 *
 * @name f__B52A_0648_000D_5220
 * @implements B52A:0648:000D:5220 ()
 *
 * Called From: B52A:0644:0017:20C4
 */
void f__B52A_0648_000D_5220()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0629; emu_last_cs = 0xB52A; emu_last_ip = 0x0651; emu_last_length = 0x000D; emu_last_crc = 0x5220; emu_call(); return; } // Jump does not resolve
	f__B52A_0686_005B_E884(); return;
}

/**
 * Decompiled function f__B52A_064B_000A_423C()
 *
 * @name f__B52A_064B_000A_423C
 * @implements B52A:064B:000A:423C ()
 *
 * Called From: B52A:0627:000D:90B8
 */
void f__B52A_064B_000A_423C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__B52A_0629_0015_1041(); return; }
	emu_ip = 0x0686; emu_last_cs = 0xB52A; emu_last_ip = 0x0653; emu_last_length = 0x000A; emu_last_crc = 0x423C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0655_0007_6FA8()
 *
 * @name f__B52A_0655_0007_6FA8
 * @implements B52A:0655:0007:6FA8 ()
 *
 * Called From: B52A:0620:0018:5D0F
 */
void f__B52A_0655_0007_6FA8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B52A_067E_0063_0C07(); return;
}

/**
 * Decompiled function f__B52A_067E_0063_0C07()
 *
 * @name f__B52A_067E_0063_0C07
 * @implements B52A:067E:0063:0C07 ()
 *
 * Called From: B52A:065A:0007:6FA8
 */
void f__B52A_067E_0063_0C07()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x065C; emu_last_cs = 0xB52A; emu_last_ip = 0x0684; emu_last_length = 0x0063; emu_last_crc = 0x0C07; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_06EA_0006_2B22(); return; }
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
	emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; f__28E6_000A_0040_30F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_06E1_000F_2A58();
}

/**
 * Decompiled function f__B52A_0686_005B_E884()
 *
 * @name f__B52A_0686_005B_E884
 * @implements B52A:0686:005B:E884 ()
 *
 * Called From: B52A:0653:000D:5220
 * Called From: B52A:0653:0017:20C4
 */
void f__B52A_0686_005B_E884()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_06EA_0006_2B22(); return; }
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
	emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x28E6; f__28E6_000A_0040_30F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_06E1_000F_2A58();
}

/**
 * Decompiled function f__B52A_06E1_000F_2A58()
 *
 * @name f__B52A_06E1_000F_2A58
 * @implements B52A:06E1:000F:2A58 ()
 *
 * Called From: B52A:06E1:005B:E884
 * Called From: B52A:06E1:0063:0C07
 */
void f__B52A_06E1_000F_2A58()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_04DC_0003_0708(); return;
}

/**
 * Decompiled function f__B52A_06EA_0006_2B22()
 *
 * @name f__B52A_06EA_0006_2B22
 * @implements B52A:06EA:0006:2B22 ()
 *
 * Called From: B52A:0695:005B:E884
 * Called From: B52A:0695:0063:0C07
 */
void f__B52A_06EA_0006_2B22()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_04DC_0003_0708(); return;
}

/**
 * Decompiled function f__B52A_06F0_0006_137A()
 *
 * @name f__B52A_06F0_0006_137A
 * @implements B52A:06F0:0006:137A ()
 *
 * Called From: B52A:04DC:0003:0708
 * Called From: B52A:04DC:0005:0D68
 * Called From: B52A:04DC:0033:B40C
 */
void f__B52A_06F0_0006_137A()
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
 * Decompiled function f__B52A_06F6_0012_D7A8()
 *
 * @name f__B52A_06F6_0012_D7A8
 * @implements B52A:06F6:0012:D7A8 ()
 *
 * Called From: 352A:002F:0005:101E
 * Called From: 352A:002F:0005:111A
 * Called From: 352A:002F:0005:11AA
 * Called From: 352A:002F:0005:1224
 * Called From: 352A:002F:0005:1248
 * Called From: 352A:002F:0005:12CA
 * Called From: 352A:002F:0005:12DE
 * Called From: 352A:002F:0005:13DA
 */
void f__B52A_06F6_0012_D7A8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B52A_0708_0015_B17A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x071D; emu_last_cs = 0xB52A; emu_last_ip = 0x0706; emu_last_length = 0x0012; emu_last_crc = 0xD7A8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0706_0002_0386()
 *
 * @name f__B52A_0706_0002_0386
 * @implements B52A:0706:0002:0386 ()
 *
 * Called From: B52A:071B:0015:B17A
 */
void f__B52A_0706_0002_0386()
{
	f__B52A_071D_0004_0F7A(); return;
}

/**
 * Decompiled function f__B52A_0708_0015_B17A()
 *
 * @name f__B52A_0708_0015_B17A
 * @implements B52A:0708:0015:B17A ()
 *
 * Called From: B52A:0702:0012:D7A8
 */
void f__B52A_0708_0015_B17A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	f__B52A_0706_0002_0386(); return;
}

/**
 * Decompiled function f__B52A_071D_0004_0F7A()
 *
 * @name f__B52A_071D_0004_0F7A
 * @implements B52A:071D:0004:0F7A ()
 *
 * Called From: B52A:0706:0002:0386
 */
void f__B52A_071D_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_07A5_0010_09FB()
 *
 * @name f__B52A_07A5_0010_09FB
 * @implements B52A:07A5:0010:09FB ()
 *
 * Called From: B52A:0227:0021:749F
 * Called From: B52A:0241:001A:AEB8
 * Called From: B52A:0328:0015:C409
 * Called From: B52A:0404:0019:9E70
 * Called From: B52A:0404:001C:4E7E
 * Called From: B52A:04F9:001D:2D9D
 * Called From: B52A:093F:0024:1A37
 * Called From: B52A:0963:0024:DCB9
 * Called From: B52A:0A25:001E:52A1
 */
void f__B52A_07A5_0010_09FB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cs); emu_push(0x07B5); emu_cs = 0x01F7; f__01F7_05AF_0015_A629();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_07B5_0016_123B();
}

/**
 * Decompiled function f__B52A_07B5_0016_123B()
 *
 * @name f__B52A_07B5_0016_123B
 * @implements B52A:07B5:0016:123B ()
 *
 * Called From: B52A:07B5:0010:09FB
 */
void f__B52A_07B5_0016_123B()
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
	f__B52A_07CB_0002_00E2(); return;
}

/**
 * Decompiled function f__B52A_07CB_0002_00E2()
 *
 * @name f__B52A_07CB_0002_00E2
 * @implements B52A:07CB:0002:00E2 ()
 *
 * Called From: B52A:07C9:0016:123B
 */
void f__B52A_07CB_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_07CD_003B_BEC7()
 *
 * @name f__B52A_07CD_003B_BEC7
 * @implements B52A:07CD:003B:BEC7 ()
 *
 * Called From: B52A:03B9:001C:4C14
 * Called From: B52A:08FF:0010:64D6
 * Called From: B52A:091B:001C:72EA
 */
void f__B52A_07CD_003B_BEC7()
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
	if (emu_flags.zf) { f__B52A_0808_003C_AFEC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B52A_0812_0032_7A61(); return;
}

/**
 * Decompiled function f__B52A_0808_003C_AFEC()
 *
 * @name f__B52A_0808_003C_AFEC
 * @implements B52A:0808:003C:AFEC ()
 *
 * Called From: B52A:07E9:003B:BEC7
 */
void f__B52A_0808_003C_AFEC()
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
	if (emu_flags.zf) { f__B52A_0846_0006_11F0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_cx.x, 0xA);
	emu_adcws(&emu_bx.x, 0x0);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sbbw(&emu_dx.x, emu_bx.x);
	f__B52A_084C_0004_0F7A(); return;
}

/**
 * Decompiled function f__B52A_0812_0032_7A61()
 *
 * @name f__B52A_0812_0032_7A61
 * @implements B52A:0812:0032:7A61 ()
 *
 * Called From: B52A:0806:003B:BEC7
 */
void f__B52A_0812_0032_7A61()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { f__B52A_0846_0006_11F0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_cx.x, 0xA);
	emu_adcws(&emu_bx.x, 0x0);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sbbw(&emu_dx.x, emu_bx.x);
	f__B52A_084C_0004_0F7A(); return;
}

/**
 * Decompiled function f__B52A_0842_0002_03BC()
 *
 * @name f__B52A_0842_0002_03BC
 * @implements B52A:0842:0002:03BC ()
 *
 * Called From: B52A:084A:0006:11F0
 */
void f__B52A_0842_0002_03BC()
{
	f__B52A_084C_0004_0F7A(); return;
}

/**
 * Decompiled function f__B52A_0846_0006_11F0()
 *
 * @name f__B52A_0846_0006_11F0
 * @implements B52A:0846:0006:11F0 ()
 *
 * Called From: B52A:0826:0032:7A61
 * Called From: B52A:0826:003C:AFEC
 */
void f__B52A_0846_0006_11F0()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B52A_0842_0002_03BC(); return;
}

/**
 * Decompiled function f__B52A_084C_0004_0F7A()
 *
 * @name f__B52A_084C_0004_0F7A
 * @implements B52A:084C:0004:0F7A ()
 *
 * Called From: B52A:0842:0002:03BC
 * Called From: B52A:0842:0032:7A61
 * Called From: B52A:0842:003C:AFEC
 */
void f__B52A_084C_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B52A_0850_0021_C8B0()
 *
 * @name f__B52A_0850_0021_C8B0
 * @implements B52A:0850:0021:C8B0 ()
 *
 * Called From: B52A:03DC:0012:8A2A
 * Called From: B52A:09B8:000E:5036
 * Called From: B52A:09CD:0015:ADB2
 */
void f__B52A_0850_0021_C8B0()
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
	emu_push(emu_cs); emu_push(0x0871); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0871_0015_EB23();
}

/**
 * Decompiled function f__B52A_0871_0015_EB23()
 *
 * @name f__B52A_0871_0015_EB23
 * @implements B52A:0871:0015:EB23 ()
 *
 * Called From: B52A:0871:0021:C8B0
 */
void f__B52A_0871_0015_EB23()
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
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0886_0028_19BE();
}

/**
 * Decompiled function f__B52A_0886_0028_19BE()
 *
 * @name f__B52A_0886_0028_19BE
 * @implements B52A:0886:0028:19BE ()
 *
 * Called From: B52A:0886:0015:EB23
 */
void f__B52A_0886_0028_19BE()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0892; emu_last_cs = 0xB52A; emu_last_ip = 0x088B; emu_last_length = 0x0028; emu_last_crc = 0x19BE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B52A_089C_0012_602D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x08AE; emu_last_cs = 0xB52A; emu_last_ip = 0x08AC; emu_last_length = 0x0028; emu_last_crc = 0x19BE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_089C_0012_602D()
 *
 * @name f__B52A_089C_0012_602D
 * @implements B52A:089C:0012:602D ()
 *
 * Called From: B52A:0890:0028:19BE
 */
void f__B52A_089C_0012_602D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B52A_08AE_0005_04BA(); return;
}

/**
 * Decompiled function f__B52A_08AE_0005_04BA()
 *
 * @name f__B52A_08AE_0005_04BA
 * @implements B52A:08AE:0005:04BA ()
 *
 * Called From: B52A:08AC:0012:602D
 */
void f__B52A_08AE_0005_04BA()
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
 * Decompiled function f__B52A_08B3_001B_FD96()
 *
 * @name f__B52A_08B3_001B_FD96
 * @implements B52A:08B3:001B:FD96 ()
 *
 * Called From: B52A:063B:0015:1041
 */
void f__B52A_08B3_001B_FD96()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x100);
	if (emu_flags.zf) { f__B52A_08CE_0024_D6E4(); return; }
	emu_movw(&emu_ax.x, 0x300);
	emu_ip = 0x08D0; emu_last_cs = 0xB52A; emu_last_ip = 0x08CC; emu_last_length = 0x001B; emu_last_crc = 0xFD96; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_08CE_0024_D6E4()
 *
 * @name f__B52A_08CE_0024_D6E4
 * @implements B52A:08CE:0024:D6E4 ()
 *
 * Called From: B52A:08C7:001B:FD96
 */
void f__B52A_08CE_0024_D6E4()
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
	if (!emu_flags.zf) { f__B52A_08F2_0010_64D6(); return; }
	f__B52A_098C_000E_D41C(); return;
}

/**
 * Decompiled function f__B52A_08F2_0010_64D6()
 *
 * @name f__B52A_08F2_0010_64D6
 * @implements B52A:08F2:0010:64D6 ()
 *
 * Called From: B52A:08ED:0024:D6E4
 */
void f__B52A_08F2_0010_64D6()
{
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_cs);
	emu_push(0x0902); f__B52A_07CD_003B_BEC7();
	f__B52A_0902_001C_72EA();
}

/**
 * Decompiled function f__B52A_0902_001C_72EA()
 *
 * @name f__B52A_0902_001C_72EA
 * @implements B52A:0902:001C:72EA ()
 *
 * Called From: B52A:0902:0010:64D6
 */
void f__B52A_0902_001C_72EA()
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
	emu_push(0x091E); f__B52A_07CD_003B_BEC7();
	f__B52A_091E_0024_1A37();
}

/**
 * Decompiled function f__B52A_091E_0024_1A37()
 *
 * @name f__B52A_091E_0024_1A37
 * @implements B52A:091E:0024:1A37 ()
 *
 * Called From: B52A:091E:001C:72EA
 */
void f__B52A_091E_0024_1A37()
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
	emu_push(0x0942); f__B52A_07A5_0010_09FB();
	f__B52A_0942_0024_DCB9();
}

/**
 * Decompiled function f__B52A_0942_0024_DCB9()
 *
 * @name f__B52A_0942_0024_DCB9
 * @implements B52A:0942:0024:DCB9 ()
 *
 * Called From: B52A:0942:0024:1A37
 */
void f__B52A_0942_0024_DCB9()
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
	emu_push(0x0966); f__B52A_07A5_0010_09FB();
	f__B52A_0966_0020_0678();
}

/**
 * Decompiled function f__B52A_0966_0020_0678()
 *
 * @name f__B52A_0966_0020_0678
 * @implements B52A:0966:0020:0678 ()
 *
 * Called From: B52A:0966:0024:DCB9
 */
void f__B52A_0966_0020_0678()
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
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0986_0006_3CFC();
}

/**
 * Decompiled function f__B52A_0986_0006_3CFC()
 *
 * @name f__B52A_0986_0006_3CFC
 * @implements B52A:0986:0006:3CFC ()
 *
 * Called From: B52A:0986:0020:0678
 */
void f__B52A_0986_0006_3CFC()
{
	emu_addws(&emu_sp, 0xC);
	f__B52A_0A59_001D_C3F9(); return;
}

/**
 * Decompiled function f__B52A_098C_000E_D41C()
 *
 * @name f__B52A_098C_000E_D41C
 * @implements B52A:098C:000E:D41C ()
 *
 * Called From: B52A:08EF:0024:D6E4
 */
void f__B52A_098C_000E_D41C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x4);
	if (!emu_flags.zf) { f__B52A_099A_0013_83C3(); return; }
	f__B52A_0A59_001D_C3F9(); return;
}

/**
 * Decompiled function f__B52A_099A_0013_83C3()
 *
 * @name f__B52A_099A_0013_83C3
 * @implements B52A:099A:0013:83C3 ()
 *
 * Called From: B52A:0995:000E:D41C
 */
void f__B52A_099A_0013_83C3()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09AD); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_09AD_000E_5036();
}

/**
 * Decompiled function f__B52A_09AD_000E_5036()
 *
 * @name f__B52A_09AD_000E_5036
 * @implements B52A:09AD:000E:5036 ()
 *
 * Called From: B52A:09AD:0013:83C3
 */
void f__B52A_09AD_000E_5036()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x09BB); f__B52A_0850_0021_C8B0();
	f__B52A_09BB_0015_ADB2();
}

/**
 * Decompiled function f__B52A_09BB_0015_ADB2()
 *
 * @name f__B52A_09BB_0015_ADB2
 * @implements B52A:09BB:0015:ADB2 ()
 *
 * Called From: B52A:09BB:000E:5036
 */
void f__B52A_09BB_0015_ADB2()
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
	emu_push(0x09D0); f__B52A_0850_0021_C8B0();
	f__B52A_09D0_0025_16D7();
}

/**
 * Decompiled function f__B52A_09D0_0025_16D7()
 *
 * @name f__B52A_09D0_0025_16D7
 * @implements B52A:09D0:0025:16D7 ()
 *
 * Called From: B52A:09D0:0015:ADB2
 */
void f__B52A_09D0_0025_16D7()
{
	emu_addws(&emu_sp, 0x6);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { emu_ip = 0x09EF; emu_last_cs = 0xB52A; emu_last_ip = 0x09E5; emu_last_length = 0x0025; emu_last_crc = 0x16D7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { f__B52A_09FB_000F_FBE7(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09F5); emu_cs = 0x1FB5; emu_ip = 0x13BC; emu_last_cs = 0xB52A; emu_last_ip = 0x09F0; emu_last_length = 0x0025; emu_last_crc = 0x16D7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B52A_09F8_0003_047C()
 *
 * @name f__B52A_09F8_0003_047C
 * @implements B52A:09F8:0003:047C ()
 *
 * Called From: B52A:0AC5:0006:2856
 * Called From: B52A:0AC5:0009:EC57
 */
void f__B52A_09F8_0003_047C()
{
	f__B52A_0AC8_0006_137A(); return;
}

/**
 * Decompiled function f__B52A_09FB_000F_FBE7()
 *
 * @name f__B52A_09FB_000F_FBE7
 * @implements B52A:09FB:000F:FBE7 ()
 *
 * Called From: B52A:09ED:0025:16D7
 */
void f__B52A_09FB_000F_FBE7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A0A); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A0A_001E_52A1();
}

/**
 * Decompiled function f__B52A_0A0A_001E_52A1()
 *
 * @name f__B52A_0A0A_001E_52A1
 * @implements B52A:0A0A:001E:52A1 ()
 *
 * Called From: B52A:0A0A:000F:FBE7
 */
void f__B52A_0A0A_001E_52A1()
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
	emu_push(0x0A28); f__B52A_07A5_0010_09FB();
	f__B52A_0A28_001B_832B();
}

/**
 * Decompiled function f__B52A_0A28_001B_832B()
 *
 * @name f__B52A_0A28_001B_832B
 * @implements B52A:0A28:001B:832B ()
 *
 * Called From: B52A:0A28:001E:52A1
 */
void f__B52A_0A28_001B_832B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A43_000F_E8F5();
}

/**
 * Decompiled function f__B52A_0A43_000F_E8F5()
 *
 * @name f__B52A_0A43_000F_E8F5
 * @implements B52A:0A43:000F:E8F5 ()
 *
 * Called From: B52A:0A43:001B:832B
 */
void f__B52A_0A43_000F_E8F5()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { emu_ip = 0x0A50; emu_last_cs = 0xB52A; emu_last_ip = 0x0A49; emu_last_length = 0x000F; emu_last_crc = 0xE8F5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B52A_0A52_0006_0812(); return; }
	emu_ip = 0x09EF; emu_last_cs = 0xB52A; emu_last_ip = 0x0A50; emu_last_length = 0x000F; emu_last_crc = 0xE8F5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B52A_0A52_0006_0812()
 *
 * @name f__B52A_0A52_0006_0812
 * @implements B52A:0A52:0006:0812 ()
 *
 * Called From: B52A:0A4E:000F:E8F5
 */
void f__B52A_0A52_0006_0812()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A58_001E_83EF();
}

/**
 * Decompiled function f__B52A_0A58_001E_83EF()
 *
 * @name f__B52A_0A58_001E_83EF
 * @implements B52A:0A58:001E:83EF ()
 *
 * Called From: B52A:0A58:0006:0812
 */
void f__B52A_0A58_001E_83EF()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A76_0024_8634();
}

/**
 * Decompiled function f__B52A_0A59_001D_C3F9()
 *
 * @name f__B52A_0A59_001D_C3F9
 * @implements B52A:0A59:001D:C3F9 ()
 *
 * Called From: B52A:0989:0006:3CFC
 * Called From: B52A:0997:000E:D41C
 */
void f__B52A_0A59_001D_C3F9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A76_0024_8634();
}

/**
 * Decompiled function f__B52A_0A76_0024_8634()
 *
 * @name f__B52A_0A76_0024_8634
 * @implements B52A:0A76:0024:8634 ()
 *
 * Called From: B52A:0A76:001D:C3F9
 * Called From: B52A:0A76:001E:83EF
 */
void f__B52A_0A76_0024_8634()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x1F), 0x10);
	if (emu_flags.zf) { f__B52A_0A9F_0020_1981(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x2AE1; f__2AE1_00B7_0014_4343();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0A9A_0005_1F8A();
}

/**
 * Decompiled function f__B52A_0A9A_0005_1F8A()
 *
 * @name f__B52A_0A9A_0005_1F8A
 * @implements B52A:0A9A:0005:1F8A ()
 *
 * Called From: B52A:0A9A:0024:8634
 */
void f__B52A_0A9A_0005_1F8A()
{
	emu_addws(&emu_sp, 0x8);
	f__B52A_0AC2_0006_2856(); return;
}

/**
 * Decompiled function f__B52A_0A9F_0020_1981()
 *
 * @name f__B52A_0A9F_0020_1981
 * @implements B52A:0A9F:0020:1981 ()
 *
 * Called From: B52A:0A82:0024:8634
 */
void f__B52A_0A9F_0020_1981()
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
	emu_push(emu_cs); emu_push(0x0ABF); emu_cs = 0x2AE1; f__2AE1_029F_0014_43E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x352A) { ovl__352A(0xFF); }
	f__B52A_0ABF_0009_EC57();
}

/**
 * Decompiled function f__B52A_0ABF_0009_EC57()
 *
 * @name f__B52A_0ABF_0009_EC57
 * @implements B52A:0ABF:0009:EC57 ()
 *
 * Called From: B52A:0ABF:0020:1981
 */
void f__B52A_0ABF_0009_EC57()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_09F8_0003_047C(); return;
}

/**
 * Decompiled function f__B52A_0AC2_0006_2856()
 *
 * @name f__B52A_0AC2_0006_2856
 * @implements B52A:0AC2:0006:2856 ()
 *
 * Called From: B52A:0A9D:0005:1F8A
 */
void f__B52A_0AC2_0006_2856()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B52A_09F8_0003_047C(); return;
}

/**
 * Decompiled function f__B52A_0AC8_0006_137A()
 *
 * @name f__B52A_0AC8_0006_137A
 * @implements B52A:0AC8:0006:137A ()
 *
 * Called From: B52A:09F8:0003:047C
 */
void f__B52A_0AC8_0006_137A()
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
