/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__23E1_0004_0014_2BC0()
 *
 * @name f__23E1_0004_0014_2BC0
 * @implements 23E1:0004:0014:2BC0 ()
 *
 * Called From: 10E4:0362:000C:1AF8
 * Called From: 15C2:0228:000F:92A6
 * Called From: 15C2:030C:000F:92A6
 * Called From: 253D:00BB:0015:F0C0
 * Called From: 256D:006B:000F:2FE8
 * Called From: 25C4:0182:0012:C097
 * Called From: 25C4:0340:0012:BF4D
 * Called From: 2B4C:00B9:000E:CC99
 * Called From: 2B4C:0135:000E:CC99
 * Called From: B480:0164:0017:957F
 * Called From: B4B8:0EF2:001E:DC63
 * Called From: B4B8:176F:0010:D3DB
 * Called From: B4B8:1789:001A:E7C5
 * Called From: B4B8:17A2:0019:6A0B
 * Called From: B4B8:17C9:0027:C603
 * Called From: B4B8:187B:0011:B8BA
 * Called From: B4B8:1894:0019:EE0B
 * Called From: B4B8:1934:004F:3A18
 * Called From: B4B8:1C48:001D:DFBC
 * Called From: B4B8:1D26:001D:DFBC
 * Called From: B511:101A:0010:D0C5
 * Called From: B520:0125:0016:52C9
 * Called From: B520:0246:0016:54C9
 * Called From: B520:030A:00C4:DD47
 * Called From: B53B:0111:000C:1AF8
 */
void f__23E1_0004_0014_2BC0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	if (!emu_flags.zf) { f__23E1_001F_0015_7A84(); return; }
	emu_push(emu_cs);
	emu_push(0x0018); f__23E1_0334_000B_CF65();
	f__23E1_0018_001C_B654();
}

/**
 * Decompiled function f__23E1_0018_001C_B654()
 *
 * @name f__23E1_0018_001C_B654
 * @implements 23E1:0018:001C:B654 ()
 *
 * Called From: 23E1:0018:0014:2BC0
 */
void f__23E1_0018_001C_B654()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66FA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F8), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x40);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0040; emu_last_cs = 0x23E1; emu_last_ip = 0x0024; emu_last_length = 0x001C; emu_last_crc = 0xB654; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2649; f__2649_0336_004C_0948();
	f__23E1_0034_000C_E591();
}

/**
 * Decompiled function f__23E1_001F_0015_7A84()
 *
 * @name f__23E1_001F_0015_7A84
 * @implements 23E1:001F:0015:7A84 ()
 *
 * Called From: 23E1:0011:0014:2BC0
 */
void f__23E1_001F_0015_7A84()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x40);
	if (emu_flags.zf) { f__23E1_0040_0018_62EC(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2649; emu_ip = 0x0336; emu_last_cs = 0x23E1; emu_last_ip = 0x002F; emu_last_length = 0x0015; emu_last_crc = 0x7A84; emu_call();
	f__23E1_0034_000C_E591();
}

/**
 * Decompiled function f__23E1_0034_000C_E591()
 *
 * @name f__23E1_0034_000C_E591
 * @implements 23E1:0034:000C:E591 ()
 *
 * Called From: 23E1:0034:001C:B654
 */
void f__23E1_0034_000C_E591()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	f__23E1_01B1_000D_78E8(); return;
}

/**
 * Decompiled function f__23E1_0040_0018_62EC()
 *
 * @name f__23E1_0040_0018_62EC
 * @implements 23E1:0040:0018:62EC ()
 *
 * Called From: 23E1:0024:0015:7A84
 */
void f__23E1_0040_0018_62EC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x20);
	if (emu_flags.zf) { f__23E1_0058_000C_12F7(); return; }
	emu_movw(&emu_ax, 0x10);
	f__23E1_005B_0009_3977(); return;
}

/**
 * Decompiled function f__23E1_0058_000C_12F7()
 *
 * @name f__23E1_0058_000C_12F7
 * @implements 23E1:0058:000C:12F7 ()
 *
 * Called From: 23E1:0051:0018:62EC
 */
void f__23E1_0058_000C_12F7()
{
	emu_movw(&emu_ax, 0x1);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	f__23E1_0066_000B_8D1F(); return;
}

