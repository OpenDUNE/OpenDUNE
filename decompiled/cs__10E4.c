/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__10E4_0008_0048_5BD4()
 *
 * @name f__10E4_0008_0048_5BD4
 * @implements 10E4:0008:0048:5BD4 ()
 *
 * Called From: 0AEC:08C8:001D:86CA
 * Called From: 0AEC:0DCC:001C:B1BE
 * Called From: 0AEC:0EF2:001D:E4CA
 * Called From: 10E4:060F:001C:D5D7
 * Called From: 10E4:060F:0019:5FFF
 * Called From: 10E4:065D:004E:2D73
 * Called From: 10E4:0EC5:003D:04DF
 * Called From: B4DA:144D:0031:E430
 * Called From: B4DA:1480:0033:28A2
 * Called From: B4F2:0749:002C:58CA
 */
void f__10E4_0008_0048_5BD4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x3604);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_flags.zf) { f__10E4_0053_0024_0714(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0050);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x004B; emu_last_length = 0x0048; emu_last_crc = 0x5BD4;
			emu_call();
			return;
	}
	f__10E4_0050_0027_1641();
}

/**
 * Decompiled function f__10E4_0050_0027_1641()
 *
 * @name f__10E4_0050_0027_1641
 * @implements 10E4:0050:0027:1641 ()
 *
 * Called From: 10E4:0050:0048:5BD4
 */
void f__10E4_0050_0027_1641()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x0077);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0072; emu_last_length = 0x0027; emu_last_crc = 0x1641;
			emu_call();
			return;
	}
	f__10E4_0077_0027_66BA();
}

/**
 * Decompiled function f__10E4_0053_0024_0714()
 *
 * @name f__10E4_0053_0024_0714
 * @implements 10E4:0053:0024:0714 ()
 *
 * Called From: 10E4:0030:0048:5BD4
 */
void f__10E4_0053_0024_0714()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x0077);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0072; emu_last_length = 0x0024; emu_last_crc = 0x0714;
			emu_call();
			return;
	}
	f__10E4_0077_0027_66BA();
}

/**
 * Decompiled function f__10E4_0077_0027_66BA()
 *
 * @name f__10E4_0077_0027_66BA
 * @implements 10E4:0077:0027:66BA ()
 *
 * Called From: 10E4:0077:0027:1641
 * Called From: 10E4:0077:0024:0714
 */
void f__10E4_0077_0027_66BA()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x009E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0099; emu_last_length = 0x0027; emu_last_crc = 0x66BA;
			emu_call();
			return;
	}
	f__10E4_009E_001D_1DE6();
}

/**
 * Decompiled function f__10E4_009E_001D_1DE6()
 *
 * @name f__10E4_009E_001D_1DE6
 * @implements 10E4:009E:001D:1DE6 ()
 *
 * Called From: 10E4:009E:0027:66BA
 */
void f__10E4_009E_001D_1DE6()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x00BB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x00B6; emu_last_length = 0x001D; emu_last_crc = 0x1DE6;
			emu_call();
			return;
	}
	f__10E4_00BB_001D_C1D8();
}

/**
 * Decompiled function f__10E4_00BB_001D_C1D8()
 *
 * @name f__10E4_00BB_001D_C1D8
 * @implements 10E4:00BB:001D:C1D8 ()
 *
 * Called From: 10E4:00BB:001D:1DE6
 */
void f__10E4_00BB_001D_C1D8()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x00D8);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x00D3; emu_last_length = 0x001D; emu_last_crc = 0xC1D8;
			emu_call();
			return;
	}
	f__10E4_00D8_001B_A6F6();
}

/**
 * Decompiled function f__10E4_00D8_001B_A6F6()
 *
 * @name f__10E4_00D8_001B_A6F6
 * @implements 10E4:00D8:001B:A6F6 ()
 *
 * Called From: 10E4:00D8:001D:C1D8
 */
void f__10E4_00D8_001B_A6F6()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66A2);
	emu_push(0x00F3);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: f__22A6_0F76_002C_45CC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x00EE; emu_last_length = 0x001B; emu_last_crc = 0xA6F6;
			emu_call();
			return;
	}
	f__10E4_00F3_001B_D60B();
}

/**
 * Decompiled function f__10E4_00F3_001B_D60B()
 *
 * @name f__10E4_00F3_001B_D60B
 * @implements 10E4:00F3:001B:D60B ()
 *
 * Called From: 10E4:00F3:001B:A6F6
 */
void f__10E4_00F3_001B_D60B()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66A2);
	emu_push(0x010E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: f__22A6_0F76_002C_45CC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0109; emu_last_length = 0x001B; emu_last_crc = 0xD60B;
			emu_call();
			return;
	}
	f__10E4_010E_0009_B383();
}

/**
 * Decompiled function f__10E4_010E_0009_B383()
 *
 * @name f__10E4_010E_0009_B383
 * @implements 10E4:010E:0009:B383 ()
 *
 * Called From: 10E4:010E:001B:D60B
 */
void f__10E4_010E_0009_B383()
{
	emu_addw(&emu_sp, 0x6);
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
 * Decompiled function f__10E4_0117_0015_392D()
 *
 * @name f__10E4_0117_0015_392D
 * @implements 10E4:0117:0015:392D ()
 *
 * Called From: 0972:0E0D:001E:8A47
 * Called From: 0AEC:064B:002B:F4D5
 * Called From: 0AEC:06D7:000D:1D7F
 * Called From: 0C3A:18B7:0022:9131
 * Called From: 0F78:0386:004C:F314
 * Called From: 1423:0A6A:0015:B691
 * Called From: 1A34:104B:0038:DAAE
 */
void f__10E4_0117_0015_392D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_flags.zf) { f__10E4_012C_0030_DB62(); return; }
	f__10E4_01AE_0004_9539(); return;
}

/**
 * Decompiled function f__10E4_012C_0030_DB62()
 *
 * @name f__10E4_012C_0030_DB62
 * @implements 10E4:012C:0030:DB62 ()
 *
 * Called From: 10E4:0127:0015:392D
 */
void f__10E4_012C_0030_DB62()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_01AE_0004_9539(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x0);
	if (emu_flags.zf) { f__10E4_01AE_0004_9539(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01AE; emu_last_cs = 0x10E4; emu_last_ip = 0x013C; emu_last_length = 0x0030; emu_last_crc = 0xDB62; emu_call(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_bx, 0x20);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_bx, 0x20);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x015C); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	f__10E4_015C_0043_1BB4();
}

/**
 * Decompiled function f__10E4_015C_0043_1BB4()
 *
 * @name f__10E4_015C_0043_1BB4
 * @implements 10E4:015C:0043:1BB4 ()
 *
 * Called From: 10E4:015C:0030:DB62
 */
void f__10E4_015C_0043_1BB4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x37F2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x37F0));
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_dx, emu_ax);
	if (!emu_flags.zf) { f__10E4_01AE_0004_9539(); return; }
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_ds, emu_bx, 0x37F0), emu_dx);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx, 0x37F2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38C8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38C6));
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	f__10E4_019F_000A_1FB5();
}

/**
 * Decompiled function f__10E4_019F_000A_1FB5()
 *
 * @name f__10E4_019F_000A_1FB5
 * @implements 10E4:019F:000A:1FB5 ()
 *
 * Called From: 10E4:019F:0043:1BB4
 */
void f__10E4_019F_000A_1FB5()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01A9); f__10E4_0273_0029_DCE5();
	f__10E4_01A9_0005_86EE();
}

/**
 * Decompiled function f__10E4_01A9_0005_86EE()
 *
 * @name f__10E4_01A9_0005_86EE
 * @implements 10E4:01A9:0005:86EE ()
 *
 * Called From: 10E4:01A9:000A:1FB5
 */
void f__10E4_01A9_0005_86EE()
{
	emu_addw(&emu_sp, 0x6);
	f__10E4_01B2_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_01AC_0002_C23A()
 *
 * @name f__10E4_01AC_0002_C23A
 * @implements 10E4:01AC:0002:C23A ()
 *
 * Called From: 10E4:01B0:0004:9539
 */
void f__10E4_01AC_0002_C23A()
{
	f__10E4_01B2_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_01AE_0004_9539()
 *
 * @name f__10E4_01AE_0004_9539
 * @implements 10E4:01AE:0004:9539 ()
 *
 * Called From: 10E4:0129:0015:392D
 * Called From: 10E4:012E:0030:DB62
 * Called From: 10E4:0135:0030:DB62
 * Called From: 10E4:0178:0043:1BB4
 */
void f__10E4_01AE_0004_9539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__10E4_01AC_0002_C23A(); return;
}

/**
 * Decompiled function f__10E4_01B2_0006_F7CE()
 *
 * @name f__10E4_01B2_0006_F7CE
 * @implements 10E4:01B2:0006:F7CE ()
 *
 * Called From: 10E4:01AC:0002:C23A
 * Called From: 10E4:01AC:0005:86EE
 */
void f__10E4_01B2_0006_F7CE()
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
 * Decompiled function f__10E4_01B8_0014_5104()
 *
 * @name f__10E4_01B8_0014_5104
 * @implements 10E4:01B8:0014:5104 ()
 *
 * Called From: 10E4:0301:0017:D70D
 * Called From: 10E4:0301:001A:F90C
 * Called From: B4DA:0B7C:001C:98BD
 */
void f__10E4_01B8_0014_5104()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10E4_01CC_0003_DD03(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__10E4_026F_0004_DE52(); return;
}

/**
 * Decompiled function f__10E4_01C9_0003_DD08()
 *
 * @name f__10E4_01C9_0003_DD08
 * @implements 10E4:01C9:0003:DD08 ()
 *
 * Called From: 10E4:026C:0005:96E2
 */
void f__10E4_01C9_0003_DD08()
{
	f__10E4_026F_0004_DE52(); return;
}

/**
 * Decompiled function f__10E4_01CC_0003_DD03()
 *
 * @name f__10E4_01CC_0003_DD03
 * @implements 10E4:01CC:0003:DD03 ()
 *
 * Called From: 10E4:01C5:0014:5104
 */
void f__10E4_01CC_0003_DD03()
{
	f__10E4_025E_000C_5CBF(); return;
}

/**
 * Decompiled function f__10E4_01CF_0005_A04D()
 *
 * @name f__10E4_01CF_0005_A04D
 * @implements 10E4:01CF:0005:A04D ()
 *
 * Called From: 10E4:0267:000C:5CBF
 * Called From: 10E4:0267:0021:9EF4
 */
void f__10E4_01CF_0005_A04D()
{
	emu_xorw(&emu_si, emu_si);
	emu_incw(&emu_di);
	f__10E4_01E6_002A_1581(); return;
}

/**
 * Decompiled function f__10E4_01D4_000F_1B45()
 *
 * @name f__10E4_01D4_000F_1B45
 * @implements 10E4:01D4:000F:1B45 ()
 *
 * Called From: 10E4:0207:002A:1581
 * Called From: 10E4:0207:002D:DDAD
 */
void f__10E4_01D4_000F_1B45()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	f__10E4_01E3_002D_DDAD();
}

/**
 * Decompiled function f__10E4_01E3_002D_DDAD()
 *
 * @name f__10E4_01E3_002D_DDAD
 * @implements 10E4:01E3:002D:DDAD ()
 *
 * Called From: 10E4:01E3:000F:1B45
 */
void f__10E4_01E3_002D_DDAD()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0209_0007_D67A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { f__10E4_0209_0007_D67A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { f__10E4_0209_0007_D67A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_01D4_000F_1B45(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0249_0021_9EF4(); return; }
	/* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x10E4; emu_last_ip = 0x020E; emu_last_length = 0x002D; emu_last_crc = 0xDDAD; emu_call();
}

/**
 * Decompiled function f__10E4_01E6_002A_1581()
 *
 * @name f__10E4_01E6_002A_1581
 * @implements 10E4:01E6:002A:1581 ()
 *
 * Called From: 10E4:01D2:0005:A04D
 */
void f__10E4_01E6_002A_1581()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01E9; emu_last_length = 0x002A; emu_last_crc = 0x1581; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01F5; emu_last_length = 0x002A; emu_last_crc = 0x1581; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0209; emu_last_cs = 0x10E4; emu_last_ip = 0x01FE; emu_last_length = 0x002A; emu_last_crc = 0x1581; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_01D4_000F_1B45(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x020C; emu_last_length = 0x002A; emu_last_crc = 0x1581; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x10E4; emu_last_ip = 0x020E; emu_last_length = 0x002A; emu_last_crc = 0x1581; emu_call();
}

/**
 * Decompiled function f__10E4_0209_0007_D67A()
 *
 * @name f__10E4_0209_0007_D67A
 * @implements 10E4:0209:0007:D67A ()
 *
 * Called From: 10E4:01E9:002D:DDAD
 * Called From: 10E4:01F5:002D:DDAD
 * Called From: 10E4:01FE:002D:DDAD
 */
void f__10E4_0209_0007_D67A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0249_0021_9EF4(); return; }
	f__10E4_0222_0048_802A(); return;
}

/**
 * Decompiled function f__10E4_0210_000F_1B44()
 *
 * @name f__10E4_0210_000F_1B44
 * @implements 10E4:0210:000F:1B44 ()
 *
 * Called From: 10E4:0247:0048:802A
 * Called From: 10E4:0247:004B:AA99
 */
void f__10E4_0210_000F_1B44()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x021F); emu_cs = 0x2521; f__2521_000F_0022_6D87();
	f__10E4_021F_004B_AA99();
}

/**
 * Decompiled function f__10E4_021F_004B_AA99()
 *
 * @name f__10E4_021F_004B_AA99
 * @implements 10E4:021F:004B:AA99 ()
 *
 * Called From: 10E4:021F:000F:1B44
 */
void f__10E4_021F_004B_AA99()
{
	emu_pop(&emu_cx);
	emu_subw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_flags.zf) { f__10E4_0249_0021_9EF4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x0235; emu_last_length = 0x004B; emu_last_crc = 0xAA99; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x023E; emu_last_length = 0x004B; emu_last_crc = 0xAA99; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_0210_000F_1B44(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x025E; emu_last_cs = 0x10E4; emu_last_ip = 0x0250; emu_last_length = 0x004B; emu_last_crc = 0xAA99; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x026A; emu_last_cs = 0x10E4; emu_last_ip = 0x0265; emu_last_length = 0x004B; emu_last_crc = 0xAA99; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x01CF; emu_last_cs = 0x10E4; emu_last_ip = 0x0267; emu_last_length = 0x004B; emu_last_crc = 0xAA99; emu_call();
}

/**
 * Decompiled function f__10E4_0222_0048_802A()
 *
 * @name f__10E4_0222_0048_802A
 * @implements 10E4:0222:0048:802A ()
 *
 * Called From: 10E4:020E:0007:D67A
 */
void f__10E4_0222_0048_802A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_flags.zf) { f__10E4_0249_0021_9EF4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x0235; emu_last_length = 0x0048; emu_last_crc = 0x802A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x10E4; emu_last_ip = 0x023E; emu_last_length = 0x0048; emu_last_crc = 0x802A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (!emu_flags.zf) { f__10E4_0210_000F_1B44(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x025E; emu_last_cs = 0x10E4; emu_last_ip = 0x0250; emu_last_length = 0x0048; emu_last_crc = 0x802A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x026A; emu_last_cs = 0x10E4; emu_last_ip = 0x0265; emu_last_length = 0x0048; emu_last_crc = 0x802A; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x01CF; emu_last_cs = 0x10E4; emu_last_ip = 0x0267; emu_last_length = 0x0048; emu_last_crc = 0x802A; emu_call();
}

/**
 * Decompiled function f__10E4_0249_0021_9EF4()
 *
 * @name f__10E4_0249_0021_9EF4
 * @implements 10E4:0249:0021:9EF4 ()
 *
 * Called From: 10E4:020C:002D:DDAD
 * Called From: 10E4:020C:0007:D67A
 * Called From: 10E4:0229:004B:AA99
 * Called From: 10E4:0229:0048:802A
 */
void f__10E4_0249_0021_9EF4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__10E4_025E_000C_5CBF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x026A; emu_last_cs = 0x10E4; emu_last_ip = 0x0265; emu_last_length = 0x0021; emu_last_crc = 0x9EF4; emu_call(); return; }
	f__10E4_01CF_0005_A04D(); return;
}

/**
 * Decompiled function f__10E4_025E_000C_5CBF()
 *
 * @name f__10E4_025E_000C_5CBF
 * @implements 10E4:025E:000C:5CBF ()
 *
 * Called From: 10E4:01CC:0003:DD03
 * Called From: 10E4:0250:0021:9EF4
 */
void f__10E4_025E_000C_5CBF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__10E4_026A_0005_96E2(); return; }
	f__10E4_01CF_0005_A04D(); return;
}

/**
 * Decompiled function f__10E4_026A_0005_96E2()
 *
 * @name f__10E4_026A_0005_96E2
 * @implements 10E4:026A:0005:96E2 ()
 *
 * Called From: 10E4:0265:000C:5CBF
 */
void f__10E4_026A_0005_96E2()
{
	emu_movw(&emu_ax, emu_di);
	f__10E4_01C9_0003_DD08(); return;
}

/**
 * Decompiled function f__10E4_026F_0004_DE52()
 *
 * @name f__10E4_026F_0004_DE52
 * @implements 10E4:026F:0004:DE52 ()
 *
 * Called From: 10E4:01C9:0014:5104
 * Called From: 10E4:01C9:0003:DD08
 */
void f__10E4_026F_0004_DE52()
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
 * Decompiled function f__10E4_0273_0029_DCE5()
 *
 * @name f__10E4_0273_0029_DCE5
 * @implements 10E4:0273:0029:DCE5 ()
 *
 * Called From: 10E4:01A6:000A:1FB5
 * Called From: 1423:0345:0008:250B
 * Called From: 1423:0480:0008:250B
 */
void f__10E4_0273_0029_DCE5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_bp + 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x87D8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x029C); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
	f__10E4_029C_0008_D3E0();
}

/**
 * Decompiled function f__10E4_029C_0008_D3E0()
 *
 * @name f__10E4_029C_0008_D3E0
 * @implements 10E4:029C:0008:D3E0 ()
 *
 * Called From: 10E4:029C:0029:DCE5
 */
void f__10E4_029C_0008_D3E0()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__10E4_02A4_0008_64F7();
}

/**
 * Decompiled function f__10E4_02A4_0008_64F7()
 *
 * @name f__10E4_02A4_0008_64F7
 * @implements 10E4:02A4:0008:64F7 ()
 *
 * Called From: 10E4:02A4:0008:D3E0
 */
void f__10E4_02A4_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02AC); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_02AC_001F_7C5E();
}

/**
 * Decompiled function f__10E4_02AC_001F_7C5E()
 *
 * @name f__10E4_02AC_001F_7C5E
 * @implements 10E4:02AC:001F:7C5E ()
 *
 * Called From: 10E4:02AC:0008:64F7
 */
void f__10E4_02AC_001F_7C5E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x02CB); f__10E4_1EF1_0040_01F8();
	f__10E4_02CB_000C_4D8E();
}

/**
 * Decompiled function f__10E4_02CB_000C_4D8E()
 *
 * @name f__10E4_02CB_000C_4D8E
 * @implements 10E4:02CB:000C:4D8E ()
 *
 * Called From: 10E4:02CB:001F:7C5E
 */
void f__10E4_02CB_000C_4D8E()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_02D7_0013_3DCE();
}

/**
 * Decompiled function f__10E4_02D7_0013_3DCE()
 *
 * @name f__10E4_02D7_0013_3DCE
 * @implements 10E4:02D7:0013:3DCE ()
 *
 * Called From: 10E4:02D7:000C:4D8E
 */
void f__10E4_02D7_0013_3DCE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_flags.zf) { f__10E4_02EA_001A_F90C(); return; }
	emu_movw(&emu_ax, 0x7);
	f__10E4_02ED_0017_D70D(); return;
}

/**
 * Decompiled function f__10E4_02EA_001A_F90C()
 *
 * @name f__10E4_02EA_001A_F90C
 * @implements 10E4:02EA:001A:F90C ()
 *
 * Called From: 10E4:02E3:0013:3DCE
 */
void f__10E4_02EA_001A_F90C()
{
	emu_movw(&emu_ax, 0x2);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_subw(&emu_dx, emu_ax);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_subw(&emu_dx, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x87D8);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0304); f__10E4_01B8_0014_5104();
	f__10E4_0304_000E_92AF();
}

/**
 * Decompiled function f__10E4_02ED_0017_D70D()
 *
 * @name f__10E4_02ED_0017_D70D
 * @implements 10E4:02ED:0017:D70D ()
 *
 * Called From: 10E4:02E8:0013:3DCE
 */
void f__10E4_02ED_0017_D70D()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_subw(&emu_dx, emu_ax);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_subw(&emu_dx, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x87D8);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0304); f__10E4_01B8_0014_5104();
	f__10E4_0304_000E_92AF();
}

/**
 * Decompiled function f__10E4_0304_000E_92AF()
 *
 * @name f__10E4_0304_000E_92AF
 * @implements 10E4:0304:000E:92AF ()
 *
 * Called From: 10E4:0304:0017:D70D
 * Called From: 10E4:0304:001A:F90C
 */
void f__10E4_0304_000E_92AF()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, 0x3);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0312_001A_FA8B(); return; }
	emu_movw(&emu_ax, emu_di);
	f__10E4_0315_0017_548A(); return;
}

/**
 * Decompiled function f__10E4_0312_001A_FA8B()
 *
 * @name f__10E4_0312_001A_FA8B
 * @implements 10E4:0312:001A:FA8B ()
 *
 * Called From: 10E4:030C:000E:92AF
 */
void f__10E4_0312_001A_FA8B()
{
	emu_movw(&emu_ax, 0x3);
	emu_movw(&emu_di, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_imuluw(&emu_ax, emu_di);
	emu_addw(&emu_ax, 0x12);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4078), emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_032C_001C_5313();
}

/**
 * Decompiled function f__10E4_0315_0017_548A()
 *
 * @name f__10E4_0315_0017_548A
 * @implements 10E4:0315:0017:548A ()
 *
 * Called From: 10E4:0310:000E:92AF
 */
void f__10E4_0315_0017_548A()
{
	emu_movw(&emu_di, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_imuluw(&emu_ax, emu_di);
	emu_addw(&emu_ax, 0x12);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4078), emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_032C_001C_5313();
}

/**
 * Decompiled function f__10E4_032C_001C_5313()
 *
 * @name f__10E4_032C_001C_5313
 * @implements 10E4:032C:001C:5313 ()
 *
 * Called From: 10E4:032C:001A:FA8B
 * Called From: 10E4:032C:0017:548A
 */
void f__10E4_032C_001C_5313()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3602));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0375; emu_last_cs = 0x10E4; emu_last_ip = 0x0334; emu_last_length = 0x001C; emu_last_crc = 0x5313; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66E6);
	emu_push(0x0348);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_F8C9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0343; emu_last_length = 0x001C; emu_last_crc = 0x5313;
			emu_call();
			return;
	}
	f__10E4_0348_0009_0D32();
}

/**
 * Decompiled function f__10E4_0348_0009_0D32()
 *
 * @name f__10E4_0348_0009_0D32
 * @implements 10E4:0348:0009:0D32 ()
 *
 * Called From: 10E4:0348:001C:5313
 */
void f__10E4_0348_0009_0D32()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	f__10E4_0351_0016_FC40();
}

/**
 * Decompiled function f__10E4_0351_0016_FC40()
 *
 * @name f__10E4_0351_0016_FC40
 * @implements 10E4:0351:0016:FC40 ()
 *
 * Called From: 10E4:0351:0009:0D32
 */
void f__10E4_0351_0016_FC40()
{
	emu_orw(&emu_dx, emu_dx);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0373; emu_last_cs = 0x10E4; emu_last_ip = 0x0353; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	if (!emu_flags.zf) { f__10E4_035B_000C_1AF8(); return; }
	emu_cmpw(&emu_ax, emu_si);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0373; emu_last_cs = 0x10E4; emu_last_ip = 0x0359; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x23E1; emu_ip = 0x0004; emu_last_cs = 0x10E4; emu_last_ip = 0x0362; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call();
	f__10E4_0367_000C_050A();
}

/**
 * Decompiled function f__10E4_035B_000C_1AF8()
 *
 * @name f__10E4_035B_000C_1AF8
 * @implements 10E4:035B:000C:1AF8 ()
 *
 * Called From: 10E4:0355:0016:FC40
 */
void f__10E4_035B_000C_1AF8()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__10E4_0367_000C_050A();
}

/**
 * Decompiled function f__10E4_0367_000C_050A()
 *
 * @name f__10E4_0367_000C_050A
 * @implements 10E4:0367:000C:050A ()
 *
 * Called From: 10E4:0367:000C:1AF8
 */
void f__10E4_0367_000C_050A()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3602), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3600), emu_ax);
	f__10E4_0375_002B_904E(); return;
}

/**
 * Decompiled function f__10E4_0375_002B_904E()
 *
 * @name f__10E4_0375_002B_904E
 * @implements 10E4:0375:002B:904E ()
 *
 * Called From: 10E4:0371:000C:050A
 */
void f__10E4_0375_002B_904E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3602));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03A3; emu_last_cs = 0x10E4; emu_last_ip = 0x037C; emu_last_length = 0x002B; emu_last_crc = 0x904E; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66C2);
	emu_push(0x03A0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x039B; emu_last_length = 0x002B; emu_last_crc = 0x904E;
			emu_call();
			return;
	}
	f__10E4_03A0_0014_D9B0();
}

/**
 * Decompiled function f__10E4_03A0_0014_D9B0()
 *
 * @name f__10E4_03A0_0014_D9B0
 * @implements 10E4:03A0:0014:D9B0 ()
 *
 * Called From: 10E4:03A0:002B:904E
 */
void f__10E4_03A0_0014_D9B0()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03B4); f__10E4_057F_0052_2B00();
	f__10E4_03B4_0038_D51C();
}

/**
 * Decompiled function f__10E4_03B4_0038_D51C()
 *
 * @name f__10E4_03B4_0038_D51C
 * @implements 10E4:03B4:0038:D51C ()
 *
 * Called From: 10E4:03B4:0014:D9B0
 */
void f__10E4_03B4_0038_D51C()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_flags.zf) { f__10E4_040C_0023_24DC(); return; }
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_03EC_0020_ABCC();
}

/**
 * Decompiled function f__10E4_03EC_0020_ABCC()
 *
 * @name f__10E4_03EC_0020_ABCC
 * @implements 10E4:03EC:0020:ABCC ()
 *
 * Called From: 10E4:03EC:0038:D51C
 */
void f__10E4_03EC_0020_ABCC()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_subw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_subw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_addw(&emu_ax, 0x5);
	f__10E4_0425_000A_B32B(); return;
}

/**
 * Decompiled function f__10E4_040C_0023_24DC()
 *
 * @name f__10E4_040C_0023_24DC
 * @implements 10E4:040C:0023:24DC ()
 *
 * Called From: 10E4:03BB:0038:D51C
 */
void f__10E4_040C_0023_24DC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_subw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_subw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_21FD();
	f__10E4_042F_002F_F19C();
}

/**
 * Decompiled function f__10E4_0425_000A_B32B()
 *
 * @name f__10E4_0425_000A_B32B
 * @implements 10E4:0425:000A:B32B ()
 *
 * Called From: 10E4:040A:0020:ABCC
 */
void f__10E4_0425_000A_B32B()
{
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_21FD();
	f__10E4_042F_002F_F19C();
}

/**
 * Decompiled function f__10E4_042F_002F_F19C()
 *
 * @name f__10E4_042F_002F_F19C
 * @implements 10E4:042F:002F:F19C ()
 *
 * Called From: 10E4:042F:000A:B32B
 * Called From: 10E4:042F:0023:24DC
 */
void f__10E4_042F_002F_F19C()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D59), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x9933), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x9935), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x87D8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x045E); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	f__10E4_045E_0010_2CBB();
}

/**
 * Decompiled function f__10E4_045E_0010_2CBB()
 *
 * @name f__10E4_045E_0010_2CBB
 * @implements 10E4:045E:0010:2CBB ()
 *
 * Called From: 10E4:045E:002F:F19C
 */
void f__10E4_045E_0010_2CBB()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	f__10E4_046E_0007_E5DE();
}

/**
 * Decompiled function f__10E4_046E_0007_E5DE()
 *
 * @name f__10E4_046E_0007_E5DE
 * @implements 10E4:046E:0007:E5DE ()
 *
 * Called From: 10E4:046E:0010:2CBB
 */
void f__10E4_046E_0007_E5DE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0475); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__10E4_0475_000E_CE77();
}

