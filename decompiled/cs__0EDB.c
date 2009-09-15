/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0EDB_00B7_003B_AC39()
 *
 * @name f__0EDB_00B7_003B_AC39
 * @implements 0EDB:00B7:003B:AC39 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_00B7_003B_AC39()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_bx.x, 0x5);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_cx.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	f__0EDB_00F2_0004_0F7A(); return;
}

/**
 * Decompiled function f__0EDB_00F2_0004_0F7A()
 *
 * @name f__0EDB_00F2_0004_0F7A
 * @implements 0EDB:00F2:0004:0F7A ()
 *
 * Called From: 0EDB:00F0:003B:AC39
 */
void f__0EDB_00F2_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_00F6_000C_5405()
 *
 * @name f__0EDB_00F6_000C_5405
 * @implements 0EDB:00F6:000C:5405 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_00F6_000C_5405()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__0EDB_0102_0019_0270();
}

/**
 * Decompiled function f__0EDB_0102_0019_0270()
 *
 * @name f__0EDB_0102_0019_0270
 * @implements 0EDB:0102:0019:0270 ()
 *
 * Called From: 0EDB:0102:000C:5405
 */
void f__0EDB_0102_0019_0270()
{
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x34C1; ovl__34C1(0);
	f__0EDB_011B_0025_D107();
}

/**
 * Decompiled function f__0EDB_011B_0025_D107()
 *
 * @name f__0EDB_011B_0025_D107
 * @implements 0EDB:011B:0025:D107 ()
 *
 * Called From: 0EDB:011B:0019:0270
 */
void f__0EDB_011B_0025_D107()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, 0x5);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	f__0EDB_0140_0005_04BA(); return;
}

/**
 * Decompiled function f__0EDB_0140_0005_04BA()
 *
 * @name f__0EDB_0140_0005_04BA
 * @implements 0EDB:0140:0005:04BA ()
 *
 * Called From: 0EDB:013E:0025:D107
 */
void f__0EDB_0140_0005_04BA()
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
 * Decompiled function f__0EDB_0145_002F_97D3()
 *
 * @name f__0EDB_0145_002F_97D3
 * @implements 0EDB:0145:002F:97D3 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_0145_002F_97D3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_incw(&emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__0EDB_0174_0004_04F4();
}

/**
 * Decompiled function f__0EDB_0174_0004_04F4()
 *
 * @name f__0EDB_0174_0004_04F4
 * @implements 0EDB:0174:0004:04F4 ()
 *
 * Called From: 0EDB:0174:002F:97D3
 */
void f__0EDB_0174_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0EDB_0178_0002_00E2(); return;
}

/**
 * Decompiled function f__0EDB_0178_0002_00E2()
 *
 * @name f__0EDB_0178_0002_00E2
 * @implements 0EDB:0178:0002:00E2 ()
 *
 * Called From: 0EDB:0176:0004:04F4
 */
void f__0EDB_0178_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_01F7_0020_E7C9()
 *
 * @name f__0EDB_01F7_0020_E7C9
 * @implements 0EDB:01F7:0020:E7C9 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_01F7_0020_E7C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0217); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__0EDB_0217_000B_0E2F();
}

/**
 * Decompiled function f__0EDB_0217_000B_0E2F()
 *
 * @name f__0EDB_0217_000B_0E2F
 * @implements 0EDB:0217:000B:0E2F ()
 *
 * Called From: 0EDB:0217:0020:E7C9
 */
void f__0EDB_0217_000B_0E2F()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_0241_0005_1D56(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0222); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__0EDB_0222_0014_6D15();
}

/**
 * Decompiled function f__0EDB_0222_0014_6D15()
 *
 * @name f__0EDB_0222_0014_6D15
 * @implements 0EDB:0222:0014:6D15 ()
 *
 * Called From: 0EDB:0222:000B:0E2F
 */
void f__0EDB_0222_0014_6D15()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0236); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__0EDB_0236_000B_9CD1();
}

