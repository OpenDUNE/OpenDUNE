/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BC2_000A_0044_4A53()
 *
 * @name f__2BC2_000A_0044_4A53
 * @implements 2BC2:000A:0044:4A53 ()
 *
 * Called From: 10E4:0459:002F:ADBD
 * Called From: 10E4:207B:0014:DA03
 * Called From: B4A2:091C:0013:B0B2
 * Called From: B4A2:091C:0016:8872
 */
void f__2BC2_000A_0044_4A53()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, -0x660D));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x004B; emu_last_cs = 0x2BC2; emu_last_ip = 0x001F; emu_last_length = 0x0044; emu_last_crc = 0x4A53; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_di,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_di,  0x4));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_di,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__2BC2_0045_0009_D215(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_bx.x, 0x140);
	if (emu_flags.cf) { emu_ip = 0x004E; emu_last_cs = 0x2BC2; emu_last_ip = 0x0049; emu_last_length = 0x0044; emu_last_crc = 0x4A53; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x004B; emu_last_length = 0x0044; emu_last_crc = 0x4A53; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2BC2_0045_0009_D215()
 *
 * @name f__2BC2_0045_0009_D215
 * @implements 2BC2:0045:0009:D215 ()
 *
 * Called From: 2BC2:0041:0044:4A53
 */
void f__2BC2_0045_0009_D215()
{
	emu_cmpw(&emu_bx.x, 0x140);
	if (emu_flags.cf) { f__2BC2_004E_0031_55C8(); return; }
	emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x004B; emu_last_length = 0x0009; emu_last_crc = 0xD215; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2BC2_004E_0031_55C8()
 *
 * @name f__2BC2_004E_0031_55C8
 * @implements 2BC2:004E:0031:55C8 ()
 *
 * Called From: 2BC2:0049:0009:D215
 */
void f__2BC2_004E_0031_55C8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__2BC2_005B_0024_0133(); return; }
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x004B; emu_last_cs = 0x2BC2; emu_last_ip = 0x005F; emu_last_length = 0x0031; emu_last_crc = 0x55C8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x9), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x8), emu_ax.l);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66D0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66D2);
	emu_push(0x007F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x007B; emu_last_length = 0x0031; emu_last_crc = 0x55C8;
			emu_call();
			return;
	}
	f__2BC2_007F_001C_7AA3();
}

/**
 * Decompiled function f__2BC2_005B_0024_0133()
 *
 * @name f__2BC2_005B_0024_0133
 * @implements 2BC2:005B:0024:0133 ()
 *
 * Called From: 2BC2:0057:0031:55C8
 */
void f__2BC2_005B_0024_0133()
{
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x004B; emu_last_cs = 0x2BC2; emu_last_ip = 0x005F; emu_last_length = 0x0024; emu_last_crc = 0x0133; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x9), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x8), emu_ax.l);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66D0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66D2);
	emu_push(0x007F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61102: f__22A6_1102_004C_6FA8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x007B; emu_last_length = 0x0024; emu_last_crc = 0x0133;
			emu_call();
			return;
	}
	f__2BC2_007F_001C_7AA3();
}

/**
 * Decompiled function f__2BC2_007F_001C_7AA3()
 *
 * @name f__2BC2_007F_001C_7AA3
 * @implements 2BC2:007F:001C:7AA3 ()
 *
 * Called From: 2BC2:007F:0024:0133
 */
void f__2BC2_007F_001C_7AA3()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0x0);
	if (emu_flags.zf) { f__2BC2_00E9_000B_E639(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0xD);
	if (!emu_flags.zf) { f__2BC2_009B_0043_D2C0(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_incw(&emu_si);
	emu_ip = 0x0082; emu_last_cs = 0x2BC2; emu_last_ip = 0x0099; emu_last_length = 0x001C; emu_last_crc = 0x7AA3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2BC2_0082_0019_4AAD()
 *
 * @name f__2BC2_0082_0019_4AAD
 * @implements 2BC2:0082:0019:4AAD ()
 *
 * Called From: 2BC2:0099:0019:4AAD
 * Called From: 2BC2:00E7:000B:7FE9
 */
void f__2BC2_0082_0019_4AAD()
{
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0x0);
	if (emu_flags.zf) { f__2BC2_00E9_000B_E639(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0xD);
	if (!emu_flags.zf) { f__2BC2_009B_0043_D2C0(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_incw(&emu_si);
	f__2BC2_0082_0019_4AAD(); return;
}

/**
 * Decompiled function f__2BC2_009B_0043_D2C0()
 *
 * @name f__2BC2_009B_0043_D2C0
 * @implements 2BC2:009B:0043:D2C0 ()
 *
 * Called From: 2BC2:008C:0019:4AAD
 * Called From: 2BC2:008C:001C:7AA3
 */
void f__2BC2_009B_0043_D2C0()
{
	emu_push(emu_es);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_di,  0x0));
	emu_pop(&emu_bx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C6C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_es);
	emu_cmpw(&emu_dx.x, 0x140);
	if ((emu_flags.cf || emu_flags.zf)) { f__2BC2_00CC_0012_07DA(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!emu_flags.cf) { emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x00D0; emu_last_length = 0x0043; emu_last_crc = 0xD2C0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cx.x);
	emu_push(emu_bx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x664C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x664E);
	emu_push(0x00DE);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x00DA; emu_last_length = 0x0043; emu_last_crc = 0xD2C0;
			emu_call();
			return;
	}
	f__2BC2_00DE_000B_7FE9();
}

/**
 * Decompiled function f__2BC2_00CC_0012_07DA()
 *
 * @name f__2BC2_00CC_0012_07DA
 * @implements 2BC2:00CC:0012:07DA ()
 *
 * Called From: 2BC2:00C0:0043:D2C0
 */
void f__2BC2_00CC_0012_07DA()
{
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!emu_flags.cf) { emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x00D0; emu_last_length = 0x0012; emu_last_crc = 0x07DA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cx.x);
	emu_push(emu_bx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x664C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x664E);
	emu_push(0x00DE);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A607B3: f__22A6_07B3_0037_78C1(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x00DA; emu_last_length = 0x0012; emu_last_crc = 0x07DA;
			emu_call();
			return;
	}
	f__2BC2_00DE_000B_7FE9();
}

/**
 * Decompiled function f__2BC2_00DE_000B_7FE9()
 *
 * @name f__2BC2_00DE_000B_7FE9
 * @implements 2BC2:00DE:000B:7FE9 ()
 *
 * Called From: 2BC2:00DE:0012:07DA
 */
void f__2BC2_00DE_000B_7FE9()
{
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_si);
	f__2BC2_0082_0019_4AAD(); return;
}

/**
 * Decompiled function f__2BC2_00E9_000B_E639()
 *
 * @name f__2BC2_00E9_000B_E639
 * @implements 2BC2:00E9:000B:E639 ()
 *
 * Called From: 2BC2:0086:0019:4AAD
 * Called From: 2BC2:0086:001C:7AA3
 */
void f__2BC2_00E9_000B_E639()
{
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
