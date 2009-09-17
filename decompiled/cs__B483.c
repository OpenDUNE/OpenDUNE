/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B483_0000_0019_F96A()
 *
 * @name f__B483_0000_0019_F96A
 * @implements B483:0000:0019:F96A ()
 *
 * Called From: 3483:0020:0005:0000
 */
void f__B483_0000_0019_F96A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0016; emu_last_cs = 0xB483; emu_last_ip = 0x000D; emu_last_length = 0x0019; emu_last_crc = 0xF96A; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__B483_0019_001A_284C(); return; }
	f__B483_0150_0006_F7CE(); return;
}

/**
 * Decompiled function f__B483_0019_001A_284C()
 *
 * @name f__B483_0019_001A_284C
 * @implements B483:0019:001A:284C ()
 *
 * Called From: B483:0014:0019:F96A
 */
void f__B483_0019_001A_284C()
{
	emu_movw(&emu_si, 0xFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { f__B483_006D_0015_6285(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0033_0008_DA8A();
}

/**
 * Decompiled function f__B483_0033_0008_DA8A()
 *
 * @name f__B483_0033_0008_DA8A
 * @implements B483:0033:0008:DA8A ()
 *
 * Called From: B483:0033:001A:284C
 */
void f__B483_0033_0008_DA8A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_003B_000D_4A11();
}

/**
 * Decompiled function f__B483_003B_000D_4A11()
 *
 * @name f__B483_003B_000D_4A11
 * @implements B483:003B:000D:4A11 ()
 *
 * Called From: B483:003B:0008:DA8A
 */
void f__B483_003B_000D_4A11()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x40);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0048; emu_last_cs = 0xB483; emu_last_ip = 0x0042; emu_last_length = 0x000D; emu_last_crc = 0x4A11; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B483_004B_000C_F391(); return;
}

/**
 * Decompiled function f__B483_004B_000C_F391()
 *
 * @name f__B483_004B_000C_F391
 * @implements B483:004B:000C:F391 ()
 *
 * Called From: B483:0046:000D:4A11
 */
void f__B483_004B_000C_F391()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0057); emu_cs = 0x34C1; ovl__34C1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0057_000E_35F7();
}

/**
 * Decompiled function f__B483_0057_000E_35F7()
 *
 * @name f__B483_0057_000E_35F7
 * @implements B483:0057:000E:35F7 ()
 *
 * Called From: B483:0057:000C:F391
 */
void f__B483_0057_000E_35F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x34C1; ovl__34C1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0065_001D_84B8();
}

/**
 * Decompiled function f__B483_0065_001D_84B8()
 *
 * @name f__B483_0065_001D_84B8
 * @implements B483:0065:001D:84B8 ()
 *
 * Called From: B483:0065:000E:35F7
 */
void f__B483_0065_001D_84B8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_si, 0xFF);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x222));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0xB483; emu_last_ip = 0x007D; emu_last_length = 0x001D; emu_last_crc = 0x84B8; emu_call(); return; }
	f__B483_0147_0007_3640(); return;
}

/**
 * Decompiled function f__B483_006D_0015_6285()
 *
 * @name f__B483_006D_0015_6285
 * @implements B483:006D:0015:6285 ()
 *
 * Called From: B483:0022:001A:284C
 */
void f__B483_006D_0015_6285()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x222));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0xB483; emu_last_ip = 0x007D; emu_last_length = 0x0015; emu_last_crc = 0x6285; emu_call(); return; }
	f__B483_0147_0007_3640(); return;
}

/**
 * Decompiled function f__B483_0147_0007_3640()
 *
 * @name f__B483_0147_0007_3640
 * @implements B483:0147:0007:3640 ()
 *
 * Called From: B483:007F:0015:6285
 * Called From: B483:007F:001D:84B8
 */
void f__B483_0147_0007_3640()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x014E); emu_cs = 0x1DD7; f__1DD7_048A_0017_3EEB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_014E_0008_AE7C();
}

