/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B533_0000_0010_9159()
 *
 * @name f__B533_0000_0010_9159
 * @implements B533:0000:0010:9159 ()
 *
 * Called From: 3533:0020:0005:1DB8
 * Called From: 3533:0020:0005:1EAC
 */
void f__B533_0000_0010_9159()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0044; emu_last_cs = 0xB533; emu_last_ip = 0x000A; emu_last_length = 0x0010; emu_last_crc = 0x9159; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__B533_003F_000A_FB41(); return;
}

/**
 * Decompiled function f__B533_0010_0023_3197()
 *
 * @name f__B533_0010_0023_3197
 * @implements B533:0010:0023:3197 ()
 *
 * Called From: B533:0042:000A:FB41
 * Called From: B533:0042:000B:CB43
 */
void f__B533_0010_0023_3197()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3533) { ovl__3533(0xFF); }
	f__B533_0033_000B_63FD();
}

/**
 * Decompiled function f__B533_0033_000B_63FD()
 *
 * @name f__B533_0033_000B_63FD
 * @implements B533:0033:000B:63FD ()
 *
 * Called From: B533:0033:0023:3197
 */
void f__B533_0033_000B_63FD()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B533_003E_000B_CB43(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B533_0049_0003_0212(); return;
}

/**
 * Decompiled function f__B533_003C_0002_03BA()
 *
 * @name f__B533_003C_0002_03BA
 * @implements B533:003C:0002:03BA ()
 *
 * Called From: B533:0047:000B:CB43
 */
void f__B533_003C_0002_03BA()
{
	f__B533_0049_0003_0212(); return;
}

/**
 * Decompiled function f__B533_003E_000B_CB43()
 *
 * @name f__B533_003E_000B_CB43
 * @implements B533:003E:000B:CB43 ()
 *
 * Called From: B533:0038:000B:63FD
 */
void f__B533_003E_000B_CB43()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B533_0010_0023_3197(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__B533_003C_0002_03BA(); return;
}

/**
 * Decompiled function f__B533_003F_000A_FB41()
 *
 * @name f__B533_003F_000A_FB41
 * @implements B533:003F:000A:FB41 ()
 *
 * Called From: B533:000E:0010:9159
 */
void f__B533_003F_000A_FB41()
{
	emu_cmpws(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B533_0010_0023_3197(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x003C; emu_last_cs = 0xB533; emu_last_ip = 0x0047; emu_last_length = 0x000A; emu_last_crc = 0xFB41; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B533_0049_0003_0212()
 *
 * @name f__B533_0049_0003_0212
 * @implements B533:0049:0003:0212 ()
 *
 * Called From: B533:003C:000B:63FD
 * Called From: B533:003C:0002:03BA
 */
void f__B533_0049_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
