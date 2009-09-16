/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B536_0129_000A_DB22()
 *
 * @name f__B536_0129_000A_DB22
 * @implements B536:0129:000A:DB22 ()
 *
 * Called From: 3536:002F:0005:1ED4
 */
void f__B536_0129_000A_DB22()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x6C8C), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_0148_0060_D4A4()
 *
 * @name f__B536_0148_0060_D4A4
 * @implements B536:0148:0060:D4A4 ()
 *
 * Called From: 3536:0039:0005:1BF6
 * Called From: 3536:0039:0005:1A72
 */
void f__B536_0148_0060_D4A4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3198), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DD9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DD7), emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DD5), 0x0);
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE4), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE5), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDD), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDF), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DE1), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DE3), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01A9; emu_last_cs = 0xB536; emu_last_ip = 0x019D; emu_last_length = 0x0060; emu_last_crc = 0xD4A4; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x01A8); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_01A8_0006_006C();
}

/**
 * Decompiled function f__B536_01A8_0006_006C()
 *
 * @name f__B536_01A8_0006_006C
 * @implements B536:01A8:0006:006C ()
 *
 * Called From: B536:01A8:0060:D4A4
 */
void f__B536_01A8_0006_006C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x01AE); f__B536_088E_0017_5A50();
	f__B536_01AE_000E_05ED();
}

/**
 * Decompiled function f__B536_01A9_0005_162C()
 *
 * @name f__B536_01A9_0005_162C
 * @implements B536:01A9:0005:162C ()
 *
 * Called From: B536:049D:0003:0696
 */
void f__B536_01A9_0005_162C()
{
	emu_push(emu_cs);
	emu_push(0x01AE); f__B536_088E_0017_5A50();
	f__B536_01AE_000E_05ED();
}

/**
 * Decompiled function f__B536_01AE_000E_05ED()
 *
 * @name f__B536_01AE_000E_05ED
 * @implements B536:01AE:000E:05ED ()
 *
 * Called From: B536:01AE:0006:006C
 * Called From: B536:01AE:0005:162C
 */
void f__B536_01AE_000E_05ED()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x3), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B536_01BC_000C_C49C(); return; }
	f__B536_04A0_000C_4CF6(); return;
}

/**
 * Decompiled function f__B536_01BC_000C_C49C()
 *
 * @name f__B536_01BC_000C_C49C
 * @implements B536:01BC:000C:C49C ()
 *
 * Called From: B536:01B7:000E:05ED
 */
void f__B536_01BC_000C_C49C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DE3));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DE1));
	if (emu_flags.zf) { f__B536_01C8_0009_0271(); return; }
	f__B536_0263_000F_8FBD(); return;
}

/**
 * Decompiled function f__B536_01C8_0009_0271()
 *
 * @name f__B536_01C8_0009_0271
 * @implements B536:01C8:0009:0271 ()
 *
 * Called From: B536:01C3:000C:C49C
 */
void f__B536_01C8_0009_0271()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x3), 0x25);
	if (emu_flags.zf) { f__B536_01D1_000A_756C(); return; }
	f__B536_0263_000F_8FBD(); return;
}

/**
 * Decompiled function f__B536_01D1_000A_756C()
 *
 * @name f__B536_01D1_000A_756C
 * @implements B536:01D1:000A:756C ()
 *
 * Called From: B536:01CC:0009:0271
 */
void f__B536_01D1_000A_756C()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE5));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x01F7; f__01F7_1097_0010_906C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_01DB_000D_0045();
}

/**
 * Decompiled function f__B536_01DB_000D_0045()
 *
 * @name f__B536_01DB_000D_0045
 * @implements B536:01DB:000D:0045 ()
 *
 * Called From: B536:01DB:000A:756C
 */
void f__B536_01DB_000D_0045()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x64);
	if (emu_flags.zf) { emu_ip = 0x021F; emu_last_cs = 0xB536; emu_last_ip = 0x01DF; emu_last_length = 0x000D; emu_last_crc = 0x0045; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x73);
	if (emu_flags.zf) { f__B536_01E8_0032_8537(); return; }
	emu_ip = 0x0261; emu_last_cs = 0xB536; emu_last_ip = 0x01E6; emu_last_length = 0x000D; emu_last_crc = 0x0045; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_01E8_0032_8537()
 *
 * @name f__B536_01E8_0032_8537
 * @implements B536:01E8:0032:8537 ()
 *
 * Called From: B536:01E4:000D:0045
 */
