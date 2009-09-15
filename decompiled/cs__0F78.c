/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0F78_0008_002C_2547()
 *
 * @name f__0F78_0008_002C_2547
 * @implements 0F78:0008:002C:2547 ()
 *
 * Called From: 07D4:02E6:000D:FA70
 * Called From: 07D4:1332:0011:3AB9
 * Called From: 07D4:15D5:0016:56CB
 */
void f__0F78_0008_002C_2547()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x002A; emu_last_cs = 0x0F78; emu_last_ip = 0x001E; emu_last_length = 0x002C; emu_last_crc = 0x2547; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3564));
	if (!emu_flags.zf) { f__0F78_002A_000A_6B30(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__0F78_0031_0003_06A2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (!emu_flags.zf) { f__0F78_0034_0009_776B(); return; }
	emu_ip = 0x01AE; emu_last_cs = 0x0F78; emu_last_ip = 0x0031; emu_last_length = 0x002C; emu_last_crc = 0x2547; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_002A_000A_6B30()
 *
 * @name f__0F78_002A_000A_6B30
 * @implements 0F78:002A:000A:6B30 ()
 *
 * Called From: 0F78:0024:002C:2547
 */
void f__0F78_002A_000A_6B30()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (!emu_flags.zf) { f__0F78_0034_0009_776B(); return; }
	emu_ip = 0x01AE; emu_last_cs = 0x0F78; emu_last_ip = 0x0031; emu_last_length = 0x000A; emu_last_crc = 0x6B30; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_0031_0003_06A2()
 *
 * @name f__0F78_0031_0003_06A2
 * @implements 0F78:0031:0003:06A2 ()
 *
 * Called From: 0F78:0028:002C:2547
 */
void f__0F78_0031_0003_06A2()
{
	f__0F78_01AE_0006_137A(); return;
}

/**
 * Decompiled function f__0F78_0034_0009_776B()
 *
 * @name f__0F78_0034_0009_776B
 * @implements 0F78:0034:0009:776B ()
 *
 * Called From: 0F78:002F:000A:6B30
 * Called From: 0F78:002F:002C:2547
 */
void f__0F78_0034_0009_776B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0F78_003D_0020_ADA4();
}

/**
 * Decompiled function f__0F78_003D_0020_ADA4()
 *
 * @name f__0F78_003D_0020_ADA4
 * @implements 0F78:003D:0020:ADA4 ()
 *
 * Called From: 0F78:003D:0009:776B
 */
void f__0F78_003D_0020_ADA4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3564), 0xFF);
	if (emu_flags.zf) { f__0F78_0096_0008_C900(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3564));
	if (emu_flags.zf) { f__0F78_0096_0008_C900(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x3566);
	f__0F78_008D_0011_7AB3(); return;
}

/**
 * Decompiled function f__0F78_005D_002F_17B3()
 *
 * @name f__0F78_005D_002F_17B3
 * @implements 0F78:005D:002F:17B3 ()
 *
 * Called From: 0F78:0094:0011:7AB3
 * Called From: 0F78:0094:0012:7BD7
 */
void f__0F78_005D_002F_17B3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3564));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6C1B), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x07D4; f__07D4_1625_001A_C935();
	f__0F78_008C_0012_7BD7();
}

/**
 * Decompiled function f__0F78_008C_0012_7BD7()
 *
 * @name f__0F78_008C_0012_7BD7
 * @implements 0F78:008C:0012:7BD7 ()
 *
 * Called From: 0F78:008C:002F:17B3
 */
void f__0F78_008C_0012_7BD7()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__0F78_005D_002F_17B3(); return; }
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__0F78_009E_000D_287B(); return; }
	emu_ip = 0x0164; emu_last_cs = 0x0F78; emu_last_ip = 0x009B; emu_last_length = 0x0012; emu_last_crc = 0x7BD7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_008D_0011_7AB3()
 *
 * @name f__0F78_008D_0011_7AB3
 * @implements 0F78:008D:0011:7AB3 ()
 *
 * Called From: 0F78:005B:0020:ADA4
 */
void f__0F78_008D_0011_7AB3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__0F78_005D_002F_17B3(); return; }
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x009E; emu_last_cs = 0x0F78; emu_last_ip = 0x0099; emu_last_length = 0x0011; emu_last_crc = 0x7AB3; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0164; emu_last_cs = 0x0F78; emu_last_ip = 0x009B; emu_last_length = 0x0011; emu_last_crc = 0x7AB3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_0096_0008_C900()
 *
 * @name f__0F78_0096_0008_C900
 * @implements 0F78:0096:0008:C900 ()
 *
 * Called From: 0F78:0046:0020:ADA4
 * Called From: 0F78:004C:0020:ADA4
 */
