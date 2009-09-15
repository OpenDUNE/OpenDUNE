/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1391_000A_0035_D7FC()
 *
 * @name f__1391_000A_0035_D7FC
 * @implements 1391:000A:0035:D7FC ()
 *
 * Called From: 0642:03CC:0005:1182
 */
void f__1391_000A_0035_D7FC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__1391_003F_00C8_4D63(); return; }
	emu_ip = 0x0849; emu_last_cs = 0x1391; emu_last_ip = 0x003C; emu_last_length = 0x0035; emu_last_crc = 0xD7FC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_003F_00C8_4D63()
 *
 * @name f__1391_003F_00C8_4D63
 * @implements 1391:003F:00C8:4D63 ()
 *
 * Called From: 1391:003A:0035:D7FC
 */
void f__1391_003F_00C8_4D63()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6088));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6086));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_006E_0099_9F3A(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0054; emu_last_cs = 0x1391; emu_last_ip = 0x004C; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_006E_0099_9F3A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x384);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6088), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6086), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38C2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38C0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x0079; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__1391_0083_0084_3DAC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00B2_0055_C366(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x008E; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x0090; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_C366(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x2A30);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6090));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00C5; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0xB4);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6090), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608E), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6094));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6092));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00EC; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_2D07(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_2867(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x00C8; emu_last_crc = 0x4D63; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_006E_0099_9F3A()
 *
 * @name f__1391_006E_0099_9F3A
 * @implements 1391:006E:0099:9F3A ()
 *
 * Called From: 1391:004A:00C8:4D63
 * Called From: 1391:0052:00C8:4D63
 */
void f__1391_006E_0099_9F3A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38C2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38C0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x0079; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__1391_0083_0084_3DAC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00B2_0055_C366(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_C366(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x0090; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_C366(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x2A30);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6090));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_7063(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0xB4);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6090), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608E), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6094));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6092));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00EC; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_2D07(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_2867(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0099; emu_last_crc = 0x9F3A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_0083_0084_3DAC()
 *
 * @name f__1391_0083_0084_3DAC
 * @implements 1391:0083:0084:3DAC ()
 *
 * Called From: 1391:007B:0099:9F3A
 * Called From: 1391:007B:00C8:4D63
 */
void f__1391_0083_0084_3DAC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x008E; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x0090; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_C366(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x2A30);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6090));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_7063(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0xB4);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6090), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608E), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6094));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6092));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00EC; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_2D07(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_2867(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0084; emu_last_crc = 0x3DAC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_00B2_0055_C366()
 *
 * @name f__1391_00B2_0055_C366
 * @implements 1391:00B2:0055:C366 ()
 *
 * Called From: 1391:0081:00C8:4D63
 * Called From: 1391:0081:0099:9F3A
 * Called From: 1391:008E:0099:9F3A
 * Called From: 1391:0096:0099:9F3A
 * Called From: 1391:0096:00C8:4D63
 * Called From: 1391:0096:0084:3DAC
 */
void f__1391_00B2_0055_C366()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6090));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00E1_0026_7063(); return; }
	if (!emu_flags.zf) { emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x0055; emu_last_crc = 0xC366; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_7063(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0xB4);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6090), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x608E), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6094));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6092));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_2D07(); return; }
	if (!emu_flags.zf) { emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x0055; emu_last_crc = 0xC366; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_2D07(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_2867(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0055; emu_last_crc = 0xC366; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_00E1_0026_7063()
 *
 * @name f__1391_00E1_0026_7063
 * @implements 1391:00E1:0026:7063 ()
 *
 * Called From: 1391:00BD:0055:C366
 * Called From: 1391:00C5:0055:C366
 * Called From: 1391:00C5:0099:9F3A
 * Called From: 1391:00C5:0084:3DAC
 */
void f__1391_00E1_0026_7063()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6094));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6092));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_2D07(); return; }
	if (!emu_flags.zf) { emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x0026; emu_last_crc = 0x7063; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_2D07(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_2867(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0026; emu_last_crc = 0x7063; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_0107_00C0_2867()
 *
 * @name f__1391_0107_00C0_2867
 * @implements 1391:0107:00C0:2867 ()
 *
 * Called From: 1391:0100:0055:C366
 * Called From: 1391:0100:0026:7063
 * Called From: 1391:0100:0099:9F3A
 * Called From: 1391:0100:0084:3DAC
 * Called From: 1391:0100:00C8:4D63
 */
void f__1391_0107_00C0_2867()
{
	emu_movw(&emu_ax.x, 0x258);
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6094), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6092), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6098));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6096));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x014D; emu_last_cs = 0x1391; emu_last_ip = 0x012A; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0134; emu_last_cs = 0x1391; emu_last_ip = 0x012C; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_014D_007A_C638(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6098), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6096), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x609C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x017B; emu_last_cs = 0x1391; emu_last_ip = 0x0158; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0162; emu_last_cs = 0x1391; emu_last_ip = 0x015A; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_7FC4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_0A95(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_0A95(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_060A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x01F1; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x00C0; emu_last_crc = 0x2867; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_011F_00A8_2D07()
 *
 * @name f__1391_011F_00A8_2D07
 * @implements 1391:011F:00A8:2D07 ()
 *
 * Called From: 1391:00EC:0026:7063
 * Called From: 1391:00EC:0055:C366
 * Called From: 1391:00F4:0026:7063
 * Called From: 1391:00F4:0055:C366
 * Called From: 1391:00F4:00C8:4D63
 * Called From: 1391:00F4:0099:9F3A
 * Called From: 1391:00F4:0084:3DAC
 */
void f__1391_011F_00A8_2D07()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6098));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6096));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_014D_007A_C638(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0134; emu_last_cs = 0x1391; emu_last_ip = 0x012C; emu_last_length = 0x00A8; emu_last_crc = 0x2D07; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_014D_007A_C638(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6098), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6096), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x609C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_017B_004C_7FC4(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0162; emu_last_cs = 0x1391; emu_last_ip = 0x015A; emu_last_length = 0x00A8; emu_last_crc = 0x2D07; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_7FC4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_0A95(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x00A8; emu_last_crc = 0x2D07; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_0A95(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x00A8; emu_last_crc = 0x2D07; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_060A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x01F1; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x00A8; emu_last_crc = 0x2D07; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_014D_007A_C638()
 *
 * @name f__1391_014D_007A_C638
 * @implements 1391:014D:007A:C638 ()
 *
 * Called From: 1391:012A:00A8:2D07
 * Called From: 1391:0132:00A8:2D07
 * Called From: 1391:0132:00C0:2867
 */
void f__1391_014D_007A_C638()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x609C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_017B_004C_7FC4(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0162; emu_last_cs = 0x1391; emu_last_ip = 0x015A; emu_last_length = 0x007A; emu_last_crc = 0xC638; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_7FC4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_0A95(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x007A; emu_last_crc = 0xC638; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_0A95(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x007A; emu_last_crc = 0xC638; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_060A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x01F1; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x007A; emu_last_crc = 0xC638; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_017B_004C_7FC4()
 *
 * @name f__1391_017B_004C_7FC4
 * @implements 1391:017B:004C:7FC4 ()
 *
 * Called From: 1391:0158:007A:C638
 * Called From: 1391:0158:00A8:2D07
 * Called From: 1391:0160:00A8:2D07
 * Called From: 1391:0160:007A:C638
 * Called From: 1391:0160:00C0:2867
 */
void f__1391_017B_004C_7FC4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_0A95(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x004C; emu_last_crc = 0x7FC4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_0A95(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_060A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01B5; emu_last_length = 0x004C; emu_last_crc = 0x7FC4; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x01F1; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x004C; emu_last_crc = 0x7FC4; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_01AA_001D_0A95()
 *
 * @name f__1391_01AA_001D_0A95
 * @implements 1391:01AA:001D:0A95 ()
 *
 * Called From: 1391:0186:004C:7FC4
 * Called From: 1391:0186:00A8:2D07
 * Called From: 1391:0186:00C0:2867
 * Called From: 1391:0186:007A:C638
 * Called From: 1391:018E:004C:7FC4
 * Called From: 1391:018E:00A8:2D07
 * Called From: 1391:018E:007A:C638
 * Called From: 1391:018E:00C0:2867
 */
void f__1391_01AA_001D_0A95()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_060A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_060A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x01F1; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x001D; emu_last_crc = 0x0A95; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_01E5_0012_060A()
 *
 * @name f__1391_01E5_0012_060A
 * @implements 1391:01E5:0012:060A ()
 *
 * Called From: 1391:01AE:001D:0A95
 * Called From: 1391:01AE:004C:7FC4
 * Called From: 1391:01B5:00C0:2867
 * Called From: 1391:01B5:001D:0A95
 * Called From: 1391:01B5:00A8:2D07
 * Called From: 1391:01B5:007A:C638
 */
void f__1391_01E5_0012_060A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__1391_0230_0009_0D6D(); return; }
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__1391_01F7_0031_0419();
}

/**
 * Decompiled function f__1391_01F7_0031_0419()
 *
 * @name f__1391_01F7_0031_0419
 * @implements 1391:01F7:0031:0419 ()
 *
 * Called From: 1391:01F7:0012:060A
 */
void f__1391_01F7_0031_0419()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x, -0x6819), 0x0);
	if (emu_flags.zf) { f__1391_0230_0009_0D6D(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x, -0x6819), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0230; emu_last_cs = 0x1391; emu_last_ip = 0x020F; emu_last_length = 0x0031; emu_last_crc = 0x0419; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x, -0x6819), 0xFF);
	if (!emu_flags.zf) { f__1391_0228_0011_B8E7(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x6819), 0x1);
	f__1391_0230_0009_0D6D(); return;
}

/**
 * Decompiled function f__1391_0228_0011_B8E7()
 *
 * @name f__1391_0228_0011_B8E7
 * @implements 1391:0228:0011:B8E7 ()
 *
 * Called From: 1391:021A:0031:0419
 */
void f__1391_0228_0011_B8E7()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_incw(&emu_get_memory16(emu_ds, emu_bx.x, -0x6819));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0239; emu_last_cs = 0x1391; emu_last_ip = 0x0234; emu_last_length = 0x0011; emu_last_crc = 0xB8E7; emu_call(); return; } // Jump does not resolve
	f__1391_0465_0031_0B91(); return;
}

