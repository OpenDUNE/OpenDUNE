/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__104B_0006_0011_631B()
 *
 * @name f__104B_0006_0011_631B
 * @implements 104B:0006:0011:631B ()
 *
 * Called From: B4C4:0543:000B:AFBF
 * Called From: B4C4:0543:000E:8D15
 * Called From: B511:00B3:0005:ACC2
 */
void f__104B_0006_0011_631B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F2), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__104B_0053_000A_478A(); return;
}

/**
 * Decompiled function f__104B_0017_0046_2F85()
 *
 * @name f__104B_0017_0046_2F85
 * @implements 104B:0017:0046:2F85 ()
 *
 * Called From: 104B:0056:000A:478A
 * Called From: 104B:0056:000B:8782
 * Called From: 104B:0056:0046:2F85
 */
void f__104B_0017_0046_2F85()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x53);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if (emu_flags.zf) { f__104B_0052_000B_8782(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x85DE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x85DC), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F2));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_0017_0046_2F85(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_0052_000B_8782()
 *
 * @name f__104B_0052_000B_8782
 * @implements 104B:0052:000B:8782 ()
 *
 * Called From: 104B:0036:0046:2F85
 */
void f__104B_0052_000B_8782()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_0017_0046_2F85(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_0053_000A_478A()
 *
 * @name f__104B_0053_000A_478A
 * @implements 104B:0053:000A:478A ()
 *
 * Called From: 104B:0015:0011:631B
 */
void f__104B_0053_000A_478A()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_0017_0046_2F85(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_005D_001C_39F6()
 *
 * @name f__104B_005D_001C_39F6
 * @implements 104B:005D:001C:39F6 ()
 *
 * Called From: B4B8:1ACC:0013:104B
 * Called From: B511:0AB2:000D:9BEB
 */
void f__104B_005D_001C_39F6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__104B_0082_001D_CF58(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0079); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__104B_0079_0026_FD93();
}

/**
 * Decompiled function f__104B_0079_0026_FD93()
 *
 * @name f__104B_0079_0026_FD93
 * @implements 104B:0079:0026:FD93 ()
 *
 * Called From: 104B:0079:001C:39F6
 */
void f__104B_0079_0026_FD93()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00A2; emu_last_cs = 0x104B; emu_last_ip = 0x0089; emu_last_length = 0x0026; emu_last_crc = 0xFD93; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x530);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__104B_009F_000A_A59E();
}

/**
 * Decompiled function f__104B_0082_001D_CF58()
 *
 * @name f__104B_0082_001D_CF58
 * @implements 104B:0082:001D:CF58 ()
 *
 * Called From: 104B:006C:001C:39F6
 */
void f__104B_0082_001D_CF58()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00A2; emu_last_cs = 0x104B; emu_last_ip = 0x0089; emu_last_length = 0x001D; emu_last_crc = 0xCF58; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x530);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__104B_009F_000A_A59E();
}

/**
 * Decompiled function f__104B_009F_000A_A59E()
 *
 * @name f__104B_009F_000A_A59E
 * @implements 104B:009F:000A:A59E ()
 *
 * Called From: 104B:009F:0026:FD93
 * Called From: 104B:009F:001D:CF58
 */
void f__104B_009F_000A_A59E()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x530);
	f__104B_00A9_0002_2597(); return;
}

/**
 * Decompiled function f__104B_00A9_0002_2597()
 *
 * @name f__104B_00A9_0002_2597
 * @implements 104B:00A9:0002:2597 ()
 *
 * Called From: 104B:00A7:000A:A59E
 */
void f__104B_00A9_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_00C2_0030_20A6()
 *
 * @name f__104B_00C2_0030_20A6
 * @implements 104B:00C2:0030:20A6 ()
 *
 * Called From: 0C3A:29DA:001F:D4DD
 * Called From: 16C5:005B:000F:288A
 * Called From: 1A34:3760:0010:2991
 * Called From: B50B:04B6:001A:1AA9
 */
