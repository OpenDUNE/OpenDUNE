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
	emu_push(0x0019); emu_GUI_Get_Scrollbar_Position();
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
		case 0x34E0003E: overlay(0x34E0, 0); emu_GUI_Mentat_ScrollBar_Draw(); break;
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
 * Decompiled function emu_Tools_Free_Wrapper()
 *
 * @name emu_Tools_Free_Wrapper
 * @implements B520:0223:000E:38A3 ()
 * @implements B520:0231:0004:BEB2
 *
 * Called From: 3520:002F:0005:0000
 */
void emu_Tools_Free_Wrapper()
{
l__0223:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0231); emu_cs = 0x23E1; emu_Tools_Free();
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
	emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
l__03B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x23E1; emu_Tools_Free();
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