/**
 * Decompiled function f__1391_0230_0009_0D6D()
 *
 * @name f__1391_0230_0009_0D6D
 * @implements 1391:0230:0009:0D6D ()
 *
 * Called From: 1391:01E9:0012:060A
 * Called From: 1391:0204:0031:0419
 * Called From: 1391:0226:0031:0419
 */
void f__1391_0230_0009_0D6D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__1391_0239_0019_0A7C(); return; }
	f__1391_0465_0031_0B91(); return;
}

/**
 * Decompiled function f__1391_0239_0019_0A7C()
 *
 * @name f__1391_0239_0019_0A7C
 * @implements 1391:0239:0019:0A7C ()
 *
 * Called From: 1391:0234:0009:0D6D
 */
void f__1391_0239_0019_0A7C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__1391_045D_0008_F216(); return;
}

/**
 * Decompiled function f__1391_0252_0013_B451()
 *
 * @name f__1391_0252_0013_B451
 * @implements 1391:0252:0013:B451 ()
 *
 * Called From: 1391:0462:0008:F216
 * Called From: 1391:0462:0009:7C16
 */
void f__1391_0252_0013_B451()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x, -0x72BD), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0265; emu_last_cs = 0x1391; emu_last_ip = 0x0260; emu_last_length = 0x0013; emu_last_crc = 0xB451; emu_call(); return; } // Jump does not resolve
	f__1391_045C_0009_7C16(); return;
}

