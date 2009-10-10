/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B536_0129_000A_8178()
 *
 * @name f__B536_0129_000A_8178
 * @implements B536:0129:000A:8178 ()
 *
 * Called From: 3536:002F:0005:0000
 */
void f__B536_0129_000A_8178()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x6C8C), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_0148_0060_01F3()
 *
 * @name f__B536_0148_0060_01F3
 * @implements B536:0148:0060:01F3 ()
 *
 * Called From: 3536:0039:0005:0000
 */
void f__B536_0148_0060_01F3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_bp + 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3198), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8227), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8229), emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x822B), 0x0);
	emu_movb(&emu_al, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821C), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821B), emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8223), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8221), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x821F), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x821D), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B536_01A9_0005_FAB8(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x01A8); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_01A8_0006_9EB9();
}

/**
 * Decompiled function f__B536_01A8_0006_9EB9()
 *
 * @name f__B536_01A8_0006_9EB9
 * @implements B536:01A8:0006:9EB9 ()
 *
 */
void f__B536_01A8_0006_9EB9()
{
	emu_pop(&emu_cx);
	f__B536_01A9_0005_FAB8(); return;
}

/**
 * Decompiled function f__B536_01A9_0005_FAB8()
 *
 * @name f__B536_01A9_0005_FAB8
 * @implements B536:01A9:0005:FAB8 ()
 *
 * Called From: B536:049D:0003:23A2
 */
void f__B536_01A9_0005_FAB8()
{
	emu_push(emu_cs);
	emu_push(0x01AE); f__B536_088E_0017_56C5();
	f__B536_01AE_000E_5BB9();
}

/**
 * Decompiled function f__B536_01AE_000E_5BB9()
 *
 * @name f__B536_01AE_000E_5BB9
 * @implements B536:01AE:000E:5BB9 ()
 *
 */
void f__B536_01AE_000E_5BB9()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x3), emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B536_01BC_000C_EA0C(); return; }
	f__B536_04A0_000C_EFFF(); return;
}

/**
 * Decompiled function f__B536_01BC_000C_EA0C()
 *
 * @name f__B536_01BC_000C_EA0C
 * @implements B536:01BC:000C:EA0C ()
 *
 * Called From: B536:01B7:000E:5BB9
 */
void f__B536_01BC_000C_EA0C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821D));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821F));
	if (emu_flags.zf) { f__B536_01C8_0009_451E(); return; }
	f__B536_0263_000F_4AE1(); return;
}

/**
 * Decompiled function f__B536_01C8_0009_451E()
 *
 * @name f__B536_01C8_0009_451E
 * @implements B536:01C8:0009:451E ()
 *
 * Called From: B536:01C3:000C:EA0C
 */
void f__B536_01C8_0009_451E()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x3), 0x25);
	if (emu_flags.zf) { f__B536_01D1_000A_DD58(); return; }
	f__B536_0263_000F_4AE1(); return;
}

/**
 * Decompiled function f__B536_01D1_000A_DD58()
 *
 * @name f__B536_01D1_000A_DD58
 * @implements B536:01D1:000A:DD58 ()
 *
 * Called From: B536:01CC:0009:451E
 */
void f__B536_01D1_000A_DD58()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x821B));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x01F7; f__01F7_1097_0010_64C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_01DB_000D_0562();
}

/**
 * Decompiled function f__B536_01DB_000D_0562()
 *
 * @name f__B536_01DB_000D_0562
 * @implements B536:01DB:000D:0562 ()
 *
 */
void f__B536_01DB_000D_0562()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x64);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021F; emu_last_cs = 0xB536; emu_last_ip = 0x01DF; emu_last_length = 0x000D; emu_last_crc = 0x0562; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x73);
	if (emu_flags.zf) { f__B536_01E8_0032_5EA7(); return; }
	/* Unresolved jump */ emu_ip = 0x0261; emu_last_cs = 0xB536; emu_last_ip = 0x01E6; emu_last_length = 0x000D; emu_last_crc = 0x0562; emu_call();
}

/**
 * Decompiled function f__B536_01E8_0032_5EA7()
 *
 * @name f__B536_01E8_0032_5EA7
 * @implements B536:01E8:0032:5EA7 ()
 *
 * Called From: B536:01E4:000D:0562
 */
