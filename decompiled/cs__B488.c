/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B488_0000_0027_45A9()
 *
 * @name f__B488_0000_0027_45A9
 * @implements B488:0000:0027:45A9 ()
 *
 * Called From: 3488:0020:0005:0000
 */
void f__B488_0000_0027_45A9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002A; emu_last_cs = 0xB488; emu_last_ip = 0x000C; emu_last_length = 0x0027; emu_last_crc = 0x45A9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0027); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0027_001F_F7F0();
}

/**
 * Decompiled function f__B488_0027_001F_F7F0()
 *
 * @name f__B488_0027_001F_F7F0
 * @implements B488:0027:001F:F7F0 ()
 *
 * Called From: B488:0027:0027:45A9
 */
void f__B488_0027_001F_F7F0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x7B8C);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, 0x280);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B488_0053_0009_D101(); return;
}

/**
 * Decompiled function f__B488_0046_0016_1484()
 *
 * @name f__B488_0046_0016_1484
 * @implements B488:0046:0016:1484 ()
 *
 * Called From: B488:0056:0009:D101
 * Called From: B488:0056:0016:1484
 */
void f__B488_0046_0016_1484()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0046_0016_1484(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B488_0069_0009_F10D(); return;
}

/**
 * Decompiled function f__B488_0053_0009_D101()
 *
 * @name f__B488_0053_0009_D101
 * @implements B488:0053:0009:D101 ()
 *
 * Called From: B488:0044:001F:F7F0
 */
void f__B488_0053_0009_D101()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0046_0016_1484(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0069; emu_last_cs = 0xB488; emu_last_ip = 0x005A; emu_last_length = 0x0009; emu_last_crc = 0xD101; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B488_005C_0016_348C()
 *
 * @name f__B488_005C_0016_348C
 * @implements B488:005C:0016:348C ()
 *
 * Called From: B488:006C:0009:F10D
 * Called From: B488:006C:0016:348C
 */
void f__B488_005C_0016_348C()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_005C_0016_348C(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B488_00BF_0009_F301(); return;
}

/**
 * Decompiled function f__B488_0069_0009_F10D()
 *
 * @name f__B488_0069_0009_F10D
 * @implements B488:0069:0009:F10D ()
 *
 * Called From: B488:005A:0016:1484
 */
void f__B488_0069_0009_F10D()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_005C_0016_348C(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x00BF; emu_last_cs = 0xB488; emu_last_ip = 0x0070; emu_last_length = 0x0009; emu_last_crc = 0xF10D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B488_0072_000D_6A91()
 *
 * @name f__B488_0072_000D_6A91
 * @implements B488:0072:000D:6A91 ()
 *
 * Called From: B488:00C2:0009:F301
 * Called From: B488:00C2:0049:2ABF
 */
void f__B488_0072_000D_6A91()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_007F_0049_2ABF();
}

/**
 * Decompiled function f__B488_007F_0049_2ABF()
 *
 * @name f__B488_007F_0049_2ABF
 * @implements B488:007F:0049:2ABF ()
 *
 * Called From: B488:007F:000D:6A91
 */
void f__B488_007F_0049_2ABF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_si);
	emu_movw(&emu_ax.x, emu_di);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0072_000D_6A91(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B488_0115_000D_EA2D(); return;
}

/**
 * Decompiled function f__B488_00BF_0009_F301()
 *
 * @name f__B488_00BF_0009_F301
 * @implements B488:00BF:0009:F301 ()
 *
 * Called From: B488:0070:0016:348C
 */
void f__B488_00BF_0009_F301()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0072_000D_6A91(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0115; emu_last_cs = 0xB488; emu_last_ip = 0x00C6; emu_last_length = 0x0009; emu_last_crc = 0xF301; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B488_00C8_000D_AA91()
 *
 * @name f__B488_00C8_000D_AA91
 * @implements B488:00C8:000D:AA91 ()
 *
 * Called From: B488:0118:000D:EA2D
 * Called From: B488:0118:004D:47BE
 */
void f__B488_00C8_000D_AA91()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_00D5_004D_47BE();
}

/**
 * Decompiled function f__B488_00D5_004D_47BE()
 *
 * @name f__B488_00D5_004D_47BE
 * @implements B488:00D5:004D:47BE ()
 *
 * Called From: B488:00D5:000D:AA91
 */