/**
 * Decompiled function f__1391_045C_0009_7C16()
 *
 * @name f__1391_045C_0009_7C16
 * @implements 1391:045C:0009:7C16 ()
 *
 * Called From: 1391:0262:0013:B451
 */
void f__1391_045C_0009_7C16()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_0465_0031_0B91(); return; }
	f__1391_0252_0013_B451(); return;
}

/**
 * Decompiled function f__1391_045D_0008_F216()
 *
 * @name f__1391_045D_0008_F216
 * @implements 1391:045D:0008:F216 ()
 *
 * Called From: 1391:024F:0019:0A7C
 */
void f__1391_045D_0008_F216()
{
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0465; emu_last_cs = 0x1391; emu_last_ip = 0x0460; emu_last_length = 0x0008; emu_last_crc = 0xF216; emu_call(); return; } // Jump does not resolve
	f__1391_0252_0013_B451(); return;
}

/**
 * Decompiled function f__1391_0465_0031_0B91()
 *
 * @name f__1391_0465_0031_0B91
 * @implements 1391:0465:0031:0B91 ()
 *
 * Called From: 1391:0236:0009:0D6D
 * Called From: 1391:0236:0011:B8E7
 * Called From: 1391:0460:0009:7C16
 */
void f__1391_0465_0031_0B91()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1391_0496_0018_8CA0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	if (!emu_flags.cf) { emu_ip = 0x0494; emu_last_cs = 0x1391; emu_last_ip = 0x0482; emu_last_length = 0x0031; emu_last_crc = 0x0B91; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_ip = 0x04DD; emu_last_cs = 0x1391; emu_last_ip = 0x0494; emu_last_length = 0x0031; emu_last_crc = 0x0B91; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_0496_0018_8CA0()
 *
 * @name f__1391_0496_0018_8CA0
 * @implements 1391:0496:0018:8CA0 ()
 *
 * Called From: 1391:0470:0031:0B91
 */
void f__1391_0496_0018_8CA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04AE_0024_EE63(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	f__1391_04B1_0021_E133(); return;
}

/**
 * Decompiled function f__1391_04AE_0024_EE63()
 *
 * @name f__1391_04AE_0024_EE63
 * @implements 1391:04AE:0024:EE63 ()
 *
 * Called From: 1391:04A2:0018:8CA0
 */
void f__1391_04AE_0024_EE63()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04DD_000A_79B1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x91);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; emu_ip = 0x0531; emu_last_cs = 0x1391; emu_last_ip = 0x04CD; emu_last_length = 0x0024; emu_last_crc = 0xEE63; emu_call(); // Jump does not resolve
	f__1391_04D2_0008_7E08();
}

