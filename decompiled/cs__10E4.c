/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__10E4_0008_0048_5BD4()
 *
 * @name f__10E4_0008_0048_5BD4
 * @implements 10E4:0008:0048:5BD4 ()
 * @implements 10E4:0050:0027:1641
 * @implements 10E4:0053:0024:0714
 * @implements 10E4:0077:0027:66BA
 * @implements 10E4:009E:001D:1DE6
 * @implements 10E4:00BB:001D:C1D8
 * @implements 10E4:00D8:001B:A6F6
 * @implements 10E4:00F3:001B:D60B
 * @implements 10E4:010E:0009:B383
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
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x3604);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x10) == 0x0) goto l__0053;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__0050:
	emu_addw(&emu_sp, 0xA);
l__0053:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__0077:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__009E:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_di);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__00BB:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__00D8:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__00F3:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_di);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__010E:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:012C:0030:DB62
 * @implements 10E4:015C:0043:1BB4
 * @implements 10E4:019F:000A:1FB5
 * @implements 10E4:01A9:0005:86EE
 * @implements 10E4:01AC:0002:C23A
 * @implements 10E4:01AE:0004:9539
 * @implements 10E4:01B2:0006:F7CE
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
l__0117:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) == 0x0) goto l__012C;
	goto l__01AE;
l__012C:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__01AE;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C8) == 0x0) goto l__01AE;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) == 0x0) goto l__01AE;
	emu_ax = emu_si;
	emu_bx = 0x20;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_di = emu_ax;
	emu_ax = emu_si;
	emu_bx = 0x20;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x015C); emu_cs = 0x01F7; emu_Tools_Shld();
l__015C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37F2);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x37F0);
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) goto l__01AE;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx, 0x37F0), emu_dx);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx, 0x37F2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38C8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38C6));
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x2502; f__2502_0165_0027_41E7();
l__019F:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01A9); f__10E4_0273_0029_DCE5();
l__01A9:
	emu_addw(&emu_sp, 0x6);
l__01AC:
	goto l__01B2;
l__01AE:
	emu_xorw(&emu_ax, emu_ax);
	goto l__01AC;
l__01B2:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:01C9:0003:DD08
 * @implements 10E4:01CC:0003:DD03
 * @implements 10E4:01CF:0005:A04D
 * @implements 10E4:01D4:000F:1B45
 * @implements 10E4:01E3:002D:DDAD
 * @implements 10E4:01E6:002A:1581
 * @implements 10E4:0209:0007:D67A
 * @implements 10E4:0210:000F:1B44
 * @implements 10E4:021F:004B:AA99
 * @implements 10E4:0222:0048:802A
 * @implements 10E4:0249:0021:9EF4
 * @implements 10E4:025E:000C:5CBF
 * @implements 10E4:026A:0005:96E2
 * @implements 10E4:026F:0004:DE52
 *
 * Called From: 10E4:0301:0017:D70D
 * Called From: 10E4:0301:001A:F90C
 * Called From: B4DA:0B7C:001C:98BD
 */
void f__10E4_01B8_0014_5104()
{
l__01B8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__01CC;
	emu_xorw(&emu_ax, emu_ax);
l__01C9:
	goto l__026F;
l__01CC:
	goto l__025E;
l__01CF:
	emu_xorw(&emu_si, emu_si);
	emu_incw(&emu_di);
	goto l__01E6;
l__01D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x2521; f__2521_000F_0022_6D87();
l__01E3:
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
l__01E6:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
		emu_ax = (int8)emu_al;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0xC)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
			if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xD) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
				if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__01D4;
			}
		}
	}
l__0209:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__0249;
	goto l__0222;
l__0210:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x021F); emu_cs = 0x2521; f__2521_000F_0022_6D87();
l__021F:
	emu_pop(&emu_cx);
	emu_subw(&emu_si, emu_ax);
l__0222:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x20) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
		emu_ax = (int8)emu_al;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0xC)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
			if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xD) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
				if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0210;
			}
		}
	}
l__0249:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_ss, emu_bp,  0xC);
		emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
		emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	}
l__025E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__026A;
	goto l__01CF;
l__026A:
	emu_ax = emu_di;
	goto l__01C9;
l__026F:
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
 * @implements 10E4:029C:0008:D3E0
 * @implements 10E4:02A4:0008:64F7
 * @implements 10E4:02AC:001F:7C5E
 * @implements 10E4:02CB:000C:4D8E
 * @implements 10E4:02D7:0013:3DCE
 * @implements 10E4:02EA:001A:F90C
 * @implements 10E4:02ED:0017:D70D
 * @implements 10E4:0304:000E:92AF
 * @implements 10E4:0312:001A:FA8B
 * @implements 10E4:0315:0017:548A
 * @implements 10E4:032C:001C:5313
 * @implements 10E4:0348:0009:0D32
 * @implements 10E4:0351:0016:FC40
 * @implements 10E4:035B:000C:1AF8
 * @implements 10E4:0367:000C:050A
 * @implements 10E4:0375:002B:904E
 * @implements 10E4:03A0:0014:D9B0
 * @implements 10E4:03B4:0038:D51C
 * @implements 10E4:03EC:0020:ABCC
 * @implements 10E4:040C:0023:24DC
 * @implements 10E4:0425:000A:B32B
 * @implements 10E4:042F:002F:F19C
 * @implements 10E4:045E:0010:2CBB
 * @implements 10E4:046E:0007:E5DE
 * @implements 10E4:0475:000E:CE77
 * @implements 10E4:0483:0005:1765
 * @implements 10E4:0488:000E:9A5B
 * @implements 10E4:0496:0005:1765
 * @implements 10E4:049B:0005:B085
 * @implements 10E4:04A0:0019:D8B6
 * @implements 10E4:04B9:0006:0569
 * @implements 10E4:04BF:0023:5242
 * @implements 10E4:04E2:0023:24EB
 * @implements 10E4:04FB:000A:B32B
 * @implements 10E4:0505:002E:B2DF
 * @implements 10E4:0533:000B:D182
 * @implements 10E4:053E:0012:00C8
 * @implements 10E4:0550:0010:44E5
 * @implements 10E4:0566:0008:0199
 * @implements 10E4:056E:0006:E56C
 * @implements 10E4:0574:0005:BBE6
 * @implements 10E4:0579:0006:F7CE
 *
 * Called From: 10E4:01A6:000A:1FB5
 * Called From: 1423:0345:0008:250B
 * Called From: 1423:0480:0008:250B
 * Called From: B511:0074:000E:4438
 */
void f__10E4_0273_0029_DCE5()
{
l__0273:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_bp + 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x87D8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x029C); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
l__029C:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__02A4:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02AC); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__02AC:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x22;
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
l__02CB:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__02D7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0xFFFF) goto l__02EA;
	emu_ax = 0x7;
	goto l__02ED;
l__02EA:
	emu_ax = 0x2;
l__02ED:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_subw(&emu_dx, emu_ax);
	emu_cl = 0x3;
	emu_shlw(&emu_dx, emu_cl);
	emu_subw(&emu_dx, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x87D8;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0304); f__10E4_01B8_0014_5104();
l__0304:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0x3);
	if ((int16)emu_di <= (int16)0x3) goto l__0312;
	emu_ax = emu_di;
	goto l__0315;
l__0312:
	emu_ax = 0x3;
l__0315:
	emu_di = emu_ax;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_di);
	emu_addw(&emu_ax, 0x12);
	emu_get_memory16(emu_ds, 0x00, 0x4078) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__032C:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3600);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3602));
	if (emu_ax != 0) goto l__0375;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__0348:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
l__0351:
	emu_orw(&emu_dx, emu_dx);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0373; emu_last_cs = 0x10E4; emu_last_ip = 0x0353; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	if (emu_dx == 0) {
		emu_cmpw(&emu_ax, emu_si);
		if (emu_ax < emu_si) { /* Unresolved jump */ emu_ip = 0x0373; emu_last_cs = 0x10E4; emu_last_ip = 0x0359; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	}
l__035B:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__0367:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3602) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3600) = emu_ax;
	goto l__0375;
l__0375:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3600);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3602));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x03A3; emu_last_cs = 0x10E4; emu_last_ip = 0x037C; emu_last_length = 0x002B; emu_last_crc = 0x904E; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__03A0:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03B4); f__10E4_057F_0052_2B00();
l__03B4:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0xFFFF) goto l__040C;
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__03EC:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_subw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_subw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, 0x5);
	goto l__0425;
l__040C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_subw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_subw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_incw(&emu_ax);
l__0425:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_21FD();
l__042F:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x6D59) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x9933) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x9935) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x87D8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x045E); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
l__045E:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
l__046E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0475); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
l__0475:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x1E;
	goto l__0488;
l__0483:
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0642; f__0642_0559_0027_3560();
l__0488:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0483;
	emu_push(emu_cs); emu_push(0x0496); emu_cs = 0x29E8; emu_Input_History_Clear();
l__0496:
	emu_push(emu_cs); emu_push(0x049B); emu_cs = 0x0642; f__0642_0559_0027_3560();
l__049B:
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
l__04A0:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0x0) goto l__0496;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x800);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x4) & 0x800) != 0) goto l__0496;
	emu_ax = 0x841;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04B9); emu_cs = 0x29E8; emu_Input_HandleInput();
l__04B9:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x04BF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__04BF:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0xFFFF) goto l__04E2;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_addw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_subw(&emu_ax, 0x5);
	goto l__04FB;