/**
 * Decompiled function f__23E1_005B_0009_3977()
 *
 * @name f__23E1_005B_0009_3977
 * @implements 23E1:005B:0009:3977 ()
 *
 * Called From: 23E1:0056:0018:62EC
 */
void f__23E1_005B_0009_3977()
{
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	f__23E1_0066_000B_8D1F(); return;
}

/**
 * Decompiled function f__23E1_0066_000B_8D1F()
 *
 * @name f__23E1_0066_000B_8D1F
 * @implements 23E1:0066:000B:8D1F ()
 *
 * Called From: 23E1:0062:0009:3977
 * Called From: 23E1:0062:000C:12F7
 */
void f__23E1_0066_000B_8D1F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x01F7; f__01F7_1855_0053_AC2D();
	f__23E1_0071_001F_EC67();
}

/**
 * Decompiled function f__23E1_0071_001F_EC67()
 *
 * @name f__23E1_0071_001F_EC67
 * @implements 23E1:0071:001F:EC67 ()
 *
 * Called From: 23E1:0071:000B:8D1F
 */
void f__23E1_0071_001F_EC67()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0064; emu_last_cs = 0x23E1; emu_last_ip = 0x007B; emu_last_length = 0x001F; emu_last_crc = 0xEC67; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__23E1_008E_0002_C63A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x6C86));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x6C88));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0090; emu_last_cs = 0x23E1; emu_last_ip = 0x008C; emu_last_length = 0x001F; emu_last_crc = 0xEC67; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x009C; emu_last_cs = 0x23E1; emu_last_ip = 0x008E; emu_last_length = 0x001F; emu_last_crc = 0xEC67; emu_call();
}

/**
 * Decompiled function f__23E1_008E_0002_C63A()
 *
 * @name f__23E1_008E_0002_C63A
 * @implements 23E1:008E:0002:C63A ()
 *
 * Called From: 23E1:0083:001F:EC67
 */
void f__23E1_008E_0002_C63A()
{
	f__23E1_009C_000F_1B49(); return;
}

/**
 * Decompiled function f__23E1_009C_000F_1B49()
 *
 * @name f__23E1_009C_000F_1B49
 * @implements 23E1:009C:000F:1B49 ()
 *
 * Called From: 23E1:008E:0002:C63A
 */
void f__23E1_009C_000F_1B49()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__23E1_00AB_000B_6351(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x01BE; emu_last_cs = 0x23E1; emu_last_ip = 0x00A8; emu_last_length = 0x000F; emu_last_crc = 0x1B49; emu_call();
}

/**
 * Decompiled function f__23E1_00A8_0003_DDA4()
 *
 * @name f__23E1_00A8_0003_DDA4
 * @implements 23E1:00A8:0003:DDA4 ()
 *
 * Called From: 23E1:01BB:000D:78E8
 * Called From: 23E1:01BB:0021:7B82
 * Called From: 23E1:01BB:0063:2E46
 * Called From: 23E1:01BB:0049:9AC9
 */
void f__23E1_00A8_0003_DDA4()
{
	f__23E1_01BE_0004_893F(); return;
}

/**
 * Decompiled function f__23E1_00AB_000B_6351()
 *
 * @name f__23E1_00AB_000B_6351
 * @implements 23E1:00AB:000B:6351 ()
 *
 * Called From: 23E1:00A2:000F:1B49
 */
void f__23E1_00AB_000B_6351()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00B6); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__23E1_00B6_0035_5E0E();
}

/**
 * Decompiled function f__23E1_00B6_0035_5E0E()
 *
 * @name f__23E1_00B6_0035_5E0E
 * @implements 23E1:00B6:0035:5E0E ()
 *
 * Called From: 23E1:00B6:000B:6351
 */
void f__23E1_00B6_0035_5E0E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x20);
	if (emu_flags.zf) { f__23E1_00EB_001B_2FAC(); return; }
	emu_movb(&emu_al, 0xF);
	emu_subb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_dl, emu_al);
	emu_movb(&emu_al, emu_dl);
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_dl);
	emu_orb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x0), emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__23E1_00F7_000F_78DD(); return;
}

/**
 * Decompiled function f__23E1_00EB_001B_2FAC()
 *
 * @name f__23E1_00EB_001B_2FAC
 * @implements 23E1:00EB:001B:2FAC ()
 *
 * Called From: 23E1:00C3:0035:5E0E
 */
