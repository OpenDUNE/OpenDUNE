/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2537_000C_001C_86CB()
 *
 * @name f__2537_000C_001C_86CB
 * @implements 2537:000C:001C:86CB ()
 *
 * Called From: 0642:011A:000C:CF74
 * Called From: 0642:01E3:000D:A777
 * Called From: 0642:0280:0013:DFDC
 * Called From: 0642:02E0:0010:86AA
 * Called From: 06F7:0AED:0010:0B2F
 * Called From: 0EDB:016F:002F:C125
 * Called From: 1391:01F2:0012:F977
 * Called From: 16C5:0903:0013:98D0
 * Called From: 176C:2925:0010:8A93
 * Called From: 2C17:0086:000D:EA91
 * Called From: 2C17:00DE:000D:2A92
 * Called From: B488:007A:000D:6A91
 * Called From: B488:00D0:000D:AA91
 * Called From: B4CD:16D4:000D:3D05
 * Called From: B4CD:18B9:0019:7F1B
 * Called From: B4CD:18B9:0028:64E3
 * Called From: B4CD:18EC:0018:7F2B
 * Called From: B4CD:194E:0018:7F2B
 * Called From: B4DA:0418:000D:8335
 * Called From: B4DA:0460:000D:8995
 * Called From: B4DA:04C7:000C:EF74
 * Called From: B4DA:0569:0006:565C
 * Called From: B4DA:0569:000D:84E5
 * Called From: B4DA:0605:0019:9C7F
 * Called From: B4DA:086F:0006:565C
 * Called From: B4DA:086F:000D:9D45
 * Called From: B4DA:08AA:000C:8F74
 * Called From: B4DA:08E6:000C:4F76
 * Called From: B4DA:0913:000C:8F75
 * Called From: B4DA:0913:0016:B48C
 * Called From: B4DA:095A:0017:CC2E
 * Called From: B4DA:095A:0023:71C3
 * Called From: B4DA:09BE:0006:565C
 * Called From: B4DA:09BE:000D:8645
 * Called From: B4DA:1274:000D:EA8D
 * Called From: B4E9:0409:000D:0776
 * Called From: B518:01A9:0015:02B2
 */
void f__2537_000C_001C_86CB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_si, emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
		emu_movw(&emu_si, emu_di);
		emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	}
	f__2537_0026_0002_C03A(); return;
}

/**
 * Decompiled function f__2537_0026_0002_C03A()
 *
 * @name f__2537_0026_0002_C03A
 * @implements 2537:0026:0002:C03A ()
 *
 * Called From: 2537:001C:001C:86CB
 */
void f__2537_0026_0002_C03A()
{
	f__2537_0028_000C_718A(); return;
}

/**
 * Decompiled function f__2537_0028_000C_718A()
 *
 * @name f__2537_0028_000C_718A
 * @implements 2537:0028:000C:718A ()
 *
 * Called From: 2537:0026:0002:C03A
 * Called From: 2537:0053:000E:7744
 */
void f__2537_0028_000C_718A()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x8000);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x01F7; f__01F7_07E5_0011_F68B();
	f__2537_0034_0011_C388(); return;
}

/**
 * Decompiled function f__2537_0034_0011_C388()
 *
 * @name f__2537_0034_0011_C388
 * @implements 2537:0034:0011:C388 ()
 *
 */
void f__2537_0034_0011_C388()
{
	emu_cwd();
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_subw(&emu_ax, emu_si);
	emu_incw(&emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	f__2537_0045_0007_8446(); return;
}

/**
 * Decompiled function f__2537_0045_0007_8446()
 *
 * @name f__2537_0045_0007_8446
 * @implements 2537:0045:0007:8446 ()
 *
 */
void f__2537_0045_0007_8446()
{
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004C); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	f__2537_004C_000E_7744(); return;
}

/**
 * Decompiled function f__2537_004C_000E_7744()
 *
 * @name f__2537_004C_000E_7744
 * @implements 2537:004C:000E:7744 ()
 *
 */
void f__2537_004C_000E_7744()
{
	emu_addw(&emu_ax, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_ax, emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { f__2537_0028_000C_718A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__2537_005A_0006_F7CE(); return;
}

/**
 * Decompiled function f__2537_005A_0006_F7CE()
 *
 * @name f__2537_005A_0006_F7CE
 * @implements 2537:005A:0006:F7CE ()
 *
 * Called From: 2537:0058:000E:7744
 */
void f__2537_005A_0006_F7CE()
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