void f__B536_01E8_0032_5EA7()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xFFFE));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xFFFC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x821F), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x821D), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821D));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821F));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021D; emu_last_cs = 0xB536; emu_last_ip = 0x0205; emu_last_length = 0x0032; emu_last_crc = 0x5EA7; emu_call(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x821C));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821A), emu_al);
	emu_movb(&emu_al, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821C), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821B), emu_al);
	emu_push(emu_cs);
	emu_push(0x021A); f__B536_088E_0017_56C5();
	f__B536_021A_0005_99DE();
}

/**
 * Decompiled function f__B536_021A_0005_99DE()
 *
 * @name f__B536_021A_0005_99DE
 * @implements B536:021A:0005:99DE ()
 *
 */
void f__B536_021A_0005_99DE()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x3), emu_al);
	f__B536_0263_000F_4AE1(); return;
}

/**
 * Decompiled function f__B536_0263_000F_4AE1()
 *
 * @name f__B536_0263_000F_4AE1
 * @implements B536:0263:000F:4AE1 ()
 *
 * Called From: B536:01C5:000C:EA0C
 * Called From: B536:01CE:0009:451E
 * Called From: B536:021D:0005:99DE
 */
void f__B536_0263_000F_4AE1()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_bx, 0x1C);
	if ((emu_flags.cf || emu_flags.zf)) { f__B536_0272_0007_6ABE(); return; }
	f__B536_0463_0009_A1E6(); return;
}

/**
 * Decompiled function f__B536_0272_0007_6ABE()
 *
 * @name f__B536_0272_0007_6ABE
 * @implements B536:0272:0007:6ABE ()
 *
 * Called From: B536:026D:000F:4AE1
 */
void f__B536_0272_0007_6ABE()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x500);
	switch (emu_ip) {
		case 0x0338: f__B536_0338_0005_78BD(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB536; emu_last_ip = 0x0274; emu_last_length = 0x0007; emu_last_crc = 0x6ABE;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B536_0338_0005_78BD()
 *
 * @name f__B536_0338_0005_78BD
 * @implements B536:0338:0005:78BD ()
 *
 * Called From: B536:0274:0007:6ABE
 */
void f__B536_0338_0005_78BD()
{
	emu_push(emu_cs);
	emu_push(0x033D); f__B536_0633_000A_6A3F();
	f__B536_033D_0011_B8BF();
}

/**
 * Decompiled function f__B536_033D_0011_B8BF()
 *
 * @name f__B536_033D_0011_B8BF
 * @implements B536:033D:0011:B8BF ()
 *
 */
void f__B536_033D_0011_B8BF()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x3196));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x9935), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9933));
	f__B536_049D_0003_23A2(); return;
}

/**
 * Decompiled function f__B536_0463_0009_A1E6()
 *
 * @name f__B536_0463_0009_A1E6
 * @implements B536:0463:0009:A1E6 ()
 *
 * Called From: B536:026F:000F:4AE1
 */
void f__B536_0463_0009_A1E6()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046C); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_046C_002F_1EA6();
}

/**
 * Decompiled function f__B536_046C_002F_1EA6()
 *
 * @name f__B536_046C_002F_1EA6
 * @implements B536:046C:002F:1EA6 ()
 *
 */
void f__B536_046C_002F_1EA6()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8227), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8229));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x3));
	emu_movb(&emu_get_memory8(emu_ds, emu_bx, 0x822B), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8229));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8229));
	emu_movb(&emu_get_memory8(emu_ds, emu_bx, 0x822B), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8227));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D63));
	if ((emu_flags.cf || emu_flags.zf)) { f__B536_049B_0002_C03A(); return; }
	emu_push(emu_cs);
	emu_push(0x049B); f__B536_0633_000A_6A3F();
	f__B536_049B_0002_C03A();
}

/**
 * Decompiled function f__B536_049B_0002_C03A()
 *
 * @name f__B536_049B_0002_C03A
 * @implements B536:049B:0002:C03A ()
 *
 * Called From: B536:0494:002F:1EA6
 */
void f__B536_049B_0002_C03A()
{
	f__B536_049D_0003_23A2(); return;
}