/**
 * Decompiled function f__10E4_0475_000E_CE77()
 *
 * @name f__10E4_0475_000E_CE77
 * @implements 10E4:0475:000E:CE77 ()
 *
 * Called From: 10E4:0475:0007:E5DE
 */
void f__10E4_0475_000E_CE77()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0x1E);
	f__10E4_0488_000E_9A5B(); return;
}

/**
 * Decompiled function f__10E4_0483_0005_1765()
 *
 * @name f__10E4_0483_0005_1765
 * @implements 10E4:0483:0005:1765 ()
 *
 * Called From: 10E4:048F:000E:9A5B
 */
void f__10E4_0483_0005_1765()
{
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0642; f__0642_0559_0027_3560();
	f__10E4_0488_000E_9A5B();
}

/**
 * Decompiled function f__10E4_0488_000E_9A5B()
 *
 * @name f__10E4_0488_000E_9A5B
 * @implements 10E4:0488:000E:9A5B ()
 *
 * Called From: 10E4:0481:000E:CE77
 * Called From: 10E4:0488:0005:1765
 */
void f__10E4_0488_000E_9A5B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (!emu_flags.zf) { f__10E4_0483_0005_1765(); return; }
	emu_push(emu_cs); emu_push(0x0496); emu_cs = 0x29E8; emu_Input_History_Clear();
	f__10E4_0496_0005_1765();
}

/**
 * Decompiled function f__10E4_0496_0005_1765()
 *
 * @name f__10E4_0496_0005_1765
 * @implements 10E4:0496:0005:1765 ()
 *
 * Called From: 10E4:0496:000E:9A5B
 */
void f__10E4_0496_0005_1765()
{
	emu_push(emu_cs); emu_push(0x049B); emu_cs = 0x0642; f__0642_0559_0027_3560();
	f__10E4_049B_0005_B085();
}

/**
 * Decompiled function f__10E4_049B_0005_B085()
 *
 * @name f__10E4_049B_0005_B085
 * @implements 10E4:049B:0005:B085 ()
 *
 * Called From: 10E4:049B:0005:1765
 */
void f__10E4_049B_0005_B085()
{
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	f__10E4_04A0_0019_D8B6();
}

/**
 * Decompiled function f__10E4_04A0_0019_D8B6()
 *
 * @name f__10E4_04A0_0019_D8B6
 * @implements 10E4:04A0:0019:D8B6 ()
 *
 * Called From: 10E4:04A0:0005:B085
 */
void f__10E4_04A0_0019_D8B6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0496; emu_last_cs = 0x10E4; emu_last_ip = 0x04A7; emu_last_length = 0x0019; emu_last_crc = 0xD8B6; emu_call(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x800);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0496; emu_last_cs = 0x10E4; emu_last_ip = 0x04AE; emu_last_length = 0x0019; emu_last_crc = 0xD8B6; emu_call(); return; }
	emu_movw(&emu_ax, 0x841);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04B9); emu_cs = 0x29E8; emu_Input_HandleInputSafe();
	f__10E4_04B9_0006_0569();
}

/**
 * Decompiled function f__10E4_04B9_0006_0569()
 *
 * @name f__10E4_04B9_0006_0569
 * @implements 10E4:04B9:0006:0569 ()
 *
 * Called From: 10E4:04B9:0019:D8B6
 */
void f__10E4_04B9_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x04BF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__10E4_04BF_0023_5242();
}

/**
 * Decompiled function f__10E4_04BF_0023_5242()
 *
 * @name f__10E4_04BF_0023_5242
 * @implements 10E4:04BF:0023:5242 ()
 *
 * Called From: 10E4:04BF:0006:0569
 */
void f__10E4_04BF_0023_5242()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_flags.zf) { f__10E4_04E2_0023_24EB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_addw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_subw(&emu_ax, 0x5);
	f__10E4_04FB_000A_B32B(); return;
}

/**
 * Decompiled function f__10E4_04E2_0023_24EB()
 *
 * @name f__10E4_04E2_0023_24EB
 * @implements 10E4:04E2:0023:24EB ()
 *
 * Called From: 10E4:04C3:0023:5242
 */
void f__10E4_04E2_0023_24EB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_21FD();
	f__10E4_0505_002E_B2DF();
}

/**
 * Decompiled function f__10E4_04FB_000A_B32B()
 *
 * @name f__10E4_04FB_000A_B32B
 * @implements 10E4:04FB:000A:B32B ()
 *
 * Called From: 10E4:04E0:0023:5242
 */
void f__10E4_04FB_000A_B32B()
{
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_21FD();
	f__10E4_0505_002E_B2DF();
}

/**
 * Decompiled function f__10E4_0505_002E_B2DF()
 *
 * @name f__10E4_0505_002E_B2DF
 * @implements 10E4:0505:002E:B2DF ()
 *
 * Called From: 10E4:0505:000A:B32B
 * Called From: 10E4:0505:0023:24EB
 */
void f__10E4_0505_002E_B2DF()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3602));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0536; emu_last_cs = 0x10E4; emu_last_ip = 0x050F; emu_last_length = 0x002E; emu_last_crc = 0xB2DF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x662E);
	emu_push(0x0533);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_6E25(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x052E; emu_last_length = 0x002E; emu_last_crc = 0xB2DF;
			emu_call();
			return;
	}
	f__10E4_0533_000B_D182();
}

/**
 * Decompiled function f__10E4_0533_000B_D182()
 *
 * @name f__10E4_0533_000B_D182
 * @implements 10E4:0533:000B:D182 ()
 *
 * Called From: 10E4:0533:002E:B2DF
 */
void f__10E4_0533_000B_D182()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x053E); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_053E_0012_00C8();
}

/**
 * Decompiled function f__10E4_053E_0012_00C8()
 *
 * @name f__10E4_053E_0012_00C8
 * @implements 10E4:053E:0012:00C8 ()
 *
 * Called From: 10E4:053E:000B:D182
 */
void f__10E4_053E_0012_00C8()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0560; emu_last_cs = 0x10E4; emu_last_ip = 0x0541; emu_last_length = 0x0012; emu_last_crc = 0x00C8; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	f__10E4_0550_0010_44E5();
}

/**
 * Decompiled function f__10E4_0550_0010_44E5()
 *
 * @name f__10E4_0550_0010_44E5
 * @implements 10E4:0550:0010:44E5 ()
 *
 * Called From: 10E4:0550:0012:00C8
 */
void f__10E4_0550_0010_44E5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3602), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3600), 0x0);
	f__10E4_0566_0008_0199(); return;
}

/**
 * Decompiled function f__10E4_0566_0008_0199()
 *
 * @name f__10E4_0566_0008_0199
 * @implements 10E4:0566:0008:0199 ()
 *
 * Called From: 10E4:055E:0010:44E5
 */
void f__10E4_0566_0008_0199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_056E_0006_E56C();
}

/**
 * Decompiled function f__10E4_056E_0006_E56C()
 *
 * @name f__10E4_056E_0006_E56C
 * @implements 10E4:056E:0006:E56C ()
 *
 * Called From: 10E4:056E:0008:0199
 */
void f__10E4_056E_0006_E56C()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0574); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__10E4_0574_0005_BBE6();
}

/**
 * Decompiled function f__10E4_0574_0005_BBE6()
 *
 * @name f__10E4_0574_0005_BBE6
 * @implements 10E4:0574:0005:BBE6 ()
 *
 * Called From: 10E4:0574:0006:E56C
 */
void f__10E4_0574_0005_BBE6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__10E4_0579_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_0579_0006_F7CE()
 *
 * @name f__10E4_0579_0006_F7CE
 * @implements 10E4:0579:0006:F7CE ()
 *
 * Called From: 10E4:0577:0005:BBE6
 */
void f__10E4_0579_0006_F7CE()
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
 * Decompiled function f__10E4_057F_0052_2B00()
 *
 * @name f__10E4_057F_0052_2B00
 * @implements 10E4:057F:0052:2B00 ()
 *
 * Called From: 10E4:03B1:0014:D9B0
 * Called From: 10E4:12A0:0016:BF39
 * Called From: B4B8:2049:0012:7861
 * Called From: B4F2:0896:0012:37F8
 * Called From: B4F2:1029:0010:DC57
 */
void f__10E4_057F_0052_2B00()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4066));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__10E4_05D1_0025_BB42(); return; }
	emu_movw(&emu_ax, 0x2);
	f__10E4_05D3_0023_BAD6(); return;
}

/**
 * Decompiled function f__10E4_05D1_0025_BB42()
 *
 * @name f__10E4_05D1_0025_BB42
 * @implements 10E4:05D1:0025:BB42 ()
 *
 * Called From: 10E4:05CA:0052:2B00
 */
void f__10E4_05D1_0025_BB42()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_05F9_0019_5FFF(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x2B6C; emu_ip = 0x0197; emu_last_cs = 0x10E4; emu_last_ip = 0x05F1; emu_last_length = 0x0025; emu_last_crc = 0xBB42; emu_call();
	f__10E4_05F6_001C_D5D7();
}

/**
 * Decompiled function f__10E4_05D3_0023_BAD6()
 *
 * @name f__10E4_05D3_0023_BAD6
 * @implements 10E4:05D3:0023:BAD6 ()
 *
 * Called From: 10E4:05CF:0052:2B00
 */
void f__10E4_05D3_0023_BAD6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_05F9_0019_5FFF(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	f__10E4_05F6_001C_D5D7();
}

/**
 * Decompiled function f__10E4_05F6_001C_D5D7()
 *
 * @name f__10E4_05F6_001C_D5D7
 * @implements 10E4:05F6:001C:D5D7 ()
 *
 * Called From: 10E4:05F6:0023:BAD6
 */
void f__10E4_05F6_001C_D5D7()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0612); f__10E4_0008_0048_5BD4();
	f__10E4_0612_004E_2D73();
}

/**
 * Decompiled function f__10E4_05F9_0019_5FFF()
 *
 * @name f__10E4_05F9_0019_5FFF
 * @implements 10E4:05F9:0019:5FFF ()
 *
 * Called From: 10E4:05DB:0025:BB42
 * Called From: 10E4:05DB:0023:BAD6
 */
void f__10E4_05F9_0019_5FFF()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0612); f__10E4_0008_0048_5BD4();
	f__10E4_0612_004E_2D73();
}

/**
 * Decompiled function f__10E4_0612_004E_2D73()
 *
 * @name f__10E4_0612_004E_2D73
 * @implements 10E4:0612:004E:2D73 ()
 *
 * Called From: 10E4:0612:001C:D5D7
 * Called From: 10E4:0612:0019:5FFF
 */
void f__10E4_0612_004E_2D73()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x362C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx, 0x362E));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_0663_000C_C9A9(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0660); f__10E4_0008_0048_5BD4();
	f__10E4_0660_000F_ACB8();
}

/**
 * Decompiled function f__10E4_0660_000F_ACB8()
 *
 * @name f__10E4_0660_000F_ACB8
 * @implements 10E4:0660:000F:ACB8 ()
 *
 * Called From: 10E4:0660:004E:2D73
 */
void f__10E4_0660_000F_ACB8()
{
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_066F_0006_F7CE(); return; }
	emu_push(emu_cs); emu_push(0x066F); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	f__10E4_066F_0006_F7CE();
}

/**
 * Decompiled function f__10E4_0663_000C_C9A9()
 *
 * @name f__10E4_0663_000C_C9A9
 * @implements 10E4:0663:000C:C9A9 ()
 *
 * Called From: 10E4:0630:004E:2D73
 */
void f__10E4_0663_000C_C9A9()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__10E4_066F_0006_F7CE(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x066F); emu_cs = 0x2B6C; emu_ip = 0x0292; emu_last_cs = 0x10E4; emu_last_ip = 0x066A; emu_last_length = 0x000C; emu_last_crc = 0xC9A9; emu_call();
	f__10E4_066F_0006_F7CE();
}

/**
 * Decompiled function f__10E4_066F_0006_F7CE()
 *
 * @name f__10E4_066F_0006_F7CE
 * @implements 10E4:066F:0006:F7CE ()
 *
 * Called From: 10E4:0668:000C:C9A9
 * Called From: 10E4:0668:000F:ACB8
 * Called From: 10E4:066F:000F:ACB8
 */
void f__10E4_066F_0006_F7CE()
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
 * Decompiled function f__10E4_0675_0026_F126()
 *
 * @name f__10E4_0675_0026_F126
 * @implements 10E4:0675:0026:F126 ()
 *
 * Called From: 0642:03B6:000D:DD0B
 * Called From: 10E4:2252:0009:919C
 * Called From: 10E4:2252:000C:BA1C
 * Called From: 10E4:2280:000D:91AA
 * Called From: B495:0067:000C:1509
 * Called From: B495:00AC:0014:3443
 * Called From: B495:1587:000D:D634
 */
void f__10E4_0675_0026_F126()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3642));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3640));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_069B_001C_0810(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0692_0009_515B(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_069B_001C_0810(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_069B_001C_0810(); return; }
	f__10E4_09A5_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_0692_0009_515B()
 *
 * @name f__10E4_0692_0009_515B
 * @implements 10E4:0692:0009:515B ()
 *
 * Called From: 10E4:068A:0026:F126
 */
void f__10E4_0692_0009_515B()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x069B; emu_last_cs = 0x10E4; emu_last_ip = 0x0696; emu_last_length = 0x0009; emu_last_crc = 0x515B; emu_call(); return; }
	f__10E4_09A5_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_069B_001C_0810()
 *
 * @name f__10E4_069B_001C_0810
 * @implements 10E4:069B:001C:0810 ()
 *
 * Called From: 10E4:0688:0026:F126
 * Called From: 10E4:0690:0026:F126
 * Called From: 10E4:0696:0026:F126
 */
void f__10E4_069B_001C_0810()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3642), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3640), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x06B7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__10E4_06B7_003E_4998();
}

/**
 * Decompiled function f__10E4_06B7_003E_4998()
 *
 * @name f__10E4_06B7_003E_4998
 * @implements 10E4:06B7:003E:4998 ()
 *
 * Called From: 10E4:06B7:001C:0810
 */
void f__10E4_06B7_003E_4998()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x2);
	if (!emu_flags.zf) { f__10E4_06D8_001D_8549(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x363C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_06F5_0009_542B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06F5; emu_last_cs = 0x10E4; emu_last_ip = 0x06E9; emu_last_length = 0x003E; emu_last_crc = 0x4998; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06F5; emu_last_cs = 0x10E4; emu_last_ip = 0x06F0; emu_last_length = 0x003E; emu_last_crc = 0x4998; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x09A5; emu_last_cs = 0x10E4; emu_last_ip = 0x06F2; emu_last_length = 0x003E; emu_last_crc = 0x4998; emu_call();
}

/**
 * Decompiled function f__10E4_06D8_001D_8549()
 *
 * @name f__10E4_06D8_001D_8549
 * @implements 10E4:06D8:001D:8549 ()
 *
 * Called From: 10E4:06C2:003E:4998
 */
void f__10E4_06D8_001D_8549()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_06F5_0009_542B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	if (!emu_flags.zf) { f__10E4_06F5_0009_542B(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!emu_flags.zf) { f__10E4_06F5_0009_542B(); return; }
	f__10E4_09A5_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_06F5_0009_542B()
 *
 * @name f__10E4_06F5_0009_542B
 * @implements 10E4:06F5:0009:542B ()
 *
 * Called From: 10E4:06DC:003E:4998
 * Called From: 10E4:06DC:001D:8549
 * Called From: 10E4:06E9:001D:8549
 * Called From: 10E4:06F0:001D:8549
 */
void f__10E4_06F5_0009_542B()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_06FE_000D_FBBC();
}

/**
 * Decompiled function f__10E4_06FE_000D_FBBC()
 *
 * @name f__10E4_06FE_000D_FBBC
 * @implements 10E4:06FE:000D:FBBC ()
 *
 * Called From: 10E4:06FE:0009:542B
 */
void f__10E4_06FE_000D_FBBC()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x070B); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_070B_002B_686F();
}

/**
 * Decompiled function f__10E4_070B_002B_686F()
 *
 * @name f__10E4_070B_002B_686F
 * @implements 10E4:070B:002B:686F ()
 *
 * Called From: 10E4:070B:000D:FBBC
 */
void f__10E4_070B_002B_686F()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_074E_0021_B9CA(); return; }
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_si, emu_cl);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__10E4_072B_000B_CFDE(); return; }
	emu_movw(&emu_si, 0x1);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0736_000E_55D3(); return; }
	emu_movw(&emu_ax, 0x80);
	/* Unresolved jump */ emu_ip = 0x0738; emu_last_cs = 0x10E4; emu_last_ip = 0x0734; emu_last_length = 0x002B; emu_last_crc = 0x686F; emu_call();
}

/**
 * Decompiled function f__10E4_072B_000B_CFDE()
 *
 * @name f__10E4_072B_000B_CFDE
 * @implements 10E4:072B:000B:CFDE ()
 *
 * Called From: 10E4:0726:002B:686F
 */
void f__10E4_072B_000B_CFDE()
{
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0736_000E_55D3(); return; }
	emu_movw(&emu_ax, 0x80);
	f__10E4_0738_000C_67F9(); return;
}

/**
 * Decompiled function f__10E4_0736_000E_55D3()
 *
 * @name f__10E4_0736_000E_55D3
 * @implements 10E4:0736:000E:55D3 ()
 *
 * Called From: 10E4:072F:000B:CFDE
 * Called From: 10E4:072F:002B:686F
 */
void f__10E4_0736_000E_55D3()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xFF80);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0744_000A_880A(); return; }
	emu_movw(&emu_ax, 0xFF80);
	f__10E4_0746_0008_AAA9(); return;
}

/**
 * Decompiled function f__10E4_0738_000C_67F9()
 *
 * @name f__10E4_0738_000C_67F9
 * @implements 10E4:0738:000C:67F9 ()
 *
 * Called From: 10E4:0734:000B:CFDE
 */
void f__10E4_0738_000C_67F9()
{
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xFF80);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0744_000A_880A(); return; }
	emu_movw(&emu_ax, 0xFF80);
	/* Unresolved jump */ emu_ip = 0x0746; emu_last_cs = 0x10E4; emu_last_ip = 0x0742; emu_last_length = 0x000C; emu_last_crc = 0x67F9; emu_call();
}

/**
 * Decompiled function f__10E4_0744_000A_880A()
 *
 * @name f__10E4_0744_000A_880A
 * @implements 10E4:0744:000A:880A ()
 *
 * Called From: 10E4:073D:000E:55D3
 * Called From: 10E4:073D:000C:67F9
 */
void f__10E4_0744_000A_880A()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363E), emu_si);
	f__10E4_0754_001B_A694(); return;
}

/**
 * Decompiled function f__10E4_0746_0008_AAA9()
 *
 * @name f__10E4_0746_0008_AAA9
 * @implements 10E4:0746:0008:AAA9 ()
 *
 * Called From: 10E4:0742:000E:55D3
 */
void f__10E4_0746_0008_AAA9()
{
	emu_movw(&emu_si, emu_ax);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363E), emu_si);
	f__10E4_0754_001B_A694(); return;
}

/**
 * Decompiled function f__10E4_074E_0021_B9CA()
 *
 * @name f__10E4_074E_0021_B9CA
 * @implements 10E4:074E:0021:B9CA ()
 *
 * Called From: 10E4:071E:002B:686F
 */
void f__10E4_074E_0021_B9CA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_0779_0064_1E5A(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0766; emu_last_cs = 0x10E4; emu_last_ip = 0x075D; emu_last_length = 0x0021; emu_last_crc = 0xB9CA; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF9);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0779; emu_last_cs = 0x10E4; emu_last_ip = 0x0764; emu_last_length = 0x0021; emu_last_crc = 0xB9CA; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x076F; emu_last_cs = 0x10E4; emu_last_ip = 0x0768; emu_last_length = 0x0021; emu_last_crc = 0xB9CA; emu_call(); return; }
	emu_movw(&emu_ax, 0x34);
	/* Unresolved jump */ emu_ip = 0x0772; emu_last_cs = 0x10E4; emu_last_ip = 0x076D; emu_last_length = 0x0021; emu_last_crc = 0xB9CA; emu_call();
}

/**
 * Decompiled function f__10E4_0754_001B_A694()
 *
 * @name f__10E4_0754_001B_A694
 * @implements 10E4:0754:001B:A694 ()
 *
 * Called From: 10E4:074C:000A:880A
 * Called From: 10E4:074C:0008:AAA9
 */
void f__10E4_0754_001B_A694()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0779; emu_last_cs = 0x10E4; emu_last_ip = 0x0756; emu_last_length = 0x001B; emu_last_crc = 0xA694; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0766_0009_E680(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF9);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0779_0064_1E5A(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_076F_0009_CFBF(); return; }
	emu_movw(&emu_ax, 0x34);
	/* Unresolved jump */ emu_ip = 0x0772; emu_last_cs = 0x10E4; emu_last_ip = 0x076D; emu_last_length = 0x001B; emu_last_crc = 0xA694; emu_call();
}

/**
 * Decompiled function f__10E4_0766_0009_E680()
 *
 * @name f__10E4_0766_0009_E680
 * @implements 10E4:0766:0009:E680 ()
 *
 * Called From: 10E4:075D:001B:A694
 */
void f__10E4_0766_0009_E680()
{
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_076F_0009_CFBF(); return; }
	emu_movw(&emu_ax, 0x34);
	f__10E4_0772_0006_FAE3(); return;
}

/**
 * Decompiled function f__10E4_076F_0009_CFBF()
 *
 * @name f__10E4_076F_0009_CFBF
 * @implements 10E4:076F:0009:CFBF ()
 *
 * Called From: 10E4:0768:001B:A694
 * Called From: 10E4:0768:0009:E680
 */
void f__10E4_076F_0009_CFBF()
{
	emu_movw(&emu_ax, 0x35);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0778); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	f__10E4_0778_0065_1C92();
}

/**
 * Decompiled function f__10E4_0772_0006_FAE3()
 *
 * @name f__10E4_0772_0006_FAE3
 * @implements 10E4:0772:0006:FAE3 ()
 *
 * Called From: 10E4:076D:0009:E680
 */
void f__10E4_0772_0006_FAE3()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0778); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	f__10E4_0778_0065_1C92();
}

/**
 * Decompiled function f__10E4_0778_0065_1C92()
 *
 * @name f__10E4_0778_0065_1C92
 * @implements 10E4:0778:0065:1C92 ()
 *
 * Called From: 10E4:0778:0009:CFBF
 * Called From: 10E4:0778:0006:FAE3
 */
void f__10E4_0778_0065_1C92()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_078D_0050_5136(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363C), 0x0);
	if (!emu_flags.zf) { f__10E4_078D_0050_5136(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07A3; emu_last_cs = 0x10E4; emu_last_ip = 0x079D; emu_last_length = 0x0065; emu_last_crc = 0x1C92; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07AF; emu_last_cs = 0x10E4; emu_last_ip = 0x07A8; emu_last_length = 0x0065; emu_last_crc = 0x1C92; emu_call(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07BB; emu_last_cs = 0x10E4; emu_last_ip = 0x07B4; emu_last_length = 0x0065; emu_last_crc = 0x1C92; emu_call(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x0065; emu_last_crc = 0x1C92; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0065; emu_last_crc = 0x1C92; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0065; emu_last_crc = 0x1C92; emu_call();
}

/**
 * Decompiled function f__10E4_0779_0064_1E5A()
 *
 * @name f__10E4_0779_0064_1E5A
 * @implements 10E4:0779:0064:1E5A ()
 *
 * Called From: 10E4:0756:0021:B9CA
 * Called From: 10E4:0764:001B:A694
 */
void f__10E4_0779_0064_1E5A()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_078D_0050_5136(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363C), 0x0);
	if (!emu_flags.zf) { f__10E4_078D_0050_5136(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07A3; emu_last_cs = 0x10E4; emu_last_ip = 0x079D; emu_last_length = 0x0064; emu_last_crc = 0x1E5A; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07AF; emu_last_cs = 0x10E4; emu_last_ip = 0x07A8; emu_last_length = 0x0064; emu_last_crc = 0x1E5A; emu_call(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07BB; emu_last_cs = 0x10E4; emu_last_ip = 0x07B4; emu_last_length = 0x0064; emu_last_crc = 0x1E5A; emu_call(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x0064; emu_last_crc = 0x1E5A; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0064; emu_last_crc = 0x1E5A; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0064; emu_last_crc = 0x1E5A; emu_call();
}

/**
 * Decompiled function f__10E4_078D_0050_5136()
 *
 * @name f__10E4_078D_0050_5136
 * @implements 10E4:078D:0050:5136 ()
 *
 * Called From: 10E4:077E:0064:1E5A
 * Called From: 10E4:077E:0065:1C92
 * Called From: 10E4:0785:0064:1E5A
 * Called From: 10E4:0785:0065:1C92
 */
void f__10E4_078D_0050_5136()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07A3_003A_3E89(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07AF_002E_F295(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07BB; emu_last_cs = 0x10E4; emu_last_ip = 0x07B4; emu_last_length = 0x0050; emu_last_crc = 0x5136; emu_call(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x0050; emu_last_crc = 0x5136; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0050; emu_last_crc = 0x5136; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0050; emu_last_crc = 0x5136; emu_call();
}

/**
 * Decompiled function f__10E4_07A3_003A_3E89()
 *
 * @name f__10E4_07A3_003A_3E89
 * @implements 10E4:07A3:003A:3E89 ()
 *
 * Called From: 10E4:079D:0050:5136
 */
void f__10E4_07A3_003A_3E89()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07AF_002E_F295(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07BB_0022_01B5(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x003A; emu_last_crc = 0x3E89; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x003A; emu_last_crc = 0x3E89; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x003A; emu_last_crc = 0x3E89; emu_call();
}

/**
 * Decompiled function f__10E4_07AF_002E_F295()
 *
 * @name f__10E4_07AF_002E_F295
 * @implements 10E4:07AF:002E:F295 ()
 *
 * Called From: 10E4:07A8:003A:3E89
 * Called From: 10E4:07A8:0050:5136
 */
void f__10E4_07AF_002E_F295()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07BB_0022_01B5(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07E7; emu_last_cs = 0x10E4; emu_last_ip = 0x07CE; emu_last_length = 0x002E; emu_last_crc = 0xF295; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07DD_003A_4A32(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__10E4_07E0_0037_82D1(); return;
}

/**
 * Decompiled function f__10E4_07BB_0022_01B5()
 *
 * @name f__10E4_07BB_0022_01B5
 * @implements 10E4:07BB:0022:01B5 ()
 *
 * Called From: 10E4:07B4:002E:F295
 * Called From: 10E4:07B4:003A:3E89
 */
void f__10E4_07BB_0022_01B5()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_07E7_0030_A563(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x07DD; emu_last_cs = 0x10E4; emu_last_ip = 0x07D7; emu_last_length = 0x0022; emu_last_crc = 0x01B5; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x10E4; emu_last_ip = 0x07DB; emu_last_length = 0x0022; emu_last_crc = 0x01B5; emu_call();
}

/**
 * Decompiled function f__10E4_07DD_003A_4A32()
 *
 * @name f__10E4_07DD_003A_4A32
 * @implements 10E4:07DD:003A:4A32 ()
 *
 * Called From: 10E4:07D7:002E:F295
 */
void f__10E4_07DD_003A_4A32()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07F1_0026_6E79(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x10E4; emu_last_ip = 0x0812; emu_last_length = 0x003A; emu_last_crc = 0x4A32; emu_call();
	f__10E4_0817_001B_C66D();
}

/**
 * Decompiled function f__10E4_07E0_0037_82D1()
 *
 * @name f__10E4_07E0_0037_82D1
 * @implements 10E4:07E0:0037:82D1 ()
 *
 * Called From: 10E4:07DB:002E:F295
 */
void f__10E4_07E0_0037_82D1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07F1_0026_6E79(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x10E4; emu_last_ip = 0x0812; emu_last_length = 0x0037; emu_last_crc = 0x82D1; emu_call();
	f__10E4_0817_001B_C66D();
}

/**
 * Decompiled function f__10E4_07E7_0030_A563()
 *
 * @name f__10E4_07E7_0030_A563
 * @implements 10E4:07E7:0030:A563 ()
 *
 * Called From: 10E4:07CE:0022:01B5
 */
void f__10E4_07E7_0030_A563()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_07F1_0026_6E79(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_0817_001B_C66D();
}

/**
 * Decompiled function f__10E4_07F1_0026_6E79()
 *
 * @name f__10E4_07F1_0026_6E79
 * @implements 10E4:07F1:0026:6E79 ()
 *
 * Called From: 10E4:07EC:0030:A563
 * Called From: 10E4:07EC:0037:82D1
 * Called From: 10E4:07EC:003A:4A32
 */
void f__10E4_07F1_0026_6E79()
{
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_0817_001B_C66D();
}

/**
 * Decompiled function f__10E4_0817_001B_C66D()
 *
 * @name f__10E4_0817_001B_C66D
 * @implements 10E4:0817:001B:C66D ()
 *
 * Called From: 10E4:0817:0026:6E79
 * Called From: 10E4:0817:0030:A563
 */
void f__10E4_0817_001B_C66D()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3770);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0832); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__10E4_0832_0015_9380();
}

/**
 * Decompiled function f__10E4_0832_0015_9380()
 *
 * @name f__10E4_0832_0015_9380
 * @implements 10E4:0832:0015:9380 ()
 *
 * Called From: 10E4:0832:001B:C66D
 */
void f__10E4_0832_0015_9380()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3770);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0847); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__10E4_0847_0008_C601();
}

/**
 * Decompiled function f__10E4_0847_0008_C601()
 *
 * @name f__10E4_0847_0008_C601
 * @implements 10E4:0847:0008:C601 ()
 *
 * Called From: 10E4:0847:0015:9380
 */
void f__10E4_0847_0008_C601()
{
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_di, emu_di);
	f__10E4_0949_0008_4B09(); return;
}

/**
 * Decompiled function f__10E4_084F_0020_8382()
 *
 * @name f__10E4_084F_0020_8382
 * @implements 10E4:084F:0020:8382 ()
 *
 * Called From: 10E4:094E:0008:4B09
 * Called From: 10E4:094E:000C:4082
 * Called From: 10E4:094E:0009:CB2A
 */
void f__10E4_084F_0020_8382()
{
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xA);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (!emu_flags.zf) { f__10E4_086F_0015_8F49(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xD);
	f__10E4_0879_000B_3482(); return;
}

/**
 * Decompiled function f__10E4_086F_0015_8F49()
 *
 * @name f__10E4_086F_0015_8F49
 * @implements 10E4:086F:0015:8F49 ()
 *
 * Called From: 10E4:0866:0020:8382
 */
void f__10E4_086F_0015_8F49()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax, emu_al);
	emu_addw(&emu_ax, 0xFFDE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4));
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC));
	if (!emu_flags.zf) { f__10E4_0884_0032_0FD7(); return; }
	f__10E4_0917_002E_FA57(); return;
}

