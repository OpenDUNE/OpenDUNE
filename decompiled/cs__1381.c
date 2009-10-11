/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1381_0005_0010_8273()
 *
 * @name f__1381_0005_0010_8273
 * @implements 1381:0005:0010:8273 ()
 *
 * Called From: B4B5:054C:000A:7577
 */
void f__1381_0005_0010_8273()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0049; emu_last_cs = 0x1381; emu_last_ip = 0x000F; emu_last_length = 0x0010; emu_last_crc = 0x8273; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	f__1381_0044_000A_4DD1(); return;
}

/**
 * Decompiled function f__1381_0015_0023_81F4()
 *
 * @name f__1381_0015_0023_81F4
 * @implements 1381:0015:0023:81F4 ()
 *
 * Called From: 1381:0047:000A:4DD1
 * Called From: 1381:0047:000B:8DD9
 */
void f__1381_0015_0023_81F4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E8A);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x72));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x70));
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__1381_0038_000B_E2C7(); return;
}

/**
 * Decompiled function f__1381_0038_000B_E2C7()
 *
 * @name f__1381_0038_000B_E2C7
 * @implements 1381:0038:000B:E2C7 ()
 *
 */
void f__1381_0038_000B_E2C7()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1381_0043_000B_8DD9(); return; }
	emu_movw(&emu_ax, emu_si);
	f__1381_004E_0003_2E57(); return;
}

/**
 * Decompiled function f__1381_0043_000B_8DD9()
 *
 * @name f__1381_0043_000B_8DD9
 * @implements 1381:0043:000B:8DD9 ()
 *
 * Called From: 1381:003D:000B:E2C7
 */
void f__1381_0043_000B_8DD9()
{
	emu_incw(&emu_si);
	f__1381_0044_000A_4DD1(); return;
}

/**
 * Decompiled function f__1381_0044_000A_4DD1()
 *
 * @name f__1381_0044_000A_4DD1
 * @implements 1381:0044:000A:4DD1 ()
 *
 * Called From: 1381:0013:0010:8273
 */
void f__1381_0044_000A_4DD1()
{
	emu_cmpw(&emu_si, 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_0015_0023_81F4(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x0041; emu_last_cs = 0x1381; emu_last_ip = 0x004C; emu_last_length = 0x000A; emu_last_crc = 0x4DD1; emu_call();
}

/**
 * Decompiled function f__1381_004E_0003_2E57()
 *
 * @name f__1381_004E_0003_2E57
 * @implements 1381:004E:0003:2E57 ()
 *
 * Called From: 1381:0041:000B:E2C7
 */
void f__1381_004E_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_0051_0010_81BB()
 *
 * @name f__1381_0051_0010_81BB
 * @implements 1381:0051:0010:81BB ()
 *
 * Called From: B4B5:0443:000A:3572
 * Called From: B4B5:0705:000A:3572
 * Called From: B4B5:079C:000A:3572
 * Called From: B4B5:0CEF:000A:3572
 * Called From: B4B5:0EDC:000A:3572
 */
void f__1381_0051_0010_81BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1381_008E_0005_5395(); return; }
	emu_xorw(&emu_si, emu_si);
	f__1381_0089_000A_39D1(); return;
}

/**
 * Decompiled function f__1381_0061_001C_0B13()
 *
 * @name f__1381_0061_001C_0B13
 * @implements 1381:0061:001C:0B13 ()
 *
 * Called From: 1381:008C:000A:39D1
 * Called From: 1381:008C:000B:F9D9
 */
void f__1381_0061_001C_0B13()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_cs); emu_push(0x007D); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__1381_007D_000B_E2C7(); return;
}

/**
 * Decompiled function f__1381_007D_000B_E2C7()
 *
 * @name f__1381_007D_000B_E2C7
 * @implements 1381:007D:000B:E2C7 ()
 *
 */
void f__1381_007D_000B_E2C7()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1381_0088_000B_F9D9(); return; }
	emu_movw(&emu_ax, emu_si);
	f__1381_0086_0002_C5BA(); return;
}

/**
 * Decompiled function f__1381_0086_0002_C5BA()
 *
 * @name f__1381_0086_0002_C5BA
 * @implements 1381:0086:0002:C5BA ()
 *
 * Called From: 1381:0091:0005:5395
 */
void f__1381_0086_0002_C5BA()
{
	f__1381_0093_0003_2E57(); return;
}

/**
 * Decompiled function f__1381_0088_000B_F9D9()
 *
 * @name f__1381_0088_000B_F9D9
 * @implements 1381:0088:000B:F9D9 ()
 *
 * Called From: 1381:0082:000B:E2C7
 */
void f__1381_0088_000B_F9D9()
{
	emu_incw(&emu_si);
	f__1381_0089_000A_39D1(); return;
}

/**
 * Decompiled function f__1381_0089_000A_39D1()
 *
 * @name f__1381_0089_000A_39D1
 * @implements 1381:0089:000A:39D1 ()
 *
 * Called From: 1381:005F:0010:81BB
 */
void f__1381_0089_000A_39D1()
{
	emu_cmpw(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_0061_001C_0B13(); return; }
	f__1381_008E_0005_5395(); return;
}

/**
 * Decompiled function f__1381_008E_0005_5395()
 *
 * @name f__1381_008E_0005_5395
 * @implements 1381:008E:0005:5395 ()
 *
 * Called From: 1381:005B:0010:81BB
 */
void f__1381_008E_0005_5395()
{
	emu_movw(&emu_ax, 0xFFFF);
	f__1381_0086_0002_C5BA(); return;
}

