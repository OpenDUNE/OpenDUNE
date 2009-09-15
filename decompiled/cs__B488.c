/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B488_0000_0027_30C7()
 *
 * @name f__B488_0000_0027_30C7
 * @implements B488:0000:0027:30C7 ()
 *
 * Called From: 3488:0020:0005:1D68
 * Called From: 3488:0020:0005:1D72
 * Called From: 3488:0020:0005:1DB4
 * Called From: 3488:0020:0005:1E3C
 * Called From: 3488:0020:0005:1E46
 * Called From: 3488:0020:0005:1E84
 * Called From: 3488:0020:0005:1EA6
 * Called From: 3488:0020:0005:1F32
 * Called From: 3488:0020:0005:1F50
 * Called From: 3488:0020:0005:1FEE
 */
void f__B488_0000_0027_30C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x002A; emu_last_cs = 0xB488; emu_last_ip = 0x000C; emu_last_length = 0x0027; emu_last_crc = 0x30C7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0027); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0027_001F_D15B();
}

/**
 * Decompiled function f__B488_0027_001F_D15B()
 *
 * @name f__B488_0027_001F_D15B
 * @implements B488:0027:001F:D15B ()
 *
 * Called From: B488:0027:0027:30C7
 */
void f__B488_0027_001F_D15B()
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
	f__B488_0053_0009_0376(); return;
}

/**
 * Decompiled function f__B488_0046_0016_400D()
 *
 * @name f__B488_0046_0016_400D
 * @implements B488:0046:0016:400D ()
 *
 * Called From: B488:0056:0009:0376
 * Called From: B488:0056:0016:400D
 */
void f__B488_0046_0016_400D()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0046_0016_400D(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B488_0069_0009_00F6(); return;
}

/**
 * Decompiled function f__B488_0053_0009_0376()
 *
 * @name f__B488_0053_0009_0376
 * @implements B488:0053:0009:0376 ()
 *
 * Called From: B488:0044:001F:D15B
 */
