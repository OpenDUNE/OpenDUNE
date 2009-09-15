/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BD6_0000_0015_D6DC()
 *
 * @name f__2BD6_0000_0015_D6DC
 * @implements 2BD6:0000:0015:D6DC ()
 *
 * Called From: 253D:02E0:0026:5D54
 * Called From: 2903:033C:001C:D665
 * Called From: 2903:033C:0026:E2CC
 * Called From: 2903:033C:0046:F6A0
 * Called From: 2903:033C:0054:790A
 * Called From: 2B4C:0199:0017:5C07
 * Called From: B52A:0458:0019:B53B
 * Called From: B52A:0A71:001D:C3F9
 * Called From: B52A:0A71:001E:83EF
 */
void f__2BD6_0000_0015_D6DC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x2B0E; f__2B0E_00F2_0016_467E();
	f__2BD6_0015_000F_0B6E();
}

/**
 * Decompiled function f__2BD6_0015_000F_0B6E()
 *
 * @name f__2BD6_0015_000F_0B6E
 * @implements 2BD6:0015:000F:0B6E ()
 *
 * Called From: 2BD6:0015:0015:D6DC
 */
void f__2BD6_0015_000F_0B6E()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0024); emu_cs = 0x2B0E; f__2B0E_00F2_0016_467E();
	f__2BD6_0024_005A_D5B8();
}

/**
 * Decompiled function f__2BD6_0024_005A_D5B8()
 *
 * @name f__2BD6_0024_005A_D5B8
 * @implements 2BD6:0024:005A:D5B8 ()
 *
 * Called From: 2BD6:0024:000F:0B6E
 */