void f__0F78_0096_0008_C900()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__0F78_009E_000D_287B(); return; }
	emu_ip = 0x0164; emu_last_cs = 0x0F78; emu_last_ip = 0x009B; emu_last_length = 0x0008; emu_last_crc = 0xC900; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_009E_000D_287B()
 *
 * @name f__0F78_009E_000D_287B
 * @implements 0F78:009E:000D:287B ()
 *
 * Called From: 0F78:0099:0008:C900
 * Called From: 0F78:0099:0012:7BD7
 */
void f__0F78_009E_000D_287B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3564));
	if (!emu_flags.zf) { f__0F78_00AB_0006_041A(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__0F78_00AB_0006_041A(); return; }
	emu_ip = 0x0164; emu_last_cs = 0x0F78; emu_last_ip = 0x00A8; emu_last_length = 0x000D; emu_last_crc = 0x287B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_00AB_0006_041A()
 *
 * @name f__0F78_00AB_0006_041A
 * @implements 0F78:00AB:0006:041A ()
 *
 * Called From: 0F78:00A2:000D:287B
 * Called From: 0F78:00A6:000D:287B
 */
void f__0F78_00AB_0006_041A()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__0F78_00B1_0035_3DBC();
}

/**
 * Decompiled function f__0F78_00B1_0035_3DBC()
 *
 * @name f__0F78_00B1_0035_3DBC
 * @implements 0F78:00B1:0035:3DBC ()
 *
 * Called From: 0F78:00B1:0006:041A
 */
void f__0F78_00B1_0035_3DBC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E6); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__0F78_00E6_0044_3ED3();
}

/**
 * Decompiled function f__0F78_00E6_0044_3ED3()
 *
 * @name f__0F78_00E6_0044_3ED3
 * @implements 0F78:00E6:0044:3ED3 ()
 *
 * Called From: 0F78:00E6:0035:3DBC
 */
void f__0F78_00E6_0044_3ED3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x88);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_dx.x, 0x9);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__0F78_012A_000D_6632();
}

/**
 * Decompiled function f__0F78_012A_000D_6632()
 *
 * @name f__0F78_012A_000D_6632
 * @implements 0F78:012A:000D:6632 ()
 *
 * Called From: 0F78:012A:0044:3ED3
 */
void f__0F78_012A_000D_6632()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x3566);
	f__0F78_015B_001A_AD26(); return;
}

/**
 * Decompiled function f__0F78_0137_003E_9180()
 *
 * @name f__0F78_0137_003E_9180
 * @implements 0F78:0137:003E:9180 ()
 *
 * Called From: 0F78:0162:001A:AD26
 * Called From: 0F78:0162:003E:9180
 */
void f__0F78_0137_003E_9180()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6C1B), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__0F78_0137_003E_9180(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__0F78_01A1_0008_EAEA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__0F78_01A1_0008_EAEA(); return; }
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__0F78_0175_0024_A206();
}

/**
 * Decompiled function f__0F78_015B_001A_AD26()
 *
 * @name f__0F78_015B_001A_AD26
 * @implements 0F78:015B:001A:AD26 ()
 *
 * Called From: 0F78:0135:000D:6632
 */
void f__0F78_015B_001A_AD26()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__0F78_0137_003E_9180(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01A1; emu_last_cs = 0x0F78; emu_last_ip = 0x0168; emu_last_length = 0x001A; emu_last_crc = 0xAD26; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01A1; emu_last_cs = 0x0F78; emu_last_ip = 0x016E; emu_last_length = 0x001A; emu_last_crc = 0xAD26; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2B6C; emu_ip = 0x02AC; emu_last_cs = 0x0F78; emu_last_ip = 0x0170; emu_last_length = 0x001A; emu_last_crc = 0xAD26; emu_call(); // Jump does not resolve
	f__0F78_0175_0024_A206();
}

/**
 * Decompiled function f__0F78_0175_0024_A206()
 *
 * @name f__0F78_0175_0024_A206
 * @implements 0F78:0175:0024:A206 ()
 *
 * Called From: 0F78:0175:003E:9180
 */
void f__0F78_0175_0024_A206()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0199); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__0F78_0199_0008_F13E();
}