/**
 * Decompiled function f__1381_0093_0003_2E57()
 *
 * @name f__1381_0093_0003_2E57
 * @implements 1381:0093:0003:2E57 ()
 *
 * Called From: 1381:0086:000B:E2C7
 * Called From: 1381:0086:0002:C5BA
 */
void f__1381_0093_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_0096_0008_1ADC()
 *
 * @name f__1381_0096_0008_1ADC
 * @implements 1381:0096:0008:1ADC ()
 *
 * Called From: B4B5:0F27:000A:457E
 */
void f__1381_0096_0008_1ADC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	f__1381_00C3_000A_2DD1(); return;
}

/**
 * Decompiled function f__1381_009E_0019_21DF()
 *
 * @name f__1381_009E_0019_21DF
 * @implements 1381:009E:0019:21DF ()
 *
 * Called From: 1381:00C6:000A:2DD1
 * Called From: 1381:00C6:000B:EDD9
 */
void f__1381_009E_0019_21DF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BE4));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BE2));
	emu_push(emu_cs); emu_push(0x00B7); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__1381_00B7_000B_E2C7(); return;
}

/**
 * Decompiled function f__1381_00B7_000B_E2C7()
 *
 * @name f__1381_00B7_000B_E2C7
 * @implements 1381:00B7:000B:E2C7 ()
 *
 */
void f__1381_00B7_000B_E2C7()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1381_00C2_000B_EDD9(); return; }
	emu_movw(&emu_ax, emu_si);
	f__1381_00C0_0002_C5BA(); return;
}

/**
 * Decompiled function f__1381_00C0_0002_C5BA()
 *
 * @name f__1381_00C0_0002_C5BA
 * @implements 1381:00C0:0002:C5BA ()
 *
 * Called From: 1381:00CB:000B:EDD9
 */
void f__1381_00C0_0002_C5BA()
{
	f__1381_00CD_0003_2E57(); return;
}

/**
 * Decompiled function f__1381_00C2_000B_EDD9()
 *
 * @name f__1381_00C2_000B_EDD9
 * @implements 1381:00C2:000B:EDD9 ()
 *
 * Called From: 1381:00BC:000B:E2C7
 */
void f__1381_00C2_000B_EDD9()
{
	emu_incw(&emu_si);
	f__1381_00C3_000A_2DD1(); return;
}

/**
 * Decompiled function f__1381_00C3_000A_2DD1()
 *
 * @name f__1381_00C3_000A_2DD1
 * @implements 1381:00C3:000A:2DD1 ()
 *
 * Called From: 1381:009C:0008:1ADC
 */
void f__1381_00C3_000A_2DD1()
{
	emu_cmpw(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_009E_0019_21DF(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	f__1381_00C0_0002_C5BA(); return;
}

/**
 * Decompiled function f__1381_00CD_0003_2E57()
 *
 * @name f__1381_00CD_0003_2E57
 * @implements 1381:00CD:0003:2E57 ()
 *
 * Called From: 1381:00C0:000B:E2C7
 * Called From: 1381:00C0:0002:C5BA
 */
void f__1381_00CD_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1381_00D0_0008_1ADC()
 *
 * @name f__1381_00D0_0008_1ADC
 * @implements 1381:00D0:0008:1ADC ()
 *
 * Called From: B4B5:0F02:000A:257A
 */
void f__1381_00D0_0008_1ADC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	f__1381_00FD_000A_2ED1(); return;
}

/**
 * Decompiled function f__1381_00D8_0019_21EC()
 *
 * @name f__1381_00D8_0019_21EC
 * @implements 1381:00D8:0019:21EC ()
 *
 * Called From: 1381:0100:000A:2ED1
 * Called From: 1381:0100:000B:EED9
 */
void f__1381_00D8_0019_21EC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BFC));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3BFA));
	emu_push(emu_cs); emu_push(0x00F1); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__1381_00F1_000B_E2C7(); return;
}

/**
 * Decompiled function f__1381_00F1_000B_E2C7()
 *
 * @name f__1381_00F1_000B_E2C7
 * @implements 1381:00F1:000B:E2C7 ()
 *
 */
void f__1381_00F1_000B_E2C7()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1381_00FC_000B_EED9(); return; }
	emu_movw(&emu_ax, emu_si);
	f__1381_0107_0003_2E57(); return;
}

/**
 * Decompiled function f__1381_00FC_000B_EED9()
 *
 * @name f__1381_00FC_000B_EED9
 * @implements 1381:00FC:000B:EED9 ()
 *
 * Called From: 1381:00F6:000B:E2C7
 */
void f__1381_00FC_000B_EED9()
{
	emu_incw(&emu_si);
	f__1381_00FD_000A_2ED1(); return;
}

/**
 * Decompiled function f__1381_00FD_000A_2ED1()
 *
 * @name f__1381_00FD_000A_2ED1
 * @implements 1381:00FD:000A:2ED1 ()
 *
 * Called From: 1381:00D6:0008:1ADC
 */
void f__1381_00FD_000A_2ED1()
{
	emu_cmpw(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__1381_00D8_0019_21EC(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x00FA; emu_last_cs = 0x1381; emu_last_ip = 0x0105; emu_last_length = 0x000A; emu_last_crc = 0x2ED1; emu_call();
}

/**
 * Decompiled function f__1381_0107_0003_2E57()
 *
 * @name f__1381_0107_0003_2E57
 * @implements 1381:0107:0003:2E57 ()
 *
 * Called From: 1381:00FA:000B:E2C7
 */
void f__1381_0107_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
