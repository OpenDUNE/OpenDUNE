/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__256D_0004_001C_9F23()
 *
 * @name f__256D_0004_001C_9F23
 * @implements 256D:0004:001C:9F23 ()
 *
 * Called From: 25C4:02DB:0013:8B6C
 * Called From: B4B8:1989:000A:8AD2
 * Called From: B4ED:00B6:000D:F799
 */
void f__256D_0004_001C_9F23()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0020); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	f__256D_0020_0009_37AE();
}

/**
 * Decompiled function f__256D_0020_0009_37AE()
 *
 * @name f__256D_0020_0009_37AE
 * @implements 256D:0020:0009:37AE ()
 *
 */
void f__256D_0020_0009_37AE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__256D_0029_000F_8420(); return; }
	/* Unresolved jump */ emu_ip = 0x00A8; emu_last_cs = 0x256D; emu_last_ip = 0x0026; emu_last_length = 0x0009; emu_last_crc = 0x37AE; emu_call();
}

/**
 * Decompiled function f__256D_0029_000F_8420()
 *
 * @name f__256D_0029_000F_8420
 * @implements 256D:0029:000F:8420 ()
 *
 * Called From: 256D:0024:0009:37AE
 */
void f__256D_0029_000F_8420()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	f__256D_0038_0017_575A();
}

/**
 * Decompiled function f__256D_0038_0017_575A()
 *
 * @name f__256D_0038_0017_575A
 * @implements 256D:0038:0017:575A ()
 *
 */
void f__256D_0038_0017_575A()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x2);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__256D_004F_0012_D293();
}

/**
 * Decompiled function f__256D_004F_0012_D293()
 *
 * @name f__256D_004F_0012_D293
 * @implements 256D:004F:0012:D293 ()
 *
 */
void f__256D_004F_0012_D293()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x256D; emu_last_ip = 0x0054; emu_last_length = 0x0012; emu_last_crc = 0xD293; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__256D_0061_000F_2FE8(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__256D_005F_0002_FBBA(); return;
}

/**
 * Decompiled function f__256D_005F_0002_FBBA()
 *
 * @name f__256D_005F_0002_FBBA
 * @implements 256D:005F:0002:FBBA ()
 *
 * Called From: 256D:00D6:0008:8309
 */
void f__256D_005F_0002_FBBA()
{
	f__256D_00D8_0005_8BCF(); return;
}

/**
 * Decompiled function f__256D_0061_000F_2FE8()
 *
 * @name f__256D_0061_000F_2FE8
 * @implements 256D:0061:000F:2FE8 ()
 *
 * Called From: 256D:0059:0012:D293
 */
void f__256D_0061_000F_2FE8()
{
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0070); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__256D_0070_002C_8C80();
}

/**
 * Decompiled function f__256D_0070_002C_8C80()
 *
 * @name f__256D_0070_002C_8C80
 * @implements 256D:0070:002C:8C80 ()
 *
 */
void f__256D_0070_002C_8C80()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_ax, 0x2);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x009C); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__256D_009C_0009_2605();
}

/**
 * Decompiled function f__256D_009C_0009_2605()
 *
 * @name f__256D_009C_0009_2605
 * @implements 256D:009C:0009:2605 ()
 *
 */
void f__256D_009C_0009_2605()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	f__256D_00A5_0003_CA1A();
}

/**
 * Decompiled function f__256D_00A5_0003_CA1A()
 *
 * @name f__256D_00A5_0003_CA1A
 * @implements 256D:00A5:0003:CA1A ()
 *
 */
void f__256D_00A5_0003_CA1A()
{
	emu_pop(&emu_cx);
	f__256D_00AA_0026_B985(); return;
}

/**
 * Decompiled function f__256D_00AA_0026_B985()
 *
 * @name f__256D_00AA_0026_B985
 * @implements 256D:00AA:0026:B985 ()
 *
 * Called From: 256D:00A6:0003:CA1A
 */
void f__256D_00AA_0026_B985()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C6; emu_last_cs = 0x256D; emu_last_ip = 0x00B6; emu_last_length = 0x0026; emu_last_crc = 0xB985; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0x5);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C6; emu_last_cs = 0x256D; emu_last_ip = 0x00C0; emu_last_length = 0x0026; emu_last_crc = 0xB985; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x1);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__256D_00D0_0008_8309(); return; }
	/* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x256D; emu_last_ip = 0x00CE; emu_last_length = 0x0026; emu_last_crc = 0xB985; emu_call();
}

/**
 * Decompiled function f__256D_00D0_0008_8309()
 *
 * @name f__256D_00D0_0008_8309
 * @implements 256D:00D0:0008:8309 ()
 *
 * Called From: 256D:00CC:0026:B985
 */
void f__256D_00D0_0008_8309()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__256D_005F_0002_FBBA(); return;
}

/**
 * Decompiled function f__256D_00D8_0005_8BCF()
 *
 * @name f__256D_00D8_0005_8BCF
 * @implements 256D:00D8:0005:8BCF ()
 *
 * Called From: 256D:005F:0002:FBBA
 */
void f__256D_00D8_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