l__04E2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_decw(&emu_ax);
l__04FB:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_21FD();
l__0505:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3600);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3602));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0536; emu_last_cs = 0x10E4; emu_last_ip = 0x050F; emu_last_length = 0x002E; emu_last_crc = 0xB2DF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__0533:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x053E); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__053E:
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) { /* Unresolved jump */ emu_ip = 0x0560; emu_last_cs = 0x10E4; emu_last_ip = 0x0541; emu_last_length = 0x0012; emu_last_crc = 0x00C8; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3602));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3600));
	emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__0550:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3602) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3600) = 0x0;
	goto l__0566;
l__0566:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__056E:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0574); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
l__0574:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0579;
l__0579:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:05D1:0025:BB42
 * @implements 10E4:05D3:0023:BAD6
 * @implements 10E4:05F6:001C:D5D7
 * @implements 10E4:05F9:0019:5FFF
 * @implements 10E4:0612:004E:2D73
 * @implements 10E4:0660:000F:ACB8
 * @implements 10E4:0663:000C:C9A9
 * @implements 10E4:066F:0006:F7CE
 *
 * Called From: 10E4:03B1:0014:D9B0
 * Called From: 10E4:12A0:0016:BF39
 * Called From: B4B8:2049:0012:7861
 * Called From: B4F2:0896:0012:37F8
 * Called From: B4F2:1029:0010:DC57
 */
void f__10E4_057F_0052_2B00()
{
l__057F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4064);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4066);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4068);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__05D1;
	emu_ax = 0x2;
	goto l__05D3;
l__05D1:
	emu_xorw(&emu_ax, emu_ax);
l__05D3:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) != 0x0) goto l__05F9;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
l__05F6:
	emu_addw(&emu_sp, 0x8);
l__05F9:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0612); f__10E4_0008_0048_5BD4();
l__0612:
	emu_addw(&emu_sp, 0xC);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x362C);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_si = emu_get_memory16(emu_ds, emu_bx, 0x362E);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0663;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0660); f__10E4_0008_0048_5BD4();
l__0660:
	emu_addw(&emu_sp, 0xC);
l__0663:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) == 0x0) {
		emu_push(emu_cs); emu_push(0x066F); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	}
l__066F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:0692:0009:515B
 * @implements 10E4:069B:001C:0810
 * @implements 10E4:06B7:003E:4998
 * @implements 10E4:06D8:001D:8549
 * @implements 10E4:06F5:0009:542B
 * @implements 10E4:06FE:000D:FBBC
 * @implements 10E4:070B:002B:686F
 * @implements 10E4:072B:000B:CFDE
 * @implements 10E4:0736:000E:55D3
 * @implements 10E4:0738:000C:67F9
 * @implements 10E4:0744:000A:880A
 * @implements 10E4:0746:0008:AAA9
 * @implements 10E4:074E:0021:B9CA
 * @implements 10E4:0754:001B:A694
 * @implements 10E4:0766:0009:E680
 * @implements 10E4:076F:0009:CFBF
 * @implements 10E4:0772:0006:FAE3
 * @implements 10E4:0778:0065:1C92
 * @implements 10E4:0779:0064:1E5A
 * @implements 10E4:078D:0050:5136
 * @implements 10E4:07A3:003A:3E89
 * @implements 10E4:07AF:002E:F295
 * @implements 10E4:07BB:0022:01B5
 * @implements 10E4:07DD:003A:4A32
 * @implements 10E4:07E0:0037:82D1
 * @implements 10E4:07E7:0030:A563
 * @implements 10E4:07F1:0026:6E79
 * @implements 10E4:0817:001B:C66D
 * @implements 10E4:0832:0015:9380
 * @implements 10E4:0847:0008:C601
 * @implements 10E4:084F:0020:8382
 * @implements 10E4:086F:0015:8F49
 * @implements 10E4:0879:000B:3482
 * @implements 10E4:0884:0032:0FD7
 * @implements 10E4:08B6:001D:D213
 * @implements 10E4:08D3:003F:34F2
 * @implements 10E4:08DD:0035:C61C
 * @implements 10E4:0912:0005:9D6E
 * @implements 10E4:0915:0002:D8BA
 * @implements 10E4:0917:002E:FA57
 * @implements 10E4:0945:000C:4082
 * @implements 10E4:0948:0009:CB2A
 * @implements 10E4:0949:0008:4B09
 * @implements 10E4:0951:0012:67CD
 * @implements 10E4:0963:0028:2D48
 * @implements 10E4:098B:0008:C54E
 * @implements 10E4:0993:0008:6999
 * @implements 10E4:099B:0009:08B8
 * @implements 10E4:09A4:0007:F77C
 * @implements 10E4:09A5:0006:F7CE
 *
 * Called From: 0642:03B6:000D:DD0B
 * Called From: 10E4:2252:0009:919C
 * Called From: 10E4:2252:000C:BA1C
 * Called From: 10E4:2280:000D:91AA
 * Called From: B495:0067:000C:1509
 * Called From: B495:00AC:0014:3443
 * Called From: B495:0368:0010:C27A
 * Called From: B495:0368:0045:3C88
 * Called From: B495:0794:000C:1509
 * Called From: B495:1587:000D:D634
 */
void f__10E4_0675_0026_F126()
{
l__0675:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3642);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3640);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__069B;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__069B;
	}
l__0692:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__069B;
	goto l__09A5;
l__069B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3642) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3640) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x06B7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__06B7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x2) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ds, 0x00, 0x38B6) = emu_ax;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ds, 0x00, 0x363C) = emu_ax;
	}
l__06D8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__06F5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x363C)) goto l__06F5;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x363E) != 0x0) goto l__06F5;
	goto l__09A5;
l__06F5:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__06FE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x070B); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__070B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__074E;
	emu_cl = 0x2;
	emu_sarw(&emu_si, emu_cl);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_si = 0x1;
	}
l__072B:
	emu_cmpw(&emu_si, 0x80);
	if ((int16)emu_si <= (int16)0x80) goto l__0736;
	emu_ax = 0x80;
	goto l__0738;
l__0736:
	emu_ax = emu_si;
l__0738:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFF80);
	if ((int16)emu_si >= (int16)0xFF80) goto l__0744;
	emu_ax = 0xFF80;
	goto l__0746;
l__0744:
	emu_ax = emu_si;
l__0746:
	emu_si = emu_ax;
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363E), emu_si);
	goto l__0754;
l__074E:
	emu_get_memory16(emu_ds, 0x00, 0x363E) = 0x0;
l__0754:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0779;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) <= (int16)0x7) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF9);
		if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) >= (int16)0xFFF9) goto l__0779;
	}
l__0766:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__076F;
	emu_ax = 0x34;
	goto l__0772;
l__076F:
	emu_ax = 0x35;
l__0772:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0778); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
l__0778:
	emu_pop(&emu_cx);
l__0779:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) < (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363C), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x363C) == 0x0) {
			emu_get_memory16(emu_ds, 0x00, 0x363E) = 0x0;
		}
	}
l__078D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x363E);
	emu_cl = 0x3;
	emu_sarw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) < (int16)0x0) {
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x363C));
	}
l__07A3:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) > (int16)0x0) {
		emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	}
l__07AF:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) < (int16)0x0) {
		emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	}
l__07BB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x363C);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) >= (int16)0x0) goto l__07E7;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) >= (int16)0x0) goto l__07DD;
	emu_xorw(&emu_ax, emu_ax);
	goto l__07E0;
l__07DD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
l__07E0:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x8);
l__07E7:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) > (int16)0x0) {
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	}
l__07F1:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__0817:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_get_memory16(emu_ds, 0x00, 0x38B6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ds);
	emu_ax = 0x3770;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0832); emu_cs = 0x01F7; emu_String_sprintf();
l__0832:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ds);
	emu_ax = 0x3770;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0847); emu_cs = 0x01F7; emu_String_sprintf();
l__0847:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_di, emu_di);
	goto l__0949;
l__084F:
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (emu_get_memory8(emu_ss, emu_bp, -0x1) != 0x20) goto l__086F;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0xD;
	goto l__0879;
l__086F:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFDE);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
l__0879:
	emu_al = emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC));
	if (emu_al != emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC)) goto l__0884;
	goto l__0917;
l__0884:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__08B6:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x363E) == 0x0) goto l__0915;
	emu_al = emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (emu_get_memory8(emu_ss, emu_bp, -0x1) != 0x20) goto l__08D3;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0xD;
	goto l__08DD;
l__08D3:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFDE);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
l__08DD:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_addw(&emu_ax, 0x8);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__0912:
	emu_addw(&emu_sp, 0xE);
l__0915:
	goto l__0948;
l__0917:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0945); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__0945:
	emu_addw(&emu_sp, 0xE);
l__0948:
	emu_incw(&emu_di);
l__0949:
	emu_cmpw(&emu_di, 0x6);
	if ((int16)emu_di >= (int16)0x6) goto l__0951;
	goto l__084F;
l__0951:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C91));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x6C91)) goto l__0993;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0963); emu_cs = 0x2642; f__2642_0002_005E_87F6();
l__0963:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x098B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
l__098B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0993); emu_cs = 0x2642; f__2642_0069_0008_D517();
l__0993:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs); emu_push(0x099B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__099B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A4); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__09A4:
	emu_pop(&emu_cx);
