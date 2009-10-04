/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1391_000A_0035_2CB6()
 *
 * @name f__1391_000A_0035_2CB6
 * @implements 1391:000A:0035:2CB6 ()
 *
 * Called From: 0642:03CC:0005:ED74
 */
void f__1391_000A_0035_2CB6()
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
	if (emu_flags.zf) { f__1391_003F_00C8_12AA(); return; }
	f__1391_0849_0006_F7CE(); return;
}

/**
 * Decompiled function f__1391_003F_00C8_12AA()
 *
 * @name f__1391_003F_00C8_12AA
 * @implements 1391:003F:00C8:12AA ()
 *
 * Called From: 1391:003A:0035:2CB6
 */
void f__1391_003F_00C8_12AA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6088));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6086));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_006E_0099_5702(); return; }
	if (!emu_flags.zf) { f__1391_0054_00B3_890D(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_006E_0099_5702(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x0079; emu_last_length = 0x00C8; emu_last_crc = 0x12AA; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_0083_0084_0CD3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00B2_0055_86F4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_86F4(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x0090; emu_last_length = 0x00C8; emu_last_crc = 0x12AA; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_86F4(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x00C8; emu_last_crc = 0x12AA; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x00C8; emu_last_crc = 0x12AA; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_4CCC(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_AA2F(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x00C8; emu_last_crc = 0x12AA; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x00C8; emu_last_crc = 0x12AA; emu_call();
}

/**
 * Decompiled function f__1391_0054_00B3_890D()
 *
 * @name f__1391_0054_00B3_890D
 * @implements 1391:0054:00B3:890D ()
 *
 * Called From: 1391:004C:00C8:12AA
 */
void f__1391_0054_00B3_890D()
{
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x0079; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_0083_0084_0CD3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x0081; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x008E; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x0090; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x00B2; emu_last_cs = 0x1391; emu_last_ip = 0x0096; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00C5; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00EC; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00F4; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0107; emu_last_cs = 0x1391; emu_last_ip = 0x0100; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x00B3; emu_last_crc = 0x890D; emu_call();
}

/**
 * Decompiled function f__1391_006E_0099_5702()
 *
 * @name f__1391_006E_0099_5702
 * @implements 1391:006E:0099:5702 ()
 *
 * Called From: 1391:004A:00C8:12AA
 * Called From: 1391:0052:00C8:12AA
 */
void f__1391_006E_0099_5702()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38C2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38C0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_86F4(); return; }
	if (!emu_flags.zf) { f__1391_0083_0084_0CD3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00B2_0055_86F4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_86F4(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0098; emu_last_cs = 0x1391; emu_last_ip = 0x0090; emu_last_length = 0x0099; emu_last_crc = 0x5702; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_86F4(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x0099; emu_last_crc = 0x5702; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C7; emu_last_cs = 0x1391; emu_last_ip = 0x00BF; emu_last_length = 0x0099; emu_last_crc = 0x5702; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_4CCC(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_AA2F(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x0099; emu_last_crc = 0x5702; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0099; emu_last_crc = 0x5702; emu_call();
}

/**
 * Decompiled function f__1391_0083_0084_0CD3()
 *
 * @name f__1391_0083_0084_0CD3
 * @implements 1391:0083:0084:0CD3 ()
 *
 * Called From: 1391:007B:0099:5702
 * Called From: 1391:007B:00C8:12AA
 * Called From: 1391:007B:00B3:890D
 */
void f__1391_0083_0084_0CD3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x608C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00B2_0055_86F4(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__1391_0098_006F_AC38(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!emu_flags.cf) { f__1391_00B2_0055_86F4(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x0084; emu_last_crc = 0x0CD3; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_00C7_0040_3A20(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_4CCC(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_AA2F(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x0084; emu_last_crc = 0x0CD3; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0084; emu_last_crc = 0x0CD3; emu_call();
}

/**
 * Decompiled function f__1391_0098_006F_AC38()
 *
 * @name f__1391_0098_006F_AC38
 * @implements 1391:0098:006F:AC38 ()
 *
 * Called From: 1391:0090:0084:0CD3
 */
void f__1391_0098_006F_AC38()
{
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00E1; emu_last_cs = 0x1391; emu_last_ip = 0x00BD; emu_last_length = 0x006F; emu_last_crc = 0xAC38; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_00C7_0040_3A20(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_4CCC(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00EC; emu_last_length = 0x006F; emu_last_crc = 0xAC38; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00F6; emu_last_cs = 0x1391; emu_last_ip = 0x00EE; emu_last_length = 0x006F; emu_last_crc = 0xAC38; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0107; emu_last_cs = 0x1391; emu_last_ip = 0x0100; emu_last_length = 0x006F; emu_last_crc = 0xAC38; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x006F; emu_last_crc = 0xAC38; emu_call();
}

/**
 * Decompiled function f__1391_00B2_0055_86F4()
 *
 * @name f__1391_00B2_0055_86F4
 * @implements 1391:00B2:0055:86F4 ()
 *
 * Called From: 1391:0079:0099:5702
 * Called From: 1391:0081:0099:5702
 * Called From: 1391:0081:00C8:12AA
 * Called From: 1391:008E:0099:5702
 * Called From: 1391:008E:00C8:12AA
 * Called From: 1391:008E:0084:0CD3
 * Called From: 1391:0096:0084:0CD3
 * Called From: 1391:0096:0099:5702
 * Called From: 1391:0096:00C8:12AA
 */
void f__1391_00B2_0055_86F4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6090));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x608E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_00E1_0026_4CCC(); return; }
	if (!emu_flags.zf) { f__1391_00C7_0040_3A20(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_00E1_0026_4CCC(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_AA2F(); return; }
	if (!emu_flags.zf) { f__1391_00F6_0011_EC7E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0055; emu_last_crc = 0x86F4; emu_call();
}

/**
 * Decompiled function f__1391_00C7_0040_3A20()
 *
 * @name f__1391_00C7_0040_3A20
 * @implements 1391:00C7:0040:3A20 ()
 *
 * Called From: 1391:00BF:006F:AC38
 * Called From: 1391:00BF:0084:0CD3
 * Called From: 1391:00BF:0055:86F4
 */
void f__1391_00C7_0040_3A20()
{
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x011F; emu_last_cs = 0x1391; emu_last_ip = 0x00EC; emu_last_length = 0x0040; emu_last_crc = 0x3A20; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_00F6_0011_EC7E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0040; emu_last_crc = 0x3A20; emu_call();
}

/**
 * Decompiled function f__1391_00E1_0026_4CCC()
 *
 * @name f__1391_00E1_0026_4CCC
 * @implements 1391:00E1:0026:4CCC ()
 *
 * Called From: 1391:00BD:0055:86F4
 * Called From: 1391:00C5:0055:86F4
 * Called From: 1391:00C5:0084:0CD3
 * Called From: 1391:00C5:0099:5702
 * Called From: 1391:00C5:00C8:12AA
 * Called From: 1391:00C5:006F:AC38
 */
void f__1391_00E1_0026_4CCC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6094));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6092));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_011F_00A8_AA2F(); return; }
	if (!emu_flags.zf) { f__1391_00F6_0011_EC7E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_011F_00A8_AA2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0026; emu_last_crc = 0x4CCC; emu_call();
}

/**
 * Decompiled function f__1391_00F6_0011_EC7E()
 *
 * @name f__1391_00F6_0011_EC7E
 * @implements 1391:00F6:0011:EC7E ()
 *
 * Called From: 1391:00EE:0026:4CCC
 * Called From: 1391:00EE:0040:3A20
 * Called From: 1391:00EE:0055:86F4
 */
void f__1391_00F6_0011_EC7E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__1391_0107_00C0_28C2(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	/* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x1391; emu_last_ip = 0x0105; emu_last_length = 0x0011; emu_last_crc = 0xEC7E; emu_call();
}

/**
 * Decompiled function f__1391_0107_00C0_28C2()
 *
 * @name f__1391_0107_00C0_28C2
 * @implements 1391:0107:00C0:28C2 ()
 *
 * Called From: 1391:0100:0011:EC7E
 * Called From: 1391:0100:0026:4CCC
 * Called From: 1391:0100:0055:86F4
 * Called From: 1391:0100:0099:5702
 * Called From: 1391:0100:00C8:12AA
 * Called From: 1391:0100:0084:0CD3
 * Called From: 1391:0100:0040:3A20
 */
void f__1391_0107_00C0_28C2()
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x014D; emu_last_cs = 0x1391; emu_last_ip = 0x012A; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_0134_0093_0398(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_014D_007A_153C(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x017B; emu_last_cs = 0x1391; emu_last_ip = 0x0158; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0162; emu_last_cs = 0x1391; emu_last_ip = 0x015A; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_FA99(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_4FD0(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x00C0; emu_last_crc = 0x28C2; emu_call();
}

/**
 * Decompiled function f__1391_011F_00A8_AA2F()
 *
 * @name f__1391_011F_00A8_AA2F
 * @implements 1391:011F:00A8:AA2F ()
 *
 * Called From: 1391:00EC:0026:4CCC
 * Called From: 1391:00EC:0055:86F4
 * Called From: 1391:00EC:0084:0CD3
 * Called From: 1391:00EC:0099:5702
 * Called From: 1391:00EC:00C8:12AA
 * Called From: 1391:00F4:0026:4CCC
 * Called From: 1391:00F4:0055:86F4
 * Called From: 1391:00F4:0084:0CD3
 * Called From: 1391:00F4:0099:5702
 * Called From: 1391:00F4:00C8:12AA
 * Called From: 1391:00F4:0040:3A20
 * Called From: 1391:00F4:006F:AC38
 */
void f__1391_011F_00A8_AA2F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6098));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6096));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_014D_007A_153C(); return; }
	if (!emu_flags.zf) { f__1391_0134_0093_0398(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_014D_007A_153C(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_017B_004C_FA99(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0162; emu_last_cs = 0x1391; emu_last_ip = 0x015A; emu_last_length = 0x00A8; emu_last_crc = 0xAA2F; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_FA99(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_4FD0(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x00A8; emu_last_crc = 0xAA2F; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x00A8; emu_last_crc = 0xAA2F; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x00A8; emu_last_crc = 0xAA2F; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x00A8; emu_last_crc = 0xAA2F; emu_call();
}

/**
 * Decompiled function f__1391_0134_0093_0398()
 *
 * @name f__1391_0134_0093_0398
 * @implements 1391:0134:0093:0398 ()
 *
 * Called From: 1391:012C:00A8:AA2F
 * Called From: 1391:012C:00C0:28C2
 */
void f__1391_0134_0093_0398()
{
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x017B; emu_last_cs = 0x1391; emu_last_ip = 0x0158; emu_last_length = 0x0093; emu_last_crc = 0x0398; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_0162_0065_FF33(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_FA99(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x01AA; emu_last_cs = 0x1391; emu_last_ip = 0x0186; emu_last_length = 0x0093; emu_last_crc = 0x0398; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_0190_0037_8316(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x0093; emu_last_crc = 0x0398; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01B5; emu_last_length = 0x0093; emu_last_crc = 0x0398; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x0093; emu_last_crc = 0x0398; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x0093; emu_last_crc = 0x0398; emu_call();
}

/**
 * Decompiled function f__1391_014D_007A_153C()
 *
 * @name f__1391_014D_007A_153C
 * @implements 1391:014D:007A:153C ()
 *
 * Called From: 1391:012A:00A8:AA2F
 * Called From: 1391:0132:00A8:AA2F
 * Called From: 1391:0132:00C0:28C2
 */
void f__1391_014D_007A_153C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x609C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_017B_004C_FA99(); return; }
	if (!emu_flags.zf) { f__1391_0162_0065_FF33(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_017B_004C_FA99(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_4FD0(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x007A; emu_last_crc = 0x153C; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x007A; emu_last_crc = 0x153C; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x007A; emu_last_crc = 0x153C; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x007A; emu_last_crc = 0x153C; emu_call();
}

/**
 * Decompiled function f__1391_0162_0065_FF33()
 *
 * @name f__1391_0162_0065_FF33
 * @implements 1391:0162:0065:FF33 ()
 *
 * Called From: 1391:015A:007A:153C
 * Called From: 1391:015A:0093:0398
 */
void f__1391_0162_0065_FF33()
{
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x01AA; emu_last_cs = 0x1391; emu_last_ip = 0x0186; emu_last_length = 0x0065; emu_last_crc = 0xFF33; emu_call(); return; }
	if (!emu_flags.zf) { f__1391_0190_0037_8316(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x0065; emu_last_crc = 0xFF33; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x0065; emu_last_crc = 0xFF33; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x0065; emu_last_crc = 0xFF33; emu_call();
}

/**
 * Decompiled function f__1391_017B_004C_FA99()
 *
 * @name f__1391_017B_004C_FA99
 * @implements 1391:017B:004C:FA99 ()
 *
 * Called From: 1391:0158:007A:153C
 * Called From: 1391:0158:00A8:AA2F
 * Called From: 1391:0160:007A:153C
 * Called From: 1391:0160:0093:0398
 * Called From: 1391:0160:00A8:AA2F
 * Called From: 1391:0160:00C0:28C2
 */
void f__1391_017B_004C_FA99()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x609E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_01AA_001D_4FD0(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0190; emu_last_cs = 0x1391; emu_last_ip = 0x0188; emu_last_length = 0x004C; emu_last_crc = 0xFA99; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1391_01AA_001D_4FD0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01B5; emu_last_length = 0x004C; emu_last_crc = 0xFA99; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x004C; emu_last_crc = 0xFA99; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x004C; emu_last_crc = 0xFA99; emu_call();
}

/**
 * Decompiled function f__1391_0190_0037_8316()
 *
 * @name f__1391_0190_0037_8316
 * @implements 1391:0190:0037:8316 ()
 *
 * Called From: 1391:0188:0065:FF33
 * Called From: 1391:0188:0093:0398
 */
void f__1391_0190_0037_8316()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x708);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x609E), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01E5; emu_last_cs = 0x1391; emu_last_ip = 0x01AE; emu_last_length = 0x0037; emu_last_crc = 0x8316; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x0037; emu_last_crc = 0x8316; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x0037; emu_last_crc = 0x8316; emu_call();
}

/**
 * Decompiled function f__1391_01AA_001D_4FD0()
 *
 * @name f__1391_01AA_001D_4FD0
 * @implements 1391:01AA:001D:4FD0 ()
 *
 * Called From: 1391:0186:004C:FA99
 * Called From: 1391:0186:007A:153C
 * Called From: 1391:0186:00A8:AA2F
 * Called From: 1391:0186:00C0:28C2
 * Called From: 1391:018E:004C:FA99
 * Called From: 1391:018E:0065:FF33
 * Called From: 1391:018E:007A:153C
 * Called From: 1391:018E:00A8:AA2F
 * Called From: 1391:018E:00C0:28C2
 * Called From: 1391:018E:0093:0398
 */
void f__1391_01AA_001D_4FD0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38FE), 0x0);
	if (emu_flags.zf) { f__1391_01E5_0012_F977(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_addw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x01C2; emu_last_length = 0x001D; emu_last_crc = 0x4FD0; emu_call();
	/* Unresolved jump */ emu_ip = 0x01C7; emu_last_cs = 0x1391; emu_last_ip = 0x01C7; emu_last_length = 0x001D; emu_last_crc = 0x4FD0; emu_call();
}

/**
 * Decompiled function f__1391_01E5_0012_F977()
 *
 * @name f__1391_01E5_0012_F977
 * @implements 1391:01E5:0012:F977 ()
 *
 * Called From: 1391:01AE:001D:4FD0
 * Called From: 1391:01AE:004C:FA99
 * Called From: 1391:01B5:001D:4FD0
 * Called From: 1391:01B5:0037:8316
 * Called From: 1391:01B5:007A:153C
 * Called From: 1391:01B5:00A8:AA2F
 * Called From: 1391:01B5:00C0:28C2
 * Called From: 1391:01B5:0065:FF33
 */
void f__1391_01E5_0012_F977()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__1391_0230_0009_D032(); return; }
	emu_movw(&emu_ax.x, 0x1A);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__1391_01F7_0031_36C0();
}

/**
 * Decompiled function f__1391_01F7_0031_36C0()
 *
 * @name f__1391_01F7_0031_36C0
 * @implements 1391:01F7:0031:36C0 ()
 *
 * Called From: 1391:01F7:0012:F977
 */
void f__1391_01F7_0031_36C0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x97E7), 0x0);
	if (emu_flags.zf) { f__1391_0230_0009_D032(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x97E7), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_0230_0009_D032(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x97E7), 0xFF);
	if (!emu_flags.zf) { f__1391_0228_0011_014A(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x97E7), 0x1);
	f__1391_0230_0009_D032(); return;
}

/**
 * Decompiled function f__1391_0228_0011_014A()
 *
 * @name f__1391_0228_0011_014A
 * @implements 1391:0228:0011:014A ()
 *
 * Called From: 1391:021A:0031:36C0
 */
void f__1391_0228_0011_014A()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_incw(&emu_get_memory16(emu_ds, emu_bx.x,  0x97E7));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__1391_0239_0019_F809(); return; }
	f__1391_0465_0031_20D9(); return;
}

/**
 * Decompiled function f__1391_0230_0009_D032()
 *
 * @name f__1391_0230_0009_D032
 * @implements 1391:0230:0009:D032 ()
 *
 * Called From: 1391:01E9:0012:F977
 * Called From: 1391:0204:0031:36C0
 * Called From: 1391:020F:0031:36C0
 * Called From: 1391:0226:0031:36C0
 */
void f__1391_0230_0009_D032()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__1391_0239_0019_F809(); return; }
	f__1391_0465_0031_20D9(); return;
}

/**
 * Decompiled function f__1391_0239_0019_F809()
 *
 * @name f__1391_0239_0019_F809
 * @implements 1391:0239:0019:F809 ()
 *
 * Called From: 1391:0234:0009:D032
 * Called From: 1391:0234:0011:014A
 */
void f__1391_0239_0019_F809()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__1391_045D_0008_D28D(); return;
}

/**
 * Decompiled function f__1391_0252_0013_2798()
 *
 * @name f__1391_0252_0013_2798
 * @implements 1391:0252:0013:2798 ()
 *
 * Called From: 1391:0462:0008:D28D
 * Called From: 1391:0462:0009:52AE
 */
void f__1391_0252_0013_2798()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D43), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0265; emu_last_cs = 0x1391; emu_last_ip = 0x0260; emu_last_length = 0x0013; emu_last_crc = 0x2798; emu_call(); return; }
	f__1391_045C_0009_52AE(); return;
}

/**
 * Decompiled function f__1391_045C_0009_52AE()
 *
 * @name f__1391_045C_0009_52AE
 * @implements 1391:045C:0009:52AE ()
 *
 * Called From: 1391:0262:0013:2798
 */
void f__1391_045C_0009_52AE()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__1391_0465_0031_20D9(); return; }
	f__1391_0252_0013_2798(); return;
}

/**
 * Decompiled function f__1391_045D_0008_D28D()
 *
 * @name f__1391_045D_0008_D28D
 * @implements 1391:045D:0008:D28D ()
 *
 * Called From: 1391:024F:0019:F809
 */
void f__1391_045D_0008_D28D()
{
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0465; emu_last_cs = 0x1391; emu_last_ip = 0x0460; emu_last_length = 0x0008; emu_last_crc = 0xD28D; emu_call(); return; }
	f__1391_0252_0013_2798(); return;
}