/**
 * Decompiled function f__B483_014E_0008_AE7C()
 *
 * @name f__B483_014E_0008_AE7C
 * @implements B483:014E:0008:AE7C ()
 *
 * Called From: B483:014E:0007:3640
 */
void f__B483_014E_0008_AE7C()
{
	emu_pop(&emu_cx.x);
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

/**
 * Decompiled function f__B483_0150_0006_F7CE()
 *
 * @name f__B483_0150_0006_F7CE
 * @implements B483:0150:0006:F7CE ()
 *
 * Called From: B483:0016:0019:F96A
 */
void f__B483_0150_0006_F7CE()
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
 * Decompiled function f__B483_0156_0019_AEFE()
 *
 * @name f__B483_0156_0019_AEFE
 * @implements B483:0156:0019:AEFE ()
 *
 * Called From: 3483:0039:0005:0000
 * Called From: B483:0499:0019:7945
 */
void f__B483_0156_0019_AEFE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B483_016C_0003_DDA3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__B483_016F_0016_9FE7(); return; }
	f__B483_027E_0005_8BCF(); return;
}

/**
 * Decompiled function f__B483_016C_0003_DDA3()
 *
 * @name f__B483_016C_0003_DDA3
 * @implements B483:016C:0003:DDA3 ()
 *
 * Called From: B483:0163:0019:AEFE
 */
void f__B483_016C_0003_DDA3()
{
	f__B483_027E_0005_8BCF(); return;
}

/**
 * Decompiled function f__B483_016F_0016_9FE7()
 *
 * @name f__B483_016F_0016_9FE7
 * @implements B483:016F:0016:9FE7 ()
 *
 * Called From: B483:016A:0019:AEFE
 */
void f__B483_016F_0016_9FE7()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0xD5E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x4060));
	if (!(emu_flags.sf != emu_flags.of)) { f__B483_0185_0037_9CAC(); return; }
	/* Unresolved jump */ emu_ip = 0x027E; emu_last_cs = 0xB483; emu_last_ip = 0x0182; emu_last_length = 0x0016; emu_last_crc = 0x9FE7; emu_call();
}

/**
 * Decompiled function f__B483_0185_0037_9CAC()
 *
 * @name f__B483_0185_0037_9CAC
 * @implements B483:0185:0037:9CAC ()
 *
 * Called From: B483:0180:0016:9FE7
 */
void f__B483_0185_0037_9CAC()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0xD5E));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3E56));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3E54));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B483_0211_003E_5CE7(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x2649; emu_ip = 0x0BAE; emu_last_cs = 0xB483; emu_last_ip = 0x01B7; emu_last_length = 0x0037; emu_last_crc = 0x9CAC; emu_call();
	/* Unresolved jump */ emu_ip = 0x01BC; emu_last_cs = 0xB483; emu_last_ip = 0x01BC; emu_last_length = 0x0037; emu_last_crc = 0x9CAC; emu_call();
}

/**
 * Decompiled function f__B483_0211_003E_5CE7()
 *
 * @name f__B483_0211_003E_5CE7
 * @implements B483:0211:003E:5CE7 ()
 *
 * Called From: B483:01AF:0037:9CAC
 */
void f__B483_0211_003E_5CE7()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0xD5A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x3F);
	if (!emu_flags.zf) { f__B483_027E_0005_8BCF(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3808));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0xD5A));
	emu_incw(&emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0xD5C));
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x01F7; emu_ip = 0x378D; emu_last_cs = 0xB483; emu_last_ip = 0x024A; emu_last_length = 0x003E; emu_last_crc = 0x5CE7; emu_call();
	/* Unresolved jump */ emu_ip = 0x024F; emu_last_cs = 0xB483; emu_last_ip = 0x024F; emu_last_length = 0x003E; emu_last_crc = 0x5CE7; emu_call();
}

/**
 * Decompiled function f__B483_027E_0005_8BCF()
 *
 * @name f__B483_027E_0005_8BCF
 * @implements B483:027E:0005:8BCF ()
 *
 * Called From: B483:016C:0003:DDA3
 * Called From: B483:016C:0019:AEFE
 * Called From: B483:0222:003E:5CE7
 */
