/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__10BE_000C_0020_8CB4()
 *
 * @name f__10BE_000C_0020_8CB4
 * @implements 10BE:000C:0020:8CB4 ()
 *
 * Called From: B4B8:1AEF:0013:E6E9
 * Called From: B511:0ABF:000D:B1D4
 */
void f__10BE_000C_0020_8CB4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35FE), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10BE_0035_001D_E785(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__10BE_002C_0026_B18C();
}

/**
 * Decompiled function f__10BE_002C_0026_B18C()
 *
 * @name f__10BE_002C_0026_B18C
 * @implements 10BE:002C:0026:B18C ()
 *
 * Called From: 10BE:002C:0020:8CB4
 */
void f__10BE_002C_0026_B18C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35FC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35FA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	if (emu_flags.zf) { emu_ip = 0x0055; emu_last_cs = 0x10BE; emu_last_ip = 0x003C; emu_last_length = 0x0026; emu_last_crc = 0xB18C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x18C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_push(emu_cs); emu_push(0x0052); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__10BE_0052_0007_7692();
}

/**
 * Decompiled function f__10BE_0035_001D_E785()
 *
 * @name f__10BE_0035_001D_E785
 * @implements 10BE:0035:001D:E785 ()
 *
 * Called From: 10BE:001F:0020:8CB4
 */
void f__10BE_0035_001D_E785()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	if (emu_flags.zf) { emu_ip = 0x0055; emu_last_cs = 0x10BE; emu_last_ip = 0x003C; emu_last_length = 0x001D; emu_last_crc = 0xE785; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x18C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_push(emu_cs); emu_push(0x0052); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__10BE_0052_0007_7692();
}

/**
 * Decompiled function f__10BE_0052_0007_7692()
 *
 * @name f__10BE_0052_0007_7692
 * @implements 10BE:0052:0007:7692 ()
 *
 * Called From: 10BE:0052:001D:E785
 * Called From: 10BE:0052:0026:B18C
 */
void f__10BE_0052_0007_7692()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_si, emu_si);
	f__10BE_0078_000C_CD6B(); return;
}

/**
 * Decompiled function f__10BE_0059_0006_0112()
 *
 * @name f__10BE_0059_0006_0112
 * @implements 10BE:0059:0006:0112 ()
 *
 * Called From: 10BE:007B:000C:CD6B
 * Called From: 10BE:007B:000D:0D63
 */
void f__10BE_0059_0006_0112()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x005F); f__10BE_01AB_002F_5CC7();
	f__10BE_005F_0025_35BB();
}

/**
 * Decompiled function f__10BE_005F_0025_35BB()
 *
 * @name f__10BE_005F_0025_35BB
 * @implements 10BE:005F:0025:35BB ()
 *
 * Called From: 10BE:005F:0006:0112
 */
void f__10BE_005F_0025_35BB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__10BE_0077_000D_0D63(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0xA);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0059; emu_last_cs = 0x10BE; emu_last_ip = 0x007B; emu_last_length = 0x0025; emu_last_crc = 0x35BB; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x18C);
	emu_ip = 0x0084; emu_last_cs = 0x10BE; emu_last_ip = 0x0082; emu_last_length = 0x0025; emu_last_crc = 0x35BB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10BE_0077_000D_0D63()
 *
 * @name f__10BE_0077_000D_0D63
 * @implements 10BE:0077:000D:0D63 ()
 *
 * Called From: 10BE:006C:0025:35BB
 */
void f__10BE_0077_000D_0D63()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__10BE_0059_0006_0112(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x18C);
	f__10BE_0084_0005_04BA(); return;
}

/**
 * Decompiled function f__10BE_0078_000C_CD6B()
 *
 * @name f__10BE_0078_000C_CD6B
 * @implements 10BE:0078:000C:CD6B ()
 *
 * Called From: 10BE:0057:0007:7692
 */
void f__10BE_0078_000C_CD6B()
{
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__10BE_0059_0006_0112(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x18C);
	emu_ip = 0x0084; emu_last_cs = 0x10BE; emu_last_ip = 0x0082; emu_last_length = 0x000C; emu_last_crc = 0xCD6B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10BE_0084_0005_04BA()
 *
 * @name f__10BE_0084_0005_04BA
 * @implements 10BE:0084:0005:04BA ()
 *
 * Called From: 10BE:0082:000D:0D63
 */
void f__10BE_0084_0005_04BA()
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
 * Decompiled function f__10BE_00A0_0064_F23B()
 *
 * @name f__10BE_00A0_0064_F23B
 * @implements 10BE:00A0:0064:F23B ()
 *
 * Called From: B4B5:02A1:0006:0E18
 */
void f__10BE_00A0_0064_F23B()
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
	if (emu_flags.zf) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00BB; emu_last_length = 0x0064; emu_last_crc = 0xF23B; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00BF; emu_last_length = 0x0064; emu_last_crc = 0xF23B; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00C4; emu_last_length = 0x0064; emu_last_crc = 0xF23B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x42);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0139; emu_last_cs = 0x10BE; emu_last_ip = 0x00D9; emu_last_length = 0x0064; emu_last_crc = 0xF23B; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__10BE_0104_003D_6746();
}

