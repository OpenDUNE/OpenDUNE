/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__10E4_0008_0048_CEEB()
 *
 * @name f__10E4_0008_0048_CEEB
 * @implements 10E4:0008:0048:CEEB ()
 *
 * Called From: 0AEC:08C8:001D:4108
 * Called From: 0AEC:0DCC:001C:3518
 * Called From: 0AEC:0EF2:001D:73A8
 * Called From: 10E4:060F:0019:B2BD
 * Called From: 10E4:060F:001C:82B3
 * Called From: 10E4:065D:004E:7767
 * Called From: 10E4:0EC5:003D:3B15
 * Called From: B4DA:144D:0031:DD6F
 * Called From: B4DA:1480:0033:CE7D
 */
void f__10E4_0008_0048_CEEB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x3604);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_flags.zf) { f__10E4_0053_0024_C35D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0050);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x004B; emu_last_length = 0x0048; emu_last_crc = 0xCEEB;
			emu_call();
			return;
	}
	f__10E4_0050_0027_B29D();
}

/**
 * Decompiled function f__10E4_0050_0027_B29D()
 *
 * @name f__10E4_0050_0027_B29D
 * @implements 10E4:0050:0027:B29D ()
 *
 * Called From: 10E4:0050:0048:CEEB
 */
void f__10E4_0050_0027_B29D()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x0077);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0072; emu_last_length = 0x0027; emu_last_crc = 0xB29D;
			emu_call();
			return;
	}
	f__10E4_0077_0027_A316();
}

/**
 * Decompiled function f__10E4_0053_0024_C35D()
 *
 * @name f__10E4_0053_0024_C35D
 * @implements 10E4:0053:0024:C35D ()
 *
 * Called From: 10E4:0030:0048:CEEB
 */
void f__10E4_0053_0024_C35D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x0077);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0072; emu_last_length = 0x0024; emu_last_crc = 0xC35D;
			emu_call();
			return;
	}
	f__10E4_0077_0027_A316();
}

/**
 * Decompiled function f__10E4_0077_0027_A316()
 *
 * @name f__10E4_0077_0027_A316
 * @implements 10E4:0077:0027:A316 ()
 *
 * Called From: 10E4:0077:0024:C35D
 * Called From: 10E4:0077:0027:B29D
 */
void f__10E4_0077_0027_A316()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x009E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0099; emu_last_length = 0x0027; emu_last_crc = 0xA316;
			emu_call();
			return;
	}
	f__10E4_009E_001D_9516();
}

/**
 * Decompiled function f__10E4_009E_001D_9516()
 *
 * @name f__10E4_009E_001D_9516
 * @implements 10E4:009E:001D:9516 ()
 *
 * Called From: 10E4:009E:0027:A316
 */
void f__10E4_009E_001D_9516()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x00BB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x00B6; emu_last_length = 0x001D; emu_last_crc = 0x9516;
			emu_call();
			return;
	}
	f__10E4_00BB_001D_D33A();
}

/**
 * Decompiled function f__10E4_00BB_001D_D33A()
 *
 * @name f__10E4_00BB_001D_D33A
 * @implements 10E4:00BB:001D:D33A ()
 *
 * Called From: 10E4:00BB:001D:9516
 */
void f__10E4_00BB_001D_D33A()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x00D8);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x00D3; emu_last_length = 0x001D; emu_last_crc = 0xD33A;
			emu_call();
			return;
	}
	f__10E4_00D8_001B_24DE();
}

/**
 * Decompiled function f__10E4_00D8_001B_24DE()
 *
 * @name f__10E4_00D8_001B_24DE
 * @implements 10E4:00D8:001B:24DE ()
 *
 * Called From: 10E4:00D8:001D:D33A
 */
void f__10E4_00D8_001B_24DE()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66A2);
	emu_push(0x00F3);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: f__22A6_0F76_002C_12B6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x00EE; emu_last_length = 0x001B; emu_last_crc = 0x24DE;
			emu_call();
			return;
	}
	f__10E4_00F3_001B_2D55();
}

/**
 * Decompiled function f__10E4_00F3_001B_2D55()
 *
 * @name f__10E4_00F3_001B_2D55
 * @implements 10E4:00F3:001B:2D55 ()
 *
 * Called From: 10E4:00F3:001B:24DE
 */
void f__10E4_00F3_001B_2D55()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66A2);
	emu_push(0x010E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: f__22A6_0F76_002C_12B6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0109; emu_last_length = 0x001B; emu_last_crc = 0x2D55;
			emu_call();
			return;
	}
	f__10E4_010E_0009_D27B();
}

/**
 * Decompiled function f__10E4_010E_0009_D27B()
 *
 * @name f__10E4_010E_0009_D27B
 * @implements 10E4:010E:0009:D27B ()
 *
 * Called From: 10E4:010E:001B:2D55
 */
void f__10E4_010E_0009_D27B()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0117_0015_0AFA()
 *
 * @name f__10E4_0117_0015_0AFA
 * @implements 10E4:0117:0015:0AFA ()
 *
 * Called From: 0972:0E0D:001E:F554
 * Called From: 0AEC:064B:002B:5650
 * Called From: 0AEC:06D7:000D:2797
 * Called From: 0C3A:18B7:0022:BD2E
 * Called From: 0F78:0386:004C:DF26
 * Called From: 1A34:104B:0038:10D5
 */
void f__10E4_0117_0015_0AFA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__10E4_012C_0030_00DF(); return; }
	emu_ip = 0x01AE; emu_last_cs = 0x10E4; emu_last_ip = 0x0129; emu_last_length = 0x0015; emu_last_crc = 0x0AFA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_012C_0030_00DF()
 *
 * @name f__10E4_012C_0030_00DF
 * @implements 10E4:012C:0030:00DF ()
 *
 * Called From: 10E4:0127:0015:0AFA
 */
void f__10E4_012C_0030_00DF()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_01AE_0004_0768(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41C8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01AE; emu_last_cs = 0x10E4; emu_last_ip = 0x0135; emu_last_length = 0x0030; emu_last_crc = 0x00DF; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01AE; emu_last_cs = 0x10E4; emu_last_ip = 0x013C; emu_last_length = 0x0030; emu_last_crc = 0x00DF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_bx.x, 0x20);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_bx.x, 0x20);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x015C); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	f__10E4_015C_0043_6149();
}

/**
 * Decompiled function f__10E4_015C_0043_6149()
 *
 * @name f__10E4_015C_0043_6149
 * @implements 10E4:015C:0043:6149 ()
 *
 * Called From: 10E4:015C:0030:00DF
 */
void f__10E4_015C_0043_6149()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37F2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37F0));
	emu_andw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__10E4_01AE_0004_0768(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_ds, emu_bx.x,  0x37F0), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx.x,  0x37F2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38C8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38C6));
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x2502; f__2502_0165_0027_0314();
	f__10E4_019F_000A_A98B();
}

/**
 * Decompiled function f__10E4_019F_000A_A98B()
 *
 * @name f__10E4_019F_000A_A98B
 * @implements 10E4:019F:000A:A98B ()
 *
 * Called From: 10E4:019F:0043:6149
 */
void f__10E4_019F_000A_A98B()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01A9); f__10E4_0273_0029_4307();
	f__10E4_01A9_0005_1FB4();
}

/**
 * Decompiled function f__10E4_01A9_0005_1FB4()
 *
 * @name f__10E4_01A9_0005_1FB4
 * @implements 10E4:01A9:0005:1FB4 ()
 *
 * Called From: 10E4:01A9:000A:A98B
 */
void f__10E4_01A9_0005_1FB4()
{
	emu_addws(&emu_sp, 0x6);
	f__10E4_01B2_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_01AC_0002_03A4()
 *
 * @name f__10E4_01AC_0002_03A4
 * @implements 10E4:01AC:0002:03A4 ()
 *
 * Called From: 10E4:01B0:0004:0768
 */
void f__10E4_01AC_0002_03A4()
{
	f__10E4_01B2_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_01AE_0004_0768()
 *
 * @name f__10E4_01AE_0004_0768
 * @implements 10E4:01AE:0004:0768 ()
 *
 * Called From: 10E4:012E:0030:00DF
 * Called From: 10E4:0178:0043:6149
 */
void f__10E4_01AE_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__10E4_01AC_0002_03A4(); return;
}

/**
 * Decompiled function f__10E4_01B2_0006_137A()
 *
 * @name f__10E4_01B2_0006_137A
 * @implements 10E4:01B2:0006:137A ()
 *
 * Called From: 10E4:01AC:0002:03A4
 * Called From: 10E4:01AC:0005:1FB4
 */
void f__10E4_01B2_0006_137A()
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

/**
 * Decompiled function f__10E4_01B8_0014_EE14()
 *
 * @name f__10E4_01B8_0014_EE14
 * @implements 10E4:01B8:0014:EE14 ()
 *
 * Called From: 10E4:0301:0017:300B
 * Called From: 10E4:0301:001A:D409
 * Called From: B4DA:0B7C:001C:6313
 */
void f__10E4_01B8_0014_EE14()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10E4_01CC_0003_0574(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__10E4_026F_0004_07E2(); return;
}

/**
 * Decompiled function f__10E4_01C9_0003_05C4()
 *
 * @name f__10E4_01C9_0003_05C4
 * @implements 10E4:01C9:0003:05C4 ()
 *
 * Called From: 10E4:026C:0005:1ACE
 */
void f__10E4_01C9_0003_05C4()
{
	f__10E4_026F_0004_07E2(); return;
}

/**
 * Decompiled function f__10E4_01CC_0003_0574()
 *
 * @name f__10E4_01CC_0003_0574
 * @implements 10E4:01CC:0003:0574 ()
 *
 * Called From: 10E4:01C5:0014:EE14
 */
void f__10E4_01CC_0003_0574()
{
	f__10E4_025E_000C_721C(); return;
}

/**
 * Decompiled function f__10E4_01CF_0005_08B0()
 *
 * @name f__10E4_01CF_0005_08B0
 * @implements 10E4:01CF:0005:08B0 ()
 *
 * Called From: 10E4:0267:000C:721C
 * Called From: 10E4:0267:0021:F5F3
 */
void f__10E4_01CF_0005_08B0()
{
	emu_xorw(&emu_si, emu_si);
	emu_incw(&emu_di);
	f__10E4_01E6_002A_547E(); return;
}

/**
 * Decompiled function f__10E4_01D4_000F_5A86()
 *
 * @name f__10E4_01D4_000F_5A86
 * @implements 10E4:01D4:000F:5A86 ()
 *
 * Called From: 10E4:0207:002A:547E
 * Called From: 10E4:0207:002D:C472
 */
void f__10E4_01D4_000F_5A86()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x2521; f__2521_000F_0022_2292();
	f__10E4_01E3_002D_C472();
}

/**
 * Decompiled function f__10E4_01E3_002D_C472()
 *
 * @name f__10E4_01E3_002D_C472
 * @implements 10E4:01E3:002D:C472 ()
 *
 * Called From: 10E4:01E3:000F:5A86
 */
void f__10E4_01E3_002D_C472()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0209_0007_04D0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01F5; emu_last_length = 0x002D; emu_last_crc = 0xC472; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01FE; emu_last_length = 0x002D; emu_last_crc = 0xC472; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_01D4_000F_5A86(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0249_0021_F5F3(); return; }
	emu_ip = 0x0222; emu_last_cs = 0x10E4; emu_last_ip = 0x020E; emu_last_length = 0x002D; emu_last_crc = 0xC472; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_01E6_002A_547E()
 *
 * @name f__10E4_01E6_002A_547E
 * @implements 10E4:01E6:002A:547E ()
 *
 * Called From: 10E4:01D2:0005:08B0
 */
void f__10E4_01E6_002A_547E()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01E9; emu_last_length = 0x002A; emu_last_crc = 0x547E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01F5; emu_last_length = 0x002A; emu_last_crc = 0x547E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01FE; emu_last_length = 0x002A; emu_last_crc = 0x547E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_01D4_000F_5A86(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x020C; emu_last_length = 0x002A; emu_last_crc = 0x547E; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0222; emu_last_cs = 0x10E4; emu_last_ip = 0x020E; emu_last_length = 0x002A; emu_last_crc = 0x547E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0209_0007_04D0()
 *
 * @name f__10E4_0209_0007_04D0
 * @implements 10E4:0209:0007:04D0 ()
 *
 * Called From: 10E4:01E9:002D:C472
 */
void f__10E4_0209_0007_04D0()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x020C; emu_last_length = 0x0007; emu_last_crc = 0x04D0; emu_call(); return; } // Jump does not resolve
	f__10E4_0222_0048_AB83(); return;
}

/**
 * Decompiled function f__10E4_0210_000F_1A86()
 *
 * @name f__10E4_0210_000F_1A86
 * @implements 10E4:0210:000F:1A86 ()
 *
 * Called From: 10E4:0247:0048:AB83
 * Called From: 10E4:0247:004B:2F80
 */
void f__10E4_0210_000F_1A86()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x021F); emu_cs = 0x2521; f__2521_000F_0022_2292();
	f__10E4_021F_004B_2F80();
}

/**
 * Decompiled function f__10E4_021F_004B_2F80()
 *
 * @name f__10E4_021F_004B_2F80
 * @implements 10E4:021F:004B:2F80 ()
 *
 * Called From: 10E4:021F:000F:1A86
 */
void f__10E4_021F_004B_2F80()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (emu_flags.zf) { f__10E4_0249_0021_F5F3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x0235; emu_last_length = 0x004B; emu_last_crc = 0x2F80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x023E; emu_last_length = 0x004B; emu_last_crc = 0x2F80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_0210_000F_1A86(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x025E; emu_last_cs = 0x10E4; emu_last_ip = 0x0250; emu_last_length = 0x004B; emu_last_crc = 0x2F80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x026A; emu_last_cs = 0x10E4; emu_last_ip = 0x0265; emu_last_length = 0x004B; emu_last_crc = 0x2F80; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x01CF; emu_last_cs = 0x10E4; emu_last_ip = 0x0267; emu_last_length = 0x004B; emu_last_crc = 0x2F80; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0222_0048_AB83()
 *
 * @name f__10E4_0222_0048_AB83
 * @implements 10E4:0222:0048:AB83 ()
 *
 * Called From: 10E4:020E:0007:04D0
 */
void f__10E4_0222_0048_AB83()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x20);
	if (emu_flags.zf) { f__10E4_0249_0021_F5F3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x0235; emu_last_length = 0x0048; emu_last_crc = 0xAB83; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x023E; emu_last_length = 0x0048; emu_last_crc = 0xAB83; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_0210_000F_1A86(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x025E; emu_last_cs = 0x10E4; emu_last_ip = 0x0250; emu_last_length = 0x0048; emu_last_crc = 0xAB83; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x026A; emu_last_cs = 0x10E4; emu_last_ip = 0x0265; emu_last_length = 0x0048; emu_last_crc = 0xAB83; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x01CF; emu_last_cs = 0x10E4; emu_last_ip = 0x0267; emu_last_length = 0x0048; emu_last_crc = 0xAB83; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0249_0021_F5F3()
 *
 * @name f__10E4_0249_0021_F5F3
 * @implements 10E4:0249:0021:F5F3 ()
 *
 * Called From: 10E4:020C:002D:C472
 * Called From: 10E4:0229:004B:2F80
 * Called From: 10E4:0229:0048:AB83
 */
void f__10E4_0249_0021_F5F3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__10E4_025E_000C_721C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x026A; emu_last_cs = 0x10E4; emu_last_ip = 0x0265; emu_last_length = 0x0021; emu_last_crc = 0xF5F3; emu_call(); return; } // Jump does not resolve
	f__10E4_01CF_0005_08B0(); return;
}

/**
 * Decompiled function f__10E4_025E_000C_721C()
 *
 * @name f__10E4_025E_000C_721C
 * @implements 10E4:025E:000C:721C ()
 *
 * Called From: 10E4:01CC:0003:0574
 * Called From: 10E4:0250:0021:F5F3
 */
void f__10E4_025E_000C_721C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__10E4_026A_0005_1ACE(); return; }
	f__10E4_01CF_0005_08B0(); return;
}

/**
 * Decompiled function f__10E4_026A_0005_1ACE()
 *
 * @name f__10E4_026A_0005_1ACE
 * @implements 10E4:026A:0005:1ACE ()
 *
 * Called From: 10E4:0265:000C:721C
 */
void f__10E4_026A_0005_1ACE()
{
	emu_movw(&emu_ax.x, emu_di);
	f__10E4_01C9_0003_05C4(); return;
}

/**
 * Decompiled function f__10E4_026F_0004_07E2()
 *
 * @name f__10E4_026F_0004_07E2
 * @implements 10E4:026F:0004:07E2 ()
 *
 * Called From: 10E4:01C9:0014:EE14
 * Called From: 10E4:01C9:0003:05C4
 */
void f__10E4_026F_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0273_0029_4307()
 *
 * @name f__10E4_0273_0029_4307
 * @implements 10E4:0273:0029:4307 ()
 *
 * Called From: 10E4:01A6:000A:A98B
 * Called From: 1423:0345:0008:73D0
 */
void f__10E4_0273_0029_4307()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_bp + 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x87D8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x029C); emu_cs = 0x01F7; f__01F7_37AF_001F_B961();
	f__10E4_029C_0008_F3DE();
}

/**
 * Decompiled function f__10E4_029C_0008_F3DE()
 *
 * @name f__10E4_029C_0008_F3DE
 * @implements 10E4:029C:0008:F3DE ()
 *
 * Called From: 10E4:029C:0029:4307
 */
void f__10E4_029C_0008_F3DE()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__10E4_02A4_0008_566A();
}

/**
 * Decompiled function f__10E4_02A4_0008_566A()
 *
 * @name f__10E4_02A4_0008_566A
 * @implements 10E4:02A4:0008:566A ()
 *
 * Called From: 10E4:02A4:0008:F3DE
 */
void f__10E4_02A4_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02AC); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_02AC_001F_5AE1();
}

/**
 * Decompiled function f__10E4_02AC_001F_5AE1()
 *
 * @name f__10E4_02AC_001F_5AE1
 * @implements 10E4:02AC:001F:5AE1 ()
 *
 * Called From: 10E4:02AC:0008:566A
 */
void f__10E4_02AC_001F_5AE1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x02CB); f__10E4_1EF1_0040_E33D();
	f__10E4_02CB_000C_5CF9();
}

/**
 * Decompiled function f__10E4_02CB_000C_5CF9()
 *
 * @name f__10E4_02CB_000C_5CF9
 * @implements 10E4:02CB:000C:5CF9 ()
 *
 * Called From: 10E4:02CB:001F:5AE1
 */
void f__10E4_02CB_000C_5CF9()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_02D7_0013_645B();
}

/**
 * Decompiled function f__10E4_02D7_0013_645B()
 *
 * @name f__10E4_02D7_0013_645B
 * @implements 10E4:02D7:0013:645B ()
 *
 * Called From: 10E4:02D7:000C:5CF9
 */
void f__10E4_02D7_0013_645B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (emu_flags.zf) { f__10E4_02EA_001A_D409(); return; }
	emu_movw(&emu_ax.x, 0x7);
	f__10E4_02ED_0017_300B(); return;
}

/**
 * Decompiled function f__10E4_02EA_001A_D409()
 *
 * @name f__10E4_02EA_001A_D409
 * @implements 10E4:02EA:001A:D409 ()
 *
 * Called From: 10E4:02E3:0013:645B
 */
void f__10E4_02EA_001A_D409()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_subws(&emu_dx.x, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x87D8);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0304); f__10E4_01B8_0014_EE14();
	f__10E4_0304_000E_929C();
}

/**
 * Decompiled function f__10E4_02ED_0017_300B()
 *
 * @name f__10E4_02ED_0017_300B
 * @implements 10E4:02ED:0017:300B ()
 *
 * Called From: 10E4:02E8:0013:645B
 */
void f__10E4_02ED_0017_300B()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_subws(&emu_dx.x, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x87D8);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0304); f__10E4_01B8_0014_EE14();
	f__10E4_0304_000E_929C();
}

/**
 * Decompiled function f__10E4_0304_000E_929C()
 *
 * @name f__10E4_0304_000E_929C
 * @implements 10E4:0304:000E:929C ()
 *
 * Called From: 10E4:0304:0017:300B
 * Called From: 10E4:0304:001A:D409
 */
void f__10E4_0304_000E_929C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0x3);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0312_001A_0A6A(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__10E4_0315_0017_EC68(); return;
}

/**
 * Decompiled function f__10E4_0312_001A_0A6A()
 *
 * @name f__10E4_0312_001A_0A6A
 * @implements 10E4:0312:001A:0A6A ()
 *
 * Called From: 10E4:030C:000E:929C
 */
void f__10E4_0312_001A_0A6A()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_movw(&emu_di, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x12);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4078), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_032C_001C_93A4();
}

/**
 * Decompiled function f__10E4_0315_0017_EC68()
 *
 * @name f__10E4_0315_0017_EC68
 * @implements 10E4:0315:0017:EC68 ()
 *
 * Called From: 10E4:0310:000E:929C
 */
void f__10E4_0315_0017_EC68()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, 0x12);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4078), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_032C_001C_93A4();
}

/**
 * Decompiled function f__10E4_032C_001C_93A4()
 *
 * @name f__10E4_032C_001C_93A4
 * @implements 10E4:032C:001C:93A4 ()
 *
 * Called From: 10E4:032C:001A:0A6A
 * Called From: 10E4:032C:0017:EC68
 */
void f__10E4_032C_001C_93A4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3600));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3602));
	if (!emu_flags.zf) { emu_ip = 0x0375; emu_last_cs = 0x10E4; emu_last_ip = 0x0334; emu_last_length = 0x001C; emu_last_crc = 0x93A4; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66E6);
	emu_push(0x0348);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_5409(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0343; emu_last_length = 0x001C; emu_last_crc = 0x93A4;
			emu_call();
			return;
	}
	f__10E4_0348_0009_815A();
}

/**
 * Decompiled function f__10E4_0348_0009_815A()
 *
 * @name f__10E4_0348_0009_815A
 * @implements 10E4:0348:0009:815A ()
 *
 * Called From: 10E4:0348:001C:93A4
 */
void f__10E4_0348_0009_815A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x23E1; f__23E1_0334_000B_B6F7();
	f__10E4_0351_0016_656D();
}

/**
 * Decompiled function f__10E4_0351_0016_656D()
 *
 * @name f__10E4_0351_0016_656D
 * @implements 10E4:0351:0016:656D ()
 *
 * Called From: 10E4:0351:0009:815A
 */
void f__10E4_0351_0016_656D()
{
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0373; emu_last_cs = 0x10E4; emu_last_ip = 0x0353; emu_last_length = 0x0016; emu_last_crc = 0x656D; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__10E4_035B_000C_FB46(); return; }
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.cf) { emu_ip = 0x0373; emu_last_cs = 0x10E4; emu_last_ip = 0x0359; emu_last_length = 0x0016; emu_last_crc = 0x656D; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x23E1; emu_ip = 0x036B; emu_last_cs = 0x10E4; emu_last_ip = 0x0362; emu_last_length = 0x0016; emu_last_crc = 0x656D; emu_call(); // Jump does not resolve
	f__10E4_0367_000C_16F7();
}

/**
 * Decompiled function f__10E4_035B_000C_FB46()
 *
 * @name f__10E4_035B_000C_FB46
 * @implements 10E4:035B:000C:FB46 ()
 *
 * Called From: 10E4:0355:0016:656D
 */
void f__10E4_035B_000C_FB46()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__10E4_0367_000C_16F7();
}

/**
 * Decompiled function f__10E4_0367_000C_16F7()
 *
 * @name f__10E4_0367_000C_16F7
 * @implements 10E4:0367:000C:16F7 ()
 *
 * Called From: 10E4:0367:000C:FB46
 */
void f__10E4_0367_000C_16F7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3602), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3600), emu_ax.x);
	f__10E4_0375_002B_42E1(); return;
}

/**
 * Decompiled function f__10E4_0375_002B_42E1()
 *
 * @name f__10E4_0375_002B_42E1
 * @implements 10E4:0375:002B:42E1 ()
 *
 * Called From: 10E4:0371:000C:16F7
 */
void f__10E4_0375_002B_42E1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3600));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3602));
	if (emu_flags.zf) { emu_ip = 0x03A3; emu_last_cs = 0x10E4; emu_last_ip = 0x037C; emu_last_length = 0x002B; emu_last_crc = 0x42E1; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3600));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C2);
	emu_push(0x03A0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_C8B8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x039B; emu_last_length = 0x002B; emu_last_crc = 0x42E1;
			emu_call();
			return;
	}
	f__10E4_03A0_0014_2CDC();
}

/**
 * Decompiled function f__10E4_03A0_0014_2CDC()
 *
 * @name f__10E4_03A0_0014_2CDC
 * @implements 10E4:03A0:0014:2CDC ()
 *
 * Called From: 10E4:03A0:002B:42E1
 */
void f__10E4_03A0_0014_2CDC()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03B4); f__10E4_057F_0052_B1B7();
	f__10E4_03B4_0038_B3E3();
}

/**
 * Decompiled function f__10E4_03B4_0038_B3E3()
 *
 * @name f__10E4_03B4_0038_B3E3
 * @implements 10E4:03B4:0038:B3E3 ()
 *
 * Called From: 10E4:03B4:0014:2CDC
 */
void f__10E4_03B4_0038_B3E3()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (emu_flags.zf) { f__10E4_040C_0023_1254(); return; }
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_03EC_0020_A302();
}

/**
 * Decompiled function f__10E4_03EC_0020_A302()
 *
 * @name f__10E4_03EC_0020_A302
 * @implements 10E4:03EC:0020:A302 ()
 *
 * Called From: 10E4:03EC:0038:B3E3
 */
void f__10E4_03EC_0020_A302()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_subw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_subw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_addw(&emu_ax.x, 0x5);
	f__10E4_0425_000A_34DE(); return;
}

/**
 * Decompiled function f__10E4_040C_0023_1254()
 *
 * @name f__10E4_040C_0023_1254
 * @implements 10E4:040C:0023:1254 ()
 *
 * Called From: 10E4:03BB:0038:B3E3
 */
void f__10E4_040C_0023_1254()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_subw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_subw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_EC47();
	f__10E4_042F_002F_ADBD();
}

/**
 * Decompiled function f__10E4_0425_000A_34DE()
 *
 * @name f__10E4_0425_000A_34DE
 * @implements 10E4:0425:000A:34DE ()
 *
 * Called From: 10E4:040A:0020:A302
 */