/**
 * Decompiled function f__0F78_0199_0008_F13E()
 *
 * @name f__0F78_0199_0008_F13E
 * @implements 0F78:0199:0008:F13E ()
 *
 * Called From: 0F78:0199:0024:A206
 */
void f__0F78_0199_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__0F78_01A1_0008_EAEA();
}

/**
 * Decompiled function f__0F78_01A1_0008_EAEA()
 *
 * @name f__0F78_01A1_0008_EAEA
 * @implements 0F78:01A1:0008:EAEA ()
 *
 * Called From: 0F78:0168:003E:9180
 * Called From: 0F78:016E:003E:9180
 * Called From: 0F78:01A1:0008:F13E
 */
void f__0F78_01A1_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__0F78_01A9_000B_EDFA();
}

/**
 * Decompiled function f__0F78_01A9_000B_EDFA()
 *
 * @name f__0F78_01A9_000B_EDFA
 * @implements 0F78:01A9:000B:EDFA ()
 *
 * Called From: 0F78:01A9:0008:EAEA
 */
void f__0F78_01A9_000B_EDFA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3564), emu_si);
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
 * Decompiled function f__0F78_01AE_0006_137A()
 *
 * @name f__0F78_01AE_0006_137A
 * @implements 0F78:01AE:0006:137A ()
 *
 * Called From: 0F78:0031:0003:06A2
 */
void f__0F78_01AE_0006_137A()
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
 * Decompiled function f__0F78_01B4_0016_AE41()
 *
 * @name f__0F78_01B4_0016_AE41
 * @implements 0F78:01B4:0016:AE41 ()
 *
 * Called From: 0642:0216:0012:3643
 * Called From: 0642:0220:000A:BB76
 * Called From: 07D4:00FE:0009:FD77
 * Called From: 07D4:0200:0024:DCDF
 * Called From: 07D4:0200:0021:D2D7
 * Called From: 07D4:02D9:000A:BB76
 * Called From: 0F78:029E:001C:B090
 * Called From: 0F78:02C7:0029:E145
 * Called From: 1A34:10CD:000C:F579
 */
void f__0F78_01B4_0016_AE41()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x35C4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35C4));
	if (!emu_flags.zf) { f__0F78_01CA_0012_822B(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0F78_01FB_0004_07E2(); return;
}

/**
 * Decompiled function f__0F78_01C6_0004_0D46()
 *
 * @name f__0F78_01C6_0004_0D46
 * @implements 0F78:01C6:0004:0D46 ()
 *
 * Called From: 0F78:01F9:0008:5ED2
 * Called From: 0F78:01F9:0006:2B52
 */
void f__0F78_01C6_0004_0D46()
{
	emu_movw(&emu_ax.x, emu_di);
	f__0F78_01FB_0004_07E2(); return;
}

/**
 * Decompiled function f__0F78_01CA_0012_822B()
 *
 * @name f__0F78_01CA_0012_822B
 * @implements 0F78:01CA:0012:822B ()
 *
 * Called From: 0F78:01C4:0016:AE41
 */
void f__0F78_01CA_0012_822B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35C4));
	if (emu_flags.zf) { emu_ip = 0x01DE; emu_last_cs = 0x0F78; emu_last_ip = 0x01CE; emu_last_length = 0x0012; emu_last_crc = 0x822B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x35C4));
	emu_push(emu_cs);
	emu_push(0x01DC); f__0F78_01FF_0010_6058();
	f__0F78_01DC_0017_694E();
}

/**
 * Decompiled function f__0F78_01DC_0017_694E()
 *
 * @name f__0F78_01DC_0017_694E
 * @implements 0F78:01DC:0017:694E ()
 *
 * Called From: 0F78:01DC:0012:822B
 */
void f__0F78_01DC_0017_694E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__0F78_01F5_0006_2B52(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x35C4));
	if (emu_flags.zf) { emu_ip = 0x01F5; emu_last_cs = 0x0F78; emu_last_ip = 0x01E7; emu_last_length = 0x0017; emu_last_crc = 0x694E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x01F3); f__0F78_01FF_0010_6058();
	f__0F78_01F3_0008_5ED2();
}

/**
 * Decompiled function f__0F78_01F3_0008_5ED2()
 *
 * @name f__0F78_01F3_0008_5ED2
 * @implements 0F78:01F3:0008:5ED2 ()
 *
 * Called From: 0F78:01F3:0017:694E
 */