void f__B483_027E_0005_8BCF()
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
 * Decompiled function f__B483_0283_0014_983A()
 *
 * @name f__B483_0283_0014_983A
 * @implements B483:0283:0014:983A ()
 *
 * Called From: 3483:0025:0005:0000
 */
void f__B483_0283_0014_983A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0294; emu_last_cs = 0xB483; emu_last_ip = 0x028D; emu_last_length = 0x0014; emu_last_crc = 0x983A; emu_call(); return; }
	emu_cmpws(&emu_si, 0x26);
	if ((emu_flags.sf != emu_flags.of)) { f__B483_0297_0020_5211(); return; }
	/* Unresolved jump */ emu_ip = 0x0360; emu_last_cs = 0xB483; emu_last_ip = 0x0294; emu_last_length = 0x0014; emu_last_crc = 0x983A; emu_call();
}

/**
 * Decompiled function f__B483_0297_0020_5211()
 *
 * @name f__B483_0297_0020_5211
 * @implements B483:0297:0020:5211 ()
 *
 * Called From: B483:0292:0014:983A
 */
void f__B483_0297_0020_5211()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3E50));
	if (!emu_flags.zf) { f__B483_02B7_001D_5E6C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3E4E));
	if (!emu_flags.zf) { f__B483_02B7_001D_5E6C(); return; }
	f__B483_034D_0012_13DA(); return;
}

/**
 * Decompiled function f__B483_02B7_001D_5E6C()
 *
 * @name f__B483_02B7_001D_5E6C
 * @implements B483:02B7:001D:5E6C ()
 *
 * Called From: B483:02AC:0020:5211
 * Called From: B483:02B2:0020:5211
 */
void f__B483_02B7_001D_5E6C()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x106C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E50), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E4E), emu_dx.x);
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x1DD7; f__1DD7_0A7B_001E_4A5A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_02D4_000B_5099();
}

/**
 * Decompiled function f__B483_02D4_000B_5099()
 *
 * @name f__B483_02D4_000B_5099
 * @implements B483:02D4:000B:5099 ()
 *
 * Called From: B483:02D4:001D:5E6C
 */
void f__B483_02D4_000B_5099()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x02DF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_02DF_0019_9BD8();
}

/**
 * Decompiled function f__B483_02DF_0019_9BD8()
 *
 * @name f__B483_02DF_0019_9BD8
 * @implements B483:02DF:0019:9BD8 ()
 *
 * Called From: B483:02DF:000B:5099
 */
void f__B483_02DF_0019_9BD8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_02F8_001A_FE1A();
}

/**
 * Decompiled function f__B483_02F8_001A_FE1A()
 *
 * @name f__B483_02F8_001A_FE1A
 * @implements B483:02F8:001A:FE1A ()
 *
 * Called From: B483:02F8:0019:9BD8
 */
void f__B483_02F8_001A_FE1A()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0312_001C_FF11();
}

/**
 * Decompiled function f__B483_0312_001C_FF11()
 *
 * @name f__B483_0312_001C_FF11
 * @implements B483:0312:001C:FF11 ()
 *
 * Called From: B483:0312:001A:FE1A
 */
void f__B483_0312_001C_FF11()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E50));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E4E));
	emu_push(emu_cs); emu_push(0x032E); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_032E_001C_6F5D();
}

/**
 * Decompiled function f__B483_032E_001C_6F5D()
 *
 * @name f__B483_032E_001C_6F5D
 * @implements B483:032E:001C:6F5D ()
 *
 * Called From: B483:032E:001C:FF11
 */
void f__B483_032E_001C_6F5D()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E50));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3E4E));
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_034A_0015_564E();
}

/**
 * Decompiled function f__B483_034A_0015_564E()
 *
 * @name f__B483_034A_0015_564E
 * @implements B483:034A:0015:564E ()
 *
 * Called From: B483:034A:001C:6F5D
 */