/**
 * Decompiled function f__0EDB_0236_000B_9CD1()
 *
 * @name f__0EDB_0236_000B_9CD1
 * @implements 0EDB:0236:000B:9CD1 ()
 *
 * Called From: 0EDB:0236:0014:6D15
 */
void f__0EDB_0236_000B_9CD1()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__0EDB_0246_0005_04BA(); return;
}

/**
 * Decompiled function f__0EDB_023F_0002_03A6()
 *
 * @name f__0EDB_023F_0002_03A6
 * @implements 0EDB:023F:0002:03A6 ()
 *
 * Called From: 0EDB:0244:0005:1D56
 */
void f__0EDB_023F_0002_03A6()
{
	f__0EDB_0246_0005_04BA(); return;
}

/**
 * Decompiled function f__0EDB_0241_0005_1D56()
 *
 * @name f__0EDB_0241_0005_1D56
 * @implements 0EDB:0241:0005:1D56 ()
 *
 * Called From: 0EDB:021A:000B:0E2F
 */
void f__0EDB_0241_0005_1D56()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_023F_0002_03A6(); return;
}

/**
 * Decompiled function f__0EDB_0246_0005_04BA()
 *
 * @name f__0EDB_0246_0005_04BA
 * @implements 0EDB:0246:0005:04BA ()
 *
 * Called From: 0EDB:023F:000B:9CD1
 * Called From: 0EDB:023F:0002:03A6
 */
void f__0EDB_0246_0005_04BA()
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
 * Decompiled function f__0EDB_024B_001D_A7F9()
 *
 * @name f__0EDB_024B_001D_A7F9
 * @implements 0EDB:024B:001D:A7F9 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_024B_001D_A7F9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__0EDB_0268_0013_154F();
}

/**
 * Decompiled function f__0EDB_0268_0013_154F()
 *
 * @name f__0EDB_0268_0013_154F
 * @implements 0EDB:0268:0013:154F ()
 *
 * Called From: 0EDB:0268:001D:A7F9
 */
void f__0EDB_0268_0013_154F()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_0280_0005_1D56(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x027B); emu_cs = 0x167E; f__167E_0319_0010_3E1E();
	f__0EDB_027B_0005_1FB6();
}

/**
 * Decompiled function f__0EDB_027B_0005_1FB6()
 *
 * @name f__0EDB_027B_0005_1FB6
 * @implements 0EDB:027B:0005:1FB6 ()
 *
 * Called From: 0EDB:027B:0013:154F
 */
void f__0EDB_027B_0005_1FB6()
{
	emu_addws(&emu_sp, 0x6);
	f__0EDB_0285_0003_0212(); return;
}

/**
 * Decompiled function f__0EDB_027E_0002_03A6()
 *
 * @name f__0EDB_027E_0002_03A6
 * @implements 0EDB:027E:0002:03A6 ()
 *
 * Called From: 0EDB:0283:0005:1D56
 */
void f__0EDB_027E_0002_03A6()
{
	f__0EDB_0285_0003_0212(); return;
}

/**
 * Decompiled function f__0EDB_0280_0005_1D56()
 *
 * @name f__0EDB_0280_0005_1D56
 * @implements 0EDB:0280:0005:1D56 ()
 *
 * Called From: 0EDB:026B:0013:154F
 */
void f__0EDB_0280_0005_1D56()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_027E_0002_03A6(); return;
}

/**
 * Decompiled function f__0EDB_0285_0003_0212()
 *
 * @name f__0EDB_0285_0003_0212
 * @implements 0EDB:0285:0003:0212 ()
 *
 * Called From: 0EDB:027E:0005:1FB6
 * Called From: 0EDB:027E:0002:03A6
 */
void f__0EDB_0285_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0288_0020_DD69()
 *
 * @name f__0EDB_0288_0020_DD69
 * @implements 0EDB:0288:0020:DD69 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_0288_0020_DD69()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02A8); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__0EDB_02A8_001E_C7B6();
}

/**
 * Decompiled function f__0EDB_02A8_001E_C7B6()
 *
 * @name f__0EDB_02A8_001E_C7B6
 * @implements 0EDB:02A8:001E:C7B6 ()
 *
 * Called From: 0EDB:02A8:0020:DD69
 */
