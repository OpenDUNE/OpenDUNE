/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29A3_000C_0048_87E5()
 *
 * @name f__29A3_000C_0048_87E5
 * @implements 29A3:000C:0048:87E5 ()
 *
 * Called From: 29A3:00AD:0015:17E8
 */
void f__29A3_000C_0048_87E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_xorb(&emu_bx.l, emu_get_memory8(emu_ds, 0x00,  0x7099));
	if (emu_flags.zf) { f__29A3_004C_0008_938A(); return; }
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7099), emu_ax.l);
	emu_testb(&emu_bx.l, 0x2);
	if (emu_flags.zf) { f__29A3_0039_001B_8B1F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x42);
	emu_testb(&emu_ax.l, 0x2);
	if (!emu_flags.zf) { f__29A3_0039_001B_8B1F(); return; }
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x800);
	emu_testb(&emu_bx.l, 0x1);
	if (emu_flags.zf) { f__29A3_004C_0008_938A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x41);
	emu_testb(&emu_ax.l, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x004C; emu_last_cs = 0x29A3; emu_last_ip = 0x0045; emu_last_length = 0x0048; emu_last_crc = 0x87E5; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x800);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29A3_0039_001B_8B1F()
 *
 * @name f__29A3_0039_001B_8B1F
 * @implements 29A3:0039:001B:8B1F ()
 *
 * Called From: 29A3:0029:0048:87E5
 * Called From: 29A3:0032:0048:87E5
 */
void f__29A3_0039_001B_8B1F()
{
	emu_testb(&emu_bx.l, 0x1);
	if (emu_flags.zf) { f__29A3_004C_0008_938A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x41);
	emu_testb(&emu_ax.l, 0x1);
	if (!emu_flags.zf) { f__29A3_004C_0008_938A(); return; }
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x800);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29A3_004C_0008_938A()
 *
 * @name f__29A3_004C_0008_938A
 * @implements 29A3:004C:0008:938A ()
 *
 * Called From: 29A3:0021:0048:87E5
 * Called From: 29A3:003C:001B:8B1F
 * Called From: 29A3:003C:0048:87E5
 * Called From: 29A3:0045:001B:8B1F
 */
void f__29A3_004C_0008_938A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29A3_0054_005C_845B()
 *
 * @name f__29A3_0054_005C_845B
 * @implements 29A3:0054:005C:845B ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__29A3_0054_005C_845B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00CA; emu_last_cs = 0x29A3; emu_last_ip = 0x0072; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7098), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00CA; emu_last_cs = 0x29A3; emu_last_ip = 0x0079; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x1);
	if (!emu_flags.zf) { f__29A3_0089_0027_3268(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, -0x6794), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00CA; emu_last_cs = 0x29A3; emu_last_ip = 0x0087; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0092; emu_last_cs = 0x29A3; emu_last_ip = 0x008E; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_shrw(&emu_cx.x, 0x1);
	emu_cmpw(&emu_cx.x, 0x13F);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x009B; emu_last_cs = 0x29A3; emu_last_ip = 0x0096; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x29A3; emu_last_ip = 0x00A0; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x29A3; emu_last_ip = 0x00A8; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x00B0); emu_ip = 0x000C; emu_last_cs = 0x29A3; emu_last_ip = 0x00AD; emu_last_length = 0x005C; emu_last_crc = 0x845B; emu_call(); // Jump does not resolve
	f__29A3_00B0_0009_C343();
}

/**
 * Decompiled function f__29A3_0089_0027_3268()
 *
 * @name f__29A3_0089_0027_3268
 * @implements 29A3:0089:0027:3268 ()
 *
 * Called From: 29A3:0080:005C:845B
 */
void f__29A3_0089_0027_3268()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0092; emu_last_cs = 0x29A3; emu_last_ip = 0x008E; emu_last_length = 0x0027; emu_last_crc = 0x3268; emu_call(); return; } // Jump does not resolve
	emu_shrw(&emu_cx.x, 0x1);
	emu_cmpw(&emu_cx.x, 0x13F);
	if ((emu_flags.cf || emu_flags.zf)) { f__29A3_009B_0015_17E8(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x29A3; emu_last_ip = 0x00A0; emu_last_length = 0x0027; emu_last_crc = 0x3268; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x29A3; emu_last_ip = 0x00A8; emu_last_length = 0x0027; emu_last_crc = 0x3268; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x00B0); emu_ip = 0x000C; emu_last_cs = 0x29A3; emu_last_ip = 0x00AD; emu_last_length = 0x0027; emu_last_crc = 0x3268; emu_call(); // Jump does not resolve
	f__29A3_00B0_0009_C343();
}