void f__23E1_00EB_001B_2FAC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if (emu_flags.zf) { f__23E1_0156_0005_F8A0(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_012D_0026_6C1D(); return;
}

/**
 * Decompiled function f__23E1_00F7_000F_78DD()
 *
 * @name f__23E1_00F7_000F_78DD
 * @implements 23E1:00F7:000F:78DD ()
 *
 * Called From: 23E1:00E9:0035:5E0E
 */
void f__23E1_00F7_000F_78DD()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if (emu_flags.zf) { f__23E1_0156_0005_F8A0(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_012D_0026_6C1D(); return;
}

/**
 * Decompiled function f__23E1_0106_0012_D6D9()
 *
 * @name f__23E1_0106_0012_D6D9
 * @implements 23E1:0106:0012:D6D9 ()
 *
 * Called From: 23E1:0137:0026:6C1D
 * Called From: 23E1:0137:003B:3097
 * Called From: 23E1:0140:003B:3097
 */
void f__23E1_0106_0012_D6D9()
{
	emu_movw(&emu_ax, 0x7D00);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0118); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__23E1_0118_003B_3097();
}

/**
 * Decompiled function f__23E1_0118_003B_3097()
 *
 * @name f__23E1_0118_003B_3097
 * @implements 23E1:0118:003B:3097 ()
 *
 * Called From: 23E1:0118:0012:D6D9
 */
void f__23E1_0118_003B_3097()
{
	emu_addws(&emu_sp, 0x8);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax, 0x7D0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_0106_0012_D6D9(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0142; emu_last_cs = 0x23E1; emu_last_ip = 0x0139; emu_last_length = 0x003B; emu_last_crc = 0x3097; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_0106_0012_D6D9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__23E1_0153_0008_5A28();
}

/**
 * Decompiled function f__23E1_012D_0026_6C1D()
 *
 * @name f__23E1_012D_0026_6C1D
 * @implements 23E1:012D:0026:6C1D ()
 *
 * Called From: 23E1:0104:000F:78DD
 * Called From: 23E1:0104:001B:2FAC
 */
void f__23E1_012D_0026_6C1D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_0106_0012_D6D9(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0142; emu_last_cs = 0x23E1; emu_last_ip = 0x0139; emu_last_length = 0x0026; emu_last_crc = 0x6C1D; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0106; emu_last_cs = 0x23E1; emu_last_ip = 0x0140; emu_last_length = 0x0026; emu_last_crc = 0x6C1D; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__23E1_0153_0008_5A28();
}

/**
 * Decompiled function f__23E1_0153_0008_5A28()
 *
 * @name f__23E1_0153_0008_5A28
 * @implements 23E1:0153:0008:5A28 ()
 *
 * Called From: 23E1:0153:003B:3097
 * Called From: 23E1:0153:0026:6C1D
 */
void f__23E1_0153_0008_5A28()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs);
	emu_push(0x015B); f__23E1_03DB_000B_CF65();
	f__23E1_015B_0063_2E46();
}

/**
 * Decompiled function f__23E1_0156_0005_F8A0()
 *
 * @name f__23E1_0156_0005_F8A0
 * @implements 23E1:0156:0005:F8A0 ()
 *
 * Called From: 23E1:00FC:001B:2FAC
 * Called From: 23E1:00FC:000F:78DD
 */
void f__23E1_0156_0005_F8A0()
{
	emu_push(emu_cs);
	emu_push(0x015B); f__23E1_03DB_000B_CF65();
	f__23E1_015B_0063_2E46();
}

/**
 * Decompiled function f__23E1_015B_0063_2E46()
 *
 * @name f__23E1_015B_0063_2E46
 * @implements 23E1:015B:0063:2E46 ()
 *
 * Called From: 23E1:015B:0008:5A28
 * Called From: 23E1:015B:0005:F8A0
 */
void f__23E1_015B_0063_2E46()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66F2));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0182; emu_last_cs = 0x23E1; emu_last_ip = 0x016B; emu_last_length = 0x0063; emu_last_crc = 0x2E46; emu_call(); return; }
	if (emu_flags.cf) { f__23E1_0175_0049_9AC9(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F0));
	if (!emu_flags.cf) { f__23E1_0182_003C_8BCB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F0), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x0193; emu_last_length = 0x0063; emu_last_crc = 0x2E46; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_019D_0021_7B82(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x019B; emu_last_length = 0x0063; emu_last_crc = 0x2E46; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_DDA4(); return;
}

