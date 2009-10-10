/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2649_0003_0014_67A9()
 *
 * @name f__2649_0003_0014_67A9
 * @implements 2649:0003:0014:67A9 ()
 *
 * Called From: 2649:006D:001D:FEB5
 */
void f__2649_0003_0014_67A9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0x1C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9A18);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0017); emu_cs = 0x01F7; emu_Tools_Memset();
	f__2649_0017_0008_33E4();
}

/**
 * Decompiled function f__2649_0017_0008_33E4()
 *
 * @name f__2649_0017_0008_33E4
 * @implements 2649:0017:0008:33E4 ()
 *
 */
void f__2649_0017_0008_33E4()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x2BF2; f__2BF2_0000_0007_42B5();
	f__2649_001F_000A_4104();
}

/**
 * Decompiled function f__2649_001F_000A_4104()
 *
 * @name f__2649_001F_000A_4104
 * @implements 2649:001F:000A:4104 ()
 *
 */
void f__2649_001F_000A_4104()
{
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0029; emu_last_cs = 0x2649; emu_last_ip = 0x0021; emu_last_length = 0x000A; emu_last_crc = 0x4104; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__2649_0051_0002_2597(); return;
}

/**
 * Decompiled function f__2649_0051_0002_2597()
 *
 * @name f__2649_0051_0002_2597
 * @implements 2649:0051:0002:2597 ()
 *
 * Called From: 2649:0027:000A:4104
 */
void f__2649_0051_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0053_001D_FEB5()
 *
 * @name f__2649_0053_001D_FEB5
 * @implements 2649:0053:001D:FEB5 ()
 *
 * Called From: 1DB6:01A4:000B:5DBC
 */
void f__2649_0053_001D_FEB5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x1C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E3E));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E40));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0x2649; emu_last_ip = 0x006A; emu_last_length = 0x001D; emu_last_crc = 0xFEB5; emu_call(); return; }
	emu_push(emu_cs);
	emu_push(0x0070); f__2649_0003_0014_67A9();
	f__2649_0070_0009_4B54();
}

/**
 * Decompiled function f__2649_0070_0009_4B54()
 *
 * @name f__2649_0070_0009_4B54
 * @implements 2649:0070:0009:4B54 ()
 *
 */
void f__2649_0070_0009_4B54()
{
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0079; emu_last_cs = 0x2649; emu_last_ip = 0x0072; emu_last_length = 0x0009; emu_last_crc = 0x4B54; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__2649_02B5_0004_893F(); return;
}

/**
 * Decompiled function f__2649_02B5_0004_893F()
 *
 * @name f__2649_02B5_0004_893F
 * @implements 2649:02B5:0004:893F ()
 *
 * Called From: 2649:0076:0009:4B54
 */
void f__2649_02B5_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0336_004C_0948()
 *
 * @name f__2649_0336_004C_0948
 * @implements 2649:0336:004C:0948 ()
 *
 * Called From: 23E1:002F:001C:B654
 */
void f__2649_0336_004C_0948()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x30);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xE);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x9A18);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E3E));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E40));
	if (emu_flags.zf) { f__2649_037B_0007_55C7(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x037B; emu_last_cs = 0x2649; emu_last_ip = 0x035F; emu_last_length = 0x004C; emu_last_crc = 0x0948; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x037B; emu_last_cs = 0x2649; emu_last_ip = 0x0368; emu_last_length = 0x004C; emu_last_crc = 0x0948; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0382; emu_last_cs = 0x2649; emu_last_ip = 0x0372; emu_last_length = 0x004C; emu_last_crc = 0x0948; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0382; emu_last_cs = 0x2649; emu_last_ip = 0x0379; emu_last_length = 0x004C; emu_last_crc = 0x0948; emu_call(); return; }
	f__2649_037B_0007_55C7(); return;
}

/**
 * Decompiled function f__2649_037B_0007_55C7()
 *
 * @name f__2649_037B_0007_55C7
 * @implements 2649:037B:0007:55C7 ()
 *
 * Called From: 2649:0357:004C:0948
 */
void f__2649_037B_0007_55C7()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__2649_05DA_0005_8BCF(); return;
}

/**
 * Decompiled function f__2649_05DA_0005_8BCF()
 *
 * @name f__2649_05DA_0005_8BCF
 * @implements 2649:05DA:0005:8BCF ()
 *
 * Called From: 2649:037F:0007:55C7
 */
void f__2649_05DA_0005_8BCF()
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
 * Decompiled function f__2649_0ADA_000E_EEB3()
 *
 * @name f__2649_0ADA_000E_EEB3
 * @implements 2649:0ADA:000E:EEB3 ()
 *
 * Called From: B500:0064:0006:928E
 */
void f__2649_0ADA_000E_EEB3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E3E));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E40));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0AE8; emu_last_cs = 0x2649; emu_last_ip = 0x0AE4; emu_last_length = 0x000E; emu_last_crc = 0xEEB3; emu_call(); return; }
	f__2649_0B05_0002_2597(); return;
}

/**
 * Decompiled function f__2649_0B05_0002_2597()
 *
 * @name f__2649_0B05_0002_2597
 * @implements 2649:0B05:0002:2597 ()
 *
 * Called From: 2649:0AE6:000E:EEB3
 */
void f__2649_0B05_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2649_0BAE_001D_25B1()
 *
 * @name f__2649_0BAE_001D_25B1
 * @implements 2649:0BAE:001D:25B1 ()
 *
 * Called From: 1FB5:0C32:000B:94DE
 * Called From: 1FB5:0F28:0019:04E8
 * Called From: 23E1:01D9:000B:ACDF
 */
void f__2649_0BAE_001D_25B1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF000);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0BCB; emu_last_cs = 0x2649; emu_last_ip = 0x0BC5; emu_last_length = 0x001D; emu_last_crc = 0x25B1; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__2649_0C05_0004_893F(); return;
}

/**
 * Decompiled function f__2649_0C05_0004_893F()
 *
 * @name f__2649_0C05_0004_893F
 * @implements 2649:0C05:0004:893F ()
 *
 * Called From: 2649:0BC9:001D:25B1
 */
void f__2649_0C05_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