l__09A5:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:09DC:0035:DF38
 * @implements 10E4:09DF:0032:9AAC
 * @implements 10E4:0A11:001A:4693
 * @implements 10E4:0A2B:001B:C70F
 * @implements 10E4:0A3C:000A:7538
 * @implements 10E4:0A46:0015:56BE
 * @implements 10E4:0A5B:001F:F767
 * @implements 10E4:0A7A:0021:32F4
 * @implements 10E4:0A83:0018:BF31
 * @implements 10E4:0A98:0003:5C0E
 * @implements 10E4:0A9B:0009:C026
 * @implements 10E4:0AA4:000E:C718
 * @implements 10E4:0AB2:0009:542B
 * @implements 10E4:0ABB:0020:A11E
 * @implements 10E4:0ADB:0024:6EB3
 * @implements 10E4:0AFF:0024:BCC5
 * @implements 10E4:0B23:0011:7386
 * @implements 10E4:0B34:000A:E6DD
 * @implements 10E4:0B35:0009:F09D
 * @implements 10E4:0B3E:0016:E755
 * @implements 10E4:0B54:0029:58EB
 * @implements 10E4:0B7D:0008:C54E
 * @implements 10E4:0B85:0008:8894
 * @implements 10E4:0B8D:002C:F76A
 * @implements 10E4:0BB2:0007:96FE
 * @implements 10E4:0BB9:000F:3D5D
 * @implements 10E4:0BC8:0016:761B
 * @implements 10E4:0BDE:0014:9F42
 * @implements 10E4:0BE0:0012:B741
 * @implements 10E4:0BF2:0035:AC8B
 * @implements 10E4:0C27:0024:0D8C
 * @implements 10E4:0C38:0013:BDC9
 * @implements 10E4:0C48:0003:5DA2
 * @implements 10E4:0C4B:0009:51AA
 * @implements 10E4:0C54:000F:1C48
 * @implements 10E4:0C63:000A:4618
 * @implements 10E4:0C6D:000F:9C4E
 * @implements 10E4:0C7C:000A:061E
 * @implements 10E4:0C86:000F:1C4D
 * @implements 10E4:0C95:001F:FF74
 * @implements 10E4:0CB4:001E:659A
 * @implements 10E4:0CD2:0011:3F24
 * @implements 10E4:0CE3:0018:2FC8
 * @implements 10E4:0CFB:0011:37A0
 * @implements 10E4:0D0A:0002:C93A
 * @implements 10E4:0D0C:0012:EB63
 * @implements 10E4:0D1E:003A:C42A
 * @implements 10E4:0D3C:001C:E992
 * @implements 10E4:0D54:0004:893F
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
 * Called From: 0C3A:2771:0008:A466
 * Called From: 0C3A:27D5:0008:A466
 * Called From: 0C3A:287E:0008:A466
 * Called From: 0C3A:28FB:0008:A466
 * Called From: 1391:04D5:0008:A466
 * Called From: 1391:056B:0008:A466
 * Called From: 1391:0594:0008:A466
 * Called From: 176C:26BF:0010:DEE5
 * Called From: 1A34:2317:0008:A466
 * Called From: 1A34:294B:0011:8182
 * Called From: B4E9:00F4:0015:9971
 * Called From: B4E9:00F4:0016:FD70
 * Called From: B511:0BFC:0058:9298
 */
void f__10E4_09AB_0031_5E8E()
{
l__09AB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x5A);
	emu_movw(&emu_ax, emu_bp + 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory8(emu_ss, emu_bp, -0x5A) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__09DF;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09DC); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
l__09DC:
	emu_addw(&emu_sp, 0xC);
l__09DF:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__0A11;
	emu_ax = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x3738) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3736) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3734) = emu_ax;
	emu_al = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x36E4) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x3694) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x3644) = emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x373A) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x373E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x373C) = 0x0;
	goto l__0D54;
l__0A11:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFE);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0xFFFE) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x373A) == 0x0) goto l__0A2B;
		emu_get_memory16(emu_ds, 0x00, 0x3738) = 0xFFFF;
		emu_get_memory8(emu_ds, 0x00, 0x36E4) = 0x0;
	}
	goto l__0A3C;
l__0A2B:
	emu_ax = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x3738) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3736) = emu_ax;
	emu_al = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x36E4) = emu_al;
	emu_get_memory8(emu_ds, 0x00, 0x3694) = emu_al;
l__0A3C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x373A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x373A) != 0x0) goto l__0A46;
	goto l__0C4B;
l__0A46:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	if (emu_get_memory8(emu_ss, emu_bp, -0x5A) == 0x0) goto l__0A83;
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5B); emu_cs = 0x01F7; emu_String_strcasecmp();
l__0A5B:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0A83;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3738));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x3738)) goto l__0A83;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x36E4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A7A); emu_cs = 0x01F7; emu_String_strcpy();
l__0A7A:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x3738) = emu_ax;
l__0A83:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x373E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x373C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0A9B;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0A9B;
	}
l__0A98:
	goto l__0D54;
l__0A9B:
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AA4); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__0AA4:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38C4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38C4) != 0x0) goto l__0AB2;
	goto l__0B35;
l__0AB2:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ABB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__0ABB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D59));
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__0ADB:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8ADA));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AFF); f__10E4_1EF1_0040_01F8();
l__0AFF:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8AD8));
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3644;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B23); f__10E4_1EF1_0040_01F8();
l__0B23:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0B34); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__0B34:
	emu_pop(&emu_cx);
l__0B35:
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B3E); emu_cs = 0x2642; f__2642_0002_005E_87F6();
l__0B3E:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3740);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_cmpw(&emu_ax, 0x18);
	if (emu_ax <= 0x18) goto l__0B54;
	emu_ax = 0x18;
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3740));
	/* Unresolved jump */ emu_ip = 0x0B57; emu_last_cs = 0x10E4; emu_last_ip = 0x0B52; emu_last_length = 0x0016; emu_last_crc = 0xE755; emu_call();
l__0B54:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3740));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0B7D); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
l__0B7D:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B85); emu_cs = 0x2642; f__2642_0069_0008_D517();
l__0B85:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0B8D); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__0B8D:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3740), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3740) == 0x0) goto l__0BB9;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3738);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x3736)) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
		emu_addw(&emu_dx, 0x1);
		emu_adcw(&emu_ax, 0x0);
		emu_get_memory16(emu_ds, 0x00, 0x373E) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x373C) = emu_dx;
	}
l__0BB2:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x3740));
	goto l__0C48;
l__0BB9:
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3644;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BC8); emu_cs = 0x01F7; emu_String_strcpy();
l__0BC8:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8ADA);
	emu_get_memory16(emu_ds, 0x00, 0x8AD8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3736), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3736) == 0x0) goto l__0BDE;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3736);
	emu_decw(&emu_ax);
	goto l__0BE0;
l__0BDE:
	emu_xorw(&emu_ax, emu_ax);
l__0BE0:
	emu_get_memory16(emu_ds, 0x00, 0x3734) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x36E4;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BF2); emu_cs = 0x01F7; emu_String_strcpy();
l__0BF2:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3738);
	emu_get_memory16(emu_ds, 0x00, 0x3736) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8ADC);
	emu_get_memory16(emu_ds, 0x00, 0x8ADA) = emu_ax;
	emu_get_memory8(emu_ds, 0x00, 0x36E4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3738) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3736);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3734));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x3734)) goto l__0C27;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x1);
	goto l__0C38;
l__0C27:
	emu_get_memory16(emu_ds, 0x00, 0x373A) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x384);
l__0C38:
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x373E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x373C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x373A) = 0x0;
l__0C48:
	goto l__0D54;
l__0C4B:
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5A), 0x0);
	if (emu_get_memory8(emu_ss, emu_bp, -0x5A) != 0x0) goto l__0C54;
	goto l__0D0C;
l__0C54:
	emu_push(emu_ds);
	emu_ax = 0x3644;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x01F7; emu_String_strcasecmp();
l__0C63:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C6D;
	goto l__0D0A;
l__0C6D:
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x01F7; emu_String_strcasecmp();
l__0C7C:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C86;
	goto l__0D0A;
l__0C86:
	emu_push(emu_ds);
	emu_ax = 0x36E4;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C95); emu_cs = 0x01F7; emu_String_strcasecmp();
l__0C95:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0D0A;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3736));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x3736)) goto l__0CE3;
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x36E4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CB4); emu_cs = 0x01F7; emu_String_strcpy();
l__0CB4:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8ADA);
	emu_get_memory16(emu_ds, 0x00, 0x8ADC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3736);
	emu_get_memory16(emu_ds, 0x00, 0x3738) = emu_ax;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3694;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CD2); emu_cs = 0x01F7; emu_String_strcpy();
l__0CD2:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x8ADA) = 0xC;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x3736) = emu_ax;
	goto l__0D0A;
l__0CE3:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3738));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x3738)) goto l__0D0A;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x36E4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CFB); emu_cs = 0x01F7; emu_String_strcpy();
l__0CFB:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x3738) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8ADC) = 0xC;
l__0D0A:
	goto l__0D1E;
l__0D0C:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x3644);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0D1E;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x3694);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0D1E;
	goto l__0D54;
l__0D1E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3736);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3734));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x3734)) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x373E);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x373C);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
		if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0D54;
		if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
			if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0D54;
		}
	}
l__0D3C:
	emu_get_memory16(emu_ds, 0x00, 0x373A) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x3740) = 0xA;
	emu_get_memory16(emu_ds, 0x00, 0x373E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x373C) = 0x0;