void f__B483_034A_0015_564E()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x1070));
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x1DD7; f__1DD7_08EE_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_035F_0004_BE52();
}

/**
 * Decompiled function f__B483_034D_0012_13DA()
 *
 * @name f__B483_034D_0012_13DA
 * @implements B483:034D:0012:13DA ()
 *
 * Called From: B483:02B4:0020:5211
 */
void f__B483_034D_0012_13DA()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x1070));
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x1DD7; f__1DD7_08EE_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_035F_0004_BE52();
}

/**
 * Decompiled function f__B483_035F_0004_BE52()
 *
 * @name f__B483_035F_0004_BE52
 * @implements B483:035F:0004:BE52 ()
 *
 * Called From: B483:035F:0012:13DA
 * Called From: B483:035F:0015:564E
 */
void f__B483_035F_0004_BE52()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_0363_0016_83DF()
 *
 * @name f__B483_0363_0016_83DF
 * @implements B483:0363:0016:83DF ()
 *
 * Called From: 3483:002A:0005:0000
 */
void f__B483_0363_0016_83DF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0xFFFE);
	if (emu_flags.zf) { f__B483_0379_0004_EB79(); return; }
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BB; emu_last_cs = 0xB483; emu_last_ip = 0x0375; emu_last_length = 0x0016; emu_last_crc = 0x83DF; emu_call(); return; }
	f__B483_03BE_002E_22D4(); return;
}

/**
 * Decompiled function f__B483_0379_0004_EB79()
 *
 * @name f__B483_0379_0004_EB79
 * @implements B483:0379:0004:EB79 ()
 *
 * Called From: B483:0370:0016:83DF
 */
void f__B483_0379_0004_EB79()
{
	emu_xorw(&emu_si, emu_si);
	f__B483_0388_000A_9F0B(); return;
}

/**
 * Decompiled function f__B483_037D_0015_C5B6()
 *
 * @name f__B483_037D_0015_C5B6
 * @implements B483:037D:0015:C5B6 ()
 *
 * Called From: B483:038B:000A:9F0B
 * Called From: B483:038B:0015:C5B6
 */
void f__B483_037D_0015_C5B6()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x218), 0xFFFF);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B483_037D_0015_C5B6(); return; }
	emu_push(emu_cs); emu_push(0x0392); emu_cs = 0x1DD7; f__1DD7_01AB_0007_96C6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0392_0029_BAA5();
}

/**
 * Decompiled function f__B483_0388_000A_9F0B()
 *
 * @name f__B483_0388_000A_9F0B
 * @implements B483:0388:000A:9F0B ()
 *
 * Called From: B483:037B:0004:EB79
 */
void f__B483_0388_000A_9F0B()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B483_037D_0015_C5B6(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0392); emu_cs = 0x1DD7; emu_ip = 0x01AB; emu_last_cs = 0xB483; emu_last_ip = 0x038D; emu_last_length = 0x000A; emu_last_crc = 0x9F0B; emu_call();
	f__B483_0392_0029_BAA5();
}

/**
 * Decompiled function f__B483_0392_0029_BAA5()
 *
 * @name f__B483_0392_0029_BAA5
 * @implements B483:0392:0029:BAA5 ()
 *
 * Called From: B483:0392:0015:C5B6
 */
void f__B483_0392_0029_BAA5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BC), 0x0);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__B483_03B2_0009_DBAE(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), 0x0);
	f__B483_046C_0004_DE52(); return;
}

/**
 * Decompiled function f__B483_03B2_0009_DBAE()
 *
 * @name f__B483_03B2_0009_DBAE
 * @implements B483:03B2:0009:DBAE ()
 *
 * Called From: B483:03A4:0029:BAA5
 */
void f__B483_03B2_0009_DBAE()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), 0x0);
	f__B483_046C_0004_DE52(); return;
}

/**
 * Decompiled function f__B483_03BE_002E_22D4()
 *
 * @name f__B483_03BE_002E_22D4
 * @implements B483:03BE:002E:22D4 ()
 *
 * Called From: B483:0377:0016:83DF
 */