/**
 * Decompiled function f__B536_049D_0003_23A2()
 *
 * @name f__B536_049D_0003_23A2
 * @implements B536:049D:0003:23A2 ()
 *
 * Called From: B536:034B:0011:B8BF
 * Called From: B536:049B:0002:C03A
 */
void f__B536_049D_0003_23A2()
{
	f__B536_01A9_0005_FAB8(); return;
}

/**
 * Decompiled function f__B536_04A0_000C_EFFF()
 *
 * @name f__B536_04A0_000C_EFFF
 * @implements B536:04A0:000C:EFFF ()
 *
 * Called From: B536:01B9:000E:5BB9
 */
void f__B536_04A0_000C_EFFF()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8229), 0x0);
	if (emu_flags.zf) { f__B536_04AC_004E_C8CD(); return; }
	emu_push(emu_cs);
	emu_push(0x04AC); f__B536_0633_000A_6A3F();
	f__B536_04AC_004E_C8CD();
}

/**
 * Decompiled function f__B536_04AC_004E_C8CD()
 *
 * @name f__B536_04AC_004E_C8CD
 * @implements B536:04AC:004E:C8CD ()
 *
 */
void f__B536_04AC_004E_C8CD()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x406E), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9933));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x4070), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D5B), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x406A), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D59), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx, 0x406C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B536_04FA_0006_F7CE(); return; }
	emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2642; f__2642_0069_0008_D517();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_04FA_0006_F7CE();
}

/**
 * Decompiled function f__B536_04FA_0006_F7CE()
 *
 * @name f__B536_04FA_0006_F7CE
 * @implements B536:04FA:0006:F7CE ()
 *
 */
void f__B536_04FA_0006_F7CE()
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
 * Decompiled function f__B536_0633_000A_6A3F()
 *
 * @name f__B536_0633_000A_6A3F
 * @implements B536:0633:000A:6A3F ()
 *
 * Called From: B536:033A:0005:78BD
 * Called From: B536:0498:002F:1EA6
 * Called From: B536:04A9:000C:EFFF
 * Called From: B536:07C1:0010:3A58
 */
void f__B536_0633_000A_6A3F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	f__B536_064E_007D_44E1(); return;
}

/**
 * Decompiled function f__B536_064E_007D_44E1()
 *
 * @name f__B536_064E_007D_44E1
 * @implements B536:064E:007D:44E1 ()
 *
 * Called From: B536:063B:000A:6A3F
 */
void f__B536_064E_007D_44E1()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9933));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D5F));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x063D; emu_last_cs = 0xB536; emu_last_ip = 0x0655; emu_last_length = 0x007D; emu_last_crc = 0x44E1; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6E));
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9933));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D63));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D5F));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3196));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x6C8C), 0x0);
		if (!emu_flags.zf) {
			emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C70));
			emu_movws(&emu_ax, emu_al);
			emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6C));
			emu_imuluw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3199));
			emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
		}
	}
	f__B536_06A0_002B_7C16(); return;
}

/**
 * Decompiled function f__B536_06A0_002B_7C16()
 *
 * @name f__B536_06A0_002B_7C16
 * @implements B536:06A0:002B:7C16 ()
 *
 * Called From: B536:0688:007D:44E1
 */
void f__B536_06A0_002B_7C16()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x8229));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8227));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B536_072E_0024_12A7(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, emu_si);
	emu_decw(&emu_ax);
	emu_movw(&emu_di, emu_ax);
	f__B536_0706_0025_C982(); return;
}

/**
 * Decompiled function f__B536_06CB_0010_4E1D()
 *
 * @name f__B536_06CB_0010_4E1D
 * @implements B536:06CB:0010:4E1D ()
 *
 * Called From: B536:0708:0025:C982
 * Called From: B536:0708:0026:F583
 */
void f__B536_06CB_0010_4E1D()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_di, 0x822B));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06DB); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_06DB_002A_F627();
}

/**
 * Decompiled function f__B536_06DB_002A_F627()
 *
 * @name f__B536_06DB_002A_F627
 * @implements B536:06DB:002A:F627 ()
 *
 */
void f__B536_06DB_002A_F627()
{
	emu_pop(&emu_cx);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
		if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
			emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
		}
	}
	f__B536_06F0_0015_70D0(); return;
}

