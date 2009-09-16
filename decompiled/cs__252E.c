/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__252E_0001_0018_48C0()
 *
 * @name f__252E_0001_0018_48C0
 * @implements 252E:0001:0018:48C0 ()
 *
 * Called From: 1587:0015:0012:EC72
 * Called From: 1587:0024:000F:D52D
 * Called From: 24DA:0038:0010:5D17
 * Called From: 253D:0105:0010:5316
 * Called From: 253D:021C:0009:66A2
 * Called From: 2BB6:005E:0014:E253
 * Called From: B495:135A:001A:C658
 * Called From: B4B8:001A:001F:044D
 * Called From: B4B8:0A47:0008:D5A2
 * Called From: B4B8:0A47:0014:F0BE
 * Called From: B4B8:0D3D:000F:8ACD
 * Called From: B4B8:1A43:0009:7EA3
 * Called From: B4BE:00FD:002F:8201
 * Called From: B4DA:0278:0023:A750
 * Called From: B4DA:0B1A:0030:6E00
 * Called From: B4DA:10DF:0009:74A3
 * Called From: B4E0:042F:0017:7AAC
 * Called From: B4E0:0677:0024:3268
 * Called From: B4E0:0BE9:0018:1ED2
 * Called From: B4E0:0BE9:001A:C8D3
 * Called From: B4ED:02DB:000A:16A2
 * Called From: B4ED:0307:0009:74A3
 * Called From: B4F2:0EF8:0009:72A3
 * Called From: B4F2:0F3C:0009:72A3
 * Called From: B503:1033:000F:C2B9
 * Called From: B511:04A5:000D:7CAA
 * Called From: B511:05AC:0009:74A3
 * Called From: B511:05EC:000C:7CAD
 * Called From: B511:062C:000C:7CAD
 * Called From: B511:066C:000C:7CAD
 * Called From: B511:06AC:000C:7CAD
 * Called From: B511:0926:000C:4CAD
 * Called From: B511:0960:000C:5CAD
 * Called From: B511:099A:000C:5CAD
 * Called From: B511:09D4:000C:5CAD
 * Called From: B511:0A0E:000C:5CAD
 * Called From: B511:0A48:000C:5CAD
 * Called From: B511:0E93:0023:275C
 * Called From: B518:058F:0009:72A3
 * Called From: B518:058F:000F:02D4
 */
void f__252E_0001_0018_48C0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_cx.x, 0xF);
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_orws(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6C93));
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__252E_0019_0002_00E2(); return;
}

/**
 * Decompiled function f__252E_0019_0002_00E2()
 *
 * @name f__252E_0019_0002_00E2
 * @implements 252E:0019:0002:00E2 ()
 *
 * Called From: 252E:0017:0018:48C0
 */
void f__252E_0019_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__252E_001B_0018_30C5()
 *
 * @name f__252E_001B_0018_30C5
 * @implements 252E:001B:0018:30C5 ()
 *
 * Called From: 28E6:0045:0009:8983
 * Called From: 2903:025E:0041:6BB1
 * Called From: B52A:0522:0008:D202
 */
void f__252E_001B_0018_30C5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_cx.x, 0xF);
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_andws(&emu_bx.x, 0xFE);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6C93));
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__252E_0033_0002_00E2(); return;
}

/**
 * Decompiled function f__252E_0033_0002_00E2()
 *
 * @name f__252E_0033_0002_00E2
 * @implements 252E:0033:0002:00E2 ()
 *
 * Called From: 252E:0031:0018:30C5
 */
void f__252E_0033_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
