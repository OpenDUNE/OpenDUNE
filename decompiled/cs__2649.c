/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2649_0003_0014_BF6F()
 *
 * @name f__2649_0003_0014_BF6F
 * @implements 2649:0003:0014:BF6F ()
 *
 * Called From: 2649:006D:001D:29C8
 */
void f__2649_0003_0014_BF6F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x1C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9A18);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0017); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__2649_0017_0008_F3DE();
}

/**
 * Decompiled function f__2649_0017_0008_F3DE()
 *
 * @name f__2649_0017_0008_F3DE
 * @implements 2649:0017:0008:F3DE ()
 *
 * Called From: 2649:0017:0014:BF6F
 */
void f__2649_0017_0008_F3DE()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x2BF2; f__2BF2_0000_0007_3E72();
	f__2649_001F_000A_CE4D();
}

/**
 * Decompiled function f__2649_001F_000A_CE4D()
 *
 * @name f__2649_001F_000A_CE4D
 * @implements 2649:001F:000A:CE4D ()
 *
 * Called From: 2649:001F:0008:F3DE
 */
void f__2649_001F_000A_CE4D()
{
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0029; emu_last_cs = 0x2649; emu_last_ip = 0x0021; emu_last_length = 0x000A; emu_last_crc = 0xCE4D; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__2649_0051_0002_00E2(); return;
}

/**
 * Decompiled function f__2649_0051_0002_00E2()
 *
 * @name f__2649_0051_0002_00E2
 * @implements 2649:0051:0002:00E2 ()
 *
 * Called From: 2649:0027:000A:CE4D
 */
void f__2649_0051_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0053_001D_29C8()
 *
 * @name f__2649_0053_001D_29C8
 * @implements 2649:0053:001D:29C8 ()
 *
 * Called From: 1DB6:01A4:000B:D09E
 */
void f__2649_0053_001D_29C8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E3E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E40));
	if (!emu_flags.zf) { emu_ip = 0x0079; emu_last_cs = 0x2649; emu_last_ip = 0x006A; emu_last_length = 0x001D; emu_last_crc = 0x29C8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x0070); f__2649_0003_0014_BF6F();
	f__2649_0070_0009_E21C();
}

/**
 * Decompiled function f__2649_0070_0009_E21C()
 *
 * @name f__2649_0070_0009_E21C
 * @implements 2649:0070:0009:E21C ()
 *
 * Called From: 2649:0070:001D:29C8
 */
void f__2649_0070_0009_E21C()
{
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0079; emu_last_cs = 0x2649; emu_last_ip = 0x0072; emu_last_length = 0x0009; emu_last_crc = 0xE21C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__2649_02B5_0004_0F7A(); return;
}

/**
 * Decompiled function f__2649_02B5_0004_0F7A()
 *
 * @name f__2649_02B5_0004_0F7A
 * @implements 2649:02B5:0004:0F7A ()
 *
 * Called From: 2649:0076:0009:E21C
 */
void f__2649_02B5_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0336_004C_D882()
 *
 * @name f__2649_0336_004C_D882
 * @implements 2649:0336:004C:D882 ()
 *
 * Called From: 23E1:002F:001C:FDE5
 */
void f__2649_0336_004C_D882()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x30);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xE);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x9A18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E3E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E40));
	if (emu_flags.zf) { f__2649_037B_0007_214C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x037B; emu_last_cs = 0x2649; emu_last_ip = 0x035F; emu_last_length = 0x004C; emu_last_crc = 0xD882; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x037B; emu_last_cs = 0x2649; emu_last_ip = 0x0368; emu_last_length = 0x004C; emu_last_crc = 0xD882; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0382; emu_last_cs = 0x2649; emu_last_ip = 0x0372; emu_last_length = 0x004C; emu_last_crc = 0xD882; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0382; emu_last_cs = 0x2649; emu_last_ip = 0x0379; emu_last_length = 0x004C; emu_last_crc = 0xD882; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x05DA; emu_last_cs = 0x2649; emu_last_ip = 0x037F; emu_last_length = 0x004C; emu_last_crc = 0xD882; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2649_037B_0007_214C()
 *
 * @name f__2649_037B_0007_214C
 * @implements 2649:037B:0007:214C ()
 *
 * Called From: 2649:0357:004C:D882
 */
void f__2649_037B_0007_214C()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__2649_05DA_0005_04BA(); return;
}

/**
 * Decompiled function f__2649_05DA_0005_04BA()
 *
 * @name f__2649_05DA_0005_04BA
 * @implements 2649:05DA:0005:04BA ()
 *
 * Called From: 2649:037F:0007:214C
 */
void f__2649_05DA_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0ADA_000E_DD19()
 *
 * @name f__2649_0ADA_000E_DD19
 * @implements 2649:0ADA:000E:DD19 ()
 *
 * Called From: B500:0064:0006:0998
 */
void f__2649_0ADA_000E_DD19()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E3E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6E40));
	if (!emu_flags.zf) { emu_ip = 0x0AE8; emu_last_cs = 0x2649; emu_last_ip = 0x0AE4; emu_last_length = 0x000E; emu_last_crc = 0xDD19; emu_call(); return; } // Jump does not resolve
	f__2649_0B05_0002_00E2(); return;
}

/**
 * Decompiled function f__2649_0B05_0002_00E2()
 *
 * @name f__2649_0B05_0002_00E2
 * @implements 2649:0B05:0002:00E2 ()
 *
 * Called From: 2649:0AE6:000E:DD19
 */
void f__2649_0B05_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0BAE_001D_D0BE()
 *
 * @name f__2649_0BAE_001D_D0BE
 * @implements 2649:0BAE:001D:D0BE ()
 *
 * Called From: 1FB5:0C32:000B:EA96
 * Called From: 1FB5:0F28:0019:9B2D
 * Called From: 23E1:01D9:000B:ED16
 */
void f__2649_0BAE_001D_D0BE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF000);
	if (!emu_flags.cf) { emu_ip = 0x0BCB; emu_last_cs = 0x2649; emu_last_ip = 0x0BC5; emu_last_length = 0x001D; emu_last_crc = 0xD0BE; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__2649_0C05_0004_0F7A(); return;
}

/**
 * Decompiled function f__2649_0C05_0004_0F7A()
 *
 * @name f__2649_0C05_0004_0F7A
 * @implements 2649:0C05:0004:0F7A ()
 *
 * Called From: 2649:0BC9:001D:D0BE
 */
void f__2649_0C05_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