/**
 * Decompiled function f__10E4_0879_000B_3482()
 *
 * @name f__10E4_0879_000B_3482
 * @implements 10E4:0879:000B:3482 ()
 *
 * Called From: 10E4:086D:0020:8382
 */
void f__10E4_0879_000B_3482()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4));
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC));
	if (!emu_flags.zf) { f__10E4_0884_0032_0FD7(); return; }
	f__10E4_0917_002E_FA57(); return;
}

/**
 * Decompiled function f__10E4_0884_0032_0FD7()
 *
 * @name f__10E4_0884_0032_0FD7
 * @implements 10E4:0884:0032:0FD7 ()
 *
 * Called From: 10E4:087F:000B:3482
 * Called From: 10E4:087F:0015:8F49
 */
void f__10E4_0884_0032_0FD7()
{
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_08B6_001D_D213();
}

/**
 * Decompiled function f__10E4_08B6_001D_D213()
 *
 * @name f__10E4_08B6_001D_D213
 * @implements 10E4:08B6:001D:D213 ()
 *
 * Called From: 10E4:08B6:0032:0FD7
 */
void f__10E4_08B6_001D_D213()
{
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (emu_flags.zf) { f__10E4_0915_0002_D8BA(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (!emu_flags.zf) { f__10E4_08D3_003F_34F2(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xD);
	f__10E4_08DD_0035_C61C(); return;
}

/**
 * Decompiled function f__10E4_08D3_003F_34F2()
 *
 * @name f__10E4_08D3_003F_34F2
 * @implements 10E4:08D3:003F:34F2 ()
 *
 * Called From: 10E4:08CA:001D:D213
 */
void f__10E4_08D3_003F_34F2()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_movws(&emu_ax, emu_al);
	emu_addw(&emu_ax, 0xFFDE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax, 0x8);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_0912_0005_9D6E();
}

/**
 * Decompiled function f__10E4_08DD_0035_C61C()
 *
 * @name f__10E4_08DD_0035_C61C
 * @implements 10E4:08DD:0035:C61C ()
 *
 * Called From: 10E4:08D1:001D:D213
 */
void f__10E4_08DD_0035_C61C()
{
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax, 0x8);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_0912_0005_9D6E();
}

/**
 * Decompiled function f__10E4_0912_0005_9D6E()
 *
 * @name f__10E4_0912_0005_9D6E
 * @implements 10E4:0912:0005:9D6E ()
 *
 * Called From: 10E4:0912:003F:34F2
 * Called From: 10E4:0912:0035:C61C
 */
void f__10E4_0912_0005_9D6E()
{
	emu_addw(&emu_sp, 0xE);
	f__10E4_0948_0009_CB2A(); return;
}

/**
 * Decompiled function f__10E4_0915_0002_D8BA()
 *
 * @name f__10E4_0915_0002_D8BA
 * @implements 10E4:0915:0002:D8BA ()
 *
 * Called From: 10E4:08BE:001D:D213
 */
void f__10E4_0915_0002_D8BA()
{
	f__10E4_0948_0009_CB2A(); return;
}

/**
 * Decompiled function f__10E4_0917_002E_FA57()
 *
 * @name f__10E4_0917_002E_FA57
 * @implements 10E4:0917:002E:FA57 ()
 *
 * Called From: 10E4:0881:000B:3482
 * Called From: 10E4:0881:0015:8F49
 */
void f__10E4_0917_002E_FA57()
{
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0945); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_0945_000C_4082();
}

/**
 * Decompiled function f__10E4_0945_000C_4082()
 *
 * @name f__10E4_0945_000C_4082
 * @implements 10E4:0945:000C:4082 ()
 *
 * Called From: 10E4:0945:002E:FA57
 */
void f__10E4_0945_000C_4082()
{
	emu_addw(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0951_0012_67CD(); return; }
	f__10E4_084F_0020_8382(); return;
}

/**
 * Decompiled function f__10E4_0948_0009_CB2A()
 *
 * @name f__10E4_0948_0009_CB2A
 * @implements 10E4:0948:0009:CB2A ()
 *
 * Called From: 10E4:0915:0005:9D6E
 * Called From: 10E4:0915:0002:D8BA
 */
void f__10E4_0948_0009_CB2A()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0951_0012_67CD(); return; }
	f__10E4_084F_0020_8382(); return;
}

/**
 * Decompiled function f__10E4_0949_0008_4B09()
 *
 * @name f__10E4_0949_0008_4B09
 * @implements 10E4:0949:0008:4B09 ()
 *
 * Called From: 10E4:084C:0008:C601
 */
void f__10E4_0949_0008_4B09()
{
	emu_cmpw(&emu_di, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0951; emu_last_cs = 0x10E4; emu_last_ip = 0x094C; emu_last_length = 0x0008; emu_last_crc = 0x4B09; emu_call(); return; }
	f__10E4_084F_0020_8382(); return;
}

/**
 * Decompiled function f__10E4_0951_0012_67CD()
 *
 * @name f__10E4_0951_0012_67CD
 * @implements 10E4:0951:0012:67CD ()
 *
 * Called From: 10E4:094C:000C:4082
 * Called From: 10E4:094C:0009:CB2A
 */
void f__10E4_0951_0012_67CD()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C91));
	if (emu_flags.zf) { f__10E4_0993_0008_6999(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0963); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__10E4_0963_0028_2D48();
}

/**
 * Decompiled function f__10E4_0963_0028_2D48()
 *
 * @name f__10E4_0963_0028_2D48
 * @implements 10E4:0963:0028:2D48 ()
 *
 * Called From: 10E4:0963:0012:67CD
 */
void f__10E4_0963_0028_2D48()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_subw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x098B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__10E4_098B_0008_C54E();
}

/**
 * Decompiled function f__10E4_098B_0008_C54E()
 *
 * @name f__10E4_098B_0008_C54E
 * @implements 10E4:098B:0008:C54E ()
 *
 * Called From: 10E4:098B:0028:2D48
 */
void f__10E4_098B_0008_C54E()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0993); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__10E4_0993_0008_6999();
}

/**
 * Decompiled function f__10E4_0993_0008_6999()
 *
 * @name f__10E4_0993_0008_6999
 * @implements 10E4:0993:0008:6999 ()
 *
 * Called From: 10E4:0958:0012:67CD
 * Called From: 10E4:0993:0008:C54E
 */
void f__10E4_0993_0008_6999()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs); emu_push(0x099B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_099B_0009_08B8();
}

/**
 * Decompiled function f__10E4_099B_0009_08B8()
 *
 * @name f__10E4_099B_0009_08B8
 * @implements 10E4:099B:0009:08B8 ()
 *
 * Called From: 10E4:099B:0008:6999
 */
void f__10E4_099B_0009_08B8()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A4); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_09A4_0007_F77C();
}

/**
 * Decompiled function f__10E4_09A4_0007_F77C()
 *
 * @name f__10E4_09A4_0007_F77C
 * @implements 10E4:09A4:0007:F77C ()
 *
 * Called From: 10E4:09A4:0009:08B8
 */
void f__10E4_09A4_0007_F77C()
{
	emu_pop(&emu_cx);
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
 * Decompiled function f__10E4_09A5_0006_F7CE()
 *
 * @name f__10E4_09A5_0006_F7CE
 * @implements 10E4:09A5:0006:F7CE ()
 *
 * Called From: 10E4:0698:0026:F126
 * Called From: 10E4:0698:0009:515B
 * Called From: 10E4:06F2:001D:8549
 */
void f__10E4_09A5_0006_F7CE()
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
 * Decompiled function f__10E4_09AB_0031_5E8E()
 *
 * @name f__10E4_09AB_0031_5E8E
 * @implements 10E4:09AB:0031:5E8E ()
 *
 * Called From: 0642:03E7:000E:F2B7
 * Called From: 0972:0622:0010:DEE5
 * Called From: 0972:073E:0008:A466
 * Called From: 0972:1793:0010:DEF5
 * Called From: 0AEC:036A:000F:7987
 * Called From: 0AEC:0694:0008:A466
 * Called From: 0AEC:070E:0006:FDC2
 * Called From: 0AEC:070E:0011:8982
 * Called From: 0C3A:1B3F:0011:8982
 * Called From: 0C3A:1B68:0008:A466
 * Called From: 0C3A:20A7:0008:A466
 * Called From: 0C3A:27D5:0008:A466
 * Called From: 0C3A:287E:0008:A466
 * Called From: 0C3A:28FB:0008:A466
 * Called From: 1391:04D5:0008:A466
 * Called From: 1391:056B:0008:A466
 * Called From: 1391:0594:0008:A466
 * Called From: 176C:26BF:0010:DEE5
 * Called From: 1A34:294B:0011:8182
 * Called From: B4E9:00F4:0015:9971
 * Called From: B4E9:00F4:0016:FD70
 * Called From: B511:0BFC:0058:9298
 */
void f__10E4_09AB_0031_5E8E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x5A);
	emu_movw(&emu_ax, emu_bp + 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_09DF_0032_9AAC(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09DC); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
	f__10E4_09DC_0035_DF38();
}

/**
 * Decompiled function f__10E4_09DC_0035_DF38()
 *
 * @name f__10E4_09DC_0035_DF38
 * @implements 10E4:09DC:0035:DF38 ()
 *
 * Called From: 10E4:09DC:0031:5E8E
 */
void f__10E4_09DC_0035_DF38()
{
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (!emu_flags.zf) { f__10E4_0A11_001A_4693(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3736), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3734), emu_ax);
	emu_movb(&emu_al, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x36E4), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3694), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3644), emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), 0x0);
	/* Unresolved jump */ emu_ip = 0x0D54; emu_last_cs = 0x10E4; emu_last_ip = 0x0A0E; emu_last_length = 0x0035; emu_last_crc = 0xDF38; emu_call();
}

/**
 * Decompiled function f__10E4_09DF_0032_9AAC()
 *
 * @name f__10E4_09DF_0032_9AAC
 * @implements 10E4:09DF:0032:9AAC ()
 *
 * Called From: 10E4:09C4:0031:5E8E
 */
void f__10E4_09DF_0032_9AAC()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (!emu_flags.zf) { f__10E4_0A11_001A_4693(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3736), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3734), emu_ax);
	emu_movb(&emu_al, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x36E4), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3694), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3644), emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), 0x0);
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0A11_001A_4693()
 *
 * @name f__10E4_0A11_001A_4693
 * @implements 10E4:0A11:001A:4693 ()
 *
 * Called From: 10E4:09E3:0032:9AAC
 * Called From: 10E4:09E3:0035:DF38
 */
void f__10E4_0A11_001A_4693()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFE);
	if (!emu_flags.zf) { f__10E4_0A3C_000A_7538(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	if (emu_flags.zf) { f__10E4_0A2B_001B_C70F(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), 0xFFFF);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x36E4), 0x0);
	/* Unresolved jump */ emu_ip = 0x0A3C; emu_last_cs = 0x10E4; emu_last_ip = 0x0A29; emu_last_length = 0x001A; emu_last_crc = 0x4693; emu_call();
}

/**
 * Decompiled function f__10E4_0A2B_001B_C70F()
 *
 * @name f__10E4_0A2B_001B_C70F
 * @implements 10E4:0A2B:001B:C70F ()
 *
 * Called From: 10E4:0A1C:001A:4693
 */
void f__10E4_0A2B_001B_C70F()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3736), emu_ax);
	emu_movb(&emu_al, 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x36E4), emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x3694), emu_al);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A46; emu_last_cs = 0x10E4; emu_last_ip = 0x0A41; emu_last_length = 0x001B; emu_last_crc = 0xC70F; emu_call(); return; }
	f__10E4_0C4B_0009_51AA(); return;
}

/**
 * Decompiled function f__10E4_0A3C_000A_7538()
 *
 * @name f__10E4_0A3C_000A_7538
 * @implements 10E4:0A3C:000A:7538 ()
 *
 * Called From: 10E4:0A15:001A:4693
 */
void f__10E4_0A3C_000A_7538()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	if (!emu_flags.zf) { f__10E4_0A46_0015_56BE(); return; }
	f__10E4_0C4B_0009_51AA(); return;
}

/**
 * Decompiled function f__10E4_0A46_0015_56BE()
 *
 * @name f__10E4_0A46_0015_56BE
 * @implements 10E4:0A46:0015:56BE ()
 *
 * Called From: 10E4:0A41:000A:7538
 */
void f__10E4_0A46_0015_56BE()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	if (emu_flags.zf) { f__10E4_0A83_0018_BF31(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5B); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__10E4_0A5B_001F_F767();
}

/**
 * Decompiled function f__10E4_0A5B_001F_F767()
 *
 * @name f__10E4_0A5B_001F_F767
 * @implements 10E4:0A5B:001F:F767 ()
 *
 * Called From: 10E4:0A5B:0015:56BE
 */
void f__10E4_0A5B_001F_F767()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__10E4_0A83_0018_BF31(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3738));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0A83_0018_BF31(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x36E4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A7A); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0A7A_0021_32F4();
}

/**
 * Decompiled function f__10E4_0A7A_0021_32F4()
 *
 * @name f__10E4_0A7A_0021_32F4
 * @implements 10E4:0A7A:0021:32F4 ()
 *
 * Called From: 10E4:0A7A:001F:F767
 */
void f__10E4_0A7A_0021_32F4()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x373E));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x373C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0A9B_0009_C026(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0A98; emu_last_cs = 0x10E4; emu_last_ip = 0x0A90; emu_last_length = 0x0021; emu_last_crc = 0x32F4; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0A9B_0009_C026(); return; }
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0A83_0018_BF31()
 *
 * @name f__10E4_0A83_0018_BF31
 * @implements 10E4:0A83:0018:BF31 ()
 *
 * Called From: 10E4:0A4A:0015:56BE
 * Called From: 10E4:0A60:001F:F767
 * Called From: 10E4:0A69:001F:F767
 */
void f__10E4_0A83_0018_BF31()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x373E));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x373C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0A9B_0009_C026(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0A98_0003_5C0E(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0A9B_0009_C026(); return; }
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0A98_0003_5C0E()
 *
 * @name f__10E4_0A98_0003_5C0E
 * @implements 10E4:0A98:0003:5C0E ()
 *
 * Called From: 10E4:0A90:0018:BF31
 */
void f__10E4_0A98_0003_5C0E()
{
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0A9B_0009_C026()
 *
 * @name f__10E4_0A9B_0009_C026
 * @implements 10E4:0A9B:0009:C026 ()
 *
 * Called From: 10E4:0A8E:0018:BF31
 * Called From: 10E4:0A8E:0021:32F4
 * Called From: 10E4:0A96:0018:BF31
 * Called From: 10E4:0A96:0021:32F4
 */
void f__10E4_0A9B_0009_C026()
{
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AA4); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_0AA4_000E_C718();
}

/**
 * Decompiled function f__10E4_0AA4_000E_C718()
 *
 * @name f__10E4_0AA4_000E_C718
 * @implements 10E4:0AA4:000E:C718 ()
 *
 * Called From: 10E4:0AA4:0009:C026
 */
void f__10E4_0AA4_000E_C718()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38C4), 0x0);
	if (!emu_flags.zf) { f__10E4_0AB2_0009_542B(); return; }
	f__10E4_0B35_0009_F09D(); return;
}

/**
 * Decompiled function f__10E4_0AB2_0009_542B()
 *
 * @name f__10E4_0AB2_0009_542B
 * @implements 10E4:0AB2:0009:542B ()
 *
 * Called From: 10E4:0AAD:000E:C718
 */
void f__10E4_0AB2_0009_542B()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ABB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_0ABB_0020_A11E();
}

/**
 * Decompiled function f__10E4_0ABB_0020_A11E()
 *
 * @name f__10E4_0ABB_0020_A11E
 * @implements 10E4:0ABB:0020:A11E ()
 *
 * Called From: 10E4:0ABB:0009:542B
 */
void f__10E4_0ABB_0020_A11E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x13F);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0ADB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0AD6; emu_last_length = 0x0020; emu_last_crc = 0xA11E;
			emu_call();
			return;
	}
	f__10E4_0ADB_0024_6EB3();
}

/**
 * Decompiled function f__10E4_0ADB_0024_6EB3()
 *
 * @name f__10E4_0ADB_0024_6EB3
 * @implements 10E4:0ADB:0024:6EB3 ()
 *
 * Called From: 10E4:0ADB:0020:A11E
 */
void f__10E4_0ADB_0024_6EB3()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8ADA));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AFF); f__10E4_1EF1_0040_01F8();
	f__10E4_0AFF_0024_BCC5();
}

/**
 * Decompiled function f__10E4_0AFF_0024_BCC5()
 *
 * @name f__10E4_0AFF_0024_BCC5
 * @implements 10E4:0AFF:0024:BCC5 ()
 *
 * Called From: 10E4:0AFF:0024:6EB3
 */
void f__10E4_0AFF_0024_BCC5()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8AD8));
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3644);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B23); f__10E4_1EF1_0040_01F8();
	f__10E4_0B23_0011_7386();
}

/**
 * Decompiled function f__10E4_0B23_0011_7386()
 *
 * @name f__10E4_0B23_0011_7386
 * @implements 10E4:0B23:0011:7386 ()
 *
 * Called From: 10E4:0B23:0024:BCC5
 */
void f__10E4_0B23_0011_7386()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C4), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0B34); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_0B34_000A_E6DD();
}

/**
 * Decompiled function f__10E4_0B34_000A_E6DD()
 *
 * @name f__10E4_0B34_000A_E6DD
 * @implements 10E4:0B34:000A:E6DD ()
 *
 * Called From: 10E4:0B34:0011:7386
 */
void f__10E4_0B34_000A_E6DD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B3E); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__10E4_0B3E_0016_E755();
}

/**
 * Decompiled function f__10E4_0B35_0009_F09D()
 *
 * @name f__10E4_0B35_0009_F09D
 * @implements 10E4:0B35:0009:F09D ()
 *
 * Called From: 10E4:0AAF:000E:C718
 */
void f__10E4_0B35_0009_F09D()
{
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B3E); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__10E4_0B3E_0016_E755();
}

/**
 * Decompiled function f__10E4_0B3E_0016_E755()
 *
 * @name f__10E4_0B3E_0016_E755
 * @implements 10E4:0B3E:0016:E755 ()
 *
 * Called From: 10E4:0B3E:000A:E6DD
 * Called From: 10E4:0B3E:0009:F09D
 */
void f__10E4_0B3E_0016_E755()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3740));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_cmpw(&emu_ax, 0x18);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0B54_0029_58EB(); return; }
	emu_movw(&emu_ax, 0x18);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3740));
	/* Unresolved jump */ emu_ip = 0x0B57; emu_last_cs = 0x10E4; emu_last_ip = 0x0B52; emu_last_length = 0x0016; emu_last_crc = 0xE755; emu_call();
}

/**
 * Decompiled function f__10E4_0B54_0029_58EB()
 *
 * @name f__10E4_0B54_0029_58EB
 * @implements 10E4:0B54:0029:58EB ()
 *
 * Called From: 10E4:0B49:0016:E755
 */
void f__10E4_0B54_0029_58EB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3740));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0B7D); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__10E4_0B7D_0008_C54E();
}

/**
 * Decompiled function f__10E4_0B7D_0008_C54E()
 *
 * @name f__10E4_0B7D_0008_C54E
 * @implements 10E4:0B7D:0008:C54E ()
 *
 * Called From: 10E4:0B7D:0029:58EB
 */
void f__10E4_0B7D_0008_C54E()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B85); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__10E4_0B85_0008_8894();
}

/**
 * Decompiled function f__10E4_0B85_0008_8894()
 *
 * @name f__10E4_0B85_0008_8894
 * @implements 10E4:0B85:0008:8894 ()
 *
 * Called From: 10E4:0B85:0008:C54E
 */
void f__10E4_0B85_0008_8894()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0B8D); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_0B8D_002C_F76A();
}

/**
 * Decompiled function f__10E4_0B8D_002C_F76A()
 *
 * @name f__10E4_0B8D_002C_F76A
 * @implements 10E4:0B8D:002C:F76A ()
 *
 * Called From: 10E4:0B8D:0008:8894
 */
void f__10E4_0B8D_002C_F76A()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3740), 0x0);
	if (emu_flags.zf) { f__10E4_0BB9_000F_3D5D(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3738));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0BB2_0007_96FE(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), emu_dx);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x3740));
	f__10E4_0C48_0003_5DA2(); return;
}

/**
 * Decompiled function f__10E4_0BB2_0007_96FE()
 *
 * @name f__10E4_0BB2_0007_96FE
 * @implements 10E4:0BB2:0007:96FE ()
 *
 * Called From: 10E4:0B9C:002C:F76A
 */
void f__10E4_0BB2_0007_96FE()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x3740));
	f__10E4_0C48_0003_5DA2(); return;
}

/**
 * Decompiled function f__10E4_0BB9_000F_3D5D()
 *
 * @name f__10E4_0BB9_000F_3D5D
 * @implements 10E4:0BB9:000F:3D5D ()
 *
 * Called From: 10E4:0B93:002C:F76A
 */
void f__10E4_0BB9_000F_3D5D()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3644);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BC8); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0BC8_0016_761B();
}

/**
 * Decompiled function f__10E4_0BC8_0016_761B()
 *
 * @name f__10E4_0BC8_0016_761B
 * @implements 10E4:0BC8:0016:761B ()
 *
 * Called From: 10E4:0BC8:000F:3D5D
 */
void f__10E4_0BC8_0016_761B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8ADA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8AD8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3736), 0x0);
	if (emu_flags.zf) { f__10E4_0BDE_0014_9F42(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	emu_decw(&emu_ax);
	f__10E4_0BE0_0012_B741(); return;
}

/**
 * Decompiled function f__10E4_0BDE_0014_9F42()
 *
 * @name f__10E4_0BDE_0014_9F42
 * @implements 10E4:0BDE:0014:9F42 ()
 *
 * Called From: 10E4:0BD6:0016:761B
 */
void f__10E4_0BDE_0014_9F42()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3734), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x36E4);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BF2); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0BF2_0035_AC8B();
}

/**
 * Decompiled function f__10E4_0BE0_0012_B741()
 *
 * @name f__10E4_0BE0_0012_B741
 * @implements 10E4:0BE0:0012:B741 ()
 *
 * Called From: 10E4:0BDC:0016:761B
 */
void f__10E4_0BE0_0012_B741()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3734), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x36E4);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BF2); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0BF2_0035_AC8B();
}

/**
 * Decompiled function f__10E4_0BF2_0035_AC8B()
 *
 * @name f__10E4_0BF2_0035_AC8B
 * @implements 10E4:0BF2:0035:AC8B ()
 *
 * Called From: 10E4:0BF2:0012:B741
 * Called From: 10E4:0BF2:0014:9F42
 */
void f__10E4_0BF2_0035_AC8B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3738));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3736), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8ADC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8ADA), emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x36E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C4), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3734));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0C27_0024_0D8C(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x1);
	f__10E4_0C38_0013_BDC9(); return;
}

/**
 * Decompiled function f__10E4_0C27_0024_0D8C()
 *
 * @name f__10E4_0C27_0024_0D8C
 * @implements 10E4:0C27:0024:0D8C ()
 *
 * Called From: 10E4:0C19:0035:AC8B
 */
void f__10E4_0C27_0024_0D8C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x384);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0C38_0013_BDC9()
 *
 * @name f__10E4_0C38_0013_BDC9
 * @implements 10E4:0C38:0013:BDC9 ()
 *
 * Called From: 10E4:0C25:0035:AC8B
 */
void f__10E4_0C38_0013_BDC9()
{
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0C48_0003_5DA2()
 *
 * @name f__10E4_0C48_0003_5DA2
 * @implements 10E4:0C48:0003:5DA2 ()
 *
 * Called From: 10E4:0BB6:002C:F76A
 * Called From: 10E4:0BB6:0007:96FE
 */
void f__10E4_0C48_0003_5DA2()
{
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0C4B_0009_51AA()
 *
 * @name f__10E4_0C4B_0009_51AA
 * @implements 10E4:0C4B:0009:51AA ()
 *
 * Called From: 10E4:0A43:000A:7538
 * Called From: 10E4:0A43:001B:C70F
 */
void f__10E4_0C4B_0009_51AA()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	if (!emu_flags.zf) { f__10E4_0C54_000F_1C48(); return; }
	f__10E4_0D0C_0012_EB63(); return;
}

/**
 * Decompiled function f__10E4_0C54_000F_1C48()
 *
 * @name f__10E4_0C54_000F_1C48
 * @implements 10E4:0C54:000F:1C48 ()
 *
 * Called From: 10E4:0C4F:0009:51AA
 */
void f__10E4_0C54_000F_1C48()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3644);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__10E4_0C63_000A_4618();
}

/**
 * Decompiled function f__10E4_0C63_000A_4618()
 *
 * @name f__10E4_0C63_000A_4618
 * @implements 10E4:0C63:000A:4618 ()
 *
 * Called From: 10E4:0C63:000F:1C48
 */
void f__10E4_0C63_000A_4618()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__10E4_0C6D_000F_9C4E(); return; }
	f__10E4_0D0A_0002_C93A(); return;
}

/**
 * Decompiled function f__10E4_0C6D_000F_9C4E()
 *
 * @name f__10E4_0C6D_000F_9C4E
 * @implements 10E4:0C6D:000F:9C4E ()
 *
 * Called From: 10E4:0C68:000A:4618
 */
void f__10E4_0C6D_000F_9C4E()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__10E4_0C7C_000A_061E();
}

/**
 * Decompiled function f__10E4_0C7C_000A_061E()
 *
 * @name f__10E4_0C7C_000A_061E
 * @implements 10E4:0C7C:000A:061E ()
 *
 * Called From: 10E4:0C7C:000F:9C4E
 */
void f__10E4_0C7C_000A_061E()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__10E4_0C86_000F_1C4D(); return; }
	f__10E4_0D0A_0002_C93A(); return;
}

/**
 * Decompiled function f__10E4_0C86_000F_1C4D()
 *
 * @name f__10E4_0C86_000F_1C4D
 * @implements 10E4:0C86:000F:1C4D ()
 *
 * Called From: 10E4:0C81:000A:061E
 */
void f__10E4_0C86_000F_1C4D()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x36E4);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C95); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__10E4_0C95_001F_FF74();
}

/**
 * Decompiled function f__10E4_0C95_001F_FF74()
 *
 * @name f__10E4_0C95_001F_FF74
 * @implements 10E4:0C95:001F:FF74 ()
 *
 * Called From: 10E4:0C95:000F:1C4D
 */
void f__10E4_0C95_001F_FF74()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__10E4_0D0A_0002_C93A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0CE3_0018_2FC8(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x36E4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CB4); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0CB4_001E_659A();
}