void f__B488_0053_0009_0376()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0046_0016_400D(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0069; emu_last_cs = 0xB488; emu_last_ip = 0x005A; emu_last_length = 0x0009; emu_last_crc = 0x0376; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B488_005C_0016_4389()
 *
 * @name f__B488_005C_0016_4389
 * @implements B488:005C:0016:4389 ()
 *
 * Called From: B488:006C:0009:00F6
 * Called From: B488:006C:0016:4389
 */
void f__B488_005C_0016_4389()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_005C_0016_4389(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B488_00BF_0009_0BF6(); return;
}

/**
 * Decompiled function f__B488_0069_0009_00F6()
 *
 * @name f__B488_0069_0009_00F6
 * @implements B488:0069:0009:00F6 ()
 *
 * Called From: B488:005A:0016:400D
 */
void f__B488_0069_0009_00F6()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_005C_0016_4389(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x00BF; emu_last_cs = 0xB488; emu_last_ip = 0x0070; emu_last_length = 0x0009; emu_last_crc = 0x00F6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B488_0072_000D_8402()
 *
 * @name f__B488_0072_000D_8402
 * @implements B488:0072:000D:8402 ()
 *
 * Called From: B488:00C2:0009:0BF6
 * Called From: B488:00C2:0049:182D
 */
void f__B488_0072_000D_8402()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_007F_0049_182D();
}

/**
 * Decompiled function f__B488_007F_0049_182D()
 *
 * @name f__B488_007F_0049_182D
 * @implements B488:007F:0049:182D ()
 *
 * Called From: B488:007F:000D:8402
 */
void f__B488_007F_0049_182D()
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
	if (emu_flags.cf) { f__B488_0072_000D_8402(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B488_0115_000D_256A(); return;
}

/**
 * Decompiled function f__B488_00BF_0009_0BF6()
 *
 * @name f__B488_00BF_0009_0BF6
 * @implements B488:00BF:0009:0BF6 ()
 *
 * Called From: B488:0070:0016:4389
 */
void f__B488_00BF_0009_0BF6()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) { f__B488_0072_000D_8402(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0115; emu_last_cs = 0xB488; emu_last_ip = 0x00C6; emu_last_length = 0x0009; emu_last_crc = 0x0BF6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B488_00C8_000D_B402()
 *
 * @name f__B488_00C8_000D_B402
 * @implements B488:00C8:000D:B402 ()
 *
 * Called From: B488:0118:000D:256A
 * Called From: B488:0118:004D:1A9B
 */
void f__B488_00C8_000D_B402()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_00D5_004D_1A9B();
}

/**
 * Decompiled function f__B488_00D5_004D_1A9B()
 *
 * @name f__B488_00D5_004D_1A9B
 * @implements B488:00D5:004D:1A9B ()
 *
 * Called From: B488:00D5:000D:B402
 */
void f__B488_00D5_004D_1A9B()
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
	if (emu_flags.cf) { f__B488_00C8_000D_B402(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0122_000C_C0B1();
}

/**
 * Decompiled function f__B488_0115_000D_256A()
 *
 * @name f__B488_0115_000D_256A
 * @implements B488:0115:000D:256A ()
 *
 * Called From: B488:00C6:0049:182D
 */
void f__B488_0115_000D_256A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) { f__B488_00C8_000D_B402(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x2598; emu_ip = 0x0122; emu_last_cs = 0xB488; emu_last_ip = 0x011D; emu_last_length = 0x000D; emu_last_crc = 0x256A; emu_call(); // Jump does not resolve
	f__B488_0122_000C_C0B1();
}

/**
 * Decompiled function f__B488_0122_000C_C0B1()
 *
 * @name f__B488_0122_000C_C0B1
 * @implements B488:0122:000C:C0B1 ()
 *
 * Called From: B488:0122:004D:1A9B
 */
void f__B488_0122_000C_C0B1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B488_01EC_000B_BB3E(); return;
}

/**
 * Decompiled function f__B488_012E_000B_324C()
 *
 * @name f__B488_012E_000B_324C
 * @implements B488:012E:000B:324C ()
 *
 * Called From: B488:01F4:000B:BB3E
 * Called From: B488:01F4:0021:CD5C
 */
void f__B488_012E_000B_324C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B488_01B9_0008_0B86(); return;
}

/**
 * Decompiled function f__B488_0139_003C_0ED8()
 *
 * @name f__B488_0139_003C_0ED8
 * @implements B488:0139:003C:0ED8 ()
 *
 * Called From: B488:01BE:0008:0B86
 * Called From: B488:01BE:000C:8F88
 */
void f__B488_0139_003C_0ED8()
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
	if (emu_flags.cf) { f__B488_016D_0008_D6EA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0175_000F_CEAE();
}

/**
 * Decompiled function f__B488_016D_0008_D6EA()
 *
 * @name f__B488_016D_0008_D6EA
 * @implements B488:016D:0008:D6EA ()
 *
 * Called From: B488:0166:003C:0ED8
 */
void f__B488_016D_0008_D6EA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0175_000F_CEAE();
}

/**
 * Decompiled function f__B488_0175_000F_CEAE()
 *
 * @name f__B488_0175_000F_CEAE
 * @implements B488:0175:000F:CEAE ()
 *
 * Called From: B488:0175:0008:D6EA
 * Called From: B488:0175:003C:0ED8
 */
void f__B488_0175_000F_CEAE()
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
		case 0x22A60E34: f__22A6_0E34_002B_D20B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x017F; emu_last_length = 0x000F; emu_last_crc = 0xCEAE;
			emu_call();
			return;
	}
	f__B488_0184_000D_DD60();
}

/**
 * Decompiled function f__B488_0184_000D_DD60()
 *
 * @name f__B488_0184_000D_DD60
 * @implements B488:0184:000D:DD60 ()
 *
 * Called From: B488:0184:000F:CEAE
 */
void f__B488_0184_000D_DD60()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0191); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0191_0024_DD07();
}

/**
 * Decompiled function f__B488_0191_0024_DD07()
 *
 * @name f__B488_0191_0024_DD07
 * @implements B488:0191:0024:DD07 ()
 *
 * Called From: B488:0191:000D:DD60
 */