void f__B536_01E8_0032_8537()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DE1), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DE3), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DE3));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DE1));
	if (emu_flags.zf) { emu_ip = 0x021D; emu_last_cs = 0xB536; emu_last_ip = 0x0205; emu_last_length = 0x0032; emu_last_crc = 0x8537; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE6), emu_ax.l);
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE4), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE5), emu_ax.l);
	emu_push(emu_cs);
	emu_push(0x021A); f__B536_088E_0017_5A50();
	f__B536_021A_0005_11AC();
}

/**
 * Decompiled function f__B536_021A_0005_11AC()
 *
 * @name f__B536_021A_0005_11AC
 * @implements B536:021A:0005:11AC ()
 *
 * Called From: B536:021A:0032:8537
 */
void f__B536_021A_0005_11AC()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x3), emu_ax.l);
	f__B536_0263_000F_8FBD(); return;
}

/**
 * Decompiled function f__B536_0263_000F_8FBD()
 *
 * @name f__B536_0263_000F_8FBD
 * @implements B536:0263:000F:8FBD ()
 *
 * Called From: B536:01C5:000C:C49C
 * Called From: B536:01CE:0009:0271
 * Called From: B536:021D:0005:11AC
 */
void f__B536_0263_000F_8FBD()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x1C);
	if ((emu_flags.cf || emu_flags.zf)) { f__B536_0272_0007_5F42(); return; }
	f__B536_0463_0009_2BFF(); return;
}

/**
 * Decompiled function f__B536_0272_0007_5F42()
 *
 * @name f__B536_0272_0007_5F42
 * @implements B536:0272:0007:5F42 ()
 *
 * Called From: B536:026D:000F:8FBD
 */
void f__B536_0272_0007_5F42()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x500);
	switch (emu_ip) {
		case 0x0338: f__B536_0338_0005_167C(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB536; emu_last_ip = 0x0274; emu_last_length = 0x0007; emu_last_crc = 0x5F42;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B536_0338_0005_167C()
 *
 * @name f__B536_0338_0005_167C
 * @implements B536:0338:0005:167C ()
 *
 * Called From: B536:0274:0007:5F42
 */
void f__B536_0338_0005_167C()
{
	emu_push(emu_cs);
	emu_push(0x033D); f__B536_0633_000A_D156();
	f__B536_033D_0011_7A22();
}

/**
 * Decompiled function f__B536_033D_0011_7A22()
 *
 * @name f__B536_033D_0011_7A22
 * @implements B536:033D:0011:7A22 ()
 *
 * Called From: B536:033D:0005:167C
 */
void f__B536_033D_0011_7A22()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x3196));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x66CD));
	f__B536_049D_0003_0696(); return;
}

/**
 * Decompiled function f__B536_0463_0009_2BFF()
 *
 * @name f__B536_0463_0009_2BFF
 * @implements B536:0463:0009:2BFF ()
 *
 * Called From: B536:026F:000F:8FBD
 */
void f__B536_0463_0009_2BFF()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046C); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_046C_002F_003F();
}

/**
 * Decompiled function f__B536_046C_002F_003F()
 *
 * @name f__B536_046C_002F_003F
 * @implements B536:046C:002F:003F ()
 *
 * Called From: B536:046C:0009:2BFF
 */
void f__B536_046C_002F_003F()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7DD9), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7DD7));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_movb(&emu_get_memory8(emu_ds, emu_bx.x, -0x7DD5), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7DD7));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x7DD7));
	emu_movb(&emu_get_memory8(emu_ds, emu_bx.x, -0x7DD5), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DD9));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D63));
	if ((emu_flags.cf || emu_flags.zf)) { f__B536_049B_0002_03AC(); return; }
	emu_push(emu_cs);
	emu_push(0x049B); f__B536_0633_000A_D156();
	f__B536_049B_0002_03AC();
}

