/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__104B_0006_0011_4FBF()
 *
 * @name f__104B_0006_0011_4FBF
 * @implements 104B:0006:0011:4FBF ()
 *
 * Called From: B4C4:0543:000B:FB69
 * Called From: B511:00B3:0005:122C
 */
void f__104B_0006_0011_4FBF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F2), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__104B_0053_000A_F579(); return;
}

/**
 * Decompiled function f__104B_0017_0046_4FD9()
 *
 * @name f__104B_0017_0046_4FD9
 * @implements 104B:0017:0046:4FD9 ()
 *
 * Called From: 104B:0056:000A:F579
 * Called From: 104B:0056:000B:C57B
 */
void f__104B_0017_0046_4FD9()
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
	if (emu_flags.zf) { f__104B_0052_000B_C57B(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7A22), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7A24), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35F2));
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0017; emu_last_cs = 0x104B; emu_last_ip = 0x0056; emu_last_length = 0x0046; emu_last_crc = 0x4FD9; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_0052_000B_C57B()
 *
 * @name f__104B_0052_000B_C57B
 * @implements 104B:0052:000B:C57B ()
 *
 * Called From: 104B:0036:0046:4FD9
 */
void f__104B_0052_000B_C57B()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_0017_0046_4FD9(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_0053_000A_F579()
 *
 * @name f__104B_0053_000A_F579
 * @implements 104B:0053:000A:F579 ()
 *
 * Called From: 104B:0015:0011:4FBF
 */
void f__104B_0053_000A_F579()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__104B_0017_0046_4FD9(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_005D_001C_6A82()
 *
 * @name f__104B_005D_001C_6A82
 * @implements 104B:005D:001C:6A82 ()
 *
 * Called From: B4B8:1ACC:0013:E02D
 * Called From: B511:0AB2:000D:B710
 */
void f__104B_005D_001C_6A82()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__104B_0082_001D_C474(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0079); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__104B_0079_0026_9247();
}

/**
 * Decompiled function f__104B_0079_0026_9247()
 *
 * @name f__104B_0079_0026_9247
 * @implements 104B:0079:0026:9247 ()
 *
 * Called From: 104B:0079:001C:6A82
 */
void f__104B_0079_0026_9247()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35F0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35EE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	if (emu_flags.zf) { emu_ip = 0x00A2; emu_last_cs = 0x104B; emu_last_ip = 0x0089; emu_last_length = 0x0026; emu_last_crc = 0x9247; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x530);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__104B_009F_000A_B687();
}

/**
 * Decompiled function f__104B_0082_001D_C474()
 *
 * @name f__104B_0082_001D_C474
 * @implements 104B:0082:001D:C474 ()
 *
 * Called From: 104B:006C:001C:6A82
 */
void f__104B_0082_001D_C474()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	if (emu_flags.zf) { emu_ip = 0x00A2; emu_last_cs = 0x104B; emu_last_ip = 0x0089; emu_last_length = 0x001D; emu_last_crc = 0xC474; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x530);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__104B_009F_000A_B687();
}

/**
 * Decompiled function f__104B_009F_000A_B687()
 *
 * @name f__104B_009F_000A_B687
 * @implements 104B:009F:000A:B687 ()
 *
 * Called From: 104B:009F:001D:C474
 * Called From: 104B:009F:0026:9247
 */
void f__104B_009F_000A_B687()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x530);
	f__104B_00A9_0002_00E2(); return;
}

/**
 * Decompiled function f__104B_00A9_0002_00E2()
 *
 * @name f__104B_00A9_0002_00E2
 * @implements 104B:00A9:0002:00E2 ()
 *
 * Called From: 104B:00A7:000A:B687
 */
void f__104B_00A9_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_00C2_0030_C2D2()
 *
 * @name f__104B_00C2_0030_C2D2
 * @implements 104B:00C2:0030:C2D2 ()
 *
 * Called From: 16C5:005B:000F:2E97
 * Called From: 1A34:3760:0010:6924
 * Called From: B50B:04B6:001A:FCEF
 */
void f__104B_00C2_0030_C2D2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__104B_00D5_001D_B590(); return; }
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
	emu_push(0x00F2); f__104B_00F8_002E_B54C();
	f__104B_00F2_0004_04F4();
}