/**
 * Decompiled function f__10BE_0104_003D_6746()
 *
 * @name f__10BE_0104_003D_6746
 * @implements 10BE:0104:003D:6746 ()
 *
 * Called From: 10BE:0104:0064:F23B
 */
void f__10BE_0104_003D_6746()
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
	f__10BE_0141_0005_04BA(); return;
}

/**
 * Decompiled function f__10BE_0141_0005_04BA()
 *
 * @name f__10BE_0141_0005_04BA
 * @implements 10BE:0141:0005:04BA ()
 *
 * Called From: 10BE:013F:003D:6746
 */
void f__10BE_0141_0005_04BA()
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
 * Decompiled function f__10BE_01AB_002F_5CC7()
 *
 * @name f__10BE_01AB_002F_5CC7
 * @implements 10BE:01AB:002F:5CC7 ()
 *
 * Called From: 0972:0163:0037:6290
 * Called From: 0972:054A:001D:7F3B
 * Called From: 0972:14C3:000F:9D48
 * Called From: 0C3A:0703:0020:DAA6
 * Called From: 0C3A:074E:0011:7DD2
 * Called From: 0C3A:1471:0031:5F57
 * Called From: 0C3A:1BBB:0026:E719
 * Called From: 0C3A:1F43:0011:7DDA
 * Called From: 0C3A:1F7B:0010:7894
 * Called From: 0C3A:20E7:0011:8989
 * Called From: 0FE4:01F9:002F:91E4
 * Called From: 0FE4:03DD:0008:DDA0
 * Called From: 0FE4:05B5:002A:6D3A
 * Called From: 10BE:005C:0006:0112
 * Called From: 10E4:06B2:001C:BD7D
 * Called From: 10E4:1066:0011:5C3E
 * Called From: 10E4:1066:0013:5EA6
 * Called From: 10E4:10F2:0045:685E
 * Called From: 10E4:1D7C:006B:2726
 * Called From: 10E4:1EB8:0070:6B75
 * Called From: 1423:08E2:0008:DDA0
 * Called From: 1423:09E0:001C:DAFD
 * Called From: 1423:0E35:0008:FDE0
 * Called From: 1423:0E5A:0010:5595
 * Called From: 176C:02F3:0037:AB76
 * Called From: 1A34:2356:000D:F8E3
 * Called From: B4CD:0D97:0008:DEA0
 * Called From: B511:02AC:000E:9D16
 * Called From: B511:02C9:001D:0392
 * Called From: B518:108F:000E:D11B
 */
void f__10BE_01AB_002F_5CC7()
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
	if (emu_flags.zf) { f__10BE_01DA_0006_11EC(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x42);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x35FC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35FA));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	f__10BE_01E0_0002_00E2(); return;
}

/**
 * Decompiled function f__10BE_01D8_0002_03A0()
 *
 * @name f__10BE_01D8_0002_03A0
 * @implements 10BE:01D8:0002:03A0 ()
 *
 * Called From: 10BE:01DE:0006:11EC
 */
void f__10BE_01D8_0002_03A0()
{
	f__10BE_01E0_0002_00E2(); return;
}

/**
 * Decompiled function f__10BE_01DA_0006_11EC()
 *
 * @name f__10BE_01DA_0006_11EC
 * @implements 10BE:01DA:0006:11EC ()
 *
 * Called From: 10BE:01C4:002F:5CC7
 */
void f__10BE_01DA_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__10BE_01D8_0002_03A0(); return;
}

/**
 * Decompiled function f__10BE_01E0_0002_00E2()
 *
 * @name f__10BE_01E0_0002_00E2
 * @implements 10BE:01E0:0002:00E2 ()
 *
 * Called From: 10BE:01D8:0002:03A0
 * Called From: 10BE:01D8:002F:5CC7
 */
void f__10BE_01E0_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10BE_01E2_0027_C454()
 *
 * @name f__10BE_01E2_0027_C454
 * @implements 10BE:01E2:0027:C454 ()
 *
 * Called From: 0FE4:019A:0012:EFE2
 * Called From: 1082:001C:0012:EFE2
 * Called From: 1391:04E2:000A:79B1
 * Called From: 1391:04E2:000D:69AD
 * Called From: 1423:0BF1:000B:0F32
 * Called From: B511:030A:000B:0F32
 */