/**
 * Decompiled function f__1391_04B1_0021_E133()
 *
 * @name f__1391_04B1_0021_E133
 * @implements 1391:04B1:0021:E133 ()
 *
 * Called From: 1391:04AC:0018:8CA0
 */
void f__1391_04B1_0021_E133()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04DD_000A_79B1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x91);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__1391_04D2_0008_7E08();
}

/**
 * Decompiled function f__1391_04D2_0008_7E08()
 *
 * @name f__1391_04D2_0008_7E08
 * @implements 1391:04D2:0008:7E08 ()
 *
 * Called From: 1391:04D2:0021:E133
 */
void f__1391_04D2_0008_7E08()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__1391_04DA_000D_69AD();
}

/**
 * Decompiled function f__1391_04DA_000D_69AD()
 *
 * @name f__1391_04DA_000D_69AD
 * @implements 1391:04DA:000D:69AD ()
 *
 * Called From: 1391:04DA:0008:7E08
 */
void f__1391_04DA_000D_69AD()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04E7); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	f__1391_04E7_0003_0666();
}

/**
 * Decompiled function f__1391_04DD_000A_79B1()
 *
 * @name f__1391_04DD_000A_79B1
 * @implements 1391:04DD:000A:79B1 ()
 *
 * Called From: 1391:04BB:0024:EE63
 * Called From: 1391:04BB:0021:E133
 */
void f__1391_04DD_000A_79B1()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04E7); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	f__1391_04E7_0003_0666();
}

