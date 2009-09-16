/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B530_0000_0010_9159()
 *
 * @name f__B530_0000_0010_9159
 * @implements B530:0000:0010:9159 ()
 *
 * Called From: 3530:0020:0005:1EE2
 * Called From: 3530:0020:0005:1CAE
 */
void f__B530_0000_0010_9159()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0044; emu_last_cs = 0xB530; emu_last_ip = 0x000A; emu_last_length = 0x0010; emu_last_crc = 0x9159; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__B530_003F_000A_F341(); return;
}

/**
 * Decompiled function f__B530_0010_0023_6CE7()
 *
 * @name f__B530_0010_0023_6CE7
 * @implements B530:0010:0023:6CE7 ()
 *
 * Called From: B530:0042:000A:F341
 * Called From: B530:0042:000B:C343
 */
void f__B530_0010_0023_6CE7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3530) { ovl__3530(0xFF); }
	f__B530_0033_000B_63FD();
}

/**
 * Decompiled function f__B530_0033_000B_63FD()
 *
 * @name f__B530_0033_000B_63FD
 * @implements B530:0033:000B:63FD ()
 *
 * Called From: B530:0033:0023:6CE7
 */
void f__B530_0033_000B_63FD()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B530_003E_000B_C343(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B530_0049_0003_0212(); return;
}

/**
 * Decompiled function f__B530_003E_000B_C343()
 *
 * @name f__B530_003E_000B_C343
 * @implements B530:003E:000B:C343 ()
 *
 * Called From: B530:0038:000B:63FD
 */
void f__B530_003E_000B_C343()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B530_0010_0023_6CE7(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x003C; emu_last_cs = 0xB530; emu_last_ip = 0x0047; emu_last_length = 0x000B; emu_last_crc = 0xC343; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B530_003F_000A_F341()
 *
 * @name f__B530_003F_000A_F341
 * @implements B530:003F:000A:F341 ()
 *
 * Called From: B530:000E:0010:9159
 */
void f__B530_003F_000A_F341()
{
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B530_0010_0023_6CE7(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x003C; emu_last_cs = 0xB530; emu_last_ip = 0x0047; emu_last_length = 0x000A; emu_last_crc = 0xF341; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B530_0049_0003_0212()
 *
 * @name f__B530_0049_0003_0212
 * @implements B530:0049:0003:0212 ()
 *
 * Called From: B530:003C:000B:63FD
 */
void f__B530_0049_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