void f__0EDB_02A8_001E_C7B6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0EDB_02D1_0006_0A84(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x02C6); emu_cs = 0x167E; emu_ip = 0x03B9; emu_last_cs = 0x0EDB; emu_last_ip = 0x02C1; emu_last_length = 0x001E; emu_last_crc = 0xC7B6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0EDB_02CF_0002_0384()
 *
 * @name f__0EDB_02CF_0002_0384
 * @implements 0EDB:02CF:0002:0384 ()
 *
 * Called From: 0EDB:02E3:0002:0278
 */
void f__0EDB_02CF_0002_0384()
{
	f__0EDB_02E5_0005_04BA(); return;
}

/**
 * Decompiled function f__0EDB_02D1_0006_0A84()
 *
 * @name f__0EDB_02D1_0006_0A84
 * @implements 0EDB:02D1:0006:0A84 ()
 *
 * Called From: 0EDB:02B5:001E:C7B6
 */
void f__0EDB_02D1_0006_0A84()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x167E; f__167E_02D8_000C_AB88();
	f__0EDB_02D7_000A_9F79();
}

/**
 * Decompiled function f__0EDB_02D7_000A_9F79()
 *
 * @name f__0EDB_02D7_000A_9F79
 * @implements 0EDB:02D7:000A:9F79 ()
 *
 * Called From: 0EDB:02D7:0006:0A84
 */
void f__0EDB_02D7_000A_9F79()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x02E1; emu_last_cs = 0x0EDB; emu_last_ip = 0x02DA; emu_last_length = 0x000A; emu_last_crc = 0x9F79; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__0EDB_02E3_0002_0278(); return;
}

/**
 * Decompiled function f__0EDB_02E3_0002_0278()
 *
 * @name f__0EDB_02E3_0002_0278
 * @implements 0EDB:02E3:0002:0278 ()
 *
 * Called From: 0EDB:02DF:000A:9F79
 */
void f__0EDB_02E3_0002_0278()
{
	f__0EDB_02CF_0002_0384(); return;
}

/**
 * Decompiled function f__0EDB_02E5_0005_04BA()
 *
 * @name f__0EDB_02E5_0005_04BA
 * @implements 0EDB:02E5:0005:04BA ()
 *
 * Called From: 0EDB:02CF:0002:0384
 */
void f__0EDB_02E5_0005_04BA()
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
 * Decompiled function f__0EDB_02EA_001E_EA95()
 *
 * @name f__0EDB_02EA_001E_EA95
 * @implements 0EDB:02EA:001E:EA95 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_02EA_001E_EA95()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0308); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__0EDB_0308_001A_1841();
}

/**
 * Decompiled function f__0EDB_0308_001A_1841()
 *
 * @name f__0EDB_0308_001A_1841
 * @implements 0EDB:0308:001A:1841 ()
 *
 * Called From: 0EDB:0308:001E:EA95
 */
void f__0EDB_0308_001A_1841()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0EDB_0322_0005_1D5E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_ip = 0x0327; emu_last_cs = 0x0EDB; emu_last_ip = 0x0320; emu_last_length = 0x001A; emu_last_crc = 0x1841; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0EDB_0320_0002_03A6()
 *
 * @name f__0EDB_0320_0002_03A6
 * @implements 0EDB:0320:0002:03A6 ()
 *
 * Called From: 0EDB:0325:0005:1D5E
 */
void f__0EDB_0320_0002_03A6()
{
	f__0EDB_0327_0004_0F7A(); return;
}

/**
 * Decompiled function f__0EDB_0322_0005_1D5E()
 *
 * @name f__0EDB_0322_0005_1D5E
 * @implements 0EDB:0322:0005:1D5E ()
 *
 * Called From: 0EDB:0315:001A:1841
 */
void f__0EDB_0322_0005_1D5E()
{
	emu_movw(&emu_ax.x, 0x80);
	f__0EDB_0320_0002_03A6(); return;
}