void f__B488_00D5_004D_47BE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_si);
	emu_movw(&emu_ax.x, emu_di);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_00C8_000D_AA91(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0122_000C_BEF6();
}

/**
 * Decompiled function f__B488_0115_000D_EA2D()
 *
 * @name f__B488_0115_000D_EA2D
 * @implements B488:0115:000D:EA2D ()
 *
 * Called From: B488:00C6:0049:2ABF
 */
void f__B488_0115_000D_EA2D()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_00C8_000D_AA91(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x2598; emu_ip = 0x0122; emu_last_cs = 0xB488; emu_last_ip = 0x011D; emu_last_length = 0x000D; emu_last_crc = 0xEA2D; emu_call(); // Jump does not resolve
	f__B488_0122_000C_BEF6();
}

/**
 * Decompiled function f__B488_0122_000C_BEF6()
 *
 * @name f__B488_0122_000C_BEF6
 * @implements B488:0122:000C:BEF6 ()
 *
 * Called From: B488:0122:004D:47BE
 */
void f__B488_0122_000C_BEF6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B488_01EC_000B_EB52(); return;
}

/**
 * Decompiled function f__B488_012E_000B_44F3()
 *
 * @name f__B488_012E_000B_44F3
 * @implements B488:012E:000B:44F3 ()
 *
 * Called From: B488:01F4:000B:EB52
 * Called From: B488:01F4:0021:5ACE
 */
void f__B488_012E_000B_44F3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B488_01B9_0008_42CA(); return;
}

/**
 * Decompiled function f__B488_0139_003C_6B9F()
 *
 * @name f__B488_0139_003C_6B9F
 * @implements B488:0139:003C:6B9F ()
 *
 * Called From: B488:01BE:0008:42CA
 * Called From: B488:01BE:000C:CB41
 */
void f__B488_0139_003C_6B9F()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_016D_0008_D19A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0175_000F_B531();
}

/**
 * Decompiled function f__B488_016D_0008_D19A()
 *
 * @name f__B488_016D_0008_D19A
 * @implements B488:016D:0008:D19A ()
 *
 * Called From: B488:0166:003C:6B9F
 */
void f__B488_016D_0008_D19A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0175_000F_B531();
}

/**
 * Decompiled function f__B488_0175_000F_B531()
 *
 * @name f__B488_0175_000F_B531
 * @implements B488:0175:000F:B531 ()
 *
 * Called From: B488:0175:0008:D19A
 * Called From: B488:0175:003C:6B9F
 */
void f__B488_0175_000F_B531()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666E);
	emu_push(0x0184);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_E39A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x017F; emu_last_length = 0x000F; emu_last_crc = 0xB531;
			emu_call();
			return;
	}
	f__B488_0184_000D_55E2();
}

/**
 * Decompiled function f__B488_0184_000D_55E2()
 *
 * @name f__B488_0184_000D_55E2
 * @implements B488:0184:000D:55E2 ()
 *
 * Called From: B488:0184:000F:B531
 */
void f__B488_0184_000D_55E2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0191); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0191_0024_0351();
}

/**
 * Decompiled function f__B488_0191_0024_0351()
 *
 * @name f__B488_0191_0024_0351
 * @implements B488:0191:0024:0351 ()
 *
 * Called From: B488:0191:000D:55E2
 */
void f__B488_0191_0024_0351()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_flags.zf) { f__B488_01A4_0011_94F5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01B8; emu_last_cs = 0xB488; emu_last_ip = 0x019C; emu_last_length = 0x0024; emu_last_crc = 0x0351; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01B8; emu_last_cs = 0xB488; emu_last_ip = 0x01A2; emu_last_length = 0x0024; emu_last_crc = 0x0351; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66A2);
	emu_push(0x01B5);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x01B0; emu_last_length = 0x0024; emu_last_crc = 0x0351;
			emu_call();
			return;
	}
	f__B488_01B5_000C_CB41();
}

/**
 * Decompiled function f__B488_01A4_0011_94F5()
 *
 * @name f__B488_01A4_0011_94F5
 * @implements B488:01A4:0011:94F5 ()
 *
 * Called From: B488:0196:0024:0351
 */