l__0D54:
	emu_sp = emu_bp;
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
 * @implements 10E4:0D82:0021:381A
 * @implements 10E4:0DA3:000D:E645
 * @implements 10E4:0DB3:0039:BC66
 * @implements 10E4:0DEC:0007:8446
 * @implements 10E4:0DF3:000E:ED31
 * @implements 10E4:0E01:0008:1934
 * @implements 10E4:0E04:0005:A136
 * @implements 10E4:0E3D:008B:FF4E
 * @implements 10E4:0E59:006F:6BD0
 * @implements 10E4:0E6D:005B:EF3E
 * @implements 10E4:0E7C:004C:0D2C
 * @implements 10E4:0E8B:003D:04DF
 * @implements 10E4:0EC8:0049:0BFB
 * @implements 10E4:0F11:0009:B39B
 *
 * Called From: 10E4:13CD:0015:2931
 */
void f__10E4_0D58_004B_FEF5()
{
l__0D58:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = 0x16;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x3A16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0xE) = emu_di;
	}
l__0D82:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D8D; emu_last_cs = 0x10E4; emu_last_ip = 0x0D84; emu_last_length = 0x0021; emu_last_crc = 0x381A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di >= (int16)emu_si) goto l__0DA3;
	emu_ax = emu_di;
	/* Unresolved jump */ emu_ip = 0x0DA5; emu_last_cs = 0x10E4; emu_last_ip = 0x0DA1; emu_last_length = 0x0021; emu_last_crc = 0x381A; emu_call();
l__0DA3:
	emu_ax = emu_si;
	emu_si = emu_ax;
	emu_cmpw(&emu_di, 0x1);
	if ((int16)emu_di <= (int16)0x1) { /* Unresolved jump */ emu_ip = 0x0DB0; emu_last_cs = 0x10E4; emu_last_ip = 0x0DAA; emu_last_length = 0x000D; emu_last_crc = 0xE645; emu_call(); return; }
	emu_ax = emu_di;
	goto l__0DB3;
l__0DB3:
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x0) { /* Unresolved jump */ emu_ip = 0x0E09; emu_last_cs = 0x10E4; emu_last_ip = 0x0DD1; emu_last_length = 0x0039; emu_last_crc = 0xBC66; emu_call(); return; }
	emu_ax = emu_di;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_cwd();
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
l__0DEC:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF3); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
l__0DF3:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x1) goto l__0E01;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0E04;
l__0E01:
	emu_ax = 0x1;
l__0E04:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__0E3D;
l__0E3D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_di;
	emu_sarw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	}
l__0E59:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	}
l__0E6D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) {
			emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
		}
	}
l__0E7C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) {
			emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
		}
	}
l__0E8B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x8) == 0x0) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x003D; emu_last_crc = 0x04DF; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EC8); f__10E4_0008_0048_5BD4();
l__0EC8:
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) { /* Unresolved jump */ emu_ip = 0x0F14; emu_last_cs = 0x10E4; emu_last_ip = 0x0ECF; emu_last_length = 0x0049; emu_last_crc = 0x0BFB; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__0F11:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:0FA2:0008:9861
 * @implements 10E4:0FAA:0012:2B0A
 * @implements 10E4:0FBC:0007:E58A
 * @implements 10E4:0FC3:0040:425A
 * @implements 10E4:1003:000D:561B
 * @implements 10E4:1010:0008:890D
 * @implements 10E4:1012:0006:BB8D
 * @implements 10E4:1018:0033:7B9E
 * @implements 10E4:104B:000D:561B
 * @implements 10E4:1058:0013:5986
 * @implements 10E4:105A:0011:5FD6
 * @implements 10E4:106B:000A:DAE3
 * @implements 10E4:1075:0034:5378
 * @implements 10E4:10A9:0009:6093
 * @implements 10E4:10B2:0045:52D0
 * @implements 10E4:10F7:001A:225E
 * @implements 10E4:1111:001C:695F
 * @implements 10E4:1113:001A:6A77
 * @implements 10E4:112D:000A:817C
 * @implements 10E4:1137:000E:7105
 * @implements 10E4:1139:000C:73C5
 * @implements 10E4:1140:0005:3112
 * @implements 10E4:1145:0002:C8BA
 * @implements 10E4:1147:0011:B8FA
 * @implements 10E4:1158:0015:378A
 * @implements 10E4:116D:0009:542B
 * @implements 10E4:1176:000D:FEBC
 * @implements 10E4:1183:0015:DBD8
 * @implements 10E4:1198:0014:C670
 * @implements 10E4:11AC:0013:8AD3
 * @implements 10E4:11BF:0014:8F36
 * @implements 10E4:11D3:0013:8AD1
 * @implements 10E4:11E6:0014:B7F4
 * @implements 10E4:11FA:0013:8AD2
 * @implements 10E4:120D:0014:BFB2
 * @implements 10E4:1221:0013:8AD4
 * @implements 10E4:1234:0014:EE3E
 * @implements 10E4:1248:0006:A930
 * @implements 10E4:124E:0013:0E38
 * @implements 10E4:1261:002C:EF78
 * @implements 10E4:128D:0016:BF39
 * @implements 10E4:1290:0013:B9F4
 * @implements 10E4:12A3:000C:98EF
 * @implements 10E4:12A6:0009:1147
 * @implements 10E4:12AF:0012:5D6A
 * @implements 10E4:12C1:0009:753A
 * @implements 10E4:12C4:0006:7366
 * @implements 10E4:12C5:0005:3367
 * @implements 10E4:12CA:0009:2375
 * @implements 10E4:12D3:0005:63FA
 * @implements 10E4:12D8:0005:567A
 * @implements 10E4:12DD:0008:435A
 * @implements 10E4:12E5:0002:C03A
 * @implements 10E4:12E7:0026:B9F7
 * @implements 10E4:130D:001A:7DA4
 * @implements 10E4:1310:0017:5306
 * @implements 10E4:1327:0007:1AA4
 * @implements 10E4:132E:0007:3E24
 * @implements 10E4:1335:0007:13A4
 * @implements 10E4:133C:000C:84E0
 * @implements 10E4:1348:001C:44A3
 * @implements 10E4:1364:0004:5E1F
 * @implements 10E4:1368:000C:92E0
 * @implements 10E4:1372:0002:C13A
 * @implements 10E4:1374:0002:C03A
 * @implements 10E4:1376:0033:5882
 * @implements 10E4:13A9:0012:B8DD
 * @implements 10E4:13AC:000F:1AF3
 * @implements 10E4:13BB:0015:2931
 * @implements 10E4:13D0:0029:203C
 * @implements 10E4:13F9:001F:1051
 * @implements 10E4:1418:0008:A511
 * @implements 10E4:1420:0005:84EE
 * @implements 10E4:1425:0002:C03A
 * @implements 10E4:1427:0010:E99B
 * @implements 10E4:1437:000E:D045
 * @implements 10E4:1445:0007:6594
 * @implements 10E4:144C:000B:44E8
 * @implements 10E4:1457:001E:32D6
 * @implements 10E4:146F:0006:7366
 * @implements 10E4:1475:0008:E538
 * @implements 10E4:147D:0006:342F
 * @implements 10E4:1483:000C:71EC
 * @implements 10E4:148F:001F:1FB2
 * @implements 10E4:1491:001D:7AB2
 * @implements 10E4:14AE:0008:252B
 * @implements 10E4:14B6:0006:941C
 * @implements 10E4:14BC:000B:44E8
 * @implements 10E4:14C7:001A:2D9F
 * @implements 10E4:14E1:000B:44E8
 * @implements 10E4:14EC:001B:20A7
 * @implements 10E4:1507:000B:44E8
 * @implements 10E4:1512:001B:A0A5
 * @implements 10E4:152D:000B:54E6
 * @implements 10E4:1538:0049:A266
 * @implements 10E4:1555:002C:2780
 * @implements 10E4:157C:0005:3C22
 * @implements 10E4:1581:0046:E443
 * @implements 10E4:15C7:000F:E74D
 * @implements 10E4:15D6:0022:5AFA
 * @implements 10E4:15F8:0019:F8CC
 * @implements 10E4:1611:0016:EA3D
 * @implements 10E4:1627:0002:E63A
 * @implements 10E4:1629:001E:D3F6
 * @implements 10E4:1647:0016:E13E
 * @implements 10E4:1673:0002:C03A
 * @implements 10E4:1675:0017:0BB8
 * @implements 10E4:168C:002A:C1E9
 * @implements 10E4:16B6:0002:CD3A
 * @implements 10E4:16B8:001A:B719
 * @implements 10E4:16D2:000C:8A97
 * @implements 10E4:16D6:0008:031C
 * @implements 10E4:16DE:0003:5F36
 * @implements 10E4:16E1:000B:54E6
 * @implements 10E4:16EC:0021:1F7C
 * @implements 10E4:170D:0010:937C
 * @implements 10E4:171D:0006:B724
 * @implements 10E4:1723:002F:8C7B
 * @implements 10E4:1752:0010:937C
 * @implements 10E4:1762:0002:D23A
 * @implements 10E4:1764:0014:5232
 * @implements 10E4:1778:0010:437C
 * @implements 10E4:1788:0005:9C6E
 * @implements 10E4:178D:001E:31A7
 * @implements 10E4:17AB:0010:437C
 * @implements 10E4:17BB:0037:8C38
 * @implements 10E4:17BE:0034:9D0D
 * @implements 10E4:17E7:000B:34EA
 * @implements 10E4:17F2:000D:1972
 * @implements 10E4:17FF:0017:1CE4
 * @implements 10E4:1801:0015:7857
 * @implements 10E4:1816:0007:659B
 * @implements 10E4:181D:000B:CD5F
 * @implements 10E4:1828:0013:715D
 * @implements 10E4:183B:0043:1DB0
 * @implements 10E4:187E:003C:D748
 * @implements 10E4:18BA:000C:4B24
 * @implements 10E4:18C6:0024:7FCD
 * @implements 10E4:18EA:0008:229A
 * @implements 10E4:18F2:0006:960C
 * @implements 10E4:18F5:0003:9C2F
 * @implements 10E4:18F8:0013:DC38
 * @implements 10E4:190B:0017:9088
 * @implements 10E4:1922:0022:2DB0
 * @implements 10E4:1944:0020:D72B
 * @implements 10E4:1946:001E:2919
 * @implements 10E4:1964:001F:5AE8
 * @implements 10E4:1983:0008:62BC
 * @implements 10E4:198B:0027:D2E5
 * @implements 10E4:19B2:0017:50DD
 * @implements 10E4:19C9:001F:A367
 * @implements 10E4:19CC:001C:D312
 * @implements 10E4:19E8:0006:1791
 * @implements 10E4:19EE:001E:2919
 * @implements 10E4:1A0C:002A:ACC1
 * @implements 10E4:1A36:002D:4350
 * @implements 10E4:1A63:0008:6204
 * @implements 10E4:1A6B:0005:95AE
 * @implements 10E4:1A70:001C:F6F9
 * @implements 10E4:1A8C:0008:A232
 * @implements 10E4:1A94:0006:F725
 * @implements 10E4:1A97:0003:1D07
 * @implements 10E4:1A9A:0013:32B8
 * @implements 10E4:1AAD:000E:FC87
 * @implements 10E4:1ABB:0012:2398
 * @implements 10E4:1ABE:000F:23B7
 * @implements 10E4:1ACD:0022:B505
 * @implements 10E4:1AEF:0013:2E37
 * @implements 10E4:1B02:0025:E5D0
 * @implements 10E4:1B09:001E:B7BB
 * @implements 10E4:1B21:0006:7366
 * @implements 10E4:1B27:0008:6195
 * @implements 10E4:1B2F:0005:876E
 * @implements 10E4:1B34:0002:C03A
 * @implements 10E4:1B36:0002:C13A
 * @implements 10E4:1B38:0002:C03A
 * @implements 10E4:1B3A:000F:8BED
 * @implements 10E4:1B49:0025:F554
 * @implements 10E4:1B6E:0008:C54E
 * @implements 10E4:1B76:000E:52F2
 * @implements 10E4:1B84:0009:99B5
 * @implements 10E4:1B8D:0007:F77C
 * @implements 10E4:1B8E:0006:F7CE
 *
 * Called From: 0642:03A0:0008:DF89
 * Called From: 0642:03A0:000D:7292
 * Called From: 0972:01B5:0040:F4EB
 * Called From: 10E4:2145:0009:311A
 * Called From: 1423:07B3:0017:3710
 * Called From: 1A34:108A:0018:960E
 * Called From: B4E9:0272:000A:FA15
 * Called From: B4E9:0285:000F:7A73
 * Called From: B4E9:02A4:000B:DA1E
 * Called From: B4E9:02C9:0009:EC55
 */
void f__10E4_0F1A_0088_7622()
{
l__0F1A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x50);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2C) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2E) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x30) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x32) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x34) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x36) = 0x0;
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_ax = 0x3742;
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_cx = 0x10;
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x01F7; f__01F7_03C9_001C_11C7();
l__0FA2:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0FAA); f__10E4_1BE0_002F_1A76();
l__0FAA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__0FBC;
	goto l__1147;
