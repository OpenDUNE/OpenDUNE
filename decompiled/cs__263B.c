/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__263B_0006_001C_EE50()
 *
 * @name f__263B_0006_001C_EE50
 * @implements 263B:0006:001C:EE50 ()
 *
 * Called From: 1DB6:000A:000B:BA01
 * Called From: B500:004F:0005:1380
 */
void f__263B_0006_001C_EE50()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x65F8), 0xF00);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x99F8);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9A08);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x01F7; f__01F7_1FB0_0010_18A6();
	f__263B_0022_000B_EFBB();
}

/**
 * Decompiled function f__263B_0022_000B_EFBB()
 *
 * @name f__263B_0022_000B_EFBB
 * @implements 263B:0022:000B:EFBB ()
 *
 * Called From: 263B:0022:001C:EE50
 */
void f__263B_0022_000B_EFBB()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6608));
	emu_andw(&emu_ax.x, 0xFF);
	f__263B_002D_0002_00E2(); return;
}

/**
 * Decompiled function f__263B_002D_0002_00E2()
 *
 * @name f__263B_002D_0002_00E2
 * @implements 263B:002D:0002:00E2 ()
 *
 * Called From: 263B:002B:000B:EFBB
 */
void f__263B_002D_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__263B_002F_0016_AA17()
 *
 * @name f__263B_002F_0016_AA17
 * @implements 263B:002F:0016:AA17 ()
 *
 * Called From: 25C4:004F:000B:BD57
 * Called From: B500:005E:000F:D40C
 */
void f__263B_002F_0016_AA17()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0x9);
	if (!(emu_flags.sf != emu_flags.of)) { f__263B_0045_0027_7E1A(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6E28));
	f__263B_0048_0024_2ADA(); return;
}

/**
 * Decompiled function f__263B_0045_0027_7E1A()
 *
 * @name f__263B_0045_0027_7E1A
 * @implements 263B:0045:0027:7E1A ()
 *
 * Called From: 263B:0039:0016:AA17
 */
void f__263B_0045_0027_7E1A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E26));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x65F8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6E28));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E26));
	if (emu_flags.zf) { emu_ip = 0x006F; emu_last_cs = 0x263B; emu_last_ip = 0x0057; emu_last_length = 0x0027; emu_last_crc = 0x7E1A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x99F8);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9A08);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x01F7; f__01F7_1FB0_0010_18A6();
	f__263B_006C_0006_3AF2();
}

/**
 * Decompiled function f__263B_0048_0024_2ADA()
 *
 * @name f__263B_0048_0024_2ADA
 * @implements 263B:0048:0024:2ADA ()
 *
 * Called From: 263B:0043:0016:AA17
 */
void f__263B_0048_0024_2ADA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x65F8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6E28));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E26));
	if (emu_flags.zf) { emu_ip = 0x006F; emu_last_cs = 0x263B; emu_last_ip = 0x0057; emu_last_length = 0x0024; emu_last_crc = 0x2ADA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x99F8);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9A08);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x01F7; f__01F7_1FB0_0010_18A6();
	f__263B_006C_0006_3AF2();
}

/**
 * Decompiled function f__263B_006C_0006_3AF2()
 *
 * @name f__263B_006C_0006_3AF2
 * @implements 263B:006C:0006:3AF2 ()
 *
 * Called From: 263B:006C:0024:2ADA
 * Called From: 263B:006C:0027:7E1A
 */
void f__263B_006C_0006_3AF2()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