void f__10E4_0425_000A_34DE()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_EC47();
	f__10E4_042F_002F_ADBD();
}

/**
 * Decompiled function f__10E4_042F_002F_ADBD()
 *
 * @name f__10E4_042F_002F_ADBD
 * @implements 10E4:042F:002F:ADBD ()
 *
 * Called From: 10E4:042F:000A:34DE
 * Called From: 10E4:042F:0023:1254
 */
void f__10E4_042F_002F_ADBD()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D59), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CD), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66CB), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x87D8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x045E); emu_cs = 0x2BC2; f__2BC2_000A_0044_4A53();
	f__10E4_045E_0010_1B8C();
}

/**
 * Decompiled function f__10E4_045E_0010_1B8C()
 *
 * @name f__10E4_045E_0010_1B8C
 * @implements 10E4:045E:0010:1B8C ()
 *
 * Called From: 10E4:045E:002F:ADBD
 */
void f__10E4_045E_0010_1B8C()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__10E4_046E_0007_2EFE();
}

/**
 * Decompiled function f__10E4_046E_0007_2EFE()
 *
 * @name f__10E4_046E_0007_2EFE
 * @implements 10E4:046E:0007:2EFE ()
 *
 * Called From: 10E4:046E:0010:1B8C
 */
void f__10E4_046E_0007_2EFE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0475); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__10E4_0475_000E_35BF();
}

/**
 * Decompiled function f__10E4_0475_000E_35BF()
 *
 * @name f__10E4_0475_000E_35BF
 * @implements 10E4:0475:000E:35BF ()
 *
 * Called From: 10E4:0475:0007:2EFE
 */
void f__10E4_0475_000E_35BF()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x1E);
	f__10E4_0488_000E_EF42(); return;
}

/**
 * Decompiled function f__10E4_0483_0005_17FC()
 *
 * @name f__10E4_0483_0005_17FC
 * @implements 10E4:0483:0005:17FC ()
 *
 * Called From: 10E4:048F:000E:EF42
 */
void f__10E4_0483_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0642; f__0642_0559_0027_9047();
	f__10E4_0488_000E_EF42();
}

/**
 * Decompiled function f__10E4_0488_000E_EF42()
 *
 * @name f__10E4_0488_000E_EF42
 * @implements 10E4:0488:000E:EF42 ()
 *
 * Called From: 10E4:0481:000E:35BF
 * Called From: 10E4:0488:0005:17FC
 */
void f__10E4_0488_000E_EF42()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__10E4_0483_0005_17FC(); return; }
	emu_push(emu_cs); emu_push(0x0496); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	f__10E4_0496_0005_17FC();
}

/**
 * Decompiled function f__10E4_0496_0005_17FC()
 *
 * @name f__10E4_0496_0005_17FC
 * @implements 10E4:0496:0005:17FC ()
 *
 * Called From: 10E4:0496:000E:EF42
 */
void f__10E4_0496_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x049B); emu_cs = 0x0642; f__0642_0559_0027_9047();
	f__10E4_049B_0005_1F2A();
}

/**
 * Decompiled function f__10E4_049B_0005_1F2A()
 *
 * @name f__10E4_049B_0005_1F2A
 * @implements 10E4:049B:0005:1F2A ()
 *
 * Called From: 10E4:049B:0005:17FC
 */
void f__10E4_049B_0005_1F2A()
{
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x29E8; f__29E8_07FA_0020_41C7();
	f__10E4_04A0_0019_8F63();
}

/**
 * Decompiled function f__10E4_04A0_0019_8F63()
 *
 * @name f__10E4_04A0_0019_8F63
 * @implements 10E4:04A0:0019:8F63 ()
 *
 * Called From: 10E4:04A0:0005:1F2A
 */
void f__10E4_04A0_0019_8F63()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0496; emu_last_cs = 0x10E4; emu_last_ip = 0x04A7; emu_last_length = 0x0019; emu_last_crc = 0x8F63; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x800);
	if (!emu_flags.zf) { emu_ip = 0x0496; emu_last_cs = 0x10E4; emu_last_ip = 0x04AE; emu_last_length = 0x0019; emu_last_crc = 0x8F63; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x841);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B9); emu_cs = 0x29E8; f__29E8_0A4A_0040_4DD0();
	f__10E4_04B9_0006_079E();
}

/**
 * Decompiled function f__10E4_04B9_0006_079E()
 *
 * @name f__10E4_04B9_0006_079E
 * @implements 10E4:04B9:0006:079E ()
 *
 * Called From: 10E4:04B9:0019:8F63
 */
void f__10E4_04B9_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x04BF); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__10E4_04BF_0023_4294();
}

/**
 * Decompiled function f__10E4_04BF_0023_4294()
 *
 * @name f__10E4_04BF_0023_4294
 * @implements 10E4:04BF:0023:4294 ()
 *
 * Called From: 10E4:04BF:0006:079E
 */
void f__10E4_04BF_0023_4294()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (emu_flags.zf) { f__10E4_04E2_0023_02DC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_addw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_subw(&emu_ax.x, 0x5);
	f__10E4_04FB_000A_34DE(); return;
}

/**
 * Decompiled function f__10E4_04E2_0023_02DC()
 *
 * @name f__10E4_04E2_0023_02DC
 * @implements 10E4:04E2:0023:02DC ()
 *
 * Called From: 10E4:04C3:0023:4294
 */
void f__10E4_04E2_0023_02DC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_addw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_EC47();
	f__10E4_0505_002E_A169();
}

/**
 * Decompiled function f__10E4_04FB_000A_34DE()
 *
 * @name f__10E4_04FB_000A_34DE
 * @implements 10E4:04FB:000A:34DE ()
 *
 * Called From: 10E4:04E0:0023:4294
 */
void f__10E4_04FB_000A_34DE()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_EC47();
	f__10E4_0505_002E_A169();
}

/**
 * Decompiled function f__10E4_0505_002E_A169()
 *
 * @name f__10E4_0505_002E_A169
 * @implements 10E4:0505:002E:A169 ()
 *
 * Called From: 10E4:0505:000A:34DE
 * Called From: 10E4:0505:0023:02DC
 */
void f__10E4_0505_002E_A169()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3600));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3602));
	if (emu_flags.zf) { emu_ip = 0x0536; emu_last_cs = 0x10E4; emu_last_ip = 0x050F; emu_last_length = 0x002E; emu_last_crc = 0xA169; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3600));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x662E);
	emu_push(0x0533);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_D667(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x052E; emu_last_length = 0x002E; emu_last_crc = 0xA169;
			emu_call();
			return;
	}
	f__10E4_0533_000B_FA71();
}

/**
 * Decompiled function f__10E4_0533_000B_FA71()
 *
 * @name f__10E4_0533_000B_FA71
 * @implements 10E4:0533:000B:FA71 ()
 *
 * Called From: 10E4:0533:002E:A169
 */
void f__10E4_0533_000B_FA71()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x053E); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_053E_0012_D08E();
}

/**
 * Decompiled function f__10E4_053E_0012_D08E()
 *
 * @name f__10E4_053E_0012_D08E
 * @implements 10E4:053E:0012:D08E ()
 *
 * Called From: 10E4:053E:000B:FA71
 */
void f__10E4_053E_0012_D08E()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0560; emu_last_cs = 0x10E4; emu_last_ip = 0x0541; emu_last_length = 0x0012; emu_last_crc = 0xD08E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3600));
	emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	f__10E4_0550_0010_D125();
}

/**
 * Decompiled function f__10E4_0550_0010_D125()
 *
 * @name f__10E4_0550_0010_D125
 * @implements 10E4:0550:0010:D125 ()
 *
 * Called From: 10E4:0550:0012:D08E
 */
void f__10E4_0550_0010_D125()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3602), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3600), 0x0);
	f__10E4_0566_0008_EBEA(); return;
}

/**
 * Decompiled function f__10E4_0566_0008_EBEA()
 *
 * @name f__10E4_0566_0008_EBEA
 * @implements 10E4:0566:0008:EBEA ()
 *
 * Called From: 10E4:055E:0010:D125
 */
void f__10E4_0566_0008_EBEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_056E_0006_027E();
}

/**
 * Decompiled function f__10E4_056E_0006_027E()
 *
 * @name f__10E4_056E_0006_027E
 * @implements 10E4:056E:0006:027E ()
 *
 * Called From: 10E4:056E:0008:EBEA
 */
void f__10E4_056E_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x0574); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__10E4_0574_0005_114C();
}

/**
 * Decompiled function f__10E4_0574_0005_114C()
 *
 * @name f__10E4_0574_0005_114C
 * @implements 10E4:0574:0005:114C ()
 *
 * Called From: 10E4:0574:0006:027E
 */
void f__10E4_0574_0005_114C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10E4_0579_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_0579_0006_137A()
 *
 * @name f__10E4_0579_0006_137A
 * @implements 10E4:0579:0006:137A ()
 *
 * Called From: 10E4:0577:0005:114C
 */
void f__10E4_0579_0006_137A()
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

/**
 * Decompiled function f__10E4_057F_0052_B1B7()
 *
 * @name f__10E4_057F_0052_B1B7
 * @implements 10E4:057F:0052:B1B7 ()
 *
 * Called From: 10E4:03B1:0014:2CDC
 * Called From: 10E4:12A0:0016:9D0F
 * Called From: B4B8:2049:0012:1E3E
 * Called From: B4F2:0896:0012:8AFE
 * Called From: B4F2:1029:0010:4094
 */
void f__10E4_057F_0052_B1B7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4066));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__10E4_05D1_0025_4766(); return; }
	emu_movw(&emu_ax.x, 0x2);
	f__10E4_05D3_0023_4D06(); return;
}

/**
 * Decompiled function f__10E4_05D1_0025_4766()
 *
 * @name f__10E4_05D1_0025_4766
 * @implements 10E4:05D1:0025:4766 ()
 *
 * Called From: 10E4:05CA:0052:B1B7
 */
void f__10E4_05D1_0025_4766()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_05F9_0019_B2BD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x2B6C; emu_ip = 0x078D; emu_last_cs = 0x10E4; emu_last_ip = 0x05F1; emu_last_length = 0x0025; emu_last_crc = 0x4766; emu_call(); // Jump does not resolve
	f__10E4_05F6_001C_82B3();
}

/**
 * Decompiled function f__10E4_05D3_0023_4D06()
 *
 * @name f__10E4_05D3_0023_4D06
 * @implements 10E4:05D3:0023:4D06 ()
 *
 * Called From: 10E4:05CF:0052:B1B7
 */
void f__10E4_05D3_0023_4D06()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_05F9_0019_B2BD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__10E4_05F6_001C_82B3();
}

/**
 * Decompiled function f__10E4_05F6_001C_82B3()
 *
 * @name f__10E4_05F6_001C_82B3
 * @implements 10E4:05F6:001C:82B3 ()
 *
 * Called From: 10E4:05F6:0023:4D06
 */
void f__10E4_05F6_001C_82B3()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0612); f__10E4_0008_0048_CEEB();
	f__10E4_0612_004E_7767();
}

/**
 * Decompiled function f__10E4_05F9_0019_B2BD()
 *
 * @name f__10E4_05F9_0019_B2BD
 * @implements 10E4:05F9:0019:B2BD ()
 *
 * Called From: 10E4:05DB:0025:4766
 * Called From: 10E4:05DB:0023:4D06
 */
void f__10E4_05F9_0019_B2BD()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0612); f__10E4_0008_0048_CEEB();
	f__10E4_0612_004E_7767();
}

/**
 * Decompiled function f__10E4_0612_004E_7767()
 *
 * @name f__10E4_0612_004E_7767
 * @implements 10E4:0612:004E:7767 ()
 *
 * Called From: 10E4:0612:0019:B2BD
 * Called From: 10E4:0612:001C:82B3
 */
void f__10E4_0612_004E_7767()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x362C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x362E));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_0663_000C_7C5D(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0660); f__10E4_0008_0048_CEEB();
	f__10E4_0660_000F_7C2C();
}

/**
 * Decompiled function f__10E4_0660_000F_7C2C()
 *
 * @name f__10E4_0660_000F_7C2C
 * @implements 10E4:0660:000F:7C2C ()
 *
 * Called From: 10E4:0660:004E:7767
 */
void f__10E4_0660_000F_7C2C()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_066F_0006_137A(); return; }
	emu_push(emu_cs); emu_push(0x066F); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	f__10E4_066F_0006_137A();
}

/**
 * Decompiled function f__10E4_0663_000C_7C5D()
 *
 * @name f__10E4_0663_000C_7C5D
 * @implements 10E4:0663:000C:7C5D ()
 *
 * Called From: 10E4:0630:004E:7767
 */
void f__10E4_0663_000C_7C5D()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_066F_0006_137A(); return; }
	emu_push(emu_cs); emu_push(0x066F); emu_cs = 0x2B6C; emu_ip = 0x0901; emu_last_cs = 0x10E4; emu_last_ip = 0x066A; emu_last_length = 0x000C; emu_last_crc = 0x7C5D; emu_call(); // Jump does not resolve
	f__10E4_066F_0006_137A();
}

/**
 * Decompiled function f__10E4_066F_0006_137A()
 *
 * @name f__10E4_066F_0006_137A
 * @implements 10E4:066F:0006:137A ()
 *
 * Called From: 10E4:0668:000C:7C5D
 * Called From: 10E4:0668:000F:7C2C
 * Called From: 10E4:066F:000F:7C2C
 */
void f__10E4_066F_0006_137A()
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

/**
 * Decompiled function f__10E4_0675_0026_5758()
 *
 * @name f__10E4_0675_0026_5758
 * @implements 10E4:0675:0026:5758 ()
 *
 * Called From: 0642:03B6:000D:9D1E
 * Called From: 10E4:2252:0009:4BA8
 * Called From: 10E4:2252:000C:C3A3
 * Called From: 10E4:2280:000D:F8EE
 * Called From: B495:0067:000C:BD15
 * Called From: B495:00AC:0014:97D3
 * Called From: B495:1587:000D:9D07
 */
void f__10E4_0675_0026_5758()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3642));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3640));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_069B_001C_BD7D(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0692_0009_75F7(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_069B_001C_BD7D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_069B_001C_BD7D(); return; }
	f__10E4_09A5_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_0692_0009_75F7()
 *
 * @name f__10E4_0692_0009_75F7
 * @implements 10E4:0692:0009:75F7 ()
 *
 * Called From: 10E4:068A:0026:5758
 */
void f__10E4_0692_0009_75F7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x069B; emu_last_cs = 0x10E4; emu_last_ip = 0x0696; emu_last_length = 0x0009; emu_last_crc = 0x75F7; emu_call(); return; } // Jump does not resolve
	f__10E4_09A5_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_069B_001C_BD7D()
 *
 * @name f__10E4_069B_001C_BD7D
 * @implements 10E4:069B:001C:BD7D ()
 *
 * Called From: 10E4:0688:0026:5758
 * Called From: 10E4:0690:0026:5758
 * Called From: 10E4:0696:0026:5758
 */
void f__10E4_069B_001C_BD7D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x1);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3642), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3640), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x06B7); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__10E4_06B7_003E_22F6();
}

/**
 * Decompiled function f__10E4_06B7_003E_22F6()
 *
 * @name f__10E4_06B7_003E_22F6
 * @implements 10E4:06B7:003E:22F6 ()
 *
 * Called From: 10E4:06B7:001C:BD7D
 */
void f__10E4_06B7_003E_22F6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x2);
	if (!emu_flags.zf) { f__10E4_06D8_001D_CA3F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x363C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_06F5_0009_776B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	if (!emu_flags.zf) { emu_ip = 0x06F5; emu_last_cs = 0x10E4; emu_last_ip = 0x06E9; emu_last_length = 0x003E; emu_last_crc = 0x22F6; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x06F5; emu_last_cs = 0x10E4; emu_last_ip = 0x06F0; emu_last_length = 0x003E; emu_last_crc = 0x22F6; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x09A5; emu_last_cs = 0x10E4; emu_last_ip = 0x06F2; emu_last_length = 0x003E; emu_last_crc = 0x22F6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_06D8_001D_CA3F()
 *
 * @name f__10E4_06D8_001D_CA3F
 * @implements 10E4:06D8:001D:CA3F ()
 *
 * Called From: 10E4:06C2:003E:22F6
 */
void f__10E4_06D8_001D_CA3F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_06F5_0009_776B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	if (!emu_flags.zf) { f__10E4_06F5_0009_776B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!emu_flags.zf) { f__10E4_06F5_0009_776B(); return; }
	f__10E4_09A5_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_06F5_0009_776B()
 *
 * @name f__10E4_06F5_0009_776B
 * @implements 10E4:06F5:0009:776B ()
 *
 * Called From: 10E4:06DC:003E:22F6
 * Called From: 10E4:06DC:001D:CA3F
 * Called From: 10E4:06E9:001D:CA3F
 * Called From: 10E4:06F0:001D:CA3F
 */
void f__10E4_06F5_0009_776B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_06FE_000D_71F5();
}

/**
 * Decompiled function f__10E4_06FE_000D_71F5()
 *
 * @name f__10E4_06FE_000D_71F5
 * @implements 10E4:06FE:000D:71F5 ()
 *
 * Called From: 10E4:06FE:0009:776B
 */
void f__10E4_06FE_000D_71F5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x070B); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_070B_002B_739A();
}

/**
 * Decompiled function f__10E4_070B_002B_739A()
 *
 * @name f__10E4_070B_002B_739A
 * @implements 10E4:070B:002B:739A ()
 *
 * Called From: 10E4:070B:000D:71F5
 */
void f__10E4_070B_002B_739A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_074E_0021_3EC0(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_si, emu_cx.l);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__10E4_072B_000B_D2EE(); return; }
	emu_movw(&emu_si, 0x1);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0736_000E_64A6(); return; }
	emu_movw(&emu_ax.x, 0x80);
	emu_ip = 0x0738; emu_last_cs = 0x10E4; emu_last_ip = 0x0734; emu_last_length = 0x002B; emu_last_crc = 0x739A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_072B_000B_D2EE()
 *
 * @name f__10E4_072B_000B_D2EE
 * @implements 10E4:072B:000B:D2EE ()
 *
 * Called From: 10E4:0726:002B:739A
 */
void f__10E4_072B_000B_D2EE()
{
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0736_000E_64A6(); return; }
	emu_movw(&emu_ax.x, 0x80);
	emu_ip = 0x0738; emu_last_cs = 0x10E4; emu_last_ip = 0x0734; emu_last_length = 0x000B; emu_last_crc = 0xD2EE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0736_000E_64A6()
 *
 * @name f__10E4_0736_000E_64A6
 * @implements 10E4:0736:000E:64A6 ()
 *
 * Called From: 10E4:072F:000B:D2EE
 * Called From: 10E4:072F:002B:739A
 */
void f__10E4_0736_000E_64A6()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x80);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0744_000A_5473(); return; }
	emu_movw(&emu_ax.x, 0xFF80);
	emu_ip = 0x0746; emu_last_cs = 0x10E4; emu_last_ip = 0x0742; emu_last_length = 0x000E; emu_last_crc = 0x64A6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0744_000A_5473()
 *
 * @name f__10E4_0744_000A_5473
 * @implements 10E4:0744:000A:5473 ()
 *
 * Called From: 10E4:073D:000E:64A6
 */
void f__10E4_0744_000A_5473()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x363E), emu_si);
	f__10E4_0754_001B_BF5A(); return;
}

/**
 * Decompiled function f__10E4_074E_0021_3EC0()
 *
 * @name f__10E4_074E_0021_3EC0
 * @implements 10E4:074E:0021:3EC0 ()
 *
 * Called From: 10E4:071E:002B:739A
 */
void f__10E4_074E_0021_3EC0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_0779_0064_331E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x7);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0766; emu_last_cs = 0x10E4; emu_last_ip = 0x075D; emu_last_length = 0x0021; emu_last_crc = 0x3EC0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF9);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0779; emu_last_cs = 0x10E4; emu_last_ip = 0x0764; emu_last_length = 0x0021; emu_last_crc = 0x3EC0; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x076F; emu_last_cs = 0x10E4; emu_last_ip = 0x0768; emu_last_length = 0x0021; emu_last_crc = 0x3EC0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x34);
	emu_ip = 0x0772; emu_last_cs = 0x10E4; emu_last_ip = 0x076D; emu_last_length = 0x0021; emu_last_crc = 0x3EC0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0754_001B_BF5A()
 *
 * @name f__10E4_0754_001B_BF5A
 * @implements 10E4:0754:001B:BF5A ()
 *
 * Called From: 10E4:074C:000A:5473
 */
void f__10E4_0754_001B_BF5A()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0779; emu_last_cs = 0x10E4; emu_last_ip = 0x0756; emu_last_length = 0x001B; emu_last_crc = 0xBF5A; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x7);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0766_0009_C9AA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF9);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0779_0064_331E(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_076F_0009_4677(); return; }
	emu_movw(&emu_ax.x, 0x34);
	emu_ip = 0x0772; emu_last_cs = 0x10E4; emu_last_ip = 0x076D; emu_last_length = 0x001B; emu_last_crc = 0xBF5A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0766_0009_C9AA()
 *
 * @name f__10E4_0766_0009_C9AA
 * @implements 10E4:0766:0009:C9AA ()
 *
 * Called From: 10E4:075D:001B:BF5A
 */
void f__10E4_0766_0009_C9AA()
{
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x076F; emu_last_cs = 0x10E4; emu_last_ip = 0x0768; emu_last_length = 0x0009; emu_last_crc = 0xC9AA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x34);
	f__10E4_0772_0006_0376(); return;
}

/**
 * Decompiled function f__10E4_076F_0009_4677()
 *
 * @name f__10E4_076F_0009_4677
 * @implements 10E4:076F:0009:4677 ()
 *
 * Called From: 10E4:0768:001B:BF5A
 */
void f__10E4_076F_0009_4677()
{
	emu_movw(&emu_ax.x, 0x35);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0778); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	f__10E4_0778_0065_383E();
}

/**
 * Decompiled function f__10E4_0772_0006_0376()
 *
 * @name f__10E4_0772_0006_0376
 * @implements 10E4:0772:0006:0376 ()
 *
 * Called From: 10E4:076D:0009:C9AA
 */
void f__10E4_0772_0006_0376()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0778); emu_cs = 0x1DD7; f__1DD7_0477_000E_E978();
	f__10E4_0778_0065_383E();
}

/**
 * Decompiled function f__10E4_0778_0065_383E()
 *
 * @name f__10E4_0778_0065_383E
 * @implements 10E4:0778:0065:383E ()
 *
 * Called From: 10E4:0778:0009:4677
 * Called From: 10E4:0778:0006:0376
 */
void f__10E4_0778_0065_383E()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_078D_0050_0735(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363C), 0x0);
	if (!emu_flags.zf) { f__10E4_078D_0050_0735(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363E));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x363C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07A3; emu_last_cs = 0x10E4; emu_last_ip = 0x079D; emu_last_length = 0x0065; emu_last_crc = 0x383E; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x07AF; emu_last_cs = 0x10E4; emu_last_ip = 0x07A8; emu_last_length = 0x0065; emu_last_crc = 0x383E; emu_call(); return; } // Jump does not resolve
	emu_andws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07BB; emu_last_cs = 0x10E4; emu_last_ip = 0x07B4; emu_last_length = 0x0065; emu_last_crc = 0x383E; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x0065; emu_last_crc = 0x383E; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0065; emu_last_crc = 0x383E; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0065; emu_last_crc = 0x383E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0779_0064_331E()
 *
 * @name f__10E4_0779_0064_331E
 * @implements 10E4:0779:0064:331E ()
 *
 * Called From: 10E4:0756:0021:3EC0
 * Called From: 10E4:0764:001B:BF5A
 */
void f__10E4_0779_0064_331E()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_078D_0050_0735(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363C), 0x0);
	if (!emu_flags.zf) { f__10E4_078D_0050_0735(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363E));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x363C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07A3; emu_last_cs = 0x10E4; emu_last_ip = 0x079D; emu_last_length = 0x0064; emu_last_crc = 0x331E; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x07AF; emu_last_cs = 0x10E4; emu_last_ip = 0x07A8; emu_last_length = 0x0064; emu_last_crc = 0x331E; emu_call(); return; } // Jump does not resolve
	emu_andws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07BB; emu_last_cs = 0x10E4; emu_last_ip = 0x07B4; emu_last_length = 0x0064; emu_last_crc = 0x331E; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x0064; emu_last_crc = 0x331E; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0064; emu_last_crc = 0x331E; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0064; emu_last_crc = 0x331E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_078D_0050_0735()
 *
 * @name f__10E4_078D_0050_0735
 * @implements 10E4:078D:0050:0735 ()
 *
 * Called From: 10E4:077E:0064:331E
 * Called From: 10E4:077E:0065:383E
 * Called From: 10E4:0785:0064:331E
 * Called From: 10E4:0785:0065:383E
 */
void f__10E4_078D_0050_0735()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363E));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x363C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07A3_003A_9AFF(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07AF_002E_44A4(); return; }
	emu_andws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07BB; emu_last_cs = 0x10E4; emu_last_ip = 0x07B4; emu_last_length = 0x0050; emu_last_crc = 0x0735; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x0050; emu_last_crc = 0x0735; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0050; emu_last_crc = 0x0735; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0050; emu_last_crc = 0x0735; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_07A3_003A_9AFF()
 *
 * @name f__10E4_07A3_003A_9AFF
 * @implements 10E4:07A3:003A:9AFF ()
 *
 * Called From: 10E4:079D:0050:0735
 */
void f__10E4_07A3_003A_9AFF()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07AF_002E_44A4(); return; }
	emu_andws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x7);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07BB_0022_AAE1(); return; }
	emu_orws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x003A; emu_last_crc = 0x9AFF; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x003A; emu_last_crc = 0x9AFF; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x003A; emu_last_crc = 0x9AFF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_07AF_002E_44A4()
 *
 * @name f__10E4_07AF_002E_44A4
 * @implements 10E4:07AF:002E:44A4 ()
 *
 * Called From: 10E4:07A8:003A:9AFF
 * Called From: 10E4:07A8:0050:0735
 */