/**
 * Decompiled function f__B536_049B_0002_03AC()
 *
 * @name f__B536_049B_0002_03AC
 * @implements B536:049B:0002:03AC ()
 *
 * Called From: B536:0494:002F:003F
 * Called From: B536:049B:002F:003F
 */
void f__B536_049B_0002_03AC()
{
	f__B536_049D_0003_0696(); return;
}

/**
 * Decompiled function f__B536_049D_0003_0696()
 *
 * @name f__B536_049D_0003_0696
 * @implements B536:049D:0003:0696 ()
 *
 * Called From: B536:034B:0011:7A22
 * Called From: B536:049B:0002:03AC
 */
void f__B536_049D_0003_0696()
{
	f__B536_01A9_0005_162C(); return;
}

/**
 * Decompiled function f__B536_04A0_000C_4CF6()
 *
 * @name f__B536_04A0_000C_4CF6
 * @implements B536:04A0:000C:4CF6 ()
 *
 * Called From: B536:01B9:000E:05ED
 */
void f__B536_04A0_000C_4CF6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7DD7), 0x0);
	if (emu_flags.zf) { emu_ip = 0x04AC; emu_last_cs = 0xB536; emu_last_ip = 0x04A5; emu_last_length = 0x000C; emu_last_crc = 0x4CF6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x04AC); f__B536_0633_000A_D156();
	f__B536_04AC_004E_DCAE();
}

/**
 * Decompiled function f__B536_04AC_004E_DCAE()
 *
 * @name f__B536_04AC_004E_DCAE
 * @implements B536:04AC:004E:DCAE ()
 *
 * Called From: B536:04AC:000C:4CF6
 */
void f__B536_04AC_004E_DCAE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x406E), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CD));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x4070), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D5B), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x406A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D59), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x406C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04FA; emu_last_cs = 0xB536; emu_last_ip = 0x04F3; emu_last_length = 0x004E; emu_last_crc = 0xDCAE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2642; f__2642_0069_0008_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_04FA_0006_137A();
}

/**
 * Decompiled function f__B536_04FA_0006_137A()
 *
 * @name f__B536_04FA_0006_137A
 * @implements B536:04FA:0006:137A ()
 *
 * Called From: B536:04FA:004E:DCAE
 */
void f__B536_04FA_0006_137A()
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
 * Decompiled function f__B536_0633_000A_D156()
 *
 * @name f__B536_0633_000A_D156
 * @implements B536:0633:000A:D156 ()
 *
 * Called From: B536:033A:0005:167C
 * Called From: B536:0498:002F:003F
 * Called From: B536:04A9:000C:4CF6
 * Called From: B536:07C1:0010:5A73
 */
void f__B536_0633_000A_D156()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	f__B536_064E_007D_81DB(); return;
}

/**
 * Decompiled function f__B536_064E_007D_81DB()
 *
 * @name f__B536_064E_007D_81DB
 * @implements B536:064E:007D:81DB ()
 *
 * Called From: B536:063B:000A:D156
 */
void f__B536_064E_007D_81DB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CD));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D5F));
	if (!emu_flags.cf) { emu_ip = 0x063D; emu_last_cs = 0xB536; emu_last_ip = 0x0655; emu_last_length = 0x007D; emu_last_crc = 0x81DB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CD));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D63));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D5F));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3196));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B536_06A0_002B_8217(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x6C8C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x06A0; emu_last_cs = 0xB536; emu_last_ip = 0x068F; emu_last_length = 0x007D; emu_last_crc = 0x81DB; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6C));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3199));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7DD7));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DD9));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x072E; emu_last_cs = 0xB536; emu_last_ip = 0x06B3; emu_last_length = 0x007D; emu_last_crc = 0x81DB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_ip = 0x0706; emu_last_cs = 0xB536; emu_last_ip = 0x06C9; emu_last_length = 0x007D; emu_last_crc = 0x81DB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_06A0_002B_8217()
 *
 * @name f__B536_06A0_002B_8217
 * @implements B536:06A0:002B:8217 ()
 *
 * Called From: B536:0688:007D:81DB
 */
