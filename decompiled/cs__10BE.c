/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__10BE_000C_0020_F10F()
 *
 * @name f__10BE_000C_0020_F10F
 * @implements 10BE:000C:0020:F10F ()
 *
 * Called From: B4B8:1AEF:0013:4073
 * Called From: B511:0ABF:000D:CBD3
 */
void f__10BE_000C_0020_F10F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35FE), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10BE_0035_001D_55B0(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__10BE_002C_0026_4F78();
}

/**
 * Decompiled function f__10BE_002C_0026_4F78()
 *
 * @name f__10BE_002C_0026_4F78
 * @implements 10BE:002C:0026:4F78 ()
 *
 * Called From: 10BE:002C:0020:F10F
 */
void f__10BE_002C_0026_4F78()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35FC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35FA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	if (emu_flags.zf) { emu_ip = 0x0055; emu_last_cs = 0x10BE; emu_last_ip = 0x003C; emu_last_length = 0x0026; emu_last_crc = 0x4F78; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x18C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_push(emu_cs); emu_push(0x0052); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__10BE_0052_0007_F03C();
}

/**
 * Decompiled function f__10BE_0035_001D_55B0()
 *
 * @name f__10BE_0035_001D_55B0
 * @implements 10BE:0035:001D:55B0 ()
 *
 * Called From: 10BE:001F:0020:F10F
 */
void f__10BE_0035_001D_55B0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	if (emu_flags.zf) { emu_ip = 0x0055; emu_last_cs = 0x10BE; emu_last_ip = 0x003C; emu_last_length = 0x001D; emu_last_crc = 0x55B0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x18C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_push(emu_cs); emu_push(0x0052); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__10BE_0052_0007_F03C();
}

/**
 * Decompiled function f__10BE_0052_0007_F03C()
 *
 * @name f__10BE_0052_0007_F03C
 * @implements 10BE:0052:0007:F03C ()
 *
 * Called From: 10BE:0052:0026:4F78
 * Called From: 10BE:0052:001D:55B0
 */
void f__10BE_0052_0007_F03C()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	f__10BE_0078_000C_5826(); return;
}

/**
 * Decompiled function f__10BE_0059_0006_A112()
 *
 * @name f__10BE_0059_0006_A112
 * @implements 10BE:0059:0006:A112 ()
 *
 * Called From: 10BE:007B:000C:5826
 * Called From: 10BE:007B:000D:6824
 */
void f__10BE_0059_0006_A112()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x005F); f__10BE_01AB_002F_0E7B();
	f__10BE_005F_0025_D55B();
}

/**
 * Decompiled function f__10BE_005F_0025_D55B()
 *
 * @name f__10BE_005F_0025_D55B
 * @implements 10BE:005F:0025:D55B ()
 *
 * Called From: 10BE:005F:0006:A112
 */
void f__10BE_005F_0025_D55B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__10BE_0077_000D_6824(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0xA);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0059; emu_last_cs = 0x10BE; emu_last_ip = 0x007B; emu_last_length = 0x0025; emu_last_crc = 0xD55B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x18C);
	emu_ip = 0x0084; emu_last_cs = 0x10BE; emu_last_ip = 0x0082; emu_last_length = 0x0025; emu_last_crc = 0xD55B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10BE_0077_000D_6824()
 *
 * @name f__10BE_0077_000D_6824
 * @implements 10BE:0077:000D:6824 ()
 *
 * Called From: 10BE:006C:0025:D55B
 */
void f__10BE_0077_000D_6824()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__10BE_0059_0006_A112(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x18C);
	f__10BE_0084_0005_8BCF(); return;
}

/**
 * Decompiled function f__10BE_0078_000C_5826()
 *
 * @name f__10BE_0078_000C_5826
 * @implements 10BE:0078:000C:5826 ()
 *
 * Called From: 10BE:0057:0007:F03C
 */
void f__10BE_0078_000C_5826()
{
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__10BE_0059_0006_A112(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x18C);
	emu_ip = 0x0084; emu_last_cs = 0x10BE; emu_last_ip = 0x0082; emu_last_length = 0x000C; emu_last_crc = 0x5826; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10BE_0084_0005_8BCF()
 *
 * @name f__10BE_0084_0005_8BCF
 * @implements 10BE:0084:0005:8BCF ()
 *
 * Called From: 10BE:0082:000D:6824
 */
void f__10BE_0084_0005_8BCF()
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
 * Decompiled function f__10BE_00A0_0064_DF2A()
 *
 * @name f__10BE_00A0_0064_DF2A
 * @implements 10BE:00A0:0064:DF2A ()
 *
 * Called From: B4B5:02A1:0006:D4F4
 * Called From: B4C4:0338:000B:CA0C
 */
void f__10BE_00A0_0064_DF2A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	if (emu_flags.zf) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00BB; emu_last_length = 0x0064; emu_last_crc = 0xDF2A; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00BF; emu_last_length = 0x0064; emu_last_crc = 0xDF2A; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00C4; emu_last_length = 0x0064; emu_last_crc = 0xDF2A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x42);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00D9; emu_last_length = 0x0064; emu_last_crc = 0xDF2A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x42);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__10BE_0104_003D_D771();
}

