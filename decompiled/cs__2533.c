/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2533_000D_001C_74EC()
 *
 * @name f__2533_000D_001C_74EC
 * @implements 2533:000D:001C:74EC ()
 *
 * Called From: 25C4:03C8:0005:065C
 */
void f__2533_000D_001C_74EC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xF);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2BEE; f__2BEE_000E_0009_8881();
	f__2533_0029_0007_FBEF();
}

/**
 * Decompiled function f__2533_0024_0005_716B()
 *
 * @name f__2533_0024_0005_716B
 * @implements 2533:0024:0005:716B ()
 *
 * Called From: 2533:0038:0013:9776
 * Called From: 2533:0038:0012:9FB6
 */
void f__2533_0024_0005_716B()
{
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2BEE; f__2BEE_000E_0009_8881();
	f__2533_0029_0007_FBEF();
}

/**
 * Decompiled function f__2533_0029_0007_FBEF()
 *
 * @name f__2533_0029_0007_FBEF
 * @implements 2533:0029:0007:FBEF ()
 *
 * Called From: 2533:0029:001C:74EC
 * Called From: 2533:0029:0005:716B
 */
void f__2533_0029_0007_FBEF()
{
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__2533_0030_0013_9776(); return; }
	emu_incw(&emu_di);
	f__2533_0031_0012_9FB6(); return;
}

/**
 * Decompiled function f__2533_0030_0013_9776()
 *
 * @name f__2533_0030_0013_9776
 * @implements 2533:0030:0013:9776 ()
 *
 * Called From: 2533:002B:0007:FBEF
 */
void f__2533_0030_0013_9776()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__2533_0024_0005_716B(); return; }
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2533_0043_0009_47C5(); return; }
	emu_movw(&emu_ax, 0x1);
	f__2533_0045_0007_07DC(); return;
}

/**
 * Decompiled function f__2533_0031_0012_9FB6()
 *
 * @name f__2533_0031_0012_9FB6
 * @implements 2533:0031:0012:9FB6 ()
 *
 * Called From: 2533:002E:0007:FBEF
 */
void f__2533_0031_0012_9FB6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__2533_0024_0005_716B(); return; }
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2533_0043_0009_47C5(); return; }
	emu_movw(&emu_ax, 0x1);
	f__2533_0045_0007_07DC(); return;
}

/**
 * Decompiled function f__2533_0043_0009_47C5()
 *
 * @name f__2533_0043_0009_47C5
 * @implements 2533:0043:0009:47C5 ()
 *
 * Called From: 2533:003C:0013:9776
 * Called From: 2533:003C:0012:9FB6
 */
void f__2533_0043_0009_47C5()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9937), emu_ax);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2533_0045_0007_07DC()
 *
 * @name f__2533_0045_0007_07DC
 * @implements 2533:0045:0007:07DC ()
 *
 * Called From: 2533:0041:0013:9776
 * Called From: 2533:0041:0012:9FB6
 */
void f__2533_0045_0007_07DC()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x9937), emu_ax);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