l__0FBC:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BD2);
	switch (emu_ip) {
		case 0x0FC3: goto l__0FC3;
		case 0x1018: goto l__1018;
		case 0x1075: goto l__1075;
		case 0x10A9: goto l__10A9;
		case 0x1147: goto l__1147;
		case 0x12DD: goto l__12DD;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0FBE; emu_last_length = 0x0007; emu_last_crc = 0xE58A;
			emu_call();
			return;
	}
l__0FC3:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A3C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A3A);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_cs); emu_push(0x1003); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__1003:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1010;
	emu_ax = 0x1;
	goto l__1012;
l__1010:
	emu_xorw(&emu_ax, emu_ax);
l__1012:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	goto l__1158;
l__1018:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x104B); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__104B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1058;
	emu_ax = 0x1;
	goto l__105A;
l__1058:
	emu_xorw(&emu_ax, emu_ax);
l__105A:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__106B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	goto l__1158;
l__1075:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38E2);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A3C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A3A);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__1158;
l__10A9:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x10B2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Building_GetByPackedTile();
l__10B2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10F7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__10F7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1111;
	emu_ax = 0x1;
	goto l__1113;
l__1111:
	emu_xorw(&emu_ax, emu_ax);
l__1113:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1140;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
l__112D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1137;
	emu_al = 0x64;
	goto l__1139;
l__1137:
	emu_al = 0x0;
l__1139:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_get_memory8(emu_es, emu_bx, 0x4F) = emu_al;
l__1140:
	emu_push(emu_cs);
	emu_push(0x1145); f__10E4_2290_0012_78BD();
l__1145:
	goto l__1158;
l__1147:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = 0x0;
	goto l__1158;
l__1158:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6C91);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6D5D);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__116D;
	goto l__12A6;
l__116D:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1176); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__1176:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1183); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__1183:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1198); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__1198:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x30) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x32) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x11AC); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
l__11AC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x11BF); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__11BF:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x11D3); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
l__11D3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x11E6); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__11E6:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
l__11FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x120D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__120D:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2E) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
l__1221:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1234); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__1234:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x34) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x36) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x1248); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
l__1248:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__1290;
l__124E:
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1261); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__1261:
	emu_addw(&emu_sp, 0x6);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_cx, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_cx);
	emu_get_memory16(emu_ss, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x128D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0088_0029_3A68();
l__128D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
l__1290:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__124E;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs);
	emu_push(0x12A3); f__10E4_057F_0052_2B00();
l__12A3:
	emu_addw(&emu_sp, 0x6);
l__12A6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) > (int16)0x1) goto l__12AF;
	goto l__1B3A;
l__12AF:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx > 0x6) goto l__12E5;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BC4);
	switch (emu_ip) {
		case 0x12C1: goto l__12C1;
		case 0x12D3: goto l__12D3;
		case 0x12D8: goto l__12D8;
		case 0x12DD: goto l__12DD;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x12BC; emu_last_length = 0x0012; emu_last_crc = 0x5D6A;
			emu_call();
			return;
	}
l__12C1:
	emu_ax = 0x6;
l__12C4:
	emu_push(emu_ax);
l__12C5:
	emu_push(emu_cs); emu_push(0x12CA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__12CA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	goto l__12E7;
l__12D3:
	emu_ax = 0xD;
	goto l__12C4;
l__12D8:
	emu_ax = 0xE;
	goto l__12C4;
l__12DD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	goto l__12C5;
l__12E5:
	goto l__12E7;
l__12E7:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_ax == 0) goto l__1310;
	emu_ax = 0x111;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x2B;
	emu_push(emu_ax);
	emu_ax = 0x120;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs);
	emu_push(0x130D); f__10E4_1EF1_0040_01F8();
l__130D:
	emu_addw(&emu_sp, 0xE);
l__1310:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0xFFFF;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx > 0x6) goto l__1374;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BB6);
	switch (emu_ip) {
		case 0x1327: goto l__1327;
		case 0x132E: goto l__132E;
		case 0x1335: goto l__1335;
		case 0x133C: goto l__133C;
		case 0x1348: goto l__1348;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1322; emu_last_length = 0x0017; emu_last_crc = 0x5306;
			emu_call();
			return;
	}
l__1327:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x1E;
	goto l__1376;
l__132E:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x1C;
	goto l__1376;
l__1335:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x1D;
	goto l__1376;
l__133C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	goto l__1376;
l__1348:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) == 0) goto l__1368;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__1368;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_cs); emu_push(0x1364); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__1364:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__1372;
l__1368:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
l__1372:
	goto l__1376;
l__1374:
	goto l__1376;
l__1376:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) == 0xFFFF) goto l__13AC;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x33;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x13A9); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__13A9:
	emu_addw(&emu_sp, 0xE);
l__13AC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__13BB;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__13BB;
	goto l__1425;
l__13BB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x13D0); f__10E4_0D58_004B_FEF5();
l__13D0:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_ax = 0x124;
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x4AE));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x4AC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__13F9:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x41;
	emu_push(emu_ax);
	emu_ax = 0x128;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1418); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1418:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1420); f__10E4_1EF1_0040_01F8();
l__1420:
	emu_addw(&emu_sp, 0xE);
	goto l__1427;
l__1425:
	goto l__1427;
l__1427:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__1437;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) goto l__1437;
	goto l__1B3A;
l__1437:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__1445;
	goto l__1B38;
l__1445:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1BA8);
	switch (emu_ip) {
		case 0x144C: goto l__144C;
		case 0x1483: goto l__1483;
		case 0x14BC: goto l__14BC;
		case 0x14E1: goto l__14E1;
		case 0x1507: goto l__1507;
		case 0x152D: goto l__152D;
		case 0x16E1: goto l__16E1;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1447; emu_last_length = 0x0007; emu_last_crc = 0x6594;
			emu_call();
			return;
	}
l__144C:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x1457); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__1457:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x54;
	emu_push(emu_ax);
	emu_ax = 0x103;
	emu_push(emu_ax);
	emu_ax = 0x54;