/**
 * Decompiled function f__0EDB_0327_0004_0F7A()
 *
 * @name f__0EDB_0327_0004_0F7A
 * @implements 0EDB:0327:0004:0F7A ()
 *
 * Called From: 0EDB:0320:0002:03A6
 */
void f__0EDB_0327_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_032B_0031_BF5C()
 *
 * @name f__0EDB_032B_0031_BF5C
 * @implements 0EDB:032B:0031:BF5C ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_032B_0031_BF5C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x035C); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__0EDB_035C_0005_1FD0();
}

/**
 * Decompiled function f__0EDB_035C_0005_1FD0()
 *
 * @name f__0EDB_035C_0005_1FD0
 * @implements 0EDB:035C:0005:1FD0 ()
 *
 * Called From: 0EDB:035C:0031:BF5C
 */
void f__0EDB_035C_0005_1FD0()
{
	emu_addws(&emu_sp, 0x8);
	f__0EDB_036F_0012_D1D9(); return;
}

/**
 * Decompiled function f__0EDB_036F_0012_D1D9()
 *
 * @name f__0EDB_036F_0012_D1D9
 * @implements 0EDB:036F:0012:D1D9 ()
 *
 * Called From: 0EDB:035F:0005:1FD0
 */
void f__0EDB_036F_0012_D1D9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x0361; emu_last_cs = 0x0EDB; emu_last_ip = 0x037B; emu_last_length = 0x0012; emu_last_crc = 0xD1D9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__0EDB_0381_0005_04BA(); return;
}

/**
 * Decompiled function f__0EDB_0381_0005_04BA()
 *
 * @name f__0EDB_0381_0005_04BA
 * @implements 0EDB:0381:0005:04BA ()
 *
 * Called From: 0EDB:037F:0012:D1D9
 */
void f__0EDB_0381_0005_04BA()
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
 * Decompiled function f__0EDB_03B9_001D_A7F9()
 *
 * @name f__0EDB_03B9_001D_A7F9
 * @implements 0EDB:03B9:001D:A7F9 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_03B9_001D_A7F9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__0EDB_03D6_000B_1B17();
}

/**
 * Decompiled function f__0EDB_03D6_000B_1B17()
 *
 * @name f__0EDB_03D6_000B_1B17
 * @implements 0EDB:03D6:000B:1B17 ()
 *
 * Called From: 0EDB:03D6:001D:A7F9
 */
void f__0EDB_03D6_000B_1B17()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_03E4_0005_1D56(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__0EDB_03E1_0003_016E();
}

/**
 * Decompiled function f__0EDB_03E1_0003_016E()
 *
 * @name f__0EDB_03E1_0003_016E
 * @implements 0EDB:03E1:0003:016E ()
 *
 * Called From: 0EDB:03E1:000B:1B17
 */
void f__0EDB_03E1_0003_016E()
{
	emu_pop(&emu_cx.x);
	f__0EDB_03E9_0003_0212(); return;
}

/**
 * Decompiled function f__0EDB_03E2_0002_03A6()
 *
 * @name f__0EDB_03E2_0002_03A6
 * @implements 0EDB:03E2:0002:03A6 ()
 *
 * Called From: 0EDB:03E7:0005:1D56
 */
void f__0EDB_03E2_0002_03A6()
{
	f__0EDB_03E9_0003_0212(); return;
}

/**
 * Decompiled function f__0EDB_03E4_0005_1D56()
 *
 * @name f__0EDB_03E4_0005_1D56
 * @implements 0EDB:03E4:0005:1D56 ()
 *
 * Called From: 0EDB:03D9:000B:1B17
 */
void f__0EDB_03E4_0005_1D56()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_03E2_0002_03A6(); return;
}

/**
 * Decompiled function f__0EDB_03E9_0003_0212()
 *
 * @name f__0EDB_03E9_0003_0212
 * @implements 0EDB:03E9:0003:0212 ()
 *
 * Called From: 0EDB:03E2:0003:016E
 * Called From: 0EDB:03E2:0002:03A6
 */