/**
 * Decompiled function f__B536_06F0_0015_70D0()
 *
 * @name f__B536_06F0_0015_70D0
 * @implements B536:06F0:0015:70D0 ()
 *
 * Called From: B536:06E3:002A:F627
 */
void f__B536_06F0_0015_70D0()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B536_0705_0026_F583(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (!emu_flags.zf) { f__B536_0705_0026_F583(); return; }
	emu_movw(&emu_si, emu_di);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3198), 0x0);
	f__B536_070A_0021_7605(); return;
}

/**
 * Decompiled function f__B536_0705_0026_F583()
 *
 * @name f__B536_0705_0026_F583
 * @implements B536:0705:0026:F583 ()
 *
 * Called From: B536:06FA:002A:F627
 * Called From: B536:06FA:0015:70D0
 */
void f__B536_0705_0026_F583()
{
	emu_decw(&emu_di);
	f__B536_0706_0025_C982(); return;
}

/**
 * Decompiled function f__B536_0706_0025_C982()
 *
 * @name f__B536_0706_0025_C982
 * @implements B536:0706:0025:C982 ()
 *
 * Called From: B536:06C9:002B:7C16
 */
void f__B536_0706_0025_C982()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B536_06CB_0010_4E1D(); return; }
	f__B536_070A_0021_7605(); return;
}

/**
 * Decompiled function f__B536_070A_0021_7605()
 *
 * @name f__B536_070A_0021_7605
 * @implements B536:070A:0021:7605 ()
 *
 * Called From: B536:0703:0015:70D0
 */
void f__B536_070A_0021_7605()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x9935), 0x0);
		if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x0713; emu_last_length = 0x0021; emu_last_crc = 0x7605; emu_call(); return; }
		emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x3198));
		emu_movws(&emu_ax, emu_al);
		emu_orw(&emu_ax, emu_ax);
		if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x072B; emu_last_cs = 0xB536; emu_last_ip = 0x071B; emu_last_length = 0x0021; emu_last_crc = 0x7605; emu_call(); return; }
		emu_xorw(&emu_ax, emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
		emu_movw(&emu_si, emu_ax);
		emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3198), 0x1);
	}
	f__B536_072E_0024_12A7(); return;
}

/**
 * Decompiled function f__B536_072E_0024_12A7()
 *
 * @name f__B536_072E_0024_12A7
 * @implements B536:072E:0024:12A7 ()
 *
 * Called From: B536:06B3:002B:7C16
 * Called From: B536:070C:0021:7605
 */
void f__B536_072E_0024_12A7()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_si, 0x822B));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, emu_si, 0x822B), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x822B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0752); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_0752_0031_E2A6();
}

/**
 * Decompiled function f__B536_0752_0031_E2A6()
 *
 * @name f__B536_0752_0031_E2A6
 * @implements B536:0752:0031:E2A6 ()
 *
 */
void f__B536_0752_0031_E2A6()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x9935), emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_movb(&emu_get_memory8(emu_ds, emu_si, 0x822B), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x20);
	if (emu_flags.zf) {
		emu_incw(&emu_si);
	}
	f__B536_076A_0019_782C(); return;
}

/**
 * Decompiled function f__B536_076A_0019_782C()
 *
 * @name f__B536_076A_0019_782C
 * @implements B536:076A:0019:782C ()
 *
 * Called From: B536:0767:0031:E2A6
 */
void f__B536_076A_0019_782C()
{
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si, 0x822B), 0x20);
	if (emu_flags.zf) {
		emu_incw(&emu_si);
	}
	f__B536_0772_0011_1D0E(); return;
}

/**
 * Decompiled function f__B536_0772_0011_1D0E()
 *
 * @name f__B536_0772_0011_1D0E
 * @implements B536:0772:0011:1D0E ()
 *
 * Called From: B536:076F:0019:782C
 * Called From: B536:076F:0031:E2A6
 */
void f__B536_0772_0011_1D0E()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x822B);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x822B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0783); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_0783_000D_EADB();
}

/**
 * Decompiled function f__B536_0783_000D_EADB()
 *
 * @name f__B536_0783_000D_EADB
 * @implements B536:0783:000D:EADB ()
 *
 */
