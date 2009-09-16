/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07AE_0000_00DF_386F()
 *
 * @name f__07AE_0000_00DF_386F
 * @implements 07AE:0000:00DF:386F ()
 *
 * Called From: 0642:0433:0008:56F6
 * Called From: 07AE:00EE:000D:C2A4
 * Called From: 07D4:0394:000D:47F5
 * Called From: 07D4:1568:0009:5D76
 * Called From: 10E4:02D2:000C:5CF9
 * Called From: 10E4:0327:0017:EC68
 * Called From: 10E4:0327:001A:0A6A
 * Called From: 10E4:0539:000B:FA71
 * Called From: 10E4:0706:000D:71F5
 * Called From: 10E4:099F:0009:58F6
 * Called From: 10E4:0A9F:0009:72F7
 * Called From: 10E4:0B88:0008:EAF6
 * Called From: 10E4:117E:000D:03F5
 * Called From: 10E4:1B7F:000E:DF57
 * Called From: 2599:004D:0047:EC47
 * Called From: 25C4:03E4:0009:E4F6
 * Called From: B4B8:2037:000C:50F9
 * Called From: B4DA:0ADD:002A:328A
 * Called From: B4DA:106E:0008:E8F6
 * Called From: B4DA:124C:000C:5DF9
 * Called From: B4DA:128D:0019:6F2E
 * Called From: B4DA:13D4:001D:0D20
 * Called From: B4DA:16A0:0008:EEF6
 * Called From: B4E9:0189:0018:3939
 * Called From: B4E9:0189:0019:8B39
 * Called From: B4E9:0314:0018:3939
 * Called From: B4E9:0314:001B:213E
 * Called From: B4F2:0717:000A:1EF6
 * Called From: B4F2:0884:000C:81B4
 * Called From: B4F2:0D11:000B:11B1
 * Called From: B4F2:0EE9:000E:F1BB
 * Called From: B4F2:0F2D:000E:F1BB
 * Called From: B527:0030:000C:CAF7
 * Called From: B527:02A1:0009:59F6
 * Called From: B53B:004B:0050:2F00
 * Called From: B53B:0090:000D:E7F5
 * Called From: B53B:023E:000B:FA71
 */
void f__07AE_0000_00DF_386F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D5D), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x4062);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66D3), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66D5), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66D1), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CF), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D5B), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D59), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CD), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3196), 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6C));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CB));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDB), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D5F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D63), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6C));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D63));
	emu_cwd();
	emu_pop(&emu_bx.x);
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D61), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__07AE_00DF_0005_04BA(); return;
}

/**
 * Decompiled function f__07AE_00DF_0005_04BA()
 *
 * @name f__07AE_00DF_0005_04BA
 * @implements 07AE:00DF:0005:04BA ()
 *
 * Called From: 07AE:00DD:00DF:386F
 */
void f__07AE_00DF_0005_04BA()
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
 * Decompiled function f__07AE_00E4_000D_C2A4()
 *
 * @name f__07AE_00E4_000D_C2A4
 * @implements 07AE:00E4:000D:C2A4 ()
 *
 * Called From: B4DA:0255:006D:6875
 * Called From: B4E0:0877:000D:2BB5
 * Called From: B511:0E70:000A:17B6
 * Called From: B518:0732:000D:70B5
 */
void f__07AE_00E4_000D_C2A4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F1); f__07AE_0000_00DF_386F();
	f__07AE_00F1_0009_3204();
}

/**
 * Decompiled function f__07AE_00F1_0009_3204()
 *
 * @name f__07AE_00F1_0009_3204
 * @implements 07AE:00F1:0009:3204 ()
 *
 * Called From: 07AE:00F1:000D:C2A4
 */
void f__07AE_00F1_0009_3204()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00FA); f__07AE_0103_004C_A52F();
	f__07AE_00FA_0005_115C();
}

/**
 * Decompiled function f__07AE_00FA_0005_115C()
 *
 * @name f__07AE_00FA_0005_115C
 * @implements 07AE:00FA:0005:115C ()
 *
 * Called From: 07AE:00FA:0009:3204
 */
void f__07AE_00FA_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__07AE_00FF_0004_0F7A(); return;
}

/**
 * Decompiled function f__07AE_00FF_0004_0F7A()
 *
 * @name f__07AE_00FF_0004_0F7A
 * @implements 07AE:00FF:0004:0F7A ()
 *
 * Called From: 07AE:00FD:0005:115C
 */
void f__07AE_00FF_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07AE_0103_004C_A52F()
 *
 * @name f__07AE_0103_004C_A52F
 * @implements 07AE:0103:004C:A52F ()
 *
 * Called From: 07AE:00F7:0009:3204
 * Called From: B527:00AD:000C:3A83
 * Called From: B53B:014F:0008:F3CE
 */
void f__07AE_0103_004C_A52F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x014F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07AE; emu_last_ip = 0x014A; emu_last_length = 0x004C; emu_last_crc = 0xA52F;
			emu_call();
			return;
	}
	f__07AE_014F_001B_1E9B();
}

/**
 * Decompiled function f__07AE_014F_001B_1E9B()
 *
 * @name f__07AE_014F_001B_1E9B
 * @implements 07AE:014F:001B:1E9B ()
 *
 * Called From: 07AE:014F:004C:A52F
 */
void f__07AE_014F_001B_1E9B()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7DDB), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CD), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3196), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