/**
 * Decompiled function f__23E1_0175_0049_9AC9()
 *
 * @name f__23E1_0175_0049_9AC9
 * @implements 23E1:0175:0049:9AC9 ()
 *
 * Called From: 23E1:016D:0063:2E46
 */
void f__23E1_0175_0049_9AC9()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F0), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x0193; emu_last_length = 0x0049; emu_last_crc = 0x9AC9; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_019D_0021_7B82(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x019B; emu_last_length = 0x0049; emu_last_crc = 0x9AC9; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_DDA4(); return;
}

/**
 * Decompiled function f__23E1_0182_003C_8BCB()
 *
 * @name f__23E1_0182_003C_8BCB
 * @implements 23E1:0182:003C:8BCB ()
 *
 * Called From: 23E1:0173:0063:2E46
 */
void f__23E1_0182_003C_8BCB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	if (emu_flags.cf) { f__23E1_01B1_000D_78E8(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x019D; emu_last_cs = 0x23E1; emu_last_ip = 0x0195; emu_last_length = 0x003C; emu_last_crc = 0x8BCB; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	if ((emu_flags.cf || emu_flags.zf)) { f__23E1_01B1_000D_78E8(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x00A8; emu_last_cs = 0x23E1; emu_last_ip = 0x01BB; emu_last_length = 0x003C; emu_last_crc = 0x8BCB; emu_call();
}

/**
 * Decompiled function f__23E1_019D_0021_7B82()
 *
 * @name f__23E1_019D_0021_7B82
 * @implements 23E1:019D:0021:7B82 ()
 *
 * Called From: 23E1:0195:0049:9AC9
 * Called From: 23E1:0195:0063:2E46
 */
void f__23E1_019D_0021_7B82()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_DDA4(); return;
}

/**
 * Decompiled function f__23E1_01B1_000D_78E8()
 *
 * @name f__23E1_01B1_000D_78E8
 * @implements 23E1:01B1:000D:78E8 ()
 *
 * Called From: 23E1:003D:000C:E591
 * Called From: 23E1:0193:003C:8BCB
 * Called From: 23E1:019B:003C:8BCB
 */
void f__23E1_01B1_000D_78E8()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_DDA4(); return;
}

/**
 * Decompiled function f__23E1_01BE_0004_893F()
 *
 * @name f__23E1_01BE_0004_893F
 * @implements 23E1:01BE:0004:893F ()
 *
 * Called From: 23E1:00A8:0003:DDA4
 */
void f__23E1_01BE_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_01C2_0011_24E8()
 *
 * @name f__23E1_01C2_0011_24E8
 * @implements 23E1:01C2:0011:24E8 ()
 *
 * Called From: 0FCB:0021:0019:5047
 * Called From: 10E4:054B:0012:00C8
 * Called From: 1DD7:1732:0010:D59A
 * Called From: 1DD7:1744:0012:C80C
 * Called From: 2B4C:00FF:001B:853E
 * Called From: B4B8:17EB:000F:E497
 * Called From: B4B8:1C14:000E:5697
 * Called From: B4B8:1CE6:000E:5697
 * Called From: B4E0:00E6:000D:1817
 * Called From: B4ED:018F:0010:CD7E
 * Called From: B511:0E0A:000B:9749
 * Called From: B511:0E17:000D:4AD9
 * Called From: B511:11D1:001B:9F2E
 * Called From: B511:1467:001B:8EEC
 * Called From: B518:0A68:0027:5A8F
 * Called From: B520:022C:000E:38A3
 * Called From: B520:03B1:001B:4BEB
 * Called From: B520:03BE:000D:A2A1
 * Called From: B52A:04A1:0030:9D41
 */
void f__23E1_01C2_0011_24E8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__23E1_01D3_000B_ACDF(); return; }
	f__23E1_0252_0004_893F(); return;
}

/**
 * Decompiled function f__23E1_01D3_000B_ACDF()
 *
 * @name f__23E1_01D3_000B_ACDF
 * @implements 23E1:01D3:000B:ACDF ()
 *
 * Called From: 23E1:01CE:0011:24E8
 */
void f__23E1_01D3_000B_ACDF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01DE); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
	f__23E1_01DE_0011_2432();
}