/**
 * Decompiled function f__29A3_009B_0015_17E8()
 *
 * @name f__29A3_009B_0015_17E8
 * @implements 29A3:009B:0015:17E8 ()
 *
 * Called From: 29A3:0096:0027:3268
 */
void f__29A3_009B_0015_17E8()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x29A3; emu_last_ip = 0x00A0; emu_last_length = 0x0015; emu_last_crc = 0x17E8; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x00BC; emu_last_cs = 0x29A3; emu_last_ip = 0x00A8; emu_last_length = 0x0015; emu_last_crc = 0x17E8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x00B0); f__29A3_000C_0048_87E5();
	f__29A3_00B0_0009_C343();
}

/**
 * Decompiled function f__29A3_00B0_0009_C343()
 *
 * @name f__29A3_00B0_0009_C343
 * @implements 29A3:00B0:0009:C343 ()
 *
 * Called From: 29A3:00B0:0015:17E8
 */
void f__29A3_00B0_0009_C343()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x29E8; f__29E8_0A4A_0040_4DD0();
	f__29A3_00B9_0014_2B17();
}

/**
 * Decompiled function f__29A3_00B9_0014_2B17()
 *
 * @name f__29A3_00B9_0014_2B17
 * @implements 29A3:00B9:0014:2B17 ()
 *
 * Called From: 29A3:00B9:0009:C343
 */
void f__29A3_00B9_0014_2B17()
{
	emu_addws(&emu_sp, 0x2);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x00CA; emu_last_cs = 0x29A3; emu_last_ip = 0x00C1; emu_last_length = 0x0014; emu_last_crc = 0x2B17; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (emu_flags.zf) { f__29A3_00CD_0066_F5BA(); return; }
	f__29A3_01C3_000C_EA3E(); return;
}

/**
 * Decompiled function f__29A3_00CD_0066_F5BA()
 *
 * @name f__29A3_00CD_0066_F5BA
 * @implements 29A3:00CD:0066:F5BA ()
 *
 * Called From: 29A3:00C8:0014:2B17
 */
void f__29A3_00CD_0066_F5BA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C78), 0x0);
	if (emu_flags.zf) { f__29A3_00F3_0040_BD31(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C7C));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6C78));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C7C));
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C7A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010F; emu_last_cs = 0x29A3; emu_last_ip = 0x00F8; emu_last_length = 0x0066; emu_last_crc = 0xF5BA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C7E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6C7A));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C7E));
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7060), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7062), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x011C; emu_last_length = 0x0066; emu_last_crc = 0xF5BA; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x0123; emu_last_length = 0x0066; emu_last_crc = 0xF5BA; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x012B; emu_last_length = 0x0066; emu_last_crc = 0xF5BA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x0133); emu_ip = 0x000C; emu_last_cs = 0x29A3; emu_last_ip = 0x0130; emu_last_length = 0x0066; emu_last_crc = 0xF5BA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29A3_00F3_0040_BD31()
 *
 * @name f__29A3_00F3_0040_BD31
 * @implements 29A3:00F3:0040:BD31 ()
 *
 * Called From: 29A3:00D8:0066:F5BA
 */
void f__29A3_00F3_0040_BD31()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C7A), 0x0);
	if (emu_flags.zf) { f__29A3_010F_0024_FCA2(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C7E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6C7A));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_imuluw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C7E));
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7060), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7062), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x011C; emu_last_length = 0x0040; emu_last_crc = 0xBD31; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x0123; emu_last_length = 0x0040; emu_last_crc = 0xBD31; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x012B; emu_last_length = 0x0040; emu_last_crc = 0xBD31; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x0133); emu_ip = 0x000C; emu_last_cs = 0x29A3; emu_last_ip = 0x0130; emu_last_length = 0x0040; emu_last_crc = 0xBD31; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29A3_010F_0024_FCA2()
 *
 * @name f__29A3_010F_0024_FCA2
 * @implements 29A3:010F:0024:FCA2 ()
 *
 * Called From: 29A3:00F8:0040:BD31
 */