/**
 * Decompiled function f__10BE_0104_003D_D771()
 *
 * @name f__10BE_0104_003D_D771
 * @implements 10BE:0104:003D:D771 ()
 *
 * Called From: 10BE:0104:0064:DF2A
 */
void f__10BE_0104_003D_D771()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x783E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7840), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x35FE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0141_0005_8BCF(); return;
}

/**
 * Decompiled function f__10BE_0141_0005_8BCF()
 *
 * @name f__10BE_0141_0005_8BCF
 * @implements 10BE:0141:0005:8BCF ()
 *
 * Called From: 10BE:013F:003D:D771
 */
void f__10BE_0141_0005_8BCF()
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
 * Decompiled function f__10BE_01AB_002F_0E7B()
 *
 * @name f__10BE_01AB_002F_0E7B
 * @implements 10BE:01AB:002F:0E7B ()
 *
 * Called From: 0972:0163:0037:A640
 * Called From: 0972:054A:001D:84CA
 * Called From: 0972:14C3:000F:377B
 * Called From: 0C3A:0703:0020:6FF2
 * Called From: 0C3A:074E:0011:6CE1
 * Called From: 0C3A:0F2D:000E:E431
 * Called From: 0C3A:0FEE:0018:9CA0
 * Called From: 0C3A:1119:0011:B975
 * Called From: 0C3A:11AF:0011:6CE1
 * Called From: 0C3A:1471:0031:D8A7
 * Called From: 0C3A:1BBB:0026:93A4
 * Called From: 0C3A:1F43:0011:68E8
 * Called From: 0C3A:1F7B:0010:8DB3
 * Called From: 0C3A:20E7:0011:DA16
 * Called From: 0FE4:01F9:002F:536D
 * Called From: 0FE4:03DD:0008:EB39
 * Called From: 0FE4:05B5:002A:6D7E
 * Called From: 10BE:005C:0006:A112
 * Called From: 10E4:06B2:001C:0810
 * Called From: 10E4:1066:0011:5FD6
 * Called From: 10E4:1066:0013:5986
 * Called From: 10E4:10F2:0045:52D0
 * Called From: 10E4:1D7C:006B:11D3
 * Called From: 10E4:1EB8:0070:0410
 * Called From: 1423:08E2:0008:EB39
 * Called From: 1423:09E0:001C:D7D2
 * Called From: 1423:0E35:0008:EA34
 * Called From: 1423:0E5A:0010:843C
 * Called From: 176C:02F3:0037:7973
 * Called From: 1A34:2356:000D:9A60
 * Called From: B4CD:0D97:0008:DB39
 * Called From: B511:02AC:000E:EBD1
 * Called From: B511:02C9:001D:CE78
 * Called From: B518:108F:000E:30F0
 */
void f__10BE_01AB_002F_0E7B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x42);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (emu_flags.zf) { f__10BE_01DA_0006_5EA9(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x42);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__10BE_01E0_0002_2597(); return;
}

/**
 * Decompiled function f__10BE_01D8_0002_C33A()
 *
 * @name f__10BE_01D8_0002_C33A
 * @implements 10BE:01D8:0002:C33A ()
 *
 * Called From: 10BE:01DE:0006:5EA9
 */
void f__10BE_01D8_0002_C33A()
{
	f__10BE_01E0_0002_2597(); return;
}

/**
 * Decompiled function f__10BE_01DA_0006_5EA9()
 *
 * @name f__10BE_01DA_0006_5EA9
 * @implements 10BE:01DA:0006:5EA9 ()
 *
 * Called From: 10BE:01C4:002F:0E7B
 */
void f__10BE_01DA_0006_5EA9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__10BE_01D8_0002_C33A(); return;
}

/**
 * Decompiled function f__10BE_01E0_0002_2597()
 *
 * @name f__10BE_01E0_0002_2597
 * @implements 10BE:01E0:0002:2597 ()
 *
 * Called From: 10BE:01D8:0002:C33A
 * Called From: 10BE:01D8:002F:0E7B
 */