void f__10E4_07AF_002E_44A4()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07BB_0022_AAE1(); return; }
	emu_orws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0xF8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x002E; emu_last_crc = 0x44A4; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07DD_003A_7E17(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x002E; emu_last_crc = 0x44A4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_07BB_0022_AAE1()
 *
 * @name f__10E4_07BB_0022_AAE1
 * @implements 10E4:07BB:0022:AAE1 ()
 *
 * Called From: 10E4:07B4:002E:44A4
 * Called From: 10E4:07B4:003A:9AFF
 */
void f__10E4_07BB_0022_AAE1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07E7_0030_7495(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0022; emu_last_crc = 0xAAE1; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0022; emu_last_crc = 0xAAE1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_07DD_003A_7E17()
 *
 * @name f__10E4_07DD_003A_7E17
 * @implements 10E4:07DD:003A:7E17 ()
 *
 * Called From: 10E4:07D7:002E:44A4
 */
void f__10E4_07DD_003A_7E17()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x8);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07F1_0026_0402(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x472));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; emu_ip = 0x096F; emu_last_cs = 0x10E4; emu_last_ip = 0x0812; emu_last_length = 0x003A; emu_last_crc = 0x7E17; emu_call(); // Jump does not resolve
	f__10E4_0817_001B_1864();
}

/**
 * Decompiled function f__10E4_07E7_0030_7495()
 *
 * @name f__10E4_07E7_0030_7495
 * @implements 10E4:07E7:0030:7495 ()
 *
 * Called From: 10E4:07CE:0022:AAE1
 */
void f__10E4_07E7_0030_7495()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07F1_0026_0402(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x472));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_0817_001B_1864();
}

/**
 * Decompiled function f__10E4_07F1_0026_0402()
 *
 * @name f__10E4_07F1_0026_0402
 * @implements 10E4:07F1:0026:0402 ()
 *
 * Called From: 10E4:07EC:0030:7495
 * Called From: 10E4:07EC:003A:7E17
 */
void f__10E4_07F1_0026_0402()
{
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x472));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_0817_001B_1864();
}

/**
 * Decompiled function f__10E4_0817_001B_1864()
 *
 * @name f__10E4_0817_001B_1864
 * @implements 10E4:0817:001B:1864 ()
 *
 * Called From: 10E4:0817:0026:0402
 * Called From: 10E4:0817:0030:7495
 */
void f__10E4_0817_001B_1864()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3770);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0832); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__10E4_0832_0015_9051();
}

/**
 * Decompiled function f__10E4_0832_0015_9051()
 *
 * @name f__10E4_0832_0015_9051
 * @implements 10E4:0832:0015:9051 ()
 *
 * Called From: 10E4:0832:001B:1864
 */
void f__10E4_0832_0015_9051()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3770);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0847); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__10E4_0847_0008_EEB0();
}

/**
 * Decompiled function f__10E4_0847_0008_EEB0()
 *
 * @name f__10E4_0847_0008_EEB0
 * @implements 10E4:0847:0008:EEB0 ()
 *
 * Called From: 10E4:0847:0015:9051
 */
void f__10E4_0847_0008_EEB0()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_di, emu_di);
	f__10E4_0949_0008_F7DC(); return;
}

/**
 * Decompiled function f__10E4_084F_0020_A63B()
 *
 * @name f__10E4_084F_0020_A63B
 * @implements 10E4:084F:0020:A63B ()
 *
 * Called From: 10E4:094E:0008:F7DC
 * Called From: 10E4:094E:000C:51D2
 * Called From: 10E4:094E:0009:79DC
 */
void f__10E4_084F_0020_A63B()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_di, -0xC));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (!emu_flags.zf) { f__10E4_086F_0015_AF27(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xD);
	f__10E4_0879_000B_9F10(); return;
}

/**
 * Decompiled function f__10E4_086F_0015_AF27()
 *
 * @name f__10E4_086F_0015_AF27
 * @implements 10E4:086F:0015:AF27 ()
 *
 * Called From: 10E4:0866:0020:A63B
 */
void f__10E4_086F_0015_AF27()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, 0xFFDE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_di, -0xC));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_di, -0x14));
	if (!emu_flags.zf) { f__10E4_0884_0032_DA5D(); return; }
	f__10E4_0917_002E_E251(); return;
}

/**
 * Decompiled function f__10E4_0879_000B_9F10()
 *
 * @name f__10E4_0879_000B_9F10
 * @implements 10E4:0879:000B:9F10 ()
 *
 * Called From: 10E4:086D:0020:A63B
 */
void f__10E4_0879_000B_9F10()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_di, -0xC));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_di, -0x14));
	if (!emu_flags.zf) { f__10E4_0884_0032_DA5D(); return; }
	f__10E4_0917_002E_E251(); return;
}

/**
 * Decompiled function f__10E4_0884_0032_DA5D()
 *
 * @name f__10E4_0884_0032_DA5D
 * @implements 10E4:0884:0032:DA5D ()
 *
 * Called From: 10E4:087F:000B:9F10
 * Called From: 10E4:087F:0015:AF27
 */
void f__10E4_0884_0032_DA5D()
{
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363E));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_08B6_001D_D2E6();
}

/**
 * Decompiled function f__10E4_08B6_001D_D2E6()
 *
 * @name f__10E4_08B6_001D_D2E6
 * @implements 10E4:08B6:001D:D2E6 ()
 *
 * Called From: 10E4:08B6:0032:DA5D
 */
void f__10E4_08B6_001D_D2E6()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x363E), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0915; emu_last_cs = 0x10E4; emu_last_ip = 0x08BE; emu_last_length = 0x001D; emu_last_crc = 0xD2E6; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_di, -0x14));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (!emu_flags.zf) { f__10E4_08D3_003F_7109(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xD);
	emu_ip = 0x08DD; emu_last_cs = 0x10E4; emu_last_ip = 0x08D1; emu_last_length = 0x001D; emu_last_crc = 0xD2E6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_08D3_003F_7109()
 *
 * @name f__10E4_08D3_003F_7109
 * @implements 10E4:08D3:003F:7109 ()
 *
 * Called From: 10E4:08CA:001D:D2E6
 */
void f__10E4_08D3_003F_7109()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, 0xFFDE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax.x, 0x8);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x363E));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_0912_0005_1F9E();
}

/**
 * Decompiled function f__10E4_0912_0005_1F9E()
 *
 * @name f__10E4_0912_0005_1F9E
 * @implements 10E4:0912:0005:1F9E ()
 *
 * Called From: 10E4:0912:003F:7109
 */
void f__10E4_0912_0005_1F9E()
{
	emu_addws(&emu_sp, 0xE);
	f__10E4_0948_0009_79DC(); return;
}

/**
 * Decompiled function f__10E4_0917_002E_E251()
 *
 * @name f__10E4_0917_002E_E251
 * @implements 10E4:0917:002E:E251 ()
 *
 * Called From: 10E4:0881:000B:9F10
 * Called From: 10E4:0881:0015:AF27
 */
void f__10E4_0917_002E_E251()
{
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0945); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_0945_000C_51D2();
}

/**
 * Decompiled function f__10E4_0945_000C_51D2()
 *
 * @name f__10E4_0945_000C_51D2
 * @implements 10E4:0945:000C:51D2 ()
 *
 * Called From: 10E4:0945:002E:E251
 */
void f__10E4_0945_000C_51D2()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0951_0012_D56E(); return; }
	f__10E4_084F_0020_A63B(); return;
}

/**
 * Decompiled function f__10E4_0948_0009_79DC()
 *
 * @name f__10E4_0948_0009_79DC
 * @implements 10E4:0948:0009:79DC ()
 *
 * Called From: 10E4:0915:0005:1F9E
 */
void f__10E4_0948_0009_79DC()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0951_0012_D56E(); return; }
	f__10E4_084F_0020_A63B(); return;
}

/**
 * Decompiled function f__10E4_0949_0008_F7DC()
 *
 * @name f__10E4_0949_0008_F7DC
 * @implements 10E4:0949:0008:F7DC ()
 *
 * Called From: 10E4:084C:0008:EEB0
 */
void f__10E4_0949_0008_F7DC()
{
	emu_cmpws(&emu_di, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0951; emu_last_cs = 0x10E4; emu_last_ip = 0x094C; emu_last_length = 0x0008; emu_last_crc = 0xF7DC; emu_call(); return; } // Jump does not resolve
	f__10E4_084F_0020_A63B(); return;
}

/**
 * Decompiled function f__10E4_0951_0012_D56E()
 *
 * @name f__10E4_0951_0012_D56E
 * @implements 10E4:0951:0012:D56E ()
 *
 * Called From: 10E4:094C:000C:51D2
 * Called From: 10E4:094C:0009:79DC
 */
void f__10E4_0951_0012_D56E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	if (emu_flags.zf) { f__10E4_0993_0008_ED6A(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0963); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__10E4_0963_0028_8436();
}

/**
 * Decompiled function f__10E4_0963_0028_8436()
 *
 * @name f__10E4_0963_0028_8436
 * @implements 10E4:0963:0028:8436 ()
 *
 * Called From: 10E4:0963:0012:D56E
 */
void f__10E4_0963_0028_8436()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_subw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x098B); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__10E4_098B_0008_F194();
}

/**
 * Decompiled function f__10E4_098B_0008_F194()
 *
 * @name f__10E4_098B_0008_F194
 * @implements 10E4:098B:0008:F194 ()
 *
 * Called From: 10E4:098B:0028:8436
 */
void f__10E4_098B_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0993); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__10E4_0993_0008_ED6A();
}

/**
 * Decompiled function f__10E4_0993_0008_ED6A()
 *
 * @name f__10E4_0993_0008_ED6A
 * @implements 10E4:0993:0008:ED6A ()
 *
 * Called From: 10E4:0958:0012:D56E
 * Called From: 10E4:0993:0008:F194
 */
void f__10E4_0993_0008_ED6A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs); emu_push(0x099B); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_099B_0009_58F6();
}

/**
 * Decompiled function f__10E4_099B_0009_58F6()
 *
 * @name f__10E4_099B_0009_58F6
 * @implements 10E4:099B:0009:58F6 ()
 *
 * Called From: 10E4:099B:0008:ED6A
 */
void f__10E4_099B_0009_58F6()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A4); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_09A4_0007_3FFA();
}

/**
 * Decompiled function f__10E4_09A4_0007_3FFA()
 *
 * @name f__10E4_09A4_0007_3FFA
 * @implements 10E4:09A4:0007:3FFA ()
 *
 * Called From: 10E4:09A4:0009:58F6
 */
void f__10E4_09A4_0007_3FFA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_09A5_0006_137A()
 *
 * @name f__10E4_09A5_0006_137A
 * @implements 10E4:09A5:0006:137A ()
 *
 * Called From: 10E4:0698:0026:5758
 * Called From: 10E4:0698:0009:75F7
 * Called From: 10E4:06F2:001D:CA3F
 */
void f__10E4_09A5_0006_137A()
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

/**
 * Decompiled function f__10E4_09AB_0031_9946()
 *
 * @name f__10E4_09AB_0031_9946
 * @implements 10E4:09AB:0031:9946 ()
 *
 * Called From: 0642:03E7:000E:CA9B
 * Called From: 0972:0622:0010:9364
 * Called From: 0AEC:036A:000F:2AF3
 * Called From: 0AEC:070E:0011:B261
 * Called From: 0C3A:1B3F:0011:B261
 * Called From: 0C3A:287E:0008:7E08
 * Called From: 0C3A:28FB:0008:7E08
 * Called From: 1391:04D5:0008:7E08
 * Called From: 1A34:294B:0011:B263
 * Called From: B4E9:00F4:0015:332B
 * Called From: B4E9:00F4:0016:256B
 * Called From: B511:0BFC:0058:2236
 */
void f__10E4_09AB_0031_9946()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x5A);
	emu_movw(&emu_ax.x, emu_bp + 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_09DF_0032_7EAC(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09DC); emu_cs = 0x01F7; f__01F7_37AF_001F_B961();
	f__10E4_09DC_0035_62EC();
}

/**
 * Decompiled function f__10E4_09DC_0035_62EC()
 *
 * @name f__10E4_09DC_0035_62EC
 * @implements 10E4:09DC:0035:62EC ()
 *
 * Called From: 10E4:09DC:0031:9946
 */
void f__10E4_09DC_0035_62EC()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__10E4_0A11_001A_366B(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3738), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3736), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3734), emu_ax.x);
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x36E4), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3694), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3644), emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), 0x0);
	emu_ip = 0x0D54; emu_last_cs = 0x10E4; emu_last_ip = 0x0A0E; emu_last_length = 0x0035; emu_last_crc = 0x62EC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_09DF_0032_7EAC()
 *
 * @name f__10E4_09DF_0032_7EAC
 * @implements 10E4:09DF:0032:7EAC ()
 *
 * Called From: 10E4:09C4:0031:9946
 */
void f__10E4_09DF_0032_7EAC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__10E4_0A11_001A_366B(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3738), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3736), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3734), emu_ax.x);
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x36E4), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3694), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x3644), emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), 0x0);
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0A11_001A_366B()
 *
 * @name f__10E4_0A11_001A_366B
 * @implements 10E4:0A11:001A:366B ()
 *
 * Called From: 10E4:09E3:0032:7EAC
 * Called From: 10E4:09E3:0035:62EC
 */
void f__10E4_0A11_001A_366B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFE);
	if (!emu_flags.zf) { f__10E4_0A3C_000A_584A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A2B; emu_last_cs = 0x10E4; emu_last_ip = 0x0A1C; emu_last_length = 0x001A; emu_last_crc = 0x366B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3738), 0xFFFF);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x36E4), 0x0);
	emu_ip = 0x0A3C; emu_last_cs = 0x10E4; emu_last_ip = 0x0A29; emu_last_length = 0x001A; emu_last_crc = 0x366B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0A3C_000A_584A()
 *
 * @name f__10E4_0A3C_000A_584A
 * @implements 10E4:0A3C:000A:584A ()
 *
 * Called From: 10E4:0A15:001A:366B
 */
void f__10E4_0A3C_000A_584A()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	if (!emu_flags.zf) { f__10E4_0A46_0015_262A(); return; }
	f__10E4_0C4B_0009_2639(); return;
}

/**
 * Decompiled function f__10E4_0A46_0015_262A()
 *
 * @name f__10E4_0A46_0015_262A
 * @implements 10E4:0A46:0015:262A ()
 *
 * Called From: 10E4:0A41:000A:584A
 */
void f__10E4_0A46_0015_262A()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	if (emu_flags.zf) { f__10E4_0A83_0018_D212(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A5B); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__10E4_0A5B_001F_931D();
}

/**
 * Decompiled function f__10E4_0A5B_001F_931D()
 *
 * @name f__10E4_0A5B_001F_931D
 * @implements 10E4:0A5B:001F:931D ()
 *
 * Called From: 10E4:0A5B:0015:262A
 */
void f__10E4_0A5B_001F_931D()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__10E4_0A83_0018_D212(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3738));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0A83_0018_D212(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x36E4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A7A); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__10E4_0A7A_0021_E5FB();
}

/**
 * Decompiled function f__10E4_0A7A_0021_E5FB()
 *
 * @name f__10E4_0A7A_0021_E5FB
 * @implements 10E4:0A7A:0021:E5FB ()
 *
 * Called From: 10E4:0A7A:001F:931D
 */
void f__10E4_0A7A_0021_E5FB()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3738), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x373E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x373C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0A9B_0009_72F7(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0A98; emu_last_cs = 0x10E4; emu_last_ip = 0x0A90; emu_last_length = 0x0021; emu_last_crc = 0xE5FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0A9B_0009_72F7(); return; }
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0A83_0018_D212()
 *
 * @name f__10E4_0A83_0018_D212
 * @implements 10E4:0A83:0018:D212 ()
 *
 * Called From: 10E4:0A4A:0015:262A
 * Called From: 10E4:0A60:001F:931D
 * Called From: 10E4:0A69:001F:931D
 */
void f__10E4_0A83_0018_D212()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x373E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x373C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0A9B_0009_72F7(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0A98; emu_last_cs = 0x10E4; emu_last_ip = 0x0A90; emu_last_length = 0x0018; emu_last_crc = 0xD212; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0A9B_0009_72F7(); return; }
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0A9B_0009_72F7()
 *
 * @name f__10E4_0A9B_0009_72F7
 * @implements 10E4:0A9B:0009:72F7 ()
 *
 * Called From: 10E4:0A8E:0018:D212
 * Called From: 10E4:0A8E:0021:E5FB
 * Called From: 10E4:0A96:0018:D212
 * Called From: 10E4:0A96:0021:E5FB
 */
void f__10E4_0A9B_0009_72F7()
{
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AA4); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_0AA4_000E_43D2();
}

/**
 * Decompiled function f__10E4_0AA4_000E_43D2()
 *
 * @name f__10E4_0AA4_000E_43D2
 * @implements 10E4:0AA4:000E:43D2 ()
 *
 * Called From: 10E4:0AA4:0009:72F7
 */
void f__10E4_0AA4_000E_43D2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x0);
	if (!emu_flags.zf) { f__10E4_0AB2_0009_776B(); return; }
	f__10E4_0B35_0009_7125(); return;
}

/**
 * Decompiled function f__10E4_0AB2_0009_776B()
 *
 * @name f__10E4_0AB2_0009_776B
 * @implements 10E4:0AB2:0009:776B ()
 *
 * Called From: 10E4:0AAD:000E:43D2
 */
void f__10E4_0AB2_0009_776B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0ABB); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_0ABB_0020_BBA1();
}

/**
 * Decompiled function f__10E4_0ABB_0020_BBA1()
 *
 * @name f__10E4_0ABB_0020_BBA1
 * @implements 10E4:0ABB:0020:BBA1 ()
 *
 * Called From: 10E4:0ABB:0009:776B
 */
void f__10E4_0ABB_0020_BBA1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D59));
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0ADB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0AD6; emu_last_length = 0x0020; emu_last_crc = 0xBBA1;
			emu_call();
			return;
	}
	f__10E4_0ADB_0024_EBC3();
}

/**
 * Decompiled function f__10E4_0ADB_0024_EBC3()
 *
 * @name f__10E4_0ADB_0024_EBC3
 * @implements 10E4:0ADB:0024:EBC3 ()
 *
 * Called From: 10E4:0ADB:0020:BBA1
 */
void f__10E4_0ADB_0024_EBC3()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7526));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0AFF); f__10E4_1EF1_0040_E33D();
	f__10E4_0AFF_0024_38C3();
}

/**
 * Decompiled function f__10E4_0AFF_0024_38C3()
 *
 * @name f__10E4_0AFF_0024_38C3
 * @implements 10E4:0AFF:0024:38C3 ()
 *
 * Called From: 10E4:0AFF:0024:EBC3
 */
void f__10E4_0AFF_0024_38C3()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7528));
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3644);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0B23); f__10E4_1EF1_0040_E33D();
	f__10E4_0B23_0011_6B13();
}

/**
 * Decompiled function f__10E4_0B23_0011_6B13()
 *
 * @name f__10E4_0B23_0011_6B13
 * @implements 10E4:0B23:0011:6B13 ()
 *
 * Called From: 10E4:0B23:0024:38C3
 */
void f__10E4_0B23_0011_6B13()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0B34); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_0B34_000A_1524();
}

/**
 * Decompiled function f__10E4_0B34_000A_1524()
 *
 * @name f__10E4_0B34_000A_1524
 * @implements 10E4:0B34:000A:1524 ()
 *
 * Called From: 10E4:0B34:0011:6B13
 */
void f__10E4_0B34_000A_1524()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B3E); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__10E4_0B3E_0016_37B9();
}

/**
 * Decompiled function f__10E4_0B35_0009_7125()
 *
 * @name f__10E4_0B35_0009_7125
 * @implements 10E4:0B35:0009:7125 ()
 *
 * Called From: 10E4:0AAF:000E:43D2
 */
void f__10E4_0B35_0009_7125()
{
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B3E); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__10E4_0B3E_0016_37B9();
}

/**
 * Decompiled function f__10E4_0B3E_0016_37B9()
 *
 * @name f__10E4_0B3E_0016_37B9
 * @implements 10E4:0B3E:0016:37B9 ()
 *
 * Called From: 10E4:0B3E:000A:1524
 * Called From: 10E4:0B3E:0009:7125
 */
void f__10E4_0B3E_0016_37B9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3740));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_cmpw(&emu_ax.x, 0x18);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0B54_0029_23E7(); return; }
	emu_movw(&emu_ax.x, 0x18);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3740));
	emu_ip = 0x0B57; emu_last_cs = 0x10E4; emu_last_ip = 0x0B52; emu_last_length = 0x0016; emu_last_crc = 0x37B9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0B54_0029_23E7()
 *
 * @name f__10E4_0B54_0029_23E7
 * @implements 10E4:0B54:0029:23E7 ()
 *
 * Called From: 10E4:0B49:0016:37B9
 */
void f__10E4_0B54_0029_23E7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3740));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x0B7D); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__10E4_0B7D_0008_F194();
}

/**
 * Decompiled function f__10E4_0B7D_0008_F194()
 *
 * @name f__10E4_0B7D_0008_F194
 * @implements 10E4:0B7D:0008:F194 ()
 *
 * Called From: 10E4:0B7D:0029:23E7
 */
void f__10E4_0B7D_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B85); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__10E4_0B85_0008_EAF6();
}

/**
 * Decompiled function f__10E4_0B85_0008_EAF6()
 *
 * @name f__10E4_0B85_0008_EAF6
 * @implements 10E4:0B85:0008:EAF6 ()
 *
 * Called From: 10E4:0B85:0008:F194
 */
void f__10E4_0B85_0008_EAF6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0B8D); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_0B8D_002C_1F00();
}

/**
 * Decompiled function f__10E4_0B8D_002C_1F00()
 *
 * @name f__10E4_0B8D_002C_1F00
 * @implements 10E4:0B8D:002C:1F00 ()
 *
 * Called From: 10E4:0B8D:0008:EAF6
 */
void f__10E4_0B8D_002C_1F00()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3740), 0x0);
	if (emu_flags.zf) { f__10E4_0BB9_000F_3D0D(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3738));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3736));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0BB2_0007_7204(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x1);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), emu_dx.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x3740));
	f__10E4_0C48_0003_076E(); return;
}

/**
 * Decompiled function f__10E4_0BB2_0007_7204()
 *
 * @name f__10E4_0BB2_0007_7204
 * @implements 10E4:0BB2:0007:7204 ()
 *
 * Called From: 10E4:0B9C:002C:1F00
 */
void f__10E4_0BB2_0007_7204()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x3740));
	f__10E4_0C48_0003_076E(); return;
}

/**
 * Decompiled function f__10E4_0BB9_000F_3D0D()
 *
 * @name f__10E4_0BB9_000F_3D0D
 * @implements 10E4:0BB9:000F:3D0D ()
 *
 * Called From: 10E4:0B93:002C:1F00
 */
void f__10E4_0BB9_000F_3D0D()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3644);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BC8); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__10E4_0BC8_0016_0853();
}

/**
 * Decompiled function f__10E4_0BC8_0016_0853()
 *
 * @name f__10E4_0BC8_0016_0853
 * @implements 10E4:0BC8:0016:0853 ()
 *
 * Called From: 10E4:0BC8:000F:3D0D
 */
void f__10E4_0BC8_0016_0853()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7526));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7528), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3736), 0x0);
	if (emu_flags.zf) { f__10E4_0BDE_0014_EAE0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3736));
	emu_decw(&emu_ax.x);
	f__10E4_0BE0_0012_EFD0(); return;
}

/**
 * Decompiled function f__10E4_0BDE_0014_EAE0()
 *
 * @name f__10E4_0BDE_0014_EAE0
 * @implements 10E4:0BDE:0014:EAE0 ()
 *
 * Called From: 10E4:0BD6:0016:0853
 */
void f__10E4_0BDE_0014_EAE0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3734), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x36E4);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BF2); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__10E4_0BF2_0035_FA28();
}

/**
 * Decompiled function f__10E4_0BE0_0012_EFD0()
 *
 * @name f__10E4_0BE0_0012_EFD0
 * @implements 10E4:0BE0:0012:EFD0 ()
 *
 * Called From: 10E4:0BDC:0016:0853
 */
void f__10E4_0BE0_0012_EFD0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3734), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x36E4);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BF2); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__10E4_0BF2_0035_FA28();
}

/**
 * Decompiled function f__10E4_0BF2_0035_FA28()
 *
 * @name f__10E4_0BF2_0035_FA28
 * @implements 10E4:0BF2:0035:FA28 ()
 *
 * Called From: 10E4:0BF2:0012:EFD0
 * Called From: 10E4:0BF2:0014:EAE0
 */
void f__10E4_0BF2_0035_FA28()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3738));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3736), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7524));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7526), emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x36E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3738), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3736));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3734));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0C27_0024_81EE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x1);
	f__10E4_0C38_0013_23A7(); return;
}

/**
 * Decompiled function f__10E4_0C27_0024_81EE()
 *
 * @name f__10E4_0C27_0024_81EE
 * @implements 10E4:0C27:0024:81EE ()
 *
 * Called From: 10E4:0C19:0035:FA28
 */
void f__10E4_0C27_0024_81EE()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, 0x384);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0C38_0013_23A7()
 *
 * @name f__10E4_0C38_0013_23A7
 * @implements 10E4:0C38:0013:23A7 ()
 *
 * Called From: 10E4:0C25:0035:FA28
 */
void f__10E4_0C38_0013_23A7()
{
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x0);
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0C48_0003_076E()
 *
 * @name f__10E4_0C48_0003_076E
 * @implements 10E4:0C48:0003:076E ()
 *
 * Called From: 10E4:0BB6:002C:1F00
 * Called From: 10E4:0BB6:0007:7204
 */
void f__10E4_0C48_0003_076E()
{
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0C4B_0009_2639()
 *
 * @name f__10E4_0C4B_0009_2639
 * @implements 10E4:0C4B:0009:2639 ()
 *
 * Called From: 10E4:0A43:000A:584A
 */
void f__10E4_0C4B_0009_2639()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	if (!emu_flags.zf) { f__10E4_0C54_000F_343F(); return; }
	f__10E4_0D0C_0012_0E2C(); return;
}

/**
 * Decompiled function f__10E4_0C54_000F_343F()
 *
 * @name f__10E4_0C54_000F_343F
 * @implements 10E4:0C54:000F:343F ()
 *
 * Called From: 10E4:0C4F:0009:2639
 */
void f__10E4_0C54_000F_343F()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3644);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__10E4_0C63_000A_B22F();
}

/**
 * Decompiled function f__10E4_0C63_000A_B22F()
 *
 * @name f__10E4_0C63_000A_B22F
 * @implements 10E4:0C63:000A:B22F ()
 *
 * Called From: 10E4:0C63:000F:343F
 */