/**
 * Decompiled function f__1391_04E7_0003_0666()
 *
 * @name f__1391_04E7_0003_0666
 * @implements 1391:04E7:0003:0666 ()
 *
 * Called From: 1391:04E7:000A:79B1
 * Called From: 1391:04E7:000D:69AD
 */
void f__1391_04E7_0003_0666()
{
	f__1391_0834_0015_BC89(); return;
}

/**
 * Decompiled function f__1391_04EA_0009_0C7D()
 *
 * @name f__1391_04EA_0009_0C7D
 * @implements 1391:04EA:0009:0C7D ()
 *
 * Called From: 1391:0846:0015:BC89
 */
void f__1391_04EA_0009_0C7D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1391_04F3_0018_3488(); return; }
	f__1391_059C_0012_00F3(); return;
}

/**
 * Decompiled function f__1391_04F3_0018_3488()
 *
 * @name f__1391_04F3_0018_3488
 * @implements 1391:04F3:0018:3488 ()
 *
 * Called From: 1391:04EE:0009:0C7D
 */
void f__1391_04F3_0018_3488()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1391_050B_001E_56A6(); return; }
	f__1391_059C_0012_00F3(); return;
}

/**
 * Decompiled function f__1391_050B_001E_56A6()
 *
 * @name f__1391_050B_001E_56A6
 * @implements 1391:050B:001E:56A6 ()
 *
 * Called From: 1391:0506:0018:3488
 */
void f__1391_050B_001E_56A6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_051F_000A_382A(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0529; emu_last_cs = 0x1391; emu_last_ip = 0x0523; emu_last_length = 0x001E; emu_last_crc = 0x56A6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__1391_052C_0029_0544(); return;
}

/**
 * Decompiled function f__1391_051F_000A_382A()
 *
 * @name f__1391_051F_000A_382A
 * @implements 1391:051F:000A:382A ()
 *
 * Called From: 1391:0517:001E:56A6
 */
void f__1391_051F_000A_382A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0529_002C_554B(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x052C; emu_last_cs = 0x1391; emu_last_ip = 0x0527; emu_last_length = 0x000A; emu_last_crc = 0x382A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1391_0529_002C_554B()
 *
 * @name f__1391_0529_002C_554B
 * @implements 1391:0529:002C:554B ()
 *
 * Called From: 1391:0523:000A:382A
 */
void f__1391_0529_002C_554B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	if (!emu_flags.zf) { f__1391_0573_001E_F91E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x053A; emu_last_length = 0x002C; emu_last_crc = 0x554B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x0545; emu_last_length = 0x002C; emu_last_crc = 0x554B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x34C1; emu_ip = 0x057F; emu_last_cs = 0x1391; emu_last_ip = 0x0550; emu_last_length = 0x002C; emu_last_crc = 0x554B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_052C_0029_0544()
 *
 * @name f__1391_052C_0029_0544
 * @implements 1391:052C:0029:0544 ()
 *
 * Called From: 1391:0527:001E:56A6
 */
void f__1391_052C_0029_0544()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x0533; emu_last_length = 0x0029; emu_last_crc = 0x0544; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_0573_001E_F91E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x0545; emu_last_length = 0x0029; emu_last_crc = 0x0544; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x34C1; emu_ip = 0x057F; emu_last_cs = 0x1391; emu_last_ip = 0x0550; emu_last_length = 0x0029; emu_last_crc = 0x0544; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_0573_001E_F91E()
 *
 * @name f__1391_0573_001E_F91E
 * @implements 1391:0573:001E:F91E ()
 *
 * Called From: 1391:0533:002C:554B
 * Called From: 1391:053A:0029:0544
 */
void f__1391_0573_001E_F91E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x64);
	if (!emu_flags.cf) { f__1391_059C_0012_00F3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	if (emu_flags.zf) { f__1391_059C_0012_00F3(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FCB; emu_ip = 0x05F0; emu_last_cs = 0x1391; emu_last_ip = 0x058C; emu_last_length = 0x001E; emu_last_crc = 0xF91E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_059C_0012_00F3()
 *
 * @name f__1391_059C_0012_00F3
 * @implements 1391:059C:0012:00F3 ()
 *
 * Called From: 1391:04F0:0009:0C7D
 * Called From: 1391:0508:0018:3488
 * Called From: 1391:057C:001E:F91E
 * Called From: 1391:0583:001E:F91E
 */
void f__1391_059C_0012_00F3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__1391_05AF_000E_6B90(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x1A34; f__1A34_21E0_001A_FB21();
	f__1391_05AE_000F_EBBC();
}

/**
 * Decompiled function f__1391_05AE_000F_EBBC()
 *
 * @name f__1391_05AE_000F_EBBC
 * @implements 1391:05AE:000F:EBBC ()
 *
 * Called From: 1391:05AE:0012:00F3
 */
void f__1391_05AE_000F_EBBC()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x05BD; emu_last_cs = 0x1391; emu_last_ip = 0x05B8; emu_last_length = 0x000F; emu_last_crc = 0xEBBC; emu_call(); return; } // Jump does not resolve
	f__1391_076C_0009_0CD9(); return;
}

/**
 * Decompiled function f__1391_05AF_000E_6B90()
 *
 * @name f__1391_05AF_000E_6B90
 * @implements 1391:05AF:000E:6B90 ()
 *
 * Called From: 1391:05A0:0012:00F3
 */
void f__1391_05AF_000E_6B90()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFF);
	if (!emu_flags.zf) { f__1391_05BD_0009_0E43(); return; }
	f__1391_076C_0009_0CD9(); return;
}