void f__0EDB_03E9_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_03EC_0020_61B0()
 *
 * @name f__0EDB_03EC_0020_61B0
 * @implements 0EDB:03EC:0020:61B0 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_03EC_0020_61B0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__0EDB_041D_0005_1D56(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x040C); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__0EDB_040C_0011_4E18();
}

/**
 * Decompiled function f__0EDB_040C_0011_4E18()
 *
 * @name f__0EDB_040C_0011_4E18
 * @implements 0EDB:040C:0011:4E18 ()
 *
 * Called From: 0EDB:040C:0020:61B0
 */
void f__0EDB_040C_0011_4E18()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__0EDB_0422_0004_0F7A(); return;
}

/**
 * Decompiled function f__0EDB_041B_0002_03A6()
 *
 * @name f__0EDB_041B_0002_03A6
 * @implements 0EDB:041B:0002:03A6 ()
 *
 * Called From: 0EDB:0420:0005:1D56
 */
void f__0EDB_041B_0002_03A6()
{
	f__0EDB_0422_0004_0F7A(); return;
}

/**
 * Decompiled function f__0EDB_041D_0005_1D56()
 *
 * @name f__0EDB_041D_0005_1D56
 * @implements 0EDB:041D:0005:1D56 ()
 *
 * Called From: 0EDB:03FB:0020:61B0
 */
void f__0EDB_041D_0005_1D56()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	f__0EDB_041B_0002_03A6(); return;
}

/**
 * Decompiled function f__0EDB_0422_0004_0F7A()
 *
 * @name f__0EDB_0422_0004_0F7A
 * @implements 0EDB:0422:0004:0F7A ()
 *
 * Called From: 0EDB:041B:0011:4E18
 * Called From: 0EDB:041B:0002:03A6
 */
void f__0EDB_0422_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0426_0027_2B03()
 *
 * @name f__0EDB_0426_0027_2B03
 * @implements 0EDB:0426:0027:2B03 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_0426_0027_2B03()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x044D); emu_cs = 0x3483; ovl__3483(0);
	f__0EDB_044D_0007_76DC();
}

/**
 * Decompiled function f__0EDB_044D_0007_76DC()
 *
 * @name f__0EDB_044D_0007_76DC
 * @implements 0EDB:044D:0007:76DC ()
 *
 * Called From: 0EDB:044D:0027:2B03
 */
void f__0EDB_044D_0007_76DC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0454_0002_00E2(); return;
}

/**
 * Decompiled function f__0EDB_0454_0002_00E2()
 *
 * @name f__0EDB_0454_0002_00E2
 * @implements 0EDB:0454:0002:00E2 ()
 *
 * Called From: 0EDB:0452:0007:76DC
 */
void f__0EDB_0454_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0456_0032_A8C3()
 *
 * @name f__0EDB_0456_0032_A8C3
 * @implements 0EDB:0456:0032:A8C3 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_0456_0032_A8C3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0EDB_0488_0008_7BEC();
}

/**
 * Decompiled function f__0EDB_0488_0008_7BEC()
 *
 * @name f__0EDB_0488_0008_7BEC
 * @implements 0EDB:0488:0008:7BEC ()
 *
 * Called From: 0EDB:0488:0032:A8C3
 */
void f__0EDB_0488_0008_7BEC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; ovl__34CD(27);
	f__0EDB_0490_0013_F5CA();
}

/**
 * Decompiled function f__0EDB_0490_0013_F5CA()
 *
 * @name f__0EDB_0490_0013_F5CA
 * @implements 0EDB:0490:0013:F5CA ()
 *
 * Called From: 0EDB:0490:0008:7BEC
 */
void f__0EDB_0490_0013_F5CA()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x04A7; emu_last_cs = 0x0EDB; emu_last_ip = 0x0497; emu_last_length = 0x0013; emu_last_crc = 0xF5CA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04A3); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__0EDB_04A3_0004_04FC();
}

/**
 * Decompiled function f__0EDB_04A3_0004_04FC()
 *
 * @name f__0EDB_04A3_0004_04FC
 * @implements 0EDB:04A3:0004:04FC ()
 *
 * Called From: 0EDB:04A3:0013:F5CA
 */