void f__10E4_0C63_000A_B22F()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__10E4_0C6D_000F_3425(); return; }
	f__10E4_0D0A_0002_0388(); return;
}

/**
 * Decompiled function f__10E4_0C6D_000F_3425()
 *
 * @name f__10E4_0C6D_000F_3425
 * @implements 10E4:0C6D:000F:3425 ()
 *
 * Called From: 10E4:0C68:000A:B22F
 */
void f__10E4_0C6D_000F_3425()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__10E4_0C7C_000A_B24B();
}

/**
 * Decompiled function f__10E4_0C7C_000A_B24B()
 *
 * @name f__10E4_0C7C_000A_B24B
 * @implements 10E4:0C7C:000A:B24B ()
 *
 * Called From: 10E4:0C7C:000F:3425
 */
void f__10E4_0C7C_000A_B24B()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__10E4_0C86_000F_342B(); return; }
	f__10E4_0D0A_0002_0388(); return;
}

/**
 * Decompiled function f__10E4_0C86_000F_342B()
 *
 * @name f__10E4_0C86_000F_342B
 * @implements 10E4:0C86:000F:342B ()
 *
 * Called From: 10E4:0C81:000A:B24B
 */
void f__10E4_0C86_000F_342B()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x36E4);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C95); emu_cs = 0x01F7; f__01F7_3964_0041_A550();
	f__10E4_0C95_001F_0D51();
}

/**
 * Decompiled function f__10E4_0C95_001F_0D51()
 *
 * @name f__10E4_0C95_001F_0D51
 * @implements 10E4:0C95:001F:0D51 ()
 *
 * Called From: 10E4:0C95:000F:342B
 */
void f__10E4_0C95_001F_0D51()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0D0A; emu_last_cs = 0x10E4; emu_last_ip = 0x0C9A; emu_last_length = 0x001F; emu_last_crc = 0x0D51; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3736));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CE3; emu_last_cs = 0x10E4; emu_last_ip = 0x0CA3; emu_last_length = 0x001F; emu_last_crc = 0x0D51; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x36E4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CB4); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__10E4_0CB4_001E_A29B();
}

/**
 * Decompiled function f__10E4_0CB4_001E_A29B()
 *
 * @name f__10E4_0CB4_001E_A29B
 * @implements 10E4:0CB4:001E:A29B ()
 *
 * Called From: 10E4:0CB4:001F:0D51
 */
void f__10E4_0CB4_001E_A29B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7526));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7524), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3736));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3738), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3694);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CD2); emu_cs = 0x01F7; f__01F7_38F6_0029_5C00();
	f__10E4_0CD2_0011_7E24();
}

/**
 * Decompiled function f__10E4_0CD2_0011_7E24()
 *
 * @name f__10E4_0CD2_0011_7E24
 * @implements 10E4:0CD2:0011:7E24 ()
 *
 * Called From: 10E4:0CD2:001E:A29B
 */
void f__10E4_0CD2_0011_7E24()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7526), 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3736), emu_ax.x);
	f__10E4_0D0A_0002_0388(); return;
}

/**
 * Decompiled function f__10E4_0D0A_0002_0388()
 *
 * @name f__10E4_0D0A_0002_0388
 * @implements 10E4:0D0A:0002:0388 ()
 *
 * Called From: 10E4:0C6A:000A:B22F
 * Called From: 10E4:0C83:000A:B24B
 * Called From: 10E4:0CE1:0011:7E24
 */
void f__10E4_0D0A_0002_0388()
{
	f__10E4_0D1E_003A_3ECB(); return;
}

/**
 * Decompiled function f__10E4_0D0C_0012_0E2C()
 *
 * @name f__10E4_0D0C_0012_0E2C
 * @implements 10E4:0D0C:0012:0E2C ()
 *
 * Called From: 10E4:0C51:0009:2639
 */
void f__10E4_0D0C_0012_0E2C()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x3644));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__10E4_0D1E_003A_3ECB(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x3694));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__10E4_0D1E_003A_3ECB(); return; }
	f__10E4_0D54_0004_0F7A(); return;
}

/**
 * Decompiled function f__10E4_0D1E_003A_3ECB()
 *
 * @name f__10E4_0D1E_003A_3ECB
 * @implements 10E4:0D1E:003A:3ECB ()
 *
 * Called From: 10E4:0D0A:0002:0388
 * Called From: 10E4:0D12:0012:0E2C
 * Called From: 10E4:0D1A:0012:0E2C
 */
void f__10E4_0D1E_003A_3ECB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3736));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3734));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0D3C_001C_ABA8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x373E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x373C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0D54_0004_0F7A(); return; }
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D3C; emu_last_cs = 0x10E4; emu_last_ip = 0x0D34; emu_last_length = 0x003A; emu_last_crc = 0x3ECB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__10E4_0D54_0004_0F7A(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3740), 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0D3C_001C_ABA8()
 *
 * @name f__10E4_0D3C_001C_ABA8
 * @implements 10E4:0D3C:001C:ABA8 ()
 *
 * Called From: 10E4:0D25:003A:3ECB
 */
void f__10E4_0D3C_001C_ABA8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373A), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3740), 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x373C), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0D54_0004_0F7A()
 *
 * @name f__10E4_0D54_0004_0F7A
 * @implements 10E4:0D54:0004:0F7A ()
 *
 * Called From: 10E4:0A0E:0032:7EAC
 * Called From: 10E4:0A98:0018:D212
 * Called From: 10E4:0A98:0021:E5FB
 * Called From: 10E4:0C48:0003:076E
 * Called From: 10E4:0C48:0013:23A7
 * Called From: 10E4:0C48:0024:81EE
 * Called From: 10E4:0D1C:0012:0E2C
 * Called From: 10E4:0D32:003A:3ECB
 * Called From: 10E4:0D3A:003A:3ECB
 */
void f__10E4_0D54_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0D58_004B_7009()
 *
 * @name f__10E4_0D58_004B_7009
 * @implements 10E4:0D58:004B:7009 ()
 *
 * Called From: 10E4:13CD:0015:903C
 */
void f__10E4_0D58_004B_7009()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, 0x16);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x3A16);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D82; emu_last_cs = 0x10E4; emu_last_ip = 0x0D79; emu_last_length = 0x004B; emu_last_crc = 0x7009; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_di);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D8D; emu_last_cs = 0x10E4; emu_last_ip = 0x0D84; emu_last_length = 0x004B; emu_last_crc = 0x7009; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_cmpw(&emu_di, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0DA3_000D_73B9(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x0DA5; emu_last_cs = 0x10E4; emu_last_ip = 0x0DA1; emu_last_length = 0x004B; emu_last_crc = 0x7009; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_0DA3_000D_73B9()
 *
 * @name f__10E4_0DA3_000D_73B9
 * @implements 10E4:0DA3:000D:73B9 ()
 *
 * Called From: 10E4:0D9D:004B:7009
 */
void f__10E4_0DA3_000D_73B9()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_di, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DB0; emu_last_cs = 0x10E4; emu_last_ip = 0x0DAA; emu_last_length = 0x000D; emu_last_crc = 0x73B9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__10E4_0DB3_0039_682B(); return;
}

/**
 * Decompiled function f__10E4_0DB3_0039_682B()
 *
 * @name f__10E4_0DB3_0039_682B
 * @implements 10E4:0DB3:0039:682B ()
 *
 * Called From: 10E4:0DAE:000D:73B9
 */
void f__10E4_0DB3_0039_682B()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0E09; emu_last_cs = 0x10E4; emu_last_ip = 0x0DD1; emu_last_length = 0x0039; emu_last_crc = 0x682B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cwd();
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_push(emu_dx.x);
	emu_cwd();
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x01F7; f__01F7_03B2_0017_6839();
	f__10E4_0DEC_0007_23BE();
}

/**
 * Decompiled function f__10E4_0DEC_0007_23BE()
 *
 * @name f__10E4_0DEC_0007_23BE
 * @implements 10E4:0DEC:0007:23BE ()
 *
 * Called From: 10E4:0DEC:0039:682B
 */
void f__10E4_0DEC_0007_23BE()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DF3); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	f__10E4_0DF3_000E_1A1B();
}

/**
 * Decompiled function f__10E4_0DF3_000E_1A1B()
 *
 * @name f__10E4_0DF3_000E_1A1B
 * @implements 10E4:0DF3:000E:1A1B ()
 *
 * Called From: 10E4:0DF3:0007:23BE
 */
void f__10E4_0DF3_000E_1A1B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E01; emu_last_cs = 0x10E4; emu_last_ip = 0x0DFA; emu_last_length = 0x000E; emu_last_crc = 0x1A1B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__10E4_0E04_0005_1154(); return;
}

/**
 * Decompiled function f__10E4_0E04_0005_1154()
 *
 * @name f__10E4_0E04_0005_1154
 * @implements 10E4:0E04:0005:1154 ()
 *
 * Called From: 10E4:0DFF:000E:1A1B
 */
void f__10E4_0E04_0005_1154()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__10E4_0E3D_008B_EA37(); return;
}

/**
 * Decompiled function f__10E4_0E3D_008B_EA37()
 *
 * @name f__10E4_0E3D_008B_EA37
 * @implements 10E4:0E3D:008B:EA37 ()
 *
 * Called From: 10E4:0E07:0005:1154
 */
void f__10E4_0E3D_008B_EA37()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_sarw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E59_006F_DCD9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E6D_005B_9258(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__10E4_0E7C_004C_F29D(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E75; emu_last_length = 0x008B; emu_last_crc = 0xEA37; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E80; emu_last_length = 0x008B; emu_last_crc = 0xEA37; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x008B; emu_last_crc = 0xEA37; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x008B; emu_last_crc = 0xEA37; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x008B; emu_last_crc = 0xEA37; emu_call(); // Jump does not resolve
	f__10E4_0EC8_0049_D195();
}

/**
 * Decompiled function f__10E4_0E59_006F_DCD9()
 *
 * @name f__10E4_0E59_006F_DCD9
 * @implements 10E4:0E59:006F:DCD9 ()
 *
 * Called From: 10E4:0E4D:008B:EA37
 */
void f__10E4_0E59_006F_DCD9()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E6D_005B_9258(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E71; emu_last_length = 0x006F; emu_last_crc = 0xDCD9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E75; emu_last_length = 0x006F; emu_last_crc = 0xDCD9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E80; emu_last_length = 0x006F; emu_last_crc = 0xDCD9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x006F; emu_last_crc = 0xDCD9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x006F; emu_last_crc = 0xDCD9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x006F; emu_last_crc = 0xDCD9; emu_call(); // Jump does not resolve
	f__10E4_0EC8_0049_D195();
}

/**
 * Decompiled function f__10E4_0E6D_005B_9258()
 *
 * @name f__10E4_0E6D_005B_9258
 * @implements 10E4:0E6D:005B:9258 ()
 *
 * Called From: 10E4:0E61:006F:DCD9
 * Called From: 10E4:0E61:008B:EA37
 */
void f__10E4_0E6D_005B_9258()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__10E4_0E7C_004C_F29D(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E75; emu_last_length = 0x005B; emu_last_crc = 0x9258; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E80; emu_last_length = 0x005B; emu_last_crc = 0x9258; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x005B; emu_last_crc = 0x9258; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x005B; emu_last_crc = 0x9258; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x005B; emu_last_crc = 0x9258; emu_call(); // Jump does not resolve
	f__10E4_0EC8_0049_D195();
}

/**
 * Decompiled function f__10E4_0E7C_004C_F29D()
 *
 * @name f__10E4_0E7C_004C_F29D
 * @implements 10E4:0E7C:004C:F29D ()
 *
 * Called From: 10E4:0E71:005B:9258
 * Called From: 10E4:0E71:008B:EA37
 */
void f__10E4_0E7C_004C_F29D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_0E8B_003D_3B15(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x004C; emu_last_crc = 0xF29D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x004C; emu_last_crc = 0xF29D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x004C; emu_last_crc = 0xF29D; emu_call(); // Jump does not resolve
	f__10E4_0EC8_0049_D195();
}

/**
 * Decompiled function f__10E4_0E8B_003D_3B15()
 *
 * @name f__10E4_0E8B_003D_3B15
 * @implements 10E4:0E8B:003D:3B15 ()
 *
 * Called From: 10E4:0E80:004C:F29D
 */
void f__10E4_0E8B_003D_3B15()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x003D; emu_last_crc = 0x3B15; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EC8); f__10E4_0008_0048_CEEB();
	f__10E4_0EC8_0049_D195();
}

/**
 * Decompiled function f__10E4_0EC8_0049_D195()
 *
 * @name f__10E4_0EC8_0049_D195
 * @implements 10E4:0EC8:0049:D195 ()
 *
 * Called From: 10E4:0EC8:003D:3B15
 */
void f__10E4_0EC8_0049_D195()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0F14; emu_last_cs = 0x10E4; emu_last_ip = 0x0ECF; emu_last_length = 0x0049; emu_last_crc = 0xD195; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0F11);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0F0C; emu_last_length = 0x0049; emu_last_crc = 0xD195;
			emu_call();
			return;
	}
	f__10E4_0F11_0009_D47B();
}

/**
 * Decompiled function f__10E4_0F11_0009_D47B()
 *
 * @name f__10E4_0F11_0009_D47B
 * @implements 10E4:0F11:0009:D47B ()
 *
 * Called From: 10E4:0F11:0049:D195
 */
void f__10E4_0F11_0009_D47B()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0F1A_0088_3BE7()
 *
 * @name f__10E4_0F1A_0088_3BE7
 * @implements 10E4:0F1A:0088:3BE7 ()
 *
 * Called From: 0642:03A0:0008:5628
 * Called From: 0642:03A0:000D:8223
 * Called From: 10E4:2145:0009:05B2
 * Called From: 1A34:108A:0018:569E
 * Called From: B4E9:0272:000A:1028
 * Called From: B4E9:0285:000F:6473
 * Called From: B4E9:02A4:000B:D82A
 * Called From: B4E9:02C9:0009:7429
 */
void f__10E4_0F1A_0088_3BE7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x50);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0x0);
	emu_movw(&emu_ax.x, emu_bp - 0x50);
	emu_push(emu_ss);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3742);
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_cx.x, 0x10);
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x01F7; f__01F7_03C9_001C_6AB6();
	f__10E4_0FA2_0008_D0E0();
}

/**
 * Decompiled function f__10E4_0FA2_0008_D0E0()
 *
 * @name f__10E4_0FA2_0008_D0E0
 * @implements 10E4:0FA2:0008:D0E0 ()
 *
 * Called From: 10E4:0FA2:0088:3BE7
 */
void f__10E4_0FA2_0008_D0E0()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0FAA); f__10E4_1BE0_002F_3A8E();
	f__10E4_0FAA_0012_A4F8();
}

/**
 * Decompiled function f__10E4_0FAA_0012_A4F8()
 *
 * @name f__10E4_0FAA_0012_A4F8
 * @implements 10E4:0FAA:0012:A4F8 ()
 *
 * Called From: 10E4:0FAA:0008:D0E0
 */
void f__10E4_0FAA_0012_A4F8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0FBC_0007_5C36(); return; }
	f__10E4_1147_0011_ABD5(); return;
}

/**
 * Decompiled function f__10E4_0FBC_0007_5C36()
 *
 * @name f__10E4_0FBC_0007_5C36
 * @implements 10E4:0FBC:0007:5C36 ()
 *
 * Called From: 10E4:0FB7:0012:A4F8
 */
void f__10E4_0FBC_0007_5C36()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1BD2);
	switch (emu_ip) {
		case 0x1018: f__10E4_1018_0033_9CF4(); return;
		case 0x1075: f__10E4_1075_0034_EE1D(); return;
		case 0x10A9: f__10E4_10A9_0009_DCFD(); return;
		case 0x1147: f__10E4_1147_0011_ABD5(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0FBE; emu_last_length = 0x0007; emu_last_crc = 0x5C36;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1018_0033_9CF4()
 *
 * @name f__10E4_1018_0033_9CF4
 * @implements 10E4:1018:0033:9CF4 ()
 *
 * Called From: 10E4:0FBE:0007:5C36
 */
void f__10E4_1018_0033_9CF4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x104B); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__10E4_104B_000D_15F7();
}

/**
 * Decompiled function f__10E4_104B_000D_15F7()
 *
 * @name f__10E4_104B_000D_15F7
 * @implements 10E4:104B:000D:15F7 ()
 *
 * Called From: 10E4:104B:0033:9CF4
 */
void f__10E4_104B_000D_15F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__10E4_1058_0013_5EA6(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__10E4_105A_0011_5C3E(); return;
}

/**
 * Decompiled function f__10E4_1058_0013_5EA6()
 *
 * @name f__10E4_1058_0013_5EA6
 * @implements 10E4:1058:0013:5EA6 ()
 *
 * Called From: 10E4:1051:000D:15F7
 */
void f__10E4_1058_0013_5EA6()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__10E4_106B_000A_73A4();
}

/**
 * Decompiled function f__10E4_105A_0011_5C3E()
 *
 * @name f__10E4_105A_0011_5C3E
 * @implements 10E4:105A:0011:5C3E ()
 *
 * Called From: 10E4:1056:000D:15F7
 */
void f__10E4_105A_0011_5C3E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__10E4_106B_000A_73A4();
}

/**
 * Decompiled function f__10E4_106B_000A_73A4()
 *
 * @name f__10E4_106B_000A_73A4
 * @implements 10E4:106B:000A:73A4 ()
 *
 * Called From: 10E4:106B:0013:5EA6
 * Called From: 10E4:106B:0011:5C3E
 */
void f__10E4_106B_000A_73A4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	f__10E4_1158_0015_3A78(); return;
}

/**
 * Decompiled function f__10E4_1075_0034_EE1D()
 *
 * @name f__10E4_1075_0034_EE1D
 * @implements 10E4:1075:0034:EE1D ()
 *
 * Called From: 10E4:0FBE:0007:5C36
 */
void f__10E4_1075_0034_EE1D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A3C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__10E4_1158_0015_3A78(); return;
}

/**
 * Decompiled function f__10E4_10A9_0009_DCFD()
 *
 * @name f__10E4_10A9_0009_DCFD
 * @implements 10E4:10A9:0009:DCFD ()
 *
 * Called From: 10E4:0FBE:0007:5C36
 */
void f__10E4_10A9_0009_DCFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x10B2); emu_cs = 0x34CD; ovl__34CD(30);
	f__10E4_10B2_0045_685E();
}

/**
 * Decompiled function f__10E4_10B2_0045_685E()
 *
 * @name f__10E4_10B2_0045_685E
 * @implements 10E4:10B2:0045:685E ()
 *
 * Called From: 10E4:10B2:0009:DCFD
 */
void f__10E4_10B2_0045_685E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10F7); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__10E4_10F7_001A_9453();
}

/**
 * Decompiled function f__10E4_10F7_001A_9453()
 *
 * @name f__10E4_10F7_001A_9453
 * @implements 10E4:10F7:001A:9453 ()
 *
 * Called From: 10E4:10F7:0045:685E
 */
void f__10E4_10F7_001A_9453()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__10E4_1111_001C_D9C8(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1113; emu_last_cs = 0x10E4; emu_last_ip = 0x110F; emu_last_length = 0x001A; emu_last_crc = 0x9453; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1111_001C_D9C8()
 *
 * @name f__10E4_1111_001C_D9C8
 * @implements 10E4:1111:001C:D9C8 ()
 *
 * Called From: 10E4:110A:001A:9453
 */
void f__10E4_1111_001C_D9C8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x1140; emu_last_cs = 0x10E4; emu_last_ip = 0x1120; emu_last_length = 0x001C; emu_last_crc = 0xD9C8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x0C3A; f__0C3A_25EC_0011_6FF5();
	f__10E4_112D_000A_AB09();
}

/**
 * Decompiled function f__10E4_112D_000A_AB09()
 *
 * @name f__10E4_112D_000A_AB09
 * @implements 10E4:112D:000A:AB09 ()
 *
 * Called From: 10E4:112D:001C:D9C8
 */
void f__10E4_112D_000A_AB09()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__10E4_1137_000E_F0CF(); return; }
	emu_movb(&emu_ax.l, 0x64);
	emu_ip = 0x1139; emu_last_cs = 0x10E4; emu_last_ip = 0x1135; emu_last_length = 0x000A; emu_last_crc = 0xAB09; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1137_000E_F0CF()
 *
 * @name f__10E4_1137_000E_F0CF
 * @implements 10E4:1137:000E:F0CF ()
 *
 * Called From: 10E4:1131:000A:AB09
 */
void f__10E4_1137_000E_F0CF()
{
	emu_movb(&emu_ax.l, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), emu_ax.l);
	emu_push(emu_cs);
	emu_push(0x1145); f__10E4_2290_0012_7C2F();
	f__10E4_1145_0002_038E();
}

/**
 * Decompiled function f__10E4_1145_0002_038E()
 *
 * @name f__10E4_1145_0002_038E
 * @implements 10E4:1145:0002:038E ()
 *
 * Called From: 10E4:1145:000E:F0CF
 */
void f__10E4_1145_0002_038E()
{
	f__10E4_1158_0015_3A78(); return;
}

/**
 * Decompiled function f__10E4_1147_0011_ABD5()
 *
 * @name f__10E4_1147_0011_ABD5
 * @implements 10E4:1147:0011:ABD5 ()
 *
 * Called From: 10E4:0FB9:0012:A4F8
 * Called From: 10E4:0FBE:0007:5C36
 */
void f__10E4_1147_0011_ABD5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	f__10E4_1158_0015_3A78(); return;
}

/**
 * Decompiled function f__10E4_1158_0015_3A78()
 *
 * @name f__10E4_1158_0015_3A78
 * @implements 10E4:1158:0015:3A78 ()
 *
 * Called From: 10E4:1072:000A:73A4
 * Called From: 10E4:10A6:0034:EE1D
 * Called From: 10E4:1145:0002:038E
 * Called From: 10E4:1156:0011:ABD5
 */
void f__10E4_1158_0015_3A78()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__10E4_116D_0009_776B(); return; }
	f__10E4_12A6_0009_0DE5(); return;
}

/**
 * Decompiled function f__10E4_116D_0009_776B()
 *
 * @name f__10E4_116D_0009_776B
 * @implements 10E4:116D:0009:776B ()
 *
 * Called From: 10E4:1168:0015:3A78
 */
void f__10E4_116D_0009_776B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1176); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_1176_000D_03F5();
}

/**
 * Decompiled function f__10E4_1176_000D_03F5()
 *
 * @name f__10E4_1176_000D_03F5
 * @implements 10E4:1176:000D:03F5 ()
 *
 * Called From: 10E4:1176:0009:776B
 */
void f__10E4_1176_000D_03F5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1183); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_1183_0015_F4E3();
}

/**
 * Decompiled function f__10E4_1183_0015_F4E3()
 *
 * @name f__10E4_1183_0015_F4E3
 * @implements 10E4:1183:0015:F4E3 ()
 *
 * Called From: 10E4:1183:000D:03F5
 */
void f__10E4_1183_0015_F4E3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x1198); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_1198_0014_0BD1();
}

/**
 * Decompiled function f__10E4_1198_0014_0BD1()
 *
 * @name f__10E4_1198_0014_0BD1
 * @implements 10E4:1198:0014:0BD1 ()
 *
 * Called From: 10E4:1198:0015:F4E3
 */
void f__10E4_1198_0014_0BD1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x11AC); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_11AC_0013_F524();
}

/**
 * Decompiled function f__10E4_11AC_0013_F524()
 *
 * @name f__10E4_11AC_0013_F524
 * @implements 10E4:11AC:0013:F524 ()
 *
 * Called From: 10E4:11AC:0014:0BD1
 */
void f__10E4_11AC_0013_F524()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x11BF); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_11BF_0014_56D6();
}

/**
 * Decompiled function f__10E4_11BF_0014_56D6()
 *
 * @name f__10E4_11BF_0014_56D6
 * @implements 10E4:11BF:0014:56D6 ()
 *
 * Called From: 10E4:11BF:0013:F524
 */
void f__10E4_11BF_0014_56D6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_11D3_0013_F526();
}

/**
 * Decompiled function f__10E4_11D3_0013_F526()
 *
 * @name f__10E4_11D3_0013_F526
 * @implements 10E4:11D3:0013:F526 ()
 *
 * Called From: 10E4:11D3:0014:56D6
 */
void f__10E4_11D3_0013_F526()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x11E6); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_11E6_0014_9DD4();
}

/**
 * Decompiled function f__10E4_11E6_0014_9DD4()
 *
 * @name f__10E4_11E6_0014_9DD4
 * @implements 10E4:11E6:0014:9DD4 ()
 *
 * Called From: 10E4:11E6:0013:F526
 */
void f__10E4_11E6_0014_9DD4()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_11FA_0013_F525();
}

/**
 * Decompiled function f__10E4_11FA_0013_F525()
 *
 * @name f__10E4_11FA_0013_F525
 * @implements 10E4:11FA:0013:F525 ()
 *
 * Called From: 10E4:11FA:0014:9DD4
 */
void f__10E4_11FA_0013_F525()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x120D); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_120D_0014_C4D2();
}

/**
 * Decompiled function f__10E4_120D_0014_C4D2()
 *
 * @name f__10E4_120D_0014_C4D2
 * @implements 10E4:120D:0014:C4D2 ()
 *
 * Called From: 10E4:120D:0013:F525
 */
void f__10E4_120D_0014_C4D2()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_1221_0013_F523();
}

/**
 * Decompiled function f__10E4_1221_0013_F523()
 *
 * @name f__10E4_1221_0013_F523
 * @implements 10E4:1221:0013:F523 ()
 *
 * Called From: 10E4:1221:0014:C4D2
 */
void f__10E4_1221_0013_F523()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x1234); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_1234_0014_72DF();
}

/**
 * Decompiled function f__10E4_1234_0014_72DF()
 *
 * @name f__10E4_1234_0014_72DF
 * @implements 10E4:1234:0014:72DF ()
 *
 * Called From: 10E4:1234:0013:F523
 */
void f__10E4_1234_0014_72DF()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x1248); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_1248_0006_1AC8();
}

/**
 * Decompiled function f__10E4_1248_0006_1AC8()
 *
 * @name f__10E4_1248_0006_1AC8
 * @implements 10E4:1248:0006:1AC8 ()
 *
 * Called From: 10E4:1248:0014:72DF
 */
void f__10E4_1248_0006_1AC8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__10E4_1290_0013_840F(); return;
}