void f__B536_06A0_002B_8217()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, -0x7DD7));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DD9));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B536_072E_0024_CBE2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__B536_0706_0025_8787(); return;
}

/**
 * Decompiled function f__B536_06CB_0010_4B24()
 *
 * @name f__B536_06CB_0010_4B24
 * @implements B536:06CB:0010:4B24 ()
 *
 * Called From: B536:0708:0025:8787
 * Called From: B536:0708:0026:9447
 */
void f__B536_06CB_0010_4B24()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_di, -0x7DD5));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06DB); emu_cs = 0x2521; f__2521_000F_0022_2292();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_06DB_002A_A0D1();
}

/**
 * Decompiled function f__B536_06DB_002A_A0D1()
 *
 * @name f__B536_06DB_002A_A0D1
 * @implements B536:06DB:002A:A0D1 ()
 *
 * Called From: B536:06DB:0010:4B24
 */
void f__B536_06DB_002A_A0D1()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B536_06F0_0015_2CE0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x06F0; emu_last_cs = 0xB536; emu_last_ip = 0x06EB; emu_last_length = 0x002A; emu_last_crc = 0xA0D1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0705; emu_last_cs = 0xB536; emu_last_ip = 0x06F4; emu_last_length = 0x002A; emu_last_crc = 0xA0D1; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (!emu_flags.zf) { f__B536_0705_0026_9447(); return; }
	emu_movw(&emu_si, emu_di);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3198), 0x0);
	emu_ip = 0x070A; emu_last_cs = 0xB536; emu_last_ip = 0x0703; emu_last_length = 0x002A; emu_last_crc = 0xA0D1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_06F0_0015_2CE0()
 *
 * @name f__B536_06F0_0015_2CE0
 * @implements B536:06F0:0015:2CE0 ()
 *
 * Called From: B536:06E3:002A:A0D1
 */
void f__B536_06F0_0015_2CE0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0705; emu_last_cs = 0xB536; emu_last_ip = 0x06F4; emu_last_length = 0x0015; emu_last_crc = 0x2CE0; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (!emu_flags.zf) { f__B536_0705_0026_9447(); return; }
	emu_movw(&emu_si, emu_di);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3198), 0x0);
	f__B536_070A_0021_89EB(); return;
}

/**
 * Decompiled function f__B536_0705_0026_9447()
 *
 * @name f__B536_0705_0026_9447
 * @implements B536:0705:0026:9447 ()
 *
 * Called From: B536:06FA:002A:A0D1
 * Called From: B536:06FA:0015:2CE0
 */
void f__B536_0705_0026_9447()
{
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B536_06CB_0010_4B24(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x072E; emu_last_cs = 0xB536; emu_last_ip = 0x070C; emu_last_length = 0x0026; emu_last_crc = 0x9447; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x66CB), 0x0);
	if (emu_flags.zf) { emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x0713; emu_last_length = 0x0026; emu_last_crc = 0x9447; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x3198));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x071B; emu_last_length = 0x0026; emu_last_crc = 0x9447; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3198), 0x1);
	emu_ip = 0x072E; emu_last_cs = 0xB536; emu_last_ip = 0x0729; emu_last_length = 0x0026; emu_last_crc = 0x9447; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_0706_0025_8787()
 *
 * @name f__B536_0706_0025_8787
 * @implements B536:0706:0025:8787 ()
 *
 * Called From: B536:06C9:002B:8217
 */
void f__B536_0706_0025_8787()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B536_06CB_0010_4B24(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x072E; emu_last_cs = 0xB536; emu_last_ip = 0x070C; emu_last_length = 0x0025; emu_last_crc = 0x8787; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x66CB), 0x0);
	if (emu_flags.zf) { emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x0713; emu_last_length = 0x0025; emu_last_crc = 0x8787; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x3198));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x071B; emu_last_length = 0x0025; emu_last_crc = 0x8787; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3198), 0x1);
	emu_ip = 0x072E; emu_last_cs = 0xB536; emu_last_ip = 0x0729; emu_last_length = 0x0025; emu_last_crc = 0x8787; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_070A_0021_89EB()
 *
 * @name f__B536_070A_0021_89EB
 * @implements B536:070A:0021:89EB ()
 *
 * Called From: B536:0703:0015:2CE0
 */