void f__0F78_01F3_0008_5ED2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35C4), emu_si);
	f__0F78_01C6_0004_0D46(); return;
}

/**
 * Decompiled function f__0F78_01F5_0006_2B52()
 *
 * @name f__0F78_01F5_0006_2B52
 * @implements 0F78:01F5:0006:2B52 ()
 *
 * Called From: 0F78:01E1:0017:694E
 */
void f__0F78_01F5_0006_2B52()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35C4), emu_si);
	f__0F78_01C6_0004_0D46(); return;
}

/**
 * Decompiled function f__0F78_01FB_0004_07E2()
 *
 * @name f__0F78_01FB_0004_07E2
 * @implements 0F78:01FB:0004:07E2 ()
 *
 * Called From: 0F78:01C8:0016:AE41
 * Called From: 0F78:01C8:0004:0D46
 */
void f__0F78_01FB_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_01FF_0010_6058()
 *
 * @name f__0F78_01FF_0010_6058
 * @implements 0F78:01FF:0010:6058 ()
 *
 * Called From: 0F78:01D9:0012:822B
 * Called From: 0F78:01F0:0017:694E
 */
void f__0F78_01FF_0010_6058()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0xFF);
	if (!emu_flags.zf) { f__0F78_020F_0004_07A8(); return; }
	f__0F78_027F_0006_137A(); return;
}

/**
 * Decompiled function f__0F78_020F_0004_07A8()
 *
 * @name f__0F78_020F_0004_07A8
 * @implements 0F78:020F:0004:07A8 ()
 *
 * Called From: 0F78:020B:0010:6058
 */
void f__0F78_020F_0004_07A8()
{
	emu_xorw(&emu_di, emu_di);
	f__0F78_0279_000C_0978(); return;
}

/**
 * Decompiled function f__0F78_0213_0004_079A()
 *
 * @name f__0F78_0213_0004_079A
 * @implements 0F78:0213:0004:079A ()
 *
 * Called From: 0F78:027D:000C:0978
 * Called From: 0F78:027D:0014:2C3B
 * Called From: 0F78:027D:002B:D391
 */
void f__0F78_0213_0004_079A()
{
	emu_xorw(&emu_si, emu_si);
	f__0F78_0272_0013_285B(); return;
}

/**
 * Decompiled function f__0F78_0217_0007_297A()
 *
 * @name f__0F78_0217_0007_297A
 * @implements 0F78:0217:0007:297A ()
 *
 * Called From: 0F78:0276:0013:285B
 * Called From: 0F78:0276:0014:2C3B
 * Called From: 0F78:0276:002B:D391
 */
void f__0F78_0217_0007_297A()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021E); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	f__0F78_021E_001C_4289();
}

/**
 * Decompiled function f__0F78_021E_001C_4289()
 *
 * @name f__0F78_021E_001C_4289
 * @implements 0F78:021E:001C:4289 ()
 *
 * Called From: 0F78:021E:0007:297A
 */
void f__0F78_021E_001C_4289()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x34CD; ovl__34CD(29);
	f__0F78_023A_0020_2891();
}

/**
 * Decompiled function f__0F78_023A_0020_2891()
 *
 * @name f__0F78_023A_0020_2891
 * @implements 0F78:023A:0020:2891 ()
 *
 * Called From: 0F78:023A:001C:4289
 */
void f__0F78_023A_0020_2891()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { f__0F78_025A_002B_D391(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6A1B), emu_ax.l);
	f__0F78_0271_0014_2C3B(); return;
}

/**
 * Decompiled function f__0F78_025A_002B_D391()
 *
 * @name f__0F78_025A_002B_D391
 * @implements 0F78:025A:002B:D391 ()
 *
 * Called From: 0F78:0241:0020:2891
 */
void f__0F78_025A_002B_D391()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6A1B), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3A04));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0217_0007_297A(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A06));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0213_0004_079A(); return; }
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
 * Decompiled function f__0F78_0271_0014_2C3B()
 *
 * @name f__0F78_0271_0014_2C3B
 * @implements 0F78:0271:0014:2C3B ()
 *
 * Called From: 0F78:0258:0020:2891
 */
void f__0F78_0271_0014_2C3B()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3A04));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0217_0007_297A(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A06));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0213_0004_079A(); return; }
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
 * Decompiled function f__0F78_0272_0013_285B()
 *
 * @name f__0F78_0272_0013_285B
 * @implements 0F78:0272:0013:285B ()
 *
 * Called From: 0F78:0215:0004:079A
 */