/**
 * Decompiled function f__23E1_01DE_0011_2432()
 *
 * @name f__23E1_01DE_0011_2432
 * @implements 23E1:01DE:0011:2432 ()
 *
 * Called From: 23E1:01DE:000B:ACDF
 */
void f__23E1_01DE_0011_2432()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__23E1_01F3_0035_7AA8(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01EF); emu_cs = 0x2649; emu_ip = 0x05DF; emu_last_cs = 0x23E1; emu_last_ip = 0x01EA; emu_last_length = 0x0011; emu_last_crc = 0x2432; emu_call();
	/* Unresolved jump */ emu_ip = 0x01EF; emu_last_cs = 0x23E1; emu_last_ip = 0x01EF; emu_last_length = 0x0011; emu_last_crc = 0x2432; emu_call();
}

/**
 * Decompiled function f__23E1_01F3_0035_7AA8()
 *
 * @name f__23E1_01F3_0035_7AA8
 * @implements 23E1:01F3:0035:7AA8 ()
 *
 * Called From: 23E1:01E2:0011:2432
 */
void f__23E1_01F3_0035_7AA8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_al);
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x20);
	if (emu_flags.zf) { f__23E1_022C_000F_C150(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_ah, 0x0);
	emu_andw(&emu_ax, 0xF);
	emu_movw(&emu_dx, 0xF);
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x01F7; f__01F7_1741_001B_9E34();
	f__23E1_0228_0004_4A1F();
}

/**
 * Decompiled function f__23E1_0228_0004_4A1F()
 *
 * @name f__23E1_0228_0004_4A1F
 * @implements 23E1:0228:0004:4A1F ()
 *
 * Called From: 23E1:0228:0035:7AA8
 */
void f__23E1_0228_0004_4A1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__23E1_024E_0008_5D41(); return;
}

/**
 * Decompiled function f__23E1_022C_000F_C150()
 *
 * @name f__23E1_022C_000F_C150
 * @implements 23E1:022C:000F:C150 ()
 *
 * Called From: 23E1:0210:0035:7AA8
 */
void f__23E1_022C_000F_C150()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x023B; emu_last_cs = 0x23E1; emu_last_ip = 0x0230; emu_last_length = 0x000F; emu_last_crc = 0xC150; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_ax);
	f__23E1_0246_0006_9688(); return;
}

/**
 * Decompiled function f__23E1_0246_0006_9688()
 *
 * @name f__23E1_0246_0006_9688
 * @implements 23E1:0246:0006:9688 ()
 *
 * Called From: 23E1:0239:000F:C150
 */
void f__23E1_0246_0006_9688()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x024C); emu_cs = 0x01F7; f__01F7_1741_001B_9E34();
	f__23E1_024C_000A_CB2D();
}

/**
 * Decompiled function f__23E1_024C_000A_CB2D()
 *
 * @name f__23E1_024C_000A_CB2D
 * @implements 23E1:024C:000A:CB2D ()
 *
 * Called From: 23E1:024C:0006:9688
 */
void f__23E1_024C_000A_CB2D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_024E_0008_5D41()
 *
 * @name f__23E1_024E_0008_5D41
 * @implements 23E1:024E:0008:5D41 ()
 *
 * Called From: 23E1:022A:0004:4A1F
 */
void f__23E1_024E_0008_5D41()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_0252_0004_893F()
 *
 * @name f__23E1_0252_0004_893F
 * @implements 23E1:0252:0004:893F ()
 *
 * Called From: 23E1:01D0:0011:24E8
 */
void f__23E1_0252_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_0334_000B_CF65()
 *
 * @name f__23E1_0334_000B_CF65
 * @implements 23E1:0334:000B:CF65 ()
 *
 * Called From: 10E4:034C:0009:0D32
 * Called From: 1DB6:0182:0005:150B
 * Called From: 23E1:0015:0014:2BC0
 * Called From: 2B4C:009F:0006:590A
 * Called From: 2B4C:011B:0006:590A
 * Called From: 2B4C:011B:001C:EC2A
 * Called From: B480:0081:000C:5821
 * Called From: B53B:00FB:0009:0D32
 */
void f__23E1_0334_000B_CF65()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
	f__23E1_033F_000A_E287();
}

/**
 * Decompiled function f__23E1_033F_000A_E287()
 *
 * @name f__23E1_033F_000A_E287
 * @implements 23E1:033F:000A:E287 ()
 *
 * Called From: 23E1:033F:000B:CF65
 */
