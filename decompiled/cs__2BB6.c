/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BB6_000C_0043_A570()
 *
 * @name f__2BB6_000C_0043_A570
 * @implements 2BB6:000C:0043:A570 ()
 *
 * Called From: B4B8:0B76:0022:DECA
 * Called From: B4B8:0BA8:0022:DECA
 */
void f__2BB6_000C_0043_A570()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x003F; emu_last_cs = 0x2BB6; emu_last_ip = 0x001B; emu_last_length = 0x0043; emu_last_crc = 0xA570; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x003F; emu_last_cs = 0x2BB6; emu_last_ip = 0x0021; emu_last_length = 0x0043; emu_last_crc = 0xA570; emu_call(); return; }
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_di, 0x0));
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x003F; emu_last_cs = 0x2BB6; emu_last_ip = 0x002E; emu_last_length = 0x0043; emu_last_crc = 0xA570; emu_call(); return; }
	emu_addw(&emu_di, 0xA);
	emu_movw(&emu_bx, emu_si);
	emu_movw(&emu_cx, 0x10);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_di, 0x0));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0));
	emu_stosb();
	if (--emu_cx != 0) { f__2BB6_0038_0017_BCFA(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BB6_0038_0017_BCFA()
 *
 * @name f__2BB6_0038_0017_BCFA
 * @implements 2BB6:0038:0017:BCFA ()
 *
 * Called From: 2BB6:003D:0043:A570
 * Called From: 2BB6:003D:0017:BCFA
 */
void f__2BB6_0038_0017_BCFA()
{
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_di, 0x0));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0));
	emu_stosb();
	if (--emu_cx != 0) { f__2BB6_0038_0017_BCFA(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BB6_004F_0014_AB2C()
 *
 * @name f__2BB6_004F_0014_AB2C
 * @implements 2BB6:004F:0014:AB2C ()
 *
 * Called From: 10E4:20F6:0022:8F4B
 * Called From: B495:0A2B:0021:EEAE
 * Called From: B495:12A9:0022:8F4B
 * Called From: B503:00D4:0022:934B
 */
void f__2BB6_004F_0014_AB2C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cld();
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	f__2BB6_0063_0041_F459();
}

/**
 * Decompiled function f__2BB6_0063_0041_F459()
 *
 * @name f__2BB6_0063_0041_F459
 * @implements 2BB6:0063:0041:F459 ()
 *
 */
void f__2BB6_0063_0041_F459()
{
	emu_addw(&emu_sp, 0x2);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x66EC));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx + emu_si, 0x0));
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x009A; emu_last_cs = 0x2BB6; emu_last_ip = 0x007C; emu_last_length = 0x0041; emu_last_crc = 0xF459; emu_call(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_bx, emu_si);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	f__2BB6_0086_001E_5705(); return;
}

/**
 * Decompiled function f__2BB6_0086_001E_5705()
 *
 * @name f__2BB6_0086_001E_5705
 * @implements 2BB6:0086:001E:5705 ()
 *
 * Called From: 2BB6:0098:001B:258B
 */
void f__2BB6_0086_001E_5705()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	f__2BB6_0089_001B_258B(); return;
}

/**
 * Decompiled function f__2BB6_0089_001B_258B()
 *
 * @name f__2BB6_0089_001B_258B
 * @implements 2BB6:0089:001B:258B ()
 *
 * Called From: 2BB6:008E:0041:F459
 * Called From: 2BB6:008E:001B:258B
 * Called From: 2BB6:008E:001E:5705
 */
void f__2BB6_0089_001B_258B()
{
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_di, 0x0));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0));
	emu_stosb();
	if (--emu_cx != 0) { f__2BB6_0089_001B_258B(); return; }
	emu_addw(&emu_di, 0x140);
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_dx);
	if (!emu_flags.zf) { f__2BB6_0086_001E_5705(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