/**
 * Decompiled function f__1391_0465_0031_20D9()
 *
 * @name f__1391_0465_0031_20D9
 * @implements 1391:0465:0031:20D9 ()
 *
 * Called From: 1391:0236:0009:D032
 * Called From: 1391:0236:0011:014A
 * Called From: 1391:0460:0009:52AE
 */
void f__1391_0465_0031_20D9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1391_0496_0018_8B16(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	if (!emu_flags.cf) { f__1391_0494_0002_E3BA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	f__1391_04DD_000A_2ECE(); return;
}

/**
 * Decompiled function f__1391_0494_0002_E3BA()
 *
 * @name f__1391_0494_0002_E3BA
 * @implements 1391:0494:0002:E3BA ()
 *
 * Called From: 1391:0482:0031:20D9
 */
void f__1391_0494_0002_E3BA()
{
	f__1391_04DD_000A_2ECE(); return;
}

/**
 * Decompiled function f__1391_0496_0018_8B16()
 *
 * @name f__1391_0496_0018_8B16
 * @implements 1391:0496:0018:8B16 ()
 *
 * Called From: 1391:0470:0031:20D9
 */
void f__1391_0496_0018_8B16()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04AE_0024_200D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	f__1391_04B1_0021_2689(); return;
}

/**
 * Decompiled function f__1391_04AE_0024_200D()
 *
 * @name f__1391_04AE_0024_200D
 * @implements 1391:04AE:0024:200D ()
 *
 * Called From: 1391:04A2:0018:8B16
 */