void f__B536_070A_0021_89EB()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B536_072E_0024_CBE2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x66CB), 0x0);
	if (emu_flags.zf) { emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x0713; emu_last_length = 0x0021; emu_last_crc = 0x89EB; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x3198));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x071B; emu_last_length = 0x0021; emu_last_crc = 0x89EB; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3198), 0x1);
	emu_ip = 0x072E; emu_last_cs = 0xB536; emu_last_ip = 0x0729; emu_last_length = 0x0021; emu_last_crc = 0x89EB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_072E_0024_CBE2()
 *
 * @name f__B536_072E_0024_CBE2
 * @implements B536:072E:0024:CBE2 ()
 *
 * Called From: B536:06B3:002B:8217
 * Called From: B536:070C:0021:89EB
 */
void f__B536_072E_0024_CBE2()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x7DD5));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7DD5), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0752); emu_cs = 0x2BC2; f__2BC2_000A_0044_4A53();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_0752_0031_06ED();
}

/**
 * Decompiled function f__B536_0752_0031_06ED()
 *
 * @name f__B536_0752_0031_06ED
 * @implements B536:0752:0031:06ED ()
 *
 * Called From: B536:0752:0024:CBE2
 */
void f__B536_0752_0031_06ED()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x7DD5), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (!emu_flags.zf) { f__B536_076A_0019_63A4(); return; }
	emu_incw(&emu_si);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si, -0x7DD5), 0x20);
	if (!emu_flags.zf) { f__B536_0772_0011_E8E5(); return; }
	emu_incw(&emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0783); emu_cs = 0x01F7; emu_ip = 0x4079; emu_last_cs = 0xB536; emu_last_ip = 0x077E; emu_last_length = 0x0031; emu_last_crc = 0x06ED; emu_call(); // Jump does not resolve
	f__B536_0783_000D_0D1B();
}

/**
 * Decompiled function f__B536_076A_0019_63A4()
 *
 * @name f__B536_076A_0019_63A4
 * @implements B536:076A:0019:63A4 ()
 *
 * Called From: B536:0767:0031:06ED
 */
void f__B536_076A_0019_63A4()
{
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si, -0x7DD5), 0x20);
	if (!emu_flags.zf) { f__B536_0772_0011_E8E5(); return; }
	emu_incw(&emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0783); emu_cs = 0x01F7; emu_ip = 0x4079; emu_last_cs = 0xB536; emu_last_ip = 0x077E; emu_last_length = 0x0019; emu_last_crc = 0x63A4; emu_call(); // Jump does not resolve
	f__B536_0783_000D_0D1B();
}

/**
 * Decompiled function f__B536_0772_0011_E8E5()
 *
 * @name f__B536_0772_0011_E8E5
 * @implements B536:0772:0011:E8E5 ()
 *
 * Called From: B536:076F:0019:63A4
 * Called From: B536:076F:0031:06ED
 */
void f__B536_0772_0011_E8E5()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0783); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_0783_000D_0D1B();
}

/**
 * Decompiled function f__B536_0783_000D_0D1B()
 *
 * @name f__B536_0783_000D_0D1B
 * @implements B536:0783:000D:0D1B ()
 *
 * Called From: B536:0783:0011:E8E5
 */
void f__B536_0783_000D_0D1B()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0790); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_0790_000F_46F7();
}

/**
 * Decompiled function f__B536_0790_000F_46F7()
 *
 * @name f__B536_0790_000F_46F7
 * @implements B536:0790:000F:46F7 ()
 *
 * Called From: B536:0790:000D:0D1B
 */
void f__B536_0790_000F_46F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DD7), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x822B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x079F); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_079F_0025_EDFF();
}

/**
 * Decompiled function f__B536_079F_0025_EDFF()
 *
 * @name f__B536_079F_0025_EDFF
 * @implements B536:079F:0025:EDFF ()
 *
 * Called From: B536:079F:000F:46F7
 */