void f__0EDB_04A3_0004_04FC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0EDB_04AB_0003_0212(); return;
}

/**
 * Decompiled function f__0EDB_04AB_0003_0212()
 *
 * @name f__0EDB_04AB_0003_0212
 * @implements 0EDB:04AB:0003:0212 ()
 *
 * Called From: 0EDB:04A5:0004:04FC
 */
void f__0EDB_04AB_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_04AE_0024_55E6()
 *
 * @name f__0EDB_04AE_0024_55E6
 * @implements 0EDB:04AE:0024:55E6 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_04AE_0024_55E6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x167E; f__167E_02D8_000C_AB88();
	f__0EDB_04D2_0029_4F7E();
}

/**
 * Decompiled function f__0EDB_04D2_0029_4F7E()
 *
 * @name f__0EDB_04D2_0029_4F7E
 * @implements 0EDB:04D2:0029:4F7E ()
 *
 * Called From: 0EDB:04D2:0024:55E6
 */
void f__0EDB_04D2_0029_4F7E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0EDB_0504_0004_0768(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x5);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0504; emu_last_cs = 0x0EDB; emu_last_ip = 0x04EE; emu_last_length = 0x0029; emu_last_crc = 0x4F7E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x04FB); f__0EDB_050C_001D_A7F9();
	f__0EDB_04FB_0009_A844();
}

/**
 * Decompiled function f__0EDB_04FB_0009_A844()
 *
 * @name f__0EDB_04FB_0009_A844
 * @implements 0EDB:04FB:0009:A844 ()
 *
 * Called From: 0EDB:04FB:0029:4F7E
 */
void f__0EDB_04FB_0009_A844()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	f__0EDB_0508_0004_0F7A(); return;
}

/**
 * Decompiled function f__0EDB_0502_0002_03A4()
 *
 * @name f__0EDB_0502_0002_03A4
 * @implements 0EDB:0502:0002:03A4 ()
 *
 * Called From: 0EDB:0506:0004:0768
 */
void f__0EDB_0502_0002_03A4()
{
	f__0EDB_0508_0004_0F7A(); return;
}

/**
 * Decompiled function f__0EDB_0504_0004_0768()
 *
 * @name f__0EDB_0504_0004_0768
 * @implements 0EDB:0504:0004:0768 ()
 *
 * Called From: 0EDB:04DF:0029:4F7E
 */
void f__0EDB_0504_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0502_0002_03A4(); return;
}

/**
 * Decompiled function f__0EDB_0508_0004_0F7A()
 *
 * @name f__0EDB_0508_0004_0F7A
 * @implements 0EDB:0508:0004:0F7A ()
 *
 * Called From: 0EDB:0502:0009:A844
 * Called From: 0EDB:0502:0002:03A4
 */
void f__0EDB_0508_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_050C_001D_A7F9()
 *
 * @name f__0EDB_050C_001D_A7F9
 * @implements 0EDB:050C:001D:A7F9 ()
 *
 * Called From: 0EDB:04F8:0029:4F7E
 * Called From: 15C2:0932:003A:F833
 */
void f__0EDB_050C_001D_A7F9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__0EDB_0529_000B_3017();
}

/**
 * Decompiled function f__0EDB_0529_000B_3017()
 *
 * @name f__0EDB_0529_000B_3017
 * @implements 0EDB:0529:000B:3017 ()
 *
 * Called From: 0EDB:0529:001D:A7F9
 */
void f__0EDB_0529_000B_3017()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0EDB_058D_0004_0730(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__0EDB_0534_000D_1460();
}

/**
 * Decompiled function f__0EDB_0534_000D_1460()
 *
 * @name f__0EDB_0534_000D_1460
 * @implements 0EDB:0534:000D:1460 ()
 *
 * Called From: 0EDB:0534:000B:3017
 */