void f__B483_03BE_002E_22D4()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B483_03DA_0012_DE0F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03DA; emu_last_cs = 0xB483; emu_last_ip = 0x03CA; emu_last_length = 0x002E; emu_last_crc = 0x22D4; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x041D; emu_last_cs = 0xB483; emu_last_ip = 0x03D1; emu_last_length = 0x002E; emu_last_crc = 0x22D4; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x4);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x041D; emu_last_cs = 0xB483; emu_last_ip = 0x03D8; emu_last_length = 0x002E; emu_last_crc = 0x22D4; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x31E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x1DD7; emu_ip = 0x0477; emu_last_cs = 0xB483; emu_last_ip = 0x03E7; emu_last_length = 0x002E; emu_last_crc = 0x22D4; emu_call();
	f__B483_03EC_0013_5CAE();
}

/**
 * Decompiled function f__B483_03DA_0012_DE0F()
 *
 * @name f__B483_03DA_0012_DE0F
 * @implements B483:03DA:0012:DE0F ()
 *
 * Called From: B483:03C3:002E:22D4
 */
void f__B483_03DA_0012_DE0F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x31E));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_03EC_0013_5CAE();
}

/**
 * Decompiled function f__B483_03EC_0013_5CAE()
 *
 * @name f__B483_03EC_0013_5CAE
 * @implements B483:03EC:0013:5CAE ()
 *
 * Called From: B483:03EC:0012:DE0F
 */
void f__B483_03EC_0013_5CAE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x31C));
	emu_push(emu_cs); emu_push(0x03FF); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_03FF_001E_7533();
}

/**
 * Decompiled function f__B483_03FF_001E_7533()
 *
 * @name f__B483_03FF_001E_7533
 * @implements B483:03FF:001E:7533 ()
 *
 * Called From: B483:03FF:0013:5CAE
 */
void f__B483_03FF_001E_7533()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BC), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__B483_0415_0008_880C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x4);
	f__B483_046A_0002_C03A(); return;
}

/**
 * Decompiled function f__B483_0415_0008_880C()
 *
 * @name f__B483_0415_0008_880C
 * @implements B483:0415:0008:880C ()
 *
 * Called From: B483:040D:001E:7533
 */
void f__B483_0415_0008_880C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x4);
	f__B483_046A_0002_C03A(); return;
}

/**
 * Decompiled function f__B483_046A_0002_C03A()
 *
 * @name f__B483_046A_0002_C03A
 * @implements B483:046A:0002:C03A ()
 *
 * Called From: B483:041B:0008:880C
 * Called From: B483:041B:001E:7533
 */
void f__B483_046A_0002_C03A()
{
	f__B483_046C_0004_DE52(); return;
}

/**
 * Decompiled function f__B483_046C_0004_DE52()
 *
 * @name f__B483_046C_0004_DE52
 * @implements B483:046C:0004:DE52 ()
 *
 * Called From: B483:03B8:0009:DBAE
 * Called From: B483:03B8:0029:BAA5
 * Called From: B483:046A:0002:C03A
 */
void f__B483_046C_0004_DE52()
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
 * Decompiled function f__B483_0470_000E_519D()
 *
 * @name f__B483_0470_000E_519D
 * @implements B483:0470:000E:519D ()
 *
 * Called From: 3483:002F:0005:0000
 */
void f__B483_0470_000E_519D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x700A), 0x0);
	if (!emu_flags.zf) { f__B483_047E_0005_7A4B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B483_04C9_0002_2597(); return;
}

/**
 * Decompiled function f__B483_047A_0004_CDB9()
 *
 * @name f__B483_047A_0004_CDB9
 * @implements B483:047A:0004:CDB9 ()
 *
 * Called From: B483:04C0:0002:9C3A
 */
void f__B483_047A_0004_CDB9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B483_04C9_0002_2597(); return;
}

