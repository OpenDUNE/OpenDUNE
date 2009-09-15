/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2AE1_0096_0009_F6AE()
 *
 * @name f__2AE1_0096_0009_F6AE
 * @implements 2AE1:0096:0009:F6AE ()
 *
 * Called From: 2AE1:00C8:0014:4343
 * Called From: 2AE1:02B0:0014:43E7
 */
void f__2AE1_0096_0009_F6AE()
{
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__2AE1_009F_000E_F6D0();
}

/**
 * Decompiled function f__2AE1_009F_000E_F6D0()
 *
 * @name f__2AE1_009F_000E_F6D0
 * @implements 2AE1:009F:000E:F6D0 ()
 *
 * Called From: 2AE1:009F:0009:F6AE
 */
void f__2AE1_009F_000E_F6D0()
{
	emu_addws(&emu_sp, 0x4);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00AD); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__2AE1_00AD_000A_EB45();
}

/**
 * Decompiled function f__2AE1_00AD_000A_EB45()
 *
 * @name f__2AE1_00AD_000A_EB45
 * @implements 2AE1:00AD:000A:EB45 ()
 *
 * Called From: 2AE1:00AD:000E:F6D0
 */
void f__2AE1_00AD_000A_EB45()
{
	emu_addws(&emu_sp, 0x4);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_00B7_0014_4343()
 *
 * @name f__2AE1_00B7_0014_4343
 * @implements 2AE1:00B7:0014:4343 ()
 *
 * Called From: B52A:0594:0016:AA6B
 * Called From: B52A:0A95:0024:8634
 */
void f__2AE1_00B7_0014_4343()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00CB); f__2AE1_0096_0009_F6AE();
	f__2AE1_00CB_0017_425D();
}

/**
 * Decompiled function f__2AE1_00CB_0017_425D()
 *
 * @name f__2AE1_00CB_0017_425D
 * @implements 2AE1:00CB:0017:425D ()
 *
 * Called From: 2AE1:00CB:0014:4343
 */
void f__2AE1_00CB_0017_425D()
{
	emu_cld();
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2AE1_00E2_000C_BC30(); return; }
	if (emu_flags.sf) { f__2AE1_00EE_0008_7468(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_00D9_0009_6439(); return; }
	emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x00E0; emu_last_length = 0x0017; emu_last_crc = 0x425D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_00D0_0012_266D()
 *
 * @name f__2AE1_00D0_0012_266D
 * @implements 2AE1:00D0:0012:266D ()
 *
 * Called From: 2AE1:00E0:0009:6439
 * Called From: 2AE1:00E0:0012:266D
 * Called From: 2AE1:00EC:0008:3C38
 * Called From: 2AE1:00F4:0008:7468
 * Called From: 2AE1:00FF:000B:A0F6
 * Called From: 2AE1:0119:000A:FF86
 * Called From: 2AE1:0126:000B:9FD9
 */
void f__2AE1_00D0_0012_266D()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2AE1_00E2_000C_BC30(); return; }
	if (emu_flags.sf) { f__2AE1_00EE_0008_7468(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_00D9_0009_6439(); return; }
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_00D9_0009_6439()
 *
 * @name f__2AE1_00D9_0009_6439
 * @implements 2AE1:00D9:0009:6439 ()
 *
 * Called From: 2AE1:00DE:0009:6439
 * Called From: 2AE1:00DE:0012:266D
 * Called From: 2AE1:00DE:0017:425D
 */
void f__2AE1_00D9_0009_6439()
{
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_00D9_0009_6439(); return; }
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_00E2_000C_BC30()
 *
 * @name f__2AE1_00E2_000C_BC30
 * @implements 2AE1:00E2:000C:BC30 ()
 *
 * Called From: 2AE1:00D3:0012:266D
 * Called From: 2AE1:00D3:0017:425D
 */
void f__2AE1_00E2_000C_BC30()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_00E6_0008_3C38(); return; }
	emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x00EC; emu_last_length = 0x000C; emu_last_crc = 0xBC30; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_00E6_0008_3C38()
 *
 * @name f__2AE1_00E6_0008_3C38
 * @implements 2AE1:00E6:0008:3C38 ()
 *
 * Called From: 2AE1:00EA:0008:3C38
 * Called From: 2AE1:00EA:000C:BC30
 */