void f__0EDB_0534_000D_1460()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__0EDB_0541_0006_0F44(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__0EDB_0569_0006_0DE4(); return; }
	emu_ip = 0x058B; emu_last_cs = 0x0EDB; emu_last_ip = 0x053F; emu_last_length = 0x000D; emu_last_crc = 0x1460; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0EDB_0541_0006_0F44()
 *
 * @name f__0EDB_0541_0006_0F44
 * @implements 0EDB:0541:0006:0F44 ()
 *
 * Called From: 0EDB:0538:000D:1460
 */
void f__0EDB_0541_0006_0F44()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__0EDB_0547_0008_7424();
}

/**
 * Decompiled function f__0EDB_0547_0008_7424()
 *
 * @name f__0EDB_0547_0008_7424
 * @implements 0EDB:0547:0008:7424 ()
 *
 * Called From: 0EDB:0547:0006:0F44
 */
void f__0EDB_0547_0008_7424()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__0EDB_054F_0016_D10E();
}

/**
 * Decompiled function f__0EDB_054F_0016_D10E()
 *
 * @name f__0EDB_054F_0016_D10E
 * @implements 0EDB:054F:0016:D10E ()
 *
 * Called From: 0EDB:054F:0008:7424
 */
void f__0EDB_054F_0016_D10E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0565; emu_last_cs = 0x0EDB; emu_last_ip = 0x055E; emu_last_length = 0x0016; emu_last_crc = 0xD10E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__0EDB_0567_0002_03FC(); return;
}

/**
 * Decompiled function f__0EDB_0567_0002_03FC()
 *
 * @name f__0EDB_0567_0002_03FC
 * @implements 0EDB:0567:0002:03FC ()
 *
 * Called From: 0EDB:0563:0016:D10E
 * Called From: 0EDB:0589:0002:0214
 * Called From: 0EDB:0589:0004:0724
 * Called From: 0EDB:058F:0004:0730
 */
void f__0EDB_0567_0002_03FC()
{
	f__0EDB_0591_0003_0212(); return;
}

/**
 * Decompiled function f__0EDB_0569_0006_0DE4()
 *
 * @name f__0EDB_0569_0006_0DE4
 * @implements 0EDB:0569:0006:0DE4 ()
 *
 * Called From: 0EDB:053D:000D:1460
 */
void f__0EDB_0569_0006_0DE4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__0EDB_056F_0018_9568();
}

/**
 * Decompiled function f__0EDB_056F_0018_9568()
 *
 * @name f__0EDB_056F_0018_9568
 * @implements 0EDB:056F:0018:9568 ()
 *
 * Called From: 0EDB:056F:0006:0DE4
 */
void f__0EDB_056F_0018_9568()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { f__0EDB_0587_0004_0724(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0EDB_0589_0002_0214(); return;
}

/**
 * Decompiled function f__0EDB_0587_0004_0724()
 *
 * @name f__0EDB_0587_0004_0724
 * @implements 0EDB:0587:0004:0724 ()
 *
 * Called From: 0EDB:0580:0018:9568
 */
void f__0EDB_0587_0004_0724()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0567_0002_03FC(); return;
}

/**
 * Decompiled function f__0EDB_0589_0002_0214()
 *
 * @name f__0EDB_0589_0002_0214
 * @implements 0EDB:0589:0002:0214 ()
 *
 * Called From: 0EDB:0585:0018:9568
 */
void f__0EDB_0589_0002_0214()
{
	f__0EDB_0567_0002_03FC(); return;
}

/**
 * Decompiled function f__0EDB_058D_0004_0730()
 *
 * @name f__0EDB_058D_0004_0730
 * @implements 0EDB:058D:0004:0730 ()
 *
 * Called From: 0EDB:052C:000B:3017
 */
void f__0EDB_058D_0004_0730()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0EDB_0567_0002_03FC(); return;
}

/**
 * Decompiled function f__0EDB_0591_0003_0212()
 *
 * @name f__0EDB_0591_0003_0212
 * @implements 0EDB:0591:0003:0212 ()
 *
 * Called From: 0EDB:0567:0002:03FC
 */
void f__0EDB_0591_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