/**
 * Decompiled function f__10E4_0CB4_001E_659A()
 *
 * @name f__10E4_0CB4_001E_659A
 * @implements 10E4:0CB4:001E:659A ()
 *
 * Called From: 10E4:0CB4:001F:FF74
 */
void f__10E4_0CB4_001E_659A()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8ADA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8ADC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3694);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CD2); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0CD2_0011_3F24();
}

/**
 * Decompiled function f__10E4_0CD2_0011_3F24()
 *
 * @name f__10E4_0CD2_0011_3F24
 * @implements 10E4:0CD2:0011:3F24 ()
 *
 * Called From: 10E4:0CD2:001E:659A
 */
void f__10E4_0CD2_0011_3F24()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8ADA), 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3736), emu_ax);
	f__10E4_0D0A_0002_C93A(); return;
}

/**
 * Decompiled function f__10E4_0CE3_0018_2FC8()
 *
 * @name f__10E4_0CE3_0018_2FC8
 * @implements 10E4:0CE3:0018:2FC8 ()
 *
 * Called From: 10E4:0CA3:001F:FF74
 */
void f__10E4_0CE3_0018_2FC8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3738));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D0A; emu_last_cs = 0x10E4; emu_last_ip = 0x0CEA; emu_last_length = 0x0018; emu_last_crc = 0x2FC8; emu_call(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x36E4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CFB); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	f__10E4_0CFB_0011_37A0();
}

/**
 * Decompiled function f__10E4_0CFB_0011_37A0()
 *
 * @name f__10E4_0CFB_0011_37A0
 * @implements 10E4:0CFB:0011:37A0 ()
 *
 * Called From: 10E4:0CFB:0018:2FC8
 */
void f__10E4_0CFB_0011_37A0()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3738), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8ADC), 0xC);
	f__10E4_0D1E_003A_C42A(); return;
}

/**
 * Decompiled function f__10E4_0D0A_0002_C93A()
 *
 * @name f__10E4_0D0A_0002_C93A
 * @implements 10E4:0D0A:0002:C93A ()
 *
 * Called From: 10E4:0C6A:000A:4618
 * Called From: 10E4:0C83:000A:061E
 * Called From: 10E4:0C9A:001F:FF74
 * Called From: 10E4:0CE1:0011:3F24
 */
void f__10E4_0D0A_0002_C93A()
{
	f__10E4_0D1E_003A_C42A(); return;
}

/**
 * Decompiled function f__10E4_0D0C_0012_EB63()
 *
 * @name f__10E4_0D0C_0012_EB63
 * @implements 10E4:0D0C:0012:EB63 ()
 *
 * Called From: 10E4:0C51:0009:51AA
 */
void f__10E4_0D0C_0012_EB63()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x3644));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__10E4_0D1E_003A_C42A(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x3694));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__10E4_0D1E_003A_C42A(); return; }
	f__10E4_0D54_0004_893F(); return;
}

/**
 * Decompiled function f__10E4_0D1E_003A_C42A()
 *
 * @name f__10E4_0D1E_003A_C42A
 * @implements 10E4:0D1E:003A:C42A ()
 *
 * Called From: 10E4:0D0A:0002:C93A
 * Called From: 10E4:0D0A:0011:37A0
 * Called From: 10E4:0D12:0012:EB63
 * Called From: 10E4:0D1A:0012:EB63
 */
void f__10E4_0D1E_003A_C42A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3734));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0D3C_001C_E992(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x373E));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x373C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0D54_0004_893F(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_0D3C_001C_E992(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (!emu_flags.cf) { f__10E4_0D54_0004_893F(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3740), 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0D3C_001C_E992()
 *
 * @name f__10E4_0D3C_001C_E992
 * @implements 10E4:0D3C:001C:E992 ()
 *
 * Called From: 10E4:0D25:003A:C42A
 * Called From: 10E4:0D34:003A:C42A
 */
void f__10E4_0D3C_001C_E992()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3740), 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x373C), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0D54_0004_893F()
 *
 * @name f__10E4_0D54_0004_893F
 * @implements 10E4:0D54:0004:893F ()
 *
 * Called From: 10E4:0A0E:0032:9AAC
 * Called From: 10E4:0A98:0018:BF31
 * Called From: 10E4:0A98:0021:32F4
 * Called From: 10E4:0A98:0003:5C0E
 * Called From: 10E4:0C48:0003:5DA2
 * Called From: 10E4:0C48:0013:BDC9
 * Called From: 10E4:0C48:0024:0D8C
 * Called From: 10E4:0D1C:0012:EB63
 * Called From: 10E4:0D32:003A:C42A
 * Called From: 10E4:0D3A:003A:C42A
 */
void f__10E4_0D54_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__10E4_0D58_004B_FEF5()
 *
 * @name f__10E4_0D58_004B_FEF5
 * @implements 10E4:0D58:004B:FEF5 ()
 *
 * Called From: 10E4:13CD:0015:2931
 */
void f__10E4_0D58_004B_FEF5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, 0x16);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x3A16);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0D82_0021_381A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D8D; emu_last_cs = 0x10E4; emu_last_ip = 0x0D84; emu_last_length = 0x004B; emu_last_crc = 0xFEF5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_cmpw(&emu_di, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0DA3_000D_E645(); return; }
	emu_movw(&emu_ax, emu_di);
	/* Unresolved jump */ emu_ip = 0x0DA5; emu_last_cs = 0x10E4; emu_last_ip = 0x0DA1; emu_last_length = 0x004B; emu_last_crc = 0xFEF5; emu_call();
}

/**
 * Decompiled function f__10E4_0D82_0021_381A()
 *
 * @name f__10E4_0D82_0021_381A
 * @implements 10E4:0D82:0021:381A ()
 *
 * Called From: 10E4:0D79:004B:FEF5
 */
void f__10E4_0D82_0021_381A()
{
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D8D; emu_last_cs = 0x10E4; emu_last_ip = 0x0D84; emu_last_length = 0x0021; emu_last_crc = 0x381A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_cmpw(&emu_di, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_0DA3_000D_E645(); return; }
	emu_movw(&emu_ax, emu_di);
	/* Unresolved jump */ emu_ip = 0x0DA5; emu_last_cs = 0x10E4; emu_last_ip = 0x0DA1; emu_last_length = 0x0021; emu_last_crc = 0x381A; emu_call();
}

/**
 * Decompiled function f__10E4_0DA3_000D_E645()
 *
 * @name f__10E4_0DA3_000D_E645
 * @implements 10E4:0DA3:000D:E645 ()
 *
 * Called From: 10E4:0D9D:004B:FEF5
 * Called From: 10E4:0D9D:0021:381A
 */
void f__10E4_0DA3_000D_E645()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_di, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0DB0; emu_last_cs = 0x10E4; emu_last_ip = 0x0DAA; emu_last_length = 0x000D; emu_last_crc = 0xE645; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	f__10E4_0DB3_0039_BC66(); return;
}

/**
 * Decompiled function f__10E4_0DB3_0039_BC66()
 *
 * @name f__10E4_0DB3_0039_BC66
 * @implements 10E4:0DB3:0039:BC66 ()
 *
 * Called From: 10E4:0DAE:000D:E645
 */
void f__10E4_0DB3_0039_BC66()
{
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E09; emu_last_cs = 0x10E4; emu_last_ip = 0x0DD1; emu_last_length = 0x0039; emu_last_crc = 0xBC66; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_cwd();
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	f__10E4_0DEC_0007_8446();
}

/**
 * Decompiled function f__10E4_0DEC_0007_8446()
 *
 * @name f__10E4_0DEC_0007_8446
 * @implements 10E4:0DEC:0007:8446 ()
 *
 * Called From: 10E4:0DEC:0039:BC66
 */
void f__10E4_0DEC_0007_8446()
{
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF3); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	f__10E4_0DF3_000E_ED31();
}

/**
 * Decompiled function f__10E4_0DF3_000E_ED31()
 *
 * @name f__10E4_0DF3_000E_ED31
 * @implements 10E4:0DF3:000E:ED31 ()
 *
 * Called From: 10E4:0DF3:0007:8446
 */
void f__10E4_0DF3_000E_ED31()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E01_0008_1934(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__10E4_0E04_0005_A136(); return;
}

/**
 * Decompiled function f__10E4_0E01_0008_1934()
 *
 * @name f__10E4_0E01_0008_1934
 * @implements 10E4:0E01:0008:1934 ()
 *
 * Called From: 10E4:0DFA:000E:ED31
 */
void f__10E4_0E01_0008_1934()
{
	emu_movw(&emu_ax, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__10E4_0E3D_008B_FF4E(); return;
}

/**
 * Decompiled function f__10E4_0E04_0005_A136()
 *
 * @name f__10E4_0E04_0005_A136
 * @implements 10E4:0E04:0005:A136 ()
 *
 * Called From: 10E4:0DFF:000E:ED31
 */
void f__10E4_0E04_0005_A136()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__10E4_0E3D_008B_FF4E(); return;
}

/**
 * Decompiled function f__10E4_0E3D_008B_FF4E()
 *
 * @name f__10E4_0E3D_008B_FF4E
 * @implements 10E4:0E3D:008B:FF4E ()
 *
 * Called From: 10E4:0E07:0005:A136
 * Called From: 10E4:0E07:0008:1934
 */
void f__10E4_0E3D_008B_FF4E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_sarw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E59_006F_6BD0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E6D_005B_EF3E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__10E4_0E7C_004C_0D2C(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E75; emu_last_length = 0x008B; emu_last_crc = 0xFF4E; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E80; emu_last_length = 0x008B; emu_last_crc = 0xFF4E; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x008B; emu_last_crc = 0xFF4E; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x008B; emu_last_crc = 0xFF4E; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x008B; emu_last_crc = 0xFF4E; emu_call();
	f__10E4_0EC8_0049_0BFB();
}

/**
 * Decompiled function f__10E4_0E59_006F_6BD0()
 *
 * @name f__10E4_0E59_006F_6BD0
 * @implements 10E4:0E59:006F:6BD0 ()
 *
 * Called From: 10E4:0E4D:008B:FF4E
 */
void f__10E4_0E59_006F_6BD0()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_0E6D_005B_EF3E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E71; emu_last_length = 0x006F; emu_last_crc = 0x6BD0; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E75; emu_last_length = 0x006F; emu_last_crc = 0x6BD0; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E80; emu_last_length = 0x006F; emu_last_crc = 0x6BD0; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x006F; emu_last_crc = 0x6BD0; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x006F; emu_last_crc = 0x6BD0; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x006F; emu_last_crc = 0x6BD0; emu_call();
	f__10E4_0EC8_0049_0BFB();
}

/**
 * Decompiled function f__10E4_0E6D_005B_EF3E()
 *
 * @name f__10E4_0E6D_005B_EF3E
 * @implements 10E4:0E6D:005B:EF3E ()
 *
 * Called From: 10E4:0E61:006F:6BD0
 * Called From: 10E4:0E61:008B:FF4E
 */
void f__10E4_0E6D_005B_EF3E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__10E4_0E7C_004C_0D2C(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7C; emu_last_cs = 0x10E4; emu_last_ip = 0x0E75; emu_last_length = 0x005B; emu_last_crc = 0xEF3E; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E80; emu_last_length = 0x005B; emu_last_crc = 0xEF3E; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x005B; emu_last_crc = 0xEF3E; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x005B; emu_last_crc = 0xEF3E; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x005B; emu_last_crc = 0xEF3E; emu_call();
	f__10E4_0EC8_0049_0BFB();
}

/**
 * Decompiled function f__10E4_0E7C_004C_0D2C()
 *
 * @name f__10E4_0E7C_004C_0D2C
 * @implements 10E4:0E7C:004C:0D2C ()
 *
 * Called From: 10E4:0E71:005B:EF3E
 * Called From: 10E4:0E71:008B:FF4E
 */
void f__10E4_0E7C_004C_0D2C()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_0E8B_003D_04DF(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8B; emu_last_cs = 0x10E4; emu_last_ip = 0x0E84; emu_last_length = 0x004C; emu_last_crc = 0x0D2C; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x004C; emu_last_crc = 0x0D2C; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0EC8); emu_ip = 0x0008; emu_last_cs = 0x10E4; emu_last_ip = 0x0EC5; emu_last_length = 0x004C; emu_last_crc = 0x0D2C; emu_call();
	f__10E4_0EC8_0049_0BFB();
}

/**
 * Decompiled function f__10E4_0E8B_003D_04DF()
 *
 * @name f__10E4_0E8B_003D_04DF
 * @implements 10E4:0E8B:003D:04DF ()
 *
 * Called From: 10E4:0E80:004C:0D2C
 */
void f__10E4_0E8B_003D_04DF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x003D; emu_last_crc = 0x04DF; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EC8); f__10E4_0008_0048_5BD4();
	f__10E4_0EC8_0049_0BFB();
}

/**
 * Decompiled function f__10E4_0EC8_0049_0BFB()
 *
 * @name f__10E4_0EC8_0049_0BFB
 * @implements 10E4:0EC8:0049:0BFB ()
 *
 * Called From: 10E4:0EC8:003D:04DF
 */
void f__10E4_0EC8_0049_0BFB()
{
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F14; emu_last_cs = 0x10E4; emu_last_ip = 0x0ECF; emu_last_length = 0x0049; emu_last_crc = 0x0BFB; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0F11);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0F0C; emu_last_length = 0x0049; emu_last_crc = 0x0BFB;
			emu_call();
			return;
	}
	f__10E4_0F11_0009_B39B();
}

/**
 * Decompiled function f__10E4_0F11_0009_B39B()
 *
 * @name f__10E4_0F11_0009_B39B
 * @implements 10E4:0F11:0009:B39B ()
 *
 * Called From: 10E4:0F11:0049:0BFB
 */
void f__10E4_0F11_0009_B39B()
{
	emu_addw(&emu_sp, 0xA);
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
 * Decompiled function f__10E4_0F1A_0088_7622()
 *
 * @name f__10E4_0F1A_0088_7622
 * @implements 10E4:0F1A:0088:7622 ()
 *
 * Called From: 0642:03A0:0008:DF89
 * Called From: 0642:03A0:000D:7292
 * Called From: 10E4:2145:0009:311A
 * Called From: 1A34:108A:0018:960E
 * Called From: B4E9:0272:000A:FA15
 * Called From: B4E9:0285:000F:7A73
 * Called From: B4E9:02A4:000B:DA1E
 * Called From: B4E9:02C9:0009:EC55
 */
void f__10E4_0F1A_0088_7622()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x50);
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
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3742);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_movw(&emu_cx, 0x10);
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x01F7; f__01F7_03C9_001C_11C7();
	f__10E4_0FA2_0008_9861();
}

/**
 * Decompiled function f__10E4_0FA2_0008_9861()
 *
 * @name f__10E4_0FA2_0008_9861
 * @implements 10E4:0FA2:0008:9861 ()
 *
 * Called From: 10E4:0FA2:0088:7622
 */
void f__10E4_0FA2_0008_9861()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0FAA); f__10E4_1BE0_002F_1A76();
	f__10E4_0FAA_0012_2B0A();
}

/**
 * Decompiled function f__10E4_0FAA_0012_2B0A()
 *
 * @name f__10E4_0FAA_0012_2B0A
 * @implements 10E4:0FAA:0012:2B0A ()
 *
 * Called From: 10E4:0FAA:0008:9861
 */
void f__10E4_0FAA_0012_2B0A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_0FBC_0007_E58A(); return; }
	f__10E4_1147_0011_B8FA(); return;
}

/**
 * Decompiled function f__10E4_0FBC_0007_E58A()
 *
 * @name f__10E4_0FBC_0007_E58A
 * @implements 10E4:0FBC:0007:E58A ()
 *
 * Called From: 10E4:0FB7:0012:2B0A
 */
void f__10E4_0FBC_0007_E58A()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BD2);
	switch (emu_ip) {
		case 0x0FC3: f__10E4_0FC3_0040_425A(); return;
		case 0x1018: f__10E4_1018_0033_7B9E(); return;
		case 0x1075: f__10E4_1075_0034_5378(); return;
		case 0x10A9: f__10E4_10A9_0009_6093(); return;
		case 0x1147: f__10E4_1147_0011_B8FA(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0FBE; emu_last_length = 0x0007; emu_last_crc = 0xE58A;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_0FC3_0040_425A()
 *
 * @name f__10E4_0FC3_0040_425A
 * @implements 10E4:0FC3:0040:425A ()
 *
 * Called From: 10E4:0FBE:0007:E58A
 */
void f__10E4_0FC3_0040_425A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A3C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_cs); emu_push(0x1003); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	f__10E4_1003_000D_561B();
}

/**
 * Decompiled function f__10E4_1003_000D_561B()
 *
 * @name f__10E4_1003_000D_561B
 * @implements 10E4:1003:000D:561B ()
 *
 * Called From: 10E4:1003:0040:425A
 */
void f__10E4_1003_000D_561B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1010; emu_last_cs = 0x10E4; emu_last_ip = 0x1009; emu_last_length = 0x000D; emu_last_crc = 0x561B; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	f__10E4_1012_0006_BB8D(); return;
}

/**
 * Decompiled function f__10E4_1012_0006_BB8D()
 *
 * @name f__10E4_1012_0006_BB8D
 * @implements 10E4:1012:0006:BB8D ()
 *
 * Called From: 10E4:100E:000D:561B
 */
void f__10E4_1012_0006_BB8D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	f__10E4_1158_0015_378A(); return;
}

/**
 * Decompiled function f__10E4_1018_0033_7B9E()
 *
 * @name f__10E4_1018_0033_7B9E
 * @implements 10E4:1018:0033:7B9E ()
 *
 * Called From: 10E4:0FBE:0007:E58A
 */
void f__10E4_1018_0033_7B9E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x104B); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	f__10E4_104B_000D_561B();
}

/**
 * Decompiled function f__10E4_104B_000D_561B()
 *
 * @name f__10E4_104B_000D_561B
 * @implements 10E4:104B:000D:561B ()
 *
 * Called From: 10E4:104B:0033:7B9E
 */
void f__10E4_104B_000D_561B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__10E4_1058_0013_5986(); return; }
	emu_movw(&emu_ax, 0x1);
	f__10E4_105A_0011_5FD6(); return;
}

/**
 * Decompiled function f__10E4_1058_0013_5986()
 *
 * @name f__10E4_1058_0013_5986
 * @implements 10E4:1058:0013:5986 ()
 *
 * Called From: 10E4:1051:000D:561B
 */
void f__10E4_1058_0013_5986()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__10E4_106B_000A_DAE3();
}

/**
 * Decompiled function f__10E4_105A_0011_5FD6()
 *
 * @name f__10E4_105A_0011_5FD6
 * @implements 10E4:105A:0011:5FD6 ()
 *
 * Called From: 10E4:1056:000D:561B
 */
void f__10E4_105A_0011_5FD6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__10E4_106B_000A_DAE3();
}

/**
 * Decompiled function f__10E4_106B_000A_DAE3()
 *
 * @name f__10E4_106B_000A_DAE3
 * @implements 10E4:106B:000A:DAE3 ()
 *
 * Called From: 10E4:106B:0013:5986
 * Called From: 10E4:106B:0011:5FD6
 */
void f__10E4_106B_000A_DAE3()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	f__10E4_1158_0015_378A(); return;
}

/**
 * Decompiled function f__10E4_1075_0034_5378()
 *
 * @name f__10E4_1075_0034_5378
 * @implements 10E4:1075:0034:5378 ()
 *
 * Called From: 10E4:0FBE:0007:E58A
 */
void f__10E4_1075_0034_5378()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A3C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__10E4_1158_0015_378A(); return;
}

/**
 * Decompiled function f__10E4_10A9_0009_6093()
 *
 * @name f__10E4_10A9_0009_6093
 * @implements 10E4:10A9:0009:6093 ()
 *
 * Called From: 10E4:0FBE:0007:E58A
 */
void f__10E4_10A9_0009_6093()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x10B2); emu_cs = 0x34CD; ovl__34CD(30);
	f__10E4_10B2_0045_52D0();
}

/**
 * Decompiled function f__10E4_10B2_0045_52D0()
 *
 * @name f__10E4_10B2_0045_52D0
 * @implements 10E4:10B2:0045:52D0 ()
 *
 * Called From: 10E4:10B2:0009:6093
 */
void f__10E4_10B2_0045_52D0()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10F7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__10E4_10F7_001A_225E();
}

/**
 * Decompiled function f__10E4_10F7_001A_225E()
 *
 * @name f__10E4_10F7_001A_225E
 * @implements 10E4:10F7:001A:225E ()
 *
 * Called From: 10E4:10F7:0045:52D0
 */
void f__10E4_10F7_001A_225E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__10E4_1111_001C_695F(); return; }
	emu_movw(&emu_ax, 0x1);
	f__10E4_1113_001A_6A77(); return;
}

/**
 * Decompiled function f__10E4_1111_001C_695F()
 *
 * @name f__10E4_1111_001C_695F
 * @implements 10E4:1111:001C:695F ()
 *
 * Called From: 10E4:110A:001A:225E
 */
void f__10E4_1111_001C_695F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__10E4_1140_0005_3112(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
	f__10E4_112D_000A_817C();
}

/**
 * Decompiled function f__10E4_1113_001A_6A77()
 *
 * @name f__10E4_1113_001A_6A77
 * @implements 10E4:1113:001A:6A77 ()
 *
 * Called From: 10E4:110F:001A:225E
 */
void f__10E4_1113_001A_6A77()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1140; emu_last_cs = 0x10E4; emu_last_ip = 0x1120; emu_last_length = 0x001A; emu_last_crc = 0x6A77; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
	f__10E4_112D_000A_817C();
}

/**
 * Decompiled function f__10E4_112D_000A_817C()
 *
 * @name f__10E4_112D_000A_817C
 * @implements 10E4:112D:000A:817C ()
 *
 * Called From: 10E4:112D:001C:695F
 * Called From: 10E4:112D:001A:6A77
 */
void f__10E4_112D_000A_817C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__10E4_1137_000E_7105(); return; }
	emu_movb(&emu_al, 0x64);
	/* Unresolved jump */ emu_ip = 0x1139; emu_last_cs = 0x10E4; emu_last_ip = 0x1135; emu_last_length = 0x000A; emu_last_crc = 0x817C; emu_call();
}

/**
 * Decompiled function f__10E4_1137_000E_7105()
 *
 * @name f__10E4_1137_000E_7105
 * @implements 10E4:1137:000E:7105 ()
 *
 * Called From: 10E4:1131:000A:817C
 */
void f__10E4_1137_000E_7105()
{
	emu_movb(&emu_al, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x4F), emu_al);
	emu_push(emu_cs);
	emu_push(0x1145); f__10E4_2290_0012_78BD();
	f__10E4_1145_0002_C8BA();
}

/**
 * Decompiled function f__10E4_1140_0005_3112()
 *
 * @name f__10E4_1140_0005_3112
 * @implements 10E4:1140:0005:3112 ()
 *
 * Called From: 10E4:1120:001C:695F
 */
void f__10E4_1140_0005_3112()
{
	emu_push(emu_cs);
	emu_push(0x1145); f__10E4_2290_0012_78BD();
	f__10E4_1145_0002_C8BA();
}

/**
 * Decompiled function f__10E4_1145_0002_C8BA()
 *
 * @name f__10E4_1145_0002_C8BA
 * @implements 10E4:1145:0002:C8BA ()
 *
 * Called From: 10E4:1145:000E:7105
 * Called From: 10E4:1145:0005:3112
 */
void f__10E4_1145_0002_C8BA()
{
	f__10E4_1158_0015_378A(); return;
}

/**
 * Decompiled function f__10E4_1147_0011_B8FA()
 *
 * @name f__10E4_1147_0011_B8FA
 * @implements 10E4:1147:0011:B8FA ()
 *
 * Called From: 10E4:0FB9:0012:2B0A
 * Called From: 10E4:0FBE:0007:E58A
 */
void f__10E4_1147_0011_B8FA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	f__10E4_1158_0015_378A(); return;
}

/**
 * Decompiled function f__10E4_1158_0015_378A()
 *
 * @name f__10E4_1158_0015_378A
 * @implements 10E4:1158:0015:378A ()
 *
 * Called From: 10E4:1015:0006:BB8D
 * Called From: 10E4:1072:000A:DAE3
 * Called From: 10E4:10A6:0034:5378
 * Called From: 10E4:1145:0002:C8BA
 * Called From: 10E4:1156:0011:B8FA
 */
void f__10E4_1158_0015_378A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__10E4_116D_0009_542B(); return; }
	f__10E4_12A6_0009_1147(); return;
}

/**
 * Decompiled function f__10E4_116D_0009_542B()
 *
 * @name f__10E4_116D_0009_542B
 * @implements 10E4:116D:0009:542B ()
 *
 * Called From: 10E4:1168:0015:378A
 */
void f__10E4_116D_0009_542B()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1176); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_1176_000D_FEBC();
}

/**
 * Decompiled function f__10E4_1176_000D_FEBC()
 *
 * @name f__10E4_1176_000D_FEBC
 * @implements 10E4:1176:000D:FEBC ()
 *
 * Called From: 10E4:1176:0009:542B
 */
void f__10E4_1176_000D_FEBC()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1183); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_1183_0015_DBD8();
}

/**
 * Decompiled function f__10E4_1183_0015_DBD8()
 *
 * @name f__10E4_1183_0015_DBD8
 * @implements 10E4:1183:0015:DBD8 ()
 *
 * Called From: 10E4:1183:000D:FEBC
 */
void f__10E4_1183_0015_DBD8()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1198); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_1198_0014_C670();
}

/**
 * Decompiled function f__10E4_1198_0014_C670()
 *
 * @name f__10E4_1198_0014_C670
 * @implements 10E4:1198:0014:C670 ()
 *
 * Called From: 10E4:1198:0015:DBD8
 */
void f__10E4_1198_0014_C670()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x11AC); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_11AC_0013_8AD3();
}

/**
 * Decompiled function f__10E4_11AC_0013_8AD3()
 *
 * @name f__10E4_11AC_0013_8AD3
 * @implements 10E4:11AC:0013:8AD3 ()
 *
 * Called From: 10E4:11AC:0014:C670
 */
void f__10E4_11AC_0013_8AD3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x11BF); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_11BF_0014_8F36();
}

/**
 * Decompiled function f__10E4_11BF_0014_8F36()
 *
 * @name f__10E4_11BF_0014_8F36
 * @implements 10E4:11BF:0014:8F36 ()
 *
 * Called From: 10E4:11BF:0013:8AD3
 */
void f__10E4_11BF_0014_8F36()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_11D3_0013_8AD1();
}

/**
 * Decompiled function f__10E4_11D3_0013_8AD1()
 *
 * @name f__10E4_11D3_0013_8AD1
 * @implements 10E4:11D3:0013:8AD1 ()
 *
 * Called From: 10E4:11D3:0014:8F36
 */
void f__10E4_11D3_0013_8AD1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x11E6); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_11E6_0014_B7F4();
}

/**
 * Decompiled function f__10E4_11E6_0014_B7F4()
 *
 * @name f__10E4_11E6_0014_B7F4
 * @implements 10E4:11E6:0014:B7F4 ()
 *
 * Called From: 10E4:11E6:0013:8AD1
 */
void f__10E4_11E6_0014_B7F4()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_11FA_0013_8AD2();
}

/**
 * Decompiled function f__10E4_11FA_0013_8AD2()
 *
 * @name f__10E4_11FA_0013_8AD2
 * @implements 10E4:11FA:0013:8AD2 ()
 *
 * Called From: 10E4:11FA:0014:B7F4
 */
void f__10E4_11FA_0013_8AD2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x120D); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_120D_0014_BFB2();
}

/**
 * Decompiled function f__10E4_120D_0014_BFB2()
 *
 * @name f__10E4_120D_0014_BFB2
 * @implements 10E4:120D:0014:BFB2 ()
 *
 * Called From: 10E4:120D:0013:8AD2
 */
void f__10E4_120D_0014_BFB2()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2E), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_1221_0013_8AD4();
}

/**
 * Decompiled function f__10E4_1221_0013_8AD4()
 *
 * @name f__10E4_1221_0013_8AD4
 * @implements 10E4:1221:0013:8AD4 ()
 *
 * Called From: 10E4:1221:0014:BFB2
 */
void f__10E4_1221_0013_8AD4()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1234); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_1234_0014_EE3E();
}

/**
 * Decompiled function f__10E4_1234_0014_EE3E()
 *
 * @name f__10E4_1234_0014_EE3E
 * @implements 10E4:1234:0014:EE3E ()
 *
 * Called From: 10E4:1234:0013:8AD4
 */
void f__10E4_1234_0014_EE3E()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x1248); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_1248_0006_A930();
}