void f__0F78_0272_0013_285B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3A04));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0217_0007_297A(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A06));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0213; emu_last_cs = 0x0F78; emu_last_ip = 0x027D; emu_last_length = 0x0013; emu_last_crc = 0x285B; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__0F78_0279_000C_0978()
 *
 * @name f__0F78_0279_000C_0978
 * @implements 0F78:0279:000C:0978 ()
 *
 * Called From: 0F78:0211:0004:07A8
 */
void f__0F78_0279_000C_0978()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A06));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0213_0004_079A(); return; }
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
 * Decompiled function f__0F78_027F_0006_137A()
 *
 * @name f__0F78_027F_0006_137A
 * @implements 0F78:027F:0006:137A ()
 *
 * Called From: 0F78:020D:0010:6058
 */
void f__0F78_027F_0006_137A()
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
 * Decompiled function f__0F78_0285_001C_B090()
 *
 * @name f__0F78_0285_001C_B090
 * @implements 0F78:0285:001C:B090 ()
 *
 * Called From: 0F78:03BB:0021:BBE1
 * Called From: 0F78:03D2:0007:271C
 * Called From: B4E9:02BE:001A:26AE
 * Called From: B511:0406:002D:03D4
 */
void f__0F78_0285_001C_B090()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x35C6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02CB; emu_last_cs = 0x0F78; emu_last_ip = 0x0297; emu_last_length = 0x001C; emu_last_crc = 0xB090; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02A1); f__0F78_01B4_0016_AE41();
	f__0F78_02A1_0029_E145();
}

/**
 * Decompiled function f__0F78_02A1_0029_E145()
 *
 * @name f__0F78_02A1_0029_E145
 * @implements 0F78:02A1:0029:E145 ()
 *
 * Called From: 0F78:02A1:001C:B090
 */
void f__0F78_02A1_0029_E145()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x35C6), emu_si);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E40));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A04), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E42));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A06), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02CA); f__0F78_01B4_0016_AE41();
	f__0F78_02CA_0006_070C();
}

/**
 * Decompiled function f__0F78_02CA_0006_070C()
 *
 * @name f__0F78_02CA_0006_070C
 * @implements 0F78:02CA:0006:070C ()
 *
 * Called From: 0F78:02CA:0029:E145
 */
void f__0F78_02CA_0006_070C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0F78_02D0_0005_04BA(); return;
}

/**
 * Decompiled function f__0F78_02D0_0005_04BA()
 *
 * @name f__0F78_02D0_0005_04BA
 * @implements 0F78:02D0:0005:04BA ()
 *
 * Called From: 0F78:02CE:0006:070C
 */
void f__0F78_02D0_0005_04BA()
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
 * Decompiled function f__0F78_02D5_0014_D8D1()
 *
 * @name f__0F78_02D5_0014_D8D1
 * @implements 0F78:02D5:0014:D8D1 ()
 *
 * Called From: 0AEC:0778:0006:0A7E
 * Called From: 0AEC:07E1:0005:1FFE
 * Called From: 0AEC:07E1:000F:5AB3
 * Called From: B4E9:00DE:0009:A1FF
 * Called From: B511:0386:0012:3382
 */
void f__0F78_02D5_0014_D8D1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (!emu_flags.zf) { f__0F78_02E9_0011_6CA5(); return; }
	f__0F78_0430_0005_04BA(); return;
}

/**
 * Decompiled function f__0F78_02E9_0011_6CA5()
 *
 * @name f__0F78_02E9_0011_6CA5
 * @implements 0F78:02E9:0011:6CA5 ()
 *
 * Called From: 0F78:02E4:0014:D8D1
 */
void f__0F78_02E9_0011_6CA5()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__0F78_0302_0025_A1A0(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02FA); emu_cs = 0x0C3A; f__0C3A_0C5C_004D_4725();
	f__0F78_02FA_0008_44A2();
}

/**
 * Decompiled function f__0F78_02FA_0008_44A2()
 *
 * @name f__0F78_02FA_0008_44A2
 * @implements 0F78:02FA:0008:44A2 ()
 *
 * Called From: 0F78:02FA:0011:6CA5
 */
void f__0F78_02FA_0008_44A2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EC), emu_ax.x);
	f__0F78_042C_0009_2F3B(); return;
}