void f__10BE_01E2_0027_C454()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10BE_01F5_0014_7E2F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x87BA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0209); f__10BE_020F_004E_EE3E();
	f__10BE_0209_0004_04F4();
}

/**
 * Decompiled function f__10BE_01F5_0014_7E2F()
 *
 * @name f__10BE_01F5_0014_7E2F
 * @implements 10BE:01F5:0014:7E2F ()
 *
 * Called From: 10BE:01EB:0027:C454
 */
void f__10BE_01F5_0014_7E2F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFFFF);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0209); f__10BE_020F_004E_EE3E();
	f__10BE_0209_0004_04F4();
}

/**
 * Decompiled function f__10BE_0209_0004_04F4()
 *
 * @name f__10BE_0209_0004_04F4
 * @implements 10BE:0209:0004:04F4 ()
 *
 * Called From: 10BE:0209:0027:C454
 * Called From: 10BE:0209:0014:7E2F
 */
void f__10BE_0209_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__10BE_020D_0002_00E2(); return;
}

/**
 * Decompiled function f__10BE_020D_0002_00E2()
 *
 * @name f__10BE_020D_0002_00E2
 * @implements 10BE:020D:0002:00E2 ()
 *
 * Called From: 10BE:020B:0004:04F4
 */
void f__10BE_020D_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10BE_020F_004E_EE3E()
 *
 * @name f__10BE_020F_004E_EE3E
 * @implements 10BE:020F:004E:EE3E ()
 *
 * Called From: 0FE4:01B0:0014:0C03
 * Called From: 1082:0032:0014:0C03
 * Called From: 10BE:0206:0027:C454
 * Called From: 10BE:0206:0014:7E2F
 * Called From: 1391:082F:000A:7779
 * Called From: 1391:082F:0014:BA3A
 * Called From: 1391:082F:001C:2037
 * Called From: 1423:0C5A:000B:01FA
 * Called From: 1423:0C5A:0027:BBCC
 * Called From: 1423:0C5A:0020:D570
 * Called From: B511:0346:000C:91FF
 */
void f__10BE_020F_004E_EE3E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10BE_0226_0037_85EE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x87BA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0234; emu_last_cs = 0x10BE; emu_last_ip = 0x0231; emu_last_length = 0x004E; emu_last_crc = 0xEE3E; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_025D_0006_11EC(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x783E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7840));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0263_0005_04BA(); return;
}

/**
 * Decompiled function f__10BE_0226_0037_85EE()
 *
 * @name f__10BE_0226_0037_85EE
 * @implements 10BE:0226:0037:85EE ()
 *
 * Called From: 10BE:021C:004E:EE3E
 */
void f__10BE_0226_0037_85EE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_0234_0029_175D(); return; }
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { f__10BE_025D_0006_11EC(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x783E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7840));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0263_0005_04BA(); return;
}

/**
 * Decompiled function f__10BE_0234_0029_175D()
 *
 * @name f__10BE_0234_0029_175D
 * @implements 10BE:0234:0029:175D ()
 *
 * Called From: 10BE:0231:0037:85EE
 */
void f__10BE_0234_0029_175D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35FE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x025D; emu_last_cs = 0x10BE; emu_last_ip = 0x023F; emu_last_length = 0x0029; emu_last_crc = 0x175D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x783E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7840));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10BE_0263_0005_04BA(); return;
}

/**
 * Decompiled function f__10BE_025B_0002_03A0()
 *
 * @name f__10BE_025B_0002_03A0
 * @implements 10BE:025B:0002:03A0 ()
 *
 * Called From: 10BE:0261:0006:11EC
 */
void f__10BE_025B_0002_03A0()
{
	f__10BE_0263_0005_04BA(); return;
}

/**
 * Decompiled function f__10BE_025D_0006_11EC()
 *
 * @name f__10BE_025D_0006_11EC
 * @implements 10BE:025D:0006:11EC ()
 *
 * Called From: 10BE:023F:004E:EE3E
 * Called From: 10BE:023F:0037:85EE
 */
void f__10BE_025D_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__10BE_025B_0002_03A0(); return;
}

/**
 * Decompiled function f__10BE_0263_0005_04BA()
 *
 * @name f__10BE_0263_0005_04BA
 * @implements 10BE:0263:0005:04BA ()
 *
 * Called From: 10BE:025B:0037:85EE
 * Called From: 10BE:025B:004E:EE3E
 * Called From: 10BE:025B:0002:03A0
 * Called From: 10BE:025B:0029:175D
 */
void f__10BE_0263_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