void f__2AE1_00E6_0008_3C38()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_00E6_0008_3C38(); return; }
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_00EE_0008_7468()
 *
 * @name f__2AE1_00EE_0008_7468
 * @implements 2AE1:00EE:0008:7468 ()
 *
 * Called From: 2AE1:00D5:0012:266D
 * Called From: 2AE1:00D5:0017:425D
 */
void f__2AE1_00EE_0008_7468()
{
	emu_subb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__2AE1_00F6_000B_A0F6(); return; }
	emu_addw(&emu_di, emu_ax.x);
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_00F6_000B_A0F6()
 *
 * @name f__2AE1_00F6_000B_A0F6
 * @implements 2AE1:00F6:000B:A0F6 ()
 *
 * Called From: 2AE1:00F0:0008:7468
 */
void f__2AE1_00F6_000B_A0F6()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2AE1_0101_001A_FE72(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_0101_001A_FE72()
 *
 * @name f__2AE1_0101_001A_FE72
 * @implements 2AE1:0101:001A:FE72 ()
 *
 * Called From: 2AE1:00F9:000B:A0F6
 */
void f__2AE1_0101_001A_FE72()
{
	if (emu_flags.zf) { f__2AE1_0128_0009_AFAA(); return; }
	emu_subw(&emu_ax.x, 0x8000);
	emu_testw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { f__2AE1_011B_000D_7FC4(); return; }
	emu_subw(&emu_ax.x, 0x4000);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_0111_000A_FF86(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x0119; emu_last_length = 0x001A; emu_last_crc = 0xFE72; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_0111_000A_FF86()
 *
 * @name f__2AE1_0111_000A_FF86
 * @implements 2AE1:0111:000A:FF86 ()
 *
 * Called From: 2AE1:0115:000A:FF86
 * Called From: 2AE1:0115:001A:FE72
 */
void f__2AE1_0111_000A_FF86()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_0111_000A_FF86(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_011B_000D_7FC4()
 *
 * @name f__2AE1_011B_000D_7FC4
 * @implements 2AE1:011B:000D:7FC4 ()
 *
 * Called From: 2AE1:0109:001A:FE72
 */
void f__2AE1_011B_000D_7FC4()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_011D_000B_9FD9(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_ip = 0x00D0; emu_last_cs = 0x2AE1; emu_last_ip = 0x0126; emu_last_length = 0x000D; emu_last_crc = 0x7FC4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_011D_000B_9FD9()
 *
 * @name f__2AE1_011D_000B_9FD9
 * @implements 2AE1:011D:000B:9FD9 ()
 *
 * Called From: 2AE1:0122:000B:9FD9
 * Called From: 2AE1:0122:000D:7FC4
 */
void f__2AE1_011D_000B_9FD9()
{
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2AE1_011D_000B_9FD9(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__2AE1_00D0_0012_266D(); return;
}

/**
 * Decompiled function f__2AE1_0128_0009_AFAA()
 *
 * @name f__2AE1_0128_0009_AFAA
 * @implements 2AE1:0128:0009:AFAA ()
 *
 * Called From: 2AE1:0101:001A:FE72
 */
void f__2AE1_0128_0009_AFAA()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_0131_0023_A8F4()
 *
 * @name f__2AE1_0131_0023_A8F4
 * @implements 2AE1:0131:0023:A8F4 ()
 *
 * Called From: 2AE1:02CA:0004:07CC
 */
void f__2AE1_0131_0023_A8F4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2AE1_0154_0019_EEEE(); return; }
	if (emu_flags.sf) { f__2AE1_016D_0018_4BDB(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0150_0004_0B2E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { emu_ip = 0x013E; emu_last_cs = 0x2AE1; emu_last_ip = 0x0150; emu_last_length = 0x0023; emu_last_crc = 0xA8F4; emu_call(); } // Jump does not resolve
	emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x0152; emu_last_length = 0x0023; emu_last_crc = 0xA8F4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_0135_001F_A9FF()
 *
 * @name f__2AE1_0135_001F_A9FF
 * @implements 2AE1:0135:001F:A9FF ()
 *
 * Called From: 2AE1:0152:0004:0B2E
 * Called From: 2AE1:0152:0016:D5B5
 * Called From: 2AE1:0152:001F:A9FF
 * Called From: 2AE1:016B:0004:0B74
 * Called From: 2AE1:016B:0015:FEEF
 * Called From: 2AE1:0185:0002:02F0
 * Called From: 2AE1:01A2:0004:068E
 */
void f__2AE1_0135_001F_A9FF()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2AE1_0154_0019_EEEE(); return; }
	if (emu_flags.sf) { f__2AE1_016D_0018_4BDB(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0150_0004_0B2E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_013E_0016_D5B5(); return; }
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_013E_0016_D5B5()
 *
 * @name f__2AE1_013E_0016_D5B5
 * @implements 2AE1:013E:0016:D5B5 ()
 *
 * Called From: 2AE1:0150:0004:0B2E
 * Called From: 2AE1:0150:0016:D5B5
 * Called From: 2AE1:0150:001F:A9FF
 */
void f__2AE1_013E_0016_D5B5()
{
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0150_0004_0B2E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_013E_0016_D5B5(); return; }
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_0150_0004_0B2E()
 *
 * @name f__2AE1_0150_0004_0B2E
 * @implements 2AE1:0150:0004:0B2E ()
 *
 * Called From: 2AE1:0146:0016:D5B5
 * Called From: 2AE1:0146:001F:A9FF
 * Called From: 2AE1:0146:0023:A8F4
 */
void f__2AE1_0150_0004_0B2E()
{
	if (--emu_cx.x != 0) { f__2AE1_013E_0016_D5B5(); return; }
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_0154_0019_EEEE()
 *
 * @name f__2AE1_0154_0019_EEEE
 * @implements 2AE1:0154:0019:EEEE ()
 *
 * Called From: 2AE1:0138:001F:A9FF
 * Called From: 2AE1:0138:0023:A8F4
 */
void f__2AE1_0154_0019_EEEE()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0169_0004_0B74(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_0158_0015_FEEF(); return; }
	emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x016B; emu_last_length = 0x0019; emu_last_crc = 0xEEEE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_0158_0015_FEEF()
 *
 * @name f__2AE1_0158_0015_FEEF
 * @implements 2AE1:0158:0015:FEEF ()
 *
 * Called From: 2AE1:0169:0004:0B74
 * Called From: 2AE1:0169:0015:FEEF
 * Called From: 2AE1:0169:0019:EEEE
 */
void f__2AE1_0158_0015_FEEF()
{
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0169_0004_0B74(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_0158_0015_FEEF(); return; }
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_0169_0004_0B74()
 *
 * @name f__2AE1_0169_0004_0B74
 * @implements 2AE1:0169:0004:0B74 ()
 *
 * Called From: 2AE1:015F:0015:FEEF
 * Called From: 2AE1:015F:0019:EEEE
 */
void f__2AE1_0169_0004_0B74()
{
	if (--emu_cx.x != 0) { f__2AE1_0158_0015_FEEF(); return; }
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_016D_0018_4BDB()
 *
 * @name f__2AE1_016D_0018_4BDB
 * @implements 2AE1:016D:0018:4BDB ()
 *
 * Called From: 2AE1:013A:001F:A9FF
 * Called From: 2AE1:013A:0023:A8F4
 */
void f__2AE1_016D_0018_4BDB()
{
	emu_subb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__2AE1_0187_0019_159A(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (emu_flags.cf) { f__2AE1_0185_0002_02F0(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx.x);
	f__2AE1_0175_0010_3E47(); return;
}

/**
 * Decompiled function f__2AE1_0175_0010_3E47()
 *
 * @name f__2AE1_0175_0010_3E47
 * @implements 2AE1:0175:0010:3E47 ()
 *
 * Called From: 2AE1:0183:0018:4BDB
 */
void f__2AE1_0175_0010_3E47()
{
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (emu_flags.cf) { f__2AE1_0185_0002_02F0(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx.x);
	emu_ip = 0x0175; emu_last_cs = 0x2AE1; emu_last_ip = 0x0183; emu_last_length = 0x0010; emu_last_crc = 0x3E47; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_0185_0002_02F0()
 *
 * @name f__2AE1_0185_0002_02F0
 * @implements 2AE1:0185:0002:02F0 ()
 *
 * Called From: 2AE1:0177:0010:3E47
 * Called From: 2AE1:0177:0018:4BDB
 */
void f__2AE1_0185_0002_02F0()
{
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_0187_0019_159A()
 *
 * @name f__2AE1_0187_0019_159A
 * @implements 2AE1:0187:0019:159A ()
 *
 * Called From: 2AE1:016F:0018:4BDB
 */
void f__2AE1_0187_0019_159A()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2AE1_01A4_0028_DBF7(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (emu_flags.cf) { f__2AE1_01A0_0004_068E(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx.x);
	f__2AE1_0190_0010_3E47(); return;
}

/**
 * Decompiled function f__2AE1_0190_0010_3E47()
 *
 * @name f__2AE1_0190_0010_3E47
 * @implements 2AE1:0190:0010:3E47 ()
 *
 * Called From: 2AE1:019E:0010:3E47
 * Called From: 2AE1:019E:0019:159A
 */
void f__2AE1_0190_0010_3E47()
{
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (emu_flags.cf) { f__2AE1_01A0_0004_068E(); return; }
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx.x);
	f__2AE1_0190_0010_3E47(); return;
}

/**
 * Decompiled function f__2AE1_01A0_0004_068E()
 *
 * @name f__2AE1_01A0_0004_068E
 * @implements 2AE1:01A0:0004:068E ()
 *
 * Called From: 2AE1:0192:0010:3E47
 * Called From: 2AE1:0192:0019:159A
 */
void f__2AE1_01A0_0004_068E()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__2AE1_0135_001F_A9FF(); return;
}

/**
 * Decompiled function f__2AE1_01A4_0028_DBF7()
 *
 * @name f__2AE1_01A4_0028_DBF7
 * @implements 2AE1:01A4:0028:DBF7 ()
 *
 * Called From: 2AE1:018A:0019:159A
 */
void f__2AE1_01A4_0028_DBF7()
{
	if (emu_flags.zf) { f__2AE1_01E7_0003_021A(); return; }
	emu_subw(&emu_ax.x, 0x8000);
	emu_testw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { emu_ip = 0x01CC; emu_last_cs = 0x2AE1; emu_last_ip = 0x01AC; emu_last_length = 0x0028; emu_last_crc = 0xDBF7; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_ax.x, 0x4000);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x01C5; emu_last_cs = 0x2AE1; emu_last_ip = 0x01BB; emu_last_length = 0x0028; emu_last_crc = 0xDBF7; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { emu_ip = 0x01B4; emu_last_cs = 0x2AE1; emu_last_ip = 0x01C5; emu_last_length = 0x0028; emu_last_crc = 0xDBF7; emu_call(); } // Jump does not resolve
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_ip = 0x0135; emu_last_cs = 0x2AE1; emu_last_ip = 0x01C9; emu_last_length = 0x0028; emu_last_crc = 0xDBF7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_01E7_0003_021A()
 *
 * @name f__2AE1_01E7_0003_021A
 * @implements 2AE1:01E7:0003:021A ()
 *
 * Called From: 2AE1:01A4:0028:DBF7
 */
void f__2AE1_01E7_0003_021A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_01EA_0020_A228()
 *
 * @name f__2AE1_01EA_0020_A228
 * @implements 2AE1:01EA:0020:A228 ()
 *
 * Called From: 2AE1:02C4:0014:00F6
 */
void f__2AE1_01EA_0020_A228()
{
	emu_push(emu_di);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2AE1_020A_0019_E56E(); return; }
	if (emu_flags.sf) { emu_ip = 0x0223; emu_last_cs = 0x2AE1; emu_last_ip = 0x01F0; emu_last_length = 0x0020; emu_last_crc = 0xA228; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0206_0004_0B2E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { emu_ip = 0x01F4; emu_last_cs = 0x2AE1; emu_last_ip = 0x0206; emu_last_length = 0x0020; emu_last_crc = 0xA228; emu_call(); } // Jump does not resolve
	emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x0208; emu_last_length = 0x0020; emu_last_crc = 0xA228; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_01EB_001F_A27F()
 *
 * @name f__2AE1_01EB_001F_A27F
 * @implements 2AE1:01EB:001F:A27F ()
 *
 * Called From: 2AE1:0208:0004:0B2E
 * Called From: 2AE1:0208:0016:DE35
 * Called From: 2AE1:0208:001F:A27F
 * Called From: 2AE1:0221:0004:0B74
 * Called From: 2AE1:0221:0015:F56F
 * Called From: 2AE1:029A:0007:458E
 * Called From: 2AE1:029A:0019:ED50
 */
void f__2AE1_01EB_001F_A27F()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2AE1_020A_0019_E56E(); return; }
	if (emu_flags.sf) { f__2AE1_0223_0018_4BDB(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0206_0004_0B2E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_01F4_0016_DE35(); return; }
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_01F4_0016_DE35()
 *
 * @name f__2AE1_01F4_0016_DE35
 * @implements 2AE1:01F4:0016:DE35 ()
 *
 * Called From: 2AE1:0206:0004:0B2E
 * Called From: 2AE1:0206:0016:DE35
 * Called From: 2AE1:0206:001F:A27F
 */
void f__2AE1_01F4_0016_DE35()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0206_0004_0B2E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_01F4_0016_DE35(); return; }
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_0206_0004_0B2E()
 *
 * @name f__2AE1_0206_0004_0B2E
 * @implements 2AE1:0206:0004:0B2E ()
 *
 * Called From: 2AE1:01FC:0016:DE35
 * Called From: 2AE1:01FC:001F:A27F
 * Called From: 2AE1:01FC:0020:A228
 */
void f__2AE1_0206_0004_0B2E()
{
	if (--emu_cx.x != 0) { f__2AE1_01F4_0016_DE35(); return; }
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_020A_0019_E56E()
 *
 * @name f__2AE1_020A_0019_E56E
 * @implements 2AE1:020A:0019:E56E ()
 *
 * Called From: 2AE1:01EE:001F:A27F
 * Called From: 2AE1:01EE:0020:A228
 */
void f__2AE1_020A_0019_E56E()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_021F_0004_0B74(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_020E_0015_F56F(); return; }
	emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x0221; emu_last_length = 0x0019; emu_last_crc = 0xE56E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_020E_0015_F56F()
 *
 * @name f__2AE1_020E_0015_F56F
 * @implements 2AE1:020E:0015:F56F ()
 *
 * Called From: 2AE1:021F:0004:0B74
 * Called From: 2AE1:021F:0015:F56F
 * Called From: 2AE1:021F:0019:E56E
 */
void f__2AE1_020E_0015_F56F()
{
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_021F_0004_0B74(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_020E_0015_F56F(); return; }
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_021F_0004_0B74()
 *
 * @name f__2AE1_021F_0004_0B74
 * @implements 2AE1:021F:0004:0B74 ()
 *
 * Called From: 2AE1:0215:0015:F56F
 * Called From: 2AE1:0215:0019:E56E
 */
void f__2AE1_021F_0004_0B74()
{
	if (--emu_cx.x != 0) { f__2AE1_020E_0015_F56F(); return; }
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_0223_0018_4BDB()
 *
 * @name f__2AE1_0223_0018_4BDB
 * @implements 2AE1:0223:0018:4BDB ()
 *
 * Called From: 2AE1:01F0:001F:A27F
 */
void f__2AE1_0223_0018_4BDB()
{
	emu_subb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__2AE1_023D_0019_159A(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x023B; emu_last_cs = 0x2AE1; emu_last_ip = 0x022D; emu_last_length = 0x0018; emu_last_crc = 0x4BDB; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx.x);
	emu_ip = 0x022B; emu_last_cs = 0x2AE1; emu_last_ip = 0x0239; emu_last_length = 0x0018; emu_last_crc = 0x4BDB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_023D_0019_159A()
 *
 * @name f__2AE1_023D_0019_159A
 * @implements 2AE1:023D:0019:159A ()
 *
 * Called From: 2AE1:0225:0018:4BDB
 */
void f__2AE1_023D_0019_159A()
{
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2AE1_025A_0028_87F7(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x0256; emu_last_cs = 0x2AE1; emu_last_ip = 0x0248; emu_last_length = 0x0019; emu_last_crc = 0x159A; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx.x);
	emu_ip = 0x0246; emu_last_cs = 0x2AE1; emu_last_ip = 0x0254; emu_last_length = 0x0019; emu_last_crc = 0x159A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_025A_0028_87F7()
 *
 * @name f__2AE1_025A_0028_87F7
 * @implements 2AE1:025A:0028:87F7 ()
 *
 * Called From: 2AE1:0240:0019:159A
 */
void f__2AE1_025A_0028_87F7()
{
	if (emu_flags.zf) { f__2AE1_029D_0002_00EA(); return; }
	emu_subw(&emu_ax.x, 0x8000);
	emu_testw(&emu_ax.x, 0x4000);
	if (emu_flags.zf) { f__2AE1_0282_001B_9557(); return; }
	emu_subw(&emu_ax.x, 0x4000);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x027B; emu_last_cs = 0x2AE1; emu_last_ip = 0x0271; emu_last_length = 0x0028; emu_last_crc = 0x87F7; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { emu_ip = 0x026A; emu_last_cs = 0x2AE1; emu_last_ip = 0x027B; emu_last_length = 0x0028; emu_last_crc = 0x87F7; emu_call(); } // Jump does not resolve
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x027F; emu_last_length = 0x0028; emu_last_crc = 0x87F7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_0282_001B_9557()
 *
 * @name f__2AE1_0282_001B_9557
 * @implements 2AE1:0282:001B:9557 ()
 *
 * Called From: 2AE1:0262:0028:87F7
 */
void f__2AE1_0282_001B_9557()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0296_0007_458E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_0284_0019_ED50(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_ip = 0x01EB; emu_last_cs = 0x2AE1; emu_last_ip = 0x029A; emu_last_length = 0x001B; emu_last_crc = 0x9557; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2AE1_0284_0019_ED50()
 *
 * @name f__2AE1_0284_0019_ED50
 * @implements 2AE1:0284:0019:ED50 ()
 *
 * Called From: 2AE1:0296:0007:458E
 * Called From: 2AE1:0296:0019:ED50
 * Called From: 2AE1:0296:001B:9557
 */
void f__2AE1_0284_0019_ED50()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__2AE1_0296_0007_458E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx.x != 0) { f__2AE1_0284_0019_ED50(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_0296_0007_458E()
 *
 * @name f__2AE1_0296_0007_458E
 * @implements 2AE1:0296:0007:458E ()
 *
 * Called From: 2AE1:028C:0019:ED50
 * Called From: 2AE1:028C:001B:9557
 */
void f__2AE1_0296_0007_458E()
{
	if (--emu_cx.x != 0) { f__2AE1_0284_0019_ED50(); return; }
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__2AE1_01EB_001F_A27F(); return;
}

/**
 * Decompiled function f__2AE1_029D_0002_00EA()
 *
 * @name f__2AE1_029D_0002_00EA
 * @implements 2AE1:029D:0002:00EA ()
 *
 * Called From: 2AE1:025A:0028:87F7
 */
void f__2AE1_029D_0002_00EA()
{
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_029F_0014_43E7()
 *
 * @name f__2AE1_029F_0014_43E7
 * @implements 2AE1:029F:0014:43E7 ()
 *
 * Called From: B52A:0579:0057:755B
 * Called From: B52A:0ABA:0020:1981
 */
void f__2AE1_029F_0014_43E7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x02B3); f__2AE1_0096_0009_F6AE();
	f__2AE1_02B3_0014_00F6();
}

/**
 * Decompiled function f__2AE1_02B3_0014_00F6()
 *
 * @name f__2AE1_02B3_0014_00F6
 * @implements 2AE1:02B3:0014:00F6 ()
 *
 * Called From: 2AE1:02B3:0014:43E7
 */
void f__2AE1_02B3_0014_00F6()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cld();
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_flags.zf) { f__2AE1_02C9_0004_07CC(); return; }
	emu_push(emu_cs);
	emu_push(0x02C7); f__2AE1_01EA_0020_A228();
	f__2AE1_02C7_0002_03A4();
}

/**
 * Decompiled function f__2AE1_02C7_0002_03A4()
 *
 * @name f__2AE1_02C7_0002_03A4
 * @implements 2AE1:02C7:0002:03A4 ()
 *
 * Called From: 2AE1:02C7:0014:00F6
 */
void f__2AE1_02C7_0002_03A4()
{
	f__2AE1_02CD_0009_AFAA(); return;
}

/**
 * Decompiled function f__2AE1_02C9_0004_07CC()
 *
 * @name f__2AE1_02C9_0004_07CC
 * @implements 2AE1:02C9:0004:07CC ()
 *
 * Called From: 2AE1:02C1:0014:00F6
 */
void f__2AE1_02C9_0004_07CC()
{
	emu_push(emu_cs);
	emu_push(0x02CD); f__2AE1_0131_0023_A8F4();
	f__2AE1_02CD_0009_AFAA();
}

/**
 * Decompiled function f__2AE1_02CD_0009_AFAA()
 *
 * @name f__2AE1_02CD_0009_AFAA
 * @implements 2AE1:02CD:0009:AFAA ()
 *
 * Called From: 2AE1:02C7:0002:03A4
 * Called From: 2AE1:02CD:0004:07CC
 */
void f__2AE1_02CD_0009_AFAA()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