/**
 * Decompiled function f__1391_05BD_0009_0E43()
 *
 * @name f__1391_05BD_0009_0E43
 * @implements 1391:05BD:0009:0E43 ()
 *
 * Called From: 1391:05B8:000E:6B90
 */
void f__1391_05BD_0009_0E43()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x05C6; emu_last_cs = 0x1391; emu_last_ip = 0x05C1; emu_last_length = 0x0009; emu_last_crc = 0x0E43; emu_call(); return; } // Jump does not resolve
	f__1391_076C_0009_0CD9(); return;
}

/**
 * Decompiled function f__1391_076C_0009_0CD9()
 *
 * @name f__1391_076C_0009_0CD9
 * @implements 1391:076C:0009:0CD9 ()
 *
 * Called From: 1391:05BA:000F:EBBC
 * Called From: 1391:05BA:000E:6B90
 * Called From: 1391:05C3:0009:0E43
 */
void f__1391_076C_0009_0CD9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1391_0775_000C_AA05(); return; }
	f__1391_07F5_0023_EDF2(); return;
}

/**
 * Decompiled function f__1391_0775_000C_AA05()
 *
 * @name f__1391_0775_000C_AA05
 * @implements 1391:0775:000C:AA05 ()
 *
 * Called From: 1391:0770:0009:0CD9
 */
void f__1391_0775_000C_AA05()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0781); emu_cs = 0x0C3A; f__0C3A_1F70_0010_7894();
	f__1391_0781_000D_8146();
}

/**
 * Decompiled function f__1391_0781_000D_8146()
 *
 * @name f__1391_0781_000D_8146
 * @implements 1391:0781:000D:8146 ()
 *
 * Called From: 1391:0781:000C:AA05
 */
void f__1391_0781_000D_8146()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x078E); emu_cs = 0x0C3A; f__0C3A_20DB_0011_8989();
	f__1391_078E_0058_6F21();
}

/**
 * Decompiled function f__1391_078E_0058_6F21()
 *
 * @name f__1391_078E_0058_6F21
 * @implements 1391:078E:0058:6F21 ()
 *
 * Called From: 1391:078E:000D:8146
 */