void f__104B_00C2_0030_20A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__104B_00D5_001D_2B68(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x85D6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F2); f__104B_00F8_002E_3820();
	f__104B_00F2_0004_5B1F();
}

/**
 * Decompiled function f__104B_00D5_001D_2B68()
 *
 * @name f__104B_00D5_001D_2B68
 * @implements 104B:00D5:001D:2B68 ()
 *
 * Called From: 104B:00CB:0030:20A6
 */
void f__104B_00D5_001D_2B68()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F2); f__104B_00F8_002E_3820();
	f__104B_00F2_0004_5B1F();
}

/**
 * Decompiled function f__104B_00F2_0004_5B1F()
 *
 * @name f__104B_00F2_0004_5B1F
 * @implements 104B:00F2:0004:5B1F ()
 *
 * Called From: 104B:00F2:0030:20A6
 * Called From: 104B:00F2:001D:2B68
 */
void f__104B_00F2_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__104B_00F6_0002_2597(); return;
}

/**
 * Decompiled function f__104B_00F6_0002_2597()
 *
 * @name f__104B_00F6_0002_2597
 * @implements 104B:00F6:0002:2597 ()
 *
 * Called From: 104B:00F4:0004:5B1F
 */
void f__104B_00F6_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_00F8_002E_3820()
 *
 * @name f__104B_00F8_002E_3820
 * @implements 104B:00F8:002E:3820 ()
 *
 * Called From: 0C3A:29FC:000B:0673
 * Called From: 104B:00EF:0030:20A6
 * Called From: 104B:00EF:001D:2B68
 * Called From: 16C5:0107:000B:0673
 * Called From: 1A34:3781:000A:CED6
 * Called From: B50B:0504:000E:2499
 */
void f__104B_00F8_002E_3820()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__104B_0110_0016_6D19(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x85D6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0124; emu_last_cs = 0x104B; emu_last_ip = 0x0121; emu_last_length = 0x002E; emu_last_crc = 0x3820; emu_call(); return; }
	emu_incw(&emu_si);
	f__104B_0158_0013_49FB(); return;
}

/**
 * Decompiled function f__104B_0110_0016_6D19()
 *
 * @name f__104B_0110_0016_6D19
 * @implements 104B:0110:0016:6D19 ()
 *
 * Called From: 104B:0106:002E:3820
 */
void f__104B_0110_0016_6D19()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0124; emu_last_cs = 0x104B; emu_last_ip = 0x0121; emu_last_length = 0x0016; emu_last_crc = 0x6D19; emu_call(); return; }
	emu_incw(&emu_si);
	f__104B_0158_0013_49FB(); return;
}

/**
 * Decompiled function f__104B_0126_0031_81E0()
 *
 * @name f__104B_0126_0031_81E0
 * @implements 104B:0126:0031:81E0 ()
 *
 * Called From: 104B:015C:0013:49FB
 */
void f__104B_0126_0031_81E0()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x85DE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x85DC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__104B_0148_000F_4483(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_di);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0157; emu_last_cs = 0x104B; emu_last_ip = 0x0146; emu_last_length = 0x0031; emu_last_crc = 0x81E0; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x016B; emu_last_cs = 0x104B; emu_last_ip = 0x0155; emu_last_length = 0x0031; emu_last_crc = 0x81E0; emu_call();
}

/**
 * Decompiled function f__104B_0148_000F_4483()
 *
 * @name f__104B_0148_000F_4483
 * @implements 104B:0148:000F:4483 ()
 *
 * Called From: 104B:013D:0031:81E0
 */
void f__104B_0148_000F_4483()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__104B_016B_0006_F7CE(); return;
}

/**
 * Decompiled function f__104B_0155_0002_CA3A()
 *
 * @name f__104B_0155_0002_CA3A
 * @implements 104B:0155:0002:CA3A ()
 *
 * Called From: 104B:0169:0013:49FB
 */
void f__104B_0155_0002_CA3A()
{
	f__104B_016B_0006_F7CE(); return;
}

