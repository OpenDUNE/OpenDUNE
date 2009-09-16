/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2521_000F_0022_2292()
 *
 * @name f__2521_000F_0022_2292
 * @implements 2521:000F:0022:2292 ()
 *
 * Called From: 10E4:01DE:000F:5A86
 * Called From: 10E4:021A:000F:1A86
 * Called From: 2521:005E:000E:201A
 * Called From: B4DA:18C0:000F:5A86
 * Called From: B4DA:190B:000F:1A86
 * Called From: B527:0046:0016:3231
 * Called From: B527:01F9:0009:2A7F
 * Called From: B527:0345:0012:449D
 * Called From: B527:0345:0015:5645
 * Called From: B536:0467:0009:2BFF
 * Called From: B536:06D6:0010:4B24
 */
void f__2521_000F_0022_2292()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6C72));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__2521_0031_0004_0F7A(); return;
}

/**
 * Decompiled function f__2521_0031_0004_0F7A()
 *
 * @name f__2521_0031_0004_0F7A
 * @implements 2521:0031:0004:0F7A ()
 *
 * Called From: 2521:002F:0022:2292
 */
void f__2521_0031_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2521_0035_0015_2811()
 *
 * @name f__2521_0035_0015_2811
 * @implements 2521:0035:0015:2811 ()
 *
 * Called From: 10E4:204F:000A:A7DF
 * Called From: 10E4:2061:000A:A7DF
 * Called From: B495:0C6D:0008:74DE
 * Called From: B4B8:1F02:0017:B4A2
 * Called From: B4B8:1F20:001E:7CBD
 * Called From: B518:00D9:0008:74DE
 * Called From: B518:00ED:0008:74DE
 * Called From: B518:011A:0008:74DE
 * Called From: B518:08DB:0008:74DE
 * Called From: B518:08EF:0008:74DE
 * Called From: B518:091C:0008:74DE
 * Called From: B518:0E59:000E:4560
 * Called From: B518:1226:0008:74DE
 * Called From: B518:1246:0008:74DE
 * Called From: B518:125C:0008:74DE
 * Called From: B518:13E9:0028:70D1
 * Called From: B536:079A:000F:46F7
 */
void f__2521_0035_0015_2811()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	f__2521_004A_0009_A680();
}

/**
 * Decompiled function f__2521_004A_0009_A680()
 *
 * @name f__2521_004A_0009_A680
 * @implements 2521:004A:0009:A680 ()
 *
 * Called From: 2521:004A:0015:2811
 */
void f__2521_004A_0009_A680()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	f__2521_0065_0009_780C(); return;
}

/**
 * Decompiled function f__2521_0053_000E_201A()
 *
 * @name f__2521_0053_000E_201A
 * @implements 2521:0053:000E:201A ()
 *
 * Called From: 2521:0068:0009:780C
 * Called From: 2521:0068:000D:F401
 */
void f__2521_0053_000E_201A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0061); f__2521_000F_0022_2292();
	f__2521_0061_000D_F401();
}

/**
 * Decompiled function f__2521_0061_000D_F401()
 *
 * @name f__2521_0061_000D_F401
 * @implements 2521:0061:000D:F401 ()
 *
 * Called From: 2521:0061:000E:201A
 */
void f__2521_0061_000D_F401()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__2521_0053_000E_201A(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__2521_006E_0006_137A(); return;
}

/**
 * Decompiled function f__2521_0065_0009_780C()
 *
 * @name f__2521_0065_0009_780C
 * @implements 2521:0065:0009:780C ()
 *
 * Called From: 2521:0051:0009:A680
 */
void f__2521_0065_0009_780C()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__2521_0053_000E_201A(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__2521_006E_0006_137A(); return;
}

/**
 * Decompiled function f__2521_006E_0006_137A()
 *
 * @name f__2521_006E_0006_137A
 * @implements 2521:006E:0006:137A ()
 *
 * Called From: 2521:006C:0009:780C
 * Called From: 2521:006C:000D:F401
 */
void f__2521_006E_0006_137A()
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
