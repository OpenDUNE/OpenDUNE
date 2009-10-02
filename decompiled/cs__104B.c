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
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0017; emu_last_cs = 0x104B; emu_last_ip = 0x0056; emu_last_length = 0x0046; emu_last_crc = 0x2F85; emu_call(); return; }
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
 * Called From: 104B:00EF:0030:20A6
 * Called From: 104B:00EF:001D:2B68
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
	/* Unresolved jump */ emu_ip = 0x0158; emu_last_cs = 0x104B; emu_last_ip = 0x0124; emu_last_length = 0x002E; emu_last_crc = 0x3820; emu_call();
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
 */
void f__104B_0158_0013_49FB()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0126; emu_last_cs = 0x104B; emu_last_ip = 0x015C; emu_last_length = 0x0013; emu_last_crc = 0x49FB; emu_call(); return; }
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
 * Decompiled function f__104B_0354_0023_5A6D()
 *
 * @name f__104B_0354_0023_5A6D
 * @implements 104B:0354:0023:5A6D ()
 *
 * Called From: 1423:0B44:0018:B454
 * Called From: 1423:0B44:000E:3343
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