/**
 * Decompiled function f__B483_047C_0002_E5BA()
 *
 * @name f__B483_047C_0002_E5BA
 * @implements B483:047C:0002:E5BA ()
 *
 * Called From: B483:04C7:0005:8C7A
 */
void f__B483_047C_0002_E5BA()
{
	f__B483_04C9_0002_2597(); return;
}

/**
 * Decompiled function f__B483_047E_0005_7A4B()
 *
 * @name f__B483_047E_0005_7A4B
 * @implements B483:047E:0005:7A4B ()
 *
 * Called From: B483:0478:000E:519D
 */
void f__B483_047E_0005_7A4B()
{
	emu_push(emu_cs); emu_push(0x0483); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_0483_0019_7945();
}

/**
 * Decompiled function f__B483_0483_0019_7945()
 *
 * @name f__B483_0483_0019_7945
 * @implements B483:0483:0019:7945 ()
 *
 * Called From: B483:0483:0005:7A4B
 */
void f__B483_0483_0019_7945()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B483_04C4_0005_8C7A(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4060), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x218), 0xFF);
	if (emu_flags.zf) { f__B483_04C0_0002_9C3A(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x218));
	emu_push(emu_cs);
	emu_push(0x049C); f__B483_0156_0019_AEFE();
	f__B483_049C_0017_11AB();
}

/**
 * Decompiled function f__B483_049C_0017_11AB()
 *
 * @name f__B483_049C_0017_11AB
 * @implements B483:049C:0017:11AB ()
 *
 * Called From: B483:049C:0019:7945
 */
void f__B483_049C_0017_11AB()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x218);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x21A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B3); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { ovl__3483(0xFF); }
	f__B483_04B3_000B_3ADF();
}

/**
 * Decompiled function f__B483_04B3_000B_3ADF()
 *
 * @name f__B483_04B3_000B_3ADF
 * @implements B483:04B3:000B:3ADF ()
 *
 * Called From: B483:04B3:0017:11AB
 */
void f__B483_04B3_000B_3ADF()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x220), 0xFFFF);
	f__B483_04C4_0005_8C7A(); return;
}

/**
 * Decompiled function f__B483_04C0_0002_9C3A()
 *
 * @name f__B483_04C0_0002_9C3A
 * @implements B483:04C0:0002:9C3A ()
 *
 * Called From: B483:0492:0019:7945
 */
void f__B483_04C0_0002_9C3A()
{
	f__B483_047A_0004_CDB9(); return;
}

/**
 * Decompiled function f__B483_04C4_0005_8C7A()
 *
 * @name f__B483_04C4_0005_8C7A
 * @implements B483:04C4:0005:8C7A ()
 *
 * Called From: B483:0485:0019:7945
 * Called From: B483:04BC:000B:3ADF
 */
void f__B483_04C4_0005_8C7A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B483_047C_0002_E5BA(); return;
}

/**
 * Decompiled function f__B483_04C9_0002_2597()
 *
 * @name f__B483_04C9_0002_2597
 * @implements B483:04C9:0002:2597 ()
 *
 * Called From: B483:047C:0004:CDB9
 * Called From: B483:047C:0002:E5BA
 * Called From: B483:047C:000E:519D
 */
void f__B483_04C9_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B483_04CB_0015_EBB4()
 *
 * @name f__B483_04CB_0015_EBB4
 * @implements B483:04CB:0015:EBB4 ()
 *
 * Called From: 3483:0034:0005:0000
 */
void f__B483_04CB_0015_EBB4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04E0; emu_last_cs = 0xB483; emu_last_ip = 0x04DB; emu_last_length = 0x0015; emu_last_crc = 0xEBB4; emu_call(); return; }
	f__B483_07F5_0006_F7CE(); return;
}

/**
 * Decompiled function f__B483_07F5_0006_F7CE()
 *
 * @name f__B483_07F5_0006_F7CE
 * @implements B483:07F5:0006:F7CE ()
 *
 * Called From: B483:04DD:0015:EBB4
 */
void f__B483_07F5_0006_F7CE()
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