/**
 * Decompiled function f__10E4_1248_0006_A930()
 *
 * @name f__10E4_1248_0006_A930
 * @implements 10E4:1248:0006:A930 ()
 *
 * Called From: 10E4:1248:0014:EE3E
 */
void f__10E4_1248_0006_A930()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	f__10E4_1290_0013_B9F4(); return;
}

/**
 * Decompiled function f__10E4_124E_0013_0E38()
 *
 * @name f__10E4_124E_0013_0E38
 * @implements 10E4:124E:0013:0E38 ()
 *
 * Called From: 10E4:1293:0013:B9F4
 * Called From: 10E4:1293:0016:BF39
 */
void f__10E4_124E_0013_0E38()
{
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1261); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_1261_002C_EF78();
}

/**
 * Decompiled function f__10E4_1261_002C_EF78()
 *
 * @name f__10E4_1261_002C_EF78
 * @implements 10E4:1261:002C:EF78 ()
 *
 * Called From: 10E4:1261:0013:0E38
 */
void f__10E4_1261_002C_EF78()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_cx, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x0), emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x128D); emu_cs = 0x348B; ovl__348B(1);
	f__10E4_128D_0016_BF39();
}

/**
 * Decompiled function f__10E4_128D_0016_BF39()
 *
 * @name f__10E4_128D_0016_BF39
 * @implements 10E4:128D:0016:BF39 ()
 *
 * Called From: 10E4:128D:002C:EF78
 */
void f__10E4_128D_0016_BF39()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_124E_0013_0E38(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs);
	emu_push(0x12A3); f__10E4_057F_0052_2B00();
	f__10E4_12A3_000C_98EF();
}

/**
 * Decompiled function f__10E4_1290_0013_B9F4()
 *
 * @name f__10E4_1290_0013_B9F4
 * @implements 10E4:1290:0013:B9F4 ()
 *
 * Called From: 10E4:124C:0006:A930
 */
void f__10E4_1290_0013_B9F4()
{
	emu_cmpw(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_124E_0013_0E38(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x12A3); emu_ip = 0x057F; emu_last_cs = 0x10E4; emu_last_ip = 0x12A0; emu_last_length = 0x0013; emu_last_crc = 0xB9F4; emu_call();
	f__10E4_12A3_000C_98EF();
}

/**
 * Decompiled function f__10E4_12A3_000C_98EF()
 *
 * @name f__10E4_12A3_000C_98EF
 * @implements 10E4:12A3:000C:98EF ()
 *
 * Called From: 10E4:12A3:0016:BF39
 */
void f__10E4_12A3_000C_98EF()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_12AF_0012_5D6A(); return; }
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_12A6_0009_1147()
 *
 * @name f__10E4_12A6_0009_1147
 * @implements 10E4:12A6:0009:1147 ()
 *
 * Called From: 10E4:116A:0015:378A
 */
void f__10E4_12A6_0009_1147()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_12AF_0012_5D6A(); return; }
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_12AF_0012_5D6A()
 *
 * @name f__10E4_12AF_0012_5D6A
 * @implements 10E4:12AF:0012:5D6A ()
 *
 * Called From: 10E4:12AA:000C:98EF
 * Called From: 10E4:12AA:0009:1147
 */
void f__10E4_12AF_0012_5D6A()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (!(emu_flags.cf || emu_flags.zf)) { f__10E4_12E5_0002_C03A(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BC4);
	switch (emu_ip) {
		case 0x12C1: f__10E4_12C1_0009_753A(); return;
		case 0x12D3: f__10E4_12D3_0005_63FA(); return;
		case 0x12D8: f__10E4_12D8_0005_567A(); return;
		case 0x12DD: f__10E4_12DD_0008_435A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x12BC; emu_last_length = 0x0012; emu_last_crc = 0x5D6A;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_12C1_0009_753A()
 *
 * @name f__10E4_12C1_0009_753A
 * @implements 10E4:12C1:0009:753A ()
 *
 * Called From: 10E4:12BC:0012:5D6A
 */
void f__10E4_12C1_0009_753A()
{
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_12CA_0009_2375();
}

/**
 * Decompiled function f__10E4_12C4_0006_7366()
 *
 * @name f__10E4_12C4_0006_7366
 * @implements 10E4:12C4:0006:7366 ()
 *
 * Called From: 10E4:12D6:0005:63FA
 * Called From: 10E4:12DB:0005:567A
 */
void f__10E4_12C4_0006_7366()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_12CA_0009_2375();
}

/**
 * Decompiled function f__10E4_12C5_0005_3367()
 *
 * @name f__10E4_12C5_0005_3367
 * @implements 10E4:12C5:0005:3367 ()
 *
 * Called From: 10E4:12E3:0008:435A
 */
void f__10E4_12C5_0005_3367()
{
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_12CA_0009_2375();
}

/**
 * Decompiled function f__10E4_12CA_0009_2375()
 *
 * @name f__10E4_12CA_0009_2375
 * @implements 10E4:12CA:0009:2375 ()
 *
 * Called From: 10E4:12CA:0005:3367
 * Called From: 10E4:12CA:0006:7366
 * Called From: 10E4:12CA:0009:753A
 */
void f__10E4_12CA_0009_2375()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	f__10E4_12E7_0026_B9F7(); return;
}

/**
 * Decompiled function f__10E4_12D3_0005_63FA()
 *
 * @name f__10E4_12D3_0005_63FA
 * @implements 10E4:12D3:0005:63FA ()
 *
 * Called From: 10E4:12BC:0012:5D6A
 */
void f__10E4_12D3_0005_63FA()
{
	emu_movw(&emu_ax, 0xD);
	f__10E4_12C4_0006_7366(); return;
}

/**
 * Decompiled function f__10E4_12D8_0005_567A()
 *
 * @name f__10E4_12D8_0005_567A
 * @implements 10E4:12D8:0005:567A ()
 *
 * Called From: 10E4:12BC:0012:5D6A
 */
void f__10E4_12D8_0005_567A()
{
	emu_movw(&emu_ax, 0xE);
	f__10E4_12C4_0006_7366(); return;
}

/**
 * Decompiled function f__10E4_12DD_0008_435A()
 *
 * @name f__10E4_12DD_0008_435A
 * @implements 10E4:12DD:0008:435A ()
 *
 * Called From: 10E4:12BC:0012:5D6A
 */
void f__10E4_12DD_0008_435A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	f__10E4_12C5_0005_3367(); return;
}

/**
 * Decompiled function f__10E4_12E5_0002_C03A()
 *
 * @name f__10E4_12E5_0002_C03A
 * @implements 10E4:12E5:0002:C03A ()
 *
 * Called From: 10E4:12B8:0012:5D6A
 */
void f__10E4_12E5_0002_C03A()
{
	f__10E4_12E7_0026_B9F7(); return;
}

/**
 * Decompiled function f__10E4_12E7_0026_B9F7()
 *
 * @name f__10E4_12E7_0026_B9F7
 * @implements 10E4:12E7:0026:B9F7 ()
 *
 * Called From: 10E4:12D1:0009:2375
 * Called From: 10E4:12E5:0002:C03A
 */
void f__10E4_12E7_0026_B9F7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_flags.zf) { f__10E4_1310_0017_5306(); return; }
	emu_movw(&emu_ax, 0x111);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2B);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x120);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs);
	emu_push(0x130D); f__10E4_1EF1_0040_01F8();
	f__10E4_130D_001A_7DA4();
}

/**
 * Decompiled function f__10E4_130D_001A_7DA4()
 *
 * @name f__10E4_130D_001A_7DA4
 * @implements 10E4:130D:001A:7DA4 ()
 *
 * Called From: 10E4:130D:0026:B9F7
 */
void f__10E4_130D_001A_7DA4()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xFFFF);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1374; emu_last_cs = 0x10E4; emu_last_ip = 0x131E; emu_last_length = 0x001A; emu_last_crc = 0x7DA4; emu_call(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BB6);
	switch (emu_ip) {
		case 0x1327: f__10E4_1327_0007_1AA4(); return;
		case 0x132E: f__10E4_132E_0007_3E24(); return;
		case 0x1335: f__10E4_1335_0007_13A4(); return;
		case 0x133C: f__10E4_133C_000C_84E0(); return;
		case 0x1348: f__10E4_1348_001C_44A3(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1322; emu_last_length = 0x001A; emu_last_crc = 0x7DA4;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1310_0017_5306()
 *
 * @name f__10E4_1310_0017_5306
 * @implements 10E4:1310:0017:5306 ()
 *
 * Called From: 10E4:12ED:0026:B9F7
 */
void f__10E4_1310_0017_5306()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xFFFF);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (!(emu_flags.cf || emu_flags.zf)) { f__10E4_1374_0002_C03A(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BB6);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1322; emu_last_length = 0x0017; emu_last_crc = 0x5306;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1327_0007_1AA4()
 *
 * @name f__10E4_1327_0007_1AA4
 * @implements 10E4:1327:0007:1AA4 ()
 *
 * Called From: 10E4:1322:001A:7DA4
 */
void f__10E4_1327_0007_1AA4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1E);
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_132E_0007_3E24()
 *
 * @name f__10E4_132E_0007_3E24
 * @implements 10E4:132E:0007:3E24 ()
 *
 * Called From: 10E4:1322:001A:7DA4
 */
void f__10E4_132E_0007_3E24()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1C);
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_1335_0007_13A4()
 *
 * @name f__10E4_1335_0007_13A4
 * @implements 10E4:1335:0007:13A4 ()
 *
 * Called From: 10E4:1322:001A:7DA4
 */
void f__10E4_1335_0007_13A4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1D);
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_133C_000C_84E0()
 *
 * @name f__10E4_133C_000C_84E0
 * @implements 10E4:133C:000C:84E0 ()
 *
 * Called From: 10E4:1322:001A:7DA4
 */
void f__10E4_133C_000C_84E0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_1348_001C_44A3()
 *
 * @name f__10E4_1348_001C_44A3
 * @implements 10E4:1348:001C:44A3 ()
 *
 * Called From: 10E4:1322:001A:7DA4
 */
void f__10E4_1348_001C_44A3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if (emu_flags.zf) { f__10E4_1368_000C_92E0(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_1368_000C_92E0(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1364_0004_5E1F();
}

/**
 * Decompiled function f__10E4_1364_0004_5E1F()
 *
 * @name f__10E4_1364_0004_5E1F
 * @implements 10E4:1364:0004:5E1F ()
 *
 * Called From: 10E4:1364:001C:44A3
 */
void f__10E4_1364_0004_5E1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__10E4_1372_0002_C13A(); return;
}

/**
 * Decompiled function f__10E4_1368_000C_92E0()
 *
 * @name f__10E4_1368_000C_92E0
 * @implements 10E4:1368:000C:92E0 ()
 *
 * Called From: 10E4:1351:001C:44A3
 * Called From: 10E4:1357:001C:44A3
 */
void f__10E4_1368_000C_92E0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_1372_0002_C13A()
 *
 * @name f__10E4_1372_0002_C13A
 * @implements 10E4:1372:0002:C13A ()
 *
 * Called From: 10E4:1366:0004:5E1F
 */
void f__10E4_1372_0002_C13A()
{
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_1374_0002_C03A()
 *
 * @name f__10E4_1374_0002_C03A
 * @implements 10E4:1374:0002:C03A ()
 *
 * Called From: 10E4:131E:0017:5306
 */
void f__10E4_1374_0002_C03A()
{
	f__10E4_1376_0033_5882(); return;
}

/**
 * Decompiled function f__10E4_1376_0033_5882()
 *
 * @name f__10E4_1376_0033_5882
 * @implements 10E4:1376:0033:5882 ()
 *
 * Called From: 10E4:132C:0007:1AA4
 * Called From: 10E4:1333:0007:3E24
 * Called From: 10E4:133A:0007:13A4
 * Called From: 10E4:1346:000C:84E0
 * Called From: 10E4:1372:0002:C13A
 * Called From: 10E4:1372:000C:92E0
 * Called From: 10E4:1374:0002:C03A
 */
void f__10E4_1376_0033_5882()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xFFFF);
	if (emu_flags.zf) { f__10E4_13AC_000F_1AF3(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x33);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x102);
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x13A9); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_13A9_0012_B8DD();
}

/**
 * Decompiled function f__10E4_13A9_0012_B8DD()
 *
 * @name f__10E4_13A9_0012_B8DD
 * @implements 10E4:13A9:0012:B8DD ()
 *
 * Called From: 10E4:13A9:0033:5882
 */
void f__10E4_13A9_0012_B8DD()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__10E4_13BB_0015_2931(); return; }
	emu_cmpw(&emu_ax, 0x3);
	if (emu_flags.zf) { f__10E4_13BB_0015_2931(); return; }
	f__10E4_1425_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_13AC_000F_1AF3()
 *
 * @name f__10E4_13AC_000F_1AF3
 * @implements 10E4:13AC:000F:1AF3 ()
 *
 * Called From: 10E4:137A:0033:5882
 */
void f__10E4_13AC_000F_1AF3()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x13BB; emu_last_cs = 0x10E4; emu_last_ip = 0x13B2; emu_last_length = 0x000F; emu_last_crc = 0x1AF3; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x3);
	if (emu_flags.zf) { f__10E4_13BB_0015_2931(); return; }
	f__10E4_1425_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_13BB_0015_2931()
 *
 * @name f__10E4_13BB_0015_2931
 * @implements 10E4:13BB:0015:2931 ()
 *
 * Called From: 10E4:13B2:0012:B8DD
 * Called From: 10E4:13B7:000F:1AF3
 * Called From: 10E4:13B7:0012:B8DD
 */
void f__10E4_13BB_0015_2931()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x13D0); f__10E4_0D58_004B_FEF5();
	f__10E4_13D0_0029_203C();
}

/**
 * Decompiled function f__10E4_13D0_0029_203C()
 *
 * @name f__10E4_13D0_0029_203C
 * @implements 10E4:13D0:0029:203C ()
 *
 * Called From: 10E4:13D0:0015:2931
 */
void f__10E4_13D0_0029_203C()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x124);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x4AE));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x4AC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_13F9_001F_1051();
}

/**
 * Decompiled function f__10E4_13F9_001F_1051()
 *
 * @name f__10E4_13F9_001F_1051
 * @implements 10E4:13F9:001F:1051 ()
 *
 * Called From: 10E4:13F9:0029:203C
 */
void f__10E4_13F9_001F_1051()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x41);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x128);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x31);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1418); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1418_0008_A511();
}

/**
 * Decompiled function f__10E4_1418_0008_A511()
 *
 * @name f__10E4_1418_0008_A511
 * @implements 10E4:1418:0008:A511 ()
 *
 * Called From: 10E4:1418:001F:1051
 */
void f__10E4_1418_0008_A511()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1420); f__10E4_1EF1_0040_01F8();
	f__10E4_1420_0005_84EE();
}

/**
 * Decompiled function f__10E4_1420_0005_84EE()
 *
 * @name f__10E4_1420_0005_84EE
 * @implements 10E4:1420:0005:84EE ()
 *
 * Called From: 10E4:1420:0008:A511
 */
void f__10E4_1420_0005_84EE()
{
	emu_addw(&emu_sp, 0xE);
	f__10E4_1427_0010_E99B(); return;
}

/**
 * Decompiled function f__10E4_1425_0002_C03A()
 *
 * @name f__10E4_1425_0002_C03A
 * @implements 10E4:1425:0002:C03A ()
 *
 * Called From: 10E4:13B9:0012:B8DD
 * Called From: 10E4:13B9:000F:1AF3
 */
void f__10E4_1425_0002_C03A()
{
	f__10E4_1427_0010_E99B(); return;
}

/**
 * Decompiled function f__10E4_1427_0010_E99B()
 *
 * @name f__10E4_1427_0010_E99B
 * @implements 10E4:1427:0010:E99B ()
 *
 * Called From: 10E4:1423:0005:84EE
 * Called From: 10E4:1425:0002:C03A
 */
void f__10E4_1427_0010_E99B()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__10E4_1437_000E_D045(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1437; emu_last_cs = 0x10E4; emu_last_ip = 0x1432; emu_last_length = 0x0010; emu_last_crc = 0xE99B; emu_call(); return; }
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_1437_000E_D045()
 *
 * @name f__10E4_1437_000E_D045
 * @implements 10E4:1437:000E:D045 ()
 *
 * Called From: 10E4:142B:0010:E99B
 */
void f__10E4_1437_000E_D045()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1445_0007_6594(); return; }
	f__10E4_1B38_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_1445_0007_6594()
 *
 * @name f__10E4_1445_0007_6594
 * @implements 10E4:1445:0007:6594 ()
 *
 * Called From: 10E4:1440:000E:D045
 */
void f__10E4_1445_0007_6594()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BA8);
	switch (emu_ip) {
		case 0x144C: f__10E4_144C_000B_44E8(); return;
		case 0x14BC: f__10E4_14BC_000B_44E8(); return;
		case 0x14E1: f__10E4_14E1_000B_44E8(); return;
		case 0x1507: f__10E4_1507_000B_44E8(); return;
		case 0x152D: f__10E4_152D_000B_54E6(); return;
		case 0x16E1: f__10E4_16E1_000B_54E6(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1447; emu_last_length = 0x0007; emu_last_crc = 0x6594;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_144C_000B_44E8()
 *
 * @name f__10E4_144C_000B_44E8
 * @implements 10E4:144C:000B:44E8 ()
 *
 * Called From: 10E4:1447:0007:6594
 */
void f__10E4_144C_000B_44E8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x1457); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1457_001E_32D6();
}

/**
 * Decompiled function f__10E4_1457_001E_32D6()
 *
 * @name f__10E4_1457_001E_32D6
 * @implements 10E4:1457:001E:32D6 ()
 *
 * Called From: 10E4:1457:000B:44E8
 */
void f__10E4_1457_001E_32D6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_ax, 0x54);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x103);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x54);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1475_0008_E538();
}

/**
 * Decompiled function f__10E4_146F_0006_7366()
 *
 * @name f__10E4_146F_0006_7366
 * @implements 10E4:146F:0006:7366 ()
 *
 * Called From: 10E4:14DF:001A:2D9F
 * Called From: 10E4:1504:001B:20A7
 * Called From: 10E4:152A:001B:A0A5
 */
void f__10E4_146F_0006_7366()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1475_0008_E538();
}

/**
 * Decompiled function f__10E4_1475_0008_E538()
 *
 * @name f__10E4_1475_0008_E538
 * @implements 10E4:1475:0008:E538 ()
 *
 * Called From: 10E4:1475:0006:7366
 * Called From: 10E4:1475:001E:32D6
 */
void f__10E4_1475_0008_E538()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x147D); f__10E4_1EF1_0040_01F8();
	f__10E4_147D_0006_342F();
}

/**
 * Decompiled function f__10E4_147D_0006_342F()
 *
 * @name f__10E4_147D_0006_342F
 * @implements 10E4:147D:0006:342F ()
 *
 * Called From: 10E4:147D:0008:E538
 */
void f__10E4_147D_0006_342F()
{
	emu_addw(&emu_sp, 0xE);
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_14BC_000B_44E8()
 *
 * @name f__10E4_14BC_000B_44E8
 * @implements 10E4:14BC:000B:44E8 ()
 *
 * Called From: 10E4:1447:0007:6594
 */
void f__10E4_14BC_000B_44E8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x14C7); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_14C7_001A_2D9F();
}

/**
 * Decompiled function f__10E4_14C7_001A_2D9F()
 *
 * @name f__10E4_14C7_001A_2D9F
 * @implements 10E4:14C7:001A:2D9F ()
 *
 * Called From: 10E4:14C7:000B:44E8
 */
void f__10E4_14C7_001A_2D9F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_ax, 0x4C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x103);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x14F);
	f__10E4_146F_0006_7366(); return;
}

/**
 * Decompiled function f__10E4_14E1_000B_44E8()
 *
 * @name f__10E4_14E1_000B_44E8
 * @implements 10E4:14E1:000B:44E8 ()
 *
 * Called From: 10E4:1447:0007:6594
 */
void f__10E4_14E1_000B_44E8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_14EC_001B_20A7();
}

/**
 * Decompiled function f__10E4_14EC_001B_20A7()
 *
 * @name f__10E4_14EC_001B_20A7
 * @implements 10E4:14EC:001B:20A7 ()
 *
 * Called From: 10E4:14EC:000B:44E8
 */
void f__10E4_14EC_001B_20A7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_ax, 0x4C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x103);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x56);
	f__10E4_146F_0006_7366(); return;
}

/**
 * Decompiled function f__10E4_1507_000B_44E8()
 *
 * @name f__10E4_1507_000B_44E8
 * @implements 10E4:1507:000B:44E8 ()
 *
 * Called From: 10E4:1447:0007:6594
 */
void f__10E4_1507_000B_44E8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x1512); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1512_001B_A0A5();
}

/**
 * Decompiled function f__10E4_1512_001B_A0A5()
 *
 * @name f__10E4_1512_001B_A0A5
 * @implements 10E4:1512:001B:A0A5 ()
 *
 * Called From: 10E4:1512:000B:44E8
 */
void f__10E4_1512_001B_A0A5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_movw(&emu_ax, 0x4C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x103);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x57);
	f__10E4_146F_0006_7366(); return;
}

/**
 * Decompiled function f__10E4_152D_000B_54E6()
 *
 * @name f__10E4_152D_000B_54E6
 * @implements 10E4:152D:000B:54E6 ()
 *
 * Called From: 10E4:1447:0007:6594
 */
void f__10E4_152D_000B_54E6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x1538); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1538_0049_A266();
}

/**
 * Decompiled function f__10E4_1538_0049_A266()
 *
 * @name f__10E4_1538_0049_A266
 * @implements 10E4:1538:0049:A266 ()
 *
 * Called From: 10E4:1538:000B:54E6
 */
void f__10E4_1538_0049_A266()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x50));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, 0xFFFF);
	if (!emu_flags.zf) { f__10E4_1555_002C_2780(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_dx, 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__10E4_157C_0005_3C22(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x157C; emu_last_cs = 0x10E4; emu_last_ip = 0x1572; emu_last_length = 0x0049; emu_last_crc = 0xA266; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), 0x3C2A);
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x16D6; emu_last_cs = 0x10E4; emu_last_ip = 0x157E; emu_last_length = 0x0049; emu_last_crc = 0xA266; emu_call();
}

/**
 * Decompiled function f__10E4_1555_002C_2780()
 *
 * @name f__10E4_1555_002C_2780
 * @implements 10E4:1555:002C:2780 ()
 *
 * Called From: 10E4:1548:0049:A266
 */
void f__10E4_1555_002C_2780()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_dx, 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__10E4_157C_0005_3C22(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x157C; emu_last_cs = 0x10E4; emu_last_ip = 0x1572; emu_last_length = 0x002C; emu_last_crc = 0x2780; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), 0x3C2A);
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x16D6; emu_last_cs = 0x10E4; emu_last_ip = 0x157E; emu_last_length = 0x002C; emu_last_crc = 0x2780; emu_call();
}

/**
 * Decompiled function f__10E4_157C_0005_3C22()
 *
 * @name f__10E4_157C_0005_3C22
 * @implements 10E4:157C:0005:3C22 ()
 *
 * Called From: 10E4:1568:0049:A266
 * Called From: 10E4:1568:002C:2780
 */
void f__10E4_157C_0005_3C22()
{
	emu_xorw(&emu_si, emu_si);
	f__10E4_16D6_0008_031C(); return;
}

/**
 * Decompiled function f__10E4_1581_0046_E443()
 *
 * @name f__10E4_1581_0046_E443
 * @implements 10E4:1581:0046:E443 ()
 *
 * Called From: 10E4:16DB:0008:031C
 * Called From: 10E4:16DB:000C:8A97
 */
void f__10E4_1581_0046_E443()
{
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E8A);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6E));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_dx, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x38));
	emu_push(emu_cs); emu_push(0x15C7); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_15C7_000F_E74D();
}

/**
 * Decompiled function f__10E4_15C7_000F_E74D()
 *
 * @name f__10E4_15C7_000F_E74D
 * @implements 10E4:15C7:000F:E74D ()
 *
 * Called From: 10E4:15C7:0046:E443
 */
void f__10E4_15C7_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15D6); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	f__10E4_15D6_0022_5AFA();
}

/**
 * Decompiled function f__10E4_15D6_0022_5AFA()
 *
 * @name f__10E4_15D6_0022_5AFA
 * @implements 10E4:15D6:0022:5AFA ()
 *
 * Called From: 10E4:15D6:000F:E74D
 */
void f__10E4_15D6_0022_5AFA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_dx, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x37B6));
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1629; emu_last_cs = 0x10E4; emu_last_ip = 0x15EF; emu_last_length = 0x0022; emu_last_crc = 0x5AFA; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x15F8; emu_last_cs = 0x10E4; emu_last_ip = 0x15F4; emu_last_length = 0x0022; emu_last_crc = 0x5AFA; emu_call(); return; }
	f__10E4_1675_0017_0BB8(); return;
}

/**
 * Decompiled function f__10E4_1675_0017_0BB8()
 *
 * @name f__10E4_1675_0017_0BB8
 * @implements 10E4:1675:0017:0BB8 ()
 *
 * Called From: 10E4:15F6:0022:5AFA
 */
void f__10E4_1675_0017_0BB8()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x168C); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_168C_002A_C1E9();
}

/**
 * Decompiled function f__10E4_168C_002A_C1E9()
 *
 * @name f__10E4_168C_002A_C1E9
 * @implements 10E4:168C:002A:C1E9 ()
 *
 * Called From: 10E4:168C:0017:0BB8
 */
void f__10E4_168C_002A_C1E9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (!emu_flags.zf) { f__10E4_16B8_001A_B719(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x16B6); emu_cs = 0x348B; ovl__348B(5);
	f__10E4_16B6_0002_CD3A();
}

/**
 * Decompiled function f__10E4_16B6_0002_CD3A()
 *
 * @name f__10E4_16B6_0002_CD3A
 * @implements 10E4:16B6:0002:CD3A ()
 *
 * Called From: 10E4:16B6:002A:C1E9
 */
void f__10E4_16B6_0002_CD3A()
{
	f__10E4_16D2_000C_8A97(); return;
}

/**
 * Decompiled function f__10E4_16B8_001A_B719()
 *
 * @name f__10E4_16B8_001A_B719
 * @implements 10E4:16B8:001A:B719 ()
 *
 * Called From: 10E4:169A:002A:C1E9
 */
void f__10E4_16B8_001A_B719()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x16D2); emu_cs = 0x348B; ovl__348B(4);
	f__10E4_16D2_000C_8A97();
}

/**
 * Decompiled function f__10E4_16D2_000C_8A97()
 *
 * @name f__10E4_16D2_000C_8A97
 * @implements 10E4:16D2:000C:8A97 ()
 *
 * Called From: 10E4:16B6:0002:CD3A
 * Called From: 10E4:16D2:001A:B719
 */
void f__10E4_16D2_000C_8A97()
{
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_16DE_0003_5F36(); return; }
	f__10E4_1581_0046_E443(); return;
}

/**
 * Decompiled function f__10E4_16D6_0008_031C()
 *
 * @name f__10E4_16D6_0008_031C
 * @implements 10E4:16D6:0008:031C ()
 *
 * Called From: 10E4:157E:0005:3C22
 */
void f__10E4_16D6_0008_031C()
{
	emu_cmpw(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x16DE; emu_last_cs = 0x10E4; emu_last_ip = 0x16D9; emu_last_length = 0x0008; emu_last_crc = 0x031C; emu_call(); return; }
	f__10E4_1581_0046_E443(); return;
}

/**
 * Decompiled function f__10E4_16DE_0003_5F36()
 *
 * @name f__10E4_16DE_0003_5F36
 * @implements 10E4:16DE:0003:5F36 ()
 *
 * Called From: 10E4:16D9:000C:8A97
 */
void f__10E4_16DE_0003_5F36()
{
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_16E1_000B_54E6()
 *
 * @name f__10E4_16E1_000B_54E6
 * @implements 10E4:16E1:000B:54E6 ()
 *
 * Called From: 10E4:1447:0007:6594
 */
void f__10E4_16E1_000B_54E6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x16EC); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_16EC_0021_1F7C();
}

/**
 * Decompiled function f__10E4_16EC_0021_1F7C()
 *
 * @name f__10E4_16EC_0021_1F7C
 * @implements 10E4:16EC:0021:1F7C ()
 *
 * Called From: 10E4:16EC:000B:54E6
 */
void f__10E4_16EC_0021_1F7C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if (emu_flags.zf) { f__10E4_1723_002F_8C7B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x8F);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x170D); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_170D_0010_937C();
}

/**
 * Decompiled function f__10E4_170D_0010_937C()
 *
 * @name f__10E4_170D_0010_937C
 * @implements 10E4:170D:0010:937C ()
 *
 * Called From: 10E4:170D:0021:1F7C
 */