l__146F:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1475:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x147D); f__10E4_1EF1_0040_01F8();
l__147D:
	emu_addw(&emu_sp, 0xE);
	goto l__1B3A;
l__1483:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FE);
	emu_decw(&emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__148F;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FE);
	emu_decw(&emu_ax);
	goto l__1491;
l__148F:
	emu_xorw(&emu_ax, emu_ax);
l__1491:
	emu_push(emu_ax);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x54;
	emu_push(emu_ax);
	emu_ax = 0x103;
	emu_push(emu_ax);
	emu_ax = 0x55;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14AE); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__14AE:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x14B6); f__10E4_1EF1_0040_01F8();
l__14B6:
	emu_addw(&emu_sp, 0x10);
	goto l__1B3A;
l__14BC:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x14C7); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__14C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x4C;
	emu_push(emu_ax);
	emu_ax = 0x103;
	emu_push(emu_ax);
	emu_ax = 0x14F;
	goto l__146F;
l__14E1:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__14EC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x4C;
	emu_push(emu_ax);
	emu_ax = 0x103;
	emu_push(emu_ax);
	emu_ax = 0x56;
	goto l__146F;
l__1507:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_push(emu_cs); emu_push(0x1512); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__1512:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x4C;
	emu_push(emu_ax);
	emu_ax = 0x103;
	emu_push(emu_ax);
	emu_ax = 0x57;
	goto l__146F;
l__152D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x1538); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__1538:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
		emu_ax = (int8)emu_al;
		emu_di = emu_ax;
	}
l__1555:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_addw(&emu_dx, 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x3A) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) {
			emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_ds;
			emu_get_memory16(emu_ss, emu_bp, -0x3A) = 0x3C2A;
		}
	}
l__157C:
	emu_xorw(&emu_si, emu_si);
	goto l__16D6;
l__1581:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6E);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_dx, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_get_memory16(emu_es, emu_bx, 0x38) = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x38));
	emu_push(emu_cs); emu_push(0x15C7); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__15C7:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15D6); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
l__15D6:
	emu_pop(&emu_cx);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_dx, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__1629;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__15F8;
	goto l__1675;
l__15F8:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__1611;
	goto l__1627;
l__1611:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x17;
	goto l__1627;
l__1627:
	goto l__1675;
l__1629:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__1647;
	emu_cmpw(&emu_ax, 0x7);
	if (emu_ax == 0x7) { /* Unresolved jump */ emu_ip = 0x165D; emu_last_cs = 0x10E4; emu_last_ip = 0x1643; emu_last_length = 0x001E; emu_last_crc = 0xD3F6; emu_call(); return; }
	goto l__1673;
l__1647:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x27;
	goto l__1673;
l__1673:
	goto l__1675;
l__1675:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x168C); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__168C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != emu_di) goto l__16B8;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x16B6); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__16B6:
	goto l__16D2;
l__16B8:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x50);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x16D2); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__16D2:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_si);
l__16D6:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si >= (int16)0x4) goto l__16DE;
	goto l__1581;
l__16DE:
	goto l__1B3A;
l__16E1:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x34));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x36));
	emu_push(emu_cs); emu_push(0x16EC); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__16EC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) == 0) goto l__1723;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x8F;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x170D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__170D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x171D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__171D:
	emu_addw(&emu_sp, 0x6);
	goto l__17BE;
l__1723:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x10)) goto l__178D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) == 0) goto l__1764;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x23;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1752); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__1752:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1762); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__1762:
	goto l__1788;
l__1764:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x22;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1778); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__1778:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__1788:
	emu_addw(&emu_sp, 0x6);
	goto l__17BE;
l__178D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x0) goto l__17BE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x8E;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x17AB); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__17AB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_cs); emu_push(0x17BB); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__17BB:
	emu_addw(&emu_sp, 0x6);
l__17BE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) goto l__1801;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x2) goto l__1801;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x50) != 0x0) goto l__1801;
	}
l__17E7:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17F2); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00BD_0029_3530();
l__17F2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2E));
	emu_push(emu_cs); emu_push(0x17FF); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
l__17FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1801:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_subw(&emu_ax, 0x9);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x9);
	if (emu_bx <= 0x9) goto l__1816;
	goto l__1B34;
l__1816:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1B94);
	switch (emu_ip) {
		case 0x181D: goto l__181D;
		case 0x18F8: goto l__18F8;
		case 0x19EE: goto l__19EE;
		case 0x1A36: goto l__1A36;
		case 0x1A9A: goto l__1A9A;
		case 0x1B34: goto l__1B34;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1818; emu_last_length = 0x0007; emu_last_crc = 0x659B;
			emu_call();
			return;
	}
l__181D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1828); emu_cs = 0x1A34; emu_Building_GetLinkedUnit();
l__1828:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x3A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x3C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x3C);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	if (emu_ax != 0) goto l__183B;
	goto l__18F5;
l__183B:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x59;
	emu_push(emu_ax);
	emu_ax = 0x104;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x187E); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__187E:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x3E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shrw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x3E);
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_push(emu_cs); emu_push(0x18BA); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
l__18BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x64;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18C6); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_PercentToValue();
l__18C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x40) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_ax = 0x2E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18EA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__18EA:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x18F2); f__10E4_1EF1_0040_01F8();
l__18F2:
	emu_addw(&emu_sp, 0x10);
l__18F5:
	goto l__1B36;
l__18F8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x190B); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
l__190B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_negw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1922); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_PercentToValue();
l__1922:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) == 0x0) goto l__1944;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_di = emu_ax;
	goto l__1946;
l__1944:
	emu_xorw(&emu_di, emu_di);
l__1946:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x5F;
	emu_push(emu_ax);
	emu_ax = 0x138;
	emu_push(emu_ax);
	emu_ax = 0x5F;
	emu_push(emu_ax);
	emu_ax = 0x105;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__1964:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_ax = 0x59;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1983); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1983:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x198B); f__10E4_1EF1_0040_01F8();
l__198B:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_ax, 0x50);
	emu_push(emu_ax);
	emu_ax = 0x12E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3774;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19B2); f__10E4_1EF1_0040_01F8();
l__19B2:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_di);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x38) >= (int16)emu_di) goto l__19C9;
	emu_ax = 0x6;
	goto l__19CC;
l__19C9:
	emu_ax = 0x1D;
l__19CC:
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x50);
	emu_push(emu_ax);
	emu_ax = 0x12E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3774;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19E8); f__10E4_1EF1_0040_01F8();
l__19E8:
	emu_addw(&emu_sp, 0x10);
	goto l__1B36;
l__19EE:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x5F;
	emu_push(emu_ax);
	emu_ax = 0x138;
	emu_push(emu_ax);
	emu_ax = 0x5F;
	emu_push(emu_ax);
	emu_ax = 0x105;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__1A0C:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_ax = 0x92;
	goto l__1B21;
l__1A36:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2C), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x2C) == 0xFFFF) goto l__1A70;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2A));
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_ax = 0xA1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A63); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1A63:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1A6B); f__10E4_1EF1_0040_01F8();
l__1A6B:
	emu_addw(&emu_sp, 0x10);
	goto l__1A97;
l__1A70:
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A8C); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1A8C:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1A94); f__10E4_1EF1_0040_01F8();
l__1A94:
	emu_addw(&emu_sp, 0xE);
l__1A97:
	goto l__1B36;
l__1A9A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x1AAD); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
l__1AAD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0x100);
	if ((int16)emu_di >= (int16)0x100) goto l__1ABB;
	emu_ax = emu_di;
	goto l__1ABE;
l__1ABB:
	emu_ax = 0x100;
l__1ABE:
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x36));
	emu_push(emu_cs); emu_push(0x1ACD); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_PercentToValue();
l__1ACD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x5F;
	emu_push(emu_ax);
	emu_ax = 0x138;
	emu_push(emu_ax);
	emu_ax = 0x5F;
	emu_push(emu_ax);
	emu_ax = 0x105;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
l__1AEF:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x3E8);
	if (emu_get_memory16(emu_es, emu_bx, 0x36) <= 0x3E8) goto l__1B02;
	emu_ax = 0x3E8;
	goto l__1B09;
l__1B02:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x36);
l__1B09:
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_ax = 0x102;
	emu_push(emu_ax);
	emu_ax = 0x58;
l__1B21:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B27); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1B27:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1B2F); f__10E4_1EF1_0040_01F8();
l__1B2F:
	emu_addw(&emu_sp, 0x12);
	goto l__1B36;
l__1B34:
	goto l__1B36;
l__1B36:
	goto l__1B3A;
l__1B38:
	goto l__1B3A;
l__1B3A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__1B76;
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B49); emu_cs = 0x2642; f__2642_0002_005E_87F6();
l__1B49:
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
l__1B6E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1B76); emu_cs = 0x2642; f__2642_0069_0008_D517();
l__1B76:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) <= (int16)0x1) goto l__1B8E;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1B84); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
l__1B84:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1B8D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__1B8D:
	emu_pop(&emu_cx);