/**
 * Decompiled function f__10E4_124E_0013_F0BE()
 *
 * @name f__10E4_124E_0013_F0BE
 * @implements 10E4:124E:0013:F0BE ()
 *
 * Called From: 10E4:1293:0013:840F
 * Called From: 10E4:1293:0016:9D0F
 */
void f__10E4_124E_0013_F0BE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x1261); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_1261_002C_B202();
}

/**
 * Decompiled function f__10E4_1261_002C_B202()
 *
 * @name f__10E4_1261_002C_B202
 * @implements 10E4:1261:002C:B202 ()
 *
 * Called From: 10E4:1261:0013:F0BE
 */
void f__10E4_1261_002C_B202()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x128D); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_128D_0016_9D0F();
}

/**
 * Decompiled function f__10E4_128D_0016_9D0F()
 *
 * @name f__10E4_128D_0016_9D0F
 * @implements 10E4:128D:0016:9D0F ()
 *
 * Called From: 10E4:128D:002C:B202
 */
void f__10E4_128D_0016_9D0F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_124E_0013_F0BE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs);
	emu_push(0x12A3); f__10E4_057F_0052_B1B7();
	f__10E4_12A3_000C_05EB();
}

/**
 * Decompiled function f__10E4_1290_0013_840F()
 *
 * @name f__10E4_1290_0013_840F
 * @implements 10E4:1290:0013:840F ()
 *
 * Called From: 10E4:124C:0006:1AC8
 */
void f__10E4_1290_0013_840F()
{
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_124E_0013_F0BE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs);
	emu_push(0x12A3); emu_ip = 0x057F; emu_last_cs = 0x10E4; emu_last_ip = 0x12A0; emu_last_length = 0x0013; emu_last_crc = 0x840F; emu_call(); // Jump does not resolve
	f__10E4_12A3_000C_05EB();
}

/**
 * Decompiled function f__10E4_12A3_000C_05EB()
 *
 * @name f__10E4_12A3_000C_05EB
 * @implements 10E4:12A3:000C:05EB ()
 *
 * Called From: 10E4:12A3:0016:9D0F
 */
void f__10E4_12A3_000C_05EB()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_12AF_0012_6B74(); return; }
	f__10E4_1B3A_000F_C867(); return;
}

/**
 * Decompiled function f__10E4_12A6_0009_0DE5()
 *
 * @name f__10E4_12A6_0009_0DE5
 * @implements 10E4:12A6:0009:0DE5 ()
 *
 * Called From: 10E4:116A:0015:3A78
 */
void f__10E4_12A6_0009_0DE5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x12AF; emu_last_cs = 0x10E4; emu_last_ip = 0x12AA; emu_last_length = 0x0009; emu_last_crc = 0x0DE5; emu_call(); return; } // Jump does not resolve
	f__10E4_1B3A_000F_C867(); return;
}

/**
 * Decompiled function f__10E4_12AF_0012_6B74()
 *
 * @name f__10E4_12AF_0012_6B74
 * @implements 10E4:12AF:0012:6B74 ()
 *
 * Called From: 10E4:12AA:000C:05EB
 */
void f__10E4_12AF_0012_6B74()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x6);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x12E5; emu_last_cs = 0x10E4; emu_last_ip = 0x12B8; emu_last_length = 0x0012; emu_last_crc = 0x6B74; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1BC4);
	switch (emu_ip) {
		case 0x12C1: f__10E4_12C1_0009_7783(); return;
		case 0x12D3: f__10E4_12D3_0005_15A4(); return;
		case 0x12D8: f__10E4_12D8_0005_1582(); return;
		case 0x12DD: f__10E4_12DD_0008_DFE4(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x12BC; emu_last_length = 0x0012; emu_last_crc = 0x6B74;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_12C1_0009_7783()
 *
 * @name f__10E4_12C1_0009_7783
 * @implements 10E4:12C1:0009:7783 ()
 *
 * Called From: 10E4:12BC:0012:6B74
 */
void f__10E4_12C1_0009_7783()
{
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_12CA_0009_3864();
}

/**
 * Decompiled function f__10E4_12C4_0006_0182()
 *
 * @name f__10E4_12C4_0006_0182
 * @implements 10E4:12C4:0006:0182 ()
 *
 * Called From: 10E4:12D6:0005:15A4
 * Called From: 10E4:12DB:0005:1582
 */
void f__10E4_12C4_0006_0182()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_12CA_0009_3864();
}

/**
 * Decompiled function f__10E4_12C5_0005_1582()
 *
 * @name f__10E4_12C5_0005_1582
 * @implements 10E4:12C5:0005:1582 ()
 *
 * Called From: 10E4:12E3:0008:DFE4
 */
void f__10E4_12C5_0005_1582()
{
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_12CA_0009_3864();
}

/**
 * Decompiled function f__10E4_12CA_0009_3864()
 *
 * @name f__10E4_12CA_0009_3864
 * @implements 10E4:12CA:0009:3864 ()
 *
 * Called From: 10E4:12CA:0005:1582
 * Called From: 10E4:12CA:0006:0182
 * Called From: 10E4:12CA:0009:7783
 */
void f__10E4_12CA_0009_3864()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	f__10E4_12E7_0026_748B(); return;
}

/**
 * Decompiled function f__10E4_12D3_0005_15A4()
 *
 * @name f__10E4_12D3_0005_15A4
 * @implements 10E4:12D3:0005:15A4 ()
 *
 * Called From: 10E4:12BC:0012:6B74
 */
void f__10E4_12D3_0005_15A4()
{
	emu_movw(&emu_ax.x, 0xD);
	f__10E4_12C4_0006_0182(); return;
}

/**
 * Decompiled function f__10E4_12D8_0005_1582()
 *
 * @name f__10E4_12D8_0005_1582
 * @implements 10E4:12D8:0005:1582 ()
 *
 * Called From: 10E4:12BC:0012:6B74
 */
void f__10E4_12D8_0005_1582()
{
	emu_movw(&emu_ax.x, 0xE);
	f__10E4_12C4_0006_0182(); return;
}

/**
 * Decompiled function f__10E4_12DD_0008_DFE4()
 *
 * @name f__10E4_12DD_0008_DFE4
 * @implements 10E4:12DD:0008:DFE4 ()
 *
 * Called From: 10E4:12BC:0012:6B74
 */
void f__10E4_12DD_0008_DFE4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	f__10E4_12C5_0005_1582(); return;
}

/**
 * Decompiled function f__10E4_12E7_0026_748B()
 *
 * @name f__10E4_12E7_0026_748B
 * @implements 10E4:12E7:0026:748B ()
 *
 * Called From: 10E4:12D1:0009:3864
 */
void f__10E4_12E7_0026_748B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_flags.zf) { emu_ip = 0x1310; emu_last_cs = 0x10E4; emu_last_ip = 0x12ED; emu_last_length = 0x0026; emu_last_crc = 0x748B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x111);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x120);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs);
	emu_push(0x130D); f__10E4_1EF1_0040_E33D();
	f__10E4_130D_001A_F9F7();
}

/**
 * Decompiled function f__10E4_130D_001A_F9F7()
 *
 * @name f__10E4_130D_001A_F9F7
 * @implements 10E4:130D:001A:F9F7 ()
 *
 * Called From: 10E4:130D:0026:748B
 */
void f__10E4_130D_001A_F9F7()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xFFFF);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x6);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1374; emu_last_cs = 0x10E4; emu_last_ip = 0x131E; emu_last_length = 0x001A; emu_last_crc = 0xF9F7; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1BB6);
	switch (emu_ip) {
		case 0x132E: f__10E4_132E_0007_6CAE(); return;
		case 0x1335: f__10E4_1335_0007_6C48(); return;
		case 0x133C: f__10E4_133C_000C_802D(); return;
		case 0x1348: f__10E4_1348_001C_CB10(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1322; emu_last_length = 0x001A; emu_last_crc = 0xF9F7;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_132E_0007_6CAE()
 *
 * @name f__10E4_132E_0007_6CAE
 * @implements 10E4:132E:0007:6CAE ()
 *
 * Called From: 10E4:1322:001A:F9F7
 */
void f__10E4_132E_0007_6CAE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1C);
	f__10E4_1376_0033_2593(); return;
}

/**
 * Decompiled function f__10E4_1335_0007_6C48()
 *
 * @name f__10E4_1335_0007_6C48
 * @implements 10E4:1335:0007:6C48 ()
 *
 * Called From: 10E4:1322:001A:F9F7
 */
void f__10E4_1335_0007_6C48()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1D);
	f__10E4_1376_0033_2593(); return;
}

/**
 * Decompiled function f__10E4_133C_000C_802D()
 *
 * @name f__10E4_133C_000C_802D
 * @implements 10E4:133C:000C:802D ()
 *
 * Called From: 10E4:1322:001A:F9F7
 */
void f__10E4_133C_000C_802D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	f__10E4_1376_0033_2593(); return;
}

/**
 * Decompiled function f__10E4_1348_001C_CB10()
 *
 * @name f__10E4_1348_001C_CB10
 * @implements 10E4:1348:001C:CB10 ()
 *
 * Called From: 10E4:1322:001A:F9F7
 */
void f__10E4_1348_001C_CB10()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { f__10E4_1368_000C_8075(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1368; emu_last_cs = 0x10E4; emu_last_ip = 0x1357; emu_last_length = 0x001C; emu_last_crc = 0xCB10; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1364_0004_04E0();
}

/**
 * Decompiled function f__10E4_1364_0004_04E0()
 *
 * @name f__10E4_1364_0004_04E0
 * @implements 10E4:1364:0004:04E0 ()
 *
 * Called From: 10E4:1364:001C:CB10
 */
void f__10E4_1364_0004_04E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__10E4_1372_0002_03A8(); return;
}

/**
 * Decompiled function f__10E4_1368_000C_8075()
 *
 * @name f__10E4_1368_000C_8075
 * @implements 10E4:1368:000C:8075 ()
 *
 * Called From: 10E4:1351:001C:CB10
 */
void f__10E4_1368_000C_8075()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	f__10E4_1376_0033_2593(); return;
}

/**
 * Decompiled function f__10E4_1372_0002_03A8()
 *
 * @name f__10E4_1372_0002_03A8
 * @implements 10E4:1372:0002:03A8 ()
 *
 * Called From: 10E4:1366:0004:04E0
 */
void f__10E4_1372_0002_03A8()
{
	f__10E4_1376_0033_2593(); return;
}

/**
 * Decompiled function f__10E4_1376_0033_2593()
 *
 * @name f__10E4_1376_0033_2593
 * @implements 10E4:1376:0033:2593 ()
 *
 * Called From: 10E4:1333:0007:6CAE
 * Called From: 10E4:133A:0007:6C48
 * Called From: 10E4:1346:000C:802D
 * Called From: 10E4:1372:0002:03A8
 * Called From: 10E4:1372:000C:8075
 */
void f__10E4_1376_0033_2593()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xFF);
	if (emu_flags.zf) { f__10E4_13AC_000F_F520(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x33);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x102);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x13A9); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_13A9_0012_F6AA();
}

/**
 * Decompiled function f__10E4_13A9_0012_F6AA()
 *
 * @name f__10E4_13A9_0012_F6AA
 * @implements 10E4:13A9:0012:F6AA ()
 *
 * Called From: 10E4:13A9:0033:2593
 */
void f__10E4_13A9_0012_F6AA()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__10E4_13BB_0015_903C(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__10E4_13BB_0015_903C(); return; }
	f__10E4_1425_0002_03AC(); return;
}

/**
 * Decompiled function f__10E4_13AC_000F_F520()
 *
 * @name f__10E4_13AC_000F_F520
 * @implements 10E4:13AC:000F:F520 ()
 *
 * Called From: 10E4:137A:0033:2593
 */
void f__10E4_13AC_000F_F520()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x13BB; emu_last_cs = 0x10E4; emu_last_ip = 0x13B2; emu_last_length = 0x000F; emu_last_crc = 0xF520; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__10E4_13BB_0015_903C(); return; }
	emu_ip = 0x1425; emu_last_cs = 0x10E4; emu_last_ip = 0x13B9; emu_last_length = 0x000F; emu_last_crc = 0xF520; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_13BB_0015_903C()
 *
 * @name f__10E4_13BB_0015_903C
 * @implements 10E4:13BB:0015:903C ()
 *
 * Called From: 10E4:13B2:0012:F6AA
 * Called From: 10E4:13B7:000F:F520
 * Called From: 10E4:13B7:0012:F6AA
 */
void f__10E4_13BB_0015_903C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x13D0); f__10E4_0D58_004B_7009();
	f__10E4_13D0_0029_E0D4();
}

/**
 * Decompiled function f__10E4_13D0_0029_E0D4()
 *
 * @name f__10E4_13D0_0029_E0D4
 * @implements 10E4:13D0:0029:E0D4 ()
 *
 * Called From: 10E4:13D0:0015:903C
 */
void f__10E4_13D0_0029_E0D4()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x124);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x4AE));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x4AC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_13F9_001F_3158();
}

/**
 * Decompiled function f__10E4_13F9_001F_3158()
 *
 * @name f__10E4_13F9_001F_3158
 * @implements 10E4:13F9:001F:3158 ()
 *
 * Called From: 10E4:13F9:0029:E0D4
 */
void f__10E4_13F9_001F_3158()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x41);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x128);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x31);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1418); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_1418_0008_72F0();
}

/**
 * Decompiled function f__10E4_1418_0008_72F0()
 *
 * @name f__10E4_1418_0008_72F0
 * @implements 10E4:1418:0008:72F0 ()
 *
 * Called From: 10E4:1418:001F:3158
 */
void f__10E4_1418_0008_72F0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1420); f__10E4_1EF1_0040_E33D();
	f__10E4_1420_0005_1FF8();
}

/**
 * Decompiled function f__10E4_1420_0005_1FF8()
 *
 * @name f__10E4_1420_0005_1FF8
 * @implements 10E4:1420:0005:1FF8 ()
 *
 * Called From: 10E4:1420:0008:72F0
 */
void f__10E4_1420_0005_1FF8()
{
	emu_addws(&emu_sp, 0xE);
	f__10E4_1427_0010_EEDD(); return;
}

/**
 * Decompiled function f__10E4_1425_0002_03AC()
 *
 * @name f__10E4_1425_0002_03AC
 * @implements 10E4:1425:0002:03AC ()
 *
 * Called From: 10E4:13B9:0012:F6AA
 */
void f__10E4_1425_0002_03AC()
{
	f__10E4_1427_0010_EEDD(); return;
}

/**
 * Decompiled function f__10E4_1427_0010_EEDD()
 *
 * @name f__10E4_1427_0010_EEDD
 * @implements 10E4:1427:0010:EEDD ()
 *
 * Called From: 10E4:1423:0005:1FF8
 * Called From: 10E4:1425:0002:03AC
 */
void f__10E4_1427_0010_EEDD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__10E4_1437_000E_A559(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1437; emu_last_cs = 0x10E4; emu_last_ip = 0x1432; emu_last_length = 0x0010; emu_last_crc = 0xEEDD; emu_call(); return; } // Jump does not resolve
	f__10E4_1B3A_000F_C867(); return;
}

/**
 * Decompiled function f__10E4_1437_000E_A559()
 *
 * @name f__10E4_1437_000E_A559
 * @implements 10E4:1437:000E:A559 ()
 *
 * Called From: 10E4:142B:0010:EEDD
 */
void f__10E4_1437_000E_A559()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1445_0007_5DDE(); return; }
	emu_ip = 0x1B38; emu_last_cs = 0x10E4; emu_last_ip = 0x1442; emu_last_length = 0x000E; emu_last_crc = 0xA559; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1445_0007_5DDE()
 *
 * @name f__10E4_1445_0007_5DDE
 * @implements 10E4:1445:0007:5DDE ()
 *
 * Called From: 10E4:1440:000E:A559
 */
void f__10E4_1445_0007_5DDE()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1BA8);
	switch (emu_ip) {
		case 0x144C: f__10E4_144C_000B_6423(); return;
		case 0x14BC: f__10E4_14BC_000B_6423(); return;
		case 0x14E1: f__10E4_14E1_000B_6423(); return;
		case 0x1507: f__10E4_1507_000B_6423(); return;
		case 0x152D: f__10E4_152D_000B_5D23(); return;
		case 0x16E1: f__10E4_16E1_000B_5D23(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1447; emu_last_length = 0x0007; emu_last_crc = 0x5DDE;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_144C_000B_6423()
 *
 * @name f__10E4_144C_000B_6423
 * @implements 10E4:144C:000B:6423 ()
 *
 * Called From: 10E4:1447:0007:5DDE
 */
void f__10E4_144C_000B_6423()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x1457); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1457_001E_CC5F();
}

/**
 * Decompiled function f__10E4_1457_001E_CC5F()
 *
 * @name f__10E4_1457_001E_CC5F
 * @implements 10E4:1457:001E:CC5F ()
 *
 * Called From: 10E4:1457:000B:6423
 */
void f__10E4_1457_001E_CC5F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_ax.x, 0x54);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x103);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x54);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_1475_0008_7064();
}

/**
 * Decompiled function f__10E4_146F_0006_0182()
 *
 * @name f__10E4_146F_0006_0182
 * @implements 10E4:146F:0006:0182 ()
 *
 * Called From: 10E4:14DF:001A:5FD4
 * Called From: 10E4:1504:001B:BEEE
 * Called From: 10E4:152A:001B:BE66
 */
void f__10E4_146F_0006_0182()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_1475_0008_7064();
}

/**
 * Decompiled function f__10E4_1475_0008_7064()
 *
 * @name f__10E4_1475_0008_7064
 * @implements 10E4:1475:0008:7064 ()
 *
 * Called From: 10E4:1475:0006:0182
 * Called From: 10E4:1475:001E:CC5F
 */
void f__10E4_1475_0008_7064()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x147D); f__10E4_1EF1_0040_E33D();
	f__10E4_147D_0006_3D38();
}

/**
 * Decompiled function f__10E4_147D_0006_3D38()
 *
 * @name f__10E4_147D_0006_3D38
 * @implements 10E4:147D:0006:3D38 ()
 *
 * Called From: 10E4:147D:0008:7064
 */
void f__10E4_147D_0006_3D38()
{
	emu_addws(&emu_sp, 0xE);
	f__10E4_1B3A_000F_C867(); return;
}

/**
 * Decompiled function f__10E4_14BC_000B_6423()
 *
 * @name f__10E4_14BC_000B_6423
 * @implements 10E4:14BC:000B:6423 ()
 *
 * Called From: 10E4:1447:0007:5DDE
 */
void f__10E4_14BC_000B_6423()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x14C7); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_14C7_001A_5FD4();
}

/**
 * Decompiled function f__10E4_14C7_001A_5FD4()
 *
 * @name f__10E4_14C7_001A_5FD4
 * @implements 10E4:14C7:001A:5FD4 ()
 *
 * Called From: 10E4:14C7:000B:6423
 */
void f__10E4_14C7_001A_5FD4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_ax.x, 0x4C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x103);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x14F);
	f__10E4_146F_0006_0182(); return;
}

/**
 * Decompiled function f__10E4_14E1_000B_6423()
 *
 * @name f__10E4_14E1_000B_6423
 * @implements 10E4:14E1:000B:6423 ()
 *
 * Called From: 10E4:1447:0007:5DDE
 */
void f__10E4_14E1_000B_6423()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_14EC_001B_BEEE();
}

/**
 * Decompiled function f__10E4_14EC_001B_BEEE()
 *
 * @name f__10E4_14EC_001B_BEEE
 * @implements 10E4:14EC:001B:BEEE ()
 *
 * Called From: 10E4:14EC:000B:6423
 */
void f__10E4_14EC_001B_BEEE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_ax.x, 0x4C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x103);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x56);
	f__10E4_146F_0006_0182(); return;
}

/**
 * Decompiled function f__10E4_1507_000B_6423()
 *
 * @name f__10E4_1507_000B_6423
 * @implements 10E4:1507:000B:6423 ()
 *
 * Called From: 10E4:1447:0007:5DDE
 */
void f__10E4_1507_000B_6423()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x1512); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1512_001B_BE66();
}

/**
 * Decompiled function f__10E4_1512_001B_BE66()
 *
 * @name f__10E4_1512_001B_BE66
 * @implements 10E4:1512:001B:BE66 ()
 *
 * Called From: 10E4:1512:000B:6423
 */
void f__10E4_1512_001B_BE66()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5B));
	emu_movw(&emu_ax.x, 0x4C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x103);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x57);
	f__10E4_146F_0006_0182(); return;
}

/**
 * Decompiled function f__10E4_152D_000B_5D23()
 *
 * @name f__10E4_152D_000B_5D23
 * @implements 10E4:152D:000B:5D23 ()
 *
 * Called From: 10E4:1447:0007:5DDE
 */
void f__10E4_152D_000B_5D23()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x1538); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1538_0049_4547();
}

/**
 * Decompiled function f__10E4_1538_0049_4547()
 *
 * @name f__10E4_1538_0049_4547
 * @implements 10E4:1538:0049:4547 ()
 *
 * Called From: 10E4:1538:000B:5D23
 */
void f__10E4_1538_0049_4547()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__10E4_1555_002C_7B54(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addws(&emu_dx.x, 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__10E4_157C_0005_0F1E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { emu_ip = 0x157C; emu_last_cs = 0x10E4; emu_last_ip = 0x1572; emu_last_length = 0x0049; emu_last_crc = 0x4547; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), 0x3C2A);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x16D6; emu_last_cs = 0x10E4; emu_last_ip = 0x157E; emu_last_length = 0x0049; emu_last_crc = 0x4547; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1555_002C_7B54()
 *
 * @name f__10E4_1555_002C_7B54
 * @implements 10E4:1555:002C:7B54 ()
 *
 * Called From: 10E4:1548:0049:4547
 */
void f__10E4_1555_002C_7B54()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addws(&emu_dx.x, 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__10E4_157C_0005_0F1E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { emu_ip = 0x157C; emu_last_cs = 0x10E4; emu_last_ip = 0x1572; emu_last_length = 0x002C; emu_last_crc = 0x7B54; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), 0x3C2A);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x16D6; emu_last_cs = 0x10E4; emu_last_ip = 0x157E; emu_last_length = 0x002C; emu_last_crc = 0x7B54; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_157C_0005_0F1E()
 *
 * @name f__10E4_157C_0005_0F1E
 * @implements 10E4:157C:0005:0F1E ()
 *
 * Called From: 10E4:1568:0049:4547
 * Called From: 10E4:1568:002C:7B54
 */
void f__10E4_157C_0005_0F1E()
{
	emu_xorw(&emu_si, emu_si);
	f__10E4_16D6_0008_F6A8(); return;
}

/**
 * Decompiled function f__10E4_1581_0046_6AC7()
 *
 * @name f__10E4_1581_0046_6AC7
 * @implements 10E4:1581:0046:6AC7 ()
 *
 * Called From: 10E4:16DB:0008:F6A8
 * Called From: 10E4:16DB:000C:72A6
 */
void f__10E4_1581_0046_6AC7()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6E));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_push(emu_cs); emu_push(0x15C7); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_15C7_000F_7E60();
}

/**
 * Decompiled function f__10E4_15C7_000F_7E60()
 *
 * @name f__10E4_15C7_000F_7E60
 * @implements 10E4:15C7:000F:7E60 ()
 *
 * Called From: 10E4:15C7:0046:6AC7
 */
void f__10E4_15C7_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x15D6); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	f__10E4_15D6_0022_8BF6();
}

/**
 * Decompiled function f__10E4_15D6_0022_8BF6()
 *
 * @name f__10E4_15D6_0022_8BF6
 * @implements 10E4:15D6:0022:8BF6 ()
 *
 * Called From: 10E4:15D6:000F:7E60
 */
void f__10E4_15D6_0022_8BF6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37B6));
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x1629; emu_last_cs = 0x10E4; emu_last_ip = 0x15EF; emu_last_length = 0x0022; emu_last_crc = 0x8BF6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x15F8; emu_last_cs = 0x10E4; emu_last_ip = 0x15F4; emu_last_length = 0x0022; emu_last_crc = 0x8BF6; emu_call(); return; } // Jump does not resolve
	f__10E4_1675_0017_B7EA(); return;
}

/**
 * Decompiled function f__10E4_1675_0017_B7EA()
 *
 * @name f__10E4_1675_0017_B7EA
 * @implements 10E4:1675:0017:B7EA ()
 *
 * Called From: 10E4:15F6:0022:8BF6
 */
void f__10E4_1675_0017_B7EA()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x168C); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_168C_002A_A1F1();
}

/**
 * Decompiled function f__10E4_168C_002A_A1F1()
 *
 * @name f__10E4_168C_002A_A1F1
 * @implements 10E4:168C:002A:A1F1 ()
 *
 * Called From: 10E4:168C:0017:B7EA
 */
void f__10E4_168C_002A_A1F1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!emu_flags.zf) { f__10E4_16B8_001A_AA0B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x16B6); emu_cs = 0x348B; ovl__348B(5);
	f__10E4_16B6_0002_0398();
}

/**
 * Decompiled function f__10E4_16B6_0002_0398()
 *
 * @name f__10E4_16B6_0002_0398
 * @implements 10E4:16B6:0002:0398 ()
 *
 * Called From: 10E4:16B6:002A:A1F1
 */
void f__10E4_16B6_0002_0398()
{
	f__10E4_16D2_000C_72A6(); return;
}

/**
 * Decompiled function f__10E4_16B8_001A_AA0B()
 *
 * @name f__10E4_16B8_001A_AA0B
 * @implements 10E4:16B8:001A:AA0B ()
 *
 * Called From: 10E4:169A:002A:A1F1
 */
void f__10E4_16B8_001A_AA0B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x50);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x16D2); emu_cs = 0x348B; ovl__348B(4);
	f__10E4_16D2_000C_72A6();
}

/**
 * Decompiled function f__10E4_16D2_000C_72A6()
 *
 * @name f__10E4_16D2_000C_72A6
 * @implements 10E4:16D2:000C:72A6 ()
 *
 * Called From: 10E4:16B6:0002:0398
 * Called From: 10E4:16D2:001A:AA0B
 */
void f__10E4_16D2_000C_72A6()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_16DE_0003_0624(); return; }
	f__10E4_1581_0046_6AC7(); return;
}

/**
 * Decompiled function f__10E4_16D6_0008_F6A8()
 *
 * @name f__10E4_16D6_0008_F6A8
 * @implements 10E4:16D6:0008:F6A8 ()
 *
 * Called From: 10E4:157E:0005:0F1E
 */
