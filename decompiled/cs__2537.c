/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2537_000C_001C_1A9E()
 *
 * @name f__2537_000C_001C_1A9E
 * @implements 2537:000C:001C:1A9E ()
 *
 * Called From: 0642:011A:000C:5C1D
 * Called From: 0642:0280:0013:787E
 * Called From: 0EDB:016F:002F:97D3
 * Called From: 1391:01F2:0012:060A
 * Called From: 176C:2925:0010:643C
 * Called From: 2C17:0086:000D:A402
 * Called From: 2C17:00DE:000D:5402
 * Called From: B488:007A:000D:8402
 * Called From: B488:00D0:000D:B402
 * Called From: B4CD:18B9:0028:7013
 * Called From: B4CD:18EC:0018:36BA
 * Called From: B4DA:0418:000D:0601
 * Called From: B4DA:04C7:000C:541D
 * Called From: B4DA:0569:0006:0716
 * Called From: B4DA:0569:000D:D000
 * Called From: B4DA:086F:0006:0716
 * Called From: B4DA:086F:000D:630A
 * Called From: B4DA:08AA:000C:4C1D
 * Called From: B4DA:08E6:000C:FC1D
 * Called From: B4DA:0913:000C:0C1D
 * Called From: B4DA:0913:0016:AE41
 * Called From: B4DA:095A:0017:259D
 * Called From: B4DA:095A:0023:9033
 * Called From: B4DA:09BE:0006:0716
 * Called From: B4DA:09BE:000D:780A
 * Called From: B4DA:1274:000D:A405
 * Called From: B4E9:0409:000D:7C16
 * Called From: B518:01A9:0015:412C
 */
void f__2537_000C_001C_1A9E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.cf || emu_flags.zf)) { f__2537_0026_0002_03AC(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ip = 0x0028; emu_last_cs = 0x2537; emu_last_ip = 0x0026; emu_last_length = 0x001C; emu_last_crc = 0x1A9E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2537_0026_0002_03AC()
 *
 * @name f__2537_0026_0002_03AC
 * @implements 2537:0026:0002:03AC ()
 *
 * Called From: 2537:001C:001C:1A9E
 */
void f__2537_0026_0002_03AC()
{
	f__2537_0028_000C_7A71(); return;
}

/**
 * Decompiled function f__2537_0028_000C_7A71()
 *
 * @name f__2537_0028_000C_7A71
 * @implements 2537:0028:000C:7A71 ()
 *
 * Called From: 2537:0026:0002:03AC
 */
void f__2537_0028_000C_7A71()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x8000);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x01F7; f__01F7_07E5_0011_0384();
	f__2537_0034_0011_9CFA();
}

/**
 * Decompiled function f__2537_0034_0011_9CFA()
 *
 * @name f__2537_0034_0011_9CFA
 * @implements 2537:0034:0011:9CFA ()
 *
 * Called From: 2537:0034:000C:7A71
 */
void f__2537_0034_0011_9CFA()
{
	emu_cwd();
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	f__2537_0045_0007_23BE();
}

/**
 * Decompiled function f__2537_0045_0007_23BE()
 *
 * @name f__2537_0045_0007_23BE
 * @implements 2537:0045:0007:23BE ()
 *
 * Called From: 2537:0045:0011:9CFA
 */
void f__2537_0045_0007_23BE()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x004C); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	f__2537_004C_000E_F70D();
}

/**
 * Decompiled function f__2537_004C_000E_F70D()
 *
 * @name f__2537_004C_000E_F70D
 * @implements 2537:004C:000E:F70D ()
 *
 * Called From: 2537:004C:0007:23BE
 */
void f__2537_004C_000E_F70D()
{
	emu_addw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0028; emu_last_cs = 0x2537; emu_last_ip = 0x0053; emu_last_length = 0x000E; emu_last_crc = 0xF70D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__2537_005A_0006_137A(); return;
}

/**
 * Decompiled function f__2537_005A_0006_137A()
 *
 * @name f__2537_005A_0006_137A
 * @implements 2537:005A:0006:137A ()
 *
 * Called From: 2537:0058:000E:F70D
 */
void f__2537_005A_0006_137A()
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
