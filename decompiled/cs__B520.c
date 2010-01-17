/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B520_0000_0019_6B99()
 *
 * @name f__B520_0000_0019_6B99
 * @implements B520:0000:0019:6B99 ()
 * @implements B520:0019:0010:3B22
 * @implements B520:0029:0032:C898
 * @implements B520:005B:002A:C23D
 * @implements B520:0085:001B:7C94
 * @implements B520:00A0:000D:9A2C
 * @implements B520:00AD:000D:2CDF
 * @implements B520:00BA:001C:E198
 * @implements B520:00D6:0007:DF15
 * @implements B520:00DD:0006:F7CE
 *
 * Called From: 3520:004D:0005:0000
 */
void f__B520_0000_0019_6B99()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0019); f__B520_00E3_0028_2188();
l__0019:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0029;
	/* Unresolved jump */ emu_ip = 0x00D8; emu_last_cs = 0xB520; emu_last_ip = 0x0026; emu_last_length = 0x0010; emu_last_crc = 0x3B22; emu_call();
l__0029:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x36);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x34);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0045; emu_last_cs = 0xB520; emu_last_ip = 0x003C; emu_last_length = 0x0032; emu_last_crc = 0xC898; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_si;
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0066; emu_last_cs = 0xB520; emu_last_ip = 0x0047; emu_last_length = 0x0032; emu_last_crc = 0xC898; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_di);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x8) >= (int16)emu_di) goto l__005B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	/* Unresolved jump */ emu_ip = 0x005D; emu_last_cs = 0xB520; emu_last_ip = 0x0059; emu_last_length = 0x0032; emu_last_crc = 0xC898; emu_call();
l__005B:
	emu_ax = emu_di;
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_di;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xE) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0095; emu_last_cs = 0xB520; emu_last_ip = 0x006A; emu_last_length = 0x002A; emu_last_crc = 0xC23D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((int16)emu_si >= (int16)emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0085;
	emu_ax = emu_si;
	/* Unresolved jump */ emu_ip = 0x0088; emu_last_cs = 0xB520; emu_last_ip = 0x0083; emu_last_length = 0x002A; emu_last_crc = 0xC23D; emu_call();
l__0085:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x00A0); f__B520_085F_003A_87ED();
l__00A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x00AD); f__B520_096E_003C_F7E4();
l__00AD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00BA); emu_GUI_Widget_ScrollBar_Draw();
l__00BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x00D8; emu_last_cs = 0xB520; emu_last_ip = 0x00C7; emu_last_length = 0x001C; emu_last_crc = 0xE198; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_push(0x00D6);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34E0003E: overlay(0x34E0, 0); f__B4E0_0A86_000E_D3BB(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB520; emu_last_ip = 0x00D2; emu_last_length = 0x001C; emu_last_crc = 0xE198;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__00D6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__00DD;
l__00DD:
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
 * Decompiled function f__B520_00E3_0028_2188()
 *
 * @name f__B520_00E3_0028_2188
 * @implements B520:00E3:0028:2188 ()
 * @implements B520:0110:0004:893F
 *
 * Called From: 3520:0048:0005:0000
 * Called From: B520:0016:0019:6B99
 */
void f__B520_00E3_0028_2188()
{
l__00E3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x010B; emu_last_cs = 0xB520; emu_last_ip = 0x00EF; emu_last_length = 0x0028; emu_last_crc = 0x2188; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x36);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x34);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	goto l__0110;
l__0110:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0114_0016_52C9()
 *
 * @name f__B520_0114_0016_52C9
 * @implements B520:0114:0016:52C9 ()
 * @implements B520:012A:0054:E901
 * @implements B520:017E:0018:47C3
 * @implements B520:0196:005C:17B9
 * @implements B520:01F2:002D:3833
 * @implements B520:0201:001E:722F
 * @implements B520:021F:0004:893F
 *
 * Called From: 3520:0020:0005:0000
 */
void f__B520_0114_0016_52C9()
{
l__0114:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__012A:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_es, emu_bx, 0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xC) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0x1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__017E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0196); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__0196:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x11C5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x1A) == 0x0) goto l__01F2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = 0x3520;
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x3E;
	goto l__0201;
l__01F2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = 0x3520;
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x39;
l__0201:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x36);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x34);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x36) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x34) = emu_dx;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__021F;
l__021F:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0223_000E_38A3()
 *
 * @name f__B520_0223_000E_38A3
 * @implements B520:0223:000E:38A3 ()
 * @implements B520:0231:0004:BEB2
 *
 * Called From: 3520:002F:0005:0000
 */
void f__B520_0223_000E_38A3()
{
l__0223:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0231); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__0231:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_0235_0016_54C9()
 *
 * @name f__B520_0235_0016_54C9
 * @implements B520:0235:0016:54C9 ()
 * @implements B520:024B:00C4:DD47
 * @implements B520:030F:0071:C198
 * @implements B520:0380:000D:94A7
 * @implements B520:038D:000A:5E25
 * @implements B520:0397:0004:893F
 *
 * Called From: 3520:0025:0005:0000
 */
void f__B520_0235_0016_54C9()
{
l__0235:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__024B:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_es, emu_bx, 0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x28) = 0xA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x29) = 0xC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = 0xF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x27) = 0xC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x740;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x20;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x12) = 0x3520;
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x2A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x16) = 0x3520;
	emu_get_memory16(emu_es, emu_bx, 0x14) = 0x2A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = 0x3520;
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x43;
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x16;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x030F); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__030F:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_es, emu_bx, 0x36) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x34) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xE) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xF) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0380); f__B520_085F_003A_87ED();
l__0380:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x038D); f__B520_096E_003C_F7E4();
l__038D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0397;
l__0397:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_039B_001B_4BEB()
 *
 * @name f__B520_039B_001B_4BEB
 * @implements B520:039B:001B:4BEB ()
 * @implements B520:03B6:000D:A2A1
 * @implements B520:03C3:0004:BEB2
 *
 * Called From: 3520:0034:0005:0000
 */