void f__10E4_16D6_0008_F6A8()
{
	emu_cmpws(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x16DE; emu_last_cs = 0x10E4; emu_last_ip = 0x16D9; emu_last_length = 0x0008; emu_last_crc = 0xF6A8; emu_call(); return; } // Jump does not resolve
	f__10E4_1581_0046_6AC7(); return;
}

/**
 * Decompiled function f__10E4_16DE_0003_0624()
 *
 * @name f__10E4_16DE_0003_0624
 * @implements 10E4:16DE:0003:0624 ()
 *
 * Called From: 10E4:16D9:000C:72A6
 */
void f__10E4_16DE_0003_0624()
{
	f__10E4_1B3A_000F_C867(); return;
}

/**
 * Decompiled function f__10E4_16E1_000B_5D23()
 *
 * @name f__10E4_16E1_000B_5D23
 * @implements 10E4:16E1:000B:5D23 ()
 *
 * Called From: 10E4:1447:0007:5DDE
 */
void f__10E4_16E1_000B_5D23()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x16EC); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_16EC_0021_C688();
}

/**
 * Decompiled function f__10E4_16EC_0021_C688()
 *
 * @name f__10E4_16EC_0021_C688
 * @implements 10E4:16EC:0021:C688 ()
 *
 * Called From: 10E4:16EC:000B:5D23
 */
void f__10E4_16EC_0021_C688()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x2);
	if (emu_flags.zf) { f__10E4_1723_002F_BB20(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x8F);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x170D); emu_cs = 0x348B; emu_ip = 0x1737; emu_last_cs = 0x10E4; emu_last_ip = 0x1708; emu_last_length = 0x0021; emu_last_crc = 0xC688; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__10E4_1723_002F_BB20()
 *
 * @name f__10E4_1723_002F_BB20
 * @implements 10E4:1723:002F:BB20 ()
 *
 * Called From: 10E4:16F7:0021:C688
 */
void f__10E4_1723_002F_BB20()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (emu_flags.zf) { f__10E4_178D_001E_EC9B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (emu_flags.zf) { f__10E4_1764_0014_B459(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x23);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1752); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1752_0010_3877();
}

/**
 * Decompiled function f__10E4_1752_0010_3877()
 *
 * @name f__10E4_1752_0010_3877
 * @implements 10E4:1752:0010:3877 ()
 *
 * Called From: 10E4:1752:002F:BB20
 */
void f__10E4_1752_0010_3877()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1762); emu_cs = 0x348B; ovl__348B(5);
	f__10E4_1762_0002_03E4();
}

/**
 * Decompiled function f__10E4_1762_0002_03E4()
 *
 * @name f__10E4_1762_0002_03E4
 * @implements 10E4:1762:0002:03E4 ()
 *
 * Called From: 10E4:1762:0010:3877
 */
void f__10E4_1762_0002_03E4()
{
	f__10E4_1788_0005_1FDE(); return;
}

/**
 * Decompiled function f__10E4_1764_0014_B459()
 *
 * @name f__10E4_1764_0014_B459
 * @implements 10E4:1764:0014:B459 ()
 *
 * Called From: 10E4:173C:002F:BB20
 */
void f__10E4_1764_0014_B459()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x22);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1778); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1778_0010_38A7();
}

/**
 * Decompiled function f__10E4_1778_0010_38A7()
 *
 * @name f__10E4_1778_0010_38A7
 * @implements 10E4:1778:0010:38A7 ()
 *
 * Called From: 10E4:1778:0014:B459
 */
void f__10E4_1778_0010_38A7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x348B; ovl__348B(4);
	f__10E4_1788_0005_1FDE();
}

/**
 * Decompiled function f__10E4_1788_0005_1FDE()
 *
 * @name f__10E4_1788_0005_1FDE
 * @implements 10E4:1788:0005:1FDE ()
 *
 * Called From: 10E4:1762:0002:03E4
 * Called From: 10E4:1788:0010:38A7
 */
void f__10E4_1788_0005_1FDE()
{
	emu_addws(&emu_sp, 0x6);
	f__10E4_17BE_0034_46B0(); return;
}

/**
 * Decompiled function f__10E4_178D_001E_EC9B()
 *
 * @name f__10E4_178D_001E_EC9B
 * @implements 10E4:178D:001E:EC9B ()
 *
 * Called From: 10E4:1731:002F:BB20
 */
void f__10E4_178D_001E_EC9B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x0);
	if (emu_flags.zf) { f__10E4_17BE_0034_46B0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x8E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x17AB); emu_cs = 0x348B; emu_ip = 0x17D5; emu_last_cs = 0x10E4; emu_last_ip = 0x17A6; emu_last_length = 0x001E; emu_last_crc = 0xEC9B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__10E4_17BE_0034_46B0()
 *
 * @name f__10E4_17BE_0034_46B0
 * @implements 10E4:17BE:0034:46B0 ()
 *
 * Called From: 10E4:178B:0005:1FDE
 * Called From: 10E4:1795:001E:EC9B
 */
void f__10E4_17BE_0034_46B0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (emu_flags.zf) { emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17C6; emu_last_length = 0x0034; emu_last_crc = 0x46B0; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (!emu_flags.zf) { f__10E4_17E7_000B_6B23(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__10E4_1801_0015_422C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17E5; emu_last_length = 0x0034; emu_last_crc = 0x46B0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17F2); emu_cs = 0x348B; emu_ip = 0x181C; emu_last_cs = 0x10E4; emu_last_ip = 0x17ED; emu_last_length = 0x0034; emu_last_crc = 0x46B0; emu_call(); // Jump does not resolve
	f__10E4_17F2_000D_DB29();
}

/**
 * Decompiled function f__10E4_17E7_000B_6B23()
 *
 * @name f__10E4_17E7_000B_6B23
 * @implements 10E4:17E7:000B:6B23 ()
 *
 * Called From: 10E4:17D1:0034:46B0
 */
void f__10E4_17E7_000B_6B23()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17F2); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_17F2_000D_DB29();
}

/**
 * Decompiled function f__10E4_17F2_000D_DB29()
 *
 * @name f__10E4_17F2_000D_DB29
 * @implements 10E4:17F2:000D:DB29 ()
 *
 * Called From: 10E4:17F2:000B:6B23
 */
void f__10E4_17F2_000D_DB29()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17FF); emu_cs = 0x34A2; ovl__34A2(0);
	f__10E4_17FF_0017_78EC();
}

/**
 * Decompiled function f__10E4_17FF_0017_78EC()
 *
 * @name f__10E4_17FF_0017_78EC
 * @implements 10E4:17FF:0017:78EC ()
 *
 * Called From: 10E4:17FF:000D:DB29
 */
void f__10E4_17FF_0017_78EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_subw(&emu_ax.x, 0x9);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1816; emu_last_cs = 0x10E4; emu_last_ip = 0x1811; emu_last_length = 0x0017; emu_last_crc = 0x78EC; emu_call(); return; } // Jump does not resolve
	f__10E4_1B34_0002_03AC(); return;
}

/**
 * Decompiled function f__10E4_1801_0015_422C()
 *
 * @name f__10E4_1801_0015_422C
 * @implements 10E4:1801:0015:422C ()
 *
 * Called From: 10E4:17DB:0034:46B0
 */
void f__10E4_1801_0015_422C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_subw(&emu_ax.x, 0x9);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1816_0007_5D2E(); return; }
	emu_ip = 0x1B34; emu_last_cs = 0x10E4; emu_last_ip = 0x1813; emu_last_length = 0x0015; emu_last_crc = 0x422C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1816_0007_5D2E()
 *
 * @name f__10E4_1816_0007_5D2E
 * @implements 10E4:1816:0007:5D2E ()
 *
 * Called From: 10E4:1811:0015:422C
 */
void f__10E4_1816_0007_5D2E()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1B94);
	switch (emu_ip) {
		case 0x18F8: f__10E4_18F8_0013_68F4(); return;
		case 0x1A9A: f__10E4_1A9A_0013_51A3(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1818; emu_last_length = 0x0007; emu_last_crc = 0x5D2E;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_18F8_0013_68F4()
 *
 * @name f__10E4_18F8_0013_68F4
 * @implements 10E4:18F8:0013:68F4 ()
 *
 * Called From: 10E4:1818:0007:5D2E
 */
void f__10E4_18F8_0013_68F4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x190B); emu_cs = 0x34C1; ovl__34C1(2);
	f__10E4_190B_0017_E35B();
}

/**
 * Decompiled function f__10E4_190B_0017_E35B()
 *
 * @name f__10E4_190B_0017_E35B
 * @implements 10E4:190B:0017:E35B ()
 *
 * Called From: 10E4:190B:0013:68F4
 */
void f__10E4_190B_0017_E35B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1922); emu_cs = 0x34C1; ovl__34C1(0);
	f__10E4_1922_0022_83A5();
}

/**
 * Decompiled function f__10E4_1922_0022_83A5()
 *
 * @name f__10E4_1922_0022_83A5
 * @implements 10E4:1922:0022:83A5 ()
 *
 * Called From: 10E4:1922:0017:E35B
 */
void f__10E4_1922_0022_83A5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1944; emu_last_cs = 0x10E4; emu_last_ip = 0x192F; emu_last_length = 0x0022; emu_last_crc = 0x83A5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_movw(&emu_di, emu_ax.x);
	f__10E4_1946_001E_39B8(); return;
}

/**
 * Decompiled function f__10E4_1946_001E_39B8()
 *
 * @name f__10E4_1946_001E_39B8
 * @implements 10E4:1946:001E:39B8 ()
 *
 * Called From: 10E4:1942:0022:83A5
 */
void f__10E4_1946_001E_39B8()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x138);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x105);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x1964);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x195F; emu_last_length = 0x001E; emu_last_crc = 0x39B8;
			emu_call();
			return;
	}
	f__10E4_1964_001F_7943();
}

/**
 * Decompiled function f__10E4_1964_001F_7943()
 *
 * @name f__10E4_1964_001F_7943
 * @implements 10E4:1964:001F:7943 ()
 *
 * Called From: 10E4:1964:001E:39B8
 */
void f__10E4_1964_001F_7943()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x102);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x59);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1983); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_1983_0008_7032();
}

/**
 * Decompiled function f__10E4_1983_0008_7032()
 *
 * @name f__10E4_1983_0008_7032
 * @implements 10E4:1983:0008:7032 ()
 *
 * Called From: 10E4:1983:001F:7943
 */
void f__10E4_1983_0008_7032()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x198B); f__10E4_1EF1_0040_E33D();
	f__10E4_198B_0027_953E();
}

/**
 * Decompiled function f__10E4_198B_0027_953E()
 *
 * @name f__10E4_198B_0027_953E
 * @implements 10E4:198B:0027:953E ()
 *
 * Called From: 10E4:198B:0008:7032
 */
void f__10E4_198B_0027_953E()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12E);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3774);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x19B2); f__10E4_1EF1_0040_E33D();
	f__10E4_19B2_0017_6797();
}

/**
 * Decompiled function f__10E4_19B2_0017_6797()
 *
 * @name f__10E4_19B2_0017_6797
 * @implements 10E4:19B2:0017:6797 ()
 *
 * Called From: 10E4:19B2:0027:953E
 */
void f__10E4_19B2_0017_6797()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_19C9_001F_A700(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_ip = 0x19CC; emu_last_cs = 0x10E4; emu_last_ip = 0x19C7; emu_last_length = 0x0017; emu_last_crc = 0x6797; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_19C9_001F_A700()
 *
 * @name f__10E4_19C9_001F_A700
 * @implements 10E4:19C9:001F:A700 ()
 *
 * Called From: 10E4:19C2:0017:6797
 */
void f__10E4_19C9_001F_A700()
{
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12E);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3774);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x19E8); f__10E4_1EF1_0040_E33D();
	f__10E4_19E8_0006_3F2A();
}

/**
 * Decompiled function f__10E4_19E8_0006_3F2A()
 *
 * @name f__10E4_19E8_0006_3F2A
 * @implements 10E4:19E8:0006:3F2A ()
 *
 * Called From: 10E4:19E8:001F:A700
 */
void f__10E4_19E8_0006_3F2A()
{
	emu_addws(&emu_sp, 0x10);
	f__10E4_1B36_0002_03A8(); return;
}

/**
 * Decompiled function f__10E4_1A9A_0013_51A3()
 *
 * @name f__10E4_1A9A_0013_51A3
 * @implements 10E4:1A9A:0013:51A3 ()
 *
 * Called From: 10E4:1818:0007:5D2E
 */
void f__10E4_1A9A_0013_51A3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_push(emu_cs); emu_push(0x1AAD); emu_cs = 0x34C1; ovl__34C1(2);
	f__10E4_1AAD_000E_F873();
}

/**
 * Decompiled function f__10E4_1AAD_000E_F873()
 *
 * @name f__10E4_1AAD_000E_F873
 * @implements 10E4:1AAD:000E:F873 ()
 *
 * Called From: 10E4:1AAD:0013:51A3
 */
void f__10E4_1AAD_000E_F873()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, 0x100);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1ABB; emu_last_cs = 0x10E4; emu_last_ip = 0x1AB5; emu_last_length = 0x000E; emu_last_crc = 0xF873; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	f__10E4_1ABE_000F_F750(); return;
}

/**
 * Decompiled function f__10E4_1ABE_000F_F750()
 *
 * @name f__10E4_1ABE_000F_F750
 * @implements 10E4:1ABE:000F:F750 ()
 *
 * Called From: 10E4:1AB9:000E:F873
 */
void f__10E4_1ABE_000F_F750()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_push(emu_cs); emu_push(0x1ACD); emu_cs = 0x34C1; ovl__34C1(0);
	f__10E4_1ACD_0022_3899();
}

/**
 * Decompiled function f__10E4_1ACD_0022_3899()
 *
 * @name f__10E4_1ACD_0022_3899
 * @implements 10E4:1ACD:0022:3899 ()
 *
 * Called From: 10E4:1ACD:000F:F750
 */
void f__10E4_1ACD_0022_3899()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x138);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x105);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x1AEF);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1AEA; emu_last_length = 0x0022; emu_last_crc = 0x3899;
			emu_call();
			return;
	}
	f__10E4_1AEF_0013_04B8();
}

/**
 * Decompiled function f__10E4_1AEF_0013_04B8()
 *
 * @name f__10E4_1AEF_0013_04B8
 * @implements 10E4:1AEF:0013:04B8 ()
 *
 * Called From: 10E4:1AEF:0022:3899
 */
void f__10E4_1AEF_0013_04B8()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x3E8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1B02; emu_last_cs = 0x10E4; emu_last_ip = 0x1AFB; emu_last_length = 0x0013; emu_last_crc = 0x04B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3E8);
	f__10E4_1B09_001E_582C(); return;
}

/**
 * Decompiled function f__10E4_1B09_001E_582C()
 *
 * @name f__10E4_1B09_001E_582C
 * @implements 10E4:1B09:001E:582C ()
 *
 * Called From: 10E4:1B00:0013:04B8
 */
void f__10E4_1B09_001E_582C()
{
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x11);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1D);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x102);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B27); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__10E4_1B27_0008_72AE();
}

/**
 * Decompiled function f__10E4_1B27_0008_72AE()
 *
 * @name f__10E4_1B27_0008_72AE
 * @implements 10E4:1B27:0008:72AE ()
 *
 * Called From: 10E4:1B27:001E:582C
 */
void f__10E4_1B27_0008_72AE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1B2F); f__10E4_1EF1_0040_E33D();
	f__10E4_1B2F_0005_1F18();
}

/**
 * Decompiled function f__10E4_1B2F_0005_1F18()
 *
 * @name f__10E4_1B2F_0005_1F18
 * @implements 10E4:1B2F:0005:1F18 ()
 *
 * Called From: 10E4:1B2F:0008:72AE
 */
void f__10E4_1B2F_0005_1F18()
{
	emu_addws(&emu_sp, 0x12);
	f__10E4_1B36_0002_03A8(); return;
}

/**
 * Decompiled function f__10E4_1B34_0002_03AC()
 *
 * @name f__10E4_1B34_0002_03AC
 * @implements 10E4:1B34:0002:03AC ()
 *
 * Called From: 10E4:1813:0017:78EC
 */
void f__10E4_1B34_0002_03AC()
{
	f__10E4_1B36_0002_03A8(); return;
}

/**
 * Decompiled function f__10E4_1B36_0002_03A8()
 *
 * @name f__10E4_1B36_0002_03A8
 * @implements 10E4:1B36:0002:03A8 ()
 *
 * Called From: 10E4:19EB:0006:3F2A
 * Called From: 10E4:1B32:0005:1F18
 * Called From: 10E4:1B34:0002:03AC
 */
void f__10E4_1B36_0002_03A8()
{
	f__10E4_1B3A_000F_C867(); return;
}

/**
 * Decompiled function f__10E4_1B3A_000F_C867()
 *
 * @name f__10E4_1B3A_000F_C867
 * @implements 10E4:1B3A:000F:C867 ()
 *
 * Called From: 10E4:12AC:0009:0DE5
 * Called From: 10E4:12AC:000C:05EB
 * Called From: 10E4:1434:0010:EEDD
 * Called From: 10E4:1480:0006:3D38
 * Called From: 10E4:16DE:0003:0624
 * Called From: 10E4:1B36:0002:03A8
 */
void f__10E4_1B3A_000F_C867()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__10E4_1B76_000E_DF57(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B49); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__10E4_1B49_0025_9117();
}

/**
 * Decompiled function f__10E4_1B49_0025_9117()
 *
 * @name f__10E4_1B49_0025_9117
 * @implements 10E4:1B49:0025:9117 ()
 *
 * Called From: 10E4:1B49:000F:C867
 */
void f__10E4_1B49_0025_9117()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x1B6E); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__10E4_1B6E_0008_F194();
}

/**
 * Decompiled function f__10E4_1B6E_0008_F194()
 *
 * @name f__10E4_1B6E_0008_F194
 * @implements 10E4:1B6E:0008:F194 ()
 *
 * Called From: 10E4:1B6E:0025:9117
 */
void f__10E4_1B6E_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1B76); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__10E4_1B76_000E_DF57();
}

/**
 * Decompiled function f__10E4_1B76_000E_DF57()
 *
 * @name f__10E4_1B76_000E_DF57
 * @implements 10E4:1B76:000E:DF57 ()
 *
 * Called From: 10E4:1B3E:000F:C867
 * Called From: 10E4:1B76:0008:F194
 */
void f__10E4_1B76_000E_DF57()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_1B8E_0006_137A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1B84); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__10E4_1B84_0009_586A();
}

/**
 * Decompiled function f__10E4_1B84_0009_586A()
 *
 * @name f__10E4_1B84_0009_586A
 * @implements 10E4:1B84:0009:586A ()
 *
 * Called From: 10E4:1B84:000E:DF57
 */
void f__10E4_1B84_0009_586A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B8D); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_1B8D_0007_3FFA();
}

/**
 * Decompiled function f__10E4_1B8D_0007_3FFA()
 *
 * @name f__10E4_1B8D_0007_3FFA
 * @implements 10E4:1B8D:0007:3FFA ()
 *
 * Called From: 10E4:1B8D:0009:586A
 */
void f__10E4_1B8D_0007_3FFA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_1B8E_0006_137A()
 *
 * @name f__10E4_1B8E_0006_137A
 * @implements 10E4:1B8E:0006:137A ()
 *
 * Called From: 10E4:1B7A:000E:DF57
 */
void f__10E4_1B8E_0006_137A()
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

/**
 * Decompiled function f__10E4_1BE0_002F_3A8E()
 *
 * @name f__10E4_1BE0_002F_3A8E
 * @implements 10E4:1BE0:002F:3A8E ()
 *
 * Called From: 10E4:0FA7:0008:D0E0
 */
void f__10E4_1BE0_002F_3A8E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__10E4_1C0F_001C_37DB(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3752), 0x7);
	if (!emu_flags.zf) { f__10E4_1C09_0006_2B1E(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__10E4_1C0C_0003_047E(); return; }
	emu_movw(&emu_si, 0x7);
	emu_ip = 0x1DDC; emu_last_cs = 0x10E4; emu_last_ip = 0x1C0C; emu_last_length = 0x002F; emu_last_crc = 0x3A8E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1C09_0006_2B1E()
 *
 * @name f__10E4_1C09_0006_2B1E
 * @implements 10E4:1C09:0006:2B1E ()
 *
 * Called From: 10E4:1C03:002F:3A8E
 */
void f__10E4_1C09_0006_2B1E()
{
	emu_movw(&emu_si, 0x7);
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1C0C_0003_047E()
 *
 * @name f__10E4_1C0C_0003_047E
 * @implements 10E4:1C0C:0003:047E ()
 *
 * Called From: 10E4:1C07:002F:3A8E
 */
void f__10E4_1C0C_0003_047E()
{
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1C0F_001C_37DB()
 *
 * @name f__10E4_1C0F_001C_37DB
 * @implements 10E4:1C0F:001C:37DB ()
 *
 * Called From: 10E4:1BFC:002F:3A8E
 */
void f__10E4_1C0F_001C_37DB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FC));
	if (emu_flags.zf) { f__10E4_1C2B_000C_BB42(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3762));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FE));
	if (!emu_flags.zf) { emu_ip = 0x1C25; emu_last_cs = 0x10E4; emu_last_ip = 0x1C1F; emu_last_length = 0x001C; emu_last_crc = 0x37DB; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1C28; emu_last_cs = 0x10E4; emu_last_ip = 0x1C23; emu_last_length = 0x001C; emu_last_crc = 0x37DB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x8);
	emu_ip = 0x1DDC; emu_last_cs = 0x10E4; emu_last_ip = 0x1C28; emu_last_length = 0x001C; emu_last_crc = 0x37DB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1C2B_000C_BB42()
 *
 * @name f__10E4_1C2B_000C_BB42
 * @implements 10E4:1C2B:000C:BB42 ()
 *
 * Called From: 10E4:1C16:001C:37DB
 */
void f__10E4_1C2B_000C_BB42()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__10E4_1C37_0025_4EB0(); return; }
	f__10E4_1CBB_001E_DCC0(); return;
}

/**
 * Decompiled function f__10E4_1C37_0025_4EB0()
 *
 * @name f__10E4_1C37_0025_4EB0
 * @implements 10E4:1C37:0025:4EB0 ()
 *
 * Called From: 10E4:1C32:000C:BB42
 */
void f__10E4_1C37_0025_4EB0()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (!emu_flags.zf) { f__10E4_1C78_0043_3202(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3760));
	if (!emu_flags.zf) { f__10E4_1C51_000B_3FF4(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__10E4_1C6A_000E_2E21(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_1C5C_000B_3EFE(); return; }
	emu_movw(&emu_si, 0x4);
	f__10E4_1C6A_000E_2E21(); return;
}

/**
 * Decompiled function f__10E4_1C51_000B_3FF4()
 *
 * @name f__10E4_1C51_000B_3FF4
 * @implements 10E4:1C51:000B:3FF4 ()
 *
 * Called From: 10E4:1C4B:0025:4EB0
 */
void f__10E4_1C51_000B_3FF4()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_1C5C_000B_3EFE(); return; }
	emu_movw(&emu_si, 0x4);
	f__10E4_1C6A_000E_2E21(); return;
}

/**
 * Decompiled function f__10E4_1C5C_000B_3EFE()
 *
 * @name f__10E4_1C5C_000B_3EFE
 * @implements 10E4:1C5C:000B:3EFE ()
 *
 * Called From: 10E4:1C55:000B:3FF4
 * Called From: 10E4:1C55:0025:4EB0
 */
void f__10E4_1C5C_000B_3EFE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	if (!emu_flags.zf) { f__10E4_1C67_0011_2F5B(); return; }
	emu_movw(&emu_si, 0x5);
	f__10E4_1C6A_000E_2E21(); return;
}

/**
 * Decompiled function f__10E4_1C67_0011_2F5B()
 *
 * @name f__10E4_1C67_0011_2F5B
 * @implements 10E4:1C67:0011:2F5B ()
 *
 * Called From: 10E4:1C60:000B:3EFE
 */
void f__10E4_1C67_0011_2F5B()
{
	emu_movw(&emu_si, 0x6);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3752));
	if (!emu_flags.zf) { f__10E4_1C76_0002_032C(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x1C76; emu_last_cs = 0x10E4; emu_last_ip = 0x1C72; emu_last_length = 0x0011; emu_last_crc = 0x2F5B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x1CB8; emu_last_cs = 0x10E4; emu_last_ip = 0x1C76; emu_last_length = 0x0011; emu_last_crc = 0x2F5B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1C6A_000E_2E21()
 *
 * @name f__10E4_1C6A_000E_2E21
 * @implements 10E4:1C6A:000E:2E21 ()
 *
 * Called From: 10E4:1C4F:0025:4EB0
 * Called From: 10E4:1C5A:000B:3FF4
 * Called From: 10E4:1C5A:0025:4EB0
 * Called From: 10E4:1C65:000B:3EFE
 */
void f__10E4_1C6A_000E_2E21()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3752));
	if (!emu_flags.zf) { f__10E4_1C76_0002_032C(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x1C76; emu_last_cs = 0x10E4; emu_last_ip = 0x1C72; emu_last_length = 0x000E; emu_last_crc = 0x2E21; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__10E4_1CB8_0003_07CE(); return;
}

/**
 * Decompiled function f__10E4_1C76_0002_032C()
 *
 * @name f__10E4_1C76_0002_032C
 * @implements 10E4:1C76:0002:032C ()
 *
 * Called From: 10E4:1C6E:000E:2E21
 * Called From: 10E4:1C6E:0011:2F5B
 */
void f__10E4_1C76_0002_032C()
{
	f__10E4_1CB8_0003_07CE(); return;
}

/**
 * Decompiled function f__10E4_1C78_0043_3202()
 *
 * @name f__10E4_1C78_0043_3202
 * @implements 10E4:1C78:0043:3202 ()
 *
 * Called From: 10E4:1C3C:0025:4EB0
 */
void f__10E4_1C78_0043_3202()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__10E4_1CB5_0006_280E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3756));
	if (!emu_flags.zf) { emu_ip = 0x1CB5; emu_last_cs = 0x10E4; emu_last_ip = 0x1C87; emu_last_length = 0x0043; emu_last_crc = 0x3202; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3754));
	if (!emu_flags.zf) { f__10E4_1CB5_0006_280E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x376A));
	if (!emu_flags.zf) { emu_ip = 0x1CB5; emu_last_cs = 0x10E4; emu_last_ip = 0x1CA4; emu_last_length = 0x0043; emu_last_crc = 0x3202; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3760));
	if (emu_flags.zf) { f__10E4_1CB8_0003_07CE(); return; }
	emu_movw(&emu_si, 0x2);
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1CB5_0006_280E()
 *
 * @name f__10E4_1CB5_0006_280E
 * @implements 10E4:1CB5:0006:280E ()
 *
 * Called From: 10E4:1C7A:0043:3202
 * Called From: 10E4:1C95:0043:3202
 */