void f__1391_04AE_0024_200D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04DD_000A_2ECE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x91);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1391_04D2_0008_A466();
}

/**
 * Decompiled function f__1391_04B1_0021_2689()
 *
 * @name f__1391_04B1_0021_2689
 * @implements 1391:04B1:0021:2689 ()
 *
 * Called From: 1391:04AC:0018:8B16
 */
void f__1391_04B1_0021_2689()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_04DD_000A_2ECE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x91);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1391_04D2_0008_A466();
}

/**
 * Decompiled function f__1391_04D2_0008_A466()
 *
 * @name f__1391_04D2_0008_A466
 * @implements 1391:04D2:0008:A466 ()
 *
 * Called From: 1391:04D2:0024:200D
 * Called From: 1391:04D2:0021:2689
 */
void f__1391_04D2_0008_A466()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__1391_04DA_000D_FA8A();
}

/**
 * Decompiled function f__1391_04DA_000D_FA8A()
 *
 * @name f__1391_04DA_000D_FA8A
 * @implements 1391:04DA:000D:FA8A ()
 *
 * Called From: 1391:04DA:0008:A466
 */
void f__1391_04DA_000D_FA8A()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04E7); emu_cs = 0x10BE; emu_House_FindFirst();
	f__1391_04E7_0003_9CB2();
}