void f__B536_0783_000D_EADB()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x822B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0790); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_0790_000F_8263();
}

/**
 * Decompiled function f__B536_0790_000F_8263()
 *
 * @name f__B536_0790_000F_8263
 * @implements B536:0790:000F:8263 ()
 *
 */
void f__B536_0790_000F_8263()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8229), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x822B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x079F); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3536) { ovl__3536(0xFF); }
	f__B536_079F_0025_1C79();
}

/**
 * Decompiled function f__B536_079F_0025_1C79()
 *
 * @name f__B536_079F_0025_1C79
 * @implements B536:079F:0025:1C79 ()
 *
 */
void f__B536_079F_0025_1C79()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8227), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8229), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9935));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D63));
		if (emu_flags.cf) { f__B536_07C8_0006_F7CE(); return; }
	}
	f__B536_07B4_0010_3A58(); return;
}

/**
 * Decompiled function f__B536_07B4_0010_3A58()
 *
 * @name f__B536_07B4_0010_3A58
 * @implements B536:07B4:0010:3A58 ()
 *
 * Called From: B536:07A9:0025:1C79
 */
void f__B536_07B4_0010_3A58()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8225), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x9935), emu_ax);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x9933));
	emu_push(emu_cs);
	emu_push(0x07C4); f__B536_0633_000A_6A3F();
	f__B536_07C4_000A_5E6F();
}

/**
 * Decompiled function f__B536_07C4_000A_5E6F()
 *
 * @name f__B536_07C4_000A_5E6F
 * @implements B536:07C4:000A:5E6F ()
 *
 */
void f__B536_07C4_000A_5E6F()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x3196));
	f__B536_07C8_0006_F7CE(); return;
}

/**
 * Decompiled function f__B536_07C8_0006_F7CE()
 *
 * @name f__B536_07C8_0006_F7CE
 * @implements B536:07C8:0006:F7CE ()
 *
 * Called From: B536:07B2:0025:1C79
 */
void f__B536_07C8_0006_F7CE()
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
 * Decompiled function f__B536_07CE_0032_AF6A()
 *
 * @name f__B536_07CE_0032_AF6A
 * @implements B536:07CE:0032:AF6A ()
 *
 * Called From: B536:08A2:0017:56C5
 * Called From: B536:08C6:0024:D73B
 * Called From: B536:08C6:0022:4C1E
 */
void f__B536_07CE_0032_AF6A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movb(&emu_al, 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
	emu_movb(&emu_dl, emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821D));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x821F));
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x821D));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
		if (!emu_flags.zf) { f__B536_0800_0033_ED56(); return; }
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x821F), 0x0);
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x821D), 0x0);
		emu_movb(&emu_dl, emu_get_memory8(emu_ds, 0x00, 0x821A));
	}
	f__B536_080B_0028_450A(); return;
}

/**
 * Decompiled function f__B536_0800_0033_ED56()
 *
 * @name f__B536_0800_0033_ED56
 * @implements B536:0800:0033:ED56 ()
 *
 * Called From: B536:07EC:0032:AF6A
 */
void f__B536_0800_0033_ED56()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x821D));
	emu_movb(&emu_dl, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x821D));
	f__B536_080B_0028_450A(); return;
}

/**
 * Decompiled function f__B536_080B_0028_450A()
 *
 * @name f__B536_080B_0028_450A
 * @implements B536:080B:0028:450A ()
 *
 * Called From: B536:07E2:0032:AF6A
 * Called From: B536:07FE:0032:AF6A
 */
void f__B536_080B_0028_450A()
{
	emu_movb(&emu_al, emu_dl);
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8221));
		emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8223));
		if (!emu_flags.zf) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8221));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
			if (!emu_flags.zf) { f__B536_0833_005B_8E64(); return; }
			emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8223), 0x0);
			emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8221), 0x0);
		}
	}
	f__B536_083E_0050_D2DD(); return;
}

/**
 * Decompiled function f__B536_0833_005B_8E64()
 *
 * @name f__B536_0833_005B_8E64
 * @implements B536:0833:005B:8E64 ()
 *
 * Called From: B536:0823:0028:450A
 */
