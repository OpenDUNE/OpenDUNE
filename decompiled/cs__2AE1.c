/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2AE1_0096_0009_9B4B()
 *
 * @name f__2AE1_0096_0009_9B4B
 * @implements 2AE1:0096:0009:9B4B ()
 *
 * Called From: 2AE1:00C8:0014:51EF
 * Called From: 2AE1:02B0:0014:50E5
 */
void f__2AE1_0096_0009_9B4B()
{
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	f__2AE1_009F_000E_69CD();
}

/**
 * Decompiled function f__2AE1_009F_000E_69CD()
 *
 * @name f__2AE1_009F_000E_69CD
 * @implements 2AE1:009F:000E:69CD ()
 *
 * Called From: 2AE1:009F:0009:9B4B
 */
void f__2AE1_009F_000E_69CD()
{
	emu_addw(&emu_sp, 0x4);
	emu_movw(&emu_ds, emu_dx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00AD); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	f__2AE1_00AD_000A_C73C();
}

/**
 * Decompiled function f__2AE1_00AD_000A_C73C()
 *
 * @name f__2AE1_00AD_000A_C73C
 * @implements 2AE1:00AD:000A:C73C ()
 *
 * Called From: 2AE1:00AD:000E:69CD
 */
void f__2AE1_00AD_000A_C73C()
{
	emu_addw(&emu_sp, 0x4);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_di, emu_ax);
	emu_pop(&emu_dx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_00B7_0014_51EF()
 *
 * @name f__2AE1_00B7_0014_51EF
 * @implements 2AE1:00B7:0014:51EF ()
 *
 * Called From: B52A:0594:0016:5135
 * Called From: B52A:0A95:0024:8346
 */
void f__2AE1_00B7_0014_51EF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00CB); f__2AE1_0096_0009_9B4B();
	f__2AE1_00CB_0017_8457();
}

/**
 * Decompiled function f__2AE1_00CB_0017_8457()
 *
 * @name f__2AE1_00CB_0017_8457
 * @implements 2AE1:00CB:0017:8457 ()
 *
 * Called From: 2AE1:00CB:0014:51EF
 */
void f__2AE1_00CB_0017_8457()
{
	emu_cld();
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__2AE1_00E2_000C_275B(); return; }
	if (emu_flags.sf) { f__2AE1_00EE_0008_7F1B(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_00D9_0009_B81A(); return; }
	/* Unresolved jump */ emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x00E0; emu_last_length = 0x0017; emu_last_crc = 0x8457; emu_call();
}

/**
 * Decompiled function f__2AE1_00D0_0012_E6A7()
 *
 * @name f__2AE1_00D0_0012_E6A7
 * @implements 2AE1:00D0:0012:E6A7 ()
 *
 * Called From: 2AE1:00E0:0009:B81A
 * Called From: 2AE1:00E0:0012:E6A7
 * Called From: 2AE1:00EC:0008:BE2C
 * Called From: 2AE1:00EC:000C:275B
 * Called From: 2AE1:00F4:0008:7F1B
 * Called From: 2AE1:00FF:000B:4C40
 * Called From: 2AE1:0119:000A:25FC
 * Called From: 2AE1:0126:000B:AB71
 */
void f__2AE1_00D0_0012_E6A7()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__2AE1_00E2_000C_275B(); return; }
	if (emu_flags.sf) { f__2AE1_00EE_0008_7F1B(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_00D9_0009_B81A(); return; }
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_00D9_0009_B81A()
 *
 * @name f__2AE1_00D9_0009_B81A
 * @implements 2AE1:00D9:0009:B81A ()
 *
 * Called From: 2AE1:00DE:0012:E6A7
 * Called From: 2AE1:00DE:0009:B81A
 * Called From: 2AE1:00DE:0017:8457
 */
void f__2AE1_00D9_0009_B81A()
{
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_00D9_0009_B81A(); return; }
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_00E2_000C_275B()
 *
 * @name f__2AE1_00E2_000C_275B
 * @implements 2AE1:00E2:000C:275B ()
 *
 * Called From: 2AE1:00D3:0012:E6A7
 * Called From: 2AE1:00D3:0017:8457
 */
void f__2AE1_00E2_000C_275B()
{
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, emu_si, 0x0));
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_00E6_0008_BE2C(); return; }
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_00E6_0008_BE2C()
 *
 * @name f__2AE1_00E6_0008_BE2C
 * @implements 2AE1:00E6:0008:BE2C ()
 *
 * Called From: 2AE1:00EA:000C:275B
 * Called From: 2AE1:00EA:0008:BE2C
 */
