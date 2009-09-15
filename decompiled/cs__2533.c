/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2533_000D_001C_DBFD()
 *
 * @name f__2533_000D_001C_DBFD
 * @implements 2533:000D:001C:DBFD ()
 *
 * Called From: 25C4:03C8:0005:1316
 */
void f__2533_000D_001C_DBFD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xF);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2BEE; f__2BEE_000E_0009_9317();
	f__2533_0029_0007_3AA6();
}

/**
 * Decompiled function f__2533_0024_0005_104E()
 *
 * @name f__2533_0024_0005_104E
 * @implements 2533:0024:0005:104E ()
 *
 * Called From: 2533:0038:0012:0177
 * Called From: 2533:0038:0013:0347
 */
void f__2533_0024_0005_104E()
{
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2BEE; f__2BEE_000E_0009_9317();
	f__2533_0029_0007_3AA6();
}

/**
 * Decompiled function f__2533_0029_0007_3AA6()
 *
 * @name f__2533_0029_0007_3AA6
 * @implements 2533:0029:0007:3AA6 ()
 *
 * Called From: 2533:0029:0005:104E
 * Called From: 2533:0029:001C:DBFD
 */
void f__2533_0029_0007_3AA6()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__2533_0030_0013_0347(); return; }
	emu_incw(&emu_di);
	f__2533_0031_0012_0177(); return;
}

/**
 * Decompiled function f__2533_0030_0013_0347()
 *
 * @name f__2533_0030_0013_0347
 * @implements 2533:0030:0013:0347 ()
 *
 * Called From: 2533:002B:0007:3AA6
 */
void f__2533_0030_0013_0347()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__2533_0024_0005_104E(); return; }
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2533_0043_0009_EE82(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__2533_0045_0007_4882(); return;
}

/**
 * Decompiled function f__2533_0031_0012_0177()
 *
 * @name f__2533_0031_0012_0177
 * @implements 2533:0031:0012:0177 ()
 *
 * Called From: 2533:002E:0007:3AA6
 */
void f__2533_0031_0012_0177()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__2533_0024_0005_104E(); return; }
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2533_0043_0009_EE82(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__2533_0045_0007_4882(); return;
}

/**
 * Decompiled function f__2533_0043_0009_EE82()
 *
 * @name f__2533_0043_0009_EE82
 * @implements 2533:0043:0009:EE82 ()
 *
 * Called From: 2533:003C:0012:0177
 * Called From: 2533:003C:0013:0347
 */
void f__2533_0043_0009_EE82()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66C9), emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2533_0045_0007_4882()
 *
 * @name f__2533_0045_0007_4882
 * @implements 2533:0045:0007:4882 ()
 *
 * Called From: 2533:0041:0012:0177
 * Called From: 2533:0041:0013:0347
 */
void f__2533_0045_0007_4882()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66C9), emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