void f__10BE_01E0_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10BE_01E2_0027_6596()
 *
 * @name f__10BE_01E2_0027_6596
 * @implements 10BE:01E2:0027:6596 ()
 *
 * Called From: 0FE4:019A:0012:A3C7
 * Called From: 1082:001C:0012:A3C7
 * Called From: 1391:04E2:000A:2ECE
 * Called From: 1423:0BF1:000B:E66F
 * Called From: B50B:0337:0016:CD5C
 * Called From: B511:030A:000B:E66F
 */
void f__10BE_01E2_0027_6596()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10BE_01F5_0014_C21B(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x87BA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0209); f__10BE_020F_004E_633B();
	f__10BE_0209_0004_5B1F();
}

/**
 * Decompiled function f__10BE_01F5_0014_C21B()
 *
 * @name f__10BE_01F5_0014_C21B
 * @implements 10BE:01F5:0014:C21B ()
 *
 * Called From: 10BE:01EB:0027:6596
 */
void f__10BE_01F5_0014_C21B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0209); f__10BE_020F_004E_633B();
	f__10BE_0209_0004_5B1F();
}

/**
 * Decompiled function f__10BE_0209_0004_5B1F()
 *
 * @name f__10BE_0209_0004_5B1F
 * @implements 10BE:0209:0004:5B1F ()
 *
 * Called From: 10BE:0209:0027:6596
 * Called From: 10BE:0209:0014:C21B
 */
void f__10BE_0209_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__10BE_020D_0002_2597(); return;
}

/**
 * Decompiled function f__10BE_020D_0002_2597()
 *
 * @name f__10BE_020D_0002_2597
 * @implements 10BE:020D:0002:2597 ()
 *
 * Called From: 10BE:020B:0004:5B1F
 */
void f__10BE_020D_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10BE_020F_004E_633B()
 *
 * @name f__10BE_020F_004E_633B
 * @implements 10BE:020F:004E:633B ()
 *
 * Called From: 0FE4:01B0:0014:E02C
 * Called From: 1082:0032:0014:E02C
 * Called From: 10BE:0206:0027:6596
 * Called From: 10BE:0206:0014:C21B
 * Called From: 1391:082F:000A:FEA0
 * Called From: 1391:082F:0014:2438
 * Called From: 1391:082F:001C:4160
 * Called From: 1423:0C5A:000B:3601
 * Called From: 1423:0C5A:0027:642F
 * Called From: 1423:0C5A:0020:A3B7
 * Called From: B50B:0376:000E:14EB
 * Called From: B511:0346:000C:3391
 */
void f__10BE_020F_004E_633B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10BE_0226_0037_B108(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x87BA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0234; emu_last_cs = 0x10BE; emu_last_ip = 0x0231; emu_last_length = 0x004E; emu_last_crc = 0x633B; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_025D_0006_5EA9(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x783E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7840));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0263_0005_8BCF(); return;
}

/**
 * Decompiled function f__10BE_0226_0037_B108()
 *
 * @name f__10BE_0226_0037_B108
 * @implements 10BE:0226:0037:B108 ()
 *
 * Called From: 10BE:021C:004E:633B
 */
void f__10BE_0226_0037_B108()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_0234_0029_8A5C(); return; }
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_025D_0006_5EA9(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x783E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7840));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0263_0005_8BCF(); return;
}

/**
 * Decompiled function f__10BE_0234_0029_8A5C()
 *
 * @name f__10BE_0234_0029_8A5C
 * @implements 10BE:0234:0029:8A5C ()
 *
 * Called From: 10BE:0231:0037:B108
 */
void f__10BE_0234_0029_8A5C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_025D_0006_5EA9(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x783E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7840));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0263_0005_8BCF(); return;
}

/**
 * Decompiled function f__10BE_025B_0002_C33A()
 *
 * @name f__10BE_025B_0002_C33A
 * @implements 10BE:025B:0002:C33A ()
 *
 * Called From: 10BE:0261:0006:5EA9
 */
void f__10BE_025B_0002_C33A()
{
	f__10BE_0263_0005_8BCF(); return;
}

/**
 * Decompiled function f__10BE_025D_0006_5EA9()
 *
 * @name f__10BE_025D_0006_5EA9
 * @implements 10BE:025D:0006:5EA9 ()
 *
 * Called From: 10BE:023F:004E:633B
 * Called From: 10BE:023F:0037:B108
 * Called From: 10BE:023F:0029:8A5C
 */
void f__10BE_025D_0006_5EA9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__10BE_025B_0002_C33A(); return;
}

/**
 * Decompiled function f__10BE_0263_0005_8BCF()
 *
 * @name f__10BE_0263_0005_8BCF
 * @implements 10BE:0263:0005:8BCF ()
 *
 * Called From: 10BE:025B:0037:B108
 * Called From: 10BE:025B:004E:633B
 * Called From: 10BE:025B:0002:C33A
 * Called From: 10BE:025B:0029:8A5C
 */
void f__10BE_0263_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