void f__10E4_170D_0010_937C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x171D); emu_cs = 0x348B; ovl__348B(5);
	f__10E4_171D_0006_B724();
}

/**
 * Decompiled function f__10E4_171D_0006_B724()
 *
 * @name f__10E4_171D_0006_B724
 * @implements 10E4:171D:0006:B724 ()
 *
 * Called From: 10E4:171D:0010:937C
 */
void f__10E4_171D_0006_B724()
{
	emu_addw(&emu_sp, 0x6);
	f__10E4_17BE_0034_9D0D(); return;
}

/**
 * Decompiled function f__10E4_1723_002F_8C7B()
 *
 * @name f__10E4_1723_002F_8C7B
 * @implements 10E4:1723:002F:8C7B ()
 *
 * Called From: 10E4:16F7:0021:1F7C
 */
void f__10E4_1723_002F_8C7B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (emu_flags.zf) { f__10E4_178D_001E_31A7(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if (emu_flags.zf) { f__10E4_1764_0014_5232(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x23);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1752); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1752_0010_937C();
}

/**
 * Decompiled function f__10E4_1752_0010_937C()
 *
 * @name f__10E4_1752_0010_937C
 * @implements 10E4:1752:0010:937C ()
 *
 * Called From: 10E4:1752:002F:8C7B
 */
void f__10E4_1752_0010_937C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1762); emu_cs = 0x348B; ovl__348B(5);
	f__10E4_1762_0002_D23A();
}

/**
 * Decompiled function f__10E4_1762_0002_D23A()
 *
 * @name f__10E4_1762_0002_D23A
 * @implements 10E4:1762:0002:D23A ()
 *
 * Called From: 10E4:1762:0010:937C
 */
void f__10E4_1762_0002_D23A()
{
	f__10E4_1788_0005_9C6E(); return;
}

/**
 * Decompiled function f__10E4_1764_0014_5232()
 *
 * @name f__10E4_1764_0014_5232
 * @implements 10E4:1764:0014:5232 ()
 *
 * Called From: 10E4:173C:002F:8C7B
 */
void f__10E4_1764_0014_5232()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x22);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1778); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_1778_0010_437C();
}

/**
 * Decompiled function f__10E4_1778_0010_437C()
 *
 * @name f__10E4_1778_0010_437C
 * @implements 10E4:1778:0010:437C ()
 *
 * Called From: 10E4:1778:0014:5232
 */
void f__10E4_1778_0010_437C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x348B; ovl__348B(4);
	f__10E4_1788_0005_9C6E();
}

/**
 * Decompiled function f__10E4_1788_0005_9C6E()
 *
 * @name f__10E4_1788_0005_9C6E
 * @implements 10E4:1788:0005:9C6E ()
 *
 * Called From: 10E4:1762:0002:D23A
 * Called From: 10E4:1788:0010:437C
 */
void f__10E4_1788_0005_9C6E()
{
	emu_addw(&emu_sp, 0x6);
	f__10E4_17BE_0034_9D0D(); return;
}

/**
 * Decompiled function f__10E4_178D_001E_31A7()
 *
 * @name f__10E4_178D_001E_31A7
 * @implements 10E4:178D:001E:31A7 ()
 *
 * Called From: 10E4:1731:002F:8C7B
 */
void f__10E4_178D_001E_31A7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_flags.zf) { f__10E4_17BE_0034_9D0D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x8E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x17AB); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_17AB_0010_437C();
}

/**
 * Decompiled function f__10E4_17AB_0010_437C()
 *
 * @name f__10E4_17AB_0010_437C
 * @implements 10E4:17AB:0010:437C ()
 *
 * Called From: 10E4:17AB:001E:31A7
 */
void f__10E4_17AB_0010_437C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x17BB); emu_cs = 0x348B; ovl__348B(4);
	f__10E4_17BB_0037_8C38();
}

/**
 * Decompiled function f__10E4_17BB_0037_8C38()
 *
 * @name f__10E4_17BB_0037_8C38
 * @implements 10E4:17BB:0037:8C38 ()
 *
 * Called From: 10E4:17BB:0010:437C
 */
void f__10E4_17BB_0037_8C38()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17C6; emu_last_length = 0x0037; emu_last_crc = 0x8C38; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if (!emu_flags.zf) { f__10E4_17E7_000B_34EA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17DB; emu_last_length = 0x0037; emu_last_crc = 0x8C38; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17E5; emu_last_length = 0x0037; emu_last_crc = 0x8C38; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x17F2); emu_cs = 0x348B; emu_ip = 0x002A; emu_last_cs = 0x10E4; emu_last_ip = 0x17ED; emu_last_length = 0x0037; emu_last_crc = 0x8C38; emu_call();
	f__10E4_17F2_000D_1972();
}

/**
 * Decompiled function f__10E4_17BE_0034_9D0D()
 *
 * @name f__10E4_17BE_0034_9D0D
 * @implements 10E4:17BE:0034:9D0D ()
 *
 * Called From: 10E4:1720:0006:B724
 * Called From: 10E4:178B:0005:9C6E
 * Called From: 10E4:1795:001E:31A7
 */
void f__10E4_17BE_0034_9D0D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17C6; emu_last_length = 0x0034; emu_last_crc = 0x9D0D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if (!emu_flags.zf) { f__10E4_17E7_000B_34EA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { f__10E4_1801_0015_7857(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1801; emu_last_cs = 0x10E4; emu_last_ip = 0x17E5; emu_last_length = 0x0034; emu_last_crc = 0x9D0D; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x17F2); emu_cs = 0x348B; emu_ip = 0x002A; emu_last_cs = 0x10E4; emu_last_ip = 0x17ED; emu_last_length = 0x0034; emu_last_crc = 0x9D0D; emu_call();
	f__10E4_17F2_000D_1972();
}

/**
 * Decompiled function f__10E4_17E7_000B_34EA()
 *
 * @name f__10E4_17E7_000B_34EA
 * @implements 10E4:17E7:000B:34EA ()
 *
 * Called From: 10E4:17D1:0034:9D0D
 * Called From: 10E4:17D1:0037:8C38
 */
void f__10E4_17E7_000B_34EA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17F2); emu_cs = 0x348B; ovl__348B(2);
	f__10E4_17F2_000D_1972();
}

/**
 * Decompiled function f__10E4_17F2_000D_1972()
 *
 * @name f__10E4_17F2_000D_1972
 * @implements 10E4:17F2:000D:1972 ()
 *
 * Called From: 10E4:17F2:000B:34EA
 */
void f__10E4_17F2_000D_1972()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17FF); emu_cs = 0x34A2; ovl__34A2(0);
	f__10E4_17FF_0017_1CE4();
}

/**
 * Decompiled function f__10E4_17FF_0017_1CE4()
 *
 * @name f__10E4_17FF_0017_1CE4
 * @implements 10E4:17FF:0017:1CE4 ()
 *
 * Called From: 10E4:17FF:000D:1972
 */
void f__10E4_17FF_0017_1CE4()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_subw(&emu_ax, 0x9);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_bx, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1816_0007_659B(); return; }
	f__10E4_1B34_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_1801_0015_7857()
 *
 * @name f__10E4_1801_0015_7857
 * @implements 10E4:1801:0015:7857 ()
 *
 * Called From: 10E4:17DB:0034:9D0D
 */
void f__10E4_1801_0015_7857()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_subw(&emu_ax, 0x9);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_bx, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1816_0007_659B(); return; }
	/* Unresolved jump */ emu_ip = 0x1B34; emu_last_cs = 0x10E4; emu_last_ip = 0x1813; emu_last_length = 0x0015; emu_last_crc = 0x7857; emu_call();
}

/**
 * Decompiled function f__10E4_1816_0007_659B()
 *
 * @name f__10E4_1816_0007_659B
 * @implements 10E4:1816:0007:659B ()
 *
 * Called From: 10E4:1811:0015:7857
 * Called From: 10E4:1811:0017:1CE4
 */
void f__10E4_1816_0007_659B()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1B94);
	switch (emu_ip) {
		case 0x18F8: f__10E4_18F8_0013_DC38(); return;
		case 0x19EE: f__10E4_19EE_001E_2919(); return;
		case 0x1A9A: f__10E4_1A9A_0013_32B8(); return;
		case 0x1B34: f__10E4_1B34_0002_C03A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1818; emu_last_length = 0x0007; emu_last_crc = 0x659B;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_18F8_0013_DC38()
 *
 * @name f__10E4_18F8_0013_DC38
 * @implements 10E4:18F8:0013:DC38 ()
 *
 * Called From: 10E4:1818:0007:659B
 */
void f__10E4_18F8_0013_DC38()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x190B); emu_cs = 0x34C1; ovl__34C1(2);
	f__10E4_190B_0017_9088();
}

/**
 * Decompiled function f__10E4_190B_0017_9088()
 *
 * @name f__10E4_190B_0017_9088
 * @implements 10E4:190B:0017:9088 ()
 *
 * Called From: 10E4:190B:0013:DC38
 */
void f__10E4_190B_0017_9088()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x38));
	emu_negw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1922); emu_cs = 0x34C1; ovl__34C1(0);
	f__10E4_1922_0022_2DB0();
}

/**
 * Decompiled function f__10E4_1922_0022_2DB0()
 *
 * @name f__10E4_1922_0022_2DB0
 * @implements 10E4:1922:0022:2DB0 ()
 *
 * Called From: 10E4:1922:0017:9088
 */
void f__10E4_1922_0022_2DB0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_flags.zf) { f__10E4_1944_0020_D72B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_movw(&emu_di, emu_ax);
	f__10E4_1946_001E_2919(); return;
}

/**
 * Decompiled function f__10E4_1944_0020_D72B()
 *
 * @name f__10E4_1944_0020_D72B
 * @implements 10E4:1944:0020:D72B ()
 *
 * Called From: 10E4:192F:0022:2DB0
 */
void f__10E4_1944_0020_D72B()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x138);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x105);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x1964);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x195F; emu_last_length = 0x0020; emu_last_crc = 0xD72B;
			emu_call();
			return;
	}
	f__10E4_1964_001F_5AE8();
}

/**
 * Decompiled function f__10E4_1946_001E_2919()
 *
 * @name f__10E4_1946_001E_2919
 * @implements 10E4:1946:001E:2919 ()
 *
 * Called From: 10E4:1942:0022:2DB0
 */
void f__10E4_1946_001E_2919()
{
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x138);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x105);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x1964);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x195F; emu_last_length = 0x001E; emu_last_crc = 0x2919;
			emu_call();
			return;
	}
	f__10E4_1964_001F_5AE8();
}

/**
 * Decompiled function f__10E4_1964_001F_5AE8()
 *
 * @name f__10E4_1964_001F_5AE8
 * @implements 10E4:1964:001F:5AE8 ()
 *
 * Called From: 10E4:1964:001E:2919
 * Called From: 10E4:1964:0020:D72B
 */
void f__10E4_1964_001F_5AE8()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x102);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x59);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1983); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1983_0008_62BC();
}

/**
 * Decompiled function f__10E4_1983_0008_62BC()
 *
 * @name f__10E4_1983_0008_62BC
 * @implements 10E4:1983:0008:62BC ()
 *
 * Called From: 10E4:1983:001F:5AE8
 */
void f__10E4_1983_0008_62BC()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x198B); f__10E4_1EF1_0040_01F8();
	f__10E4_198B_0027_D2E5();
}

/**
 * Decompiled function f__10E4_198B_0027_D2E5()
 *
 * @name f__10E4_198B_0027_D2E5
 * @implements 10E4:198B:0027:D2E5 ()
 *
 * Called From: 10E4:198B:0008:62BC
 */
void f__10E4_198B_0027_D2E5()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_ax, 0x50);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x12E);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3774);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19B2); f__10E4_1EF1_0040_01F8();
	f__10E4_19B2_0017_50DD();
}

/**
 * Decompiled function f__10E4_19B2_0017_50DD()
 *
 * @name f__10E4_19B2_0017_50DD
 * @implements 10E4:19B2:0017:50DD ()
 *
 * Called From: 10E4:19B2:0027:D2E5
 */
void f__10E4_19B2_0017_50DD()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_19C9_001F_A367(); return; }
	emu_movw(&emu_ax, 0x6);
	f__10E4_19CC_001C_D312(); return;
}

/**
 * Decompiled function f__10E4_19C9_001F_A367()
 *
 * @name f__10E4_19C9_001F_A367
 * @implements 10E4:19C9:001F:A367 ()
 *
 * Called From: 10E4:19C2:0017:50DD
 */
void f__10E4_19C9_001F_A367()
{
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x50);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x12E);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3774);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19E8); f__10E4_1EF1_0040_01F8();
	f__10E4_19E8_0006_1791();
}

/**
 * Decompiled function f__10E4_19CC_001C_D312()
 *
 * @name f__10E4_19CC_001C_D312
 * @implements 10E4:19CC:001C:D312 ()
 *
 * Called From: 10E4:19C7:0017:50DD
 */
void f__10E4_19CC_001C_D312()
{
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x50);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x12E);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3774);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19E8); f__10E4_1EF1_0040_01F8();
	f__10E4_19E8_0006_1791();
}

/**
 * Decompiled function f__10E4_19E8_0006_1791()
 *
 * @name f__10E4_19E8_0006_1791
 * @implements 10E4:19E8:0006:1791 ()
 *
 * Called From: 10E4:19E8:001C:D312
 * Called From: 10E4:19E8:001F:A367
 */
void f__10E4_19E8_0006_1791()
{
	emu_addw(&emu_sp, 0x10);
	f__10E4_1B36_0002_C13A(); return;
}

/**
 * Decompiled function f__10E4_19EE_001E_2919()
 *
 * @name f__10E4_19EE_001E_2919
 * @implements 10E4:19EE:001E:2919 ()
 *
 * Called From: 10E4:1818:0007:659B
 */
void f__10E4_19EE_001E_2919()
{
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x138);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x105);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x1A0C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1A07; emu_last_length = 0x001E; emu_last_crc = 0x2919;
			emu_call();
			return;
	}
	f__10E4_1A0C_002A_ACC1();
}

/**
 * Decompiled function f__10E4_1A0C_002A_ACC1()
 *
 * @name f__10E4_1A0C_002A_ACC1
 * @implements 10E4:1A0C:002A:ACC1 ()
 *
 * Called From: 10E4:1A0C:001E:2919
 */
void f__10E4_1A0C_002A_ACC1()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x102);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x92);
	f__10E4_1B21_0006_7366(); return;
}

/**
 * Decompiled function f__10E4_1A9A_0013_32B8()
 *
 * @name f__10E4_1A9A_0013_32B8
 * @implements 10E4:1A9A:0013:32B8 ()
 *
 * Called From: 10E4:1818:0007:659B
 */
void f__10E4_1A9A_0013_32B8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x1AAD); emu_cs = 0x34C1; ovl__34C1(2);
	f__10E4_1AAD_000E_FC87();
}

/**
 * Decompiled function f__10E4_1AAD_000E_FC87()
 *
 * @name f__10E4_1AAD_000E_FC87
 * @implements 10E4:1AAD:000E:FC87 ()
 *
 * Called From: 10E4:1AAD:0013:32B8
 */
void f__10E4_1AAD_000E_FC87()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, 0x100);
	if (!(emu_flags.sf != emu_flags.of)) { f__10E4_1ABB_0012_2398(); return; }
	emu_movw(&emu_ax, emu_di);
	f__10E4_1ABE_000F_23B7(); return;
}

/**
 * Decompiled function f__10E4_1ABB_0012_2398()
 *
 * @name f__10E4_1ABB_0012_2398
 * @implements 10E4:1ABB:0012:2398 ()
 *
 * Called From: 10E4:1AB5:000E:FC87
 */
void f__10E4_1ABB_0012_2398()
{
	emu_movw(&emu_ax, 0x100);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x36));
	emu_push(emu_cs); emu_push(0x1ACD); emu_cs = 0x34C1; ovl__34C1(0);
	f__10E4_1ACD_0022_B505();
}

/**
 * Decompiled function f__10E4_1ABE_000F_23B7()
 *
 * @name f__10E4_1ABE_000F_23B7
 * @implements 10E4:1ABE:000F:23B7 ()
 *
 * Called From: 10E4:1AB9:000E:FC87
 */
void f__10E4_1ABE_000F_23B7()
{
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x36));
	emu_push(emu_cs); emu_push(0x1ACD); emu_cs = 0x34C1; ovl__34C1(0);
	f__10E4_1ACD_0022_B505();
}

/**
 * Decompiled function f__10E4_1ACD_0022_B505()
 *
 * @name f__10E4_1ACD_0022_B505
 * @implements 10E4:1ACD:0022:B505 ()
 *
 * Called From: 10E4:1ACD:000F:23B7
 * Called From: 10E4:1ACD:0012:2398
 */
void f__10E4_1ACD_0022_B505()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x138);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x105);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x1AEF);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1AEA; emu_last_length = 0x0022; emu_last_crc = 0xB505;
			emu_call();
			return;
	}
	f__10E4_1AEF_0013_2E37();
}

/**
 * Decompiled function f__10E4_1AEF_0013_2E37()
 *
 * @name f__10E4_1AEF_0013_2E37
 * @implements 10E4:1AEF:0013:2E37 ()
 *
 * Called From: 10E4:1AEF:0022:B505
 */
void f__10E4_1AEF_0013_2E37()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x3E8);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1B02_0025_E5D0(); return; }
	emu_movw(&emu_ax, 0x3E8);
	f__10E4_1B09_001E_B7BB(); return;
}

/**
 * Decompiled function f__10E4_1B02_0025_E5D0()
 *
 * @name f__10E4_1B02_0025_E5D0
 * @implements 10E4:1B02:0025:E5D0 ()
 *
 * Called From: 10E4:1AFB:0013:2E37
 */
void f__10E4_1B02_0025_E5D0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x36));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x102);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B27); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1B27_0008_6195();
}

/**
 * Decompiled function f__10E4_1B09_001E_B7BB()
 *
 * @name f__10E4_1B09_001E_B7BB
 * @implements 10E4:1B09:001E:B7BB ()
 *
 * Called From: 10E4:1B00:0013:2E37
 */
void f__10E4_1B09_001E_B7BB()
{
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x102);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B27); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1B27_0008_6195();
}

/**
 * Decompiled function f__10E4_1B21_0006_7366()
 *
 * @name f__10E4_1B21_0006_7366
 * @implements 10E4:1B21:0006:7366 ()
 *
 * Called From: 10E4:1A33:002A:ACC1
 */
void f__10E4_1B21_0006_7366()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B27); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__10E4_1B27_0008_6195();
}

/**
 * Decompiled function f__10E4_1B27_0008_6195()
 *
 * @name f__10E4_1B27_0008_6195
 * @implements 10E4:1B27:0008:6195 ()
 *
 * Called From: 10E4:1B27:001E:B7BB
 * Called From: 10E4:1B27:0006:7366
 * Called From: 10E4:1B27:0025:E5D0
 */
void f__10E4_1B27_0008_6195()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1B2F); f__10E4_1EF1_0040_01F8();
	f__10E4_1B2F_0005_876E();
}

/**
 * Decompiled function f__10E4_1B2F_0005_876E()
 *
 * @name f__10E4_1B2F_0005_876E
 * @implements 10E4:1B2F:0005:876E ()
 *
 * Called From: 10E4:1B2F:0008:6195
 */
void f__10E4_1B2F_0005_876E()
{
	emu_addw(&emu_sp, 0x12);
	f__10E4_1B36_0002_C13A(); return;
}

/**
 * Decompiled function f__10E4_1B34_0002_C03A()
 *
 * @name f__10E4_1B34_0002_C03A
 * @implements 10E4:1B34:0002:C03A ()
 *
 * Called From: 10E4:1813:0017:1CE4
 * Called From: 10E4:1818:0007:659B
 */
void f__10E4_1B34_0002_C03A()
{
	f__10E4_1B36_0002_C13A(); return;
}

/**
 * Decompiled function f__10E4_1B36_0002_C13A()
 *
 * @name f__10E4_1B36_0002_C13A
 * @implements 10E4:1B36:0002:C13A ()
 *
 * Called From: 10E4:19EB:0006:1791
 * Called From: 10E4:1B32:0005:876E
 * Called From: 10E4:1B34:0002:C03A
 */
void f__10E4_1B36_0002_C13A()
{
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_1B38_0002_C03A()
 *
 * @name f__10E4_1B38_0002_C03A
 * @implements 10E4:1B38:0002:C03A ()
 *
 * Called From: 10E4:1442:000E:D045
 */
void f__10E4_1B38_0002_C03A()
{
	f__10E4_1B3A_000F_8BED(); return;
}

/**
 * Decompiled function f__10E4_1B3A_000F_8BED()
 *
 * @name f__10E4_1B3A_000F_8BED
 * @implements 10E4:1B3A:000F:8BED ()
 *
 * Called From: 10E4:12AC:0009:1147
 * Called From: 10E4:12AC:000C:98EF
 * Called From: 10E4:1434:0010:E99B
 * Called From: 10E4:1480:0006:342F
 * Called From: 10E4:16DE:0003:5F36
 * Called From: 10E4:1B36:0002:C13A
 * Called From: 10E4:1B38:0002:C03A
 */
void f__10E4_1B3A_000F_8BED()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__10E4_1B76_000E_52F2(); return; }
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B49); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__10E4_1B49_0025_F554();
}

/**
 * Decompiled function f__10E4_1B49_0025_F554()
 *
 * @name f__10E4_1B49_0025_F554
 * @implements 10E4:1B49:0025:F554 ()
 *
 * Called From: 10E4:1B49:000F:8BED
 */
void f__10E4_1B49_0025_F554()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x1B6E); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__10E4_1B6E_0008_C54E();
}

/**
 * Decompiled function f__10E4_1B6E_0008_C54E()
 *
 * @name f__10E4_1B6E_0008_C54E
 * @implements 10E4:1B6E:0008:C54E ()
 *
 * Called From: 10E4:1B6E:0025:F554
 */
void f__10E4_1B6E_0008_C54E()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1B76); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__10E4_1B76_000E_52F2();
}

/**
 * Decompiled function f__10E4_1B76_000E_52F2()
 *
 * @name f__10E4_1B76_000E_52F2
 * @implements 10E4:1B76:000E:52F2 ()
 *
 * Called From: 10E4:1B3E:000F:8BED
 * Called From: 10E4:1B76:0008:C54E
 */
void f__10E4_1B76_000E_52F2()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__10E4_1B8E_0006_F7CE(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1B84); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__10E4_1B84_0009_99B5();
}

/**
 * Decompiled function f__10E4_1B84_0009_99B5()
 *
 * @name f__10E4_1B84_0009_99B5
 * @implements 10E4:1B84:0009:99B5 ()
 *
 * Called From: 10E4:1B84:000E:52F2
 */
void f__10E4_1B84_0009_99B5()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B8D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_1B8D_0007_F77C();
}

/**
 * Decompiled function f__10E4_1B8D_0007_F77C()
 *
 * @name f__10E4_1B8D_0007_F77C
 * @implements 10E4:1B8D:0007:F77C ()
 *
 * Called From: 10E4:1B8D:0009:99B5
 */
void f__10E4_1B8D_0007_F77C()
{
	emu_pop(&emu_cx);
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
 * Decompiled function f__10E4_1B8E_0006_F7CE()
 *
 * @name f__10E4_1B8E_0006_F7CE
 * @implements 10E4:1B8E:0006:F7CE ()
 *
 * Called From: 10E4:1B7A:000E:52F2
 */
void f__10E4_1B8E_0006_F7CE()
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
 * Decompiled function f__10E4_1BE0_002F_1A76()
 *
 * @name f__10E4_1BE0_002F_1A76
 * @implements 10E4:1BE0:002F:1A76 ()
 *
 * Called From: 10E4:0FA7:0008:9861
 */
void f__10E4_1BE0_002F_1A76()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (!emu_flags.zf) { f__10E4_1C0F_001C_840E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3752), 0x7);
	if (!emu_flags.zf) { f__10E4_1C09_0006_A5A9(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__10E4_1C0C_0003_5D93(); return; }
	emu_movw(&emu_si, 0x7);
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1C09_0006_A5A9()
 *
 * @name f__10E4_1C09_0006_A5A9
 * @implements 10E4:1C09:0006:A5A9 ()
 *
 * Called From: 10E4:1C03:002F:1A76
 */
void f__10E4_1C09_0006_A5A9()
{
	emu_movw(&emu_si, 0x7);
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1C0C_0003_5D93()
 *
 * @name f__10E4_1C0C_0003_5D93
 * @implements 10E4:1C0C:0003:5D93 ()
 *
 * Called From: 10E4:1C07:002F:1A76
 */
void f__10E4_1C0C_0003_5D93()
{
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1C0F_001C_840E()
 *
 * @name f__10E4_1C0F_001C_840E
 * @implements 10E4:1C0F:001C:840E ()
 *
 * Called From: 10E4:1BFC:002F:1A76
 */
void f__10E4_1C0F_001C_840E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_flags.zf) { f__10E4_1C2B_000C_0425(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3762));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FE));
	if (!emu_flags.zf) { f__10E4_1C25_0006_A5CE(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C28; emu_last_cs = 0x10E4; emu_last_ip = 0x1C23; emu_last_length = 0x001C; emu_last_crc = 0x840E; emu_call(); return; }
	emu_movw(&emu_si, 0x8);
	/* Unresolved jump */ emu_ip = 0x1DDC; emu_last_cs = 0x10E4; emu_last_ip = 0x1C28; emu_last_length = 0x001C; emu_last_crc = 0x840E; emu_call();
}

/**
 * Decompiled function f__10E4_1C25_0006_A5CE()
 *
 * @name f__10E4_1C25_0006_A5CE
 * @implements 10E4:1C25:0006:A5CE ()
 *
 * Called From: 10E4:1C1F:001C:840E
 */
void f__10E4_1C25_0006_A5CE()
{
	emu_movw(&emu_si, 0x8);
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1C2B_000C_0425()
 *
 * @name f__10E4_1C2B_000C_0425
 * @implements 10E4:1C2B:000C:0425 ()
 *
 * Called From: 10E4:1C16:001C:840E
 */
void f__10E4_1C2B_000C_0425()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (!emu_flags.zf) { f__10E4_1C37_0025_30B3(); return; }
	f__10E4_1CBB_001E_8B40(); return;
}

/**
 * Decompiled function f__10E4_1C37_0025_30B3()
 *
 * @name f__10E4_1C37_0025_30B3
 * @implements 10E4:1C37:0025:30B3 ()
 *
 * Called From: 10E4:1C32:000C:0425
 */
void f__10E4_1C37_0025_30B3()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (!emu_flags.zf) { f__10E4_1C78_0043_45A7(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38F6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3760));
	if (!emu_flags.zf) { f__10E4_1C51_000B_E9CC(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__10E4_1C6A_000E_589E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_1C5C_000B_FE4C(); return; }
	emu_movw(&emu_si, 0x4);
	f__10E4_1C6A_000E_589E(); return;
}

/**
 * Decompiled function f__10E4_1C51_000B_E9CC()
 *
 * @name f__10E4_1C51_000B_E9CC
 * @implements 10E4:1C51:000B:E9CC ()
 *
 * Called From: 10E4:1C4B:0025:30B3
 */
void f__10E4_1C51_000B_E9CC()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__10E4_1C5C_000B_FE4C(); return; }
	emu_movw(&emu_si, 0x4);
	f__10E4_1C6A_000E_589E(); return;
}

/**
 * Decompiled function f__10E4_1C5C_000B_FE4C()
 *
 * @name f__10E4_1C5C_000B_FE4C
 * @implements 10E4:1C5C:000B:FE4C ()
 *
 * Called From: 10E4:1C55:000B:E9CC
 * Called From: 10E4:1C55:0025:30B3
 */
void f__10E4_1C5C_000B_FE4C()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	if (!emu_flags.zf) { f__10E4_1C67_0011_0798(); return; }
	emu_movw(&emu_si, 0x5);
	f__10E4_1C6A_000E_589E(); return;
}

/**
 * Decompiled function f__10E4_1C67_0011_0798()
 *
 * @name f__10E4_1C67_0011_0798
 * @implements 10E4:1C67:0011:0798 ()
 *
 * Called From: 10E4:1C60:000B:FE4C
 */