void f__23E1_033F_000A_E287()
{
	emu_cmpw(&emu_ax, 0xFFFF);
	if (!emu_flags.zf) { f__23E1_0367_0005_F70A(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x3500; emu_ip = 0x0020; emu_last_cs = 0x23E1; emu_last_ip = 0x0344; emu_last_length = 0x000A; emu_last_crc = 0xE287; emu_call();
	/* Unresolved jump */ emu_ip = 0x0349; emu_last_cs = 0x23E1; emu_last_ip = 0x0349; emu_last_length = 0x000A; emu_last_crc = 0xE287; emu_call();
}

/**
 * Decompiled function f__23E1_0367_0005_F70A()
 *
 * @name f__23E1_0367_0005_F70A
 * @implements 23E1:0367:0005:F70A ()
 *
 * Called From: 23E1:0342:000A:E287
 */
void f__23E1_0367_0005_F70A()
{
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x01F7; f__01F7_1B73_0022_8ADB();
	f__23E1_036C_0012_A59F();
}

/**
 * Decompiled function f__23E1_036C_0012_A59F()
 *
 * @name f__23E1_036C_0012_A59F
 * @implements 23E1:036C:0012:A59F ()
 *
 * Called From: 23E1:036C:0005:F70A
 */
void f__23E1_036C_0012_A59F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__23E1_03A2_000A_15E0(); return;
}

/**
 * Decompiled function f__23E1_037E_002E_5E5E()
 *
 * @name f__23E1_037E_002E_5E5E
 * @implements 23E1:037E:002E:5E5E ()
 *
 * Called From: 23E1:03B1:0025:E1A5
 */
void f__23E1_037E_002E_5E5E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__23E1_03A2_000A_15E0(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.cf) { f__23E1_03A2_000A_15E0(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0396; emu_last_cs = 0x23E1; emu_last_ip = 0x038F; emu_last_length = 0x002E; emu_last_crc = 0x5E5E; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x03A2; emu_last_cs = 0x23E1; emu_last_ip = 0x0394; emu_last_length = 0x002E; emu_last_crc = 0x5E5E; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03AC); emu_cs = 0x01F7; emu_ip = 0x1DE5; emu_last_cs = 0x23E1; emu_last_ip = 0x03A7; emu_last_length = 0x002E; emu_last_crc = 0x5E5E; emu_call();
	f__23E1_03AC_0025_E1A5();
}

/**
 * Decompiled function f__23E1_03A2_000A_15E0()
 *
 * @name f__23E1_03A2_000A_15E0
 * @implements 23E1:03A2:000A:15E0 ()
 *
 * Called From: 23E1:037C:0012:A59F
 * Called From: 23E1:0382:002E:5E5E
 * Called From: 23E1:038D:002E:5E5E
 */
void f__23E1_03A2_000A_15E0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03AC); emu_cs = 0x01F7; f__01F7_1DE5_0036_9480();
	f__23E1_03AC_0025_E1A5();
}

/**
 * Decompiled function f__23E1_03AC_0025_E1A5()
 *
 * @name f__23E1_03AC_0025_E1A5
 * @implements 23E1:03AC:0025:E1A5 ()
 *
 * Called From: 23E1:03AC:000A:15E0
 */