void f__2BD6_0024_005A_D5B8()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xF6), emu_di);
	emu_addw(&emu_dx.x, emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xFA), emu_dx.x);
	emu_cld();
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_dx.x, emu_ds);
	emu_movw(&emu_bp, emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xFA));
	emu_subw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x009D; emu_last_cs = 0x2BD6; emu_last_ip = 0x0044; emu_last_length = 0x005A; emu_last_crc = 0xD5B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xF8), emu_ax.x);
	emu_movw(&emu_si, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.sf) { f__2BD6_007E_001F_9B9C(); return; }
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.h, 0xF);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrb(&emu_cx.h, emu_cx.l);
	emu_movb(&emu_cx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_addws(&emu_cx.x, 0x3);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_0071_000D_6104(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	emu_ip = 0x003E; emu_last_cs = 0x2BD6; emu_last_ip = 0x007C; emu_last_length = 0x005A; emu_last_crc = 0xD5B8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2BD6_003E_0040_A332()
 *
 * @name f__2BD6_003E_0040_A332
 * @implements 2BD6:003E:0040:A332 ()
 *
 * Called From: 2BD6:007C:000D:6104
 * Called From: 2BD6:007C:0040:A332
 * Called From: 2BD6:009B:0006:24EE
 * Called From: 2BD6:009B:001F:9B9C
 * Called From: 2BD6:00C6:0005:13A2
 * Called From: 2BD6:00EA:0005:13D2
 * Called From: 2BD6:00EA:001D:BDF5
 */
void f__2BD6_003E_0040_A332()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xFA));
	emu_subw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { f__2BD6_009D_0009_C043(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xF8), emu_ax.x);
	emu_movw(&emu_si, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.sf) { f__2BD6_007E_001F_9B9C(); return; }
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.h, 0xF);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrb(&emu_cx.h, emu_cx.l);
	emu_movb(&emu_cx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_addws(&emu_cx.x, 0x3);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_0071_000D_6104(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_0071_000D_6104()
 *
 * @name f__2BD6_0071_000D_6104
 * @implements 2BD6:0071:000D:6104 ()
 *
 * Called From: 2BD6:006A:0040:A332
 * Called From: 2BD6:006A:005A:D5B8
 */
void f__2BD6_0071_000D_6104()
{
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_si, emu_di);
	emu_subw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_007E_001F_9B9C()
 *
 * @name f__2BD6_007E_001F_9B9C
 * @implements 2BD6:007E:001F:9B9C ()
 *
 * Called From: 2BD6:0051:0040:A332
 * Called From: 2BD6:0051:005A:D5B8
 */
void f__2BD6_007E_001F_9B9C()
{
	emu_testb(&emu_ax.l, 0x40);
	if (!emu_flags.zf) { f__2BD6_00A6_0023_54E8(); return; }
	emu_cmpb(&emu_ax.l, 0x80);
	if (emu_flags.zf) { f__2BD6_009D_0009_C043(); return; }
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andws(&emu_cx.x, 0x3F);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_0097_0006_24EE(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_0097_0006_24EE()
 *
 * @name f__2BD6_0097_0006_24EE
 * @implements 2BD6:0097:0006:24EE ()
 *
 * Called From: 2BD6:0090:001F:9B9C
 */
void f__2BD6_0097_0006_24EE()
{
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_009D_0009_C043()
 *
 * @name f__2BD6_009D_0009_C043
 * @implements 2BD6:009D:0009:C043 ()
 *
 * Called From: 2BD6:0044:0040:A332
 * Called From: 2BD6:0084:001F:9B9C
 */
void f__2BD6_009D_0009_C043()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xF6));
	f__2BD6_00ED_0009_9D8A(); return;
}

/**
 * Decompiled function f__2BD6_00A6_0023_54E8()
 *
 * @name f__2BD6_00A6_0023_54E8
 * @implements 2BD6:00A6:0023:54E8 ()
 *
 * Called From: 2BD6:0080:001F:9B9C
 */
void f__2BD6_00A6_0023_54E8()
{
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andws(&emu_cx.x, 0x3F);
	emu_addws(&emu_cx.x, 0x3);
	emu_cmpb(&emu_ax.l, 0xFE);
	if (!emu_flags.zf) { f__2BD6_00C9_0024_38C5(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_00C4_0005_13A2(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_stosb();
	emu_ip = 0x003E; emu_last_cs = 0x2BD6; emu_last_ip = 0x00C6; emu_last_length = 0x0023; emu_last_crc = 0x54E8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2BD6_00C4_0005_13A2()
 *
 * @name f__2BD6_00C4_0005_13A2
 * @implements 2BD6:00C4:0005:13A2 ()
 *
 * Called From: 2BD6:00BD:0023:54E8
 */
void f__2BD6_00C4_0005_13A2()
{
	emu_rep_stosb();
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_00C9_0024_38C5()
 *
 * @name f__2BD6_00C9_0024_38C5
 * @implements 2BD6:00C9:0024:38C5 ()
 *
 * Called From: 2BD6:00B0:0023:54E8
 */
void f__2BD6_00C9_0024_38C5()
{
	emu_cmpb(&emu_ax.l, 0xFF);
	if (!emu_flags.zf) { f__2BD6_00D0_001D_BDF5(); return; }
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xF6));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_00E8_0005_13D2(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_movsb(emu_ds);
	emu_ip = 0x003E; emu_last_cs = 0x2BD6; emu_last_ip = 0x00EA; emu_last_length = 0x0024; emu_last_crc = 0x38C5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2BD6_00D0_001D_BDF5()
 *
 * @name f__2BD6_00D0_001D_BDF5
 * @implements 2BD6:00D0:001D:BDF5 ()
 *
 * Called From: 2BD6:00CB:0024:38C5
 */
void f__2BD6_00D0_001D_BDF5()
{
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xF6));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ds, emu_bp);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	if ((emu_flags.cf || emu_flags.zf)) { f__2BD6_00E8_0005_13D2(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0xF8));
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_00E8_0005_13D2()
 *
 * @name f__2BD6_00E8_0005_13D2
 * @implements 2BD6:00E8:0005:13D2 ()
 *
 * Called From: 2BD6:00E1:001D:BDF5
 * Called From: 2BD6:00E1:0024:38C5
 */
void f__2BD6_00E8_0005_13D2()
{
	emu_rep_movsb(emu_ds);
	f__2BD6_003E_0040_A332(); return;
}

/**
 * Decompiled function f__2BD6_00ED_0009_9D8A()
 *
 * @name f__2BD6_00ED_0009_9D8A
 * @implements 2BD6:00ED:0009:9D8A ()
 *
 * Called From: 2BD6:00A4:0009:C043
 */
void f__2BD6_00ED_0009_9D8A()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