void f__B488_0191_0024_DD07()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_flags.zf) { f__B488_01A4_0011_4C41(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01B8; emu_last_cs = 0xB488; emu_last_ip = 0x019C; emu_last_length = 0x0024; emu_last_crc = 0xDD07; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01B8; emu_last_cs = 0xB488; emu_last_ip = 0x01A2; emu_last_length = 0x0024; emu_last_crc = 0xDD07; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0xB488; emu_last_ip = 0x01B0; emu_last_length = 0x0024; emu_last_crc = 0xDD07;
			emu_call();
			return;
	}
	f__B488_01B5_000C_8F88();
}

/**
 * Decompiled function f__B488_01A4_0011_4C41()
 *
 * @name f__B488_01A4_0011_4C41
 * @implements B488:01A4:0011:4C41 ()
 *
 * Called From: B488:0196:0024:DD07
 */
void f__B488_01A4_0011_4C41()
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
		case 0x22A60F76: f__22A6_0F76_002C_12B6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x01B0; emu_last_length = 0x0011; emu_last_crc = 0x4C41;
			emu_call();
			return;
	}
	f__B488_01B5_000C_8F88();
}

/**
 * Decompiled function f__B488_01B5_000C_8F88()
 *
 * @name f__B488_01B5_000C_8F88
 * @implements B488:01B5:000C:8F88 ()
 *
 * Called From: B488:01B5:0011:4C41
 */
void f__B488_01B5_000C_8F88()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { f__B488_01C1_0015_1614(); return; }
	f__B488_0139_003C_0ED8(); return;
}

/**
 * Decompiled function f__B488_01B9_0008_0B86()
 *
 * @name f__B488_01B9_0008_0B86
 * @implements B488:01B9:0008:0B86 ()
 *
 * Called From: B488:0136:000B:324C
 */
void f__B488_01B9_0008_0B86()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.cf) { emu_ip = 0x01C1; emu_last_cs = 0xB488; emu_last_ip = 0x01BC; emu_last_length = 0x0008; emu_last_crc = 0x0B86; emu_call(); return; } // Jump does not resolve
	f__B488_0139_003C_0ED8(); return;
}

/**
 * Decompiled function f__B488_01C1_0015_1614()
 *
 * @name f__B488_01C1_0015_1614
 * @implements B488:01C1:0015:1614 ()
 *
 * Called From: B488:01BC:000C:8F88
 */
void f__B488_01C1_0015_1614()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	p__B488_01D6_0021_CD5C(); return;
}

/**
 * Decompiled function f__B488_01EC_000B_BB3E()
 *
 * @name f__B488_01EC_000B_BB3E
 * @implements B488:01EC:000B:BB3E ()
 *
 * Called From: B488:012B:000C:C0B1
 */
void f__B488_01EC_000B_BB3E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { emu_ip = 0x01F7; emu_last_cs = 0xB488; emu_last_ip = 0x01F2; emu_last_length = 0x000B; emu_last_crc = 0xBB3E; emu_call(); return; } // Jump does not resolve
	f__B488_012E_000B_324C(); return;
}

/**
 * Decompiled function f__B488_01F7_000B_E053()
 *
 * @name f__B488_01F7_000B_E053
 * @implements B488:01F7:000B:E053 ()
 *
 * Called From: B488:01F2:0021:CD5C
 */
void f__B488_01F7_000B_E053()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0202; emu_last_cs = 0xB488; emu_last_ip = 0x01FB; emu_last_length = 0x000B; emu_last_crc = 0xE053; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0202); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_0202_0008_EEEA();
}

/**
 * Decompiled function f__B488_0202_0008_EEEA()
 *
 * @name f__B488_0202_0008_EEEA
 * @implements B488:0202:0008:EEEA ()
 *
 * Called From: B488:0202:000B:E053
 */
void f__B488_0202_0008_EEEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x020A); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { ovl__3488(0xFF); }
	f__B488_020A_0007_3FFA();
}

/**
 * Decompiled function f__B488_020A_0007_3FFA()
 *
 * @name f__B488_020A_0007_3FFA
 * @implements B488:020A:0007:3FFA ()
 *
 * Called From: B488:020A:0008:EEEA
 */
void f__B488_020A_0007_3FFA()
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