void f__10E4_1CB5_0006_280E()
{
	emu_movw(&emu_si, 0x2);
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1CB8_0003_07CE()
 *
 * @name f__10E4_1CB8_0003_07CE
 * @implements 10E4:1CB8:0003:07CE ()
 *
 * Called From: 10E4:1C76:0002:032C
 * Called From: 10E4:1C76:000E:2E21
 * Called From: 10E4:1CB3:0043:3202
 */
void f__10E4_1CB8_0003_07CE()
{
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1CBB_001E_DCC0()
 *
 * @name f__10E4_1CBB_001E_DCC0
 * @implements 10E4:1CBB:001E:DCC0 ()
 *
 * Called From: 10E4:1C34:000C:BB42
 */
void f__10E4_1CBB_001E_DCC0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__10E4_1CD9_0009_D18D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1CD9; emu_last_cs = 0x10E4; emu_last_ip = 0x1CD4; emu_last_length = 0x001E; emu_last_crc = 0xDCC0; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1DD9; emu_last_cs = 0x10E4; emu_last_ip = 0x1CD6; emu_last_length = 0x001E; emu_last_crc = 0xDCC0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1CD9_0009_D18D()
 *
 * @name f__10E4_1CD9_0009_D18D
 * @implements 10E4:1CD9:0009:D18D ()
 *
 * Called From: 10E4:1CCD:001E:DCC0
 */
void f__10E4_1CD9_0009_D18D()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x1CE2); emu_cs = 0x34CD; ovl__34CD(13);
	f__10E4_1CE2_000D_766F();
}

/**
 * Decompiled function f__10E4_1CE2_000D_766F()
 *
 * @name f__10E4_1CE2_000D_766F
 * @implements 10E4:1CE2:000D:766F ()
 *
 * Called From: 10E4:1CE2:0009:D18D
 */
void f__10E4_1CE2_000D_766F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xC);
	if (emu_flags.zf) { f__10E4_1CEF_0009_DCFD(); return; }
	f__10E4_1DD4_0005_147A(); return;
}

/**
 * Decompiled function f__10E4_1CEF_0009_DCFD()
 *
 * @name f__10E4_1CEF_0009_DCFD
 * @implements 10E4:1CEF:0009:DCFD ()
 *
 * Called From: 10E4:1CEA:000D:766F
 */
void f__10E4_1CEF_0009_DCFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x1CF8); emu_cs = 0x34CD; ovl__34CD(30);
	f__10E4_1CF8_000E_83E3();
}

/**
 * Decompiled function f__10E4_1CF8_000E_83E3()
 *
 * @name f__10E4_1CF8_000E_83E3
 * @implements 10E4:1CF8:000E:83E3 ()
 *
 * Called From: 10E4:1CF8:0009:DCFD
 */
void f__10E4_1CF8_000E_83E3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__10E4_1D06_0010_ACFF(); return; }
	f__10E4_1D9D_002C_43D1(); return;
}

/**
 * Decompiled function f__10E4_1D06_0010_ACFF()
 *
 * @name f__10E4_1D06_0010_ACFF
 * @implements 10E4:1D06:0010:ACFF ()
 *
 * Called From: 10E4:1D01:000E:83E3
 */
void f__10E4_1D06_0010_ACFF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3754));
	if (emu_flags.zf) { f__10E4_1D16_006B_2726(); return; }
	f__10E4_1D9D_002C_43D1(); return;
}

/**
 * Decompiled function f__10E4_1D16_006B_2726()
 *
 * @name f__10E4_1D16_006B_2726
 * @implements 10E4:1D16:006B:2726 ()
 *
 * Called From: 10E4:1D11:0010:ACFF
 */
void f__10E4_1D16_006B_2726()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3756));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_43D1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3758));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_43D1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3764));
	if (!emu_flags.zf) { emu_ip = 0x1D9D; emu_last_cs = 0x10E4; emu_last_ip = 0x1D3B; emu_last_length = 0x006B; emu_last_crc = 0x2726; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x375E));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_43D1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x375A));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_43D1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3766));
	if (!emu_flags.zf) { emu_ip = 0x1D9D; emu_last_cs = 0x10E4; emu_last_ip = 0x1D63; emu_last_length = 0x006B; emu_last_crc = 0x2726; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x376A));
	if (!emu_flags.zf) { emu_ip = 0x1D9D; emu_last_cs = 0x10E4; emu_last_ip = 0x1D71; emu_last_length = 0x006B; emu_last_crc = 0x2726; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D81); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__10E4_1D81_0048_0C15();
}

/**
 * Decompiled function f__10E4_1D81_0048_0C15()
 *
 * @name f__10E4_1D81_0048_0C15
 * @implements 10E4:1D81:0048:0C15 ()
 *
 * Called From: 10E4:1D81:006B:2726
 */
void f__10E4_1D81_0048_0C15()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3768));
	if (!emu_flags.zf) { emu_ip = 0x1D9D; emu_last_cs = 0x10E4; emu_last_ip = 0x1D8E; emu_last_length = 0x0048; emu_last_crc = 0x0C15; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x375C));
	if (emu_flags.zf) { f__10E4_1DD2_0002_03AA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_1DC9_000B_67DD(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B2), 0x0);
	f__10E4_1DCF_0005_145A(); return;
}

/**
 * Decompiled function f__10E4_1D9D_002C_43D1()
 *
 * @name f__10E4_1D9D_002C_43D1
 * @implements 10E4:1D9D:002C:43D1 ()
 *
 * Called From: 10E4:1D03:000E:83E3
 * Called From: 10E4:1D13:0010:ACFF
 * Called From: 10E4:1D20:006B:2726
 * Called From: 10E4:1D2D:006B:2726
 * Called From: 10E4:1D49:006B:2726
 * Called From: 10E4:1D56:006B:2726
 */
void f__10E4_1D9D_002C_43D1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_1DC9_000B_67DD(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B2), 0x0);
	f__10E4_1DCF_0005_145A(); return;
}

/**
 * Decompiled function f__10E4_1DC9_000B_67DD()
 *
 * @name f__10E4_1DC9_000B_67DD
 * @implements 10E4:1DC9:000B:67DD ()
 *
 * Called From: 10E4:1DBF:002C:43D1
 * Called From: 10E4:1DBF:0048:0C15
 */
void f__10E4_1DC9_000B_67DD()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B2), 0x1);
	emu_movw(&emu_si, 0x3);
	f__10E4_1DD7_0002_03AA(); return;
}

/**
 * Decompiled function f__10E4_1DCF_0005_145A()
 *
 * @name f__10E4_1DCF_0005_145A
 * @implements 10E4:1DCF:0005:145A ()
 *
 * Called From: 10E4:1DC7:002C:43D1
 * Called From: 10E4:1DC7:0048:0C15
 */
void f__10E4_1DCF_0005_145A()
{
	emu_movw(&emu_si, 0x3);
	f__10E4_1DD7_0002_03AA(); return;
}

/**
 * Decompiled function f__10E4_1DD2_0002_03AA()
 *
 * @name f__10E4_1DD2_0002_03AA
 * @implements 10E4:1DD2:0002:03AA ()
 *
 * Called From: 10E4:1D9B:0048:0C15
 */
void f__10E4_1DD2_0002_03AA()
{
	f__10E4_1DD7_0002_03AA(); return;
}

/**
 * Decompiled function f__10E4_1DD4_0005_147A()
 *
 * @name f__10E4_1DD4_0005_147A
 * @implements 10E4:1DD4:0005:147A ()
 *
 * Called From: 10E4:1CEC:000D:766F
 */
void f__10E4_1DD4_0005_147A()
{
	emu_movw(&emu_si, 0x1);
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1DD7_0002_03AA()
 *
 * @name f__10E4_1DD7_0002_03AA
 * @implements 10E4:1DD7:0002:03AA ()
 *
 * Called From: 10E4:1DD2:000B:67DD
 * Called From: 10E4:1DD2:0002:03AA
 * Called From: 10E4:1DD2:0005:145A
 */
void f__10E4_1DD7_0002_03AA()
{
	f__10E4_1DDC_000A_66AF(); return;
}

/**
 * Decompiled function f__10E4_1DDC_000A_66AF()
 *
 * @name f__10E4_1DDC_000A_66AF
 * @implements 10E4:1DDC:000A:66AF ()
 *
 * Called From: 10E4:1C0C:0006:2B1E
 * Called From: 10E4:1C0C:0003:047E
 * Called From: 10E4:1CB8:0006:280E
 * Called From: 10E4:1CB8:0003:07CE
 * Called From: 10E4:1CB8:0043:3202
 * Called From: 10E4:1DD7:0002:03AA
 * Called From: 10E4:1DD7:0005:147A
 */
void f__10E4_1DDC_000A_66AF()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpws(&emu_bx.x, 0x8);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1DE6_0007_5C08(); return; }
	emu_ip = 0x1ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x1DE3; emu_last_length = 0x000A; emu_last_crc = 0x66AF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1DE6_0007_5C08()
 *
 * @name f__10E4_1DE6_0007_5C08
 * @implements 10E4:1DE6:0007:5C08 ()
 *
 * Called From: 10E4:1DE1:000A:66AF
 */
void f__10E4_1DE6_0007_5C08()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1EDF);
	switch (emu_ip) {
		case 0x1DFC: f__10E4_1DFC_001B_24AE(); return;
		case 0x1E17: f__10E4_1E17_0036_8DE7(); return;
		case 0x1E4D: f__10E4_1E4D_0070_6B75(); return;
		case 0x1ECB: f__10E4_1ECB_0002_03AC(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1DE8; emu_last_length = 0x0007; emu_last_crc = 0x5C08;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1DFC_001B_24AE()
 *
 * @name f__10E4_1DFC_001B_24AE
 * @implements 10E4:1DFC:001B:24AE ()
 *
 * Called From: 10E4:1DE8:0007:5C08
 */
void f__10E4_1DFC_001B_24AE()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3756), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3762), 0xFFFF);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__10E4_1E14_0003_0590(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3752));
	if (!emu_flags.zf) { emu_ip = 0x1E14; emu_last_cs = 0x10E4; emu_last_ip = 0x1E10; emu_last_length = 0x001B; emu_last_crc = 0x24AE; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	f__10E4_1ECD_000C_554A(); return;
}

/**
 * Decompiled function f__10E4_1E14_0003_0590()
 *
 * @name f__10E4_1E14_0003_0590
 * @implements 10E4:1E14:0003:0590 ()
 *
 * Called From: 10E4:1E0A:001B:24AE
 */
void f__10E4_1E14_0003_0590()
{
	f__10E4_1ECD_000C_554A(); return;
}

/**
 * Decompiled function f__10E4_1E17_0036_8DE7()
 *
 * @name f__10E4_1E17_0036_8DE7
 * @implements 10E4:1E17:0036:8DE7 ()
 *
 * Called From: 10E4:1DE8:0007:5C08
 */
void f__10E4_1E17_0036_8DE7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3754), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3756), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3760), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3762), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x376A), emu_ax.x);
	f__10E4_1ECD_000C_554A(); return;
}

/**
 * Decompiled function f__10E4_1E4D_0070_6B75()
 *
 * @name f__10E4_1E4D_0070_6B75
 * @implements 10E4:1E4D:0070:6B75 ()
 *
 * Called From: 10E4:1DE8:0007:5C08
 */
void f__10E4_1E4D_0070_6B75()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3754), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3756), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x375A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3758), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3764), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3766), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x375E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x375C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x376A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3762), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1EBD); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__10E4_1EBD_000E_26FD();
}

/**
 * Decompiled function f__10E4_1EBD_000E_26FD()
 *
 * @name f__10E4_1EBD_000E_26FD
 * @implements 10E4:1EBD:000E:26FD ()
 *
 * Called From: 10E4:1EBD:0070:6B75
 */
void f__10E4_1EBD_000E_26FD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3768), emu_ax.x);
	f__10E4_1ECD_000C_554A(); return;
}

/**
 * Decompiled function f__10E4_1ECB_0002_03AC()
 *
 * @name f__10E4_1ECB_0002_03AC
 * @implements 10E4:1ECB:0002:03AC ()
 *
 * Called From: 10E4:1DE8:0007:5C08
 */
void f__10E4_1ECB_0002_03AC()
{
	f__10E4_1ECD_000C_554A(); return;
}

/**
 * Decompiled function f__10E4_1ECD_000C_554A()
 *
 * @name f__10E4_1ECD_000C_554A
 * @implements 10E4:1ECD:000C:554A ()
 *
 * Called From: 10E4:1E14:0003:0590
 * Called From: 10E4:1E14:001B:24AE
 * Called From: 10E4:1E4A:0036:8DE7
 * Called From: 10E4:1EC9:000E:26FD
 * Called From: 10E4:1ECB:0002:03AC
 */
void f__10E4_1ECD_000C_554A()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_1ED5_0004_0D2C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3752), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	f__10E4_1ED9_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_1ED5_0004_0D2C()
 *
 * @name f__10E4_1ED5_0004_0D2C
 * @implements 10E4:1ED5:0004:0D2C ()
 *
 * Called From: 10E4:1ECF:000C:554A
 */
void f__10E4_1ED5_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__10E4_1ED9_0006_137A(); return;
}

/**
 * Decompiled function f__10E4_1ED9_0006_137A()
 *
 * @name f__10E4_1ED9_0006_137A
 * @implements 10E4:1ED9:0006:137A ()
 *
 * Called From: 10E4:1ED7:000C:554A
 * Called From: 10E4:1ED7:0004:0D2C
 */
void f__10E4_1ED9_0006_137A()
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

/**
 * Decompiled function f__10E4_1EF1_0040_E33D()
 *
 * @name f__10E4_1EF1_0040_E33D
 * @implements 10E4:1EF1:0040:E33D ()
 *
 * Called From: 07D4:1414:0020:6C82
 * Called From: 0AEC:0BC4:0008:7B10
 * Called From: 0AEC:0F47:0008:7B10
 * Called From: 10E4:02C8:001F:5AE1
 * Called From: 10E4:0AFC:0024:EBC3
 * Called From: 10E4:0B20:0024:38C3
 * Called From: 10E4:130A:0026:748B
 * Called From: 10E4:141D:0008:72F0
 * Called From: 10E4:147A:0008:7064
 * Called From: 10E4:1988:0008:7032
 * Called From: 10E4:19AF:0027:953E
 * Called From: 10E4:19E5:001F:A700
 * Called From: 10E4:1B2C:0008:72AE
 * Called From: B495:0C59:0008:7B10
 * Called From: B495:0C9E:0008:7B10
 * Called From: B4B8:1EDF:0021:308D
 * Called From: B4B8:200D:0021:B39A
 * Called From: B4B8:200D:002F:82AA
 * Called From: B4B8:202B:001E:B0C1
 * Called From: B4DA:0B60:001D:BCF1
 * Called From: B4DA:0B9D:0021:F119
 * Called From: B4DA:0DFF:001F:FEED
 * Called From: B4DA:14AD:0020:9020
 * Called From: B4DA:180D:0021:4D00
 * Called From: B4E0:08B0:0008:7B10
 * Called From: B4E0:08CE:001E:9CC0
 * Called From: B4E6:0099:0019:47E1
 * Called From: B4E6:00BF:001A:23FE
 * Called From: B4E6:01DC:0028:8BEC
 * Called From: B4E6:01DC:002B:5FE9
 * Called From: B4E6:0455:003A:FCBC
 * Called From: B4E6:049F:0039:6C7F
 * Called From: B4ED:01AC:001D:CCF6
 * Called From: B4ED:01CA:001E:D0C0
 * Called From: B4ED:0A33:001B:FCF8
 * Called From: B4ED:0A53:0020:E30E
 * Called From: B4ED:0C73:001B:842D
 * Called From: B4ED:0C73:0025:9FA7
 * Called From: B4ED:0C9E:002B:2EBC
 * Called From: B4F2:0120:001C:60FD
 * Called From: B4F2:08FA:0008:7B10
 * Called From: B4F2:109A:0008:7B10
 * Called From: B503:0F92:0021:6A1B
 * Called From: B518:0163:0008:7B10
 * Called From: B518:0194:0008:7B10
 * Called From: B518:03C2:0023:A70D
 * Called From: B518:04A3:0023:246C
 * Called From: B518:0717:004F:9A17
 * Called From: B518:0D23:0008:7B10
 * Called From: B518:0D43:0020:27E5
 * Called From: B518:0D6A:0008:7B10
 * Called From: B518:0D94:0008:7B10
 * Called From: B518:0E4B:0023:DFF4
 * Called From: B518:0EA5:001E:3455
 * Called From: B518:0EE9:0008:7B10
 * Called From: B518:1212:001E:10C0
 * Called From: B518:1292:0008:7B10
 * Called From: B518:12B5:0008:7B10
 * Called From: B518:12D8:0008:7B10
 * Called From: B518:140D:001A:6EFC
 * Called From: B518:142B:001B:ED79
 * Called From: B518:142B:001E:4D41
 * Called From: B518:144E:0023:A066
 * Called From: B518:1471:0023:A066
 * Called From: B527:00CA:001D:890D
 * Called From: B527:0254:0023:2326
 */
void f__10E4_1EF1_0040_E33D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x376C));
	if (emu_flags.zf) { f__10E4_1F0E_0023_968F(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__10E4_1F16_001B_53E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10E4_1F5C_0023_86E9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x1F31; emu_last_cs = 0x10E4; emu_last_ip = 0x1F28; emu_last_length = 0x0040; emu_last_crc = 0xE33D; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x1F40; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2D; emu_last_length = 0x0040; emu_last_crc = 0xE33D; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x0040; emu_last_crc = 0xE33D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1F0E_0023_968F()
 *
 * @name f__10E4_1F0E_0023_968F
 * @implements 10E4:1F0E:0023:968F ()
 *
 * Called From: 10E4:1F08:0040:E33D
 */
void f__10E4_1F0E_0023_968F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10E4_1F5C_0023_86E9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__10E4_1F31_000F_017E(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__10E4_1F40_0009_4DA3(); return; }
	emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x0023; emu_last_crc = 0x968F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1F16_001B_53E3()
 *
 * @name f__10E4_1F16_001B_53E3
 * @implements 10E4:1F16:001B:53E3 ()
 *
 * Called From: 10E4:1F0C:0040:E33D
 */
void f__10E4_1F16_001B_53E3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__10E4_1F31_000F_017E(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__10E4_1F40_0009_4DA3(); return; }
	emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x001B; emu_last_crc = 0x53E3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1F31_000F_017E()
 *
 * @name f__10E4_1F31_000F_017E
 * @implements 10E4:1F31:000F:017E ()
 *
 * Called From: 10E4:1F28:001B:53E3
 * Called From: 10E4:1F28:0023:968F
 */
void f__10E4_1F31_000F_017E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A2E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A2C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	f__10E4_1F4B_000B_315F(); return;
}

/**
 * Decompiled function f__10E4_1F38_0008_852A()
 *
 * @name f__10E4_1F38_0008_852A
 * @implements 10E4:1F38:0008:852A ()
 *
 * Called From: 10E4:1F47:0009:4DA3
 */
void f__10E4_1F38_0008_852A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	f__10E4_1F4B_000B_315F(); return;
}

/**
 * Decompiled function f__10E4_1F40_0009_4DA3()
 *
 * @name f__10E4_1F40_0009_4DA3
 * @implements 10E4:1F40:0009:4DA3 ()
 *
 * Called From: 10E4:1F2D:001B:53E3
 * Called From: 10E4:1F2D:0023:968F
 */
void f__10E4_1F40_0009_4DA3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A32));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A30));
	f__10E4_1F38_0008_852A(); return;
}

/**
 * Decompiled function f__10E4_1F4B_000B_315F()
 *
 * @name f__10E4_1F4B_000B_315F
 * @implements 10E4:1F4B:000B:315F ()
 *
 * Called From: 10E4:1F3E:0008:852A
 * Called From: 10E4:1F3E:000F:017E
 */
void f__10E4_1F4B_000B_315F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1F56); emu_cs = 0x2605; f__2605_000C_006D_4FAF();
	f__10E4_1F56_0029_2819();
}

/**
 * Decompiled function f__10E4_1F56_0029_2819()
 *
 * @name f__10E4_1F56_0029_2819
 * @implements 10E4:1F56:0029:2819 ()
 *
 * Called From: 10E4:1F56:000B:315F
 */
void f__10E4_1F56_0029_2819()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x376C), emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xF0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x376E));
	if (emu_flags.zf) { f__10E4_1F74_000B_6DC1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__10E4_1F7F_0011_73DB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_1F7F_0011_73DB(); return; }
	emu_ip = 0x200E; emu_last_cs = 0x10E4; emu_last_ip = 0x1F7C; emu_last_length = 0x0029; emu_last_crc = 0x2819; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1F5C_0023_86E9()
 *
 * @name f__10E4_1F5C_0023_86E9
 * @implements 10E4:1F5C:0023:86E9 ()
 *
 * Called From: 10E4:1F14:0023:968F
 * Called From: 10E4:1F14:0040:E33D
 */
void f__10E4_1F5C_0023_86E9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xF0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x376E));
	if (emu_flags.zf) { f__10E4_1F74_000B_6DC1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__10E4_1F7F_0011_73DB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x1F7F; emu_last_cs = 0x10E4; emu_last_ip = 0x1F7A; emu_last_length = 0x0023; emu_last_crc = 0x86E9; emu_call(); return; } // Jump does not resolve
	f__10E4_200E_0027_4CFD(); return;
}

/**
 * Decompiled function f__10E4_1F74_000B_6DC1()
 *
 * @name f__10E4_1F74_000B_6DC1
 * @implements 10E4:1F74:000B:6DC1 ()
 *
 * Called From: 10E4:1F6C:0023:86E9
 * Called From: 10E4:1F6C:0029:2819
 */
void f__10E4_1F74_000B_6DC1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_1F7F_0011_73DB(); return; }
	f__10E4_200E_0027_4CFD(); return;
}

/**
 * Decompiled function f__10E4_1F7F_0011_73DB()
 *
 * @name f__10E4_1F7F_0011_73DB
 * @implements 10E4:1F7F:0011:73DB ()
 *
 * Called From: 10E4:1F72:0023:86E9
 * Called From: 10E4:1F72:0029:2819
 * Called From: 10E4:1F7A:000B:6DC1
 * Called From: 10E4:1F7A:0029:2819
 */
void f__10E4_1F7F_0011_73DB()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8ADE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F90); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__10E4_1F90_0023_7C1B();
}

/**
 * Decompiled function f__10E4_1F90_0023_7C1B()
 *
 * @name f__10E4_1F90_0023_7C1B
 * @implements 10E4:1F90:0023:7C1B ()
 *
 * Called From: 10E4:1F90:0011:73DB
 */
void f__10E4_1F90_0023_7C1B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x751E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_cx.x, 0x4);
	emu_movw(&emu_bx.x, 0x2089);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { f__10E4_1FB3_0004_0494(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__10E4_1FA4_000F_E455(); return; }
	emu_ip = 0x1FEE; emu_last_cs = 0x10E4; emu_last_ip = 0x1FB1; emu_last_length = 0x0023; emu_last_crc = 0x7C1B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_1FA4_000F_E455()
 *
 * @name f__10E4_1FA4_000F_E455
 * @implements 10E4:1FA4:000F:E455 ()
 *
 * Called From: 10E4:1FAF:000F:E455
 * Called From: 10E4:1FAF:0023:7C1B
 */
void f__10E4_1FA4_000F_E455()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { f__10E4_1FB3_0004_0494(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__10E4_1FA4_000F_E455(); return; }
	f__10E4_1FEE_0002_03AC(); return;
}

/**
 * Decompiled function f__10E4_1FB3_0004_0494()
 *
 * @name f__10E4_1FB3_0004_0494
 * @implements 10E4:1FB3:0004:0494 ()
 *
 * Called From: 10E4:1FAA:000F:E455
 * Called From: 10E4:1FAA:0023:7C1B
 */
void f__10E4_1FB3_0004_0494()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x8);
	switch (emu_ip) {
		case 0x1FB7: f__10E4_1FB7_0012_5AD6(); return;
		case 0x1FC9: f__10E4_1FC9_000C_BD80(); return;
		case 0x1FDC: f__10E4_1FDC_0012_428F(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1FB3; emu_last_length = 0x0004; emu_last_crc = 0x0494;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1FB7_0012_5AD6()
 *
 * @name f__10E4_1FB7_0012_5AD6
 * @implements 10E4:1FB7:0012:5AD6 ()
 *
 * Called From: 10E4:1FB3:0004:0494
 */
void f__10E4_1FB7_0012_5AD6()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7520), 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x751F), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C6C), 0xFFFE);
	f__10E4_1FF0_0016_D8E8(); return;
}

/**
 * Decompiled function f__10E4_1FC9_000C_BD80()
 *
 * @name f__10E4_1FC9_000C_BD80
 * @implements 10E4:1FC9:000C:BD80 ()
 *
 * Called From: 10E4:1FB3:0004:0494
 */
void f__10E4_1FC9_000C_BD80()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7520), 0xC);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x751F), 0x0);
	f__10E4_1FE6_0008_D920(); return;
}

/**
 * Decompiled function f__10E4_1FDC_0012_428F()
 *
 * @name f__10E4_1FDC_0012_428F
 * @implements 10E4:1FDC:0012:428F ()
 *
 * Called From: 10E4:1FB3:0004:0494
 */
void f__10E4_1FDC_0012_428F()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7520), 0xC);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x751F), 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C6C), 0xFFFF);
	f__10E4_1FF0_0016_D8E8(); return;
}

/**
 * Decompiled function f__10E4_1FE6_0008_D920()
 *
 * @name f__10E4_1FE6_0008_D920
 * @implements 10E4:1FE6:0008:D920 ()
 *
 * Called From: 10E4:1FD3:000C:BD80
 */
void f__10E4_1FE6_0008_D920()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C6C), 0xFFFF);
	f__10E4_1FF0_0016_D8E8(); return;
}