/**
 * Decompiled function f__1391_04DD_000A_2ECE()
 *
 * @name f__1391_04DD_000A_2ECE
 * @implements 1391:04DD:000A:2ECE ()
 *
 * Called From: 1391:0494:0002:E3BA
 * Called From: 1391:0494:0031:20D9
 * Called From: 1391:04BB:0024:200D
 * Called From: 1391:04BB:0021:2689
 */
void f__1391_04DD_000A_2ECE()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04E7); emu_cs = 0x10BE; emu_House_FindFirst();
	f__1391_04E7_0003_9CB2();
}

/**
 * Decompiled function f__1391_04E7_0003_9CB2()
 *
 * @name f__1391_04E7_0003_9CB2
 * @implements 1391:04E7:0003:9CB2 ()
 *
 * Called From: 1391:04E7:000A:2ECE
 * Called From: 1391:04E7:000D:FA8A
 */
void f__1391_04E7_0003_9CB2()
{
	f__1391_0834_0015_9C95(); return;
}

/**
 * Decompiled function f__1391_04EA_0009_911F()
 *
 * @name f__1391_04EA_0009_911F
 * @implements 1391:04EA:0009:911F ()
 *
 * Called From: 1391:0846:0015:9C95
 */
void f__1391_04EA_0009_911F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1391_04F3_0018_C01F(); return; }
	f__1391_059C_0012_3EDC(); return;
}