/**
 * Decompiled function f__0F78_0302_0025_A1A0()
 *
 * @name f__0F78_0302_0025_A1A0
 * @implements 0F78:0302:0025:A1A0 ()
 *
 * Called From: 0F78:02EE:0011:6CA5
 */
void f__0F78_0302_0025_A1A0()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!emu_flags.zf) { f__0F78_0327_0006_0EFC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0327; emu_last_cs = 0x0F78; emu_last_ip = 0x0322; emu_last_length = 0x0025; emu_last_crc = 0xA1A0; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0424; emu_last_cs = 0x0F78; emu_last_ip = 0x0324; emu_last_length = 0x0025; emu_last_crc = 0xA1A0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0F78_0327_0006_0EFC()
 *
 * @name f__0F78_0327_0006_0EFC
 * @implements 0F78:0327:0006:0EFC ()
 *
 * Called From: 0F78:031B:0025:A1A0
 */
void f__0F78_0327_0006_0EFC()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x032D); emu_cs = 0x34CD; ovl__34CD(30);
	f__0F78_032D_0012_AD18();
}

/**
 * Decompiled function f__0F78_032D_0012_AD18()
 *
 * @name f__0F78_032D_0012_AD18
 * @implements 0F78:032D:0012:AD18 ()
 *
 * Called From: 0F78:032D:0006:0EFC
 */
void f__0F78_032D_0012_AD18()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0F78_033F_004C_DF26(); return; }
	f__0F78_03CE_0007_271C(); return;
}

/**
 * Decompiled function f__0F78_033F_004C_DF26()
 *
 * @name f__0F78_033F_004C_DF26
 * @implements 0F78:033F:004C:DF26 ()
 *
 * Called From: 0F78:033A:0012:AD18
 */
void f__0F78_033F_004C_DF26()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x038D; emu_last_cs = 0x0F78; emu_last_ip = 0x034B; emu_last_length = 0x004C; emu_last_crc = 0xDF26; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (emu_flags.zf) { f__0F78_038D_0010_291F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x35));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x10E4; f__10E4_0117_0015_0AFA();
	f__0F78_038B_0012_28C9();
}

/**
 * Decompiled function f__0F78_038B_0012_28C9()
 *
 * @name f__0F78_038B_0012_28C9
 * @implements 0F78:038B:0012:28C9 ()
 *
 * Called From: 0F78:038B:004C:DF26
 */
void f__0F78_038B_0012_28C9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x039D); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0F78_039D_0021_BBE1();
}

/**
 * Decompiled function f__0F78_038D_0010_291F()
 *
 * @name f__0F78_038D_0010_291F
 * @implements 0F78:038D:0010:291F ()
 *
 * Called From: 0F78:0352:004C:DF26
 */
void f__0F78_038D_0010_291F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x039D); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0F78_039D_0021_BBE1();
}

/**
 * Decompiled function f__0F78_039D_0021_BBE1()
 *
 * @name f__0F78_039D_0021_BBE1
 * @implements 0F78:039D:0021:BBE1 ()
 *
 * Called From: 0F78:039D:0010:291F
 * Called From: 0F78:039D:0012:28C9
 */
void f__0F78_039D_0021_BBE1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_push(emu_cs);
	emu_push(0x03BE); f__0F78_0285_001C_B090();
	f__0F78_03BE_000C_AF5A();
}

/**
 * Decompiled function f__0F78_03BE_000C_AF5A()
 *
 * @name f__0F78_03BE_000C_AF5A
 * @implements 0F78:03BE:000C:AF5A ()
 *
 * Called From: 0F78:03BE:0021:BBE1
 */
void f__0F78_03BE_000C_AF5A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x03CA); emu_cs = 0x0C3A; f__0C3A_092A_0013_5F3A();
	f__0F78_03CA_0004_04E4();
}

/**
 * Decompiled function f__0F78_03CA_0004_04E4()
 *
 * @name f__0F78_03CA_0004_04E4
 * @implements 0F78:03CA:0004:04E4 ()
 *
 * Called From: 0F78:03CA:000C:AF5A
 */
void f__0F78_03CA_0004_04E4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0F78_03D6_000D_432F(); return;
}

/**
 * Decompiled function f__0F78_03CE_0007_271C()
 *
 * @name f__0F78_03CE_0007_271C
 * @implements 0F78:03CE:0007:271C ()
 *
 * Called From: 0F78:033C:0012:AD18
 */