l__1B8E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:1C09:0006:A5A9
 * @implements 10E4:1C0C:0003:5D93
 * @implements 10E4:1C0F:001C:840E
 * @implements 10E4:1C25:0006:A5CE
 * @implements 10E4:1C28:0003:5D8C
 * @implements 10E4:1C2B:000C:0425
 * @implements 10E4:1C37:0025:30B3
 * @implements 10E4:1C51:000B:E9CC
 * @implements 10E4:1C5C:000B:FE4C
 * @implements 10E4:1C67:0011:0798
 * @implements 10E4:1C6A:000E:589E
 * @implements 10E4:1C76:0002:E03A
 * @implements 10E4:1C78:0043:45A7
 * @implements 10E4:1CB5:0006:A5BA
 * @implements 10E4:1CB8:0003:5DA8
 * @implements 10E4:1CBB:001E:8B40
 * @implements 10E4:1CD9:0009:109E
 * @implements 10E4:1CE2:000D:9E1E
 * @implements 10E4:1CEF:0009:6093
 * @implements 10E4:1CF8:000E:06CC
 * @implements 10E4:1D06:0010:D001
 * @implements 10E4:1D16:006B:11D3
 * @implements 10E4:1D81:0048:3DC5
 * @implements 10E4:1D9D:002C:E708
 * @implements 10E4:1DC9:000B:2289
 * @implements 10E4:1DCF:0005:F44A
 * @implements 10E4:1DD2:0002:C1BA
 * @implements 10E4:1DD4:0005:D44A
 * @implements 10E4:1DD7:0002:C1BA
 * @implements 10E4:1DD9:000D:1EE5
 * @implements 10E4:1DDC:000A:EEF0
 * @implements 10E4:1DE6:0007:A709
 * @implements 10E4:1DED:000F:3628
 * @implements 10E4:1DFC:001B:EDE5
 * @implements 10E4:1E14:0003:9D0D
 * @implements 10E4:1E17:0036:E1A9
 * @implements 10E4:1E4D:0070:0410
 * @implements 10E4:1EBD:000E:C528
 * @implements 10E4:1ECB:0002:C03A
 * @implements 10E4:1ECD:000C:758B
 * @implements 10E4:1ED5:0004:68F2
 * @implements 10E4:1ED9:0006:F7CE
 *
 * Called From: 10E4:0FA7:0008:9861
 */
void f__10E4_1BE0_002F_1A76()
{
l__1BE0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x2) goto l__1C0F;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3752), 0x7);
	if (emu_get_memory16(emu_ds, 0x00, 0x3752) == 0x7) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) goto l__1C0C;
	}
l__1C09:
	emu_si = 0x7;
l__1C0C:
	goto l__1DDC;
l__1C0F:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_ax == 0) goto l__1C2B;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3762);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FE));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x38FE)) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) goto l__1C28;
	}
l__1C25:
	emu_si = 0x8;
l__1C28:
	goto l__1DDC;
l__1C2B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != 0) goto l__1C37;
	goto l__1CBB;
l__1C37:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x1) goto l__1C78;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38F6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3760));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3760)) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) goto l__1C6A;
	}
l__1C51:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__1C5C;
	emu_si = 0x4;
	goto l__1C6A;
l__1C5C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x1) goto l__1C67;
	emu_si = 0x5;
	goto l__1C6A;
l__1C67:
	emu_si = 0x6;
l__1C6A:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3752));
	if (emu_si == emu_get_memory16(emu_ds, 0x00, 0x3752)) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) {
			emu_xorw(&emu_si, emu_si);
		}
	}
l__1C76:
	goto l__1CB8;
l__1C78:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3756));
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3756)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3754));
			if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3754)) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
				emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
				emu_ax = (int8)emu_al;
				emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376A));
				if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x376A)) {
					emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
					emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
					emu_ax = (int8)emu_al;
					emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3760));
					if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3760)) goto l__1CB8;
				}
			}
		}
	}
l__1CB5:
	emu_si = 0x2;
l__1CB8:
	goto l__1DDC;
l__1CBB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A02);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) != 0) goto l__1CD9;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) goto l__1CD9;
	goto l__1DD9;
l__1CD9:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1CE2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__1CE2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xC);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xC) goto l__1CEF;
	goto l__1DD4;
l__1CEF:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1CF8); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Building_GetByPackedTile();
l__1CF8:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__1D06;
	goto l__1D9D;
l__1D06:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3754));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3754)) goto l__1D16;
	goto l__1D9D;
l__1D16:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3756));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3756)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3758));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3758)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3764));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3764)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x375E));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x375E)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x375A));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x375A)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3766));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3766)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376A));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x376A)) goto l__1D9D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D81); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1D81:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3768));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3768)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x375C));
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x375C)) goto l__1DD2;
	}
l__1D9D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1A);
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__1DC9;
	emu_get_memory16(emu_ds, 0x00, 0x37B2) = 0x0;
	goto l__1DCF;
l__1DC9:
	emu_get_memory16(emu_ds, 0x00, 0x37B2) = 0x1;
l__1DCF:
	emu_si = 0x3;
l__1DD2:
	goto l__1DD7;
l__1DD4:
	emu_si = 0x1;
l__1DD7:
	goto l__1DDC;
l__1DD9:
	emu_si = 0x1;
l__1DDC:
	emu_bx = emu_si;
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx <= 0x8) goto l__1DE6;
	goto l__1ECB;
l__1DE6:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1EDF);
	switch (emu_ip) {
		case 0x1DED: goto l__1DED;
		case 0x1DFC: goto l__1DFC;
		case 0x1E17: goto l__1E17;
		case 0x1E4D: goto l__1E4D;
		case 0x1ECB: goto l__1ECB;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1DE8; emu_last_length = 0x0007; emu_last_crc = 0xA709;
			emu_call();
			return;
	}
l__1DED:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FE);
	emu_get_memory16(emu_ds, 0x00, 0x3762) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3756) = 0xFFFF;
	goto l__1ECD;
l__1DFC:
	emu_get_memory16(emu_ds, 0x00, 0x3756) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x3762) = 0xFFFF;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3752));
		if (emu_si == emu_get_memory16(emu_ds, 0x00, 0x3752)) {
			emu_xorw(&emu_si, emu_si);
		}
	}
l__1E14:
	goto l__1ECD;
l__1E17:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x3754) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3756) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x3760) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3762) = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x376A) = emu_ax;
	goto l__1ECD;
l__1E4D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x3754) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3756) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4C);
	emu_get_memory16(emu_ds, 0x00, 0x375A) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_get_memory16(emu_ds, 0x00, 0x3758) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x3764) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3766) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x375E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ds, 0x00, 0x375C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ds, 0x00, 0x376A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3762) = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1EBD); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1EBD:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2A);
	emu_get_memory16(emu_ds, 0x00, 0x3768) = emu_ax;
	goto l__1ECD;
l__1ECB:
	goto l__1ECD;
l__1ECD:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_get_memory16(emu_ds, 0x00, 0x3752) = emu_si;
	}
l__1ED5:
	emu_ax = emu_si;
	goto l__1ED9;
l__1ED9:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:1F0E:0023:AD41
 * @implements 10E4:1F16:001B:1F78
 * @implements 10E4:1F31:000F:962F
 * @implements 10E4:1F38:0008:C738
 * @implements 10E4:1F40:0009:2E6F
 * @implements 10E4:1F4B:000B:7DDF
 * @implements 10E4:1F56:0029:3FE5
 * @implements 10E4:1F5C:0023:6CB8
 * @implements 10E4:1F74:000B:B4BD
 * @implements 10E4:1F7F:0011:E0DB
 * @implements 10E4:1F90:0023:D333
 * @implements 10E4:1FA4:000F:716F
 * @implements 10E4:1FB3:0004:3BFB
 * @implements 10E4:1FB7:0012:FD12
 * @implements 10E4:1FC9:000C:8E13
 * @implements 10E4:1FDC:0012:FFA4
 * @implements 10E4:1FE6:0008:5AB8
 * @implements 10E4:1FEE:0002:C03A
 * @implements 10E4:1FF0:0016:34AE
 * @implements 10E4:2006:002F:F3AC
 * @implements 10E4:200E:0027:C344
 * @implements 10E4:2035:0015:02D9
 * @implements 10E4:204A:000A:AE92
 * @implements 10E4:2054:0008:7CC9
 * @implements 10E4:2058:0004:6638
 * @implements 10E4:205C:000A:AE92
 * @implements 10E4:2066:0004:2C1F
 * @implements 10E4:206A:0002:C03A
 * @implements 10E4:206C:0014:77A1
 * @implements 10E4:2080:0009:B397
 * @implements 10E4:2083:0006:F7CE
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
 * Called From: 10E4:14B3:0008:252B
 * Called From: 10E4:18EF:0008:229A
 * Called From: 10E4:1988:0008:62BC
 * Called From: 10E4:19AF:0027:D2E5
 * Called From: 10E4:19E5:001C:D312
 * Called From: 10E4:19E5:001F:A367
 * Called From: 10E4:1A68:0008:6204
 * Called From: 10E4:1A91:0008:A232
 * Called From: 10E4:1B2C:0008:6195
 * Called From: B495:0573:0008:0683
 * Called From: B495:060E:0008:0683
 * Called From: B495:0678:0008:0683
 * Called From: B495:0712:0008:0683
 * Called From: B495:0A59:0008:0683
 * Called From: B495:0A83:0008:0683
 * Called From: B495:0AB5:0008:0683
 * Called From: B495:0ADE:0008:0683
 * Called From: B495:0B5F:0008:0683
 * Called From: B495:0C18:0032:B14B
 * Called From: B495:0C59:0008:0683
 * Called From: B495:0C9E:0008:0683
 * Called From: B495:0CF1:0008:0683
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
l__1EF1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_andw(&emu_ax, 0xF);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x376C));
	if (emu_di != emu_get_memory16(emu_ds, 0x00, 0x376C)) {
		emu_orw(&emu_di, emu_di);
		if (emu_di != 0) goto l__1F16;
	}