void f__10E4_1C67_0011_0798()
{
	emu_movw(&emu_si, 0x6);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3752));
	if (!emu_flags.zf) { f__10E4_1C76_0002_E03A(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C76; emu_last_cs = 0x10E4; emu_last_ip = 0x1C72; emu_last_length = 0x0011; emu_last_crc = 0x0798; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	f__10E4_1CB8_0003_5DA8(); return;
}

/**
 * Decompiled function f__10E4_1C6A_000E_589E()
 *
 * @name f__10E4_1C6A_000E_589E
 * @implements 10E4:1C6A:000E:589E ()
 *
 * Called From: 10E4:1C4F:0025:30B3
 * Called From: 10E4:1C5A:000B:E9CC
 * Called From: 10E4:1C5A:0025:30B3
 * Called From: 10E4:1C65:000B:FE4C
 */
void f__10E4_1C6A_000E_589E()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3752));
	if (!emu_flags.zf) { f__10E4_1C76_0002_E03A(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C76; emu_last_cs = 0x10E4; emu_last_ip = 0x1C72; emu_last_length = 0x000E; emu_last_crc = 0x589E; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	f__10E4_1CB8_0003_5DA8(); return;
}

/**
 * Decompiled function f__10E4_1C76_0002_E03A()
 *
 * @name f__10E4_1C76_0002_E03A
 * @implements 10E4:1C76:0002:E03A ()
 *
 * Called From: 10E4:1C6E:000E:589E
 * Called From: 10E4:1C6E:0011:0798
 */
void f__10E4_1C76_0002_E03A()
{
	f__10E4_1CB8_0003_5DA8(); return;
}

/**
 * Decompiled function f__10E4_1C78_0043_45A7()
 *
 * @name f__10E4_1C78_0043_45A7
 * @implements 10E4:1C78:0043:45A7 ()
 *
 * Called From: 10E4:1C3C:0025:30B3
 */
void f__10E4_1C78_0043_45A7()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__10E4_1CB5_0006_A5BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3756));
	if (!emu_flags.zf) { f__10E4_1CB5_0006_A5BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3754));
	if (!emu_flags.zf) { f__10E4_1CB5_0006_A5BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376A));
	if (!emu_flags.zf) { f__10E4_1CB5_0006_A5BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3760));
	if (emu_flags.zf) { f__10E4_1CB8_0003_5DA8(); return; }
	emu_movw(&emu_si, 0x2);
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1CB5_0006_A5BA()
 *
 * @name f__10E4_1CB5_0006_A5BA
 * @implements 10E4:1CB5:0006:A5BA ()
 *
 * Called From: 10E4:1C7A:0043:45A7
 * Called From: 10E4:1C87:0043:45A7
 * Called From: 10E4:1C95:0043:45A7
 * Called From: 10E4:1CA4:0043:45A7
 */
void f__10E4_1CB5_0006_A5BA()
{
	emu_movw(&emu_si, 0x2);
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1CB8_0003_5DA8()
 *
 * @name f__10E4_1CB8_0003_5DA8
 * @implements 10E4:1CB8:0003:5DA8 ()
 *
 * Called From: 10E4:1C76:0002:E03A
 * Called From: 10E4:1C76:000E:589E
 * Called From: 10E4:1C76:0011:0798
 * Called From: 10E4:1CB3:0043:45A7
 */
void f__10E4_1CB8_0003_5DA8()
{
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1CBB_001E_8B40()
 *
 * @name f__10E4_1CBB_001E_8B40
 * @implements 10E4:1CBB:001E:8B40 ()
 *
 * Called From: 10E4:1C34:000C:0425
 */
void f__10E4_1CBB_001E_8B40()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (!emu_flags.zf) { f__10E4_1CD9_0009_109E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1CD9; emu_last_cs = 0x10E4; emu_last_ip = 0x1CD4; emu_last_length = 0x001E; emu_last_crc = 0x8B40; emu_call(); return; }
	f__10E4_1DD9_000D_1EE5(); return;
}

/**
 * Decompiled function f__10E4_1CD9_0009_109E()
 *
 * @name f__10E4_1CD9_0009_109E
 * @implements 10E4:1CD9:0009:109E ()
 *
 * Called From: 10E4:1CCD:001E:8B40
 */
void f__10E4_1CD9_0009_109E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1CE2); emu_cs = 0x34CD; ovl__34CD(13);
	f__10E4_1CE2_000D_9E1E();
}

/**
 * Decompiled function f__10E4_1CE2_000D_9E1E()
 *
 * @name f__10E4_1CE2_000D_9E1E
 * @implements 10E4:1CE2:000D:9E1E ()
 *
 * Called From: 10E4:1CE2:0009:109E
 */
void f__10E4_1CE2_000D_9E1E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xC);
	if (emu_flags.zf) { f__10E4_1CEF_0009_6093(); return; }
	f__10E4_1DD4_0005_D44A(); return;
}

/**
 * Decompiled function f__10E4_1CEF_0009_6093()
 *
 * @name f__10E4_1CEF_0009_6093
 * @implements 10E4:1CEF:0009:6093 ()
 *
 * Called From: 10E4:1CEA:000D:9E1E
 */
void f__10E4_1CEF_0009_6093()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1CF8); emu_cs = 0x34CD; ovl__34CD(30);
	f__10E4_1CF8_000E_06CC();
}

/**
 * Decompiled function f__10E4_1CF8_000E_06CC()
 *
 * @name f__10E4_1CF8_000E_06CC
 * @implements 10E4:1CF8:000E:06CC ()
 *
 * Called From: 10E4:1CF8:0009:6093
 */
void f__10E4_1CF8_000E_06CC()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__10E4_1D06_0010_D001(); return; }
	f__10E4_1D9D_002C_E708(); return;
}

/**
 * Decompiled function f__10E4_1D06_0010_D001()
 *
 * @name f__10E4_1D06_0010_D001
 * @implements 10E4:1D06:0010:D001 ()
 *
 * Called From: 10E4:1D01:000E:06CC
 */
void f__10E4_1D06_0010_D001()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3754));
	if (emu_flags.zf) { f__10E4_1D16_006B_11D3(); return; }
	f__10E4_1D9D_002C_E708(); return;
}

/**
 * Decompiled function f__10E4_1D16_006B_11D3()
 *
 * @name f__10E4_1D16_006B_11D3
 * @implements 10E4:1D16:006B:11D3 ()
 *
 * Called From: 10E4:1D11:0010:D001
 */
void f__10E4_1D16_006B_11D3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3756));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3758));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3764));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x375E));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x375A));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3766));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376A));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D81); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__10E4_1D81_0048_3DC5();
}

/**
 * Decompiled function f__10E4_1D81_0048_3DC5()
 *
 * @name f__10E4_1D81_0048_3DC5
 * @implements 10E4:1D81:0048:3DC5 ()
 *
 * Called From: 10E4:1D81:006B:11D3
 */
void f__10E4_1D81_0048_3DC5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3768));
	if (!emu_flags.zf) { f__10E4_1D9D_002C_E708(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x375C));
	if (emu_flags.zf) { f__10E4_1DD2_0002_C1BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_1DC9_000B_2289(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B2), 0x0);
	f__10E4_1DCF_0005_F44A(); return;
}

/**
 * Decompiled function f__10E4_1D9D_002C_E708()
 *
 * @name f__10E4_1D9D_002C_E708
 * @implements 10E4:1D9D:002C:E708 ()
 *
 * Called From: 10E4:1D03:000E:06CC
 * Called From: 10E4:1D13:0010:D001
 * Called From: 10E4:1D20:006B:11D3
 * Called From: 10E4:1D2D:006B:11D3
 * Called From: 10E4:1D3B:006B:11D3
 * Called From: 10E4:1D49:006B:11D3
 * Called From: 10E4:1D56:006B:11D3
 * Called From: 10E4:1D63:006B:11D3
 * Called From: 10E4:1D71:006B:11D3
 * Called From: 10E4:1D8E:0048:3DC5
 */
void f__10E4_1D9D_002C_E708()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__10E4_1DC9_000B_2289(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B2), 0x0);
	f__10E4_1DCF_0005_F44A(); return;
}

/**
 * Decompiled function f__10E4_1DC9_000B_2289()
 *
 * @name f__10E4_1DC9_000B_2289
 * @implements 10E4:1DC9:000B:2289 ()
 *
 * Called From: 10E4:1DBF:002C:E708
 * Called From: 10E4:1DBF:0048:3DC5
 */
void f__10E4_1DC9_000B_2289()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B2), 0x1);
	emu_movw(&emu_si, 0x3);
	f__10E4_1DD7_0002_C1BA(); return;
}

/**
 * Decompiled function f__10E4_1DCF_0005_F44A()
 *
 * @name f__10E4_1DCF_0005_F44A
 * @implements 10E4:1DCF:0005:F44A ()
 *
 * Called From: 10E4:1DC7:002C:E708
 * Called From: 10E4:1DC7:0048:3DC5
 */
void f__10E4_1DCF_0005_F44A()
{
	emu_movw(&emu_si, 0x3);
	f__10E4_1DD7_0002_C1BA(); return;
}

/**
 * Decompiled function f__10E4_1DD2_0002_C1BA()
 *
 * @name f__10E4_1DD2_0002_C1BA
 * @implements 10E4:1DD2:0002:C1BA ()
 *
 * Called From: 10E4:1D9B:0048:3DC5
 */
void f__10E4_1DD2_0002_C1BA()
{
	f__10E4_1DD7_0002_C1BA(); return;
}

/**
 * Decompiled function f__10E4_1DD4_0005_D44A()
 *
 * @name f__10E4_1DD4_0005_D44A
 * @implements 10E4:1DD4:0005:D44A ()
 *
 * Called From: 10E4:1CEC:000D:9E1E
 */
void f__10E4_1DD4_0005_D44A()
{
	emu_movw(&emu_si, 0x1);
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1DD7_0002_C1BA()
 *
 * @name f__10E4_1DD7_0002_C1BA
 * @implements 10E4:1DD7:0002:C1BA ()
 *
 * Called From: 10E4:1DD2:000B:2289
 * Called From: 10E4:1DD2:0002:C1BA
 * Called From: 10E4:1DD2:0005:F44A
 */
void f__10E4_1DD7_0002_C1BA()
{
	f__10E4_1DDC_000A_EEF0(); return;
}

/**
 * Decompiled function f__10E4_1DD9_000D_1EE5()
 *
 * @name f__10E4_1DD9_000D_1EE5
 * @implements 10E4:1DD9:000D:1EE5 ()
 *
 * Called From: 10E4:1CD6:001E:8B40
 */
void f__10E4_1DD9_000D_1EE5()
{
	emu_movw(&emu_si, 0x1);
	emu_movw(&emu_bx, emu_si);
	emu_cmpw(&emu_bx, 0x8);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1DE6_0007_A709(); return; }
	/* Unresolved jump */ emu_ip = 0x1ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x1DE3; emu_last_length = 0x000D; emu_last_crc = 0x1EE5; emu_call();
}

/**
 * Decompiled function f__10E4_1DDC_000A_EEF0()
 *
 * @name f__10E4_1DDC_000A_EEF0
 * @implements 10E4:1DDC:000A:EEF0 ()
 *
 * Called From: 10E4:1C0C:0006:A5A9
 * Called From: 10E4:1C0C:0003:5D93
 * Called From: 10E4:1C0C:002F:1A76
 * Called From: 10E4:1C28:0006:A5CE
 * Called From: 10E4:1CB8:0006:A5BA
 * Called From: 10E4:1CB8:0003:5DA8
 * Called From: 10E4:1CB8:0043:45A7
 * Called From: 10E4:1DD7:0002:C1BA
 * Called From: 10E4:1DD7:0005:D44A
 */
void f__10E4_1DDC_000A_EEF0()
{
	emu_movw(&emu_bx, emu_si);
	emu_cmpw(&emu_bx, 0x8);
	if ((emu_flags.cf || emu_flags.zf)) { f__10E4_1DE6_0007_A709(); return; }
	f__10E4_1ECB_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_1DE6_0007_A709()
 *
 * @name f__10E4_1DE6_0007_A709
 * @implements 10E4:1DE6:0007:A709 ()
 *
 * Called From: 10E4:1DE1:000A:EEF0
 * Called From: 10E4:1DE1:000D:1EE5
 */
void f__10E4_1DE6_0007_A709()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1EDF);
	switch (emu_ip) {
		case 0x1DED: f__10E4_1DED_000F_3628(); return;
		case 0x1DFC: f__10E4_1DFC_001B_EDE5(); return;
		case 0x1E17: f__10E4_1E17_0036_E1A9(); return;
		case 0x1E4D: f__10E4_1E4D_0070_0410(); return;
		case 0x1ECB: f__10E4_1ECB_0002_C03A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1DE8; emu_last_length = 0x0007; emu_last_crc = 0xA709;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1DED_000F_3628()
 *
 * @name f__10E4_1DED_000F_3628
 * @implements 10E4:1DED:000F:3628 ()
 *
 * Called From: 10E4:1DE8:0007:A709
 */
void f__10E4_1DED_000F_3628()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3762), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3756), 0xFFFF);
	f__10E4_1ECD_000C_758B(); return;
}

/**
 * Decompiled function f__10E4_1DFC_001B_EDE5()
 *
 * @name f__10E4_1DFC_001B_EDE5
 * @implements 10E4:1DFC:001B:EDE5 ()
 *
 * Called From: 10E4:1DE8:0007:A709
 */
void f__10E4_1DFC_001B_EDE5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3756), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3762), 0xFFFF);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__10E4_1E14_0003_9D0D(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3752));
	if (!emu_flags.zf) { f__10E4_1E14_0003_9D0D(); return; }
	emu_xorw(&emu_si, emu_si);
	f__10E4_1ECD_000C_758B(); return;
}

/**
 * Decompiled function f__10E4_1E14_0003_9D0D()
 *
 * @name f__10E4_1E14_0003_9D0D
 * @implements 10E4:1E14:0003:9D0D ()
 *
 * Called From: 10E4:1E0A:001B:EDE5
 * Called From: 10E4:1E10:001B:EDE5
 */
void f__10E4_1E14_0003_9D0D()
{
	f__10E4_1ECD_000C_758B(); return;
}

/**
 * Decompiled function f__10E4_1E17_0036_E1A9()
 *
 * @name f__10E4_1E17_0036_E1A9
 * @implements 10E4:1E17:0036:E1A9 ()
 *
 * Called From: 10E4:1DE8:0007:A709
 */
void f__10E4_1E17_0036_E1A9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3754), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3756), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3760), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3762), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x376A), emu_ax);
	f__10E4_1ECD_000C_758B(); return;
}

/**
 * Decompiled function f__10E4_1E4D_0070_0410()
 *
 * @name f__10E4_1E4D_0070_0410
 * @implements 10E4:1E4D:0070:0410 ()
 *
 * Called From: 10E4:1DE8:0007:A709
 */
void f__10E4_1E4D_0070_0410()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3754), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3756), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4C));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x375A), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3758), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3764), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3766), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x375E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x375C), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x376A), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3762), 0xFFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1EBD); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__10E4_1EBD_000E_C528();
}

/**
 * Decompiled function f__10E4_1EBD_000E_C528()
 *
 * @name f__10E4_1EBD_000E_C528
 * @implements 10E4:1EBD:000E:C528 ()
 *
 * Called From: 10E4:1EBD:0070:0410
 */
void f__10E4_1EBD_000E_C528()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3768), emu_ax);
	f__10E4_1ECD_000C_758B(); return;
}

/**
 * Decompiled function f__10E4_1ECB_0002_C03A()
 *
 * @name f__10E4_1ECB_0002_C03A
 * @implements 10E4:1ECB:0002:C03A ()
 *
 * Called From: 10E4:1DE3:000A:EEF0
 * Called From: 10E4:1DE8:0007:A709
 */
void f__10E4_1ECB_0002_C03A()
{
	f__10E4_1ECD_000C_758B(); return;
}

/**
 * Decompiled function f__10E4_1ECD_000C_758B()
 *
 * @name f__10E4_1ECD_000C_758B
 * @implements 10E4:1ECD:000C:758B ()
 *
 * Called From: 10E4:1DF9:000F:3628
 * Called From: 10E4:1E14:0003:9D0D
 * Called From: 10E4:1E14:001B:EDE5
 * Called From: 10E4:1E4A:0036:E1A9
 * Called From: 10E4:1EC9:000E:C528
 * Called From: 10E4:1ECB:0002:C03A
 */
void f__10E4_1ECD_000C_758B()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_1ED5_0004_68F2(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3752), emu_si);
	emu_movw(&emu_ax, emu_si);
	f__10E4_1ED9_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_1ED5_0004_68F2()
 *
 * @name f__10E4_1ED5_0004_68F2
 * @implements 10E4:1ED5:0004:68F2 ()
 *
 * Called From: 10E4:1ECF:000C:758B
 */
void f__10E4_1ED5_0004_68F2()
{
	emu_movw(&emu_ax, emu_si);
	f__10E4_1ED9_0006_F7CE(); return;
}

/**
 * Decompiled function f__10E4_1ED9_0006_F7CE()
 *
 * @name f__10E4_1ED9_0006_F7CE
 * @implements 10E4:1ED9:0006:F7CE ()
 *
 * Called From: 10E4:1ED7:000C:758B
 * Called From: 10E4:1ED7:0004:68F2
 */
void f__10E4_1ED9_0006_F7CE()
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
 * Decompiled function f__10E4_1EF1_0040_01F8()
 *
 * @name f__10E4_1EF1_0040_01F8
 * @implements 10E4:1EF1:0040:01F8 ()
 *
 * Called From: 07D4:1414:0020:16B6
 * Called From: 0AEC:0B6C:0008:0683
 * Called From: 0AEC:0BC4:0008:0683
 * Called From: 0AEC:0F47:0008:0683
 * Called From: 10E4:02C8:001F:7C5E
 * Called From: 10E4:0AFC:0024:6EB3
 * Called From: 10E4:0B20:0024:BCC5
 * Called From: 10E4:130A:0026:B9F7
 * Called From: 10E4:141D:0008:A511
 * Called From: 10E4:147A:0008:E538
 * Called From: 10E4:1988:0008:62BC
 * Called From: 10E4:19AF:0027:D2E5
 * Called From: 10E4:19E5:001C:D312
 * Called From: 10E4:19E5:001F:A367
 * Called From: 10E4:1B2C:0008:6195
 * Called From: B495:0A83:0008:0683
 * Called From: B495:0AB5:0008:0683
 * Called From: B495:0ADE:0008:0683
 * Called From: B495:0C59:0008:0683
 * Called From: B495:0C9E:0008:0683
 * Called From: B4B8:1EDF:0021:AF2E
 * Called From: B4B8:1EDF:002C:6A88
 * Called From: B4B8:200D:0021:2797
 * Called From: B4B8:200D:002F:4EAF
 * Called From: B4B8:202B:001E:B87D
 * Called From: B4DA:0B60:001D:08D6
 * Called From: B4DA:0B9D:0021:F1D5
 * Called From: B4DA:0DFF:001F:7077
 * Called From: B4DA:14AD:0020:5F51
 * Called From: B4DA:180D:0021:AF3F
 * Called From: B4DA:1A45:0022:8A60
 * Called From: B4E0:08B0:0008:0683
 * Called From: B4E0:08CE:001E:B55D
 * Called From: B4E6:0099:0019:6335
 * Called From: B4E6:00BF:001A:756B
 * Called From: B4E6:01DC:0028:FBE4
 * Called From: B4E6:01DC:002B:FAB3
 * Called From: B4E6:0455:003A:EC1D
 * Called From: B4E6:049F:0039:9AB5
 * Called From: B4ED:01AC:001D:5E25
 * Called From: B4ED:01CA:001E:B19D
 * Called From: B4ED:0A33:001B:9BB7
 * Called From: B4ED:0A53:0020:556A
 * Called From: B4ED:0C73:001B:FAE7
 * Called From: B4ED:0C73:0025:0CBC
 * Called From: B4ED:0C9E:002B:3DD8
 * Called From: B4F2:0120:001C:9EE7
 * Called From: B4F2:0771:001D:11B0
 * Called From: B4F2:08FA:0008:0683
 * Called From: B4F2:093C:0008:0683
 * Called From: B4F2:0B9D:0008:0683
 * Called From: B4F2:109A:0008:0683
 * Called From: B503:0F92:0021:0C50
 * Called From: B518:0163:0008:0683
 * Called From: B518:0194:0008:0683
 * Called From: B518:03C2:0023:39C3
 * Called From: B518:04A3:0023:3903
 * Called From: B518:0717:004F:2992
 * Called From: B518:0D23:0008:0683
 * Called From: B518:0D43:0020:B1AE
 * Called From: B518:0D6A:0008:0683
 * Called From: B518:0D94:0008:0683
 * Called From: B518:0E4B:0023:FBEC
 * Called From: B518:0EA5:001E:2374
 * Called From: B518:0EE9:0008:0683
 * Called From: B518:1212:001E:B9DD
 * Called From: B518:1292:0008:0683
 * Called From: B518:12B5:0008:0683
 * Called From: B518:12D8:0008:0683
 * Called From: B518:140D:001A:FDC5
 * Called From: B518:142B:001B:BDA4
 * Called From: B518:142B:001E:9F4E
 * Called From: B518:144E:0023:AF14
 * Called From: B518:1471:0023:6C14
 * Called From: B527:00CA:001D:E367
 * Called From: B527:0254:0023:ABEA
 */
void f__10E4_1EF1_0040_01F8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax, 0xF);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x376C));
	if (emu_flags.zf) { f__10E4_1F0E_0023_AD41(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__10E4_1F16_001B_1F78(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10E4_1F5C_0023_6CB8(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F1));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x99EF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1F31; emu_last_cs = 0x10E4; emu_last_ip = 0x1F28; emu_last_length = 0x0040; emu_last_crc = 0x01F8; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1F40; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2D; emu_last_length = 0x0040; emu_last_crc = 0x01F8; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x0040; emu_last_crc = 0x01F8; emu_call();
}

/**
 * Decompiled function f__10E4_1F0E_0023_AD41()
 *
 * @name f__10E4_1F0E_0023_AD41
 * @implements 10E4:1F0E:0023:AD41 ()
 *
 * Called From: 10E4:1F08:0040:01F8
 */
void f__10E4_1F0E_0023_AD41()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__10E4_1F5C_0023_6CB8(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F1));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x99EF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__10E4_1F31_000F_962F(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__10E4_1F40_0009_2E6F(); return; }
	/* Unresolved jump */ emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x0023; emu_last_crc = 0xAD41; emu_call();
}

/**
 * Decompiled function f__10E4_1F16_001B_1F78()
 *
 * @name f__10E4_1F16_001B_1F78
 * @implements 10E4:1F16:001B:1F78 ()
 *
 * Called From: 10E4:1F0C:0040:01F8
 */
void f__10E4_1F16_001B_1F78()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F1));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x99EF));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__10E4_1F31_000F_962F(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__10E4_1F40_0009_2E6F(); return; }
	/* Unresolved jump */ emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x001B; emu_last_crc = 0x1F78; emu_call();
}

/**
 * Decompiled function f__10E4_1F31_000F_962F()
 *
 * @name f__10E4_1F31_000F_962F
 * @implements 10E4:1F31:000F:962F ()
 *
 * Called From: 10E4:1F28:001B:1F78
 * Called From: 10E4:1F28:0023:AD41
 */
void f__10E4_1F31_000F_962F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A2E));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A2C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	f__10E4_1F4B_000B_7DDF(); return;
}

/**
 * Decompiled function f__10E4_1F38_0008_C738()
 *
 * @name f__10E4_1F38_0008_C738
 * @implements 10E4:1F38:0008:C738 ()
 *
 * Called From: 10E4:1F47:0009:2E6F
 */
void f__10E4_1F38_0008_C738()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	f__10E4_1F4B_000B_7DDF(); return;
}

/**
 * Decompiled function f__10E4_1F40_0009_2E6F()
 *
 * @name f__10E4_1F40_0009_2E6F
 * @implements 10E4:1F40:0009:2E6F ()
 *
 * Called From: 10E4:1F2D:001B:1F78
 * Called From: 10E4:1F2D:0023:AD41
 */
void f__10E4_1F40_0009_2E6F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A32));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A30));
	f__10E4_1F38_0008_C738(); return;
}

/**
 * Decompiled function f__10E4_1F4B_000B_7DDF()
 *
 * @name f__10E4_1F4B_000B_7DDF
 * @implements 10E4:1F4B:000B:7DDF ()
 *
 * Called From: 10E4:1F3E:000F:962F
 * Called From: 10E4:1F3E:0008:C738
 */
void f__10E4_1F4B_000B_7DDF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1F56); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	f__10E4_1F56_0029_3FE5();
}

/**
 * Decompiled function f__10E4_1F56_0029_3FE5()
 *
 * @name f__10E4_1F56_0029_3FE5
 * @implements 10E4:1F56:0029:3FE5 ()
 *
 * Called From: 10E4:1F56:000B:7DDF
 */
void f__10E4_1F56_0029_3FE5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x376C), emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax, 0xF0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376E));
	if (emu_flags.zf) { f__10E4_1F74_000B_B4BD(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__10E4_1F7F_0011_E0DB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_1F7F_0011_E0DB(); return; }
	/* Unresolved jump */ emu_ip = 0x200E; emu_last_cs = 0x10E4; emu_last_ip = 0x1F7C; emu_last_length = 0x0029; emu_last_crc = 0x3FE5; emu_call();
}

/**
 * Decompiled function f__10E4_1F5C_0023_6CB8()
 *
 * @name f__10E4_1F5C_0023_6CB8
 * @implements 10E4:1F5C:0023:6CB8 ()
 *
 * Called From: 10E4:1F14:0040:01F8
 * Called From: 10E4:1F14:0023:AD41
 */
void f__10E4_1F5C_0023_6CB8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax, 0xF0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376E));
	if (emu_flags.zf) { f__10E4_1F74_000B_B4BD(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__10E4_1F7F_0011_E0DB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1F7F; emu_last_cs = 0x10E4; emu_last_ip = 0x1F7A; emu_last_length = 0x0023; emu_last_crc = 0x6CB8; emu_call(); return; }
	f__10E4_200E_0027_C344(); return;
}

/**
 * Decompiled function f__10E4_1F74_000B_B4BD()
 *
 * @name f__10E4_1F74_000B_B4BD
 * @implements 10E4:1F74:000B:B4BD ()
 *
 * Called From: 10E4:1F6C:0029:3FE5
 * Called From: 10E4:1F6C:0023:6CB8
 */
void f__10E4_1F74_000B_B4BD()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_1F7F_0011_E0DB(); return; }
	f__10E4_200E_0027_C344(); return;
}

/**
 * Decompiled function f__10E4_1F7F_0011_E0DB()
 *
 * @name f__10E4_1F7F_0011_E0DB
 * @implements 10E4:1F7F:0011:E0DB ()
 *
 * Called From: 10E4:1F72:0029:3FE5
 * Called From: 10E4:1F72:0023:6CB8
 * Called From: 10E4:1F7A:0029:3FE5
 * Called From: 10E4:1F7A:000B:B4BD
 */
void f__10E4_1F7F_0011_E0DB()
{
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8ADE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F90); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__10E4_1F90_0023_D333();
}

/**
 * Decompiled function f__10E4_1F90_0023_D333()
 *
 * @name f__10E4_1F90_0023_D333
 * @implements 10E4:1F90:0023:D333 ()
 *
 * Called From: 10E4:1F90:0011:E0DB
 */
void f__10E4_1F90_0023_D333()
{
	emu_addw(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE2), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_cx, 0x4);
	emu_movw(&emu_bx, 0x2089);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { f__10E4_1FB3_0004_3BFB(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__10E4_1FA4_000F_716F(); return; }
	/* Unresolved jump */ emu_ip = 0x1FEE; emu_last_cs = 0x10E4; emu_last_ip = 0x1FB1; emu_last_length = 0x0023; emu_last_crc = 0xD333; emu_call();
}

/**
 * Decompiled function f__10E4_1FA4_000F_716F()
 *
 * @name f__10E4_1FA4_000F_716F
 * @implements 10E4:1FA4:000F:716F ()
 *
 * Called From: 10E4:1FAF:0023:D333
 * Called From: 10E4:1FAF:000F:716F
 */
void f__10E4_1FA4_000F_716F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { f__10E4_1FB3_0004_3BFB(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__10E4_1FA4_000F_716F(); return; }
	f__10E4_1FEE_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_1FB3_0004_3BFB()
 *
 * @name f__10E4_1FB3_0004_3BFB
 * @implements 10E4:1FB3:0004:3BFB ()
 *
 * Called From: 10E4:1FAA:000F:716F
 * Called From: 10E4:1FAA:0023:D333
 */
void f__10E4_1FB3_0004_3BFB()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x8);
	switch (emu_ip) {
		case 0x1FB7: f__10E4_1FB7_0012_FD12(); return;
		case 0x1FC9: f__10E4_1FC9_000C_8E13(); return;
		case 0x1FDC: f__10E4_1FDC_0012_FFA4(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1FB3; emu_last_length = 0x0004; emu_last_crc = 0x3BFB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__10E4_1FB7_0012_FD12()
 *
 * @name f__10E4_1FB7_0012_FD12
 * @implements 10E4:1FB7:0012:FD12 ()
 *
 * Called From: 10E4:1FB3:0004:3BFB
 */
void f__10E4_1FB7_0012_FD12()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE0), 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE1), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C6C), 0xFFFE);
	f__10E4_1FF0_0016_34AE(); return;
}

