/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2521_000F_0022_6D87()
 *
 * @name f__2521_000F_0022_6D87
 * @implements 2521:000F:0022:6D87 ()
 *
 * Called From: 10E4:01DE:000F:1B45
 * Called From: 10E4:021A:000F:1B44
 * Called From: 2521:005E:000E:39D1
 * Called From: B4DA:18C0:000F:1B45
 * Called From: B4DA:190B:000F:1B44
 * Called From: B527:0046:0016:DA67
 * Called From: B527:0078:000F:C442
 * Called From: B527:01F9:0009:A1E0
 * Called From: B527:0345:0012:356E
 * Called From: B527:0345:0015:ADC3
 * Called From: B536:0467:0009:A1E6
 * Called From: B536:06D6:0010:4E1D
 */
void f__2521_000F_0022_6D87()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6C72));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C6C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__2521_0031_0004_893F(); return;
}

/**
 * Decompiled function f__2521_0031_0004_893F()
 *
 * @name f__2521_0031_0004_893F
 * @implements 2521:0031:0004:893F ()
 *
 * Called From: 2521:002F:0022:6D87
 */
void f__2521_0031_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2521_0035_0015_AA0F()
 *
 * @name f__2521_0035_0015_AA0F
 * @implements 2521:0035:0015:AA0F ()
 *
 * Called From: 10E4:204F:000A:AE92
 * Called From: 10E4:2061:000A:AE92
 * Called From: B495:0C6D:0008:1FFE
 * Called From: B4B8:1F02:0017:BB13
 * Called From: B4B8:1F20:001E:9076
 * Called From: B518:00D9:0008:1FFE
 * Called From: B518:00ED:0008:1FFE
 * Called From: B518:011A:0008:1FFE
 * Called From: B518:08DB:0008:1FFE
 * Called From: B518:08EF:0008:1FFE
 * Called From: B518:091C:0008:1FFE
 * Called From: B518:0E59:000E:3EC6
 * Called From: B518:1226:0008:1FFE
 * Called From: B518:1246:0008:1FFE
 * Called From: B518:125C:0008:1FFE
 * Called From: B518:13E9:0028:C863
 * Called From: B536:079A:000F:8263
 */
void f__2521_0035_0015_AA0F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	f__2521_004A_0009_2116(); return;
}

/**
 * Decompiled function f__2521_004A_0009_2116()
 *
 * @name f__2521_004A_0009_2116
 * @implements 2521:004A:0009:2116 ()
 *
 */
void f__2521_004A_0009_2116()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_xorw(&emu_di, emu_di);
	f__2521_0065_0009_605A(); return;
}

/**
 * Decompiled function f__2521_0053_000E_39D1()
 *
 * @name f__2521_0053_000E_39D1
 * @implements 2521:0053:000E:39D1 ()
 *
 * Called From: 2521:0068:0009:605A
 * Called From: 2521:0068:000D:B9B6
 */
void f__2521_0053_000E_39D1()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0061); f__2521_000F_0022_6D87();
	f__2521_0061_000D_B9B6(); return;
}

/**
 * Decompiled function f__2521_0061_000D_B9B6()
 *
 * @name f__2521_0061_000D_B9B6
 * @implements 2521:0061:000D:B9B6 ()
 *
 */
void f__2521_0061_000D_B9B6()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
	emu_incw(&emu_di);
	f__2521_0065_0009_605A(); return;
}

/**
 * Decompiled function f__2521_0065_0009_605A()
 *
 * @name f__2521_0065_0009_605A
 * @implements 2521:0065:0009:605A ()
 *
 * Called From: 2521:0051:0009:2116
 */
void f__2521_0065_0009_605A()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__2521_0053_000E_39D1(); return; }
	emu_movw(&emu_ax, emu_si);
	f__2521_006E_0006_F7CE(); return;
}

/**
 * Decompiled function f__2521_006E_0006_F7CE()
 *
 * @name f__2521_006E_0006_F7CE
 * @implements 2521:006E:0006:F7CE ()
 *
 * Called From: 2521:006C:000D:B9B6
 * Called From: 2521:006C:0009:605A
 */
void f__2521_006E_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