void f__B520_039B_001B_4BEB()
{
l__039B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x03C5; emu_last_cs = 0xB520; emu_last_ip = 0x03A4; emu_last_length = 0x001B; emu_last_crc = 0x4BEB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x36));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x34));
	emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__03B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__03C3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Widget_Scrollbar_Scroll()
 *
 * @name emu_GUI_Widget_Scrollbar_Scroll
 * @implements B520:062C:0030:162A ()
 * @implements B520:065C:001C:557A
 * @implements B520:065E:001A:9DD2
 * @implements B520:0678:0014:131D
 * @implements B520:067A:0012:3B1E
 * @implements B520:068C:0011:2861
 * @implements B520:069D:0005:BC9A
 *
 * Called From: B520:03DB:0017:65D1
 * Called From: B520:03FB:0017:BA36
 * Called From: B520:0543:001A:447C
 */
void emu_GUI_Widget_Scrollbar_Scroll()
{
l__062C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_si);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xC) >= (int16)emu_si) goto l__065C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	goto l__065E;
l__065C:
	emu_ax = emu_si;
l__065E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xC) <= (int16)0x0) goto l__0678;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	goto l__067A;
l__0678:
	emu_xorw(&emu_ax, emu_ax);
l__067A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x068C); f__B520_096E_003C_F7E4();
l__068C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x069D); emu_GUI_Widget_ScrollBar_Draw();
l__069D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_085F_003A_87ED()
 *
 * @name f__B520_085F_003A_87ED
 * @implements B520:085F:003A:87ED ()
 * @implements B520:0899:0022:663C
 * @implements B520:08BB:0026:E858
 * @implements B520:08DD:0004:68F2
 * @implements B520:08E1:0005:8BCF
 *
 * Called From: B520:009D:001B:7C94
 * Called From: B520:037D:0071:C198
 */
void f__B520_085F_003A_87ED()
{
l__085F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == 0) goto l__08DD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x24)) goto l__0899;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	/* Unresolved jump */ emu_ip = 0x08A0; emu_last_cs = 0xB520; emu_last_ip = 0x0897; emu_last_length = 0x003A; emu_last_crc = 0x87ED; emu_call();
l__0899:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x24);
	emu_addw(&emu_ax, 0xFFFE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_cwd();
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__08BB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory16(emu_es, emu_bx, 0x4) = emu_si;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory8(emu_es, emu_bx, 0xF) = 0x1;
	}
l__08DD:
	emu_ax = emu_si;
	goto l__08E1;
l__08E1:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_08E6_0038_85A4()
 *
 * @name f__B520_08E6_0038_85A4
 * @implements B520:08E6:0038:85A4 ()
 * @implements B520:091E:0033:733E
 * @implements B520:0951:0013:BA50
 * @implements B520:0969:0005:8BCF
 *
 * Called From: B520:0602:000B:72B2
 * Called From: B520:0602:0023:A79B
 * Called From: B520:0602:0029:352D
 */
void f__B520_08E6_0038_85A4()
{
l__08E6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0964; emu_last_cs = 0xB520; emu_last_ip = 0x0903; emu_last_length = 0x0038; emu_last_crc = 0x85A4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x24)) goto l__091E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	/* Unresolved jump */ emu_ip = 0x0925; emu_last_cs = 0xB520; emu_last_ip = 0x091C; emu_last_length = 0x0038; emu_last_crc = 0x85A4; emu_call();
l__091E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x24);
	emu_addw(&emu_ax, 0xFFFE);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_cwd();
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x0951); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__0951:
	emu_cwd();
	emu_idivw(&emu_ax, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	goto l__0969;
l__0969:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B520_096E_003C_F7E4()
 *
 * @name f__B520_096E_003C_F7E4
 * @implements B520:096E:003C:F7E4 ()
 * @implements B520:09AA:003E:D22C
 * @implements B520:09E8:0008:082D
 * @implements B520:09F0:001E:489D
 * @implements B520:09F2:001C:F856
 * @implements B520:0A0A:0004:68F2
 * @implements B520:0A0E:0006:F7CE
 *
 * Called From: B520:00AA:000D:9A2C
 * Called From: B520:038A:000D:94A7
 * Called From: B520:0689:0012:3B1E
 * Called From: B520:0689:0014:131D
 */
void f__B520_096E_003C_F7E4()
{
l__096E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == 0) goto l__0A0A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x24)) goto l__09AA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	/* Unresolved jump */ emu_ip = 0x09B1; emu_last_cs = 0xB520; emu_last_ip = 0x09A8; emu_last_length = 0x003C; emu_last_crc = 0xF7E4; emu_call();
l__09AA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x24);
	emu_addw(&emu_ax, 0xFFFE);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__09F0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_cwd();
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x09E8); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__09E8:
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_si = emu_ax;
	goto l__09F2;
l__09F0:
	emu_xorw(&emu_si, emu_si);
l__09F2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x6) != emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory16(emu_es, emu_bx, 0x6) = emu_si;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory8(emu_es, emu_bx, 0xF) = 0x1;
	}
l__0A0A:
	emu_ax = emu_si;
	goto l__0A0E;
l__0A0E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