void f__B536_079F_0025_EDFF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DD9), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7DD7), 0x0);
	if (!emu_flags.zf) { f__B536_07B4_0010_5A73(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D63));
	if (emu_flags.cf) { f__B536_07C8_0006_137A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDB), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x66CD));
	emu_push(emu_cs);
	emu_push(0x07C4); emu_ip = 0x0633; emu_last_cs = 0xB536; emu_last_ip = 0x07C1; emu_last_length = 0x0025; emu_last_crc = 0xEDFF; emu_call(); // Jump does not resolve
	f__B536_07C4_000A_6DF9();
}

/**
 * Decompiled function f__B536_07B4_0010_5A73()
 *
 * @name f__B536_07B4_0010_5A73
 * @implements B536:07B4:0010:5A73 ()
 *
 * Called From: B536:07A9:0025:EDFF
 */
void f__B536_07B4_0010_5A73()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDB), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x66CD));
	emu_push(emu_cs);
	emu_push(0x07C4); f__B536_0633_000A_D156();
	f__B536_07C4_000A_6DF9();
}

/**
 * Decompiled function f__B536_07C4_000A_6DF9()
 *
 * @name f__B536_07C4_000A_6DF9
 * @implements B536:07C4:000A:6DF9 ()
 *
 * Called From: B536:07C4:0010:5A73
 */
void f__B536_07C4_000A_6DF9()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x3196));
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
 * Decompiled function f__B536_07C8_0006_137A()
 *
 * @name f__B536_07C8_0006_137A
 * @implements B536:07C8:0006:137A ()
 *
 * Called From: B536:07B2:0025:EDFF
 */
void f__B536_07C8_0006_137A()
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
 * Decompiled function f__B536_07CE_0032_A85E()
 *
 * @name f__B536_07CE_0032_A85E
 * @implements B536:07CE:0032:A85E ()
 *
 * Called From: B536:08A2:0017:5A50
 * Called From: B536:08C6:0024:E7C7
 * Called From: B536:08C6:0022:E09F
 */
void f__B536_07CE_0032_A85E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_dx.l, emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DE3));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DE1));
	if (emu_flags.zf) { f__B536_080B_0028_5E3C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7DE3));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B536_0800_0033_88E1(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DE1), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DE3), 0x0);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, 0x00, -0x7DE6));
	f__B536_080B_0028_5E3C(); return;
}

/**
 * Decompiled function f__B536_0800_0033_88E1()
 *
 * @name f__B536_0800_0033_88E1
 * @implements B536:0800:0033:88E1 ()
 *
 * Called From: B536:07EC:0032:A85E
 */
void f__B536_0800_0033_88E1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7DE3));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7DE3));
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B536_083E_0050_2222(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DDF));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DDD));
	if (emu_flags.zf) { emu_ip = 0x083E; emu_last_cs = 0xB536; emu_last_ip = 0x0819; emu_last_length = 0x0033; emu_last_crc = 0x88E1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7DDF));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0833; emu_last_cs = 0xB536; emu_last_ip = 0x0823; emu_last_length = 0x0033; emu_last_crc = 0x88E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDD), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDF), 0x0);
	emu_ip = 0x083E; emu_last_cs = 0xB536; emu_last_ip = 0x0831; emu_last_length = 0x0033; emu_last_crc = 0x88E1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B536_080B_0028_5E3C()
 *
 * @name f__B536_080B_0028_5E3C
 * @implements B536:080B:0028:5E3C ()
 *
 * Called From: B536:07E2:0032:A85E
 * Called From: B536:07FE:0032:A85E
 */
void f__B536_080B_0028_5E3C()
{
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x083E; emu_last_cs = 0xB536; emu_last_ip = 0x0810; emu_last_length = 0x0028; emu_last_crc = 0x5E3C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DDF));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7DDD));
	if (emu_flags.zf) { f__B536_083E_0050_2222(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7DDF));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B536_0833_005B_8704(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDD), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDF), 0x0);
	f__B536_083E_0050_2222(); return;
}