void f__29A3_010F_0024_FCA2()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7060), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7062), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x2);
	if (emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x011C; emu_last_length = 0x0024; emu_last_crc = 0xFCA2; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7010), 0x0);
	if (emu_flags.zf) { f__29A3_013F_002A_9C56(); return; }
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x700E), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x013F; emu_last_cs = 0x29A3; emu_last_ip = 0x012B; emu_last_length = 0x0024; emu_last_crc = 0xFCA2; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x0133); emu_ip = 0x000C; emu_last_cs = 0x29A3; emu_last_ip = 0x0130; emu_last_length = 0x0024; emu_last_crc = 0xFCA2; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__29A3_013F_002A_9C56()
 *
 * @name f__29A3_013F_002A_9C56
 * @implements 29A3:013F:002A:9C56 ()
 *
 * Called From: 29A3:0123:0024:FCA2
 */
void f__29A3_013F_002A_9C56()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x0);
	if (!emu_flags.zf) { f__29A3_01B5_001A_B1AA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x707C), emu_cx.x);
	if (!emu_flags.zf) { f__29A3_0152_0017_4C43(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x707E), emu_dx.x);
	if (emu_flags.zf) { f__29A3_01B5_001A_B1AA(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7080));
	emu_andw(&emu_ax.x, 0xC000);
	emu_cmpw(&emu_ax.x, 0xC000);
	if (emu_flags.zf) { emu_ip = 0x017D; emu_last_cs = 0x29A3; emu_last_ip = 0x015B; emu_last_length = 0x002A; emu_last_crc = 0x9C56; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0169);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x0165; emu_last_length = 0x002A; emu_last_crc = 0x9C56;
			emu_call();
			return;
	}
	f__29A3_0169_0008_F246();
}

/**
 * Decompiled function f__29A3_0152_0017_4C43()
 *
 * @name f__29A3_0152_0017_4C43
 * @implements 29A3:0152:0017:4C43 ()
 *
 * Called From: 29A3:014A:002A:9C56
 */
void f__29A3_0152_0017_4C43()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7080));
	emu_andw(&emu_ax.x, 0xC000);
	emu_cmpw(&emu_ax.x, 0xC000);
	if (emu_flags.zf) { emu_ip = 0x017D; emu_last_cs = 0x29A3; emu_last_ip = 0x015B; emu_last_length = 0x0017; emu_last_crc = 0x4C43; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0169);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x0165; emu_last_length = 0x0017; emu_last_crc = 0x4C43;
			emu_call();
			return;
	}
	f__29A3_0169_0008_F246();
}

/**
 * Decompiled function f__29A3_0169_0008_F246()
 *
 * @name f__29A3_0169_0008_F246
 * @implements 29A3:0169:0008:F246 ()
 *
 * Called From: 29A3:0169:0017:4C43
 * Called From: 29A3:0169:002A:9C56
 */
void f__29A3_0169_0008_F246()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x2B6C; f__2B6C_000E_0045_8F26();
	f__29A3_0171_0004_0D5C();
}

/**
 * Decompiled function f__29A3_0171_0004_0D5C()
 *
 * @name f__29A3_0171_0004_0D5C
 * @implements 29A3:0171:0004:0D5C ()
 *
 * Called From: 29A3:0171:0008:F246
 */
void f__29A3_0171_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x0175);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x0171; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__29A3_0175_0028_9ADA();
}

/**
 * Decompiled function f__29A3_0175_0028_9ADA()
 *
 * @name f__29A3_0175_0028_9ADA
 * @implements 29A3:0175:0028:9ADA ()
 *
 * Called From: 29A3:0175:0004:0D5C
 */
void f__29A3_0175_0028_9ADA()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x8000);
	if (emu_flags.zf) { f__29A3_019D_000C_3390(); return; }
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7082));
	if (emu_flags.cf) { f__29A3_019D_000C_3390(); return; }
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x7086));
	if (!(emu_flags.cf || emu_flags.zf)) { f__29A3_019D_000C_3390(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7084));
	if (emu_flags.cf) { f__29A3_019D_000C_3390(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7088));
	if (!(emu_flags.cf || emu_flags.zf)) { f__29A3_019D_000C_3390(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x4000);
	f__29A3_01B5_001A_B1AA(); return;
}

/**
 * Decompiled function f__29A3_019D_000C_3390()
 *
 * @name f__29A3_019D_000C_3390
 * @implements 29A3:019D:000C:3390 ()
 *
 * Called From: 29A3:017B:0028:9ADA
 * Called From: 29A3:0181:0028:9ADA
 * Called From: 29A3:0187:0028:9ADA
 * Called From: 29A3:018D:0028:9ADA
 * Called From: 29A3:0193:0028:9ADA
 */