/**
 * Decompiled function f__1391_04F3_0018_C01F()
 *
 * @name f__1391_04F3_0018_C01F
 * @implements 1391:04F3:0018:C01F ()
 *
 * Called From: 1391:04EE:0009:911F
 */
void f__1391_04F3_0018_C01F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1391_050B_001E_F492(); return; }
	f__1391_059C_0012_3EDC(); return;
}

/**
 * Decompiled function f__1391_050B_001E_F492()
 *
 * @name f__1391_050B_001E_F492
 * @implements 1391:050B:001E:F492 ()
 *
 * Called From: 1391:0506:0018:C01F
 */
void f__1391_050B_001E_F492()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_051F_000A_0BF8(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0529; emu_last_cs = 0x1391; emu_last_ip = 0x0523; emu_last_length = 0x001E; emu_last_crc = 0xF492; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1391_052C_0029_B3B9(); return;
}

/**
 * Decompiled function f__1391_051F_000A_0BF8()
 *
 * @name f__1391_051F_000A_0BF8
 * @implements 1391:051F:000A:0BF8 ()
 *
 * Called From: 1391:0517:001E:F492
 */
void f__1391_051F_000A_0BF8()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0529_002C_37BF(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x052C; emu_last_cs = 0x1391; emu_last_ip = 0x0527; emu_last_length = 0x000A; emu_last_crc = 0x0BF8; emu_call();
}

