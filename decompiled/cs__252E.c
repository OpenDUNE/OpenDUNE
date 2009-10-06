/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__252E_0001_0018_08B3()
 *
 * @name f__252E_0001_0018_08B3
 * @implements 252E:0001:0018:08B3 ()
 *
 * Called From: 1587:0015:0012:30AE
 * Called From: 1587:0024:000F:6FDC
 * Called From: 24DA:0038:0010:3EB2
 * Called From: 253D:0105:0010:873D
 * Called From: 253D:021C:0009:C99B
 * Called From: 2BB6:005E:0014:AB2C
 * Called From: B495:135A:001A:D69A
 * Called From: B4B8:001A:001F:3BC3
 * Called From: B4B8:0A47:0008:59B7
 * Called From: B4B8:0A47:0014:466B
 * Called From: B4B8:0D3D:000F:D70C
 * Called From: B4B8:1A43:0009:CF06
 * Called From: B4BE:00FD:002F:D024
 * Called From: B4CD:0E25:0052:A721
 * Called From: B4CD:0E25:001F:9678
 * Called From: B4DA:0278:0023:C3A8
 * Called From: B4DA:0B1A:0030:D055
 * Called From: B4DA:10DF:0009:C506
 * Called From: B4E0:042F:0017:C8A5
 * Called From: B4E0:0677:0024:52EC
 * Called From: B4E0:0BE9:0018:78E1
 * Called From: B4E0:0BE9:001A:EE8D
 * Called From: B4ED:02DB:000A:D546
 * Called From: B4ED:0307:0009:C506
 * Called From: B4F2:0EF8:0009:C306
 * Called From: B4F2:0F3C:0009:C306
 * Called From: B503:1033:000F:8100
 * Called From: B511:04A5:000D:5685
 * Called From: B511:05AC:0009:C506
 * Called From: B511:05EC:000C:4CAE
 * Called From: B511:062C:000C:4CAE
 * Called From: B511:066C:000C:4CAE
 * Called From: B511:06AC:000C:4CAE
 * Called From: B511:0926:0009:C506
 * Called From: B511:0926:000C:4FAE
 * Called From: B511:0960:000C:4EAE
 * Called From: B511:099A:000C:4EAE
 * Called From: B511:09D4:000C:4EAE
 * Called From: B511:0A0E:000C:4EAE
 * Called From: B511:0A48:000C:4EAE
 * Called From: B511:0E93:0023:E3A4
 * Called From: B518:058F:0009:C306
 * Called From: B518:058F:000F:1D08
 */
void f__252E_0001_0018_08B3()
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
	f__252E_0019_0002_2597(); return;
}

/**
 * Decompiled function f__252E_0019_0002_2597()
 *
 * @name f__252E_0019_0002_2597
 * @implements 252E:0019:0002:2597 ()
 *
 * Called From: 252E:0017:0018:08B3
 */
void f__252E_0019_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__252E_001B_0018_EA2C()
 *
 * @name f__252E_001B_0018_EA2C
 * @implements 252E:001B:0018:EA2C ()
 *
 * Called From: 28E6:0045:0009:2106
 * Called From: 2903:025E:0041:BA21
 * Called From: B52A:0522:0008:99B6
 */
void f__252E_001B_0018_EA2C()
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
	f__252E_0033_0002_2597(); return;
}

/**
 * Decompiled function f__252E_0033_0002_2597()
 *
 * @name f__252E_0033_0002_2597
 * @implements 252E:0033:0002:2597 ()
 *
 * Called From: 252E:0031:0018:EA2C
 */
void f__252E_0033_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