void f__29A3_019D_000C_3390()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x01A9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01A5; emu_last_length = 0x000C; emu_last_crc = 0x3390;
			emu_call();
			return;
	}
	f__29A3_01A9_0008_F446();
}

/**
 * Decompiled function f__29A3_01A9_0008_F446()
 *
 * @name f__29A3_01A9_0008_F446
 * @implements 29A3:01A9:0008:F446 ()
 *
 * Called From: 29A3:01A9:000C:3390
 */
void f__29A3_01A9_0008_F446()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x2B6C; f__2B6C_006E_002E_CEAB();
	f__29A3_01B1_0004_0D5C();
}

/**
 * Decompiled function f__29A3_01B1_0004_0D5C()
 *
 * @name f__29A3_01B1_0004_0D5C
 * @implements 29A3:01B1:0004:0D5C ()
 *
 * Called From: 29A3:01B1:0008:F446
 */
void f__29A3_01B1_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x01B5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01B1; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__29A3_01B5_001A_B1AA();
}

/**
 * Decompiled function f__29A3_01B5_001A_B1AA()
 *
 * @name f__29A3_01B5_001A_B1AA
 * @implements 29A3:01B5:001A:B1AA ()
 *
 * Called From: 29A3:0144:002A:9C56
 * Called From: 29A3:0150:002A:9C56
 * Called From: 29A3:019B:0028:9ADA
 * Called From: 29A3:01B5:0004:0D5C
 */
void f__29A3_01B5_001A_B1AA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x707C), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x707E), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
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
 * Decompiled function f__29A3_01C3_000C_EA3E()
 *
 * @name f__29A3_01C3_000C_EA3E
 * @implements 29A3:01C3:000C:EA3E ()
 *
 * Called From: 29A3:00CA:0014:2B17
 */
void f__29A3_01C3_000C_EA3E()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
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
 * Decompiled function f__29A3_0224_0009_C96E()
 *
 * @name f__29A3_0224_0009_C96E
 * @implements 29A3:0224:0009:C96E ()
 *
 * Called From: 25C4:0055:0006:058E
 */
void f__29A3_0224_0009_C96E()
{
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, 0x3533);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x022D); f__0070_0108_0005_1CF6();
	f__29A3_022D_003C_F8DC();
}

/**
 * Decompiled function f__29A3_022D_003C_F8DC()
 *
 * @name f__29A3_022D_003C_F8DC
 * @implements 29A3:022D:003C:F8DC ()
 *
 * Called From: 29A3:022D:0009:C96E
 */
void f__29A3_022D_003C_F8DC()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7060), 0xA0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7062), 0x64);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7080), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x706E), 0x13F);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7072), 0xC7);
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x025F; emu_last_cs = 0x29A3; emu_last_ip = 0x0255; emu_last_length = 0x003C; emu_last_crc = 0xF8DC; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_bx.l, 0xCF);
	if (!emu_flags.zf) { f__29A3_0269_0005_1452(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	emu_ip = 0x02B8; emu_last_cs = 0x29A3; emu_last_ip = 0x0267; emu_last_length = 0x003C; emu_last_crc = 0xF8DC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__29A3_0269_0005_1452()
 *
 * @name f__29A3_0269_0005_1452
 * @implements 29A3:0269:0005:1452 ()
 *
 * Called From: 29A3:025D:003C:F8DC
 */
void f__29A3_0269_0005_1452()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x026E); f__0070_0198_0005_1C66();
	f__29A3_026E_0010_B419();
}

/**
 * Decompiled function f__29A3_026E_0010_B419()
 *
 * @name f__29A3_026E_0010_B419
 * @implements 29A3:026E:0010:B419 ()
 *
 * Called From: 29A3:026E:0005:1452
 */
void f__29A3_026E_0010_B419()
{
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { emu_ip = 0x025F; emu_last_cs = 0x29A3; emu_last_ip = 0x0271; emu_last_length = 0x0010; emu_last_crc = 0xB419; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x0);
	emu_movw(&emu_ax.x, 0x3);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x027E); f__0070_0198_0005_1C66();
	f__29A3_027E_002A_87EA();
}