/**
 * Decompiled function f__1391_0529_002C_37BF()
 *
 * @name f__1391_0529_002C_37BF
 * @implements 1391:0529:002C:37BF ()
 *
 * Called From: 1391:0523:000A:0BF8
 */
void f__1391_0529_002C_37BF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B4));
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	if (!emu_flags.zf) { f__1391_0573_001E_0E5D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x053A; emu_last_length = 0x002C; emu_last_crc = 0x37BF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x0545; emu_last_length = 0x002C; emu_last_crc = 0x37BF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x34C1; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x0550; emu_last_length = 0x002C; emu_last_crc = 0x37BF; emu_call();
	/* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x1391; emu_last_ip = 0x0555; emu_last_length = 0x002C; emu_last_crc = 0x37BF; emu_call();
}

/**
 * Decompiled function f__1391_052C_0029_B3B9()
 *
 * @name f__1391_052C_0029_B3B9
 * @implements 1391:052C:0029:B3B9 ()
 *
 * Called From: 1391:0527:001E:F492
 */
void f__1391_052C_0029_B3B9()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x0533; emu_last_length = 0x0029; emu_last_crc = 0xB3B9; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1391_0573_001E_0E5D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0573; emu_last_cs = 0x1391; emu_last_ip = 0x0545; emu_last_length = 0x0029; emu_last_crc = 0xB3B9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0555); emu_cs = 0x34C1; emu_ip = 0x002A; emu_last_cs = 0x1391; emu_last_ip = 0x0550; emu_last_length = 0x0029; emu_last_crc = 0xB3B9; emu_call();
	/* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x1391; emu_last_ip = 0x0555; emu_last_length = 0x0029; emu_last_crc = 0xB3B9; emu_call();
}

/**
 * Decompiled function f__1391_0573_001E_0E5D()
 *
 * @name f__1391_0573_001E_0E5D
 * @implements 1391:0573:001E:0E5D ()
 *
 * Called From: 1391:0533:002C:37BF
 * Called From: 1391:053A:0029:B3B9
 */