void f__0F78_03CE_0007_271C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03D5); f__0F78_0285_001C_B090();
	f__0F78_03D5_000E_0339();
}

/**
 * Decompiled function f__0F78_03D5_000E_0339()
 *
 * @name f__0F78_03D5_000E_0339
 * @implements 0F78:03D5:000E:0339 ()
 *
 * Called From: 0F78:03D5:0007:271C
 */
void f__0F78_03D5_000E_0339()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0422; emu_last_cs = 0x0F78; emu_last_ip = 0x03DB; emu_last_length = 0x000E; emu_last_crc = 0x0339; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E3); emu_cs = 0x34CD; ovl__34CD(26);
	f__0F78_03E3_0025_51C5();
}

/**
 * Decompiled function f__0F78_03D6_000D_432F()
 *
 * @name f__0F78_03D6_000D_432F
 * @implements 0F78:03D6:000D:432F ()
 *
 * Called From: 0F78:03CC:0004:04E4
 */
void f__0F78_03D6_000D_432F()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0422; emu_last_cs = 0x0F78; emu_last_ip = 0x03DB; emu_last_length = 0x000D; emu_last_crc = 0x432F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E3); emu_cs = 0x34CD; ovl__34CD(26);
	f__0F78_03E3_0025_51C5();
}

/**
 * Decompiled function f__0F78_03E3_0025_51C5()
 *
 * @name f__0F78_03E3_0025_51C5
 * @implements 0F78:03E3:0025:51C5 ()
 *
 * Called From: 0F78:03E3:000D:432F
 * Called From: 0F78:03E3:000E:0339
 */
void f__0F78_03E3_0025_51C5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0F78_040C_0014_DD60(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x040A; emu_last_cs = 0x0F78; emu_last_ip = 0x03FB; emu_last_length = 0x0025; emu_last_crc = 0x51C5; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0408); emu_cs = 0x1A34; f__1A34_0F48_0018_F029();
	f__0F78_0408_0004_04D8();
}

/**
 * Decompiled function f__0F78_0408_0004_04D8()
 *
 * @name f__0F78_0408_0004_04D8
 * @implements 0F78:0408:0004:04D8 ()
 *
 * Called From: 0F78:0408:0025:51C5
 */
void f__0F78_0408_0004_04D8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0F78_0422_0002_03BC(); return;
}

/**
 * Decompiled function f__0F78_040C_0014_DD60()
 *
 * @name f__0F78_040C_0014_DD60
 * @implements 0F78:040C:0014:DD60 ()
 *
 * Called From: 0F78:03F0:0025:51C5
 */
void f__0F78_040C_0014_DD60()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__0F78_0422_0002_03BC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0420); emu_cs = 0x1A34; f__1A34_0F48_0018_F029();
	f__0F78_0420_0004_04E4();
}

/**
 * Decompiled function f__0F78_0420_0004_04E4()
 *
 * @name f__0F78_0420_0004_04E4
 * @implements 0F78:0420:0004:04E4 ()
 *
 * Called From: 0F78:0420:0014:DD60
 */
void f__0F78_0420_0004_04E4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0F78_042C_0009_2F3B(); return;
}

/**
 * Decompiled function f__0F78_0422_0002_03BC()
 *
 * @name f__0F78_0422_0002_03BC
 * @implements 0F78:0422:0002:03BC ()
 *
 * Called From: 0F78:040A:0004:04D8
 * Called From: 0F78:0413:0014:DD60
 */
void f__0F78_0422_0002_03BC()
{
	f__0F78_042C_0009_2F3B(); return;
}

/**
 * Decompiled function f__0F78_042C_0009_2F3B()
 *
 * @name f__0F78_042C_0009_2F3B
 * @implements 0F78:042C:0009:2F3B ()
 *
 * Called From: 0F78:02FF:0008:44A2
 * Called From: 0F78:0422:0002:03BC
 * Called From: 0F78:0422:0004:04E4
 */
void f__0F78_042C_0009_2F3B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A02), emu_si);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_0430_0005_04BA()
 *
 * @name f__0F78_0430_0005_04BA
 * @implements 0F78:0430:0005:04BA ()
 *
 * Called From: 0F78:02E6:0014:D8D1
 */
void f__0F78_0430_0005_04BA()
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
 * Decompiled function f__0F78_0435_000E_A5D2()
 *
 * @name f__0F78_0435_000E_A5D2
 * @implements 0F78:0435:000E:A5D2 ()
 *
 * Called From: 0AEC:01ED:0016:6677
 */