void f__B488_01A4_0011_94F5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66A2);
	emu_push(0x01B5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: f__22A6_0F76_002C_45CC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x01B0; emu_last_length = 0x0011; emu_last_crc = 0x94F5;
			emu_call();
			return;
	}
	f__B488_01B5_000C_CB41();
}

/**
 * Decompiled function f__B488_01B5_000C_CB41()
 *
 * @name f__B488_01B5_000C_CB41
 * @implements B488:01B5:000C:CB41 ()
 *
 * Called From: B488:01B5:0011:94F5
 */
void f__B488_01B5_000C_CB41()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { f__B488_01C1_0015_1DDC(); return; }
	f__B488_0139_003C_6B9F(); return;
}

/**
 * Decompiled function f__B488_01B9_0008_42CA()
 *
 * @name f__B488_01B9_0008_42CA
 * @implements B488:01B9:0008:42CA ()
 *
 * Called From: B488:0136:000B:44F3
 */
void f__B488_01B9_0008_42CA()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { emu_ip = 0x01C1; emu_last_cs = 0xB488; emu_last_ip = 0x01BC; emu_last_length = 0x0008; emu_last_crc = 0x42CA; emu_call(); return; } // Jump does not resolve
	f__B488_0139_003C_6B9F(); return;
}

/**
 * Decompiled function f__B488_01C1_0015_1DDC()
 *
 * @name f__B488_01C1_0015_1DDC
 * @implements B488:01C1:0015:1DDC ()
 *
 * Called From: B488:01BC:000C:CB41
 */
void f__B488_01C1_0015_1DDC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	f__B488_01D6_0021_5ACE(); return;
}

/**
 * Decompiled function f__B488_01D6_0021_5ACE()
 *
 * @name f__B488_01D6_0021_5ACE
 * @implements B488:01D6:0021:5ACE ()
 *
 * Called From: B488:01D4:0015:1DDC
 * Called From: B488:01E7:0021:5ACE
 */
void f__B488_01D6_0021_5ACE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_flags.cf) { emu_ip = 0x01D6; emu_last_cs = 0xB488; emu_last_ip = 0x01E0; emu_last_length = 0x0021; emu_last_crc = 0x5ACE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x01E9; emu_last_cs = 0xB488; emu_last_ip = 0x01E2; emu_last_length = 0x0021; emu_last_crc = 0x5ACE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.cf) { f__B488_01D6_0021_5ACE(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { f__B488_01F7_000B_5A70(); return; }
	f__B488_012E_000B_44F3(); return;
}

/**
 * Decompiled function f__B488_01EC_000B_EB52()
 *
 * @name f__B488_01EC_000B_EB52
 * @implements B488:01EC:000B:EB52 ()
 *
 * Called From: B488:012B:000C:BEF6
 */
void f__B488_01EC_000B_EB52()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { emu_ip = 0x01F7; emu_last_cs = 0xB488; emu_last_ip = 0x01F2; emu_last_length = 0x000B; emu_last_crc = 0xEB52; emu_call(); return; } // Jump does not resolve
	f__B488_012E_000B_44F3(); return;
}

/**
 * Decompiled function f__B488_01F7_000B_5A70()
 *
 * @name f__B488_01F7_000B_5A70
 * @implements B488:01F7:000B:5A70 ()
 *
 * Called From: B488:01F2:0021:5ACE
 */
void f__B488_01F7_000B_5A70()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0202; emu_last_cs = 0xB488; emu_last_ip = 0x01FB; emu_last_length = 0x000B; emu_last_crc = 0x5A70; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0202); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0202_0008_5199();
}

/**
 * Decompiled function f__B488_0202_0008_5199()
 *
 * @name f__B488_0202_0008_5199
 * @implements B488:0202:0008:5199 ()
 *
 * Called From: B488:0202:000B:5A70
 */
void f__B488_0202_0008_5199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x020A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_020A_0007_F77C();
}

/**
 * Decompiled function f__B488_020A_0007_F77C()
 *
 * @name f__B488_020A_0007_F77C
 * @implements B488:020A:0007:F77C ()
 *
 * Called From: B488:020A:0008:5199
 */
void f__B488_020A_0007_F77C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