void f__2AE1_00E6_0008_BE2C()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_00E6_0008_BE2C(); return; }
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_00EE_0008_7F1B()
 *
 * @name f__2AE1_00EE_0008_7F1B
 * @implements 2AE1:00EE:0008:7F1B ()
 *
 * Called From: 2AE1:00D5:0017:8457
 * Called From: 2AE1:00D5:0012:E6A7
 */
void f__2AE1_00EE_0008_7F1B()
{
	emu_subb(&emu_al, 0x80);
	if (emu_flags.zf) { f__2AE1_00F6_000B_4C40(); return; }
	emu_addw(&emu_di, emu_ax);
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_00F6_000B_4C40()
 *
 * @name f__2AE1_00F6_000B_4C40
 * @implements 2AE1:00F6:000B:4C40 ()
 *
 * Called From: 2AE1:00F0:0008:7F1B
 */
void f__2AE1_00F6_000B_4C40()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2AE1_0101_001A_4505(); return; }
	emu_addw(&emu_di, emu_ax);
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_0101_001A_4505()
 *
 * @name f__2AE1_0101_001A_4505
 * @implements 2AE1:0101:001A:4505 ()
 *
 * Called From: 2AE1:00F9:000B:4C40
 */
void f__2AE1_0101_001A_4505()
{
	if (emu_flags.zf) { f__2AE1_0128_0009_C732(); return; }
	emu_subw(&emu_ax, 0x8000);
	emu_testw(&emu_ax, 0x4000);
	if (emu_flags.zf) { f__2AE1_011B_000D_FFF5(); return; }
	emu_subw(&emu_ax, 0x4000);
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_0111_000A_25FC(); return; }
	emu_xorb(&emu_ah, emu_ah);
	/* Unresolved jump */ emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x0119; emu_last_length = 0x001A; emu_last_crc = 0x4505; emu_call();
}

/**
 * Decompiled function f__2AE1_0111_000A_25FC()
 *
 * @name f__2AE1_0111_000A_25FC
 * @implements 2AE1:0111:000A:25FC ()
 *
 * Called From: 2AE1:0115:001A:4505
 * Called From: 2AE1:0115:000A:25FC
 */
void f__2AE1_0111_000A_25FC()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_0111_000A_25FC(); return; }
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_011B_000D_FFF5()
 *
 * @name f__2AE1_011B_000D_FFF5
 * @implements 2AE1:011B:000D:FFF5 ()
 *
 * Called From: 2AE1:0109:001A:4505
 */
void f__2AE1_011B_000D_FFF5()
{
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_011D_000B_AB71(); return; }
	emu_xorb(&emu_ah, emu_ah);
	/* Unresolved jump */ emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x0126; emu_last_length = 0x000D; emu_last_crc = 0xFFF5; emu_call();
}

/**
 * Decompiled function f__2AE1_011D_000B_AB71()
 *
 * @name f__2AE1_011D_000B_AB71
 * @implements 2AE1:011D:000B:AB71 ()
 *
 * Called From: 2AE1:0122:000D:FFF5
 * Called From: 2AE1:0122:000B:AB71
 */
void f__2AE1_011D_000B_AB71()
{
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) { f__2AE1_011D_000B_AB71(); return; }
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_00D0_0012_E6A7(); return;
}

/**
 * Decompiled function f__2AE1_0128_0009_C732()
 *
 * @name f__2AE1_0128_0009_C732
 * @implements 2AE1:0128:0009:C732 ()
 *
 * Called From: 2AE1:0101:001A:4505
 */
void f__2AE1_0128_0009_C732()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_0131_0023_99F9()
 *
 * @name f__2AE1_0131_0023_99F9
 * @implements 2AE1:0131:0023:99F9 ()
 *
 * Called From: 2AE1:02CA:0004:8219
 */