void f__0F78_0435_000E_A5D2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__0F78_0443_0017_21B3();
}

/**
 * Decompiled function f__0F78_0443_0017_21B3()
 *
 * @name f__0F78_0443_0017_21B3
 * @implements 0F78:0443:0017:21B3 ()
 *
 * Called From: 0F78:0443:000E:A5D2
 */
void f__0F78_0443_0017_21B3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x35C8));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x045A); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__0F78_045A_0020_335E();
}

/**
 * Decompiled function f__0F78_045A_0020_335E()
 *
 * @name f__0F78_045A_0020_335E
 * @implements 0F78:045A:0020:335E ()
 *
 * Called From: 0F78:045A:0017:21B3
 */
void f__0F78_045A_0020_335E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x35CA));
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x047A; emu_last_cs = 0x0F78; emu_last_ip = 0x0474; emu_last_length = 0x0020; emu_last_crc = 0x335E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__0F78_0486_0014_03B4(); return;
}

/**
 * Decompiled function f__0F78_0486_0014_03B4()
 *
 * @name f__0F78_0486_0014_03B4
 * @implements 0F78:0486:0014:03B4 ()
 *
 * Called From: 0F78:0478:0020:335E
 */
void f__0F78_0486_0014_03B4()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x049A; emu_last_cs = 0x0F78; emu_last_ip = 0x0494; emu_last_length = 0x0014; emu_last_crc = 0x03B4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__0F78_04A6_0025_B91D(); return;
}

/**
 * Decompiled function f__0F78_04A6_0025_B91D()
 *
 * @name f__0F78_04A6_0025_B91D
 * @implements 0F78:04A6:0025:B91D ()
 *
 * Called From: 0F78:0498:0014:03B4
 */
void f__0F78_04A6_0025_B91D()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_addw(&emu_ax.x, 0xFFF1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F78_04CB_0040_A4A9(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0F78_04E6_0025_5915(); return;
}

/**
 * Decompiled function f__0F78_04CB_0040_A4A9()
 *
 * @name f__0F78_04CB_0040_A4A9
 * @implements 0F78:04CB:0040:A4A9 ()
 *
 * Called From: 0F78:04C5:0025:B91D
 */
void f__0F78_04CB_0040_A4A9()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_addw(&emu_ax.x, 0xFFF1);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F78_050B_0024_DCB5(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0F78_0526_0009_C77B(); return;
}

/**
 * Decompiled function f__0F78_04E6_0025_5915()
 *
 * @name f__0F78_04E6_0025_5915
 * @implements 0F78:04E6:0025:5915 ()
 *
 * Called From: 0F78:04C9:0025:B91D
 */
void f__0F78_04E6_0025_5915()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x050B; emu_last_cs = 0x0F78; emu_last_ip = 0x0505; emu_last_length = 0x0025; emu_last_crc = 0x5915; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__0F78_0526_0009_C77B(); return;
}

/**
 * Decompiled function f__0F78_050B_0024_DCB5()
 *
 * @name f__0F78_050B_0024_DCB5
 * @implements 0F78:050B:0024:DCB5 ()
 *
 * Called From: 0F78:0505:0040:A4A9
 */
void f__0F78_050B_0024_DCB5()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x052F); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	f__0F78_052F_000A_1DE5();
}

/**
 * Decompiled function f__0F78_0526_0009_C77B()
 *
 * @name f__0F78_0526_0009_C77B
 * @implements 0F78:0526:0009:C77B ()
 *
 * Called From: 0F78:0509:0025:5915
 * Called From: 0F78:0509:0040:A4A9
 */
void f__0F78_0526_0009_C77B()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x052F); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	f__0F78_052F_000A_1DE5();
}

/**
 * Decompiled function f__0F78_052F_000A_1DE5()
 *
 * @name f__0F78_052F_000A_1DE5
 * @implements 0F78:052F:000A:1DE5 ()
 *
 * Called From: 0F78:052F:0009:C77B
 * Called From: 0F78:052F:0024:DCB5
 */
void f__0F78_052F_000A_1DE5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	f__0F78_0539_0004_07E2(); return;
}

/**
 * Decompiled function f__0F78_0539_0004_07E2()
 *
 * @name f__0F78_0539_0004_07E2
 * @implements 0F78:0539:0004:07E2 ()
 *
 * Called From: 0F78:0537:000A:1DE5
 */
void f__0F78_0539_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