/**
 * Decompiled function f__104B_0158_0013_49FB()
 *
 * @name f__104B_0158_0013_49FB
 * @implements 104B:0158:0013:49FB ()
 *
 * Called From: 104B:0124:0016:6D19
 * Called From: 104B:0124:002E:3820
 */
void f__104B_0158_0013_49FB()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if ((emu_flags.sf != emu_flags.of)) { f__104B_0126_0031_81E0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__104B_0155_0002_CA3A(); return;
}

/**
 * Decompiled function f__104B_016B_0006_F7CE()
 *
 * @name f__104B_016B_0006_F7CE
 * @implements 104B:016B:0006:F7CE ()
 *
 * Called From: 104B:0155:0002:CA3A
 * Called From: 104B:0155:000F:4483
 */
void f__104B_016B_0006_F7CE()
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
 * Decompiled function f__104B_0171_0020_7F19()
 *
 * @name f__104B_0171_0020_7F19
 * @implements 104B:0171:0020:7F19 ()
 *
 * Called From: 104B:025C:0012:1DC4
 */
void f__104B_0171_0020_7F19()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	if (!emu_flags.zf) { f__104B_0191_0009_538F(); return; }
	/* Unresolved jump */ emu_ip = 0x0240; emu_last_cs = 0x104B; emu_last_ip = 0x018E; emu_last_length = 0x0020; emu_last_crc = 0x7F19; emu_call();
}

/**
 * Decompiled function f__104B_0191_0009_538F()
 *
 * @name f__104B_0191_0009_538F
 * @implements 104B:0191:0009:538F ()
 *
 * Called From: 104B:018C:0020:7F19
 */
void f__104B_0191_0009_538F()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01CF; emu_last_cs = 0x104B; emu_last_ip = 0x0194; emu_last_length = 0x0009; emu_last_crc = 0x538F; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	f__104B_01C8_0007_F598(); return;
}

/**
 * Decompiled function f__104B_019A_002D_CF3C()
 *
 * @name f__104B_019A_002D_CF3C
 * @implements 104B:019A:002D:CF3C ()
 *
 * Called From: 104B:01CB:0007:F598
 * Called From: 104B:01CB:0008:B398
 */
void f__104B_019A_002D_CF3C()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x53);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { f__104B_01C7_0008_B398(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x53);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	f__104B_01CD_0002_D5BA(); return;
}

/**
 * Decompiled function f__104B_01C7_0008_B398()
 *
 * @name f__104B_01C7_0008_B398
 * @implements 104B:01C7:0008:B398 ()
 *
 * Called From: 104B:01AC:002D:CF3C
 */
void f__104B_01C7_0008_B398()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_019A_002D_CF3C(); return; }
	/* Unresolved jump */ emu_ip = 0x01FA; emu_last_cs = 0x104B; emu_last_ip = 0x01CD; emu_last_length = 0x0008; emu_last_crc = 0xB398; emu_call();
}

/**
 * Decompiled function f__104B_01C8_0007_F598()
 *
 * @name f__104B_01C8_0007_F598
 * @implements 104B:01C8:0007:F598 ()
 *
 * Called From: 104B:0198:0009:538F
 */
void f__104B_01C8_0007_F598()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_019A_002D_CF3C(); return; }
	/* Unresolved jump */ emu_ip = 0x01FA; emu_last_cs = 0x104B; emu_last_ip = 0x01CD; emu_last_length = 0x0007; emu_last_crc = 0xF598; emu_call();
}

/**
 * Decompiled function f__104B_01CD_0002_D5BA()
 *
 * @name f__104B_01CD_0002_D5BA
 * @implements 104B:01CD:0002:D5BA ()
 *
 * Called From: 104B:01C5:002D:CF3C
 */
void f__104B_01CD_0002_D5BA()
{
	f__104B_01FA_001A_49E1(); return;
}

/**
 * Decompiled function f__104B_01FA_001A_49E1()
 *
 * @name f__104B_01FA_001A_49E1
 * @implements 104B:01FA:001A:49E1 ()
 *
 * Called From: 104B:01CD:0002:D5BA
 */
