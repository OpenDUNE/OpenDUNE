/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BC2_000A_0044_2E0E()
 *
 * @name f__2BC2_000A_0044_2E0E
 * @implements 2BC2:000A:0044:2E0E ()
 *
 * Called From: 10E4:0459:002F:F19C
 * Called From: 10E4:207B:0014:77A1
 * Called From: B4A2:091C:0013:79CF
 * Called From: B4A2:091C:0016:F3ED
 * Called From: B536:074D:0024:12A7
 */
void f__2BC2_000A_0044_2E0E()
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
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x99F3));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x004B; emu_last_cs = 0x2BC2; emu_last_ip = 0x001F; emu_last_length = 0x0044; emu_last_crc = 0x2E0E; emu_call(); return; }
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
	if (!(emu_flags.sf != emu_flags.of)) { f__2BC2_0045_0009_9156(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_bx.x, 0x140);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x004E; emu_last_cs = 0x2BC2; emu_last_ip = 0x0049; emu_last_length = 0x0044; emu_last_crc = 0x2E0E; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x004B; emu_last_length = 0x0044; emu_last_crc = 0x2E0E; emu_call();
}

/**
 * Decompiled function f__2BC2_0045_0009_9156()
 *
 * @name f__2BC2_0045_0009_9156
 * @implements 2BC2:0045:0009:9156 ()
 *
 * Called From: 2BC2:0041:0044:2E0E
 */
void f__2BC2_0045_0009_9156()
{
	emu_cmpw(&emu_bx.x, 0x140);
	if (emu_flags.cf) { f__2BC2_004E_0031_B02D(); return; }
	/* Unresolved jump */ emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x004B; emu_last_length = 0x0009; emu_last_crc = 0x9156; emu_call();
}

/**
 * Decompiled function f__2BC2_004E_0031_B02D()
 *
 * @name f__2BC2_004E_0031_B02D
 * @implements 2BC2:004E:0031:B02D ()
 *
 * Called From: 2BC2:0049:0009:9156
 */
void f__2BC2_004E_0031_B02D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__2BC2_005B_0024_8300(); return; }
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x004B; emu_last_cs = 0x2BC2; emu_last_ip = 0x005F; emu_last_length = 0x0031; emu_last_crc = 0xB02D; emu_call(); return; }
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66D0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66D2);
	emu_push(0x007F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x007B; emu_last_length = 0x0031; emu_last_crc = 0xB02D;
			emu_call();
			return;
	}
	f__2BC2_007F_001C_CE2B();
}

/**
 * Decompiled function f__2BC2_005B_0024_8300()
 *
 * @name f__2BC2_005B_0024_8300
 * @implements 2BC2:005B:0024:8300 ()
 *
 * Called From: 2BC2:0057:0031:B02D
 */
void f__2BC2_005B_0024_8300()
{
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x004B; emu_last_cs = 0x2BC2; emu_last_ip = 0x005F; emu_last_length = 0x0024; emu_last_crc = 0x8300; emu_call(); return; }
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66D0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66D2);
	emu_push(0x007F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61102: f__22A6_1102_004C_B069(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x007B; emu_last_length = 0x0024; emu_last_crc = 0x8300;
			emu_call();
			return;
	}
	f__2BC2_007F_001C_CE2B();
}

/**
 * Decompiled function f__2BC2_007F_001C_CE2B()
 *
 * @name f__2BC2_007F_001C_CE2B
 * @implements 2BC2:007F:001C:CE2B ()
 *
 * Called From: 2BC2:007F:0024:8300
 */
void f__2BC2_007F_001C_CE2B()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0x0);
	if (emu_flags.zf) { f__2BC2_00E9_000B_EA84(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0xD);
	if (!emu_flags.zf) { f__2BC2_009B_0043_F33C(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_incw(&emu_si);
	/* Unresolved jump */ emu_ip = 0x0082; emu_last_cs = 0x2BC2; emu_last_ip = 0x0099; emu_last_length = 0x001C; emu_last_crc = 0xCE2B; emu_call();
}

/**
 * Decompiled function f__2BC2_0082_0019_4403()
 *
 * @name f__2BC2_0082_0019_4403
 * @implements 2BC2:0082:0019:4403 ()
 *
 * Called From: 2BC2:0099:0019:4403
 * Called From: 2BC2:00E7:000B:4026
 */
void f__2BC2_0082_0019_4403()
{
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0x0);
	if (emu_flags.zf) { f__2BC2_00E9_000B_EA84(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_si,  0x0), 0xD);
	if (!emu_flags.zf) { f__2BC2_009B_0043_F33C(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_incw(&emu_si);
	f__2BC2_0082_0019_4403(); return;
}

/**
 * Decompiled function f__2BC2_009B_0043_F33C()
 *
 * @name f__2BC2_009B_0043_F33C
 * @implements 2BC2:009B:0043:F33C ()
 *
 * Called From: 2BC2:008C:001C:CE2B
 * Called From: 2BC2:008C:0019:4403
 */
void f__2BC2_009B_0043_F33C()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__2BC2_00CC_0012_BF40(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x6C6E));
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x00E9; emu_last_cs = 0x2BC2; emu_last_ip = 0x00D0; emu_last_length = 0x0043; emu_last_crc = 0xF33C; emu_call(); return; }
	emu_push(emu_cx.x);
	emu_push(emu_bx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x664C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x664E);
	emu_push(0x00DE);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x00DA; emu_last_length = 0x0043; emu_last_crc = 0xF33C;
			emu_call();
			return;
	}
	f__2BC2_00DE_000B_4026();
}

/**
 * Decompiled function f__2BC2_00CC_0012_BF40()
 *
 * @name f__2BC2_00CC_0012_BF40
 * @implements 2BC2:00CC:0012:BF40 ()
 *
 * Called From: 2BC2:00C0:0043:F33C
 */
void f__2BC2_00CC_0012_BF40()
{
	emu_cmpw(&emu_cx.x, 0xC8);
	if (!emu_flags.cf) { f__2BC2_00E9_000B_EA84(); return; }
	emu_push(emu_cx.x);
	emu_push(emu_bx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_push(emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x664C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x664E);
	emu_push(0x00DE);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A607B3: f__22A6_07B3_0037_50B9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2BC2; emu_last_ip = 0x00DA; emu_last_length = 0x0012; emu_last_crc = 0xBF40;
			emu_call();
			return;
	}
	f__2BC2_00DE_000B_4026();
}

/**
 * Decompiled function f__2BC2_00DE_000B_4026()
 *
 * @name f__2BC2_00DE_000B_4026
 * @implements 2BC2:00DE:000B:4026 ()
 *
 * Called From: 2BC2:00DE:0012:BF40
 */
void f__2BC2_00DE_000B_4026()
{
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_si);
	f__2BC2_0082_0019_4403(); return;
}

/**
 * Decompiled function f__2BC2_00E9_000B_EA84()
 *
 * @name f__2BC2_00E9_000B_EA84
 * @implements 2BC2:00E9:000B:EA84 ()
 *
 * Called From: 2BC2:0086:0019:4403
 * Called From: 2BC2:0086:001C:CE2B
 * Called From: 2BC2:00D0:0012:BF40
 */
void f__2BC2_00E9_000B_EA84()
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