void f__1391_078E_0058_6F21()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x0);
	if (emu_flags.zf) { f__1391_07A2_0044_FE46(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (emu_flags.zf) { f__1391_07B5_0031_4742(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07C8; emu_last_cs = 0x1391; emu_last_ip = 0x07BE; emu_last_length = 0x0058; emu_last_crc = 0x6F21; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x07F5; emu_last_cs = 0x1391; emu_last_ip = 0x07D1; emu_last_length = 0x0058; emu_last_crc = 0x6F21; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x2B12; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0058; emu_last_crc = 0x6F21; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_07A2_0044_FE46()
 *
 * @name f__1391_07A2_0044_FE46
 * @implements 1391:07A2:0044:FE46 ()
 *
 * Called From: 1391:0798:0058:6F21
 */
void f__1391_07A2_0044_FE46()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (emu_flags.zf) { f__1391_07B5_0031_4742(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (emu_flags.zf) { emu_ip = 0x07C8; emu_last_cs = 0x1391; emu_last_ip = 0x07BE; emu_last_length = 0x0044; emu_last_crc = 0xFE46; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x07F5; emu_last_cs = 0x1391; emu_last_ip = 0x07D1; emu_last_length = 0x0044; emu_last_crc = 0xFE46; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x2B12; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0044; emu_last_crc = 0xFE46; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_07B5_0031_4742()
 *
 * @name f__1391_07B5_0031_4742
 * @implements 1391:07B5:0031:4742 ()
 *
 * Called From: 1391:07AB:0044:FE46
 * Called From: 1391:07AB:0058:6F21
 */
void f__1391_07B5_0031_4742()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (emu_flags.zf) { f__1391_07C8_001E_E865(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_EDF2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x2B12; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0031; emu_last_crc = 0x4742; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_07C8_001E_E865()
 *
 * @name f__1391_07C8_001E_E865
 * @implements 1391:07C8:001E:E865 ()
 *
 * Called From: 1391:07BE:0031:4742
 */
void f__1391_07C8_001E_E865()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_EDF2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x2B12; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x001E; emu_last_crc = 0xE865; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1391_07F5_0023_EDF2()
 *
 * @name f__1391_07F5_0023_EDF2
 * @implements 1391:07F5:0023:EDF2 ()
 *
 * Called From: 1391:0772:0009:0CD9
 * Called From: 1391:07D1:001E:E865
 * Called From: 1391:07D1:0031:4742
 */
void f__1391_07F5_0023_EDF2()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__1391_082A_000A_7779(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0818_001C_2037(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	f__1391_0820_0014_BA3A(); return;
}

/**
 * Decompiled function f__1391_0818_001C_2037()
 *
 * @name f__1391_0818_001C_2037
 * @implements 1391:0818:001C:2037 ()
 *
 * Called From: 1391:0812:0023:EDF2
 */
void f__1391_0818_001C_2037()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1391_0834_0015_BC89();
}

/**
 * Decompiled function f__1391_0820_0014_BA3A()
 *
 * @name f__1391_0820_0014_BA3A
 * @implements 1391:0820:0014:BA3A ()
 *
 * Called From: 1391:0816:0023:EDF2
 */
void f__1391_0820_0014_BA3A()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1391_0834_0015_BC89();
}

/**
 * Decompiled function f__1391_082A_000A_7779()
 *
 * @name f__1391_082A_000A_7779
 * @implements 1391:082A:000A:7779 ()
 *
 * Called From: 1391:07F9:0023:EDF2
 */
void f__1391_082A_000A_7779()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	f__1391_0834_0015_BC89();
}

/**
 * Decompiled function f__1391_0834_0015_BC89()
 *
 * @name f__1391_0834_0015_BC89
 * @implements 1391:0834:0015:BC89 ()
 *
 * Called From: 1391:04E7:0003:0666
 * Called From: 1391:0834:000A:7779
 * Called From: 1391:0834:0014:BA3A
 * Called From: 1391:0834:001C:2037
 */
void f__1391_0834_0015_BC89()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x394C));
	if (emu_flags.zf) { f__1391_0849_0006_137A(); return; }
	f__1391_04EA_0009_0C7D(); return;
}

/**
 * Decompiled function f__1391_0849_0006_137A()
 *
 * @name f__1391_0849_0006_137A
 * @implements 1391:0849:0006:137A ()
 *
 * Called From: 1391:0844:0015:BC89
 */
void f__1391_0849_0006_137A()
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