/**
 * Decompiled function f__B536_0833_005B_8704()
 *
 * @name f__B536_0833_005B_8704
 * @implements B536:0833:005B:8704 ()
 *
 * Called From: B536:0823:0028:5E3C
 */
void f__B536_0833_005B_8704()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7DDF));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x7DDF));
	emu_testb(&emu_dx.l, 0x80);
	if (emu_flags.zf) { f__B536_0878_0016_8CC6(); return; }
	emu_andb(&emu_dx.l, 0x7F);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_andb(&emu_ax.l, 0x7);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_andw(&emu_ax.x, 0x78);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_bx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x6E98));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, emu_bx.x,  0x6E88));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_dx.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_083E_0050_2222()
 *
 * @name f__B536_083E_0050_2222
 * @implements B536:083E:0050:2222 ()
 *
 * Called From: B536:0810:0033:88E1
 * Called From: B536:0819:0028:5E3C
 * Called From: B536:0831:0028:5E3C
 */
void f__B536_083E_0050_2222()
{
	emu_testb(&emu_dx.l, 0x80);
	if (emu_flags.zf) { f__B536_0878_0016_8CC6(); return; }
	emu_andb(&emu_dx.l, 0x7F);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_andb(&emu_ax.l, 0x7);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_andw(&emu_ax.x, 0x78);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_bx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x6E98));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ds, emu_bx.x,  0x6E88));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_dx.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_0878_0016_8CC6()
 *
 * @name f__B536_0878_0016_8CC6
 * @implements B536:0878:0016:8CC6 ()
 *
 * Called From: B536:0841:005B:8704
 * Called From: B536:0841:0050:2222
 */
void f__B536_0878_0016_8CC6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_dx.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_088E_0017_5A50()
 *
 * @name f__B536_088E_0017_5A50
 * @implements B536:088E:0017:5A50 ()
 *
 * Called From: B536:01AB:0006:006C
 * Called From: B536:01AB:0005:162C
 * Called From: B536:0217:0032:8537
 */
void f__B536_088E_0017_5A50()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE5));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B536_08A7_0022_E09F(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x821B);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x08A5); f__B536_07CE_0032_A85E();
	f__B536_08A5_0024_E7C7();
}

/**
 * Decompiled function f__B536_08A5_0024_E7C7()
 *
 * @name f__B536_08A5_0024_E7C7
 * @implements B536:08A5:0024:E7C7 ()
 *
 * Called From: B536:08A5:0017:5A50
 */
void f__B536_08A5_0024_E7C7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE5));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE5), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE4), 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE5));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x08CB; emu_last_cs = 0xB536; emu_last_ip = 0x08BE; emu_last_length = 0x0024; emu_last_crc = 0xE7C7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x821B);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x08C9); f__B536_07CE_0032_A85E();
	f__B536_08C9_0007_2BB4();
}

/**
 * Decompiled function f__B536_08A7_0022_E09F()
 *
 * @name f__B536_08A7_0022_E09F
 * @implements B536:08A7:0022:E09F ()
 *
 * Called From: B536:089A:0017:5A50
 */
void f__B536_08A7_0022_E09F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE5));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE4));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE5), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7DE4), 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00, -0x7DE5));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x08CB; emu_last_cs = 0xB536; emu_last_ip = 0x08BE; emu_last_length = 0x0022; emu_last_crc = 0xE09F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x821B);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x08C9); f__B536_07CE_0032_A85E();
	f__B536_08C9_0007_2BB4();
}

/**
 * Decompiled function f__B536_08C9_0007_2BB4()
 *
 * @name f__B536_08C9_0007_2BB4
 * @implements B536:08C9:0007:2BB4 ()
 *
 * Called From: B536:08C9:0024:E7C7
 * Called From: B536:08C9:0022:E09F
 */
void f__B536_08C9_0007_2BB4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	f__B536_08D0_0004_0F7A(); return;
}

/**
 * Decompiled function f__B536_08D0_0004_0F7A()
 *
 * @name f__B536_08D0_0004_0F7A
 * @implements B536:08D0:0004:0F7A ()
 *
 * Called From: B536:08CE:0007:2BB4
 */
void f__B536_08D0_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
