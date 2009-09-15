/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BB6_000C_0043_A7B4()
 *
 * @name f__2BB6_000C_0043_A7B4
 * @implements 2BB6:000C:0043:A7B4 ()
 *
 * Called From: B4B8:0B76:0022:06FC
 * Called From: B4B8:0BA8:0022:06FC
 */
void f__2BB6_000C_0043_A7B4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x003F; emu_last_cs = 0x2BB6; emu_last_ip = 0x001B; emu_last_length = 0x0043; emu_last_crc = 0xA7B4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x003F; emu_last_cs = 0x2BB6; emu_last_ip = 0x0021; emu_last_length = 0x0043; emu_last_crc = 0xA7B4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_testb(&emu_ax.l, 0x1);
	if (emu_flags.zf) { emu_ip = 0x003F; emu_last_cs = 0x2BB6; emu_last_ip = 0x002E; emu_last_length = 0x0043; emu_last_crc = 0xA7B4; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_di, 0xA);
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_cx.x, 0x10);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_stosb();
	if (--emu_cx.x != 0) { f__2BB6_0038_0017_327E(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BB6_0038_0017_327E()
 *
 * @name f__2BB6_0038_0017_327E
 * @implements 2BB6:0038:0017:327E ()
 *
 * Called From: 2BB6:003D:0017:327E
 * Called From: 2BB6:003D:0043:A7B4
 */
void f__2BB6_0038_0017_327E()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_stosb();
	if (--emu_cx.x != 0) { f__2BB6_0038_0017_327E(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BB6_004F_0014_E253()
 *
 * @name f__2BB6_004F_0014_E253
 * @implements 2BB6:004F:0014:E253 ()
 *
 * Called From: 10E4:20F6:0022:CEB1
 * Called From: B495:12A9:0022:CEB1
 * Called From: B503:00D4:0022:CF71
 */
void f__2BB6_004F_0014_E253()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cld();
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	f__2BB6_0063_0041_E1B3();
}

/**
 * Decompiled function f__2BB6_0063_0041_E1B3()
 *
 * @name f__2BB6_0063_0041_E1B3
 * @implements 2BB6:0063:0041:E1B3 ()
 *
 * Called From: 2BB6:0063:0014:E253
 */
void f__2BB6_0063_0041_E1B3()
{
	emu_addws(&emu_sp, 0x2);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x009A; emu_last_cs = 0x2BB6; emu_last_ip = 0x007C; emu_last_length = 0x0041; emu_last_crc = 0xE1B3; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_bx.x, emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_stosb();
	if (--emu_cx.x != 0) { f__2BB6_0089_001B_7125(); return; }
	emu_addw(&emu_di, 0x140);
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0x2BB6; emu_last_ip = 0x0098; emu_last_length = 0x0041; emu_last_crc = 0xE1B3; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BB6_0086_001E_D10E()
 *
 * @name f__2BB6_0086_001E_D10E
 * @implements 2BB6:0086:001E:D10E ()
 *
 * Called From: 2BB6:0098:001B:7125
 */
void f__2BB6_0086_001E_D10E()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_stosb();
	if (--emu_cx.x != 0) { f__2BB6_0089_001B_7125(); return; }
	emu_addw(&emu_di, 0x140);
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0x2BB6; emu_last_ip = 0x0098; emu_last_length = 0x001E; emu_last_crc = 0xD10E; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BB6_0089_001B_7125()
 *
 * @name f__2BB6_0089_001B_7125
 * @implements 2BB6:0089:001B:7125 ()
 *
 * Called From: 2BB6:008E:0041:E1B3
 * Called From: 2BB6:008E:001B:7125
 * Called From: 2BB6:008E:001E:D10E
 */
void f__2BB6_0089_001B_7125()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_stosb();
	if (--emu_cx.x != 0) { f__2BB6_0089_001B_7125(); return; }
	emu_addw(&emu_di, 0x140);
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__2BB6_0086_001E_D10E(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
