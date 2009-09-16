/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24DA_0004_000E_98E7()
 *
 * @name f__24DA_0004_000E_98E7
 * @implements 24DA:0004:000E:98E7 ()
 *
 * Called From: B4B8:183C:000B:4727
 * Called From: B4B8:1D8A:000B:5327
 * Called From: B4B8:1FA9:0008:5720
 * Called From: B4B8:2193:000B:5327
 * Called From: B4BE:02FF:000B:5327
 * Called From: B4BE:03A0:000B:5327
 * Called From: B4ED:01E9:000B:5327
 * Called From: B4ED:02D1:0025:A366
 * Called From: B503:0560:0008:5720
 */
void f__24DA_0004_000E_98E7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0012); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__24DA_0012_000E_260A();
}

/**
 * Decompiled function f__24DA_0012_000E_260A()
 *
 * @name f__24DA_0012_000E_260A
 * @implements 24DA:0012:000E:260A ()
 *
 * Called From: 24DA:0012:000E:98E7
 */
void f__24DA_0012_000E_260A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x0020);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_3851(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24DA; emu_last_ip = 0x001B; emu_last_length = 0x000E; emu_last_crc = 0x260A;
			emu_call();
			return;
	}
	f__24DA_0020_0008_EAEA();
}

/**
 * Decompiled function f__24DA_0020_0008_EAEA()
 *
 * @name f__24DA_0020_0008_EAEA
 * @implements 24DA:0020:0008:EAEA ()
 *
 * Called From: 24DA:0020:000E:260A
 */
void f__24DA_0020_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0028); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__24DA_0028_0005_045A();
}

/**
 * Decompiled function f__24DA_0028_0005_045A()
 *
 * @name f__24DA_0028_0005_045A
 * @implements 24DA:0028:0005:045A ()
 *
 * Called From: 24DA:0028:0008:EAEA
 */
void f__24DA_0028_0005_045A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__24DA_002D_0010_5D17()
 *
 * @name f__24DA_002D_0010_5D17
 * @implements 24DA:002D:0010:5D17 ()
 *
 * Called From: 0642:0153:0009:77B1
 * Called From: B4B8:1A53:0010:CFAE
 * Called From: B4ED:01F8:0009:71B1
 */
void f__24DA_002D_0010_5D17()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	f__24DA_003D_001D_BA80();
}

/**
 * Decompiled function f__24DA_003D_001D_BA80()
 *
 * @name f__24DA_003D_001D_BA80
 * @implements 24DA:003D:001D:BA80 ()
 *
 * Called From: 24DA:003D:0010:5D17
 */
void f__24DA_003D_001D_BA80()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD5));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__24DA_0087_0020_BECE(); return;
}

/**
 * Decompiled function f__24DA_005A_0012_F082()
 *
 * @name f__24DA_005A_0012_F082
 * @implements 24DA:005A:0012:F082 ()
 *
 * Called From: 24DA:0094:0020:BECE
 */
void f__24DA_005A_0012_F082()
{
	emu_movw(&emu_ax.x, 0xFA00);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__24DA_006C_003B_963A();
}

/**
 * Decompiled function f__24DA_006C_003B_963A()
 *
 * @name f__24DA_006C_003B_963A
 * @implements 24DA:006C:003B:963A ()
 *
 * Called From: 24DA:006C:0012:F082
 */
void f__24DA_006C_003B_963A()
{
	emu_addws(&emu_sp, 0x8);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFA00);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, 0xFA0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x005A; emu_last_cs = 0x24DA; emu_last_ip = 0x008B; emu_last_length = 0x003B; emu_last_crc = 0x963A; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0096; emu_last_cs = 0x24DA; emu_last_ip = 0x008D; emu_last_length = 0x003B; emu_last_crc = 0x963A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFA00);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x005A; emu_last_cs = 0x24DA; emu_last_ip = 0x0094; emu_last_length = 0x003B; emu_last_crc = 0x963A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00A7); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__24DA_00A7_0008_E7BA();
}

/**
 * Decompiled function f__24DA_0087_0020_BECE()
 *
 * @name f__24DA_0087_0020_BECE
 * @implements 24DA:0087:0020:BECE ()
 *
 * Called From: 24DA:0058:001D:BA80
 */
void f__24DA_0087_0020_BECE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x005A; emu_last_cs = 0x24DA; emu_last_ip = 0x008B; emu_last_length = 0x0020; emu_last_crc = 0xBECE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0096; emu_last_cs = 0x24DA; emu_last_ip = 0x008D; emu_last_length = 0x0020; emu_last_crc = 0xBECE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFA00);
	if (!(emu_flags.cf || emu_flags.zf)) { f__24DA_005A_0012_F082(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00A7); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__24DA_00A7_0008_E7BA();
}

/**
 * Decompiled function f__24DA_00A7_0008_E7BA()
 *
 * @name f__24DA_00A7_0008_E7BA
 * @implements 24DA:00A7:0008:E7BA ()
 *
 * Called From: 24DA:00A7:0020:BECE
 * Called From: 24DA:00A7:003B:963A
 */
void f__24DA_00A7_0008_E7BA()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