/**
 * Decompiled function f__10E4_1FEE_0002_03AC()
 *
 * @name f__10E4_1FEE_0002_03AC
 * @implements 10E4:1FEE:0002:03AC ()
 *
 * Called From: 10E4:1FB1:000F:E455
 */
void f__10E4_1FEE_0002_03AC()
{
	f__10E4_1FF0_0016_D8E8(); return;
}

/**
 * Decompiled function f__10E4_1FF0_0016_D8E8()
 *
 * @name f__10E4_1FF0_0016_D8E8
 * @implements 10E4:1FF0:0016:D8E8 ()
 *
 * Called From: 10E4:1FC7:0012:5AD6
 * Called From: 10E4:1FEC:0008:D920
 * Called From: 10E4:1FEC:0012:428F
 * Called From: 10E4:1FEE:0002:03AC
 */
void f__10E4_1FF0_0016_D8E8()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7522), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, -0x7521), emu_ax.l);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8ADE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2006); emu_cs = 0x259E; f__259E_0021_001A_9268();
	f__10E4_2006_002F_1BD7();
}

/**
 * Decompiled function f__10E4_2006_002F_1BD7()
 *
 * @name f__10E4_2006_002F_1BD7
 * @implements 10E4:2006:002F:1BD7 ()
 *
 * Called From: 10E4:2006:0016:D8E8
 */
void f__10E4_2006_002F_1BD7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x376E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_2083_0006_137A(); return; }
	emu_movw(&emu_ax.x, emu_bp + 0x14);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8AEE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; f__01F7_37AF_001F_B961();
	f__10E4_2035_0015_5F2E();
}

/**
 * Decompiled function f__10E4_200E_0027_4CFD()
 *
 * @name f__10E4_200E_0027_4CFD
 * @implements 10E4:200E:0027:4CFD ()
 *
 * Called From: 10E4:1F7C:000B:6DC1
 * Called From: 10E4:1F7C:0023:86E9
 */
void f__10E4_200E_0027_4CFD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x2083; emu_last_cs = 0x10E4; emu_last_ip = 0x2014; emu_last_length = 0x0027; emu_last_crc = 0x4CFD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_bp + 0x14);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8AEE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; f__01F7_37AF_001F_B961();
	f__10E4_2035_0015_5F2E();
}

/**
 * Decompiled function f__10E4_2035_0015_5F2E()
 *
 * @name f__10E4_2035_0015_5F2E
 * @implements 10E4:2035:0015:5F2E ()
 *
 * Called From: 10E4:2035:0027:4CFD
 * Called From: 10E4:2035:002F:1BD7
 */
void f__10E4_2035_0015_5F2E()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax.x, 0xF00);
	emu_cmpw(&emu_ax.x, 0x100);
	if (emu_flags.zf) { f__10E4_204A_000A_A7DF(); return; }
	emu_cmpw(&emu_ax.x, 0x200);
	if (emu_flags.zf) { f__10E4_205C_000A_A7DF(); return; }
	f__10E4_206A_0002_03AC(); return;
}

/**
 * Decompiled function f__10E4_204A_000A_A7DF()
 *
 * @name f__10E4_204A_000A_A7DF
 * @implements 10E4:204A:000A:A7DF ()
 *
 * Called From: 10E4:2041:0015:5F2E
 */
void f__10E4_204A_000A_A7DF()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8AEE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2054); emu_cs = 0x2521; f__2521_0035_0015_2811();
	f__10E4_2054_0008_5A7C();
}

/**
 * Decompiled function f__10E4_2054_0008_5A7C()
 *
 * @name f__10E4_2054_0008_5A7C
 * @implements 10E4:2054:0008:5A7C ()
 *
 * Called From: 10E4:2054:000A:A7DF
 */
void f__10E4_2054_0008_5A7C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_subw(&emu_si, emu_ax.x);
	f__10E4_206C_0014_DA03(); return;
}

/**
 * Decompiled function f__10E4_2058_0004_06BC()
 *
 * @name f__10E4_2058_0004_06BC
 * @implements 10E4:2058:0004:06BC ()
 *
 * Called From: 10E4:2068:0004:0528
 */
void f__10E4_2058_0004_06BC()
{
	emu_subw(&emu_si, emu_ax.x);
	f__10E4_206C_0014_DA03(); return;
}

/**
 * Decompiled function f__10E4_205C_000A_A7DF()
 *
 * @name f__10E4_205C_000A_A7DF
 * @implements 10E4:205C:000A:A7DF ()
 *
 * Called From: 10E4:2046:0015:5F2E
 */
void f__10E4_205C_000A_A7DF()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8AEE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2066); emu_cs = 0x2521; f__2521_0035_0015_2811();
	f__10E4_2066_0004_0528();
}

/**
 * Decompiled function f__10E4_2066_0004_0528()
 *
 * @name f__10E4_2066_0004_0528
 * @implements 10E4:2066:0004:0528 ()
 *
 * Called From: 10E4:2066:000A:A7DF
 */
void f__10E4_2066_0004_0528()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__10E4_2058_0004_06BC(); return;
}

/**
 * Decompiled function f__10E4_206A_0002_03AC()
 *
 * @name f__10E4_206A_0002_03AC
 * @implements 10E4:206A:0002:03AC ()
 *
 * Called From: 10E4:2048:0015:5F2E
 */
void f__10E4_206A_0002_03AC()
{
	f__10E4_206C_0014_DA03(); return;
}

/**
 * Decompiled function f__10E4_206C_0014_DA03()
 *
 * @name f__10E4_206C_0014_DA03
 * @implements 10E4:206C:0014:DA03 ()
 *
 * Called From: 10E4:205A:0004:06BC
 * Called From: 10E4:205A:0008:5A7C
 * Called From: 10E4:206A:0002:03AC
 */
void f__10E4_206C_0014_DA03()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8AEE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x2BC2; f__2BC2_000A_0044_4A53();
	f__10E4_2080_0009_D77B();
}

/**
 * Decompiled function f__10E4_2080_0009_D77B()
 *
 * @name f__10E4_2080_0009_D77B
 * @implements 10E4:2080:0009:D77B ()
 *
 * Called From: 10E4:2080:0014:DA03
 */
void f__10E4_2080_0009_D77B()
{
	emu_addws(&emu_sp, 0xC);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_2083_0006_137A()
 *
 * @name f__10E4_2083_0006_137A
 * @implements 10E4:2083:0006:137A ()
 *
 * Called From: 10E4:2014:002F:1BD7
 */
void f__10E4_2083_0006_137A()
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

/**
 * Decompiled function f__10E4_2099_0012_A974()
 *
 * @name f__10E4_2099_0012_A974
 * @implements 10E4:2099:0012:A974 ()
 *
 * Called From: B4E9:0170:0040:E86F
 * Called From: B4E9:03FC:000E:DB5C
 * Called From: B4F2:0311:0008:5F60
 */
void f__10E4_2099_0012_A974()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_20AB_0009_776B(); return; }
	emu_push(emu_si);
	emu_ip = 0x20AF; emu_last_cs = 0x10E4; emu_last_ip = 0x20A9; emu_last_length = 0x0012; emu_last_crc = 0xA974; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_20AB_0009_776B()
 *
 * @name f__10E4_20AB_0009_776B
 * @implements 10E4:20AB:0009:776B ()
 *
 * Called From: 10E4:20A6:0012:A974
 */
void f__10E4_20AB_0009_776B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x20B4); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_20B4_0025_AD37();
}

/**
 * Decompiled function f__10E4_20B4_0025_AD37()
 *
 * @name f__10E4_20B4_0025_AD37
 * @implements 10E4:20B4:0025:AD37 ()
 *
 * Called From: 10E4:20B4:0009:776B
 */
void f__10E4_20B4_0025_AD37()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3777);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x20D9); emu_cs = 0x34CA; ovl__34CA(0);
	f__10E4_20D9_0022_CEB1();
}

/**
 * Decompiled function f__10E4_20D9_0022_CEB1()
 *
 * @name f__10E4_20D9_0022_CEB1
 * @implements 10E4:20D9:0022:CEB1 ()
 *
 * Called From: 10E4:20D9:0025:AD37
 */
void f__10E4_20D9_0022_CEB1()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x20FB); emu_cs = 0x2BB6; f__2BB6_004F_0014_E253();
	f__10E4_20FB_0028_809F();
}

/**
 * Decompiled function f__10E4_20FB_0028_809F()
 *
 * @name f__10E4_20FB_0028_809F
 * @implements 10E4:20FB:0028:809F ()
 *
 * Called From: 10E4:20FB:0022:CEB1
 */
void f__10E4_20FB_0028_809F()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x46E));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x46C));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2123); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__10E4_2123_0012_8964();
}

/**
 * Decompiled function f__10E4_2123_0012_8964()
 *
 * @name f__10E4_2123_0012_8964
 * @implements 10E4:2123:0012:8964 ()
 *
 * Called From: 10E4:2123:0028:809F
 */
void f__10E4_2123_0012_8964()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x2135); emu_cs = 0x07D4; f__07D4_159A_001D_F67E();
	f__10E4_2135_000A_EF9E();
}

/**
 * Decompiled function f__10E4_2135_000A_EF9E()
 *
 * @name f__10E4_2135_000A_EF9E
 * @implements 10E4:2135:000A:EF9E ()
 *
 * Called From: 10E4:2135:0012:8964
 */
void f__10E4_2135_000A_EF9E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x213F); emu_cs = 0x07D4; f__07D4_0000_0027_B08E();
	f__10E4_213F_0009_05B2();
}

/**
 * Decompiled function f__10E4_213F_0009_05B2()
 *
 * @name f__10E4_213F_0009_05B2
 * @implements 10E4:213F:0009:05B2 ()
 *
 * Called From: 10E4:213F:000A:EF9E
 */
void f__10E4_213F_0009_05B2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2148); f__10E4_0F1A_0088_3BE7();
	f__10E4_2148_0012_F7E9();
}

/**
 * Decompiled function f__10E4_2148_0012_F7E9()
 *
 * @name f__10E4_2148_0012_F7E9
 * @implements 10E4:2148:0012:F7E9 ()
 *
 * Called From: 10E4:2148:0009:05B2
 */
void f__10E4_2148_0012_F7E9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x215A); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_215A_000A_ACA3();
}

/**
 * Decompiled function f__10E4_215A_000A_ACA3()
 *
 * @name f__10E4_215A_000A_ACA3
 * @implements 10E4:215A:000A:ACA3 ()
 *
 * Called From: 10E4:215A:0012:F7E9
 */
void f__10E4_215A_000A_ACA3()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2164); emu_cs = 0x34A2; ovl__34A2(0);
	f__10E4_2164_0013_F522();
}

/**
 * Decompiled function f__10E4_2164_0013_F522()
 *
 * @name f__10E4_2164_0013_F522
 * @implements 10E4:2164:0013:F522 ()
 *
 * Called From: 10E4:2164:000A:ACA3
 */
void f__10E4_2164_0013_F522()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x2177); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_2177_000A_ACA3();
}

/**
 * Decompiled function f__10E4_2177_000A_ACA3()
 *
 * @name f__10E4_2177_000A_ACA3
 * @implements 10E4:2177:000A:ACA3 ()
 *
 * Called From: 10E4:2177:0013:F522
 */
void f__10E4_2177_000A_ACA3()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2181); emu_cs = 0x34A2; ovl__34A2(0);
	f__10E4_2181_0015_2761();
}

/**
 * Decompiled function f__10E4_2181_0015_2761()
 *
 * @name f__10E4_2181_0015_2761
 * @implements 10E4:2181:0015:2761 ()
 *
 * Called From: 10E4:2181:000A:ACA3
 */
void f__10E4_2181_0015_2761()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2196); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__10E4_2196_0005_1FF8();
}

/**
 * Decompiled function f__10E4_2196_0005_1FF8()
 *
 * @name f__10E4_2196_0005_1FF8
 * @implements 10E4:2196:0005:1FF8 ()
 *
 * Called From: 10E4:2196:0015:2761
 */
void f__10E4_2196_0005_1FF8()
{
	emu_addws(&emu_sp, 0x8);
	f__10E4_21B5_0021_873F(); return;
}

/**
 * Decompiled function f__10E4_219B_000B_3F5F()
 *
 * @name f__10E4_219B_000B_3F5F
 * @implements 10E4:219B:000B:3F5F ()
 *
 * Called From: 10E4:21C1:0021:873F
 * Called From: 10E4:21C1:0023:8493
 */
void f__10E4_219B_000B_3F5F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x21A6); emu_cs = 0x0C3A; f__0C3A_092A_0013_5F3A();
	f__10E4_21A6_000D_B23C();
}

/**
 * Decompiled function f__10E4_21A6_000D_B23C()
 *
 * @name f__10E4_21A6_000D_B23C
 * @implements 10E4:21A6:000D:B23C ()
 *
 * Called From: 10E4:21A6:000B:3F5F
 */
void f__10E4_21A6_000D_B23C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__10E4_21B3_0023_8493();
}

/**
 * Decompiled function f__10E4_21B3_0023_8493()
 *
 * @name f__10E4_21B3_0023_8493
 * @implements 10E4:21B3:0023:8493 ()
 *
 * Called From: 10E4:21B3:000D:B23C
 */
void f__10E4_21B3_0023_8493()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__10E4_219B_000B_3F5F(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__10E4_21D6_0005_1FF2();
}

/**
 * Decompiled function f__10E4_21B5_0021_873F()
 *
 * @name f__10E4_21B5_0021_873F
 * @implements 10E4:21B5:0021:873F ()
 *
 * Called From: 10E4:2199:0005:1FF8
 */
void f__10E4_21B5_0021_873F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__10E4_219B_000B_3F5F(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x0FE4; emu_ip = 0x2419; emu_last_cs = 0x10E4; emu_last_ip = 0x21D1; emu_last_length = 0x0021; emu_last_crc = 0x873F; emu_call(); // Jump does not resolve
	f__10E4_21D6_0005_1FF2();
}

/**
 * Decompiled function f__10E4_21D6_0005_1FF2()
 *
 * @name f__10E4_21D6_0005_1FF2
 * @implements 10E4:21D6:0005:1FF2 ()
 *
 * Called From: 10E4:21D6:0023:8493
 */
void f__10E4_21D6_0005_1FF2()
{
	emu_addws(&emu_sp, 0x8);
	f__10E4_21FA_001A_5FB6(); return;
}

/**
 * Decompiled function f__10E4_21DB_000F_0D8F()
 *
 * @name f__10E4_21DB_000F_0D8F
 * @implements 10E4:21DB:000F:0D8F ()
 *
 * Called From: 10E4:2206:001A:5FB6
 * Called From: 10E4:2206:001C:07B1
 */
void f__10E4_21DB_000F_0D8F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x21EA); emu_cs = 0x34CD; ovl__34CD(22);
	f__10E4_21EA_000E_2854();
}

/**
 * Decompiled function f__10E4_21EA_000E_2854()
 *
 * @name f__10E4_21EA_000E_2854
 * @implements 10E4:21EA:000E:2854 ()
 *
 * Called From: 10E4:21EA:000F:0D8F
 */
void f__10E4_21EA_000E_2854()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21F8); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__10E4_21F8_001C_07B1();
}

/**
 * Decompiled function f__10E4_21F8_001C_07B1()
 *
 * @name f__10E4_21F8_001C_07B1
 * @implements 10E4:21F8:001C:07B1 ()
 *
 * Called From: 10E4:21F8:000E:2854
 */
void f__10E4_21F8_001C_07B1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__10E4_21DB_000F_0D8F(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x2270; emu_last_cs = 0x10E4; emu_last_ip = 0x220A; emu_last_length = 0x001C; emu_last_crc = 0x07B1; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2214); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_2214_0006_079E();
}

/**
 * Decompiled function f__10E4_21FA_001A_5FB6()
 *
 * @name f__10E4_21FA_001A_5FB6
 * @implements 10E4:21FA:001A:5FB6 ()
 *
 * Called From: 10E4:21D9:0005:1FF2
 */
void f__10E4_21FA_001A_5FB6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__10E4_21DB_000F_0D8F(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x2270; emu_last_cs = 0x10E4; emu_last_ip = 0x220A; emu_last_length = 0x001A; emu_last_crc = 0x5FB6; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2214); emu_cs = 0x2598; emu_ip = 0x2214; emu_last_cs = 0x10E4; emu_last_ip = 0x220F; emu_last_length = 0x001A; emu_last_crc = 0x5FB6; emu_call(); // Jump does not resolve
	f__10E4_2214_0006_079E();
}

/**
 * Decompiled function f__10E4_2214_0006_079E()
 *
 * @name f__10E4_2214_0006_079E
 * @implements 10E4:2214:0006:079E ()
 *
 * Called From: 10E4:2214:001C:07B1
 */
void f__10E4_2214_0006_079E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x221A); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	f__10E4_221A_0020_7795();
}

/**
 * Decompiled function f__10E4_221A_0020_7795()
 *
 * @name f__10E4_221A_0020_7795
 * @implements 10E4:221A:0020:7795 ()
 *
 * Called From: 10E4:221A:0006:079E
 */
void f__10E4_221A_0020_7795()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x223A); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__10E4_223A_000F_3833();
}

/**
 * Decompiled function f__10E4_223A_000F_3833()
 *
 * @name f__10E4_223A_000F_3833
 * @implements 10E4:223A:000F:3833 ()
 *
 * Called From: 10E4:223A:0020:7795
 */
void f__10E4_223A_000F_3833()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (!emu_flags.zf) { f__10E4_2249_000C_C3A3(); return; }
	emu_movw(&emu_ax.x, 0x2);
	f__10E4_224C_0009_4BA8(); return;
}

/**
 * Decompiled function f__10E4_2249_000C_C3A3()
 *
 * @name f__10E4_2249_000C_C3A3
 * @implements 10E4:2249:000C:C3A3 ()
 *
 * Called From: 10E4:2242:000F:3833
 */
void f__10E4_2249_000C_C3A3()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x2255); f__10E4_0675_0026_5758();
	f__10E4_2255_0013_1DC9();
}

/**
 * Decompiled function f__10E4_224C_0009_4BA8()
 *
 * @name f__10E4_224C_0009_4BA8
 * @implements 10E4:224C:0009:4BA8 ()
 *
 * Called From: 10E4:2247:000F:3833
 */
void f__10E4_224C_0009_4BA8()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x2255); f__10E4_0675_0026_5758();
	f__10E4_2255_0013_1DC9();
}

/**
 * Decompiled function f__10E4_2255_0013_1DC9()
 *
 * @name f__10E4_2255_0013_1DC9
 * @implements 10E4:2255:0013:1DC9 ()
 *
 * Called From: 10E4:2255:0009:4BA8
 * Called From: 10E4:2255:000C:C3A3
 */
void f__10E4_2255_0013_1DC9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x2268); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	f__10E4_2268_0008_F4BE();
}

/**
 * Decompiled function f__10E4_2268_0008_F4BE()
 *
 * @name f__10E4_2268_0008_F4BE
 * @implements 10E4:2268:0008:F4BE ()
 *
 * Called From: 10E4:2268:0013:1DC9
 */
void f__10E4_2268_0008_F4BE()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x2270); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	f__10E4_2270_0006_04AA();
}

/**
 * Decompiled function f__10E4_2270_0006_04AA()
 *
 * @name f__10E4_2270_0006_04AA
 * @implements 10E4:2270:0006:04AA ()
 *
 * Called From: 10E4:2270:0008:F4BE
 */
void f__10E4_2270_0006_04AA()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2276); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__10E4_2276_000D_F8EE();
}

/**
 * Decompiled function f__10E4_2276_000D_F8EE()
 *
 * @name f__10E4_2276_000D_F8EE
 * @implements 10E4:2276:000D:F8EE ()
 *
 * Called From: 10E4:2276:0006:04AA
 */
void f__10E4_2276_000D_F8EE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x2283); f__10E4_0675_0026_5758();
	f__10E4_2283_0007_29BA();
}

/**
 * Decompiled function f__10E4_2283_0007_29BA()
 *
 * @name f__10E4_2283_0007_29BA
 * @implements 10E4:2283:0007:29BA ()
 *
 * Called From: 10E4:2283:000D:F8EE
 */
void f__10E4_2283_0007_29BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x228A); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	f__10E4_228A_0006_137A();
}

/**
 * Decompiled function f__10E4_228A_0006_137A()
 *
 * @name f__10E4_228A_0006_137A
 * @implements 10E4:228A:0006:137A ()
 *
 * Called From: 10E4:228A:0007:29BA
 */
void f__10E4_228A_0006_137A()
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

/**
 * Decompiled function f__10E4_2290_0012_7C2F()
 *
 * @name f__10E4_2290_0012_7C2F
 * @implements 10E4:2290:0012:7C2F ()
 *
 * Called From: 0AEC:0841:0005:18E0
 * Called From: 10E4:1142:000E:F0CF
 */
void f__10E4_2290_0012_7C2F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_push(emu_cs); emu_push(0x22A2); emu_cs = 0x34CD; ovl__34CD(30);
	f__10E4_22A2_0012_AD50();
}

/**
 * Decompiled function f__10E4_22A2_0012_AD50()
 *
 * @name f__10E4_22A2_0012_AD50
 * @implements 10E4:22A2:0012:AD50 ()
 *
 * Called From: 10E4:22A2:0012:7C2F
 */
void f__10E4_22A2_0012_AD50()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__10E4_22B4_0039_89F3(); return; }
	emu_ip = 0x2351; emu_last_cs = 0x10E4; emu_last_ip = 0x22B1; emu_last_length = 0x0012; emu_last_crc = 0xAD50; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_22B4_0039_89F3()
 *
 * @name f__10E4_22B4_0039_89F3
 * @implements 10E4:22B4:0039:89F3 ()
 *
 * Called From: 10E4:22AF:0012:AD50
 */
void f__10E4_22B4_0039_89F3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { f__10E4_232F_0024_3B70(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x2);
	if (emu_flags.zf) { f__10E4_22ED_001A_9BAF(); return; }
	emu_movw(&emu_si, 0x90);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x681B), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x2353; emu_last_cs = 0x10E4; emu_last_ip = 0x22EB; emu_last_length = 0x0039; emu_last_crc = 0x89F3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_22E5_0008_B440()
 *
 * @name f__10E4_22E5_0008_B440
 * @implements 10E4:22E5:0008:B440 ()
 *
 * Called From: 10E4:2351:0002:0288
 */
void f__10E4_22E5_0008_B440()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x681B), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	f__10E4_2353_0005_04BA(); return;
}

/**
 * Decompiled function f__10E4_22ED_001A_9BAF()
 *
 * @name f__10E4_22ED_001A_9BAF
 * @implements 10E4:22ED:001A:9BAF ()
 *
 * Called From: 10E4:22E0:0039:89F3
 */
void f__10E4_22ED_001A_9BAF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__10E4_232A_0005_16B8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4000);
	if (emu_flags.zf) { f__10E4_2307_000F_8985(); return; }
	emu_movw(&emu_si, 0x28);
	f__10E4_2328_0002_03AA(); return;
}

/**
 * Decompiled function f__10E4_2307_000F_8985()
 *
 * @name f__10E4_2307_000F_8985
 * @implements 10E4:2307:000F:8985 ()
 *
 * Called From: 10E4:2300:001A:9BAF
 */
void f__10E4_2307_000F_8985()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { f__10E4_2316_000F_3DA7(); return; }
	emu_movw(&emu_si, 0x2E);
	f__10E4_2328_0002_03AA(); return;
}

/**
 * Decompiled function f__10E4_2316_000F_3DA7()
 *
 * @name f__10E4_2316_000F_3DA7
 * @implements 10E4:2316:000F:3DA7 ()
 *
 * Called From: 10E4:230F:000F:8985
 */
void f__10E4_2316_000F_3DA7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x2325; emu_last_cs = 0x10E4; emu_last_ip = 0x231E; emu_last_length = 0x000F; emu_last_crc = 0x3DA7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x26);
	f__10E4_2328_0002_03AA(); return;
}

/**
 * Decompiled function f__10E4_2328_0002_03AA()
 *
 * @name f__10E4_2328_0002_03AA
 * @implements 10E4:2328:0002:03AA ()
 *
 * Called From: 10E4:2305:001A:9BAF
 * Called From: 10E4:2314:000F:8985
 * Called From: 10E4:2323:000F:3DA7
 */
void f__10E4_2328_0002_03AA()
{
	f__10E4_232D_0002_03E8(); return;
}

/**
 * Decompiled function f__10E4_232A_0005_16B8()
 *
 * @name f__10E4_232A_0005_16B8
 * @implements 10E4:232A:0005:16B8 ()
 *
 * Called From: 10E4:22F5:001A:9BAF
 */
void f__10E4_232A_0005_16B8()
{
	emu_movw(&emu_si, 0x29);
	f__10E4_2351_0002_0288(); return;
}

/**
 * Decompiled function f__10E4_232D_0002_03E8()
 *
 * @name f__10E4_232D_0002_03E8
 * @implements 10E4:232D:0002:03E8 ()
 *
 * Called From: 10E4:2328:0002:03AA
 */
void f__10E4_232D_0002_03E8()
{
	f__10E4_2351_0002_0288(); return;
}

/**
 * Decompiled function f__10E4_232F_0024_3B70()
 *
 * @name f__10E4_232F_0024_3B70
 * @implements 10E4:232F:0024:3B70 ()
 *
 * Called From: 10E4:22D5:0039:89F3
 */
void f__10E4_232F_0024_3B70()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__10E4_2351_0002_0288(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x380A));
	emu_addw(&emu_ax.x, 0x29);
	emu_movw(&emu_si, emu_ax.x);
	emu_ip = 0x22E5; emu_last_cs = 0x10E4; emu_last_ip = 0x2351; emu_last_length = 0x0024; emu_last_crc = 0x3B70; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__10E4_2351_0002_0288()
 *
 * @name f__10E4_2351_0002_0288
 * @implements 10E4:2351:0002:0288 ()
 *
 * Called From: 10E4:232D:0005:16B8
 * Called From: 10E4:232D:0002:03E8
 * Called From: 10E4:2337:0024:3B70
 */
void f__10E4_2351_0002_0288()
{
	f__10E4_22E5_0008_B440(); return;
}

/**
 * Decompiled function f__10E4_2353_0005_04BA()
 *
 * @name f__10E4_2353_0005_04BA
 * @implements 10E4:2353:0005:04BA ()
 *
 * Called From: 10E4:22EB:0008:B440
 */
void f__10E4_2353_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
