/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07AE_00E4_000D_9955()
 *
 * @name f__07AE_00E4_000D_9955
 * @implements 07AE:00E4:000D:9955 ()
 * @implements 07AE:00F1:0009:4821
 * @implements 07AE:00FA:0005:BBA6
 * @implements 07AE:00FF:0004:893F
 *
 * Called From: B4DA:0255:006D:4409
 * Called From: B4E0:0877:000D:B232
 * Called From: B511:0E70:000A:9968
 * Called From: B518:0732:000D:AD32
 */
void f__07AE_00E4_000D_9955()
{
l__00E4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F1); emu_Unknown_07AE_0000();
l__00F1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x00FA); f__07AE_0103_004C_B43B();
l__00FA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__00FF;
l__00FF:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07AE_0103_004C_B43B()
 *
 * @name f__07AE_0103_004C_B43B
 * @implements 07AE:0103:004C:B43B ()
 * @implements 07AE:014F:001B:3CCB
 *
 * Called From: 07AE:00F7:0009:4821
 * Called From: B527:00AD:000C:6949
 * Called From: B53B:014F:0008:05D3
 */
void f__07AE_0103_004C_B43B()
{
l__0103:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x014F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07AE; emu_last_ip = 0x014A; emu_last_length = 0x004C; emu_last_crc = 0xB43B;
			emu_call();
			return;
	}
l__014F:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x8225) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9935) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9933) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3196) = 0x0;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
