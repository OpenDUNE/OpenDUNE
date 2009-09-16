/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B533_0000_0010_8273()
 *
 * @name f__B533_0000_0010_8273
 * @implements B533:0000:0010:8273 ()
 *
 * Called From: 3533:0020:0005:0000
 */
void f__B533_0000_0010_8273()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0044; emu_last_cs = 0xB533; emu_last_ip = 0x000A; emu_last_length = 0x0010; emu_last_crc = 0x8273; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__B533_003F_000A_58D1(); return;
}

/**
 * Decompiled function f__B533_0010_0023_A798()
 *
 * @name f__B533_0010_0023_A798
 * @implements B533:0010:0023:A798 ()
 *
 * Called From: B533:0042:000A:58D1
 * Called From: B533:0042:000B:98D9
 */
void f__B533_0010_0023_A798()
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
	emu_push(emu_cs); emu_push(0x0033); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3533) { ovl__3533(0xFF); }
	f__B533_0033_000B_E2C7();
}

/**
 * Decompiled function f__B533_0033_000B_E2C7()
 *
 * @name f__B533_0033_000B_E2C7
 * @implements B533:0033:000B:E2C7 ()
 *
 * Called From: B533:0033:0023:A798
 */
void f__B533_0033_000B_E2C7()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B533_003E_000B_98D9(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B533_0049_0003_2E57(); return;
}

/**
 * Decompiled function f__B533_003C_0002_C5BA()
 *
 * @name f__B533_003C_0002_C5BA
 * @implements B533:003C:0002:C5BA ()
 *
 * Called From: B533:0047:000B:98D9
 */
void f__B533_003C_0002_C5BA()
{
	f__B533_0049_0003_2E57(); return;
}

/**
 * Decompiled function f__B533_003E_000B_98D9()
 *
 * @name f__B533_003E_000B_98D9
 * @implements B533:003E:000B:98D9 ()
 *
 * Called From: B533:0038:000B:E2C7
 */
void f__B533_003E_000B_98D9()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B533_0010_0023_A798(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__B533_003C_0002_C5BA(); return;
}

/**
 * Decompiled function f__B533_003F_000A_58D1()
 *
 * @name f__B533_003F_000A_58D1
 * @implements B533:003F:000A:58D1 ()
 *
 * Called From: B533:000E:0010:8273
 */
void f__B533_003F_000A_58D1()
{
	emu_cmpws(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B533_0010_0023_A798(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x003C; emu_last_cs = 0xB533; emu_last_ip = 0x0047; emu_last_length = 0x000A; emu_last_crc = 0x58D1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B533_0049_0003_2E57()
 *
 * @name f__B533_0049_0003_2E57
 * @implements B533:0049:0003:2E57 ()
 *
 * Called From: B533:003C:000B:E2C7
 * Called From: B533:003C:0002:C5BA
 */
void f__B533_0049_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
