/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__256D_0004_001C_37ED()
 *
 * @name f__256D_0004_001C_37ED
 * @implements 256D:0004:001C:37ED ()
 *
 * Called From: 25C4:02DB:0013:E58A
 * Called From: B4B8:1989:000A:C4FF
 * Called From: B4ED:00B6:000D:9E63
 */
void f__256D_0004_001C_37ED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0020); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	f__256D_0020_0009_D6A4();
}

/**
 * Decompiled function f__256D_0020_0009_D6A4()
 *
 * @name f__256D_0020_0009_D6A4
 * @implements 256D:0020:0009:D6A4 ()
 *
 * Called From: 256D:0020:001C:37ED
 */
void f__256D_0020_0009_D6A4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__256D_0029_000F_ABDD(); return; }
	emu_ip = 0x00A8; emu_last_cs = 0x256D; emu_last_ip = 0x0026; emu_last_length = 0x0009; emu_last_crc = 0xD6A4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__256D_0029_000F_ABDD()
 *
 * @name f__256D_0029_000F_ABDD
 * @implements 256D:0029:000F:ABDD ()
 *
 * Called From: 256D:0024:0009:D6A4
 */
void f__256D_0029_000F_ABDD()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	f__256D_0038_0017_8C30();
}

/**
 * Decompiled function f__256D_0038_0017_8C30()
 *
 * @name f__256D_0038_0017_8C30
 * @implements 256D:0038:0017:8C30 ()
 *
 * Called From: 256D:0038:000F:ABDD
 */
void f__256D_0038_0017_8C30()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__256D_004F_0012_7442();
}

/**
 * Decompiled function f__256D_004F_0012_7442()
 *
 * @name f__256D_004F_0012_7442
 * @implements 256D:004F:0012:7442 ()
 *
 * Called From: 256D:004F:0017:8C30
 */
void f__256D_004F_0012_7442()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x005B; emu_last_cs = 0x256D; emu_last_ip = 0x0054; emu_last_length = 0x0012; emu_last_crc = 0x7442; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__256D_0061_000F_D29D(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x00D8; emu_last_cs = 0x256D; emu_last_ip = 0x005F; emu_last_length = 0x0012; emu_last_crc = 0x7442; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__256D_005F_0002_0342()
 *
 * @name f__256D_005F_0002_0342
 * @implements 256D:005F:0002:0342 ()
 *
 * Called From: 256D:00D6:0008:8F72
 */
void f__256D_005F_0002_0342()
{
	f__256D_00D8_0005_04BA(); return;
}

/**
 * Decompiled function f__256D_0061_000F_D29D()
 *
 * @name f__256D_0061_000F_D29D
 * @implements 256D:0061:000F:D29D ()
 *
 * Called From: 256D:0059:0012:7442
 */
void f__256D_0061_000F_D29D()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0070); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__256D_0070_002C_FD7C();
}

/**
 * Decompiled function f__256D_0070_002C_FD7C()
 *
 * @name f__256D_0070_002C_FD7C
 * @implements 256D:0070:002C:FD7C ()
 *
 * Called From: 256D:0070:000F:D29D
 */
void f__256D_0070_002C_FD7C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_ax.x, 0x2);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x009C); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__256D_009C_0009_CF13();
}

/**
 * Decompiled function f__256D_009C_0009_CF13()
 *
 * @name f__256D_009C_0009_CF13
 * @implements 256D:009C:0009:CF13 ()
 *
 * Called From: 256D:009C:002C:FD7C
 */
void f__256D_009C_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	f__256D_00A5_0003_0160();
}

/**
 * Decompiled function f__256D_00A5_0003_0160()
 *
 * @name f__256D_00A5_0003_0160
 * @implements 256D:00A5:0003:0160 ()
 *
 * Called From: 256D:00A5:0009:CF13
 */
void f__256D_00A5_0003_0160()
{
	emu_pop(&emu_cx.x);
	f__256D_00AA_0026_571C(); return;
}

/**
 * Decompiled function f__256D_00AA_0026_571C()
 *
 * @name f__256D_00AA_0026_571C
 * @implements 256D:00AA:0026:571C ()
 *
 * Called From: 256D:00A6:0003:0160
 */
void f__256D_00AA_0026_571C()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00C6; emu_last_cs = 0x256D; emu_last_ip = 0x00B6; emu_last_length = 0x0026; emu_last_crc = 0x571C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0x5);
	if (!emu_flags.zf) { emu_ip = 0x00C6; emu_last_cs = 0x256D; emu_last_ip = 0x00C0; emu_last_length = 0x0026; emu_last_crc = 0x571C; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x1);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__256D_00D0_0008_8F72(); return; }
	emu_ip = 0x005B; emu_last_cs = 0x256D; emu_last_ip = 0x00CE; emu_last_length = 0x0026; emu_last_crc = 0x571C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__256D_00D0_0008_8F72()
 *
 * @name f__256D_00D0_0008_8F72
 * @implements 256D:00D0:0008:8F72 ()
 *
 * Called From: 256D:00CC:0026:571C
 */
void f__256D_00D0_0008_8F72()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__256D_005F_0002_0342(); return;
}

/**
 * Decompiled function f__256D_00D8_0005_04BA()
 *
 * @name f__256D_00D8_0005_04BA
 * @implements 256D:00D8:0005:04BA ()
 *
 * Called From: 256D:005F:0002:0342
 */
void f__256D_00D8_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