void f__1391_0573_001E_0E5D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x64);
	if (!emu_flags.cf) { f__1391_059C_0012_3EDC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	if (emu_flags.zf) { f__1391_059C_0012_3EDC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14B);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0x1391; emu_last_ip = 0x058C; emu_last_length = 0x001E; emu_last_crc = 0x0E5D; emu_call();
	/* Unresolved jump */ emu_ip = 0x0591; emu_last_cs = 0x1391; emu_last_ip = 0x0591; emu_last_length = 0x001E; emu_last_crc = 0x0E5D; emu_call();
}

/**
 * Decompiled function f__1391_059C_0012_3EDC()
 *
 * @name f__1391_059C_0012_3EDC
 * @implements 1391:059C:0012:3EDC ()
 *
 * Called From: 1391:04F0:0009:911F
 * Called From: 1391:0508:0018:C01F
 * Called From: 1391:057C:001E:0E5D
 * Called From: 1391:0583:001E:0E5D
 */
void f__1391_059C_0012_3EDC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__1391_05AF_000E_330E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x1A34; f__1A34_21E0_001A_547E();
	f__1391_05AE_000F_810E();
}

/**
 * Decompiled function f__1391_05AE_000F_810E()
 *
 * @name f__1391_05AE_000F_810E
 * @implements 1391:05AE:000F:810E ()
 *
 * Called From: 1391:05AE:0012:3EDC
 */
void f__1391_05AE_000F_810E()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05BD; emu_last_cs = 0x1391; emu_last_ip = 0x05B8; emu_last_length = 0x000F; emu_last_crc = 0x810E; emu_call(); return; }
	f__1391_076C_0009_D115(); return;
}

/**
 * Decompiled function f__1391_05AF_000E_330E()
 *
 * @name f__1391_05AF_000E_330E
 * @implements 1391:05AF:000E:330E ()
 *
 * Called From: 1391:05A0:0012:3EDC
 */
void f__1391_05AF_000E_330E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFF);
	if (!emu_flags.zf) { f__1391_05BD_0009_5194(); return; }
	f__1391_076C_0009_D115(); return;
}

/**
 * Decompiled function f__1391_05BD_0009_5194()
 *
 * @name f__1391_05BD_0009_5194
 * @implements 1391:05BD:0009:5194 ()
 *
 * Called From: 1391:05B8:000E:330E
 */
void f__1391_05BD_0009_5194()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05C6; emu_last_cs = 0x1391; emu_last_ip = 0x05C1; emu_last_length = 0x0009; emu_last_crc = 0x5194; emu_call(); return; }
	f__1391_076C_0009_D115(); return;
}

/**
 * Decompiled function f__1391_076C_0009_D115()
 *
 * @name f__1391_076C_0009_D115
 * @implements 1391:076C:0009:D115 ()
 *
 * Called From: 1391:05BA:000F:810E
 * Called From: 1391:05BA:000E:330E
 * Called From: 1391:05C3:0009:5194
 */
void f__1391_076C_0009_D115()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__1391_0775_000C_2418(); return; }
	f__1391_07F5_0023_F0F1(); return;
}

/**
 * Decompiled function f__1391_0775_000C_2418()
 *
 * @name f__1391_0775_000C_2418
 * @implements 1391:0775:000C:2418 ()
 *
 * Called From: 1391:0770:0009:D115
 */
void f__1391_0775_000C_2418()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0781); emu_cs = 0x0C3A; f__0C3A_1F70_0010_8DB3();
	f__1391_0781_000D_5BF0();
}

/**
 * Decompiled function f__1391_0781_000D_5BF0()
 *
 * @name f__1391_0781_000D_5BF0
 * @implements 1391:0781:000D:5BF0 ()
 *
 * Called From: 1391:0781:000C:2418
 */
void f__1391_0781_000D_5BF0()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x078E); emu_cs = 0x0C3A; f__0C3A_20DB_0011_DA16();
	f__1391_078E_0058_0894();
}

/**
 * Decompiled function f__1391_078E_0058_0894()
 *
 * @name f__1391_078E_0058_0894
 * @implements 1391:078E:0058:0894 ()
 *
 * Called From: 1391:078E:000D:5BF0
 */
