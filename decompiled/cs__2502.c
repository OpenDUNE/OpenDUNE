/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2502_0008_0015_ED28()
 *
 * @name f__2502_0008_0015_ED28
 * @implements 2502:0008:0015:ED28 ()
 *
 * Called From: B4DA:1168:0014:B27E
 * Called From: B4DA:1228:0014:B27E
 * Called From: B4DA:12C3:0014:B27E
 * Called From: B4DA:1391:0014:B27E
 * Called From: B4DA:1557:0014:B27E
 * Called From: B4DA:15BB:0014:B27E
 * Called From: B4E0:06DD:0014:FB7C
 * Called From: B4E0:07B2:0014:B26E
 * Called From: B511:0DCD:0018:C1B2
 * Called From: B511:1324:0018:C1B2
 */
void f__2502_0008_0015_ED28()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0055; emu_last_cs = 0x2502; emu_last_ip = 0x0011; emu_last_length = 0x0015; emu_last_crc = 0xED28; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0055; emu_last_cs = 0x2502; emu_last_ip = 0x0019; emu_last_length = 0x0015; emu_last_crc = 0xED28; emu_call(); return; } // Jump does not resolve
	f__2502_0045_0012_B54D(); return;
}

/**
 * Decompiled function f__2502_001D_0016_D2AC()
 *
 * @name f__2502_001D_0016_D2AC
 * @implements 2502:001D:0016:D2AC ()
 *
 * Called From: 2502:004C:0012:B54D
 * Called From: 2502:004C:0024:8349
 */
void f__2502_001D_0016_D2AC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1B);
	if (!emu_flags.zf) { f__2502_0033_0024_8349(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_addb(&emu_ax.l, 0x7F);
	emu_ip = 0x0039; emu_last_cs = 0x2502; emu_last_ip = 0x0031; emu_last_length = 0x0016; emu_last_crc = 0xD2AC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2502_0033_0024_8349()
 *
 * @name f__2502_0033_0024_8349
 * @implements 2502:0033:0024:8349 ()
 *
 * Called From: 2502:0024:0016:D2AC
 */
void f__2502_0033_0024_8349()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__2502_001D_0016_D2AC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2502_0045_0012_B54D()
 *
 * @name f__2502_0045_0012_B54D
 * @implements 2502:0045:0012:B54D ()
 *
 * Called From: 2502:001B:0015:ED28
 */
void f__2502_0045_0012_B54D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__2502_001D_0016_D2AC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2502_00FA_0009_4FCC()
 *
 * @name f__2502_00FA_0009_4FCC
 * @implements 2502:00FA:0009:4FCC ()
 *
 * Called From: 0FCB:017E:0014:FD3B
 * Called From: B4DA:1154:000A:A3A1
 * Called From: B4DA:1214:000A:A3A1
 * Called From: B4DA:12AF:000A:A3A1
 * Called From: B4DA:137D:000A:A3A1
 * Called From: B4DA:1543:000A:A3A1
 * Called From: B4DA:15A7:000A:A3A1
 * Called From: B4E0:06C9:0014:E654
 */
void f__2502_00FA_0009_4FCC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	f__2502_0143_001E_61F8(); return;
}

/**
 * Decompiled function f__2502_0103_005E_EF4E()
 *
 * @name f__2502_0103_005E_EF4E
 * @implements 2502:0103:005E:EF4E ()
 *
 * Called From: 2502:0151:001E:61F8
 * Called From: 2502:0151:0028:87D9
 * Called From: 2502:0151:005E:EF4E
 */
void f__2502_0103_005E_EF4E()
{
	emu_testw(&emu_dx.x, 0x80);
	if (emu_flags.zf) { f__2502_0139_0028_87D9(); return; }
	emu_andws(&emu_dx.x, 0x7F);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x78);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_di,  0x6E88));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_si);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x7);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x6E98));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_dx.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { f__2502_0103_005E_EF4E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	f__2502_0161_0004_07E2(); return;
}

/**
 * Decompiled function f__2502_0139_0028_87D9()
 *
 * @name f__2502_0139_0028_87D9
 * @implements 2502:0139:0028:87D9 ()
 *
 * Called From: 2502:0107:005E:EF4E
 */
void f__2502_0139_0028_87D9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_dx.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { f__2502_0103_005E_EF4E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	f__2502_0161_0004_07E2(); return;
}

/**
 * Decompiled function f__2502_0143_001E_61F8()
 *
 * @name f__2502_0143_001E_61F8
 * @implements 2502:0143:001E:61F8 ()
 *
 * Called From: 2502:0101:0009:4FCC
 */
void f__2502_0143_001E_61F8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { f__2502_0103_005E_EF4E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x0161; emu_last_cs = 0x2502; emu_last_ip = 0x015F; emu_last_length = 0x001E; emu_last_crc = 0x61F8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2502_0161_0004_07E2()
 *
 * @name f__2502_0161_0004_07E2
 * @implements 2502:0161:0004:07E2 ()
 *
 * Called From: 2502:015F:0028:87D9
 * Called From: 2502:015F:005E:EF4E
 */
void f__2502_0161_0004_07E2()
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
 * Decompiled function f__2502_0165_0027_0314()
 *
 * @name f__2502_0165_0027_0314
 * @implements 2502:0165:0027:0314 ()
 *
 * Called From: 0FCB:0076:001C:147D
 * Called From: 10E4:019A:0043:6149
 * Called From: B4DA:114A:0020:D5F7
 * Called From: B4DA:120A:0019:CC77
 * Called From: B4DA:12A5:0018:1445
 * Called From: B4DA:1373:0014:B008
 * Called From: B4DA:1539:001B:5E9F
 * Called From: B4DA:159D:0026:A8ED
 */
void f__2502_0165_0027_0314()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	f__2502_018C_0004_0F7A(); return;
}

/**
 * Decompiled function f__2502_018C_0004_0F7A()
 *
 * @name f__2502_018C_0004_0F7A
 * @implements 2502:018C:0004:0F7A ()
 *
 * Called From: 2502:018A:0027:0314
 */
void f__2502_018C_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