/**
 * Decompiled function f__104B_00D5_001D_B590()
 *
 * @name f__104B_00D5_001D_B590
 * @implements 104B:00D5:001D:B590 ()
 *
 * Called From: 104B:00CB:0030:C2D2
 */
void f__104B_00D5_001D_B590()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F2); f__104B_00F8_002E_B54C();
	f__104B_00F2_0004_04F4();
}

/**
 * Decompiled function f__104B_00F2_0004_04F4()
 *
 * @name f__104B_00F2_0004_04F4
 * @implements 104B:00F2:0004:04F4 ()
 *
 * Called From: 104B:00F2:0030:C2D2
 * Called From: 104B:00F2:001D:B590
 */
void f__104B_00F2_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__104B_00F6_0002_00E2(); return;
}

/**
 * Decompiled function f__104B_00F6_0002_00E2()
 *
 * @name f__104B_00F6_0002_00E2
 * @implements 104B:00F6:0002:00E2 ()
 *
 * Called From: 104B:00F4:0004:04F4
 */
void f__104B_00F6_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__104B_00F8_002E_B54C()
 *
 * @name f__104B_00F8_002E_B54C
 * @implements 104B:00F8:002E:B54C ()
 *
 * Called From: 104B:00EF:0030:C2D2
 * Called From: 104B:00EF:001D:B590
 */
void f__104B_00F8_002E_B54C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__104B_0110_0016_5B2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x85D6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0124; emu_last_cs = 0x104B; emu_last_ip = 0x0121; emu_last_length = 0x002E; emu_last_crc = 0xB54C; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_si);
	emu_ip = 0x0158; emu_last_cs = 0x104B; emu_last_ip = 0x0124; emu_last_length = 0x002E; emu_last_crc = 0xB54C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__104B_0110_0016_5B2F()
 *
 * @name f__104B_0110_0016_5B2F
 * @implements 104B:0110:0016:5B2F ()
 *
 * Called From: 104B:0106:002E:B54C
 */
void f__104B_0110_0016_5B2F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0124; emu_last_cs = 0x104B; emu_last_ip = 0x0121; emu_last_length = 0x0016; emu_last_crc = 0x5B2F; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_si);
	f__104B_0158_0013_BE09(); return;
}

/**
 * Decompiled function f__104B_0155_0002_0384()
 *
 * @name f__104B_0155_0002_0384
 * @implements 104B:0155:0002:0384 ()
 *
 * Called From: 104B:0169:0013:BE09
 */
void f__104B_0155_0002_0384()
{
	f__104B_016B_0006_137A(); return;
}

/**
 * Decompiled function f__104B_0158_0013_BE09()
 *
 * @name f__104B_0158_0013_BE09
 * @implements 104B:0158:0013:BE09 ()
 *
 * Called From: 104B:0124:0016:5B2F
 */
void f__104B_0158_0013_BE09()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35F2));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0126; emu_last_cs = 0x104B; emu_last_ip = 0x015C; emu_last_length = 0x0013; emu_last_crc = 0xBE09; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__104B_0155_0002_0384(); return;
}

/**
 * Decompiled function f__104B_016B_0006_137A()
 *
 * @name f__104B_016B_0006_137A
 * @implements 104B:016B:0006:137A ()
 *
 * Called From: 104B:0155:0002:0384
 */
void f__104B_016B_0006_137A()
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
 * Decompiled function f__104B_0354_0023_3236()
 *
 * @name f__104B_0354_0023_3236
 * @implements 104B:0354:0023:3236 ()
 *
 * Called From: 1423:0B44:0018:D1E9
 * Called From: 1423:0B44:000E:162D
 */
void f__104B_0354_0023_3236()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0377; emu_last_cs = 0x104B; emu_last_ip = 0x035C; emu_last_length = 0x0023; emu_last_crc = 0x3236; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0377; emu_last_cs = 0x104B; emu_last_ip = 0x0361; emu_last_length = 0x0023; emu_last_crc = 0x3236; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x53);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35F0));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35EE));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__104B_037D_0002_00E2(); return;
}

/**
 * Decompiled function f__104B_037D_0002_00E2()
 *
 * @name f__104B_037D_0002_00E2
 * @implements 104B:037D:0002:00E2 ()
 *
 * Called From: 104B:0375:0023:3236
 */
void f__104B_037D_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