void f__1391_078E_0058_0894()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x0);
	if (emu_flags.zf) { f__1391_07A2_0044_44DB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (emu_flags.zf) { f__1391_07B5_0031_AC71(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07C8; emu_last_cs = 0x1391; emu_last_ip = 0x07BE; emu_last_length = 0x0058; emu_last_crc = 0x0894; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x07F5; emu_last_cs = 0x1391; emu_last_ip = 0x07D1; emu_last_length = 0x0058; emu_last_crc = 0x0894; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0058; emu_last_crc = 0x0894; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x0058; emu_last_crc = 0x0894; emu_call();
}

/**
 * Decompiled function f__1391_07A2_0044_44DB()
 *
 * @name f__1391_07A2_0044_44DB
 * @implements 1391:07A2:0044:44DB ()
 *
 * Called From: 1391:0798:0058:0894
 */
void f__1391_07A2_0044_44DB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (emu_flags.zf) { f__1391_07B5_0031_AC71(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07C8; emu_last_cs = 0x1391; emu_last_ip = 0x07BE; emu_last_length = 0x0044; emu_last_crc = 0x44DB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x07F5; emu_last_cs = 0x1391; emu_last_ip = 0x07D1; emu_last_length = 0x0044; emu_last_crc = 0x44DB; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0044; emu_last_crc = 0x44DB; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x0044; emu_last_crc = 0x44DB; emu_call();
}

/**
 * Decompiled function f__1391_07B5_0031_AC71()
 *
 * @name f__1391_07B5_0031_AC71
 * @implements 1391:07B5:0031:AC71 ()
 *
 * Called From: 1391:07AB:0044:44DB
 * Called From: 1391:07AB:0058:0894
 */
void f__1391_07B5_0031_AC71()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (emu_flags.zf) { f__1391_07C8_001E_E4B4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_F0F1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x0031; emu_last_crc = 0xAC71; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x0031; emu_last_crc = 0xAC71; emu_call();
}

/**
 * Decompiled function f__1391_07C8_001E_E4B4()
 *
 * @name f__1391_07C8_001E_E4B4
 * @implements 1391:07C8:001E:E4B4 ()
 *
 * Called From: 1391:07BE:0031:AC71
 */
void f__1391_07C8_001E_E4B4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_07F5_0023_F0F1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; emu_ip = 0x232C; emu_last_cs = 0x1391; emu_last_ip = 0x07E1; emu_last_length = 0x001E; emu_last_crc = 0xE4B4; emu_call();
	/* Unresolved jump */ emu_ip = 0x07E6; emu_last_cs = 0x1391; emu_last_ip = 0x07E6; emu_last_length = 0x001E; emu_last_crc = 0xE4B4; emu_call();
}

/**
 * Decompiled function f__1391_07F5_0023_F0F1()
 *
 * @name f__1391_07F5_0023_F0F1
 * @implements 1391:07F5:0023:F0F1 ()
 *
 * Called From: 1391:0772:0009:D115
 * Called From: 1391:07D1:001E:E4B4
 * Called From: 1391:07D1:0031:AC71
 */
void f__1391_07F5_0023_F0F1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__1391_082A_000A_FEA0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__1391_0818_001C_4160(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	f__1391_0820_0014_2438(); return;
}

/**
 * Decompiled function f__1391_0818_001C_4160()
 *
 * @name f__1391_0818_001C_4160
 * @implements 1391:0818:001C:4160 ()
 *
 * Called From: 1391:0812:0023:F0F1
 */
void f__1391_0818_001C_4160()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	f__1391_0834_0015_9C95();
}

/**
 * Decompiled function f__1391_0820_0014_2438()
 *
 * @name f__1391_0820_0014_2438
 * @implements 1391:0820:0014:2438 ()
 *
 * Called From: 1391:0816:0023:F0F1
 */
void f__1391_0820_0014_2438()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	f__1391_0834_0015_9C95();
}

/**
 * Decompiled function f__1391_082A_000A_FEA0()
 *
 * @name f__1391_082A_000A_FEA0
 * @implements 1391:082A:000A:FEA0 ()
 *
 * Called From: 1391:07F9:0023:F0F1
 */
void f__1391_082A_000A_FEA0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x10BE; emu_House_FindNext();
	f__1391_0834_0015_9C95();
}

/**
 * Decompiled function f__1391_0834_0015_9C95()
 *
 * @name f__1391_0834_0015_9C95
 * @implements 1391:0834:0015:9C95 ()
 *
 * Called From: 1391:04E7:0003:9CB2
 * Called From: 1391:0834:000A:FEA0
 * Called From: 1391:0834:0014:2438
 * Called From: 1391:0834:001C:4160
 */
void f__1391_0834_0015_9C95()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x394C));
	if (emu_flags.zf) { f__1391_0849_0006_F7CE(); return; }
	f__1391_04EA_0009_911F(); return;
}

/**
 * Decompiled function f__1391_0849_0006_F7CE()
 *
 * @name f__1391_0849_0006_F7CE
 * @implements 1391:0849:0006:F7CE ()
 *
 * Called From: 1391:003C:0035:2CB6
 * Called From: 1391:0844:0015:9C95
 */
void f__1391_0849_0006_F7CE()
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