/**
 * Decompiled function f__29A3_027E_002A_87EA()
 *
 * @name f__29A3_027E_002A_87EA
 * @implements 29A3:027E:002A:87EA ()
 *
 * Called From: 29A3:027E:0010:B419
 */
void f__29A3_027E_002A_87EA()
{
	emu_cmpw(&emu_cx.x, 0xA0);
	if (emu_flags.zf) { emu_ip = 0x028A; emu_last_cs = 0x29A3; emu_last_ip = 0x0282; emu_last_length = 0x002A; emu_last_crc = 0x87EA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	emu_movw(&emu_cx.x, 0xA0);
	emu_movw(&emu_dx.x, 0x64);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x1);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x02A3; emu_last_cs = 0x29A3; emu_last_ip = 0x029F; emu_last_length = 0x002A; emu_last_crc = 0x87EA; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_ax.x, 0x4);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02A8); f__0070_0198_0005_1C66();
	f__29A3_02A8_000D_0D87();
}

/**
 * Decompiled function f__29A3_02A8_000D_0D87()
 *
 * @name f__29A3_02A8_000D_0D87
 * @implements 29A3:02A8:000D:0D87 ()
 *
 * Called From: 29A3:02A8:002A:87EA
 */
void f__29A3_02A8_000D_0D87()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_movw(&emu_cx.x, 0x1F);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, 0x54);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02B5); f__0070_0198_0005_1C66();
	f__29A3_02B5_0008_BFF2();
}

/**
 * Decompiled function f__29A3_02B5_0008_BFF2()
 *
 * @name f__29A3_02B5_0008_BFF2
 * @implements 29A3:02B5:0008:BFF2 ()
 *
 * Called From: 29A3:02B5:000D:0D87
 */
void f__29A3_02B5_0008_BFF2()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29A3_02BD_0018_1436()
 *
 * @name f__29A3_02BD_0018_1436
 * @implements 29A3:02BD:0018:1436 ()
 *
 * Called From: B500:000F:000C:6915
 */
void f__29A3_02BD_0018_1436()
{
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x02D5; emu_last_cs = 0x29A3; emu_last_ip = 0x02C6; emu_last_length = 0x0018; emu_last_crc = 0x1436; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC);
	emu_movw(&emu_cx.x, 0x0);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, 0x54);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02D5); f__0070_0198_0005_1C66();
	f__29A3_02D5_0005_077E();
}

/**
 * Decompiled function f__29A3_02D5_0005_077E()
 *
 * @name f__29A3_02D5_0005_077E
 * @implements 29A3:02D5:0005:077E ()
 *
 * Called From: 29A3:02D5:0018:1436
 */
void f__29A3_02D5_0005_077E()
{
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29A3_02DA_003B_5D68()
 *
 * @name f__29A3_02DA_003B_5D68
 * @implements 29A3:02DA:003B:5D68 ()
 *
 * Called From: B4DA:05D7:0022:4D86
 * Called From: B4DA:05D7:001D:8C1B
 * Called From: B4DA:06F6:001D:FD17
 * Called From: B4DA:06F6:0022:7C89
 * Called From: B4DA:075C:0029:3A9B
 * Called From: B4DA:0787:0021:B632
 * Called From: B4DA:07B9:0026:86D8
 * Called From: B4DA:07EB:0026:62BC
 */
void f__29A3_02DA_003B_5D68()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02EE; emu_last_cs = 0x29A3; emu_last_ip = 0x02F3; emu_last_length = 0x003B; emu_last_crc = 0x5D68; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_3803(); return; }
	emu_cmpw(&emu_ax.x, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_3803(); return; }
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_3803(); return; }
	emu_cmpw(&emu_bx.x, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__29A3_0315_000E_3803(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__29A3_0318_000B_382D(); return;
}

/**
 * Decompiled function f__29A3_0315_000E_3803()
 *
 * @name f__29A3_0315_000E_3803
 * @implements 29A3:0315:000E:3803 ()
 *
 * Called From: 29A3:0302:003B:5D68
 * Called From: 29A3:0306:003B:5D68
 * Called From: 29A3:030A:003B:5D68
 * Called From: 29A3:030E:003B:5D68
 */
void f__29A3_0315_000E_3803()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29A3_0318_000B_382D()
 *
 * @name f__29A3_0318_000B_382D
 * @implements 29A3:0318:000B:382D ()
 *
 * Called From: 29A3:0313:003B:5D68
 */
void f__29A3_0318_000B_382D()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