void f__23E1_03AC_0025_E1A5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__23E1_037E_002E_5E5E(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03D1; emu_last_cs = 0x23E1; emu_last_ip = 0x03BF; emu_last_length = 0x0025; emu_last_crc = 0xE1A5; emu_call(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__23E1_03C9_0008_CA49(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x03D1; emu_last_cs = 0x23E1; emu_last_ip = 0x03C7; emu_last_length = 0x0025; emu_last_crc = 0xE1A5; emu_call(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x03D5; emu_last_cs = 0x23E1; emu_last_ip = 0x03CF; emu_last_length = 0x0025; emu_last_crc = 0xE1A5; emu_call();
}

/**
 * Decompiled function f__23E1_03C9_0008_CA49()
 *
 * @name f__23E1_03C9_0008_CA49
 * @implements 23E1:03C9:0008:CA49 ()
 *
 * Called From: 23E1:03C1:0025:E1A5
 */
void f__23E1_03C9_0008_CA49()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_03D5_0002_C03A(); return;
}

/**
 * Decompiled function f__23E1_03D5_0002_C03A()
 *
 * @name f__23E1_03D5_0002_C03A
 * @implements 23E1:03D5:0002:C03A ()
 *
 * Called From: 23E1:03CF:0008:CA49
 */
void f__23E1_03D5_0002_C03A()
{
	f__23E1_03D7_0004_893F(); return;
}

/**
 * Decompiled function f__23E1_03D7_0004_893F()
 *
 * @name f__23E1_03D7_0004_893F
 * @implements 23E1:03D7:0004:893F ()
 *
 * Called From: 23E1:03D5:0002:C03A
 */
void f__23E1_03D7_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_03DB_000B_CF65()
 *
 * @name f__23E1_03DB_000B_CF65
 * @implements 23E1:03DB:000B:CF65 ()
 *
 * Called From: 23E1:0158:0008:5A28
 * Called From: 23E1:0158:0005:F8A0
 */
void f__23E1_03DB_000B_CF65()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
	f__23E1_03E6_000E_32CC();
}

/**
 * Decompiled function f__23E1_03E6_000E_32CC()
 *
 * @name f__23E1_03E6_000E_32CC
 * @implements 23E1:03E6:000E:32CC ()
 *
 * Called From: 23E1:03E6:000B:CF65
 */
void f__23E1_03E6_000E_32CC()
{
	emu_cmpw(&emu_ax, 0xFFFF);
	if (!emu_flags.zf) { f__23E1_0418_0005_F70A(); return; }
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x263B; emu_ip = 0x002F; emu_last_cs = 0x23E1; emu_last_ip = 0x03EF; emu_last_length = 0x000E; emu_last_crc = 0x32CC; emu_call();
	/* Unresolved jump */ emu_ip = 0x03F4; emu_last_cs = 0x23E1; emu_last_ip = 0x03F4; emu_last_length = 0x000E; emu_last_crc = 0x32CC; emu_call();
}

/**
 * Decompiled function f__23E1_0418_0005_F70A()
 *
 * @name f__23E1_0418_0005_F70A
 * @implements 23E1:0418:0005:F70A ()
 *
 * Called From: 23E1:03E9:000E:32CC
 */
void f__23E1_0418_0005_F70A()
{
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x01F7; f__01F7_1B73_0022_8ADB();
	f__23E1_041D_0012_BB9F();
}

/**
 * Decompiled function f__23E1_041D_0012_BB9F()
 *
 * @name f__23E1_041D_0012_BB9F
 * @implements 23E1:041D:0012:BB9F ()
 *
 * Called From: 23E1:041D:0005:F70A
 */
void f__23E1_041D_0012_BB9F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__23E1_0447_000A_15E0(); return;
}

/**
 * Decompiled function f__23E1_042F_0022_89AF()
 *
 * @name f__23E1_042F_0022_89AF
 * @implements 23E1:042F:0022:89AF ()
 *
 * Called From: 23E1:0456:000F:0E67
 */
void f__23E1_042F_0022_89AF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__23E1_0447_000A_15E0(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0451); emu_cs = 0x01F7; f__01F7_1DE5_0036_9480();
	f__23E1_0451_000F_0E67();
}

/**
 * Decompiled function f__23E1_0447_000A_15E0()
 *
 * @name f__23E1_0447_000A_15E0
 * @implements 23E1:0447:000A:15E0 ()
 *
 * Called From: 23E1:042D:0012:BB9F
 * Called From: 23E1:0433:0022:89AF
 */
void f__23E1_0447_000A_15E0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0451); emu_cs = 0x01F7; f__01F7_1DE5_0036_9480();
	f__23E1_0451_000F_0E67();
}

/**
 * Decompiled function f__23E1_0451_000F_0E67()
 *
 * @name f__23E1_0451_000F_0E67
 * @implements 23E1:0451:000F:0E67 ()
 *
 * Called From: 23E1:0451:000A:15E0
 * Called From: 23E1:0451:0022:89AF
 */
void f__23E1_0451_000F_0E67()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__23E1_042F_0022_89AF(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_0460_0004_893F(); return;
}

/**
 * Decompiled function f__23E1_0460_0004_893F()
 *
 * @name f__23E1_0460_0004_893F
 * @implements 23E1:0460:0004:893F ()
 *
 * Called From: 23E1:045E:000F:0E67
 */
void f__23E1_0460_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