/**
 * Decompiled function f__10E4_1FC9_000C_8E13()
 *
 * @name f__10E4_1FC9_000C_8E13
 * @implements 10E4:1FC9:000C:8E13 ()
 *
 * Called From: 10E4:1FB3:0004:3BFB
 */
void f__10E4_1FC9_000C_8E13()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE0), 0xC);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE1), 0x0);
	f__10E4_1FE6_0008_5AB8(); return;
}

/**
 * Decompiled function f__10E4_1FDC_0012_FFA4()
 *
 * @name f__10E4_1FDC_0012_FFA4
 * @implements 10E4:1FDC:0012:FFA4 ()
 *
 * Called From: 10E4:1FB3:0004:3BFB
 */
void f__10E4_1FDC_0012_FFA4()
{
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE0), 0xC);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8AE1), 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C6C), 0xFFFF);
	f__10E4_1FF0_0016_34AE(); return;
}

/**
 * Decompiled function f__10E4_1FE6_0008_5AB8()
 *
 * @name f__10E4_1FE6_0008_5AB8
 * @implements 10E4:1FE6:0008:5AB8 ()
 *
 * Called From: 10E4:1FD3:000C:8E13
 */
void f__10E4_1FE6_0008_5AB8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6C6C), 0xFFFF);
	f__10E4_1FF0_0016_34AE(); return;
}

/**
 * Decompiled function f__10E4_1FEE_0002_C03A()
 *
 * @name f__10E4_1FEE_0002_C03A
 * @implements 10E4:1FEE:0002:C03A ()
 *
 * Called From: 10E4:1FB1:000F:716F
 */
void f__10E4_1FEE_0002_C03A()
{
	f__10E4_1FF0_0016_34AE(); return;
}

/**
 * Decompiled function f__10E4_1FF0_0016_34AE()
 *
 * @name f__10E4_1FF0_0016_34AE
 * @implements 10E4:1FF0:0016:34AE ()
 *
 * Called From: 10E4:1FC7:0012:FD12
 * Called From: 10E4:1FEC:0008:5AB8
 * Called From: 10E4:1FEC:0012:FFA4
 * Called From: 10E4:1FEE:0002:C03A
 */
void f__10E4_1FF0_0016_34AE()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8ADE), emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x8ADF), emu_al);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8ADE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2006); emu_cs = 0x259E; f__259E_0021_001A_E253();
	f__10E4_2006_002F_F3AC();
}

/**
 * Decompiled function f__10E4_2006_002F_F3AC()
 *
 * @name f__10E4_2006_002F_F3AC
 * @implements 10E4:2006:002F:F3AC ()
 *
 * Called From: 10E4:2006:0016:34AE
 */
void f__10E4_2006_002F_F3AC()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x376E), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__10E4_2083_0006_F7CE(); return; }
	emu_movw(&emu_ax, emu_bp + 0x14);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8AEE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
	f__10E4_2035_0015_02D9();
}

/**
 * Decompiled function f__10E4_200E_0027_C344()
 *
 * @name f__10E4_200E_0027_C344
 * @implements 10E4:200E:0027:C344 ()
 *
 * Called From: 10E4:1F7C:0023:6CB8
 * Called From: 10E4:1F7C:000B:B4BD
 */
void f__10E4_200E_0027_C344()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2083; emu_last_cs = 0x10E4; emu_last_ip = 0x2014; emu_last_length = 0x0027; emu_last_crc = 0xC344; emu_call(); return; }
	emu_movw(&emu_ax, emu_bp + 0x14);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8AEE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
	f__10E4_2035_0015_02D9();
}

/**
 * Decompiled function f__10E4_2035_0015_02D9()
 *
 * @name f__10E4_2035_0015_02D9
 * @implements 10E4:2035:0015:02D9 ()
 *
 * Called From: 10E4:2035:0027:C344
 * Called From: 10E4:2035:002F:F3AC
 */
void f__10E4_2035_0015_02D9()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_andw(&emu_ax, 0xF00);
	emu_cmpw(&emu_ax, 0x100);
	if (emu_flags.zf) { f__10E4_204A_000A_AE92(); return; }
	emu_cmpw(&emu_ax, 0x200);
	if (emu_flags.zf) { f__10E4_205C_000A_AE92(); return; }
	f__10E4_206A_0002_C03A(); return;
}

/**
 * Decompiled function f__10E4_204A_000A_AE92()
 *
 * @name f__10E4_204A_000A_AE92
 * @implements 10E4:204A:000A:AE92 ()
 *
 * Called From: 10E4:2041:0015:02D9
 */
void f__10E4_204A_000A_AE92()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8AEE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2054); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	f__10E4_2054_0008_7CC9();
}

/**
 * Decompiled function f__10E4_2054_0008_7CC9()
 *
 * @name f__10E4_2054_0008_7CC9
 * @implements 10E4:2054:0008:7CC9 ()
 *
 * Called From: 10E4:2054:000A:AE92
 */
void f__10E4_2054_0008_7CC9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shrw(&emu_ax, 0x1);
	emu_subw(&emu_si, emu_ax);
	f__10E4_206C_0014_77A1(); return;
}

/**
 * Decompiled function f__10E4_2058_0004_6638()
 *
 * @name f__10E4_2058_0004_6638
 * @implements 10E4:2058:0004:6638 ()
 *
 * Called From: 10E4:2068:0004:2C1F
 */
void f__10E4_2058_0004_6638()
{
	emu_subw(&emu_si, emu_ax);
	f__10E4_206C_0014_77A1(); return;
}

/**
 * Decompiled function f__10E4_205C_000A_AE92()
 *
 * @name f__10E4_205C_000A_AE92
 * @implements 10E4:205C:000A:AE92 ()
 *
 * Called From: 10E4:2046:0015:02D9
 */
void f__10E4_205C_000A_AE92()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8AEE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2066); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	f__10E4_2066_0004_2C1F();
}

/**
 * Decompiled function f__10E4_2066_0004_2C1F()
 *
 * @name f__10E4_2066_0004_2C1F
 * @implements 10E4:2066:0004:2C1F ()
 *
 * Called From: 10E4:2066:000A:AE92
 */
void f__10E4_2066_0004_2C1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__10E4_2058_0004_6638(); return;
}

/**
 * Decompiled function f__10E4_206A_0002_C03A()
 *
 * @name f__10E4_206A_0002_C03A
 * @implements 10E4:206A:0002:C03A ()
 *
 * Called From: 10E4:2048:0015:02D9
 */
void f__10E4_206A_0002_C03A()
{
	f__10E4_206C_0014_77A1(); return;
}

/**
 * Decompiled function f__10E4_206C_0014_77A1()
 *
 * @name f__10E4_206C_0014_77A1
 * @implements 10E4:206C:0014:77A1 ()
 *
 * Called From: 10E4:205A:0008:7CC9
 * Called From: 10E4:205A:0004:6638
 * Called From: 10E4:206A:0002:C03A
 */
void f__10E4_206C_0014_77A1()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8AEE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	f__10E4_2080_0009_B397();
}

/**
 * Decompiled function f__10E4_2080_0009_B397()
 *
 * @name f__10E4_2080_0009_B397
 * @implements 10E4:2080:0009:B397 ()
 *
 * Called From: 10E4:2080:0014:77A1
 */
void f__10E4_2080_0009_B397()
{
	emu_addw(&emu_sp, 0xC);
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
 * Decompiled function f__10E4_2083_0006_F7CE()
 *
 * @name f__10E4_2083_0006_F7CE
 * @implements 10E4:2083:0006:F7CE ()
 *
 * Called From: 10E4:2014:002F:F3AC
 */
void f__10E4_2083_0006_F7CE()
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
 * Decompiled function f__10E4_2099_0012_A216()
 *
 * @name f__10E4_2099_0012_A216
 * @implements 10E4:2099:0012:A216 ()
 *
 * Called From: B4E9:0170:0040:197F
 * Called From: B4E9:03FC:000E:D57A
 * Called From: B4F2:0311:0008:EA61
 */
void f__10E4_2099_0012_A216()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__10E4_20AB_0009_542B(); return; }
	emu_push(emu_si);
	/* Unresolved jump */ emu_ip = 0x20AF; emu_last_cs = 0x10E4; emu_last_ip = 0x20A9; emu_last_length = 0x0012; emu_last_crc = 0xA216; emu_call();
}

/**
 * Decompiled function f__10E4_20AB_0009_542B()
 *
 * @name f__10E4_20AB_0009_542B
 * @implements 10E4:20AB:0009:542B ()
 *
 * Called From: 10E4:20A6:0012:A216
 */
void f__10E4_20AB_0009_542B()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20B4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_20B4_0025_D60D();
}

/**
 * Decompiled function f__10E4_20B4_0025_D60D()
 *
 * @name f__10E4_20B4_0025_D60D
 * @implements 10E4:20B4:0025:D60D ()
 *
 * Called From: 10E4:20B4:0009:542B
 */
void f__10E4_20B4_0025_D60D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A12), 0x1);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3777);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20D9); emu_cs = 0x34CA; ovl__34CA(0);
	f__10E4_20D9_0022_8F4B();
}

/**
 * Decompiled function f__10E4_20D9_0022_8F4B()
 *
 * @name f__10E4_20D9_0022_8F4B
 * @implements 10E4:20D9:0022:8F4B ()
 *
 * Called From: 10E4:20D9:0025:D60D
 */
void f__10E4_20D9_0022_8F4B()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x140);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20FB); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	f__10E4_20FB_0028_4959();
}

/**
 * Decompiled function f__10E4_20FB_0028_4959()
 *
 * @name f__10E4_20FB_0028_4959
 * @implements 10E4:20FB:0028:4959 ()
 *
 * Called From: 10E4:20FB:0022:8F4B
 */
void f__10E4_20FB_0028_4959()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC0);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46E));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46C));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2123); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__10E4_2123_0012_8D21();
}

/**
 * Decompiled function f__10E4_2123_0012_8D21()
 *
 * @name f__10E4_2123_0012_8D21
 * @implements 10E4:2123:0012:8D21 ()
 *
 * Called From: 10E4:2123:0028:4959
 */
void f__10E4_2123_0012_8D21()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C4), 0x1);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x2135); emu_cs = 0x07D4; f__07D4_159A_001D_F971();
	f__10E4_2135_000A_1679();
}

/**
 * Decompiled function f__10E4_2135_000A_1679()
 *
 * @name f__10E4_2135_000A_1679
 * @implements 10E4:2135:000A:1679 ()
 *
 * Called From: 10E4:2135:0012:8D21
 */
void f__10E4_2135_000A_1679()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x213F); emu_cs = 0x07D4; f__07D4_0000_0027_FA61();
	f__10E4_213F_0009_311A();
}

/**
 * Decompiled function f__10E4_213F_0009_311A()
 *
 * @name f__10E4_213F_0009_311A
 * @implements 10E4:213F:0009:311A ()
 *
 * Called From: 10E4:213F:000A:1679
 */
void f__10E4_213F_0009_311A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2148); f__10E4_0F1A_0088_7622();
	f__10E4_2148_0012_81F6();
}

/**
 * Decompiled function f__10E4_2148_0012_81F6()
 *
 * @name f__10E4_2148_0012_81F6
 * @implements 10E4:2148:0012:81F6 ()
 *
 * Called From: 10E4:2148:0009:311A
 */
void f__10E4_2148_0012_81F6()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x215A); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_215A_000A_F8FD();
}

/**
 * Decompiled function f__10E4_215A_000A_F8FD()
 *
 * @name f__10E4_215A_000A_F8FD
 * @implements 10E4:215A:000A:F8FD ()
 *
 * Called From: 10E4:215A:0012:81F6
 */
void f__10E4_215A_000A_F8FD()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2164); emu_cs = 0x34A2; ovl__34A2(0);
	f__10E4_2164_0013_8AD5();
}

/**
 * Decompiled function f__10E4_2164_0013_8AD5()
 *
 * @name f__10E4_2164_0013_8AD5
 * @implements 10E4:2164:0013:8AD5 ()
 *
 * Called From: 10E4:2164:000A:F8FD
 */
void f__10E4_2164_0013_8AD5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x2177); emu_cs = 0x348B; ovl__348B(3);
	f__10E4_2177_000A_F8FD();
}

/**
 * Decompiled function f__10E4_2177_000A_F8FD()
 *
 * @name f__10E4_2177_000A_F8FD
 * @implements 10E4:2177:000A:F8FD ()
 *
 * Called From: 10E4:2177:0013:8AD5
 */
void f__10E4_2177_000A_F8FD()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2181); emu_cs = 0x34A2; ovl__34A2(0);
	f__10E4_2181_0015_A299();
}

/**
 * Decompiled function f__10E4_2181_0015_A299()
 *
 * @name f__10E4_2181_0015_A299
 * @implements 10E4:2181:0015:A299 ()
 *
 * Called From: 10E4:2181:000A:F8FD
 */
void f__10E4_2181_0015_A299()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2196); emu_cs = 0x1082; emu_Building_FindFirst();
	f__10E4_2196_0005_882E();
}

/**
 * Decompiled function f__10E4_2196_0005_882E()
 *
 * @name f__10E4_2196_0005_882E
 * @implements 10E4:2196:0005:882E ()
 *
 * Called From: 10E4:2196:0015:A299
 */
void f__10E4_2196_0005_882E()
{
	emu_addw(&emu_sp, 0x8);
	f__10E4_21B5_0021_C330(); return;
}

/**
 * Decompiled function f__10E4_219B_000B_C1F1()
 *
 * @name f__10E4_219B_000B_C1F1
 * @implements 10E4:219B:000B:C1F1 ()
 *
 * Called From: 10E4:21C1:0021:C330
 * Called From: 10E4:21C1:0023:8806
 */
void f__10E4_219B_000B_C1F1()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x21A6); emu_cs = 0x0C3A; f__0C3A_092A_0013_A4A8();
	f__10E4_21A6_000D_DBFF();
}

/**
 * Decompiled function f__10E4_21A6_000D_DBFF()
 *
 * @name f__10E4_21A6_000D_DBFF
 * @implements 10E4:21A6:000D:DBFF ()
 *
 * Called From: 10E4:21A6:000B:C1F1
 */
void f__10E4_21A6_000D_DBFF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x1082; emu_Building_FindNext();
	f__10E4_21B3_0023_8806();
}

/**
 * Decompiled function f__10E4_21B3_0023_8806()
 *
 * @name f__10E4_21B3_0023_8806
 * @implements 10E4:21B3:0023:8806 ()
 *
 * Called From: 10E4:21B3:000D:DBFF
 */
void f__10E4_21B3_0023_8806()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__10E4_219B_000B_C1F1(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__10E4_21D6_0005_8AAE();
}

/**
 * Decompiled function f__10E4_21B5_0021_C330()
 *
 * @name f__10E4_21B5_0021_C330
 * @implements 10E4:21B5:0021:C330 ()
 *
 * Called From: 10E4:2199:0005:882E
 */
void f__10E4_21B5_0021_C330()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__10E4_219B_000B_C1F1(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x0FE4; emu_ip = 0x0243; emu_last_cs = 0x10E4; emu_last_ip = 0x21D1; emu_last_length = 0x0021; emu_last_crc = 0xC330; emu_call();
	f__10E4_21D6_0005_8AAE();
}

/**
 * Decompiled function f__10E4_21D6_0005_8AAE()
 *
 * @name f__10E4_21D6_0005_8AAE
 * @implements 10E4:21D6:0005:8AAE ()
 *
 * Called From: 10E4:21D6:0023:8806
 */
void f__10E4_21D6_0005_8AAE()
{
	emu_addw(&emu_sp, 0x8);
	f__10E4_21FA_001A_A351(); return;
}

/**
 * Decompiled function f__10E4_21DB_000F_0096()
 *
 * @name f__10E4_21DB_000F_0096
 * @implements 10E4:21DB:000F:0096 ()
 *
 * Called From: 10E4:2206:001A:A351
 * Called From: 10E4:2206:001C:86CA
 */
void f__10E4_21DB_000F_0096()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x21EA); emu_cs = 0x34CD; ovl__34CD(22);
	f__10E4_21EA_000E_5BF5();
}

/**
 * Decompiled function f__10E4_21EA_000E_5BF5()
 *
 * @name f__10E4_21EA_000E_5BF5
 * @implements 10E4:21EA:000E:5BF5 ()
 *
 * Called From: 10E4:21EA:000F:0096
 */
void f__10E4_21EA_000E_5BF5()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21F8); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__10E4_21F8_001C_86CA();
}

/**
 * Decompiled function f__10E4_21F8_001C_86CA()
 *
 * @name f__10E4_21F8_001C_86CA
 * @implements 10E4:21F8:001C:86CA ()
 *
 * Called From: 10E4:21F8:000E:5BF5
 */
void f__10E4_21F8_001C_86CA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__10E4_21DB_000F_0096(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2270; emu_last_cs = 0x10E4; emu_last_ip = 0x220A; emu_last_length = 0x001C; emu_last_crc = 0x86CA; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2214); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_2214_0006_0569();
}

/**
 * Decompiled function f__10E4_21FA_001A_A351()
 *
 * @name f__10E4_21FA_001A_A351
 * @implements 10E4:21FA:001A:A351 ()
 *
 * Called From: 10E4:21D9:0005:8AAE
 */
void f__10E4_21FA_001A_A351()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__10E4_21DB_000F_0096(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2270; emu_last_cs = 0x10E4; emu_last_ip = 0x220A; emu_last_length = 0x001A; emu_last_crc = 0xA351; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2214); emu_cs = 0x2598; emu_ip = 0x0000; emu_last_cs = 0x10E4; emu_last_ip = 0x220F; emu_last_length = 0x001A; emu_last_crc = 0xA351; emu_call();
	f__10E4_2214_0006_0569();
}

/**
 * Decompiled function f__10E4_2214_0006_0569()
 *
 * @name f__10E4_2214_0006_0569
 * @implements 10E4:2214:0006:0569 ()
 *
 * Called From: 10E4:2214:001C:86CA
 */
void f__10E4_2214_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x221A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__10E4_221A_0020_001D();
}

/**
 * Decompiled function f__10E4_221A_0020_001D()
 *
 * @name f__10E4_221A_0020_001D
 * @implements 10E4:221A:0020:001D ()
 *
 * Called From: 10E4:221A:0006:0569
 */
void f__10E4_221A_0020_001D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x223A); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__10E4_223A_000F_6F2A();
}

/**
 * Decompiled function f__10E4_223A_000F_6F2A()
 *
 * @name f__10E4_223A_000F_6F2A
 * @implements 10E4:223A:000F:6F2A ()
 *
 * Called From: 10E4:223A:0020:001D
 */
void f__10E4_223A_000F_6F2A()
{
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	if (!emu_flags.zf) { f__10E4_2249_000C_BA1C(); return; }
	emu_movw(&emu_ax, 0x2);
	f__10E4_224C_0009_919C(); return;
}

/**
 * Decompiled function f__10E4_2249_000C_BA1C()
 *
 * @name f__10E4_2249_000C_BA1C
 * @implements 10E4:2249:000C:BA1C ()
 *
 * Called From: 10E4:2242:000F:6F2A
 */
void f__10E4_2249_000C_BA1C()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2255); f__10E4_0675_0026_F126();
	f__10E4_2255_0013_D274();
}

/**
 * Decompiled function f__10E4_224C_0009_919C()
 *
 * @name f__10E4_224C_0009_919C
 * @implements 10E4:224C:0009:919C ()
 *
 * Called From: 10E4:2247:000F:6F2A
 */
void f__10E4_224C_0009_919C()
{
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2255); f__10E4_0675_0026_F126();
	f__10E4_2255_0013_D274();
}

/**
 * Decompiled function f__10E4_2255_0013_D274()
 *
 * @name f__10E4_2255_0013_D274
 * @implements 10E4:2255:0013:D274 ()
 *
 * Called From: 10E4:2255:0009:919C
 * Called From: 10E4:2255:000C:BA1C
 */
void f__10E4_2255_0013_D274()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x2268); emu_cs = 0x259E; f__259E_0006_0016_858A();
	f__10E4_2268_0008_1BE5();
}

/**
 * Decompiled function f__10E4_2268_0008_1BE5()
 *
 * @name f__10E4_2268_0008_1BE5
 * @implements 10E4:2268:0008:1BE5 ()
 *
 * Called From: 10E4:2268:0013:D274
 */
void f__10E4_2268_0008_1BE5()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x2270); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__10E4_2270_0006_4A77();
}

/**
 * Decompiled function f__10E4_2270_0006_4A77()
 *
 * @name f__10E4_2270_0006_4A77
 * @implements 10E4:2270:0006:4A77 ()
 *
 * Called From: 10E4:2270:0008:1BE5
 */
void f__10E4_2270_0006_4A77()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2276); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__10E4_2276_000D_91AA();
}

/**
 * Decompiled function f__10E4_2276_000D_91AA()
 *
 * @name f__10E4_2276_000D_91AA
 * @implements 10E4:2276:000D:91AA ()
 *
 * Called From: 10E4:2276:0006:4A77
 */
void f__10E4_2276_000D_91AA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2283); f__10E4_0675_0026_F126();
	f__10E4_2283_0007_843A();
}

/**
 * Decompiled function f__10E4_2283_0007_843A()
 *
 * @name f__10E4_2283_0007_843A
 * @implements 10E4:2283:0007:843A ()
 *
 * Called From: 10E4:2283:000D:91AA
 */
void f__10E4_2283_0007_843A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x228A); emu_cs = 0x29E8; emu_Input_History_Clear();
	f__10E4_228A_0006_F7CE();
}

/**
 * Decompiled function f__10E4_228A_0006_F7CE()
 *
 * @name f__10E4_228A_0006_F7CE
 * @implements 10E4:228A:0006:F7CE ()
 *
 * Called From: 10E4:228A:0007:843A
 */
void f__10E4_228A_0006_F7CE()
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
 * Decompiled function f__10E4_2290_0012_78BD()
 *
 * @name f__10E4_2290_0012_78BD
 * @implements 10E4:2290:0012:78BD ()
 *
 * Called From: 0AEC:0841:0005:08A0
 * Called From: 10E4:1142:000E:7105
 * Called From: 10E4:1142:0005:3112
 */
void f__10E4_2290_0012_78BD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x22A2); emu_cs = 0x34CD; ovl__34CD(30);
	f__10E4_22A2_0012_31AA();
}

/**
 * Decompiled function f__10E4_22A2_0012_31AA()
 *
 * @name f__10E4_22A2_0012_31AA
 * @implements 10E4:22A2:0012:31AA ()
 *
 * Called From: 10E4:22A2:0012:78BD
 */
void f__10E4_22A2_0012_31AA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__10E4_22B4_0039_56C7(); return; }
	/* Unresolved jump */ emu_ip = 0x2351; emu_last_cs = 0x10E4; emu_last_ip = 0x22B1; emu_last_length = 0x0012; emu_last_crc = 0x31AA; emu_call();
}

/**
 * Decompiled function f__10E4_22B4_0039_56C7()
 *
 * @name f__10E4_22B4_0039_56C7
 * @implements 10E4:22B4:0039:56C7 ()
 *
 * Called From: 10E4:22AF:0012:31AA
 */
void f__10E4_22B4_0039_56C7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if (emu_flags.zf) { f__10E4_232F_0024_0C9F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if (emu_flags.zf) { f__10E4_22ED_001A_9C19(); return; }
	emu_movw(&emu_si, 0x90);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x97E5), emu_si);
	emu_movw(&emu_ax, emu_si);
	f__10E4_2353_0005_8BCF(); return;
}

/**
 * Decompiled function f__10E4_22E5_0008_4225()
 *
 * @name f__10E4_22E5_0008_4225
 * @implements 10E4:22E5:0008:4225 ()
 *
 * Called From: 10E4:2351:0002:893A
 */
void f__10E4_22E5_0008_4225()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x97E5), emu_si);
	emu_movw(&emu_ax, emu_si);
	f__10E4_2353_0005_8BCF(); return;
}

/**
 * Decompiled function f__10E4_22ED_001A_9C19()
 *
 * @name f__10E4_22ED_001A_9C19
 * @implements 10E4:22ED:001A:9C19 ()
 *
 * Called From: 10E4:22E0:0039:56C7
 */
void f__10E4_22ED_001A_9C19()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_flags.zf) { f__10E4_232A_0005_44C8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	if (emu_flags.zf) { f__10E4_2307_000F_0CC6(); return; }
	emu_movw(&emu_si, 0x28);
	f__10E4_2328_0002_C1BA(); return;
}

/**
 * Decompiled function f__10E4_2307_000F_0CC6()
 *
 * @name f__10E4_2307_000F_0CC6
 * @implements 10E4:2307:000F:0CC6 ()
 *
 * Called From: 10E4:2300:001A:9C19
 */
void f__10E4_2307_000F_0CC6()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_flags.zf) { f__10E4_2316_000F_EC6D(); return; }
	emu_movw(&emu_si, 0x2E);
	f__10E4_2328_0002_C1BA(); return;
}

/**
 * Decompiled function f__10E4_2316_000F_EC6D()
 *
 * @name f__10E4_2316_000F_EC6D
 * @implements 10E4:2316:000F:EC6D ()
 *
 * Called From: 10E4:230F:000F:0CC6
 */
void f__10E4_2316_000F_EC6D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (!emu_flags.zf) { f__10E4_2325_0005_B448(); return; }
	emu_movw(&emu_si, 0x26);
	f__10E4_2328_0002_C1BA(); return;
}

/**
 * Decompiled function f__10E4_2325_0005_B448()
 *
 * @name f__10E4_2325_0005_B448
 * @implements 10E4:2325:0005:B448 ()
 *
 * Called From: 10E4:231E:000F:EC6D
 */
void f__10E4_2325_0005_B448()
{
	emu_movw(&emu_si, 0x27);
	f__10E4_232D_0002_D13A(); return;
}

/**
 * Decompiled function f__10E4_2328_0002_C1BA()
 *
 * @name f__10E4_2328_0002_C1BA
 * @implements 10E4:2328:0002:C1BA ()
 *
 * Called From: 10E4:2305:001A:9C19
 * Called From: 10E4:2314:000F:0CC6
 * Called From: 10E4:2323:000F:EC6D
 */
void f__10E4_2328_0002_C1BA()
{
	f__10E4_232D_0002_D13A(); return;
}

/**
 * Decompiled function f__10E4_232A_0005_44C8()
 *
 * @name f__10E4_232A_0005_44C8
 * @implements 10E4:232A:0005:44C8 ()
 *
 * Called From: 10E4:22F5:001A:9C19
 */
void f__10E4_232A_0005_44C8()
{
	emu_movw(&emu_si, 0x29);
	f__10E4_2351_0002_893A(); return;
}

/**
 * Decompiled function f__10E4_232D_0002_D13A()
 *
 * @name f__10E4_232D_0002_D13A
 * @implements 10E4:232D:0002:D13A ()
 *
 * Called From: 10E4:2328:0002:C1BA
 * Called From: 10E4:2328:0005:B448
 */
void f__10E4_232D_0002_D13A()
{
	f__10E4_2351_0002_893A(); return;
}

/**
 * Decompiled function f__10E4_232F_0024_0C9F()
 *
 * @name f__10E4_232F_0024_0C9F
 * @implements 10E4:232F:0024:0C9F ()
 *
 * Called From: 10E4:22D5:0039:56C7
 */
void f__10E4_232F_0024_0C9F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { f__10E4_2351_0002_893A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x380A));
	emu_addw(&emu_ax, 0x29);
	emu_movw(&emu_si, emu_ax);
	/* Unresolved jump */ emu_ip = 0x22E5; emu_last_cs = 0x10E4; emu_last_ip = 0x2351; emu_last_length = 0x0024; emu_last_crc = 0x0C9F; emu_call();
}

/**
 * Decompiled function f__10E4_2351_0002_893A()
 *
 * @name f__10E4_2351_0002_893A
 * @implements 10E4:2351:0002:893A ()
 *
 * Called From: 10E4:232D:0005:44C8
 * Called From: 10E4:232D:0002:D13A
 * Called From: 10E4:2337:0024:0C9F
 */
void f__10E4_2351_0002_893A()
{
	f__10E4_22E5_0008_4225(); return;
}

/**
 * Decompiled function f__10E4_2353_0005_8BCF()
 *
 * @name f__10E4_2353_0005_8BCF
 * @implements 10E4:2353:0005:8BCF ()
 *
 * Called From: 10E4:22EB:0008:4225
 * Called From: 10E4:22EB:0039:56C7
 */
void f__10E4_2353_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