void f__104B_01FA_001A_49E1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0240; emu_last_cs = 0x104B; emu_last_ip = 0x0200; emu_last_length = 0x001A; emu_last_crc = 0x49E1; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x53);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__104B_0214_0034_E1EC();
}

/**
 * Decompiled function f__104B_0214_0034_E1EC()
 *
 * @name f__104B_0214_0034_E1EC
 * @implements 104B:0214:0034:E1EC ()
 *
 * Called From: 104B:0214:001A:49E1
 */
void f__104B_0214_0034_E1EC()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x85DE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x85DC), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__104B_0248_0005_8BCF(); return;
}

/**
 * Decompiled function f__104B_0248_0005_8BCF()
 *
 * @name f__104B_0248_0005_8BCF
 * @implements 104B:0248:0005:8BCF ()
 *
 * Called From: 104B:0246:0034:E1EC
 */
void f__104B_0248_0005_8BCF()
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
 * Decompiled function f__104B_024D_0012_1DC4()
 *
 * @name f__104B_024D_0012_1DC4
 * @implements 104B:024D:0012:1DC4 ()
 *
 * Called From: B4B5:0F82:0017:CB04
 */
void f__104B_024D_0012_1DC4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x025F); f__104B_0171_0020_7F19();
	f__104B_025F_0064_D684();
}

/**
 * Decompiled function f__104B_025F_0064_D684()
 *
 * @name f__104B_025F_0064_D684
 * @implements 104B:025F:0064:D684 ()
 *
 * Called From: 104B:025F:0012:1DC4
 */
void f__104B_025F_0064_D684()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02E2; emu_last_cs = 0x104B; emu_last_ip = 0x026C; emu_last_length = 0x0064; emu_last_crc = 0xD684; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x392E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__104B_02C3_0013_8AC5();
}

/**
 * Decompiled function f__104B_02C3_0013_8AC5()
 *
 * @name f__104B_02C3_0013_8AC5
 * @implements 104B:02C3:0013:8AC5 ()
 *
 * Called From: 104B:02C3:0064:D684
 */
void f__104B_02C3_0013_8AC5()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__104B_02D6_0014_4672();
}

/**
 * Decompiled function f__104B_02D6_0014_4672()
 *
 * @name f__104B_02D6_0014_4672
 * @implements 104B:02D6:0014:4672 ()
 *
 * Called From: 104B:02D6:0013:8AC5
 */
void f__104B_02D6_0014_4672()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__104B_02EA_0005_8BCF(); return;
}

/**
 * Decompiled function f__104B_02EA_0005_8BCF()
 *
 * @name f__104B_02EA_0005_8BCF
 * @implements 104B:02EA:0005:8BCF ()
 *
 * Called From: 104B:02E8:0014:4672
 */
void f__104B_02EA_0005_8BCF()
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
 * Decompiled function f__104B_0354_0023_5A6D()
 *
 * @name f__104B_0354_0023_5A6D
 * @implements 104B:0354:0023:5A6D ()
 *
 * Called From: 1423:0B44:0018:B454
 * Called From: 1423:0B44:000E:3343
 * Called From: 1423:0B44:0019:3478
 * Called From: B4C4:0512:000B:825D
 */
void f__104B_0354_0023_5A6D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0377; emu_last_cs = 0x104B; emu_last_ip = 0x035C; emu_last_length = 0x0023; emu_last_crc = 0x5A6D; emu_call(); return; }
	emu_cmpws(&emu_cx.x, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0377; emu_last_cs = 0x104B; emu_last_ip = 0x0361; emu_last_length = 0x0023; emu_last_crc = 0x5A6D; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x53);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__104B_037D_0002_2597(); return;
}

/**
 * Decompiled function f__104B_037D_0002_2597()
 *
 * @name f__104B_037D_0002_2597
 * @implements 104B:037D:0002:2597 ()
 *
 * Called From: 104B:0375:0023:5A6D
 */
void f__104B_037D_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