l__1F0E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1F5C;
l__1F16:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x99F1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x99EF);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__1F31;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__1F40;
	/* Unresolved jump */ emu_ip = 0x1F49; emu_last_cs = 0x10E4; emu_last_ip = 0x1F2F; emu_last_length = 0x001B; emu_last_crc = 0x1F78; emu_call();
l__1F31:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A2E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A2C);
l__1F38:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	goto l__1F4B;
l__1F40:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A32);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A30);
	goto l__1F38;
l__1F4B:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1F56); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
l__1F56:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x376C) = emu_di;
l__1F5C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_andw(&emu_ax, 0xF0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x376E));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x376E)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__1F7F;
	}
l__1F74:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__1F7F;
	goto l__200E;
l__1F7F:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8ADE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F90); emu_cs = 0x01F7; emu_Tools_Memset();
l__1F90:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory8(emu_ds, 0x00, 0x8AE2) = 0x6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cx = 0x4;
	emu_bx = 0x2089;
l__1FA4:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__1FB3;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__1FA4;
	goto l__1FEE;
l__1FB3:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x8);
	switch (emu_ip) {
		case 0x1FB7: goto l__1FB7;
		case 0x1FC9: goto l__1FC9;
		case 0x1FDC: goto l__1FDC;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x1FB3; emu_last_length = 0x0004; emu_last_crc = 0x3BFB;
			emu_call();
			return;
	}
l__1FB7:
	emu_get_memory8(emu_ds, 0x00, 0x8AE0) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x8AE1) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0xFFFE;
	goto l__1FF0;
l__1FC9:
	emu_get_memory8(emu_ds, 0x00, 0x8AE0) = 0xC;
	emu_get_memory8(emu_ds, 0x00, 0x8AE1) = 0x0;
	goto l__1FE6;
l__1FDC:
	emu_get_memory8(emu_ds, 0x00, 0x8AE0) = 0xC;
	emu_get_memory8(emu_ds, 0x00, 0x8AE1) = 0xC;
l__1FE6:
	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0xFFFF;
	goto l__1FF0;
l__1FEE:
	goto l__1FF0;
l__1FF0:
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x10);
	emu_get_memory8(emu_ds, 0x00, 0x8ADE) = emu_al;
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_ds, 0x00, 0x8ADF) = emu_al;
	emu_push(emu_ds);
	emu_ax = 0x8ADE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2006); emu_cs = 0x259E; f__259E_0021_001A_E253();
l__2006:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ds, 0x00, 0x376E) = emu_ax;
l__200E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__2083;
	emu_movw(&emu_ax, emu_bp + 0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x8AEE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; f__01F7_37AF_001F_03E8();
l__2035:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_andw(&emu_ax, 0xF00);
	emu_cmpw(&emu_ax, 0x100);
	if (emu_ax == 0x100) goto l__204A;
	emu_cmpw(&emu_ax, 0x200);
	if (emu_ax == 0x200) goto l__205C;
	goto l__206A;
l__204A:
	emu_push(emu_ds);
	emu_ax = 0x8AEE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2054); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
l__2054:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shrw(&emu_ax, 0x1);
l__2058:
	emu_subw(&emu_si, emu_ax);
	goto l__206C;
l__205C:
	emu_push(emu_ds);
	emu_ax = 0x8AEE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2066); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
l__2066:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2058;
l__206A:
	goto l__206C;
l__206C:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x8AEE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
l__2080:
	emu_addw(&emu_sp, 0xC);
l__2083:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:20AB:0009:542B
 * @implements 10E4:20B4:0025:D60D
 * @implements 10E4:20D9:0022:8F4B
 * @implements 10E4:20FB:0028:4959
 * @implements 10E4:2123:0012:8D21
 * @implements 10E4:2135:000A:1679
 * @implements 10E4:213F:0009:311A
 * @implements 10E4:2148:0012:81F6
 * @implements 10E4:215A:000A:F8FD
 * @implements 10E4:2164:0013:8AD5
 * @implements 10E4:2177:000A:F8FD
 * @implements 10E4:2181:0015:A299
 * @implements 10E4:2196:0005:882E
 * @implements 10E4:219B:000B:C1F1
 * @implements 10E4:21A6:000D:DBFF
 * @implements 10E4:21B3:0023:8806
 * @implements 10E4:21B5:0021:C330
 * @implements 10E4:21D6:0005:8AAE
 * @implements 10E4:21DB:000F:0096
 * @implements 10E4:21EA:000E:5BF5
 * @implements 10E4:21F8:001C:86CA
 * @implements 10E4:21FA:001A:A351
 * @implements 10E4:2214:0006:0569
 * @implements 10E4:221A:0020:001D
 * @implements 10E4:223A:000F:6F2A
 * @implements 10E4:2249:000C:BA1C
 * @implements 10E4:224C:0009:919C
 * @implements 10E4:2255:0013:D274
 * @implements 10E4:2268:0008:1BE5
 * @implements 10E4:2270:0006:4A77
 * @implements 10E4:2276:000D:91AA
 * @implements 10E4:2283:0007:843A
 * @implements 10E4:228A:0006:F7CE
 *
 * Called From: B4E9:0170:0040:197F
 * Called From: B4E9:03FC:000E:D57A
 * Called From: B4F2:0311:0008:EA61
 */
void f__10E4_2099_0012_A216()
{
l__2099:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__20AB;
	emu_push(emu_si);
	/* Unresolved jump */ emu_ip = 0x20AF; emu_last_cs = 0x10E4; emu_last_ip = 0x20A9; emu_last_length = 0x0012; emu_last_crc = 0xA216; emu_call();
l__20AB:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20B4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__20B4:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3777;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20D9); emu_cs = 0x34CA; overlay(0x34CA, 0); f__B4CA_020F_0017_A939();
l__20D9:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20FB); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
l__20FB:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC0;
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46E));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46C));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2123); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__2123:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x2135); emu_cs = 0x07D4; f__07D4_159A_001D_F971();
l__2135:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x213F); emu_cs = 0x07D4; f__07D4_0000_0027_FA61();
l__213F:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2148); f__10E4_0F1A_0088_7622();
l__2148:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x215A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__215A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2164); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
l__2164:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x2177); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__2177:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2181); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
l__2181:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2196); emu_cs = 0x1082; emu_Building_FindFirst();
l__2196:
	emu_addw(&emu_sp, 0x8);
	goto l__21B5;
l__219B:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x21A6); emu_cs = 0x0C3A; f__0C3A_092A_0013_A4A8();
l__21A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x1082; emu_Building_FindNext();
l__21B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__21B5:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__219B;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__21D6:
	emu_addw(&emu_sp, 0x8);
	goto l__21FA;
l__21DB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x21EA); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__21EA:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21F8); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__21F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__21FA:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__21DB;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2270;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2214); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__2214:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x221A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__221A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
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
l__223A:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B6) != 0xFFFF) goto l__2249;
	emu_ax = 0x2;
	goto l__224C;
l__2249:
	emu_ax = 0x1;
l__224C:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2255); f__10E4_0675_0026_F126();
l__2255:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x2268); emu_cs = 0x259E; f__259E_0006_0016_858A();
l__2268:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x2270); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
l__2270:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2276); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__2276:
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2283); f__10E4_0675_0026_F126();
l__2283:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x228A); emu_cs = 0x29E8; emu_Input_History_Clear();
l__228A:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 10E4:22A2:0012:31AA
 * @implements 10E4:22B4:0039:56C7
 * @implements 10E4:22E5:0008:4225
 * @implements 10E4:22ED:001A:9C19
 * @implements 10E4:2307:000F:0CC6
 * @implements 10E4:2316:000F:EC6D
 * @implements 10E4:2325:0005:B448
 * @implements 10E4:2328:0002:C1BA
 * @implements 10E4:232A:0005:44C8
 * @implements 10E4:232D:0002:D13A
 * @implements 10E4:232F:0024:0C9F
 * @implements 10E4:2351:0002:893A
 * @implements 10E4:2353:0005:8BCF
 *
 * Called From: 0AEC:0841:0005:08A0
 * Called From: 10E4:1142:000E:7105
 * Called From: 10E4:1142:0005:3112
 * Called From: 10E4:1142:000C:73C5
 */
void f__10E4_2290_0012_78BD()
{
l__2290:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x22A2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Building_GetByPackedTile();
l__22A2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__22B4;
	goto l__2351;
l__22B4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) == 0) goto l__232F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) == 0) goto l__22ED;
	emu_si = 0x90;
l__22E5:
	emu_get_memory16(emu_ds, 0x00, 0x97E5) = emu_si;
	emu_ax = emu_si;
	goto l__2353;
l__22ED:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__232A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4000) == 0) goto l__2307;
	emu_si = 0x28;
	goto l__2328;
l__2307:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) == 0x0) goto l__2316;
	emu_si = 0x2E;
	goto l__2328;
l__2316:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__2325;
	emu_si = 0x26;
	goto l__2328;
l__2325:
	emu_si = 0x27;
l__2328:
	goto l__232D;
l__232A:
	emu_si = 0x29;
l__232D:
	goto l__2351;
l__232F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x2) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ax = (int8)emu_al;
		emu_dx = 0x1E;
		emu_imuluw(&emu_ax, emu_dx);
		emu_bx = emu_ax;
		emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x380A);
		emu_addw(&emu_ax, 0x29);
		emu_si = emu_ax;
	}
l__2351:
	goto l__22E5;
l__2353:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