void f__2AE1_0131_0023_99F9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__2AE1_0154_0019_37A1(); return; }
	if (emu_flags.sf) { f__2AE1_016D_0018_1E2B(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0150_0004_8D34(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x013E; emu_last_cs = 0x2AE1; emu_last_ip = 0x0150; emu_last_length = 0x0023; emu_last_crc = 0x99F9; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x0152; emu_last_length = 0x0023; emu_last_crc = 0x99F9; emu_call();
}

/**
 * Decompiled function f__2AE1_0135_001F_252C()
 *
 * @name f__2AE1_0135_001F_252C
 * @implements 2AE1:0135:001F:252C ()
 *
 * Called From: 2AE1:0152:0004:8D34
 * Called From: 2AE1:0152:0016:2FC8
 * Called From: 2AE1:0152:001F:252C
 * Called From: 2AE1:016B:0004:9994
 * Called From: 2AE1:016B:0015:8B6A
 * Called From: 2AE1:0185:0002:973A
 * Called From: 2AE1:01A2:0004:B439
 * Called From: 2AE1:01C9:0007:D6E3
 */
void f__2AE1_0135_001F_252C()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__2AE1_0154_0019_37A1(); return; }
	if (emu_flags.sf) { f__2AE1_016D_0018_1E2B(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0150_0004_8D34(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_013E_0016_2FC8(); return; }
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_013E_0016_2FC8()
 *
 * @name f__2AE1_013E_0016_2FC8
 * @implements 2AE1:013E:0016:2FC8 ()
 *
 * Called From: 2AE1:0150:0004:8D34
 * Called From: 2AE1:0150:001F:252C
 * Called From: 2AE1:0150:0016:2FC8
 */
void f__2AE1_013E_0016_2FC8()
{
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0150_0004_8D34(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_013E_0016_2FC8(); return; }
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_0150_0004_8D34()
 *
 * @name f__2AE1_0150_0004_8D34
 * @implements 2AE1:0150:0004:8D34 ()
 *
 * Called From: 2AE1:0146:001F:252C
 * Called From: 2AE1:0146:0016:2FC8
 * Called From: 2AE1:0146:0023:99F9
 */
void f__2AE1_0150_0004_8D34()
{
	if (--emu_cx != 0) { f__2AE1_013E_0016_2FC8(); return; }
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_0154_0019_37A1()
 *
 * @name f__2AE1_0154_0019_37A1
 * @implements 2AE1:0154:0019:37A1 ()
 *
 * Called From: 2AE1:0138:001F:252C
 * Called From: 2AE1:0138:0023:99F9
 */
void f__2AE1_0154_0019_37A1()
{
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, emu_si, 0x0));
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0169_0004_9994(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_0158_0015_8B6A(); return; }
	/* Unresolved jump */ emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x016B; emu_last_length = 0x0019; emu_last_crc = 0x37A1; emu_call();
}

/**
 * Decompiled function f__2AE1_0158_0015_8B6A()
 *
 * @name f__2AE1_0158_0015_8B6A
 * @implements 2AE1:0158:0015:8B6A ()
 *
 * Called From: 2AE1:0169:0004:9994
 * Called From: 2AE1:0169:0015:8B6A
 * Called From: 2AE1:0169:0019:37A1
 */
void f__2AE1_0158_0015_8B6A()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0169_0004_9994(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_0158_0015_8B6A(); return; }
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_0169_0004_9994()
 *
 * @name f__2AE1_0169_0004_9994
 * @implements 2AE1:0169:0004:9994 ()
 *
 * Called From: 2AE1:015F:0019:37A1
 * Called From: 2AE1:015F:0015:8B6A
 */
void f__2AE1_0169_0004_9994()
{
	if (--emu_cx != 0) { f__2AE1_0158_0015_8B6A(); return; }
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_016D_0018_1E2B()
 *
 * @name f__2AE1_016D_0018_1E2B
 * @implements 2AE1:016D:0018:1E2B ()
 *
 * Called From: 2AE1:013A:0023:99F9
 * Called From: 2AE1:013A:001F:252C
 */
void f__2AE1_016D_0018_1E2B()
{
	emu_subb(&emu_al, 0x80);
	if (emu_flags.zf) { f__2AE1_0187_0019_918D(); return; }
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_0185_0002_973A(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_0175_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_0175_0010_649A()
 *
 * @name f__2AE1_0175_0010_649A
 * @implements 2AE1:0175:0010:649A ()
 *
 * Called From: 2AE1:0183:0018:1E2B
 * Called From: 2AE1:0183:0010:649A
 */
void f__2AE1_0175_0010_649A()
{
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_0185_0002_973A(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_0175_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_0185_0002_973A()
 *
 * @name f__2AE1_0185_0002_973A
 * @implements 2AE1:0185:0002:973A ()
 *
 * Called From: 2AE1:0177:0018:1E2B
 * Called From: 2AE1:0177:0010:649A
 */
void f__2AE1_0185_0002_973A()
{
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_0187_0019_918D()
 *
 * @name f__2AE1_0187_0019_918D
 * @implements 2AE1:0187:0019:918D ()
 *
 * Called From: 2AE1:016F:0018:1E2B
 */
void f__2AE1_0187_0019_918D()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2AE1_01A4_0028_160C(); return; }
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_01A0_0004_B439(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_0190_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_0190_0010_649A()
 *
 * @name f__2AE1_0190_0010_649A
 * @implements 2AE1:0190:0010:649A ()
 *
 * Called From: 2AE1:019E:0019:918D
 * Called From: 2AE1:019E:0010:649A
 */
void f__2AE1_0190_0010_649A()
{
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_01A0_0004_B439(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_0190_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_01A0_0004_B439()
 *
 * @name f__2AE1_01A0_0004_B439
 * @implements 2AE1:01A0:0004:B439 ()
 *
 * Called From: 2AE1:0192:0010:649A
 * Called From: 2AE1:0192:0019:918D
 */
void f__2AE1_01A0_0004_B439()
{
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_01A4_0028_160C()
 *
 * @name f__2AE1_01A4_0028_160C
 * @implements 2AE1:01A4:0028:160C ()
 *
 * Called From: 2AE1:018A:0019:918D
 */
void f__2AE1_01A4_0028_160C()
{
	if (emu_flags.zf) { f__2AE1_01E7_0003_2E77(); return; }
	emu_subw(&emu_ax, 0x8000);
	emu_testw(&emu_ax, 0x4000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01CC; emu_last_cs = 0x2AE1; emu_last_ip = 0x01AC; emu_last_length = 0x0028; emu_last_crc = 0x160C; emu_call(); return; }
	emu_subw(&emu_ax, 0x4000);
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_01C5_0007_D6E3(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x01B4; emu_last_cs = 0x2AE1; emu_last_ip = 0x01C5; emu_last_length = 0x0028; emu_last_crc = 0x160C; emu_call(); }
	emu_xorb(&emu_ah, emu_ah);
	/* Unresolved jump */ emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x01C9; emu_last_length = 0x0028; emu_last_crc = 0x160C; emu_call();
}

/**
 * Decompiled function f__2AE1_01B4_0018_8921()
 *
 * @name f__2AE1_01B4_0018_8921
 * @implements 2AE1:01B4:0018:8921 ()
 *
 * Called From: 2AE1:01C5:0007:D6E3
 * Called From: 2AE1:01C5:0018:8921
 */
void f__2AE1_01B4_0018_8921()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_01C5_0007_D6E3(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_01B4_0018_8921(); return; }
	emu_xorb(&emu_ah, emu_ah);
	/* Unresolved jump */ emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x01C9; emu_last_length = 0x0018; emu_last_crc = 0x8921; emu_call();
}

/**
 * Decompiled function f__2AE1_01C5_0007_D6E3()
 *
 * @name f__2AE1_01C5_0007_D6E3
 * @implements 2AE1:01C5:0007:D6E3 ()
 *
 * Called From: 2AE1:01BB:0028:160C
 * Called From: 2AE1:01BB:0018:8921
 */
void f__2AE1_01C5_0007_D6E3()
{
	if (--emu_cx != 0) { f__2AE1_01B4_0018_8921(); return; }
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_0135_001F_252C(); return;
}

/**
 * Decompiled function f__2AE1_01E7_0003_2E77()
 *
 * @name f__2AE1_01E7_0003_2E77
 * @implements 2AE1:01E7:0003:2E77 ()
 *
 * Called From: 2AE1:01A4:0028:160C
 */
void f__2AE1_01E7_0003_2E77()
{
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_01EA_0020_A570()
 *
 * @name f__2AE1_01EA_0020_A570
 * @implements 2AE1:01EA:0020:A570 ()
 *
 * Called From: 2AE1:02C4:0014:2D3F
 */
void f__2AE1_01EA_0020_A570()
{
	emu_push(emu_di);
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__2AE1_020A_0019_B7AA(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x0223; emu_last_cs = 0x2AE1; emu_last_ip = 0x01F0; emu_last_length = 0x0020; emu_last_crc = 0xA570; emu_call(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0206_0004_8D34(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x01F4; emu_last_cs = 0x2AE1; emu_last_ip = 0x0206; emu_last_length = 0x0020; emu_last_crc = 0xA570; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x0208; emu_last_length = 0x0020; emu_last_crc = 0xA570; emu_call();
}

/**
 * Decompiled function f__2AE1_01EB_001F_A527()
 *
 * @name f__2AE1_01EB_001F_A527
 * @implements 2AE1:01EB:001F:A527 ()
 *
 * Called From: 2AE1:0208:0004:8D34
 * Called From: 2AE1:0208:0016:AFC3
 * Called From: 2AE1:0208:001F:A527
 * Called From: 2AE1:0221:0004:9994
 * Called From: 2AE1:0221:0015:0B61
 * Called From: 2AE1:023B:0002:973A
 * Called From: 2AE1:0258:0004:B439
 * Called From: 2AE1:029A:0007:12EA
 * Called From: 2AE1:029A:0019:4C0E
 */
void f__2AE1_01EB_001F_A527()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_flags.zf) { f__2AE1_020A_0019_B7AA(); return; }
	if (emu_flags.sf) { f__2AE1_0223_0018_1E2B(); return; }
	emu_movb(&emu_cl, emu_al);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0206_0004_8D34(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_01F4_0016_AFC3(); return; }
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_01F4_0016_AFC3()
 *
 * @name f__2AE1_01F4_0016_AFC3
 * @implements 2AE1:01F4:0016:AFC3 ()
 *
 * Called From: 2AE1:0206:0004:8D34
 * Called From: 2AE1:0206:0016:AFC3
 * Called From: 2AE1:0206:001F:A527
 */
void f__2AE1_01F4_0016_AFC3()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0206_0004_8D34(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_01F4_0016_AFC3(); return; }
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_0206_0004_8D34()
 *
 * @name f__2AE1_0206_0004_8D34
 * @implements 2AE1:0206:0004:8D34 ()
 *
 * Called From: 2AE1:01FC:0020:A570
 * Called From: 2AE1:01FC:0016:AFC3
 * Called From: 2AE1:01FC:001F:A527
 */
void f__2AE1_0206_0004_8D34()
{
	if (--emu_cx != 0) { f__2AE1_01F4_0016_AFC3(); return; }
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_020A_0019_B7AA()
 *
 * @name f__2AE1_020A_0019_B7AA
 * @implements 2AE1:020A:0019:B7AA ()
 *
 * Called From: 2AE1:01EE:001F:A527
 * Called From: 2AE1:01EE:0020:A570
 */
void f__2AE1_020A_0019_B7AA()
{
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, emu_si, 0x0));
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_021F_0004_9994(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_020E_0015_0B61(); return; }
	/* Unresolved jump */ emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x0221; emu_last_length = 0x0019; emu_last_crc = 0xB7AA; emu_call();
}

/**
 * Decompiled function f__2AE1_020E_0015_0B61()
 *
 * @name f__2AE1_020E_0015_0B61
 * @implements 2AE1:020E:0015:0B61 ()
 *
 * Called From: 2AE1:021F:0004:9994
 * Called From: 2AE1:021F:0015:0B61
 * Called From: 2AE1:021F:0019:B7AA
 */
void f__2AE1_020E_0015_0B61()
{
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_021F_0004_9994(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_020E_0015_0B61(); return; }
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_021F_0004_9994()
 *
 * @name f__2AE1_021F_0004_9994
 * @implements 2AE1:021F:0004:9994 ()
 *
 * Called From: 2AE1:0215:0019:B7AA
 * Called From: 2AE1:0215:0015:0B61
 */
void f__2AE1_021F_0004_9994()
{
	if (--emu_cx != 0) { f__2AE1_020E_0015_0B61(); return; }
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_0223_0018_1E2B()
 *
 * @name f__2AE1_0223_0018_1E2B
 * @implements 2AE1:0223:0018:1E2B ()
 *
 * Called From: 2AE1:01F0:001F:A527
 */
void f__2AE1_0223_0018_1E2B()
{
	emu_subb(&emu_al, 0x80);
	if (emu_flags.zf) { f__2AE1_023D_0019_918D(); return; }
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_023B_0002_973A(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_022B_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_022B_0010_649A()
 *
 * @name f__2AE1_022B_0010_649A
 * @implements 2AE1:022B:0010:649A ()
 *
 * Called From: 2AE1:0239:0018:1E2B
 */
void f__2AE1_022B_0010_649A()
{
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_023B_0002_973A(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	/* Unresolved jump */ emu_ip = 0x022B; emu_last_cs = 0x2AE1; emu_last_ip = 0x0239; emu_last_length = 0x0010; emu_last_crc = 0x649A; emu_call();
}

/**
 * Decompiled function f__2AE1_023B_0002_973A()
 *
 * @name f__2AE1_023B_0002_973A
 * @implements 2AE1:023B:0002:973A ()
 *
 * Called From: 2AE1:022D:0018:1E2B
 * Called From: 2AE1:022D:0010:649A
 */
void f__2AE1_023B_0002_973A()
{
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_023D_0019_918D()
 *
 * @name f__2AE1_023D_0019_918D
 * @implements 2AE1:023D:0019:918D ()
 *
 * Called From: 2AE1:0225:0018:1E2B
 */
void f__2AE1_023D_0019_918D()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2AE1_025A_0028_177C(); return; }
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0256; emu_last_cs = 0x2AE1; emu_last_ip = 0x0248; emu_last_length = 0x0019; emu_last_crc = 0x918D; emu_call(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_0246_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_0246_0010_649A()
 *
 * @name f__2AE1_0246_0010_649A
 * @implements 2AE1:0246:0010:649A ()
 *
 * Called From: 2AE1:0254:0019:918D
 * Called From: 2AE1:0254:0010:649A
 */
void f__2AE1_0246_0010_649A()
{
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_flags.cf) { f__2AE1_0256_0004_B439(); return; }
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	f__2AE1_0246_0010_649A(); return;
}

/**
 * Decompiled function f__2AE1_0256_0004_B439()
 *
 * @name f__2AE1_0256_0004_B439
 * @implements 2AE1:0256:0004:B439 ()
 *
 * Called From: 2AE1:0248:0010:649A
 */
void f__2AE1_0256_0004_B439()
{
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_025A_0028_177C()
 *
 * @name f__2AE1_025A_0028_177C
 * @implements 2AE1:025A:0028:177C ()
 *
 * Called From: 2AE1:0240:0019:918D
 */
void f__2AE1_025A_0028_177C()
{
	if (emu_flags.zf) { f__2AE1_029D_0002_A597(); return; }
	emu_subw(&emu_ax, 0x8000);
	emu_testw(&emu_ax, 0x4000);
	if (emu_flags.zf) { f__2AE1_0282_001B_1E1F(); return; }
	emu_subw(&emu_ax, 0x4000);
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x027B; emu_last_cs = 0x2AE1; emu_last_ip = 0x0271; emu_last_length = 0x0028; emu_last_crc = 0x177C; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x026A; emu_last_cs = 0x2AE1; emu_last_ip = 0x027B; emu_last_length = 0x0028; emu_last_crc = 0x177C; emu_call(); }
	emu_xorb(&emu_ah, emu_ah);
	/* Unresolved jump */ emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x027F; emu_last_length = 0x0028; emu_last_crc = 0x177C; emu_call();
}

/**
 * Decompiled function f__2AE1_0282_001B_1E1F()
 *
 * @name f__2AE1_0282_001B_1E1F
 * @implements 2AE1:0282:001B:1E1F ()
 *
 * Called From: 2AE1:0262:0028:177C
 */
void f__2AE1_0282_001B_1E1F()
{
	emu_movw(&emu_cx, emu_ax);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0296_0007_12EA(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_0284_0019_4C0E(); return; }
	emu_xorb(&emu_ah, emu_ah);
	/* Unresolved jump */ emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x029A; emu_last_length = 0x001B; emu_last_crc = 0x1E1F; emu_call();
}

/**
 * Decompiled function f__2AE1_0284_0019_4C0E()
 *
 * @name f__2AE1_0284_0019_4C0E
 * @implements 2AE1:0284:0019:4C0E ()
 *
 * Called From: 2AE1:0296:0007:12EA
 * Called From: 2AE1:0296:0019:4C0E
 * Called From: 2AE1:0296:001B:1E1F
 */
void f__2AE1_0284_0019_4C0E()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (!emu_flags.zf) { f__2AE1_0296_0007_12EA(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { f__2AE1_0284_0019_4C0E(); return; }
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_0296_0007_12EA()
 *
 * @name f__2AE1_0296_0007_12EA
 * @implements 2AE1:0296:0007:12EA ()
 *
 * Called From: 2AE1:028C:001B:1E1F
 * Called From: 2AE1:028C:0019:4C0E
 */
void f__2AE1_0296_0007_12EA()
{
	if (--emu_cx != 0) { f__2AE1_0284_0019_4C0E(); return; }
	emu_xorb(&emu_ah, emu_ah);
	f__2AE1_01EB_001F_A527(); return;
}

/**
 * Decompiled function f__2AE1_029D_0002_A597()
 *
 * @name f__2AE1_029D_0002_A597
 * @implements 2AE1:029D:0002:A597 ()
 *
 * Called From: 2AE1:025A:0028:177C
 */
void f__2AE1_029D_0002_A597()
{
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_029F_0014_50E5()
 *
 * @name f__2AE1_029F_0014_50E5
 * @implements 2AE1:029F:0014:50E5 ()
 *
 * Called From: B52A:0579:0057:BCE0
 * Called From: B52A:0ABA:0020:7369
 */
void f__2AE1_029F_0014_50E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x02B3); f__2AE1_0096_0009_9B4B();
	f__2AE1_02B3_0014_2D3F();
}

/**
 * Decompiled function f__2AE1_02B3_0014_2D3F()
 *
 * @name f__2AE1_02B3_0014_2D3F
 * @implements 2AE1:02B3:0014:2D3F ()
 *
 * Called From: 2AE1:02B3:0014:50E5
 */
void f__2AE1_02B3_0014_2D3F()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cld();
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_cx, emu_ax);
	emu_movw(&emu_dx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_flags.zf) { f__2AE1_02C9_0004_8219(); return; }
	emu_push(emu_cs);
	emu_push(0x02C7); f__2AE1_01EA_0020_A570();
	f__2AE1_02C7_0002_C23A();
}

/**
 * Decompiled function f__2AE1_02C7_0002_C23A()
 *
 * @name f__2AE1_02C7_0002_C23A
 * @implements 2AE1:02C7:0002:C23A ()
 *
 * Called From: 2AE1:02C7:0014:2D3F
 */
void f__2AE1_02C7_0002_C23A()
{
	f__2AE1_02CD_0009_C732(); return;
}

/**
 * Decompiled function f__2AE1_02C9_0004_8219()
 *
 * @name f__2AE1_02C9_0004_8219
 * @implements 2AE1:02C9:0004:8219 ()
 *
 * Called From: 2AE1:02C1:0014:2D3F
 */
void f__2AE1_02C9_0004_8219()
{
	emu_push(emu_cs);
	emu_push(0x02CD); f__2AE1_0131_0023_99F9();
	f__2AE1_02CD_0009_C732();
}

/**
 * Decompiled function f__2AE1_02CD_0009_C732()
 *
 * @name f__2AE1_02CD_0009_C732
 * @implements 2AE1:02CD:0009:C732 ()
 *
 * Called From: 2AE1:02C7:0002:C23A
 * Called From: 2AE1:02CD:0004:8219
 */
void f__2AE1_02CD_0009_C732()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