void f__B536_0833_005B_8E64()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8221));
	emu_movb(&emu_dl, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8221));
	f__B536_083E_0050_D2DD(); return;
}

/**
 * Decompiled function f__B536_083E_0050_D2DD()
 *
 * @name f__B536_083E_0050_D2DD
 * @implements B536:083E:0050:D2DD ()
 *
 * Called From: B536:0810:0033:ED56
 * Called From: B536:0819:0028:450A
 * Called From: B536:0831:0028:450A
 */
void f__B536_083E_0050_D2DD()
{
	emu_testb(&emu_dl, 0x80);
	if (!emu_flags.zf) {
		emu_andb(&emu_dl, 0x7F);
		emu_movb(&emu_al, emu_dl);
		emu_andb(&emu_al, 0x7);
		emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
		emu_movb(&emu_al, emu_dl);
		emu_movws(&emu_ax, emu_al);
		emu_andw(&emu_ax, 0x78);
		emu_movb(&emu_cl, 0x3);
		emu_sarw(&emu_ax, emu_cl);
		emu_movb(&emu_dl, emu_al);
		emu_movb(&emu_al, emu_dl);
		emu_movws(&emu_ax, emu_al);
		emu_movb(&emu_cl, 0x3);
		emu_shlw(&emu_ax, emu_cl);
		emu_push(emu_ax);
		emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x1));
		emu_movws(&emu_ax, emu_al);
		emu_pop(&emu_bx);
		emu_addw(&emu_bx, emu_ax);
		emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x6E98));
		emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
		emu_movb(&emu_al, emu_dl);
		emu_movws(&emu_ax, emu_al);
		emu_movw(&emu_bx, emu_ax);
		emu_movb(&emu_dl, emu_get_memory8(emu_ds, emu_bx, 0x6E88));
	}
	f__B536_0878_0016_607A(); return;
}

/**
 * Decompiled function f__B536_0878_0016_607A()
 *
 * @name f__B536_0878_0016_607A
 * @implements B536:0878:0016:607A ()
 *
 * Called From: B536:0841:005B:8E64
 * Called From: B536:0841:0050:D2DD
 */
void f__B536_0878_0016_607A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_dl);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B536_088E_0017_56C5()
 *
 * @name f__B536_088E_0017_56C5
 * @implements B536:088E:0017:56C5 ()
 *
 * Called From: B536:01AB:0006:9EB9
 * Called From: B536:01AB:0005:FAB8
 * Called From: B536:0217:0032:5EA7
 */
void f__B536_088E_0017_56C5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x821B));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B536_08A7_0022_4C1E(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x821B);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x08A5); f__B536_07CE_0032_AF6A();
	f__B536_08A5_0024_D73B();
}

/**
 * Decompiled function f__B536_08A5_0024_D73B()
 *
 * @name f__B536_08A5_0024_D73B
 * @implements B536:08A5:0024:D73B ()
 *
 */
void f__B536_08A5_0024_D73B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B536_08A7_0022_4C1E(); return;
}

/**
 * Decompiled function f__B536_08A7_0022_4C1E()
 *
 * @name f__B536_08A7_0022_4C1E
 * @implements B536:08A7:0022:4C1E ()
 *
 * Called From: B536:089A:0017:56C5
 */
void f__B536_08A7_0022_4C1E()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x821B));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x821C));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821B), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x821C), 0x0);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x821B));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08CB; emu_last_cs = 0xB536; emu_last_ip = 0x08BE; emu_last_length = 0x0022; emu_last_crc = 0x4C1E; emu_call(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x821B);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x08C9); f__B536_07CE_0032_AF6A();
	f__B536_08C9_0007_DF3D();
}

/**
 * Decompiled function f__B536_08C9_0007_DF3D()
 *
 * @name f__B536_08C9_0007_DF3D
 * @implements B536:08C9:0007:DF3D ()
 *
 */
void f__B536_08C9_0007_DF3D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x1));
	f__B536_08D0_0004_893F(); return;
}

/**
 * Decompiled function f__B536_08D0_0004_893F()
 *
 * @name f__B536_08D0_0004_893F
 * @implements B536:08D0:0004:893F ()
 *
 * Called From: B536:08CE:0007:DF3D
 */
void f__B536_08D0_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
