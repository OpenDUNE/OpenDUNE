/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CD_0000_0011_95D0()
 *
 * @name f__B4CD_0000_0011_95D0
 * @implements B4CD:0000:0011:95D0 ()
 *
 * Called From: 34CD:00B1:0005:0000
 * Called From: B4CD:018C:0010:C6FC
 * Called From: B4CD:01A2:0011:3CAE
 * Called From: B4CD:01B7:0010:06F1
 * Called From: B4CD:0485:000C:A511
 * Called From: B4CD:04BB:000D:9C57
 * Called From: B4CD:04D1:0010:846B
 * Called From: B4CD:0548:0010:C4CD
 * Called From: B4CD:0573:0010:04C2
 * Called From: B4CD:0D68:005B:9E2E
 * Called From: B4CD:0D68:005E:A834
 * Called From: B4CD:0D68:000B:E432
 * Called From: B4CD:14BE:0040:C694
 * Called From: B4CD:14BE:0043:D5C5
 * Called From: B4CD:14BE:0027:F865
 * Called From: B4CD:1D4F:000D:E1A6
 */
void f__B4CD_0000_0011_95D0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4CD_001A_000F_90B4(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0011); f__B4CD_1B5B_0011_08DE();
	f__B4CD_0011_0009_77F5();
}

/**
 * Decompiled function f__B4CD_0011_0009_77F5()
 *
 * @name f__B4CD_0011_0009_77F5
 * @implements B4CD:0011:0009:77F5 ()
 *
 * Called From: B4CD:0011:0011:95D0
 */
void f__B4CD_0011_0009_77F5()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4CD_001A_000F_90B4(); return; }
	f__B4CD_009A_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_001A_000F_90B4()
 *
 * @name f__B4CD_001A_000F_90B4
 * @implements B4CD:001A:000F:90B4 ()
 *
 * Called From: B4CD:0008:0011:95D0
 * Called From: B4CD:0015:0009:77F5
 */
void f__B4CD_001A_000F_90B4()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_bx, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4CD_0029_001E_2BA2(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx,  0x9D);
	switch (emu_ip) {
		case 0x0029: f__B4CD_0029_001E_2BA2(); return;
		case 0x0083: f__B4CD_0083_0017_7C52(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0024; emu_last_length = 0x000F; emu_last_crc = 0x90B4;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4CD_0029_001E_2BA2()
 *
 * @name f__B4CD_0029_001E_2BA2
 * @implements B4CD:0029:001E:2BA2 ()
 *
 * Called From: B4CD:0020:000F:90B4
 * Called From: B4CD:0024:000F:90B4
 */
void f__B4CD_0029_001E_2BA2()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx,  0x8DE5));
	emu_movb(&emu_ah, 0x0);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cl, 0x7);
	emu_movw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4CD_0048_003B_D435(); return; }
	f__B4CD_0081_0002_CBBA(); return;
}

/**
 * Decompiled function f__B4CD_0048_003B_D435()
 *
 * @name f__B4CD_0048_003B_D435
 * @implements B4CD:0048:003B:D435 ()
 *
 * Called From: B4CD:0043:001E:2BA2
 */
void f__B4CD_0048_003B_D435()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_push(emu_si);
	emu_movw(&emu_si, 0x2462);
	emu_movw(&emu_cx, 0x9);
	emu_push(emu_cx);
	emu_lodsw(emu_ds);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax, 0xFFF);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_cl, 0x3);
	emu_shrw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_al);
	emu_andb(&emu_cl, 0x7);
	emu_movw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, emu_cl);
	emu_movw(&emu_ax, emu_dx);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8FE5), emu_dl);
	emu_andb(&emu_dl, emu_get_memory8(emu_ds, emu_bx,  0x95E5));
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x3A08), emu_dx);
	emu_pop(&emu_cx);
	if (--emu_cx != 0) { f__B4CD_0053_0030_E045(); return; }
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8DE5), emu_al);
	emu_pop(&emu_si);
	/* Unresolved jump */ emu_ip = 0x009A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0081; emu_last_length = 0x003B; emu_last_crc = 0xD435; emu_call();
}

/**
 * Decompiled function f__B4CD_0053_0030_E045()
 *
 * @name f__B4CD_0053_0030_E045
 * @implements B4CD:0053:0030:E045 ()
 *
 * Called From: B4CD:007A:003B:D435
 * Called From: B4CD:007A:0030:E045
 */
void f__B4CD_0053_0030_E045()
{
	emu_push(emu_cx);
	emu_lodsw(emu_ds);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax, 0xFFF);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_cl, 0x3);
	emu_shrw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_al);
	emu_andb(&emu_cl, 0x7);
	emu_movw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, emu_cl);
	emu_movw(&emu_ax, emu_dx);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8FE5), emu_dl);
	emu_andb(&emu_dl, emu_get_memory8(emu_ds, emu_bx,  0x95E5));
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x3A08), emu_dx);
	emu_pop(&emu_cx);
	if (--emu_cx != 0) { f__B4CD_0053_0030_E045(); return; }
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8DE5), emu_al);
	emu_pop(&emu_si);
	f__B4CD_009A_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_0081_0002_CBBA()
 *
 * @name f__B4CD_0081_0002_CBBA
 * @implements B4CD:0081:0002:CBBA ()
 *
 * Called From: B4CD:0045:001E:2BA2
 */
void f__B4CD_0081_0002_CBBA()
{
	f__B4CD_009A_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_0083_0017_7C52()
 *
 * @name f__B4CD_0083_0017_7C52
 * @implements B4CD:0083:0017:7C52 ()
 *
 * Called From: B4CD:0024:000F:90B4
 */
void f__B4CD_0083_0017_7C52()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8FE5), emu_al);
	f__B4CD_009A_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_009A_0003_2E57()
 *
 * @name f__B4CD_009A_0003_2E57
 * @implements B4CD:009A:0003:2E57 ()
 *
 * Called From: B4CD:0017:0009:77F5
 * Called From: B4CD:0081:0030:E045
 * Called From: B4CD:0081:0002:CBBA
 * Called From: B4CD:0098:0017:7C52
 */
void f__B4CD_009A_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_00A5_0016_24FA()
 *
 * @name f__B4CD_00A5_0016_24FA
 * @implements B4CD:00A5:0016:24FA ()
 *
 * Called From: 34CD:006B:0005:0000
 */
void f__B4CD_00A5_0016_24FA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x0F3F; f__0F3F_0076_0008_A51E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_00BB_000F_DDCF();
}

/**
 * Decompiled function f__B4CD_00BB_000F_DDCF()
 *
 * @name f__B4CD_00BB_000F_DDCF
 * @implements B4CD:00BB:000F:DDCF ()
 *
 * Called From: B4CD:00BB:0016:24FA
 */
void f__B4CD_00BB_000F_DDCF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x0F3F; f__0F3F_007E_0008_A4DE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_00CA_000A_13D1();
}

/**
 * Decompiled function f__B4CD_00CA_000A_13D1()
 *
 * @name f__B4CD_00CA_000A_13D1
 * @implements B4CD:00CA:000A:13D1 ()
 *
 * Called From: B4CD:00CA:000F:DDCF
 */
void f__B4CD_00CA_000A_13D1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x00D4); f__B4CD_17DC_0019_CB46();
	f__B4CD_00D4_0033_40B9();
}

/**
 * Decompiled function f__B4CD_00D4_0033_40B9()
 *
 * @name f__B4CD_00D4_0033_40B9
 * @implements B4CD:00D4:0033:40B9 ()
 *
 * Called From: B4CD:00D4:000A:13D1
 */
void f__B4CD_00D4_0033_40B9()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x2474));
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x2484));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_di, 0x4000);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x00FF; emu_last_cs = 0xB4CD; emu_last_ip = 0x00F6; emu_last_length = 0x0033; emu_last_crc = 0x40B9; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_0107_0009_A8DF(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved jump */ emu_ip = 0x0114; emu_last_cs = 0xB4CD; emu_last_ip = 0x0105; emu_last_length = 0x0033; emu_last_crc = 0x40B9; emu_call();
}

/**
 * Decompiled function f__B4CD_0105_0002_C6BA()
 *
 * @name f__B4CD_0105_0002_C6BA
 * @implements B4CD:0105:0002:C6BA ()
 *
 * Called From: B4CD:0112:0004:239F
 */
void f__B4CD_0105_0002_C6BA()
{
	f__B4CD_0114_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0107_0009_A8DF()
 *
 * @name f__B4CD_0107_0009_A8DF
 * @implements B4CD:0107:0009:A8DF ()
 *
 * Called From: B4CD:00FD:0033:40B9
 */
void f__B4CD_0107_0009_A8DF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0110); emu_cs = 0x0F3F; f__0F3F_002C_000B_51FA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0110_0004_239F();
}

/**
 * Decompiled function f__B4CD_0110_0004_239F()
 *
 * @name f__B4CD_0110_0004_239F
 * @implements B4CD:0110:0004:239F ()
 *
 * Called From: B4CD:0110:0009:A8DF
 */
void f__B4CD_0110_0004_239F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4CD_0105_0002_C6BA(); return;
}

/**
 * Decompiled function f__B4CD_0114_0006_F7CE()
 *
 * @name f__B4CD_0114_0006_F7CE
 * @implements B4CD:0114:0006:F7CE ()
 *
 * Called From: B4CD:0105:0002:C6BA
 */
void f__B4CD_0114_0006_F7CE()
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
 * Decompiled function f__B4CD_011A_0011_E66F()
 *
 * @name f__B4CD_011A_0011_E66F
 * @implements B4CD:011A:0011:E66F ()
 *
 * Called From: B4CD:0215:0027:25FD
 */
void f__B4CD_011A_0011_E66F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_012B_004D_6862(); return; }
	/* Unresolved jump */ emu_ip = 0x017C; emu_last_cs = 0xB4CD; emu_last_ip = 0x0129; emu_last_length = 0x0011; emu_last_crc = 0xE66F; emu_call();
}

/**
 * Decompiled function f__B4CD_012B_004D_6862()
 *
 * @name f__B4CD_012B_004D_6862
 * @implements B4CD:012B:004D:6862 ()
 *
 * Called From: B4CD:0127:0011:E66F
 */
void f__B4CD_012B_004D_6862()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4CD_013C_003C_41EC(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x1000);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E8));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x2496));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x2494));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x38));
	emu_push(emu_cs);
	emu_push(0x0178); f__B4CD_057B_001A_D066();
	f__B4CD_0178_0007_C555();
}

/**
 * Decompiled function f__B4CD_013C_003C_41EC()
 *
 * @name f__B4CD_013C_003C_41EC
 * @implements B4CD:013C:003C:41EC ()
 *
 * Called From: B4CD:012D:004D:6862
 */
void f__B4CD_013C_003C_41EC()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x2496));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x2494));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x38));
	emu_push(emu_cs);
	emu_push(0x0178); f__B4CD_057B_001A_D066();
	f__B4CD_0178_0007_C555();
}

/**
 * Decompiled function f__B4CD_0178_0007_C555()
 *
 * @name f__B4CD_0178_0007_C555
 * @implements B4CD:0178:0007:C555 ()
 *
 * Called From: B4CD:0178:004D:6862
 * Called From: B4CD:0178:003C:41EC
 */
void f__B4CD_0178_0007_C555()
{
	emu_addws(&emu_sp, 0xE);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_017F_0010_C6FC()
 *
 * @name f__B4CD_017F_0010_C6FC
 * @implements B4CD:017F:0010:C6FC ()
 *
 * Called From: 34CD:002F:0005:0000
 */
void f__B4CD_017F_0010_C6FC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x018F); f__B4CD_0000_0011_95D0();
	f__B4CD_018F_0005_6143();
}

/**
 * Decompiled function f__B4CD_018F_0005_6143()
 *
 * @name f__B4CD_018F_0005_6143
 * @implements B4CD:018F:0005:6143 ()
 *
 * Called From: B4CD:018F:0010:C6FC
 */
void f__B4CD_018F_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0194_0011_3CAE()
 *
 * @name f__B4CD_0194_0011_3CAE
 * @implements B4CD:0194:0011:3CAE ()
 *
 * Called From: 34CD:002A:0005:0000
 */
void f__B4CD_0194_0011_3CAE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01A5); f__B4CD_0000_0011_95D0();
	f__B4CD_01A5_0005_6143();
}

/**
 * Decompiled function f__B4CD_01A5_0005_6143()
 *
 * @name f__B4CD_01A5_0005_6143
 * @implements B4CD:01A5:0005:6143 ()
 *
 * Called From: B4CD:01A5:0011:3CAE
 */
void f__B4CD_01A5_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01AA_0010_06F1()
 *
 * @name f__B4CD_01AA_0010_06F1
 * @implements B4CD:01AA:0010:06F1 ()
 *
 * Called From: 34CD:0048:0005:0000
 */
void f__B4CD_01AA_0010_06F1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01BA); f__B4CD_0000_0011_95D0();
	f__B4CD_01BA_0005_6143();
}

/**
 * Decompiled function f__B4CD_01BA_0005_6143()
 *
 * @name f__B4CD_01BA_0005_6143
 * @implements B4CD:01BA:0005:6143 ()
 *
 * Called From: B4CD:01BA:0010:06F1
 */
void f__B4CD_01BA_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01BF_0016_E78F()
 *
 * @name f__B4CD_01BF_0016_E78F
 * @implements B4CD:01BF:0016:E78F ()
 *
 * Called From: 34CD:008E:0005:0000
 */
void f__B4CD_01BF_0016_E78F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_01D5_000E_65FA(); return; }
	f__B4CD_0402_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_01D5_000E_65FA()
 *
 * @name f__B4CD_01D5_000E_65FA
 * @implements B4CD:01D5:000E:65FA ()
 *
 * Called From: B4CD:01D0:0016:E78F
 */
void f__B4CD_01D5_000E_65FA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x4);
	if (emu_flags.zf) { f__B4CD_01E3_000E_E5FB(); return; }
	f__B4CD_0402_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_01E3_000E_E5FB()
 *
 * @name f__B4CD_01E3_000E_E5FB
 * @implements B4CD:01E3:000E:E5FB ()
 *
 * Called From: B4CD:01DE:000E:65FA
 */
void f__B4CD_01E3_000E_E5FB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x1);
	if (!emu_flags.zf) { f__B4CD_01F1_0027_25FD(); return; }
	f__B4CD_0402_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_01F1_0027_25FD()
 *
 * @name f__B4CD_01F1_0027_25FD
 * @implements B4CD:01F1:0027:25FD ()
 *
 * Called From: B4CD:01EC:000E:E5FB
 */
void f__B4CD_01F1_0027_25FD()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx,  0x3C), 0x4);
	if (!emu_flags.zf) { f__B4CD_021E_001C_3ED6(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0218); f__B4CD_011A_0011_E66F();
	f__B4CD_0218_0006_77BB();
}

/**
 * Decompiled function f__B4CD_0218_0006_77BB()
 *
 * @name f__B4CD_0218_0006_77BB
 * @implements B4CD:0218:0006:77BB ()
 *
 * Called From: B4CD:0218:0027:25FD
 */
void f__B4CD_0218_0006_77BB()
{
	emu_addws(&emu_sp, 0x6);
	f__B4CD_0402_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_021E_001C_3ED6()
 *
 * @name f__B4CD_021E_001C_3ED6
 * @implements B4CD:021E:001C:3ED6 ()
 *
 * Called From: B4CD:020B:0027:25FD
 */
void f__B4CD_021E_001C_3ED6()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_023A_0015_6D4D();
}

/**
 * Decompiled function f__B4CD_023A_0015_6D4D()
 *
 * @name f__B4CD_023A_0015_6D4D
 * @implements B4CD:023A:0015:6D4D ()
 *
 * Called From: B4CD:023A:001C:3ED6
 */
void f__B4CD_023A_0015_6D4D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xA));
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_024F_0030_FE42();
}

/**
 * Decompiled function f__B4CD_024F_0030_FE42()
 *
 * @name f__B4CD_024F_0030_FE42
 * @implements B4CD:024F:0030:FE42 ()
 *
 * Called From: B4CD:024F:0015:6D4D
 */
void f__B4CD_024F_0030_FE42()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0270_000F_00DA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__B4CD_0281_000F_10BA(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x027F); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_027F_0002_C7BA();
}

/**
 * Decompiled function f__B4CD_0270_000F_00DA()
 *
 * @name f__B4CD_0270_000F_00DA
 * @implements B4CD:0270:000F:00DA ()
 *
 * Called From: B4CD:0260:0030:FE42
 */
void f__B4CD_0270_000F_00DA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x027F); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_027F_0002_C7BA();
}

/**
 * Decompiled function f__B4CD_027F_0002_C7BA()
 *
 * @name f__B4CD_027F_0002_C7BA
 * @implements B4CD:027F:0002:C7BA ()
 *
 * Called From: B4CD:027F:000F:00DA
 * Called From: B4CD:027F:0030:FE42
 */
void f__B4CD_027F_0002_C7BA()
{
	f__B4CD_0290_000B_394E(); return;
}

/**
 * Decompiled function f__B4CD_0281_000F_10BA()
 *
 * @name f__B4CD_0281_000F_10BA
 * @implements B4CD:0281:000F:10BA ()
 *
 * Called From: B4CD:026E:0030:FE42
 */
void f__B4CD_0281_000F_10BA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0290_000B_394E();
}

/**
 * Decompiled function f__B4CD_0290_000B_394E()
 *
 * @name f__B4CD_0290_000B_394E
 * @implements B4CD:0290:000B:394E ()
 *
 * Called From: B4CD:027F:0002:C7BA
 * Called From: B4CD:0290:000F:10BA
 */
void f__B4CD_0290_000B_394E()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_di, 0x1);
	if (emu_flags.zf) { f__B4CD_029B_000F_2011(); return; }
	f__B4CD_032A_0076_756F(); return;
}

/**
 * Decompiled function f__B4CD_029B_000F_2011()
 *
 * @name f__B4CD_029B_000F_2011
 * @implements B4CD:029B:000F:2011 ()
 *
 * Called From: B4CD:0296:000B:394E
 */
void f__B4CD_029B_000F_2011()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x02AA); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_02AA_0008_9688();
}

/**
 * Decompiled function f__B4CD_02AA_0008_9688()
 *
 * @name f__B4CD_02AA_0008_9688
 * @implements B4CD:02AA:0008:9688 ()
 *
 * Called From: B4CD:02AA:000F:2011
 */
void f__B4CD_02AA_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02B2); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_02B2_000D_DC77();
}

/**
 * Decompiled function f__B4CD_02B2_000D_DC77()
 *
 * @name f__B4CD_02B2_000D_DC77
 * @implements B4CD:02B2:000D:DC77 ()
 *
 * Called From: B4CD:02B2:0008:9688
 */
void f__B4CD_02B2_000D_DC77()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4CD_02E6_0007_65F9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02BF); f__B4CD_1BC4_0013_1AB3();
	f__B4CD_02BF_0023_1CEB();
}

/**
 * Decompiled function f__B4CD_02BF_0023_1CEB()
 *
 * @name f__B4CD_02BF_0023_1CEB
 * @implements B4CD:02BF:0023:1CEB ()
 *
 * Called From: B4CD:02BF:000D:DC77
 */
void f__B4CD_02BF_0023_1CEB()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4CD_02E6_0007_65F9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x19);
	if (emu_flags.zf) { f__B4CD_02E6_0007_65F9(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xA));
	emu_push(emu_cs);
	emu_push(0x02E2); f__B4CD_07F4_0013_6862();
	f__B4CD_02E2_000B_4349();
}

/**
 * Decompiled function f__B4CD_02E2_000B_4349()
 *
 * @name f__B4CD_02E2_000B_4349
 * @implements B4CD:02E2:000B:4349 ()
 *
 * Called From: B4CD:02E2:0023:1CEB
 */
void f__B4CD_02E2_000B_4349()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02ED); f__B4CD_1086_0040_F11C();
	f__B4CD_02ED_00B3_20DA();
}

/**
 * Decompiled function f__B4CD_02E6_0007_65F9()
 *
 * @name f__B4CD_02E6_0007_65F9
 * @implements B4CD:02E6:0007:65F9 ()
 *
 * Called From: B4CD:02B6:000D:DC77
 * Called From: B4CD:02C3:0023:1CEB
 * Called From: B4CD:02CD:0023:1CEB
 */
void f__B4CD_02E6_0007_65F9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02ED); f__B4CD_1086_0040_F11C();
	f__B4CD_02ED_00B3_20DA();
}

/**
 * Decompiled function f__B4CD_02ED_00B3_20DA()
 *
 * @name f__B4CD_02ED_00B3_20DA
 * @implements B4CD:02ED:00B3:20DA ()
 *
 * Called From: B4CD:02ED:0007:65F9
 * Called From: B4CD:02ED:000B:4349
 */
void f__B4CD_02ED_00B3_20DA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4CD_032A_0076_756F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incb(&emu_al);
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x3), emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x033B; emu_last_cs = 0xB4CD; emu_last_ip = 0x032C; emu_last_length = 0x00B3; emu_last_crc = 0x20DA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x1000);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x48);
	if (!emu_flags.zf) { f__B4CD_037A_0026_D934(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	if (!emu_flags.zf) { f__B4CD_037F_0021_6328(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x4F), 0x5);
	if (!emu_flags.zf) { f__B4CD_037F_0021_6328(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_D066();
	f__B4CD_03A0_0034_2C7C();
}

/**
 * Decompiled function f__B4CD_032A_0076_756F()
 *
 * @name f__B4CD_032A_0076_756F
 * @implements B4CD:032A:0076:756F ()
 *
 * Called From: B4CD:0298:000B:394E
 * Called From: B4CD:02FB:00B3:20DA
 */
void f__B4CD_032A_0076_756F()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4CD_033B_0065_61FC(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x1000);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x48);
	if (!emu_flags.zf) { f__B4CD_037A_0026_D934(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	if (!emu_flags.zf) { f__B4CD_037F_0021_6328(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x4F), 0x5);
	if (!emu_flags.zf) { f__B4CD_037F_0021_6328(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_D066();
	f__B4CD_03A0_0034_2C7C();
}

/**
 * Decompiled function f__B4CD_033B_0065_61FC()
 *
 * @name f__B4CD_033B_0065_61FC
 * @implements B4CD:033B:0065:61FC ()
 *
 * Called From: B4CD:032C:0076:756F
 */
void f__B4CD_033B_0065_61FC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x48);
	if (!emu_flags.zf) { f__B4CD_037A_0026_D934(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	if (!emu_flags.zf) { f__B4CD_037F_0021_6328(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x4F), 0x5);
	if (!emu_flags.zf) { f__B4CD_037F_0021_6328(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_D066();
	f__B4CD_03A0_0034_2C7C();
}

/**
 * Decompiled function f__B4CD_037A_0026_D934()
 *
 * @name f__B4CD_037A_0026_D934
 * @implements B4CD:037A:0026:D934 ()
 *
 * Called From: B4CD:0364:0065:61FC
 * Called From: B4CD:0364:0076:756F
 * Called From: B4CD:0364:00B3:20DA
 */
void f__B4CD_037A_0026_D934()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_D066();
	f__B4CD_03A0_0034_2C7C();
}

/**
 * Decompiled function f__B4CD_037F_0021_6328()
 *
 * @name f__B4CD_037F_0021_6328
 * @implements B4CD:037F:0021:6328 ()
 *
 * Called From: B4CD:036E:00B3:20DA
 * Called From: B4CD:036E:0076:756F
 * Called From: B4CD:036E:0065:61FC
 * Called From: B4CD:0378:0076:756F
 * Called From: B4CD:0378:00B3:20DA
 * Called From: B4CD:0378:0065:61FC
 */
void f__B4CD_037F_0021_6328()
{
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_D066();
	f__B4CD_03A0_0034_2C7C();
}

/**
 * Decompiled function f__B4CD_03A0_0034_2C7C()
 *
 * @name f__B4CD_03A0_0034_2C7C
 * @implements B4CD:03A0:0034:2C7C ()
 *
 * Called From: B4CD:03A0:0021:6328
 * Called From: B4CD:03A0:0026:D934
 * Called From: B4CD:03A0:00B3:20DA
 * Called From: B4CD:03A0:0076:756F
 * Called From: B4CD:03A0:0065:61FC
 */
void f__B4CD_03A0_0034_2C7C()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x19);
	if (!emu_flags.zf) { f__B4CD_0402_0006_F7CE(); return; }
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x5C));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x5A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03D4); f__B4CD_057B_001A_D066();
	f__B4CD_03D4_002A_4D41();
}

/**
 * Decompiled function f__B4CD_03D4_002A_4D41()
 *
 * @name f__B4CD_03D4_002A_4D41
 * @implements B4CD:03D4:002A:4D41 ()
 *
 * Called From: B4CD:03D4:0034:2C7C
 */
void f__B4CD_03D4_002A_4D41()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x60));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x5E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03FE); f__B4CD_057B_001A_D066();
	f__B4CD_03FE_000A_9793();
}

/**
 * Decompiled function f__B4CD_03FE_000A_9793()
 *
 * @name f__B4CD_03FE_000A_9793
 * @implements B4CD:03FE:000A:9793 ()
 *
 * Called From: B4CD:03FE:002A:4D41
 */
void f__B4CD_03FE_000A_9793()
{
	emu_addws(&emu_sp, 0xE);
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
 * Decompiled function f__B4CD_0402_0006_F7CE()
 *
 * @name f__B4CD_0402_0006_F7CE
 * @implements B4CD:0402:0006:F7CE ()
 *
 * Called From: B4CD:01D2:0016:E78F
 * Called From: B4CD:01E0:000E:65FA
 * Called From: B4CD:01EE:000E:E5FB
 * Called From: B4CD:021B:0006:77BB
 * Called From: B4CD:03AC:0034:2C7C
 */
void f__B4CD_0402_0006_F7CE()
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
 * Decompiled function f__B4CD_0408_001F_C54A()
 *
 * @name f__B4CD_0408_001F_C54A
 * @implements B4CD:0408:001F:C54A ()
 *
 * Called From: 34CD:0039:0005:0000
 */
void f__B4CD_0408_001F_C54A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	if (emu_flags.zf) { f__B4CD_0476_0006_DF2B(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0427); f__B4CD_10EE_0039_EC73();
	f__B4CD_0427_001C_06C2();
}

/**
 * Decompiled function f__B4CD_0427_001C_06C2()
 *
 * @name f__B4CD_0427_001C_06C2
 * @implements B4CD:0427:001C:06C2 ()
 *
 * Called From: B4CD:0427:001F:C54A
 */
void f__B4CD_0427_001C_06C2()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4CD_0476_0006_DF2B(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__B4CD_0476_0006_DF2B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x49));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0443_0039_8ACB();
}

/**
 * Decompiled function f__B4CD_0443_0039_8ACB()
 *
 * @name f__B4CD_0443_0039_8ACB
 * @implements B4CD:0443:0039:8ACB ()
 *
 * Called From: B4CD:0443:001C:06C2
 */
void f__B4CD_0443_0039_8ACB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (!emu_flags.zf) { f__B4CD_0454_0028_B587(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x40);
	if (emu_flags.zf) { f__B4CD_0476_0006_DF2B(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x3), 0x0);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0xEF);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_047C_000C_A511();
}

/**
 * Decompiled function f__B4CD_0454_0028_B587()
 *
 * @name f__B4CD_0454_0028_B587
 * @implements B4CD:0454:0028:B587 ()
 *
 * Called From: B4CD:0447:0039:8ACB
 */
void f__B4CD_0454_0028_B587()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x3), 0x0);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0xEF);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_047C_000C_A511();
}

/**
 * Decompiled function f__B4CD_0476_0006_DF2B()
 *
 * @name f__B4CD_0476_0006_DF2B
 * @implements B4CD:0476:0006:DF2B ()
 *
 * Called From: B4CD:0420:001F:C54A
 * Called From: B4CD:042C:001C:06C2
 * Called From: B4CD:0431:001C:06C2
 * Called From: B4CD:0452:0039:8ACB
 */
void f__B4CD_0476_0006_DF2B()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_047C_000C_A511();
}

/**
 * Decompiled function f__B4CD_047C_000C_A511()
 *
 * @name f__B4CD_047C_000C_A511
 * @implements B4CD:047C:000C:A511 ()
 *
 * Called From: B4CD:047C:0006:DF2B
 * Called From: B4CD:047C:0028:B587
 * Called From: B4CD:047C:0039:8ACB
 */
void f__B4CD_047C_000C_A511()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0488); f__B4CD_0000_0011_95D0();
	f__B4CD_0488_0006_4475();
}

/**
 * Decompiled function f__B4CD_0488_0006_4475()
 *
 * @name f__B4CD_0488_0006_4475
 * @implements B4CD:0488:0006:4475 ()
 *
 * Called From: B4CD:0488:000C:A511
 */
void f__B4CD_0488_0006_4475()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_048E_0012_3E9E()
 *
 * @name f__B4CD_048E_0012_3E9E
 * @implements B4CD:048E:0012:3E9E ()
 *
 * Called From: 34CD:0043:0005:0000
 */
void f__B4CD_048E_0012_3E9E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_04A0_0008_A0B3();
}

/**
 * Decompiled function f__B4CD_04A0_0008_A0B3()
 *
 * @name f__B4CD_04A0_0008_A0B3
 * @implements B4CD:04A0:0008:A0B3 ()
 *
 * Called From: B4CD:04A0:0012:3E9E
 */
void f__B4CD_04A0_0008_A0B3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04A8); f__B4CD_1269_0019_A3E5();
	f__B4CD_04A8_0009_86D1();
}

/**
 * Decompiled function f__B4CD_04A8_0009_86D1()
 *
 * @name f__B4CD_04A8_0009_86D1
 * @implements B4CD:04A8:0009:86D1 ()
 *
 * Called From: B4CD:04A8:0008:A0B3
 */
void f__B4CD_04A8_0009_86D1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_04B1_000D_9C57();
}

/**
 * Decompiled function f__B4CD_04B1_000D_9C57()
 *
 * @name f__B4CD_04B1_000D_9C57
 * @implements B4CD:04B1:000D:9C57 ()
 *
 * Called From: B4CD:04B1:0009:86D1
 */
void f__B4CD_04B1_000D_9C57()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04BE); f__B4CD_0000_0011_95D0();
	f__B4CD_04BE_0006_4475();
}

/**
 * Decompiled function f__B4CD_04BE_0006_4475()
 *
 * @name f__B4CD_04BE_0006_4475
 * @implements B4CD:04BE:0006:4475 ()
 *
 * Called From: B4CD:04BE:000D:9C57
 */
void f__B4CD_04BE_0006_4475()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_04C4_0010_846B()
 *
 * @name f__B4CD_04C4_0010_846B
 * @implements B4CD:04C4:0010:846B ()
 *
 * Called From: 34CD:0020:0005:0000
 */
void f__B4CD_04C4_0010_846B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x04D4); f__B4CD_0000_0011_95D0();
	f__B4CD_04D4_0005_6143();
}

/**
 * Decompiled function f__B4CD_04D4_0005_6143()
 *
 * @name f__B4CD_04D4_0005_6143
 * @implements B4CD:04D4:0005:6143 ()
 *
 * Called From: B4CD:04D4:0010:846B
 */
void f__B4CD_04D4_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_04D9_0011_E9EF()
 *
 * @name f__B4CD_04D9_0011_E9EF
 * @implements B4CD:04D9:0011:E9EF ()
 *
 * Called From: 34CD:0066:0005:0000
 */
void f__B4CD_04D9_0011_E9EF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_04EA_0011_EEF1(); return; }
	/* Unresolved jump */ emu_ip = 0x0538; emu_last_cs = 0xB4CD; emu_last_ip = 0x04E8; emu_last_length = 0x0011; emu_last_crc = 0xE9EF; emu_call();
}

/**
 * Decompiled function f__B4CD_04EA_0011_EEF1()
 *
 * @name f__B4CD_04EA_0011_EEF1
 * @implements B4CD:04EA:0011:EEF1 ()
 *
 * Called From: B4CD:04E6:0011:E9EF
 */
void f__B4CD_04EA_0011_EEF1()
{
	emu_cmpws(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B4CD_04FB_0009_B617(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx,  0x7), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04FB; emu_last_cs = 0xB4CD; emu_last_ip = 0x04F7; emu_last_length = 0x0011; emu_last_crc = 0xEEF1; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0538; emu_last_cs = 0xB4CD; emu_last_ip = 0x04F9; emu_last_length = 0x0011; emu_last_crc = 0xEEF1; emu_call();
}

/**
 * Decompiled function f__B4CD_04FB_0009_B617()
 *
 * @name f__B4CD_04FB_0009_B617
 * @implements B4CD:04FB:0009:B617 ()
 *
 * Called From: B4CD:04ED:0011:EEF1
 */
void f__B4CD_04FB_0009_B617()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4CD_0504_0030_CB24(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4CD_0506_002E_4B16(); return;
}

/**
 * Decompiled function f__B4CD_0504_0030_CB24()
 *
 * @name f__B4CD_0504_0030_CB24
 * @implements B4CD:0504:0030:CB24 ()
 *
 * Called From: B4CD:04FD:0009:B617
 */
void f__B4CD_0504_0030_CB24()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x7), emu_al);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24AE));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24AC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x10));
	emu_movw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0534); f__B4CD_057B_001A_D066();
	f__B4CD_0534_0007_C555();
}

/**
 * Decompiled function f__B4CD_0506_002E_4B16()
 *
 * @name f__B4CD_0506_002E_4B16
 * @implements B4CD:0506:002E:4B16 ()
 *
 * Called From: B4CD:0502:0009:B617
 */
void f__B4CD_0506_002E_4B16()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx,  0x7), emu_al);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24AE));
	emu_push(emu_get_memory16(emu_ds, emu_bx,  0x24AC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0x10));
	emu_movw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0534); f__B4CD_057B_001A_D066();
	f__B4CD_0534_0007_C555();
}

/**
 * Decompiled function f__B4CD_0534_0007_C555()
 *
 * @name f__B4CD_0534_0007_C555
 * @implements B4CD:0534:0007:C555 ()
 *
 * Called From: B4CD:0534:002E:4B16
 * Called From: B4CD:0534:0030:CB24
 */
void f__B4CD_0534_0007_C555()
{
	emu_addws(&emu_sp, 0xE);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_053B_0010_C4CD()
 *
 * @name f__B4CD_053B_0010_C4CD
 * @implements B4CD:053B:0010:C4CD ()
 *
 * Called From: 34CD:003E:0005:0000
 */
void f__B4CD_053B_0010_C4CD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x054B); f__B4CD_0000_0011_95D0();
	f__B4CD_054B_0005_6143();
}

/**
 * Decompiled function f__B4CD_054B_0005_6143()
 *
 * @name f__B4CD_054B_0005_6143
 * @implements B4CD:054B:0005:6143 ()
 *
 * Called From: B4CD:054B:0010:C4CD
 */
void f__B4CD_054B_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0566_0010_04C2()
 *
 * @name f__B4CD_0566_0010_04C2
 * @implements B4CD:0566:0010:04C2 ()
 *
 * Called From: 34CD:0025:0005:0000
 */
void f__B4CD_0566_0010_04C2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0576); f__B4CD_0000_0011_95D0();
	f__B4CD_0576_0005_6143();
}

/**
 * Decompiled function f__B4CD_0576_0005_6143()
 *
 * @name f__B4CD_0576_0005_6143
 * @implements B4CD:0576:0005:6143 ()
 *
 * Called From: B4CD:0576:0010:04C2
 */
void f__B4CD_0576_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_057B_001A_D066()
 *
 * @name f__B4CD_057B_001A_D066
 * @implements B4CD:057B:001A:D066 ()
 *
 * Called From: B4CD:0175:004D:6862
 * Called From: B4CD:0175:003C:41EC
 * Called From: B4CD:039D:0021:6328
 * Called From: B4CD:039D:0026:D934
 * Called From: B4CD:039D:00B3:20DA
 * Called From: B4CD:039D:0076:756F
 * Called From: B4CD:039D:0065:61FC
 * Called From: B4CD:03D1:0034:2C7C
 * Called From: B4CD:03FB:002A:4D41
 * Called From: B4CD:0531:002E:4B16
 * Called From: B4CD:0531:0030:CB24
 */
void f__B4CD_057B_001A_D066()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0592; emu_last_cs = 0xB4CD; emu_last_ip = 0x0588; emu_last_length = 0x001A; emu_last_crc = 0xD066; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_0595_0009_902D(); return; }
	f__B4CD_074A_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0595_0009_902D()
 *
 * @name f__B4CD_0595_0009_902D
 * @implements B4CD:0595:0009:902D ()
 *
 * Called From: B4CD:0590:001A:D066
 */
void f__B4CD_0595_0009_902D()
{
	emu_decw(&emu_si);
	emu_cmpws(&emu_si, 0x1F);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_059E_000B_812D(); return; }
	f__B4CD_0657_000A_D0BB(); return;
}

/**
 * Decompiled function f__B4CD_059E_000B_812D()
 *
 * @name f__B4CD_059E_000B_812D
 * @implements B4CD:059E:000B:812D ()
 *
 * Called From: B4CD:0599:0009:902D
 */
void f__B4CD_059E_000B_812D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05A9); emu_cs = 0x0F3F; f__0F3F_0046_000C_9E1E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_05A9_0010_4FF3();
}

/**
 * Decompiled function f__B4CD_05A9_0010_4FF3()
 *
 * @name f__B4CD_05A9_0010_4FF3
 * @implements B4CD:05A9:0010:4FF3 ()
 *
 * Called From: B4CD:05A9:000B:812D
 */
void f__B4CD_05A9_0010_4FF3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05B9); emu_cs = 0x0F3F; f__0F3F_0052_000C_9E02();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_05B9_0023_8507();
}

/**
 * Decompiled function f__B4CD_05B9_0023_8507()
 *
 * @name f__B4CD_05B9_0023_8507
 * @implements B4CD:05B9:0023:8507 ()
 *
 * Called From: B4CD:05B9:0010:4FF3
 */
void f__B4CD_05B9_0023_8507()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_bx, 0x10);
	emu_movw(&emu_ax, emu_si);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_incw(&emu_ax);
	emu_andw(&emu_ax, 0xFE);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_si, 0x2);
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	f__B4CD_064F_0008_D70B(); return;
}

/**
 * Decompiled function f__B4CD_05DC_0008_0D7D()
 *
 * @name f__B4CD_05DC_0008_0D7D
 * @implements B4CD:05DC:0008:0D7D ()
 *
 * Called From: B4CD:0652:0008:D70B
 * Called From: B4CD:0652:0013:B98F
 * Called From: B4CD:0652:0010:AADE
 */
void f__B4CD_05DC_0008_0D7D()
{
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_di, emu_ax);
	f__B4CD_0648_000F_AA99(); return;
}

/**
 * Decompiled function f__B4CD_05E4_0036_E0ED()
 *
 * @name f__B4CD_05E4_0036_E0ED
 * @implements B4CD:05E4:0036:E0ED ()
 *
 * Called From: B4CD:064A:000F:AA99
 * Called From: B4CD:064A:0013:B98F
 * Called From: B4CD:064A:0010:AADE
 */
void f__B4CD_05E4_0036_E0ED()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_0647_0010_AADE(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0647_0010_AADE(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_0647_0010_AADE(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0647_0010_AADE(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x061A); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_061A_002A_6FEE();
}

/**
 * Decompiled function f__B4CD_061A_002A_6FEE()
 *
 * @name f__B4CD_061A_002A_6FEE
 * @implements B4CD:061A:002A:6FEE ()
 *
 * Called From: B4CD:061A:0036:E0ED
 */
void f__B4CD_061A_002A_6FEE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8FE5), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x0644);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34CD0020: ovl__34CD(0); break;
		case 0x34CD0039: ovl__34CD(5); break;
		case 0x34CD0043: ovl__34CD(7); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0641; emu_last_length = 0x002A; emu_last_crc = 0x6FEE;
			emu_call();
			return;
	}
	f__B4CD_0644_0013_B98F();
}

/**
 * Decompiled function f__B4CD_0644_0013_B98F()
 *
 * @name f__B4CD_0644_0013_B98F
 * @implements B4CD:0644:0013:B98F ()
 *
 * Called From: B4CD:0644:002A:6FEE
 */
void f__B4CD_0644_0013_B98F()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05E4_0036_E0ED(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05DC_0008_0D7D(); return; }
	f__B4CD_074A_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0647_0010_AADE()
 *
 * @name f__B4CD_0647_0010_AADE
 * @implements B4CD:0647:0010:AADE ()
 *
 * Called From: B4CD:05E9:0036:E0ED
 * Called From: B4CD:05F3:0036:E0ED
 * Called From: B4CD:05FB:0036:E0ED
 * Called From: B4CD:0606:0036:E0ED
 */
void f__B4CD_0647_0010_AADE()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05E4_0036_E0ED(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05DC_0008_0D7D(); return; }
	f__B4CD_074A_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0648_000F_AA99()
 *
 * @name f__B4CD_0648_000F_AA99
 * @implements B4CD:0648:000F:AA99 ()
 *
 * Called From: B4CD:05E2:0008:0D7D
 */
void f__B4CD_0648_000F_AA99()
{
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05E4_0036_E0ED(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05DC; emu_last_cs = 0xB4CD; emu_last_ip = 0x0652; emu_last_length = 0x000F; emu_last_crc = 0xAA99; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x074A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0654; emu_last_length = 0x000F; emu_last_crc = 0xAA99; emu_call();
}

/**
 * Decompiled function f__B4CD_064F_0008_D70B()
 *
 * @name f__B4CD_064F_0008_D70B
 * @implements B4CD:064F:0008:D70B ()
 *
 * Called From: B4CD:05DA:0023:8507
 */
void f__B4CD_064F_0008_D70B()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05DC_0008_0D7D(); return; }
	/* Unresolved jump */ emu_ip = 0x074A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0654; emu_last_length = 0x0008; emu_last_crc = 0xD70B; emu_call();
}

/**
 * Decompiled function f__B4CD_0657_000A_D0BB()
 *
 * @name f__B4CD_0657_000A_D0BB
 * @implements B4CD:0657:000A:D0BB ()
 *
 * Called From: B4CD:059B:0009:902D
 */
void f__B4CD_0657_000A_D0BB()
{
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0661_000E_353B(); return; }
	emu_movw(&emu_ax, 0x20);
	f__B4CD_0663_000C_0711(); return;
}

/**
 * Decompiled function f__B4CD_0661_000E_353B()
 *
 * @name f__B4CD_0661_000E_353B
 * @implements B4CD:0661:000E:353B ()
 *
 * Called From: B4CD:065A:000A:D0BB
 */
void f__B4CD_0661_000E_353B()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_cmpws(&emu_si, 0xF);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_066F_0040_CDDD(); return; }
	emu_movw(&emu_ax, 0xF);
	f__B4CD_0671_003E_4157(); return;
}

/**
 * Decompiled function f__B4CD_0663_000C_0711()
 *
 * @name f__B4CD_0663_000C_0711
 * @implements B4CD:0663:000C:0711 ()
 *
 * Called From: B4CD:065F:000A:D0BB
 */
void f__B4CD_0663_000C_0711()
{
	emu_movw(&emu_si, emu_ax);
	emu_cmpws(&emu_si, 0xF);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_066F_0040_CDDD(); return; }
	emu_movw(&emu_ax, 0xF);
	/* Unresolved jump */ emu_ip = 0x0671; emu_last_cs = 0xB4CD; emu_last_ip = 0x066D; emu_last_length = 0x000C; emu_last_crc = 0x0711; emu_call();
}

/**
 * Decompiled function f__B4CD_066F_0040_CDDD()
 *
 * @name f__B4CD_066F_0040_CDDD
 * @implements B4CD:066F:0040:CDDD ()
 *
 * Called From: B4CD:0668:000E:353B
 * Called From: B4CD:0668:000C:0711
 */
void f__B4CD_066F_0040_CDDD()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3960));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx,  0x395E));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x5);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x20);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2DCE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4CD_0741_0009_CAFC(); return;
}

/**
 * Decompiled function f__B4CD_0671_003E_4157()
 *
 * @name f__B4CD_0671_003E_4157
 * @implements B4CD:0671:003E:4157 ()
 *
 * Called From: B4CD:066D:000E:353B
 */
void f__B4CD_0671_003E_4157()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3960));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx,  0x395E));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x5);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x20);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2DCE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4CD_0741_0009_CAFC(); return;
}

/**
 * Decompiled function f__B4CD_06AF_0011_F3CE()
 *
 * @name f__B4CD_06AF_0011_F3CE
 * @implements B4CD:06AF:0011:F3CE ()
 *
 * Called From: B4CD:0747:0009:CAFC
 * Called From: B4CD:0747:000C:3884
 */
void f__B4CD_06AF_0011_F3CE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x06C0); emu_cs = 0x0F3F; f__0F3F_00F3_0011_5E67();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_06C0_0014_54A9();
}

/**
 * Decompiled function f__B4CD_06C0_0014_54A9()
 *
 * @name f__B4CD_06C0_0014_54A9
 * @implements B4CD:06C0:0014:54A9 ()
 *
 * Called From: B4CD:06C0:0011:F3CE
 */
void f__B4CD_06C0_0014_54A9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x0F3F; f__0F3F_000D_0019_5076();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_06D4_0011_DCE0();
}

/**
 * Decompiled function f__B4CD_06D4_0011_DCE0()
 *
 * @name f__B4CD_06D4_0011_DCE0
 * @implements B4CD:06D4:0011:DCE0 ()
 *
 * Called From: B4CD:06D4:0014:54A9
 */
void f__B4CD_06D4_0011_DCE0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4CD_0720_001E_4827(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06E5); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_06E5_0032_BD9A();
}

/**
 * Decompiled function f__B4CD_06E5_0032_BD9A()
 *
 * @name f__B4CD_06E5_0032_BD9A
 * @implements B4CD:06E5:0032:BD9A ()
 *
 * Called From: B4CD:06E5:0011:DCE0
 */
void f__B4CD_06E5_0032_BD9A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__B4CD_0720_001E_4827(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx,  0x8FE5), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x0717);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34CD0020: ovl__34CD(0); break;
		case 0x34CD0025: ovl__34CD(1); break;
		case 0x34CD002A: ovl__34CD(2); break;
		case 0x34CD002F: ovl__34CD(3); break;
		case 0x34CD0039: ovl__34CD(5); break;
		case 0x34CD003E: ovl__34CD(6); break;
		case 0x34CD0043: ovl__34CD(7); break;
		case 0x34CD0048: ovl__34CD(8); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0714; emu_last_length = 0x0032; emu_last_crc = 0xBD9A;
			emu_call();
			return;
	}
	f__B4CD_0717_0027_DD22();
}

/**
 * Decompiled function f__B4CD_0717_0027_DD22()
 *
 * @name f__B4CD_0717_0027_DD22
 * @implements B4CD:0717:0027:DD22 ()
 *
 * Called From: B4CD:0717:0032:BD9A
 */
void f__B4CD_0717_0027_DD22()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__B4CD_073E_000C_3884(); return; }
	f__B4CD_074A_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0720_001E_4827()
 *
 * @name f__B4CD_0720_001E_4827
 * @implements B4CD:0720:001E:4827 ()
 *
 * Called From: B4CD:06D8:0011:DCE0
 * Called From: B4CD:06F0:0032:BD9A
 */
void f__B4CD_0720_001E_4827()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__B4CD_073E_000C_3884(); return; }
	f__B4CD_074A_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_073E_000C_3884()
 *
 * @name f__B4CD_073E_000C_3884
 * @implements B4CD:073E:000C:3884 ()
 *
 * Called From: B4CD:073A:001E:4827
 * Called From: B4CD:073A:0027:DD22
 */
void f__B4CD_073E_000C_3884()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x9);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_074A_0006_F7CE(); return; }
	f__B4CD_06AF_0011_F3CE(); return;
}

/**
 * Decompiled function f__B4CD_0741_0009_CAFC()
 *
 * @name f__B4CD_0741_0009_CAFC
 * @implements B4CD:0741:0009:CAFC ()
 *
 * Called From: B4CD:06AC:0040:CDDD
 * Called From: B4CD:06AC:003E:4157
 */
void f__B4CD_0741_0009_CAFC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x9);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_074A_0006_F7CE(); return; }
	f__B4CD_06AF_0011_F3CE(); return;
}

/**
 * Decompiled function f__B4CD_074A_0006_F7CE()
 *
 * @name f__B4CD_074A_0006_F7CE
 * @implements B4CD:074A:0006:F7CE ()
 *
 * Called From: B4CD:0592:001A:D066
 * Called From: B4CD:0654:0013:B98F
 * Called From: B4CD:0654:0010:AADE
 * Called From: B4CD:073C:001E:4827
 * Called From: B4CD:073C:0027:DD22
 * Called From: B4CD:0745:0009:CAFC
 * Called From: B4CD:0745:000C:3884
 */
void f__B4CD_074A_0006_F7CE()
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
 * Decompiled function f__B4CD_0750_0027_7BA5()
 *
 * @name f__B4CD_0750_0027_7BA5
 * @implements B4CD:0750:0027:7BA5 ()
 *
 * Called From: 34CD:0061:0005:0000
 * Called From: B4CD:0A29:0016:6F25
 * Called From: B4CD:0B0F:0007:DAC0
 * Called From: B4CD:0C47:0014:30D0
 * Called From: B4CD:0CC1:0007:5E1C
 * Called From: B4CD:15C5:000C:5B07
 * Called From: B4CD:15C5:0007:5BAD
 * Called From: B4CD:1CE3:000C:C72C
 */
void f__B4CD_0750_0027_7BA5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F8));
	if (!emu_flags.zf) { f__B4CD_0778_0013_203B(); return; }
	emu_movw(&emu_ax, 0xA);
	f__B4CD_07F0_0004_DE52(); return;
}

/**
 * Decompiled function f__B4CD_0775_0002_FCBA()
 *
 * @name f__B4CD_0775_0002_FCBA
 * @implements B4CD:0775:0002:FCBA ()
 *
 * Called From: B4CD:0789:0005:50FA
 * Called From: B4CD:079E:0015:A1A0
 * Called From: B4CD:07BE:0020:DA21
 * Called From: B4CD:07CE:000B:17C5
 * Called From: B4CD:07E4:0005:C27A
 * Called From: B4CD:07E4:0016:5515
 * Called From: B4CD:07EE:000A:DC62
 */
void f__B4CD_0775_0002_FCBA()
{
	f__B4CD_07F0_0004_DE52(); return;
}

/**
 * Decompiled function f__B4CD_0778_0013_203B()
 *
 * @name f__B4CD_0778_0013_203B
 * @implements B4CD:0778:0013:203B ()
 *
 * Called From: B4CD:0770:0027:7BA5
 */
void f__B4CD_0778_0013_203B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (emu_flags.zf) { f__B4CD_0786_0005_50FA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if (!emu_flags.zf) { f__B4CD_078B_0015_A1A0(); return; }
	emu_movw(&emu_ax, 0xE);
	/* Unresolved jump */ emu_ip = 0x0775; emu_last_cs = 0xB4CD; emu_last_ip = 0x0789; emu_last_length = 0x0013; emu_last_crc = 0x203B; emu_call();
}

/**
 * Decompiled function f__B4CD_0786_0005_50FA()
 *
 * @name f__B4CD_0786_0005_50FA
 * @implements B4CD:0786:0005:50FA ()
 *
 * Called From: B4CD:077C:0013:203B
 */
void f__B4CD_0786_0005_50FA()
{
	emu_movw(&emu_ax, 0xE);
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_078B_0015_A1A0()
 *
 * @name f__B4CD_078B_0015_A1A0
 * @implements B4CD:078B:0015:A1A0 ()
 *
 * Called From: B4CD:0784:0013:203B
 */
void f__B4CD_078B_0015_A1A0()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_07A0_0020_DA21(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	emu_addw(&emu_ax, 0x4B);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_07A0_0020_DA21(); return; }
	emu_movw(&emu_ax, 0xB);
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_07A0_0020_DA21()
 *
 * @name f__B4CD_07A0_0020_DA21
 * @implements B4CD:07A0:0020:DA21 ()
 *
 * Called From: B4CD:078F:0015:A1A0
 * Called From: B4CD:0799:0015:A1A0
 */
void f__B4CD_07A0_0020_DA21()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	if (!emu_flags.zf) { f__B4CD_07C0_0005_7B23(); return; }
	emu_movw(&emu_ax, 0xD);
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_07C0_0005_7B23()
 *
 * @name f__B4CD_07C0_0005_7B23
 * @implements B4CD:07C0:0005:7B23 ()
 *
 * Called From: B4CD:07B9:0020:DA21
 */
void f__B4CD_07C0_0005_7B23()
{
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x07C5); f__B4CD_1133_0039_A02F();
	f__B4CD_07C5_000B_17C5();
}

/**
 * Decompiled function f__B4CD_07C5_000B_17C5()
 *
 * @name f__B4CD_07C5_000B_17C5
 * @implements B4CD:07C5:000B:17C5 ()
 *
 * Called From: B4CD:07C5:0005:7B23
 */
void f__B4CD_07C5_000B_17C5()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4CD_07D0_0016_5515(); return; }
	emu_movw(&emu_ax, 0xC);
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_07D0_0016_5515()
 *
 * @name f__B4CD_07D0_0016_5515
 * @implements B4CD:07D0:0016:5515 ()
 *
 * Called From: B4CD:07C9:000B:17C5
 */
void f__B4CD_07D0_0016_5515()
{
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39F6));
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_07E1_0005_C27A(); return; }
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_07E6_000A_DC62(); return; }
	emu_movw(&emu_ax, 0x4);
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_07E1_0005_C27A()
 *
 * @name f__B4CD_07E1_0005_C27A
 * @implements B4CD:07E1:0005:C27A ()
 *
 * Called From: B4CD:07DA:0016:5515
 */
void f__B4CD_07E1_0005_C27A()
{
	emu_movw(&emu_ax, 0x4);
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_07E6_000A_DC62()
 *
 * @name f__B4CD_07E6_000A_DC62
 * @implements B4CD:07E6:000A:DC62 ()
 *
 * Called From: B4CD:07DF:0016:5515
 */
void f__B4CD_07E6_000A_DC62()
{
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x24B8));
	f__B4CD_0775_0002_FCBA(); return;
}

/**
 * Decompiled function f__B4CD_07F0_0004_DE52()
 *
 * @name f__B4CD_07F0_0004_DE52
 * @implements B4CD:07F0:0004:DE52 ()
 *
 * Called From: B4CD:0775:0002:FCBA
 * Called From: B4CD:0775:0027:7BA5
 */
void f__B4CD_07F0_0004_DE52()
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
 * Decompiled function f__B4CD_07F4_0013_6862()
 *
 * @name f__B4CD_07F4_0013_6862
 * @implements B4CD:07F4:0013:6862 ()
 *
 * Called From: 34CD:00BB:0005:0000
 * Called From: B4CD:02DF:0023:1CEB
 */
void f__B4CD_07F4_0013_6862()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0807); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0807_000C_D969();
}

/**
 * Decompiled function f__B4CD_0807_000C_D969()
 *
 * @name f__B4CD_0807_000C_D969
 * @implements B4CD:0807:000C:D969 ()
 *
 * Called From: B4CD:0807:0013:6862
 */
void f__B4CD_0807_000C_D969()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0813); f__B4CD_0F8B_0015_1689();
	f__B4CD_0813_0009_37E4();
}

/**
 * Decompiled function f__B4CD_0813_0009_37E4()
 *
 * @name f__B4CD_0813_0009_37E4
 * @implements B4CD:0813:0009:37E4 ()
 *
 * Called From: B4CD:0813:000C:D969
 */
void f__B4CD_0813_0009_37E4()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4CD_081C_0008_E4D2(); return; }
	/* Unresolved jump */ emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x0819; emu_last_length = 0x0009; emu_last_crc = 0x37E4; emu_call();
}

/**
 * Decompiled function f__B4CD_081C_0008_E4D2()
 *
 * @name f__B4CD_081C_0008_E4D2
 * @implements B4CD:081C:0008:E4D2 ()
 *
 * Called From: B4CD:0817:0009:37E4
 */
void f__B4CD_081C_0008_E4D2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0824); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0824_000C_A0AF();
}

/**
 * Decompiled function f__B4CD_0824_000C_A0AF()
 *
 * @name f__B4CD_0824_000C_A0AF
 * @implements B4CD:0824:000C:A0AF ()
 *
 * Called From: B4CD:0824:0008:E4D2
 */
void f__B4CD_0824_000C_A0AF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0830); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0830_000F_D6F6();
}

/**
 * Decompiled function f__B4CD_0830_000F_D6F6()
 *
 * @name f__B4CD_0830_000F_D6F6
 * @implements B4CD:0830:000F:D6F6 ()
 *
 * Called From: B4CD:0830:000C:A0AF
 */
void f__B4CD_0830_000F_D6F6()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x083F); emu_cs = 0x0F3F; f__0F3F_0037_000F_E3D8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_083F_0012_9C00();
}

/**
 * Decompiled function f__B4CD_083F_0012_9C00()
 *
 * @name f__B4CD_083F_0012_9C00
 * @implements B4CD:083F:0012:9C00 ()
 *
 * Called From: B4CD:083F:000F:D6F6
 */
void f__B4CD_083F_0012_9C00()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_di, emu_ax);
	f__B4CD_08D9_0008_42B8(); return;
}

/**
 * Decompiled function f__B4CD_0851_0009_4E20()
 *
 * @name f__B4CD_0851_0009_4E20
 * @implements B4CD:0851:0009:4E20 ()
 *
 * Called From: B4CD:08DE:0008:42B8
 * Called From: B4CD:08DE:000F:1E5B
 * Called From: B4CD:08DE:0012:32A6
 */
void f__B4CD_0851_0009_4E20()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_si, emu_ax);
	f__B4CD_08D3_000E_925B(); return;
}

/**
 * Decompiled function f__B4CD_085A_0033_37A1()
 *
 * @name f__B4CD_085A_0033_37A1
 * @implements B4CD:085A:0033:37A1 ()
 *
 * Called From: B4CD:08D6:000E:925B
 * Called From: B4CD:08D6:000F:1E5B
 * Called From: B4CD:08D6:0012:32A6
 */
void f__B4CD_085A_0033_37A1()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_1E5B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_si);
	emu_cmpw(&emu_ax, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_1E5B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_1E5B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_1E5B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x088D); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_088D_0016_F6CE();
}

/**
 * Decompiled function f__B4CD_088D_0016_F6CE()
 *
 * @name f__B4CD_088D_0016_F6CE
 * @implements B4CD:088D:0016:F6CE ()
 *
 * Called From: B4CD:088D:0033:37A1
 */
void f__B4CD_088D_0016_F6CE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08A3); emu_cs = 0x0F3F; f__0F3F_0037_000F_E3D8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_08A3_0019_A93A();
}

/**
 * Decompiled function f__B4CD_08A3_0019_A93A()
 *
 * @name f__B4CD_08A3_0019_A93A
 * @implements B4CD:08A3:0019:A93A ()
 *
 * Called From: B4CD:08A3:0016:F6CE
 */
void f__B4CD_08A3_0019_A93A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x08BC); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_08BC_0013_109B();
}

/**
 * Decompiled function f__B4CD_08BC_0013_109B()
 *
 * @name f__B4CD_08BC_0013_109B
 * @implements B4CD:08BC:0013:109B ()
 *
 * Called From: B4CD:08BC:0019:A93A
 */
void f__B4CD_08BC_0013_109B()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_1E5B(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x08CF); f__B4CD_1269_0019_A3E5();
	f__B4CD_08CF_0012_32A6();
}

/**
 * Decompiled function f__B4CD_08CF_0012_32A6()
 *
 * @name f__B4CD_08CF_0012_32A6
 * @implements B4CD:08CF:0012:32A6 ()
 *
 * Called From: B4CD:08CF:0013:109B
 */
void f__B4CD_08CF_0012_32A6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_085A_0033_37A1(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DC; emu_last_length = 0x0012; emu_last_crc = 0x32A6; emu_call(); return; }
	f__B4CD_0851_0009_4E20(); return;
}

/**
 * Decompiled function f__B4CD_08D2_000F_1E5B()
 *
 * @name f__B4CD_08D2_000F_1E5B
 * @implements B4CD:08D2:000F:1E5B ()
 *
 * Called From: B4CD:085F:0033:37A1
 * Called From: B4CD:0869:0033:37A1
 * Called From: B4CD:0870:0033:37A1
 * Called From: B4CD:087A:0033:37A1
 * Called From: B4CD:08C2:0013:109B
 */
void f__B4CD_08D2_000F_1E5B()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_085A_0033_37A1(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_08E1_0006_F7CE(); return; }
	f__B4CD_0851_0009_4E20(); return;
}

/**
 * Decompiled function f__B4CD_08D3_000E_925B()
 *
 * @name f__B4CD_08D3_000E_925B
 * @implements B4CD:08D3:000E:925B ()
 *
 * Called From: B4CD:0858:0009:4E20
 */
void f__B4CD_08D3_000E_925B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_085A_0033_37A1(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DC; emu_last_length = 0x000E; emu_last_crc = 0x925B; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0851; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DE; emu_last_length = 0x000E; emu_last_crc = 0x925B; emu_call();
}

/**
 * Decompiled function f__B4CD_08D9_0008_42B8()
 *
 * @name f__B4CD_08D9_0008_42B8
 * @implements B4CD:08D9:0008:42B8 ()
 *
 * Called From: B4CD:084E:0012:9C00
 */
void f__B4CD_08D9_0008_42B8()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DC; emu_last_length = 0x0008; emu_last_crc = 0x42B8; emu_call(); return; }
	f__B4CD_0851_0009_4E20(); return;
}

/**
 * Decompiled function f__B4CD_08E1_0006_F7CE()
 *
 * @name f__B4CD_08E1_0006_F7CE
 * @implements B4CD:08E1:0006:F7CE ()
 *
 * Called From: B4CD:08DC:000F:1E5B
 */
void f__B4CD_08E1_0006_F7CE()
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
 * Decompiled function f__B4CD_08E7_002B_DC75()
 *
 * @name f__B4CD_08E7_002B_DC75
 * @implements B4CD:08E7:002B:DC75 ()
 *
 * Called From: 34CD:00A7:0005:0000
 */
void f__B4CD_08E7_002B_DC75()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0912_000C_28CD();
}

/**
 * Decompiled function f__B4CD_0912_000C_28CD()
 *
 * @name f__B4CD_0912_000C_28CD
 * @implements B4CD:0912:000C:28CD ()
 *
 * Called From: B4CD:0912:002B:DC75
 */
void f__B4CD_0912_000C_28CD()
{
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_091E_000C_58F5();
}

/**
 * Decompiled function f__B4CD_091E_000C_58F5()
 *
 * @name f__B4CD_091E_000C_58F5
 * @implements B4CD:091E:000C:58F5 ()
 *
 * Called From: B4CD:091E:000C:28CD
 */
void f__B4CD_091E_000C_58F5()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x092A); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_092A_000C_58F4();
}

/**
 * Decompiled function f__B4CD_092A_000C_58F4()
 *
 * @name f__B4CD_092A_000C_58F4
 * @implements B4CD:092A:000C:58F4 ()
 *
 * Called From: B4CD:092A:000C:58F5
 */
void f__B4CD_092A_000C_58F4()
{
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0936_001C_555C();
}

/**
 * Decompiled function f__B4CD_0936_001C_555C()
 *
 * @name f__B4CD_0936_001C_555C
 * @implements B4CD:0936:001C:555C ()
 *
 * Called From: B4CD:0936:000C:58F4
 */
void f__B4CD_0936_001C_555C()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0952_0032_F47A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	f__B4CD_095E_0026_FA43(); return;
}

/**
 * Decompiled function f__B4CD_0952_0032_F47A()
 *
 * @name f__B4CD_0952_0032_F47A
 * @implements B4CD:0952:0032:F47A ()
 *
 * Called From: B4CD:094B:001C:555C
 */
void f__B4CD_0952_0032_F47A()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0984_0032_905E(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	f__B4CD_099D_0019_1F64(); return;
}

/**
 * Decompiled function f__B4CD_095E_0026_FA43()
 *
 * @name f__B4CD_095E_0026_FA43
 * @implements B4CD:095E:0026:FA43 ()
 *
 * Called From: B4CD:0950:001C:555C
 */
void f__B4CD_095E_0026_FA43()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0984_0032_905E(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	f__B4CD_099D_0019_1F64(); return;
}

/**
 * Decompiled function f__B4CD_0984_0032_905E()
 *
 * @name f__B4CD_0984_0032_905E
 * @implements B4CD:0984:0032:905E ()
 *
 * Called From: B4CD:097D:0032:F47A
 * Called From: B4CD:097D:0026:FA43
 */
void f__B4CD_0984_0032_905E()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_09B6_0032_1EF4(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__B4CD_09C2_0026_0ECD(); return;
}

/**
 * Decompiled function f__B4CD_099D_0019_1F64()
 *
 * @name f__B4CD_099D_0019_1F64
 * @implements B4CD:099D:0019:1F64 ()
 *
 * Called From: B4CD:0982:0026:FA43
 * Called From: B4CD:0982:0032:F47A
 */
void f__B4CD_099D_0019_1F64()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_09B6_0032_1EF4(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__B4CD_09C2_0026_0ECD(); return;
}

/**
 * Decompiled function f__B4CD_09B6_0032_1EF4()
 *
 * @name f__B4CD_09B6_0032_1EF4
 * @implements B4CD:09B6:0032:1EF4 ()
 *
 * Called From: B4CD:09AF:0019:1F64
 * Called From: B4CD:09AF:0032:905E
 */
void f__B4CD_09B6_0032_1EF4()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09E8; emu_last_cs = 0xB4CD; emu_last_ip = 0x09E1; emu_last_length = 0x0032; emu_last_crc = 0x1EF4; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	f__B4CD_0A01_000C_0EA8(); return;
}

/**
 * Decompiled function f__B4CD_09C2_0026_0ECD()
 *
 * @name f__B4CD_09C2_0026_0ECD
 * @implements B4CD:09C2:0026:0ECD ()
 *
 * Called From: B4CD:09B4:0019:1F64
 * Called From: B4CD:09B4:0032:905E
 */
void f__B4CD_09C2_0026_0ECD()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_09E8_0025_25FA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	f__B4CD_0A01_000C_0EA8(); return;
}

/**
 * Decompiled function f__B4CD_09E8_0025_25FA()
 *
 * @name f__B4CD_09E8_0025_25FA
 * @implements B4CD:09E8:0025:25FA ()
 *
 * Called From: B4CD:09E1:0026:0ECD
 */
void f__B4CD_09E8_0025_25FA()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	f__B4CD_0AD0_000B_3334(); return;
}

/**
 * Decompiled function f__B4CD_0A01_000C_0EA8()
 *
 * @name f__B4CD_0A01_000C_0EA8
 * @implements B4CD:0A01:000C:0EA8 ()
 *
 * Called From: B4CD:09E6:0032:1EF4
 * Called From: B4CD:09E6:0026:0ECD
 */
void f__B4CD_0A01_000C_0EA8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	f__B4CD_0AD0_000B_3334(); return;
}

/**
 * Decompiled function f__B4CD_0A0D_0009_1C93()
 *
 * @name f__B4CD_0A0D_0009_1C93
 * @implements B4CD:0A0D:0009:1C93 ()
 *
 * Called From: B4CD:0AD8:000B:3334
 * Called From: B4CD:0AD8:000E:0F0A
 */
void f__B4CD_0A0D_0009_1C93()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	f__B4CD_0AC2_000B_E32B(); return;
}

/**
 * Decompiled function f__B4CD_0A16_0016_6F25()
 *
 * @name f__B4CD_0A16_0016_6F25
 * @implements B4CD:0A16:0016:6F25 ()
 *
 * Called From: B4CD:0ACA:000B:E32B
 * Called From: B4CD:0ACA:000E:DF35
 * Called From: B4CD:0ACA:002D:A2B3
 */
void f__B4CD_0A16_0016_6F25()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cl, 0x6);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A2C); f__B4CD_0750_0027_7BA5();
	f__B4CD_0A2C_000B_CB32();
}

/**
 * Decompiled function f__B4CD_0A2C_000B_CB32()
 *
 * @name f__B4CD_0A2C_000B_CB32
 * @implements B4CD:0A2C:000B:CB32 ()
 *
 * Called From: B4CD:0A2C:0016:6F25
 */
void f__B4CD_0A2C_000B_CB32()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A37); f__B4CD_0F8B_0015_1689();
	f__B4CD_0A37_0009_B7CA();
}

/**
 * Decompiled function f__B4CD_0A37_0009_B7CA()
 *
 * @name f__B4CD_0A37_0009_B7CA
 * @implements B4CD:0A37:0009:B7CA ()
 *
 * Called From: B4CD:0A37:000B:CB32
 */
void f__B4CD_0A37_0009_B7CA()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4CD_0A40_001B_13AF(); return; }
	/* Unresolved jump */ emu_ip = 0x0ABF; emu_last_cs = 0xB4CD; emu_last_ip = 0x0A3D; emu_last_length = 0x0009; emu_last_crc = 0xB7CA; emu_call();
}

/**
 * Decompiled function f__B4CD_0A40_001B_13AF()
 *
 * @name f__B4CD_0A40_001B_13AF
 * @implements B4CD:0A40:001B:13AF ()
 *
 * Called From: B4CD:0A3B:0009:B7CA
 */
void f__B4CD_0A40_001B_13AF()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x20);
	if (!emu_flags.zf) { f__B4CD_0ABF_000E_DF35(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A5B); f__B4CD_10EE_0039_EC73();
	f__B4CD_0A5B_0012_F96C();
}

/**
 * Decompiled function f__B4CD_0A5B_0012_F96C()
 *
 * @name f__B4CD_0A5B_0012_F96C
 * @implements B4CD:0A5B:0012:F96C ()
 *
 * Called From: B4CD:0A5B:001B:13AF
 */
void f__B4CD_0A5B_0012_F96C()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (emu_flags.zf) { f__B4CD_0A6D_0009_A4FD(); return; }
	f__B4CD_0ABF_000E_DF35(); return;
}

/**
 * Decompiled function f__B4CD_0A6D_0009_A4FD()
 *
 * @name f__B4CD_0A6D_0009_A4FD
 * @implements B4CD:0A6D:0009:A4FD ()
 *
 * Called From: B4CD:0A69:0012:F96C
 */
void f__B4CD_0A6D_0009_A4FD()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0A76_0057_8C85();
}

/**
 * Decompiled function f__B4CD_0A76_0057_8C85()
 *
 * @name f__B4CD_0A76_0057_8C85
 * @implements B4CD:0A76:0057:8C85 ()
 *
 * Called From: B4CD:0A76:0009:A4FD
 */
void f__B4CD_0A76_0057_8C85()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { f__B4CD_0AA0_002D_A2B3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0AA0_002D_A2B3(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0AA0_002D_A2B3(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4CD_0ABF_000E_DF35(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0ABF; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AB1; emu_last_length = 0x0057; emu_last_crc = 0x8C85; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0ACD; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AC8; emu_last_length = 0x0057; emu_last_crc = 0x8C85; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0A16; emu_last_cs = 0xB4CD; emu_last_ip = 0x0ACA; emu_last_length = 0x0057; emu_last_crc = 0x8C85; emu_call();
}

/**
 * Decompiled function f__B4CD_0AA0_002D_A2B3()
 *
 * @name f__B4CD_0AA0_002D_A2B3
 * @implements B4CD:0AA0:002D:A2B3 ()
 *
 * Called From: B4CD:0A7F:0057:8C85
 * Called From: B4CD:0A85:0057:8C85
 * Called From: B4CD:0A92:0057:8C85
 */
void f__B4CD_0AA0_002D_A2B3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4CD_0ABF_000E_DF35(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ABF_000E_DF35(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ACD_000E_0F0A(); return; }
	f__B4CD_0A16_0016_6F25(); return;
}

/**
 * Decompiled function f__B4CD_0ABF_000E_DF35()
 *
 * @name f__B4CD_0ABF_000E_DF35
 * @implements B4CD:0ABF:000E:DF35 ()
 *
 * Called From: B4CD:0A52:001B:13AF
 * Called From: B4CD:0A6B:0012:F96C
 * Called From: B4CD:0AA4:002D:A2B3
 * Called From: B4CD:0AA4:0057:8C85
 * Called From: B4CD:0AB1:002D:A2B3
 */
void f__B4CD_0ABF_000E_DF35()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ACD_000E_0F0A(); return; }
	f__B4CD_0A16_0016_6F25(); return;
}

/**
 * Decompiled function f__B4CD_0AC2_000B_E32B()
 *
 * @name f__B4CD_0AC2_000B_E32B
 * @implements B4CD:0AC2:000B:E32B ()
 *
 * Called From: B4CD:0A13:0009:1C93
 */
void f__B4CD_0AC2_000B_E32B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0ACD; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AC8; emu_last_length = 0x000B; emu_last_crc = 0xE32B; emu_call(); return; }
	f__B4CD_0A16_0016_6F25(); return;
}

/**
 * Decompiled function f__B4CD_0ACD_000E_0F0A()
 *
 * @name f__B4CD_0ACD_000E_0F0A
 * @implements B4CD:0ACD:000E:0F0A ()
 *
 * Called From: B4CD:0AC8:000E:DF35
 * Called From: B4CD:0AC8:002D:A2B3
 */
void f__B4CD_0ACD_000E_0F0A()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ADB_0010_496D(); return; }
	f__B4CD_0A0D_0009_1C93(); return;
}

/**
 * Decompiled function f__B4CD_0AD0_000B_3334()
 *
 * @name f__B4CD_0AD0_000B_3334
 * @implements B4CD:0AD0:000B:3334 ()
 *
 * Called From: B4CD:0A0A:000C:0EA8
 * Called From: B4CD:0A0A:0025:25FA
 */
void f__B4CD_0AD0_000B_3334()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0ADB; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AD6; emu_last_length = 0x000B; emu_last_crc = 0x3334; emu_call(); return; }
	f__B4CD_0A0D_0009_1C93(); return;
}

/**
 * Decompiled function f__B4CD_0ADB_0010_496D()
 *
 * @name f__B4CD_0ADB_0010_496D
 * @implements B4CD:0ADB:0010:496D ()
 *
 * Called From: B4CD:0AD6:000E:0F0A
 */
void f__B4CD_0ADB_0010_496D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__B4CD_0AF0_0004_92B9(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0AEB_0005_C7A6(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4CD_0AF4_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0AE9_0002_C4BA()
 *
 * @name f__B4CD_0AE9_0002_C4BA
 * @implements B4CD:0AE9:0002:C4BA ()
 *
 * Called From: B4CD:0AEE:0005:C7A6
 * Called From: B4CD:0AF2:0004:92B9
 */
void f__B4CD_0AE9_0002_C4BA()
{
	f__B4CD_0AF4_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0AEB_0005_C7A6()
 *
 * @name f__B4CD_0AEB_0005_C7A6
 * @implements B4CD:0AEB:0005:C7A6 ()
 *
 * Called From: B4CD:0AE4:0010:496D
 */
void f__B4CD_0AEB_0005_C7A6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4CD_0AE9_0002_C4BA(); return;
}

/**
 * Decompiled function f__B4CD_0AF0_0004_92B9()
 *
 * @name f__B4CD_0AF0_0004_92B9
 * @implements B4CD:0AF0:0004:92B9 ()
 *
 * Called From: B4CD:0ADF:0010:496D
 */
void f__B4CD_0AF0_0004_92B9()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_0AE9_0002_C4BA(); return;
}

/**
 * Decompiled function f__B4CD_0AF4_0006_F7CE()
 *
 * @name f__B4CD_0AF4_0006_F7CE
 * @implements B4CD:0AF4:0006:F7CE ()
 *
 * Called From: B4CD:0AE9:0002:C4BA
 * Called From: B4CD:0AE9:0010:496D
 */
void f__B4CD_0AF4_0006_F7CE()
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
 * Decompiled function f__B4CD_0AFA_0011_D5DB()
 *
 * @name f__B4CD_0AFA_0011_D5DB
 * @implements B4CD:0AFA:0011:D5DB ()
 *
 * Called From: 34CD:00AC:0005:0000
 * Called From: B4CD:15D6:0011:D4BE
 * Called From: B4CD:1601:0019:7F4A
 */
void f__B4CD_0AFA_0011_D5DB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B4CD_0B0B_0007_DAC0(); return; }
	/* Unresolved jump */ emu_ip = 0x0C30; emu_last_cs = 0xB4CD; emu_last_ip = 0x0B08; emu_last_length = 0x0011; emu_last_crc = 0xD5DB; emu_call();
}

/**
 * Decompiled function f__B4CD_0B0B_0007_DAC0()
 *
 * @name f__B4CD_0B0B_0007_DAC0
 * @implements B4CD:0B0B:0007:DAC0 ()
 *
 * Called From: B4CD:0B06:0011:D5DB
 */
void f__B4CD_0B0B_0007_DAC0()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B12); f__B4CD_0750_0027_7BA5();
	f__B4CD_0B12_0013_2DDF();
}

/**
 * Decompiled function f__B4CD_0B12_0013_2DDF()
 *
 * @name f__B4CD_0B12_0013_2DDF
 * @implements B4CD:0B12:0013:2DDF ()
 *
 * Called From: B4CD:0B12:0007:DAC0
 */
void f__B4CD_0B12_0013_2DDF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B25_0015_E456(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0B25_0015_E456(); return; }
	f__B4CD_0C30_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0B25_0015_E456()
 *
 * @name f__B4CD_0B25_0015_E456
 * @implements B4CD:0B25:0015:E456 ()
 *
 * Called From: B4CD:0B1A:0013:2DDF
 * Called From: B4CD:0B20:0013:2DDF
 */
void f__B4CD_0B25_0015_E456()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_0B3A_001B_0F50(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_flags.zf) { f__B4CD_0B3A_001B_0F50(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0B3A_001B_0F50(); return; }
	f__B4CD_0C30_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0B3A_001B_0F50()
 *
 * @name f__B4CD_0B3A_001B_0F50
 * @implements B4CD:0B3A:001B:0F50 ()
 *
 * Called From: B4CD:0B29:0015:E456
 * Called From: B4CD:0B2F:0015:E456
 * Called From: B4CD:0B35:0015:E456
 */
void f__B4CD_0B3A_001B_0F50()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4CD_0B55_0013_7E2B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (emu_flags.zf) { f__B4CD_0B55_0013_7E2B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_0B55_0013_7E2B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0B55_0013_7E2B(); return; }
	f__B4CD_0C30_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0B55_0013_7E2B()
 *
 * @name f__B4CD_0B55_0013_7E2B
 * @implements B4CD:0B55:0013:7E2B ()
 *
 * Called From: B4CD:0B3E:001B:0F50
 * Called From: B4CD:0B44:001B:0F50
 * Called From: B4CD:0B4A:001B:0F50
 * Called From: B4CD:0B50:001B:0F50
 */
void f__B4CD_0B55_0013_7E2B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0B6F_000D_0644(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0B68_0007_5745(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	f__B4CD_0B6D_0002_C93A(); return;
}

/**
 * Decompiled function f__B4CD_0B68_0007_5745()
 *
 * @name f__B4CD_0B68_0007_5745
 * @implements B4CD:0B68:0007:5745 ()
 *
 * Called From: B4CD:0B5F:0013:7E2B
 */
void f__B4CD_0B68_0007_5745()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	f__B4CD_0B81_007D_4F49(); return;
}

/**
 * Decompiled function f__B4CD_0B6D_0002_C93A()
 *
 * @name f__B4CD_0B6D_0002_C93A
 * @implements B4CD:0B6D:0002:C93A ()
 *
 * Called From: B4CD:0B66:0013:7E2B
 */
void f__B4CD_0B6D_0002_C93A()
{
	f__B4CD_0B81_007D_4F49(); return;
}

/**
 * Decompiled function f__B4CD_0B6F_000D_0644()
 *
 * @name f__B4CD_0B6F_000D_0644
 * @implements B4CD:0B6F:000D:0644 ()
 *
 * Called From: B4CD:0B59:0013:7E2B
 */
void f__B4CD_0B6F_000D_0644()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B7C_0082_AC86(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	f__B4CD_0B81_007D_4F49(); return;
}

/**
 * Decompiled function f__B4CD_0B7C_0082_AC86()
 *
 * @name f__B4CD_0B7C_0082_AC86
 * @implements B4CD:0B7C:0082:AC86 ()
 *
 * Called From: B4CD:0B73:000D:0644
 */
void f__B4CD_0B7C_0082_AC86()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0B91_006D_59E5(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B9C; emu_last_cs = 0xB4CD; emu_last_ip = 0x0B95; emu_last_length = 0x0082; emu_last_crc = 0xAC86; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x41);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x323F), 0x8000);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx, emu_dx);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx);
	emu_movw(&emu_es, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x323F), emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0BFE); emu_ip = 0x0C36; emu_last_cs = 0xB4CD; emu_last_ip = 0x0BFB; emu_last_length = 0x0082; emu_last_crc = 0xAC86; emu_call();
	f__B4CD_0BFE_000B_6F91();
}

/**
 * Decompiled function f__B4CD_0B81_007D_4F49()
 *
 * @name f__B4CD_0B81_007D_4F49
 * @implements B4CD:0B81:007D:4F49 ()
 *
 * Called From: B4CD:0B6D:0007:5745
 * Called From: B4CD:0B6D:0002:C93A
 * Called From: B4CD:0B7A:000D:0644
 */
void f__B4CD_0B81_007D_4F49()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0B91_006D_59E5(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B9C_0062_0F0F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x41);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x323F), 0x8000);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx, emu_dx);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx);
	emu_movw(&emu_es, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x323F), emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0BFE); emu_ip = 0x0C36; emu_last_cs = 0xB4CD; emu_last_ip = 0x0BFB; emu_last_length = 0x007D; emu_last_crc = 0x4F49; emu_call();
	f__B4CD_0BFE_000B_6F91();
}

/**
 * Decompiled function f__B4CD_0B91_006D_59E5()
 *
 * @name f__B4CD_0B91_006D_59E5
 * @implements B4CD:0B91:006D:59E5 ()
 *
 * Called From: B4CD:0B8A:0082:AC86
 * Called From: B4CD:0B8A:007D:4F49
 */
void f__B4CD_0B91_006D_59E5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B9C_0062_0F0F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x41);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x323F), 0x8000);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx, emu_dx);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx);
	emu_movw(&emu_es, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x323F), emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); f__B4CD_0C36_0014_30D0();
	f__B4CD_0BFE_000B_6F91();
}

/**
 * Decompiled function f__B4CD_0B9C_0062_0F0F()
 *
 * @name f__B4CD_0B9C_0062_0F0F
 * @implements B4CD:0B9C:0062:0F0F ()
 *
 * Called From: B4CD:0B95:007D:4F49
 * Called From: B4CD:0B95:006D:59E5
 */
void f__B4CD_0B9C_0062_0F0F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x323F), 0x8000);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx, emu_dx);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx);
	emu_movw(&emu_es, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x323F), emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); f__B4CD_0C36_0014_30D0();
	f__B4CD_0BFE_000B_6F91();
}

/**
 * Decompiled function f__B4CD_0BFE_000B_6F91()
 *
 * @name f__B4CD_0BFE_000B_6F91
 * @implements B4CD:0BFE:000B:6F91 ()
 *
 * Called From: B4CD:0BFE:0062:0F0F
 * Called From: B4CD:0BFE:006D:59E5
 */
void f__B4CD_0BFE_000B_6F91()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C09); f__B4CD_0C36_0014_30D0();
	f__B4CD_0C09_000B_8F92();
}

/**
 * Decompiled function f__B4CD_0C09_000B_8F92()
 *
 * @name f__B4CD_0C09_000B_8F92
 * @implements B4CD:0C09:000B:8F92 ()
 *
 * Called From: B4CD:0C09:000B:6F91
 */
void f__B4CD_0C09_000B_8F92()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C14); f__B4CD_0C36_0014_30D0();
	f__B4CD_0C14_000D_B300();
}

/**
 * Decompiled function f__B4CD_0C14_000D_B300()
 *
 * @name f__B4CD_0C14_000D_B300
 * @implements B4CD:0C14:000D:B300 ()
 *
 * Called From: B4CD:0C14:000B:8F92
 */
void f__B4CD_0C14_000D_B300()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C21); f__B4CD_0C36_0014_30D0();
	f__B4CD_0C21_000D_0E04();
}

/**
 * Decompiled function f__B4CD_0C21_000D_0E04()
 *
 * @name f__B4CD_0C21_000D_0E04
 * @implements B4CD:0C21:000D:0E04 ()
 *
 * Called From: B4CD:0C21:000D:B300
 */
void f__B4CD_0C21_000D_0E04()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C2E); f__B4CD_0C36_0014_30D0();
	f__B4CD_0C2E_0008_677C();
}

/**
 * Decompiled function f__B4CD_0C2E_0008_677C()
 *
 * @name f__B4CD_0C2E_0008_677C
 * @implements B4CD:0C2E:0008:677C ()
 *
 * Called From: B4CD:0C2E:000D:0E04
 */
void f__B4CD_0C2E_0008_677C()
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
 * Decompiled function f__B4CD_0C30_0006_F7CE()
 *
 * @name f__B4CD_0C30_0006_F7CE
 * @implements B4CD:0C30:0006:F7CE ()
 *
 * Called From: B4CD:0B22:0013:2DDF
 * Called From: B4CD:0B37:0015:E456
 * Called From: B4CD:0B52:001B:0F50
 */
void f__B4CD_0C30_0006_F7CE()
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
 * Decompiled function f__B4CD_0C36_0014_30D0()
 *
 * @name f__B4CD_0C36_0014_30D0
 * @implements B4CD:0C36:0014:30D0 ()
 *
 * Called From: B4CD:0BFB:0062:0F0F
 * Called From: B4CD:0BFB:006D:59E5
 * Called From: B4CD:0C06:000B:6F91
 * Called From: B4CD:0C11:000B:8F92
 * Called From: B4CD:0C1E:000D:B300
 * Called From: B4CD:0C2B:000D:0E04
 */
void f__B4CD_0C36_0014_30D0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_di, 0xFFF);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0C4A); f__B4CD_0750_0027_7BA5();
	f__B4CD_0C4A_0015_E3CD();
}

/**
 * Decompiled function f__B4CD_0C4A_0015_E3CD()
 *
 * @name f__B4CD_0C4A_0015_E3CD
 * @implements B4CD:0C4A:0015:E3CD ()
 *
 * Called From: B4CD:0C4A:0014:30D0
 */
void f__B4CD_0C4A_0015_E3CD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_flags.zf) { f__B4CD_0C5F_0008_A28B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_flags.zf) { f__B4CD_0C5F_0008_A28B(); return; }
	f__B4CD_0D60_000B_E432(); return;
}

/**
 * Decompiled function f__B4CD_0C5F_0008_A28B()
 *
 * @name f__B4CD_0C5F_0008_A28B
 * @implements B4CD:0C5F:0008:A28B ()
 *
 * Called From: B4CD:0C54:0015:E3CD
 * Called From: B4CD:0C5A:0015:E3CD
 */
void f__B4CD_0C5F_0008_A28B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4CD_0CF9_0009_FEEC(); return;
}

/**
 * Decompiled function f__B4CD_0C67_0016_6AD3()
 *
 * @name f__B4CD_0C67_0016_6AD3
 * @implements B4CD:0C67:0016:6AD3 ()
 *
 * Called From: B4CD:0CFF:0009:FEEC
 * Called From: B4CD:0CFF:000C:0E94
 * Called From: B4CD:0CFF:001C:421B
 */
void f__B4CD_0C67_0016_6AD3()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x255E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0C7D); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0C7D_000C_B8A9();
}

/**
 * Decompiled function f__B4CD_0C7D_000C_B8A9()
 *
 * @name f__B4CD_0C7D_000C_B8A9
 * @implements B4CD:0C7D:000C:B8A9 ()
 *
 * Called From: B4CD:0C7D:0016:6AD3
 */
void f__B4CD_0C7D_000C_B8A9()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0C89); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0C89_0034_F207();
}

/**
 * Decompiled function f__B4CD_0C89_0034_F207()
 *
 * @name f__B4CD_0C89_0034_F207
 * @implements B4CD:0C89:0034:F207 ()
 *
 * Called From: B4CD:0C89:000C:B8A9
 */
void f__B4CD_0C89_0034_F207()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C91; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C97; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C9D; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x40);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0CBD_0007_5E1C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CB1; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CA9; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CBB; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CAF; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	/* Unresolved jump */ emu_ip = 0x0CF6; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CBB; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call();
}

/**
 * Decompiled function f__B4CD_0CBD_0007_5E1C()
 *
 * @name f__B4CD_0CBD_0007_5E1C
 * @implements B4CD:0CBD:0007:5E1C ()
 *
 * Called From: B4CD:0CA3:0034:F207
 */
void f__B4CD_0CBD_0007_5E1C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0CC4); f__B4CD_0750_0027_7BA5();
	f__B4CD_0CC4_0022_DA43();
}

/**
 * Decompiled function f__B4CD_0CC4_0022_DA43()
 *
 * @name f__B4CD_0CC4_0022_DA43
 * @implements B4CD:0CC4:0022:DA43 ()
 *
 * Called From: B4CD:0CC4:0007:5E1C
 */
void f__B4CD_0CC4_0022_DA43()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (!emu_flags.zf) { f__B4CD_0CE6_001C_421B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8);
	if (emu_flags.zf) { f__B4CD_0CDA_000C_4900(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if (!emu_flags.zf) { f__B4CD_0CE4_0002_C83A(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	f__B4CD_0CF6_000C_0E94(); return;
}

/**
 * Decompiled function f__B4CD_0CDA_000C_4900()
 *
 * @name f__B4CD_0CDA_000C_4900
 * @implements B4CD:0CDA:000C:4900 ()
 *
 * Called From: B4CD:0CD2:0022:DA43
 */
void f__B4CD_0CDA_000C_4900()
{
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	f__B4CD_0CF6_000C_0E94(); return;
}

/**
 * Decompiled function f__B4CD_0CE4_0002_C83A()
 *
 * @name f__B4CD_0CE4_0002_C83A
 * @implements B4CD:0CE4:0002:C83A ()
 *
 * Called From: B4CD:0CD8:0022:DA43
 */
void f__B4CD_0CE4_0002_C83A()
{
	f__B4CD_0CF6_000C_0E94(); return;
}

/**
 * Decompiled function f__B4CD_0CE6_001C_421B()
 *
 * @name f__B4CD_0CE6_001C_421B
 * @implements B4CD:0CE6:001C:421B ()
 *
 * Called From: B4CD:0CCC:0022:DA43
 */
void f__B4CD_0CE6_001C_421B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if (!emu_flags.zf) { f__B4CD_0CF6_000C_0E94(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0D02_000B_C089(); return; }
	f__B4CD_0C67_0016_6AD3(); return;
}

/**
 * Decompiled function f__B4CD_0CF6_000C_0E94()
 *
 * @name f__B4CD_0CF6_000C_0E94
 * @implements B4CD:0CF6:000C:0E94 ()
 *
 * Called From: B4CD:0CE4:000C:4900
 * Called From: B4CD:0CE4:0022:DA43
 * Called From: B4CD:0CE4:0002:C83A
 * Called From: B4CD:0CEA:001C:421B
 */
void f__B4CD_0CF6_000C_0E94()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0D02_000B_C089(); return; }
	f__B4CD_0C67_0016_6AD3(); return;
}

/**
 * Decompiled function f__B4CD_0CF9_0009_FEEC()
 *
 * @name f__B4CD_0CF9_0009_FEEC
 * @implements B4CD:0CF9:0009:FEEC ()
 *
 * Called From: B4CD:0C64:0008:A28B
 */
void f__B4CD_0CF9_0009_FEEC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D02; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CFD; emu_last_length = 0x0009; emu_last_crc = 0xFEEC; emu_call(); return; }
	f__B4CD_0C67_0016_6AD3(); return;
}

/**
 * Decompiled function f__B4CD_0D02_000B_C089()
 *
 * @name f__B4CD_0D02_000B_C089
 * @implements B4CD:0D02:000B:C089 ()
 *
 * Called From: B4CD:0CFD:000C:0E94
 * Called From: B4CD:0CFD:001C:421B
 */
void f__B4CD_0D02_000B_C089()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (!emu_flags.zf) { f__B4CD_0D0D_005E_A834(); return; }
	emu_addws(&emu_si, 0x31);
	f__B4CD_0D10_005B_9E2E(); return;
}

/**
 * Decompiled function f__B4CD_0D0D_005E_A834()
 *
 * @name f__B4CD_0D0D_005E_A834
 * @implements B4CD:0D0D:005E:A834 ()
 *
 * Called From: B4CD:0D06:000B:C089
 */
void f__B4CD_0D0D_005E_A834()
{
	emu_addws(&emu_si, 0x41);
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x323F), 0x8000);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx,  0x0), 0xFE00);
	emu_movw(&emu_dx, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x323F), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); f__B4CD_0000_0011_95D0();
	f__B4CD_0D6B_0009_B383();
}

/**
 * Decompiled function f__B4CD_0D10_005B_9E2E()
 *
 * @name f__B4CD_0D10_005B_9E2E
 * @implements B4CD:0D10:005B:9E2E ()
 *
 * Called From: B4CD:0D0B:000B:C089
 */
void f__B4CD_0D10_005B_9E2E()
{
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x323F), 0x8000);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx,  0x0), 0xFE00);
	emu_movw(&emu_dx, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x323F), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); f__B4CD_0000_0011_95D0();
	f__B4CD_0D6B_0009_B383();
}

/**
 * Decompiled function f__B4CD_0D60_000B_E432()
 *
 * @name f__B4CD_0D60_000B_E432
 * @implements B4CD:0D60:000B:E432 ()
 *
 * Called From: B4CD:0C5C:0015:E3CD
 */
void f__B4CD_0D60_000B_E432()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); f__B4CD_0000_0011_95D0();
	f__B4CD_0D6B_0009_B383();
}

/**
 * Decompiled function f__B4CD_0D6B_0009_B383()
 *
 * @name f__B4CD_0D6B_0009_B383
 * @implements B4CD:0D6B:0009:B383 ()
 *
 * Called From: B4CD:0D6B:005B:9E2E
 * Called From: B4CD:0D6B:005E:A834
 * Called From: B4CD:0D6B:000B:E432
 */
void f__B4CD_0D6B_0009_B383()
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
 * Decompiled function f__B4CD_0D74_0020_7CC1()
 *
 * @name f__B4CD_0D74_0020_7CC1
 * @implements B4CD:0D74:0020:7CC1 ()
 *
 * Called From: 34CD:0070:0005:0000
 */
void f__B4CD_0D74_0020_7CC1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__B4CD_0D94_0008_DB39(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_0F85_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0D91_0003_5D9C()
 *
 * @name f__B4CD_0D91_0003_5D9C
 * @implements B4CD:0D91:0003:5D9C ()
 *
 * Called From: B4CD:0F82:0005:63B7
 * Called From: B4CD:0F82:0003:6223
 */
void f__B4CD_0D91_0003_5D9C()
{
	f__B4CD_0F85_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0D94_0008_DB39()
 *
 * @name f__B4CD_0D94_0008_DB39
 * @implements B4CD:0D94:0008:DB39 ()
 *
 * Called From: B4CD:0D8D:0020:7CC1
 */
void f__B4CD_0D94_0008_DB39()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D9C); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0D9C_008E_1E0C();
}

/**
 * Decompiled function f__B4CD_0D9C_008E_1E0C()
 *
 * @name f__B4CD_0D9C_008E_1E0C
 * @implements B4CD:0D9C:008E:1E0C ()
 *
 * Called From: B4CD:0D9C:0008:DB39
 */
void f__B4CD_0D9C_008E_1E0C()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x10);
	if (emu_flags.zf) { f__B4CD_0DD8_0052_A721(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0xE));
	emu_andws(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DD5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DC3; emu_last_length = 0x008E; emu_last_crc = 0x1E0C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x18));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0DD8_0052_A721(); return; }
	emu_movw(&emu_di, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x10);
	if (!emu_flags.zf) { f__B4CD_0E0B_001F_9678(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0xE));
	emu_andws(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DF6; emu_last_length = 0x008E; emu_last_crc = 0x1E0C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x18));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E06; emu_last_length = 0x008E; emu_last_crc = 0x1E0C; emu_call(); return; }
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E68; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E0D; emu_last_length = 0x008E; emu_last_crc = 0x1E0C; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_ip = 0x0001; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E25; emu_last_length = 0x008E; emu_last_crc = 0x1E0C; emu_call();
	f__B4CD_0E2A_000D_60E7();
}

/**
 * Decompiled function f__B4CD_0DD8_0052_A721()
 *
 * @name f__B4CD_0DD8_0052_A721
 * @implements B4CD:0DD8:0052:A721 ()
 *
 * Called From: B4CD:0DAE:008E:1E0C
 * Called From: B4CD:0DD3:008E:1E0C
 */
void f__B4CD_0DD8_0052_A721()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x10);
	if (!emu_flags.zf) { f__B4CD_0E0B_001F_9678(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0xE));
	emu_andws(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_flags.zf) { f__B4CD_0E0B_001F_9678(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x18));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0E0B_001F_9678(); return; }
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E68; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E0D; emu_last_length = 0x0052; emu_last_crc = 0xA721; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E2A_000D_60E7();
}

/**
 * Decompiled function f__B4CD_0E0B_001F_9678()
 *
 * @name f__B4CD_0E0B_001F_9678
 * @implements B4CD:0E0B:001F:9678 ()
 *
 * Called From: B4CD:0DE1:0052:A721
 * Called From: B4CD:0DE1:008E:1E0C
 * Called From: B4CD:0DF6:0052:A721
 * Called From: B4CD:0E06:0052:A721
 */
void f__B4CD_0E0B_001F_9678()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4CD_0E68_000F_A3BC(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E2A_000D_60E7();
}

/**
 * Decompiled function f__B4CD_0E2A_000D_60E7()
 *
 * @name f__B4CD_0E2A_000D_60E7
 * @implements B4CD:0E2A:000D:60E7 ()
 *
 * Called From: B4CD:0E2A:0052:A721
 * Called From: B4CD:0E2A:001F:9678
 */
void f__B4CD_0E2A_000D_60E7()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2574);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E37_0014_9D6D();
}

/**
 * Decompiled function f__B4CD_0E37_0014_9D6D()
 *
 * @name f__B4CD_0E37_0014_9D6D
 * @implements B4CD:0E37:0014:9D6D ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4CD:0E37:000D:60E7
 */
void f__B4CD_0E37_0014_9D6D()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C4), 0x1);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E4B_0002_C03A();
}

/**
 * Decompiled function f__B4CD_0E4B_0002_C03A()
 *
 * @name f__B4CD_0E4B_0002_C03A
 * @implements B4CD:0E4B:0002:C03A ()
 *
 * Called From: B4CD:0E4B:0014:9D6D
 */
void f__B4CD_0E4B_0002_C03A()
{
	f__B4CD_0E4D_0005_7A4B(); return;
}

/**
 * Decompiled function f__B4CD_0E4D_0005_7A4B()
 *
 * @name f__B4CD_0E4D_0005_7A4B
 * @implements B4CD:0E4D:0005:7A4B ()
 *
 * Called From: B4CD:0E4B:0002:C03A
 */
void f__B4CD_0E4D_0005_7A4B()
{
	emu_push(emu_cs); emu_push(0x0E52); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E52_0013_7F23();
}

/**
 * Decompiled function f__B4CD_0E52_0013_7F23()
 *
 * @name f__B4CD_0E52_0013_7F23
 * @implements B4CD:0E52:0013:7F23 ()
 *
 * Called From: B4CD:0E52:0005:7A4B
 */
void f__B4CD_0E52_0013_7F23()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E4D; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E54; emu_last_length = 0x0013; emu_last_crc = 0x7F23; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x3E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E65); emu_cs = 0x3483; ovl__3483(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E65_0012_019A();
}

/**
 * Decompiled function f__B4CD_0E65_0012_019A()
 *
 * @name f__B4CD_0E65_0012_019A
 * @implements B4CD:0E65:0012:019A ()
 *
 * Called From: B4CD:0E65:0013:7F23
 */
void f__B4CD_0E65_0012_019A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4CD_0E77_0009_22AF(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B4CD_0EDA_000F_4404(); return; }
	/* Unresolved jump */ emu_ip = 0x0F4F; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E74; emu_last_length = 0x0012; emu_last_crc = 0x019A; emu_call();
}

/**
 * Decompiled function f__B4CD_0E68_000F_A3BC()
 *
 * @name f__B4CD_0E68_000F_A3BC
 * @implements B4CD:0E68:000F:A3BC ()
 *
 * Called From: B4CD:0E0D:001F:9678
 */
void f__B4CD_0E68_000F_A3BC()
{
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E77; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E6D; emu_last_length = 0x000F; emu_last_crc = 0xA3BC; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EDA; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E72; emu_last_length = 0x000F; emu_last_crc = 0xA3BC; emu_call(); return; }
	f__B4CD_0F4F_0002_C03A(); return;
}

/**
 * Decompiled function f__B4CD_0E77_0009_22AF()
 *
 * @name f__B4CD_0E77_0009_22AF
 * @implements B4CD:0E77:0009:22AF ()
 *
 * Called From: B4CD:0E6D:0012:019A
 */
void f__B4CD_0E77_0009_22AF()
{
	emu_movw(&emu_ax, 0x1C);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E80); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E80_000C_89C5();
}

/**
 * Decompiled function f__B4CD_0E80_000C_89C5()
 *
 * @name f__B4CD_0E80_000C_89C5
 * @implements B4CD:0E80:000C:89C5 ()
 *
 * Called From: B4CD:0E80:0009:22AF
 */
void f__B4CD_0E80_000C_89C5()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E8C); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0E8C_0006_15FB();
}

/**
 * Decompiled function f__B4CD_0E8C_0006_15FB()
 *
 * @name f__B4CD_0E8C_0006_15FB
 * @implements B4CD:0E8C:0006:15FB ()
 *
 * Called From: B4CD:0E8C:000C:89C5
 */
void f__B4CD_0E8C_0006_15FB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	f__B4CD_0ECC_000E_8D40(); return;
}

/**
 * Decompiled function f__B4CD_0E92_001A_BEC5()
 *
 * @name f__B4CD_0E92_001A_BEC5
 * @implements B4CD:0E92:001A:BEC5 ()
 *
 * Called From: B4CD:0ECE:000E:8D40
 * Called From: B4CD:0ECE:0018:A5DB
 */
void f__B4CD_0E92_001A_BEC5()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0EAC); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0EAC_0008_ADED();
}

/**
 * Decompiled function f__B4CD_0EAC_0008_ADED()
 *
 * @name f__B4CD_0EAC_0008_ADED
 * @implements B4CD:0EAC:0008:ADED ()
 *
 * Called From: B4CD:0EAC:001A:BEC5
 */
void f__B4CD_0EAC_0008_ADED()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0EB4); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0EB4_000E_1CF6();
}

/**
 * Decompiled function f__B4CD_0EB4_000E_1CF6()
 *
 * @name f__B4CD_0EB4_000E_1CF6
 * @implements B4CD:0EB4:000E:1CF6 ()
 *
 * Called From: B4CD:0EB4:0008:ADED
 */
void f__B4CD_0EB4_000E_1CF6()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3);
	f__B4CD_0EC2_0018_A5DB(); return;
}

/**
 * Decompiled function f__B4CD_0EC2_0018_A5DB()
 *
 * @name f__B4CD_0EC2_0018_A5DB
 * @implements B4CD:0EC2:0018:A5DB ()
 *
 * Called From: B4CD:0EC0:000E:1CF6
 * Called From: B4CD:0EC9:0018:A5DB
 */
void f__B4CD_0EC2_0018_A5DB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B4CD_0EC2_0018_A5DB(); return; }
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0E92_001A_BEC5(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x10);
	f__B4CD_0F51_000F_9BBA(); return;
}

/**
 * Decompiled function f__B4CD_0ECC_000E_8D40()
 *
 * @name f__B4CD_0ECC_000E_8D40
 * @implements B4CD:0ECC:000E:8D40 ()
 *
 * Called From: B4CD:0E90:0006:15FB
 */
void f__B4CD_0ECC_000E_8D40()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0E92_001A_BEC5(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x4), 0x10);
	/* Unresolved jump */ emu_ip = 0x0F51; emu_last_cs = 0xB4CD; emu_last_ip = 0x0ED8; emu_last_length = 0x000E; emu_last_crc = 0x8D40; emu_call();
}

/**
 * Decompiled function f__B4CD_0EDA_000F_4404()
 *
 * @name f__B4CD_0EDA_000F_4404
 * @implements B4CD:0EDA:000F:4404 ()
 *
 * Called From: B4CD:0E72:0012:019A
 */
void f__B4CD_0EDA_000F_4404()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x3E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x3483; ovl__3483(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0EE9_000C_AA07();
}

/**
 * Decompiled function f__B4CD_0EE9_000C_AA07()
 *
 * @name f__B4CD_0EE9_000C_AA07
 * @implements B4CD:0EE9:000C:AA07 ()
 *
 * Called From: B4CD:0EE9:000F:4404
 */
void f__B4CD_0EE9_000C_AA07()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1D);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF5); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0EF5_0005_F131();
}

/**
 * Decompiled function f__B4CD_0EF5_0005_F131()
 *
 * @name f__B4CD_0EF5_0005_F131
 * @implements B4CD:0EF5:0005:F131 ()
 *
 * Called From: B4CD:0EF5:000C:AA07
 */
void f__B4CD_0EF5_0005_F131()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	f__B4CD_0F34_000B_8C55(); return;
}

/**
 * Decompiled function f__B4CD_0EFA_001A_BEC5()
 *
 * @name f__B4CD_0EFA_001A_BEC5
 * @implements B4CD:0EFA:001A:BEC5 ()
 *
 * Called From: B4CD:0F43:0010:7BD6
 */
void f__B4CD_0EFA_001A_BEC5()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F14); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F14_0008_ADED();
}

/**
 * Decompiled function f__B4CD_0F14_0008_ADED()
 *
 * @name f__B4CD_0F14_0008_ADED
 * @implements B4CD:0F14:0008:ADED ()
 *
 * Called From: B4CD:0F14:001A:BEC5
 */
void f__B4CD_0F14_0008_ADED()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F1C_000E_1CF6();
}

/**
 * Decompiled function f__B4CD_0F1C_000E_1CF6()
 *
 * @name f__B4CD_0F1C_000E_1CF6
 * @implements B4CD:0F1C:000E:1CF6 ()
 *
 * Called From: B4CD:0F1C:0008:ADED
 */
void f__B4CD_0F1C_000E_1CF6()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3);
	f__B4CD_0F2A_0015_5591(); return;
}

/**
 * Decompiled function f__B4CD_0F2A_0015_5591()
 *
 * @name f__B4CD_0F2A_0015_5591
 * @implements B4CD:0F2A:0015:5591 ()
 *
 * Called From: B4CD:0F28:000E:1CF6
 * Called From: B4CD:0F31:0015:5591
 */
void f__B4CD_0F2A_0015_5591()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B4CD_0F2A_0015_5591(); return; }
	emu_incw(&emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F3F); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F3F_0010_7BD6();
}

/**
 * Decompiled function f__B4CD_0F34_000B_8C55()
 *
 * @name f__B4CD_0F34_000B_8C55
 * @implements B4CD:0F34:000B:8C55 ()
 *
 * Called From: B4CD:0EF8:0005:F131
 */
void f__B4CD_0F34_000B_8C55()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F3F); emu_cs = 0x352A; ovl__352A(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F3F_0010_7BD6();
}

/**
 * Decompiled function f__B4CD_0F3F_0010_7BD6()
 *
 * @name f__B4CD_0F3F_0010_7BD6
 * @implements B4CD:0F3F:0010:7BD6 ()
 *
 * Called From: B4CD:0F3F:000B:8C55
 * Called From: B4CD:0F3F:0015:5591
 */
void f__B4CD_0F3F_0010_7BD6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0EFA_001A_BEC5(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x4), 0xEF);
	f__B4CD_0F51_000F_9BBA(); return;
}

/**
 * Decompiled function f__B4CD_0F4F_0002_C03A()
 *
 * @name f__B4CD_0F4F_0002_C03A
 * @implements B4CD:0F4F:0002:C03A ()
 *
 * Called From: B4CD:0E74:000F:A3BC
 */
void f__B4CD_0F4F_0002_C03A()
{
	f__B4CD_0F51_000F_9BBA(); return;
}

/**
 * Decompiled function f__B4CD_0F51_000F_9BBA()
 *
 * @name f__B4CD_0F51_000F_9BBA
 * @implements B4CD:0F51:000F:9BBA ()
 *
 * Called From: B4CD:0ED8:0018:A5DB
 * Called From: B4CD:0F4D:0010:7BD6
 * Called From: B4CD:0F4F:0002:C03A
 */
void f__B4CD_0F51_000F_9BBA()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4CD_0F76_000A_61AF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F60); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F60_000D_976C();
}

/**
 * Decompiled function f__B4CD_0F60_000D_976C()
 *
 * @name f__B4CD_0F60_000D_976C
 * @implements B4CD:0F60:000D:976C ()
 *
 * Called From: B4CD:0F60:000F:9BBA
 */
void f__B4CD_0F60_000D_976C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F6D_0008_D74D();
}

/**
 * Decompiled function f__B4CD_0F6D_0008_D74D()
 *
 * @name f__B4CD_0F6D_0008_D74D
 * @implements B4CD:0F6D:0008:D74D ()
 *
 * Called From: B4CD:0F6D:000D:976C
 */
void f__B4CD_0F6D_0008_D74D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F75); emu_cs = 0x07D4; f__07D4_159A_001D_F971();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0F75_000B_41A4();
}

/**
 * Decompiled function f__B4CD_0F75_000B_41A4()
 *
 * @name f__B4CD_0F75_000B_41A4
 * @implements B4CD:0F75:000B:41A4 ()
 *
 * Called From: B4CD:0F75:0008:D74D
 */
void f__B4CD_0F75_000B_41A4()
{
	emu_pop(&emu_cx);
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { f__B4CD_0F80_0005_63B7(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4CD_0F82_0003_6223(); return;
}

/**
 * Decompiled function f__B4CD_0F76_000A_61AF()
 *
 * @name f__B4CD_0F76_000A_61AF
 * @implements B4CD:0F76:000A:61AF ()
 *
 * Called From: B4CD:0F53:000F:9BBA
 */
void f__B4CD_0F76_000A_61AF()
{
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { f__B4CD_0F80_0005_63B7(); return; }
	emu_movw(&emu_ax, 0x1);
	/* Unresolved jump */ emu_ip = 0x0F82; emu_last_cs = 0xB4CD; emu_last_ip = 0x0F7E; emu_last_length = 0x000A; emu_last_crc = 0x61AF; emu_call();
}

/**
 * Decompiled function f__B4CD_0F80_0005_63B7()
 *
 * @name f__B4CD_0F80_0005_63B7
 * @implements B4CD:0F80:0005:63B7 ()
 *
 * Called From: B4CD:0F79:000A:61AF
 * Called From: B4CD:0F79:000B:41A4
 */
void f__B4CD_0F80_0005_63B7()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_0D91_0003_5D9C(); return;
}

/**
 * Decompiled function f__B4CD_0F82_0003_6223()
 *
 * @name f__B4CD_0F82_0003_6223
 * @implements B4CD:0F82:0003:6223 ()
 *
 * Called From: B4CD:0F7E:000B:41A4
 */
void f__B4CD_0F82_0003_6223()
{
	f__B4CD_0D91_0003_5D9C(); return;
}

/**
 * Decompiled function f__B4CD_0F85_0006_F7CE()
 *
 * @name f__B4CD_0F85_0006_F7CE
 * @implements B4CD:0F85:0006:F7CE ()
 *
 * Called From: B4CD:0D91:0003:5D9C
 * Called From: B4CD:0D91:0020:7CC1
 */
void f__B4CD_0F85_0006_F7CE()
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
 * Decompiled function f__B4CD_0F8B_0015_1689()
 *
 * @name f__B4CD_0F8B_0015_1689
 * @implements B4CD:0F8B:0015:1689 ()
 *
 * Called From: 34CD:0057:0005:0000
 * Called From: B4CD:0810:000C:D969
 * Called From: B4CD:0A34:000B:CB32
 * Called From: B4CD:1B16:000B:60DD
 */
void f__B4CD_0F8B_0015_1689()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_si, 0xC000);
	if (emu_flags.zf) { f__B4CD_0FA1_0006_BB3C(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1013_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0F9C_0004_D1B9()
 *
 * @name f__B4CD_0F9C_0004_D1B9
 * @implements B4CD:0F9C:0004:D1B9 ()
 *
 * Called From: B4CD:100C:0002:873A
 * Called From: B4CD:100C:005E:F3FD
 */
void f__B4CD_0F9C_0004_D1B9()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1013_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0F9E_0002_F9BA()
 *
 * @name f__B4CD_0F9E_0002_F9BA
 * @implements B4CD:0F9E:0002:F9BA ()
 *
 * Called From: B4CD:1011:0005:907A
 */
void f__B4CD_0F9E_0002_F9BA()
{
	f__B4CD_1013_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_0FA1_0006_BB3C()
 *
 * @name f__B4CD_0FA1_0006_BB3C
 * @implements B4CD:0FA1:0006:BB3C ()
 *
 * Called From: B4CD:0F9A:0015:1689
 */
void f__B4CD_0FA1_0006_BB3C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0FA7_0009_C1E1();
}

/**
 * Decompiled function f__B4CD_0FA7_0009_C1E1()
 *
 * @name f__B4CD_0FA7_0009_C1E1
 * @implements B4CD:0FA7:0009:C1E1 ()
 *
 * Called From: B4CD:0FA7:0006:BB3C
 */
void f__B4CD_0FA7_0009_C1E1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FB0); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0FB0_005E_F3FD();
}

/**
 * Decompiled function f__B4CD_0FB0_005E_F3FD()
 *
 * @name f__B4CD_0FB0_005E_F3FD
 * @implements B4CD:0FB0:005E:F3FD ()
 *
 * Called From: B4CD:0FB0:0009:C1E1
 */
void f__B4CD_0FB0_005E_F3FD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx,  0x3C0E), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100C_0002_873A(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100C_0002_873A(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100C_0002_873A(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100E_0005_907A(); return; }
	f__B4CD_0F9C_0004_D1B9(); return;
}

/**
 * Decompiled function f__B4CD_100C_0002_873A()
 *
 * @name f__B4CD_100C_0002_873A
 * @implements B4CD:100C:0002:873A ()
 *
 * Called From: B4CD:0FC0:005E:F3FD
 * Called From: B4CD:0FDC:005E:F3FD
 * Called From: B4CD:0FED:005E:F3FD
 */
void f__B4CD_100C_0002_873A()
{
	f__B4CD_0F9C_0004_D1B9(); return;
}

/**
 * Decompiled function f__B4CD_100E_0005_907A()
 *
 * @name f__B4CD_100E_0005_907A
 * @implements B4CD:100E:0005:907A ()
 *
 * Called From: B4CD:100A:005E:F3FD
 */
void f__B4CD_100E_0005_907A()
{
	emu_movw(&emu_ax, 0x1);
	f__B4CD_0F9E_0002_F9BA(); return;
}

/**
 * Decompiled function f__B4CD_1013_0006_F7CE()
 *
 * @name f__B4CD_1013_0006_F7CE
 * @implements B4CD:1013:0006:F7CE ()
 *
 * Called From: B4CD:0F9E:0004:D1B9
 * Called From: B4CD:0F9E:0002:F9BA
 * Called From: B4CD:0F9E:0015:1689
 */
void f__B4CD_1013_0006_F7CE()
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
 * Decompiled function f__B4CD_1086_0040_F11C()
 *
 * @name f__B4CD_1086_0040_F11C
 * @implements B4CD:1086:0040:F11C ()
 *
 * Called From: 34CD:00C0:0005:0000
 * Called From: B4CD:02EA:0007:65F9
 * Called From: B4CD:02EA:000B:4349
 * Called From: B4CD:1B30:000D:E672
 */
void f__B4CD_1086_0040_F11C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_10E4_0006_4C29(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x3));
	emu_movb(&emu_ah, 0x0);
	emu_decw(&emu_ax);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_10E4_0006_4C29(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	if (emu_flags.zf) { f__B4CD_10C9_0019_CA1D(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_10C6_0003_DB9A();
}

/**
 * Decompiled function f__B4CD_10C6_0003_DB9A()
 *
 * @name f__B4CD_10C6_0003_DB9A
 * @implements B4CD:10C6:0003:DB9A ()
 *
 * Called From: B4CD:10C6:0040:F11C
 * Called From: B4CD:10E2:0002:B13A
 */
void f__B4CD_10C6_0003_DB9A()
{
	emu_pop(&emu_cx);
	f__B4CD_10EA_0004_DE52(); return;
}

/**
 * Decompiled function f__B4CD_10C7_0002_D0BA()
 *
 * @name f__B4CD_10C7_0002_D0BA
 * @implements B4CD:10C7:0002:D0BA ()
 *
 * Called From: B4CD:10E8:0006:4C29
 */
void f__B4CD_10C7_0002_D0BA()
{
	f__B4CD_10EA_0004_DE52(); return;
}

/**
 * Decompiled function f__B4CD_10C9_0019_CA1D()
 *
 * @name f__B4CD_10C9_0019_CA1D
 * @implements B4CD:10C9:0019:CA1D ()
 *
 * Called From: B4CD:10BE:0040:F11C
 */
void f__B4CD_10C9_0019_CA1D()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x20);
	if (emu_flags.zf) { f__B4CD_10E4_0006_4C29(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10E2); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_10E2_0002_B13A();
}

/**
 * Decompiled function f__B4CD_10E2_0002_B13A()
 *
 * @name f__B4CD_10E2_0002_B13A
 * @implements B4CD:10E2:0002:B13A ()
 *
 * Called From: B4CD:10E2:0019:CA1D
 */
void f__B4CD_10E2_0002_B13A()
{
	f__B4CD_10C6_0003_DB9A(); return;
}

/**
 * Decompiled function f__B4CD_10E4_0006_4C29()
 *
 * @name f__B4CD_10E4_0006_4C29
 * @implements B4CD:10E4:0006:4C29 ()
 *
 * Called From: B4CD:1092:0040:F11C
 * Called From: B4CD:10AB:0040:F11C
 * Called From: B4CD:10DA:0019:CA1D
 */
void f__B4CD_10E4_0006_4C29()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_10C7_0002_D0BA(); return;
}

/**
 * Decompiled function f__B4CD_10EA_0004_DE52()
 *
 * @name f__B4CD_10EA_0004_DE52
 * @implements B4CD:10EA:0004:DE52 ()
 *
 * Called From: B4CD:10C7:0002:D0BA
 * Called From: B4CD:10C7:0003:DB9A
 */
void f__B4CD_10EA_0004_DE52()
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
 * Decompiled function f__B4CD_10EE_0039_EC73()
 *
 * @name f__B4CD_10EE_0039_EC73
 * @implements B4CD:10EE:0039:EC73 ()
 *
 * Called From: 34CD:00A2:0005:0000
 * Called From: B4CD:0424:001F:C54A
 * Called From: B4CD:0A58:001B:13AF
 * Called From: B4CD:130A:0009:9EC8
 * Called From: B4CD:1473:001B:2DF2
 * Called From: B4CD:1473:0041:6709
 * Called From: B4CD:14DA:0013:F579
 */
void f__B4CD_10EE_0039_EC73()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_112A_0006_5EA9(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x10);
	if (emu_flags.zf) { f__B4CD_112A_0006_5EA9(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x3));
	emu_movb(&emu_ah, 0x0);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1127); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1127_0003_C81A();
}

/**
 * Decompiled function f__B4CD_1127_0003_C81A()
 *
 * @name f__B4CD_1127_0003_C81A
 * @implements B4CD:1127:0003:C81A ()
 *
 * Called From: B4CD:1127:0039:EC73
 */
void f__B4CD_1127_0003_C81A()
{
	emu_pop(&emu_cx);
	f__B4CD_1130_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_1128_0002_C33A()
 *
 * @name f__B4CD_1128_0002_C33A
 * @implements B4CD:1128:0002:C33A ()
 *
 * Called From: B4CD:112E:0006:5EA9
 */
void f__B4CD_1128_0002_C33A()
{
	f__B4CD_1130_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_112A_0006_5EA9()
 *
 * @name f__B4CD_112A_0006_5EA9
 * @implements B4CD:112A:0006:5EA9 ()
 *
 * Called From: B4CD:10F9:0039:EC73
 * Called From: B4CD:110C:0039:EC73
 */
void f__B4CD_112A_0006_5EA9()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1128_0002_C33A(); return;
}

/**
 * Decompiled function f__B4CD_1130_0003_2E57()
 *
 * @name f__B4CD_1130_0003_2E57
 * @implements B4CD:1130:0003:2E57 ()
 *
 * Called From: B4CD:1128:0002:C33A
 * Called From: B4CD:1128:0003:C81A
 */
void f__B4CD_1130_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1133_0039_A02F()
 *
 * @name f__B4CD_1133_0039_A02F
 * @implements B4CD:1133:0039:A02F ()
 *
 * Called From: 34CD:00B6:0005:0000
 * Called From: B4CD:07C2:0005:7B23
 * Called From: B4CD:131A:0008:9A3D
 */
void f__B4CD_1133_0039_A02F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_116F_0006_5EA9(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x20);
	if (emu_flags.zf) { f__B4CD_116F_0006_5EA9(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x3));
	emu_movb(&emu_ah, 0x0);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x116C); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_116C_0003_C81A();
}

/**
 * Decompiled function f__B4CD_116C_0003_C81A()
 *
 * @name f__B4CD_116C_0003_C81A
 * @implements B4CD:116C:0003:C81A ()
 *
 * Called From: B4CD:116C:0039:A02F
 */
void f__B4CD_116C_0003_C81A()
{
	emu_pop(&emu_cx);
	f__B4CD_1175_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_116D_0002_C33A()
 *
 * @name f__B4CD_116D_0002_C33A
 * @implements B4CD:116D:0002:C33A ()
 *
 * Called From: B4CD:1173:0006:5EA9
 */
void f__B4CD_116D_0002_C33A()
{
	f__B4CD_1175_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_116F_0006_5EA9()
 *
 * @name f__B4CD_116F_0006_5EA9
 * @implements B4CD:116F:0006:5EA9 ()
 *
 * Called From: B4CD:113E:0039:A02F
 * Called From: B4CD:1151:0039:A02F
 */
void f__B4CD_116F_0006_5EA9()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_116D_0002_C33A(); return;
}

/**
 * Decompiled function f__B4CD_1175_0003_2E57()
 *
 * @name f__B4CD_1175_0003_2E57
 * @implements B4CD:1175:0003:2E57 ()
 *
 * Called From: B4CD:116D:0002:C33A
 * Called From: B4CD:116D:0003:C81A
 */
void f__B4CD_1175_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1178_000D_B1D5()
 *
 * @name f__B4CD_1178_000D_B1D5
 * @implements B4CD:1178:000D:B1D5 ()
 *
 * Called From: 34CD:0084:0005:0000
 */
void f__B4CD_1178_000D_B1D5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1185); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1185_000B_7663();
}

/**
 * Decompiled function f__B4CD_1185_000B_7663()
 *
 * @name f__B4CD_1185_000B_7663
 * @implements B4CD:1185:000B:7663 ()
 *
 * Called From: B4CD:1185:000D:B1D5
 */
void f__B4CD_1185_000B_7663()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1190); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1190_002C_481A();
}

/**
 * Decompiled function f__B4CD_1190_002C_481A()
 *
 * @name f__B4CD_1190_002C_481A
 * @implements B4CD:1190:002C:481A ()
 *
 * Called From: B4CD:1190:000B:7663
 */
void f__B4CD_1190_002C_481A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_subws(&emu_si, 0x7);
	emu_subws(&emu_di, 0x5);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_11BC_0040_9F1F(); return; }
	emu_movw(&emu_ax, emu_si);
	f__B4CD_11D7_0025_1314(); return;
}

/**
 * Decompiled function f__B4CD_11BC_0040_9F1F()
 *
 * @name f__B4CD_11BC_0040_9F1F
 * @implements B4CD:11BC:0040:9F1F ()
 *
 * Called From: B4CD:11B6:002C:481A
 */
void f__B4CD_11BC_0040_9F1F()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_11FC_002F_1C91(); return; }
	emu_movw(&emu_ax, emu_di);
	f__B4CD_1217_0014_177A(); return;
}

/**
 * Decompiled function f__B4CD_11D7_0025_1314()
 *
 * @name f__B4CD_11D7_0025_1314
 * @implements B4CD:11D7:0025:1314 ()
 *
 * Called From: B4CD:11BA:002C:481A
 */
void f__B4CD_11D7_0025_1314()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_11FC_002F_1C91(); return; }
	emu_movw(&emu_ax, emu_di);
	f__B4CD_1217_0014_177A(); return;
}

/**
 * Decompiled function f__B4CD_11FC_002F_1C91()
 *
 * @name f__B4CD_11FC_002F_1C91
 * @implements B4CD:11FC:002F:1C91 ()
 *
 * Called From: B4CD:11F6:0025:1314
 * Called From: B4CD:11F6:0040:9F1F
 */
void f__B4CD_11FC_002F_1C91()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx,  0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_122B_0020_30BA(); return; }
	emu_movw(&emu_ax, emu_si);
	f__B4CD_1237_0014_085E(); return;
}

/**
 * Decompiled function f__B4CD_1217_0014_177A()
 *
 * @name f__B4CD_1217_0014_177A
 * @implements B4CD:1217:0014:177A ()
 *
 * Called From: B4CD:11FA:0025:1314
 * Called From: B4CD:11FA:0040:9F1F
 */
void f__B4CD_1217_0014_177A()
{
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx,  0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_122B_0020_30BA(); return; }
	emu_movw(&emu_ax, emu_si);
	f__B4CD_1237_0014_085E(); return;
}

/**
 * Decompiled function f__B4CD_122B_0020_30BA()
 *
 * @name f__B4CD_122B_0020_30BA
 * @implements B4CD:122B:0020:30BA ()
 *
 * Called From: B4CD:1225:0014:177A
 * Called From: B4CD:1225:002F:1C91
 */
void f__B4CD_122B_0020_30BA()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx,  0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_124B_0015_24F3(); return; }
	emu_movw(&emu_ax, emu_di);
	f__B4CD_1257_0009_23D1(); return;
}

/**
 * Decompiled function f__B4CD_1237_0014_085E()
 *
 * @name f__B4CD_1237_0014_085E
 * @implements B4CD:1237:0014:085E ()
 *
 * Called From: B4CD:1229:0014:177A
 * Called From: B4CD:1229:002F:1C91
 */
void f__B4CD_1237_0014_085E()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx,  0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_124B_0015_24F3(); return; }
	emu_movw(&emu_ax, emu_di);
	f__B4CD_1257_0009_23D1(); return;
}

/**
 * Decompiled function f__B4CD_124B_0015_24F3()
 *
 * @name f__B4CD_124B_0015_24F3
 * @implements B4CD:124B:0015:24F3 ()
 *
 * Called From: B4CD:1245:0014:085E
 * Called From: B4CD:1245:0020:30BA
 */
void f__B4CD_124B_0015_24F3()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1260_0009_FFF3();
}

/**
 * Decompiled function f__B4CD_1257_0009_23D1()
 *
 * @name f__B4CD_1257_0009_23D1
 * @implements B4CD:1257:0009:23D1 ()
 *
 * Called From: B4CD:1249:0014:085E
 * Called From: B4CD:1249:0020:30BA
 */
void f__B4CD_1257_0009_23D1()
{
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1260_0009_FFF3();
}

/**
 * Decompiled function f__B4CD_1260_0009_FFF3()
 *
 * @name f__B4CD_1260_0009_FFF3
 * @implements B4CD:1260:0009:FFF3 ()
 *
 * Called From: B4CD:1260:0009:23D1
 * Called From: B4CD:1260:0015:24F3
 */
void f__B4CD_1260_0009_FFF3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FE), emu_ax);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1269_0019_A3E5()
 *
 * @name f__B4CD_1269_0019_A3E5
 * @implements B4CD:1269:0019:A3E5 ()
 *
 * Called From: 34CD:00CA:0005:0000
 * Called From: B4CD:04A5:0008:A0B3
 * Called From: B4CD:08CC:0013:109B
 */
void f__B4CD_1269_0019_A3E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__B4CD_1282_0041_6812(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1381_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_127D_0005_DC8B()
 *
 * @name f__B4CD_127D_0005_DC8B
 * @implements B4CD:127D:0005:DC8B ()
 *
 * Called From: B4CD:12C1:0041:6812
 * Called From: B4CD:12C1:0002:9D3A
 * Called From: B4CD:12EB:0002:883A
 */
void f__B4CD_127D_0005_DC8B()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1381_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_127F_0003_DD1F()
 *
 * @name f__B4CD_127F_0003_DD1F
 * @implements B4CD:127F:0003:DD1F ()
 *
 * Called From: B4CD:137E:0008:92A7
 */
void f__B4CD_127F_0003_DD1F()
{
	f__B4CD_1381_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_1282_0041_6812()
 *
 * @name f__B4CD_1282_0041_6812
 * @implements B4CD:1282:0041:6812 ()
 *
 * Called From: B4CD:127B:0019:A3E5
 */
void f__B4CD_1282_0041_6812()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_12C3_0006_BB3C(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4CD_12C1_0002_9D3A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax, 0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_12C3_0006_BB3C(); return; }
	f__B4CD_127D_0005_DC8B(); return;
}

/**
 * Decompiled function f__B4CD_12C1_0002_9D3A()
 *
 * @name f__B4CD_12C1_0002_9D3A
 * @implements B4CD:12C1:0002:9D3A ()
 *
 * Called From: B4CD:12B4:0041:6812
 */
void f__B4CD_12C1_0002_9D3A()
{
	f__B4CD_127D_0005_DC8B(); return;
}

/**
 * Decompiled function f__B4CD_12C3_0006_BB3C()
 *
 * @name f__B4CD_12C3_0006_BB3C
 * @implements B4CD:12C3:0006:BB3C ()
 *
 * Called From: B4CD:12AB:0041:6812
 * Called From: B4CD:12BF:0041:6812
 */
void f__B4CD_12C3_0006_BB3C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12C9); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_12C9_0009_C1E1();
}

/**
 * Decompiled function f__B4CD_12C9_0009_C1E1()
 *
 * @name f__B4CD_12C9_0009_C1E1
 * @implements B4CD:12C9:0009:C1E1 ()
 *
 * Called From: B4CD:12C9:0006:BB3C
 */
void f__B4CD_12C9_0009_C1E1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12D2); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_12D2_001B_74F7();
}

/**
 * Decompiled function f__B4CD_12D2_001B_74F7()
 *
 * @name f__B4CD_12D2_001B_74F7
 * @implements B4CD:12D2:001B:74F7 ()
 *
 * Called From: B4CD:12D2:0009:C1E1
 */
void f__B4CD_12D2_001B_74F7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x12EB; emu_last_cs = 0xB4CD; emu_last_ip = 0x12DA; emu_last_length = 0x001B; emu_last_crc = 0x74F7; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_12EB_0002_883A(); return; }
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x12EB; emu_last_cs = 0xB4CD; emu_last_ip = 0x12E4; emu_last_length = 0x001B; emu_last_crc = 0x74F7; emu_call(); return; }
	emu_cmpws(&emu_di, 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_12ED_0017_38A6(); return; }
	/* Unresolved jump */ emu_ip = 0x127D; emu_last_cs = 0xB4CD; emu_last_ip = 0x12EB; emu_last_length = 0x001B; emu_last_crc = 0x74F7; emu_call();
}

/**
 * Decompiled function f__B4CD_12EB_0002_883A()
 *
 * @name f__B4CD_12EB_0002_883A
 * @implements B4CD:12EB:0002:883A ()
 *
 * Called From: B4CD:12E0:001B:74F7
 */
void f__B4CD_12EB_0002_883A()
{
	f__B4CD_127D_0005_DC8B(); return;
}

/**
 * Decompiled function f__B4CD_12ED_0017_38A6()
 *
 * @name f__B4CD_12ED_0017_38A6
 * @implements B4CD:12ED:0017:38A6 ()
 *
 * Called From: B4CD:12E9:001B:74F7
 */
void f__B4CD_12ED_0017_38A6()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1304); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1304_0009_9EC8();
}

/**
 * Decompiled function f__B4CD_1304_0009_9EC8()
 *
 * @name f__B4CD_1304_0009_9EC8
 * @implements B4CD:1304:0009:9EC8 ()
 *
 * Called From: B4CD:1304:0017:38A6
 */
void f__B4CD_1304_0009_9EC8()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x130D); f__B4CD_10EE_0039_EC73();
	f__B4CD_130D_0008_0671();
}

/**
 * Decompiled function f__B4CD_130D_0008_0671()
 *
 * @name f__B4CD_130D_0008_0671
 * @implements B4CD:130D:0008:0671 ()
 *
 * Called From: B4CD:130D:0009:9EC8
 */
void f__B4CD_130D_0008_0671()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1315_0008_9A3D();
}

/**
 * Decompiled function f__B4CD_1315_0008_9A3D()
 *
 * @name f__B4CD_1315_0008_9A3D
 * @implements B4CD:1315:0008:9A3D ()
 *
 * Called From: B4CD:1315:0008:0671
 */
void f__B4CD_1315_0008_9A3D()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x131D); f__B4CD_1133_0039_A02F();
	f__B4CD_131D_0030_3072();
}

/**
 * Decompiled function f__B4CD_131D_0030_3072()
 *
 * @name f__B4CD_131D_0030_3072
 * @implements B4CD:131D:0030:3072 ()
 *
 * Called From: B4CD:131D:0008:9A3D
 */
void f__B4CD_131D_0030_3072()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4CD_1348_0005_7FBE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x9), emu_al);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
	if (!emu_flags.zf) { f__B4CD_1348_0005_7FBE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x9), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_D695();
	f__B4CD_134D_000A_D12D();
}

/**
 * Decompiled function f__B4CD_1348_0005_7FBE()
 *
 * @name f__B4CD_1348_0005_7FBE
 * @implements B4CD:1348:0005:7FBE ()
 *
 * Called From: B4CD:132A:0030:3072
 * Called From: B4CD:133E:0030:3072
 */
void f__B4CD_1348_0005_7FBE()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_D695();
	f__B4CD_134D_000A_D12D();
}

/**
 * Decompiled function f__B4CD_134D_000A_D12D()
 *
 * @name f__B4CD_134D_000A_D12D
 * @implements B4CD:134D:000A:D12D ()
 *
 * Called From: B4CD:134D:0005:7FBE
 * Called From: B4CD:134D:0030:3072
 */
void f__B4CD_134D_000A_D12D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_si);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1357); f__B4CD_1387_002A_D695();
	f__B4CD_1357_000A_7128();
}

/**
 * Decompiled function f__B4CD_1357_000A_7128()
 *
 * @name f__B4CD_1357_000A_7128
 * @implements B4CD:1357:000A:7128 ()
 *
 * Called From: B4CD:1357:000A:D12D
 */
void f__B4CD_1357_000A_7128()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_si);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1361); f__B4CD_1387_002A_D695();
	f__B4CD_1361_000C_8CAD();
}

/**
 * Decompiled function f__B4CD_1361_000C_8CAD()
 *
 * @name f__B4CD_1361_000C_8CAD
 * @implements B4CD:1361:000C:8CAD ()
 *
 * Called From: B4CD:1361:000A:7128
 */
void f__B4CD_1361_000C_8CAD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x136D); f__B4CD_1387_002A_D695();
	f__B4CD_136D_000C_71AB();
}

/**
 * Decompiled function f__B4CD_136D_000C_71AB()
 *
 * @name f__B4CD_136D_000C_71AB
 * @implements B4CD:136D:000C:71AB ()
 *
 * Called From: B4CD:136D:000C:8CAD
 */
void f__B4CD_136D_000C_71AB()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1379); f__B4CD_1387_002A_D695();
	f__B4CD_1379_0008_92A7();
}

/**
 * Decompiled function f__B4CD_1379_0008_92A7()
 *
 * @name f__B4CD_1379_0008_92A7
 * @implements B4CD:1379:0008:92A7 ()
 *
 * Called From: B4CD:1379:000C:71AB
 */
void f__B4CD_1379_0008_92A7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	f__B4CD_127F_0003_DD1F(); return;
}

/**
 * Decompiled function f__B4CD_1381_0006_F7CE()
 *
 * @name f__B4CD_1381_0006_F7CE
 * @implements B4CD:1381:0006:F7CE ()
 *
 * Called From: B4CD:127F:0003:DD1F
 * Called From: B4CD:127F:0005:DC8B
 * Called From: B4CD:127F:0019:A3E5
 */
void f__B4CD_1381_0006_F7CE()
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
 * Decompiled function f__B4CD_1387_002A_D695()
 *
 * @name f__B4CD_1387_002A_D695
 * @implements B4CD:1387:002A:D695 ()
 *
 * Called From: B4CD:134A:0005:7FBE
 * Called From: B4CD:134A:0030:3072
 * Called From: B4CD:1354:000A:D12D
 * Called From: B4CD:135E:000A:7128
 * Called From: B4CD:136A:000C:8CAD
 * Called From: B4CD:1376:000C:71AB
 */
void f__B4CD_1387_002A_D695()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_di, 0xFFF);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_13B1_0031_0880(); return; }
	emu_movw(&emu_si, 0xF);
	f__B4CD_1464_0012_772A(); return;
}

/**
 * Decompiled function f__B4CD_13B1_0031_0880()
 *
 * @name f__B4CD_13B1_0031_0880
 * @implements B4CD:13B1:0031:0880 ()
 *
 * Called From: B4CD:13A9:002A:D695
 */
void f__B4CD_13B1_0031_0880()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_si, emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { f__B4CD_13E2_0009_91DC(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x13DF; emu_last_cs = 0xB4CD; emu_last_ip = 0x13D3; emu_last_length = 0x0031; emu_last_crc = 0x0880; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_13E2_0009_91DC(); return; }
	f__B4CD_14C4_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_13E2_0009_91DC()
 *
 * @name f__B4CD_13E2_0009_91DC
 * @implements B4CD:13E2:0009:91DC ()
 *
 * Called From: B4CD:13CD:0031:0880
 * Called From: B4CD:13DD:0031:0880
 */
void f__B4CD_13E2_0009_91DC()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4CD_145E_0018_DC12(); return;
}

/**
 * Decompiled function f__B4CD_13EB_0016_BAD0()
 *
 * @name f__B4CD_13EB_0016_BAD0
 * @implements B4CD:13EB:0016:BAD0 ()
 *
 * Called From: B4CD:1462:0018:DC12
 * Called From: B4CD:1462:0041:6709
 * Called From: B4CD:1462:001B:2DF2
 */
void f__B4CD_13EB_0016_BAD0()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x2566));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1401); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1401_000C_A8AF();
}

/**
 * Decompiled function f__B4CD_1401_000C_A8AF()
 *
 * @name f__B4CD_1401_000C_A8AF
 * @implements B4CD:1401:000C:A8AF ()
 *
 * Called From: B4CD:1401:0016:BAD0
 */
void f__B4CD_1401_000C_A8AF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x140D); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_140D_0028_D1A8();
}

/**
 * Decompiled function f__B4CD_140D_0028_D1A8()
 *
 * @name f__B4CD_140D_0028_D1A8
 * @implements B4CD:140D:0028:D1A8 ()
 *
 * Called From: B4CD:140D:000C:A8AF
 */
void f__B4CD_140D_0028_D1A8()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1429; emu_last_cs = 0xB4CD; emu_last_ip = 0x1415; emu_last_length = 0x0028; emu_last_crc = 0xD1A8; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_1429_000C_5200(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1429; emu_last_cs = 0xB4CD; emu_last_ip = 0x1421; emu_last_length = 0x0028; emu_last_crc = 0xD1A8; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_1435_0041_6709(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	/* Unresolved jump */ emu_ip = 0x145B; emu_last_cs = 0xB4CD; emu_last_ip = 0x1433; emu_last_length = 0x0028; emu_last_crc = 0xD1A8; emu_call();
}

/**
 * Decompiled function f__B4CD_1429_000C_5200()
 *
 * @name f__B4CD_1429_000C_5200
 * @implements B4CD:1429:000C:5200 ()
 *
 * Called From: B4CD:141B:0028:D1A8
 */
void f__B4CD_1429_000C_5200()
{
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	f__B4CD_145B_001B_2DF2(); return;
}

/**
 * Decompiled function f__B4CD_1435_0041_6709()
 *
 * @name f__B4CD_1435_0041_6709
 * @implements B4CD:1435:0041:6709 ()
 *
 * Called From: B4CD:1427:0028:D1A8
 */
void f__B4CD_1435_0041_6709()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x2566));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_145B_001B_2DF2(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_13EB_0016_BAD0(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1466; emu_last_length = 0x0041; emu_last_crc = 0x6709; emu_call(); return; }
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { f__B4CD_1481_0040_C694(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); f__B4CD_10EE_0039_EC73();
	f__B4CD_1476_0008_0671();
}

/**
 * Decompiled function f__B4CD_145B_001B_2DF2()
 *
 * @name f__B4CD_145B_001B_2DF2
 * @implements B4CD:145B:001B:2DF2 ()
 *
 * Called From: B4CD:1433:000C:5200
 * Called From: B4CD:144F:0041:6709
 */
void f__B4CD_145B_001B_2DF2()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_13EB_0016_BAD0(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4CD_149A_0027_F865(); return; }
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1481; emu_last_cs = 0xB4CD; emu_last_ip = 0x146B; emu_last_length = 0x001B; emu_last_crc = 0x2DF2; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); f__B4CD_10EE_0039_EC73();
	f__B4CD_1476_0008_0671();
}

/**
 * Decompiled function f__B4CD_145E_0018_DC12()
 *
 * @name f__B4CD_145E_0018_DC12
 * @implements B4CD:145E:0018:DC12 ()
 *
 * Called From: B4CD:13E9:0009:91DC
 */
void f__B4CD_145E_0018_DC12()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_13EB_0016_BAD0(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1466; emu_last_length = 0x0018; emu_last_crc = 0xDC12; emu_call(); return; }
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1481; emu_last_cs = 0xB4CD; emu_last_ip = 0x146B; emu_last_length = 0x0018; emu_last_crc = 0xDC12; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1476); emu_ip = 0x10EE; emu_last_cs = 0xB4CD; emu_last_ip = 0x1473; emu_last_length = 0x0018; emu_last_crc = 0xDC12; emu_call();
	f__B4CD_1476_0008_0671();
}

/**
 * Decompiled function f__B4CD_1464_0012_772A()
 *
 * @name f__B4CD_1464_0012_772A
 * @implements B4CD:1464:0012:772A ()
 *
 * Called From: B4CD:13AE:002A:D695
 */
void f__B4CD_1464_0012_772A()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1466; emu_last_length = 0x0012; emu_last_crc = 0x772A; emu_call(); return; }
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { f__B4CD_1481_0040_C694(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1476); emu_ip = 0x10EE; emu_last_cs = 0xB4CD; emu_last_ip = 0x1473; emu_last_length = 0x0012; emu_last_crc = 0x772A; emu_call();
	f__B4CD_1476_0008_0671();
}

/**
 * Decompiled function f__B4CD_1476_0008_0671()
 *
 * @name f__B4CD_1476_0008_0671
 * @implements B4CD:1476:0008:0671 ()
 *
 * Called From: B4CD:1476:001B:2DF2
 * Called From: B4CD:1476:0041:6709
 */
void f__B4CD_1476_0008_0671()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x147E); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_147E_0043_D5C5();
}

/**
 * Decompiled function f__B4CD_147E_0043_D5C5()
 *
 * @name f__B4CD_147E_0043_D5C5
 * @implements B4CD:147E:0043:D5C5 ()
 *
 * Called From: B4CD:147E:0008:0671
 */
void f__B4CD_147E_0043_D5C5()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0xE));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx,  0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x1), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); f__B4CD_0000_0011_95D0();
	f__B4CD_14C1_0009_B383();
}

/**
 * Decompiled function f__B4CD_1481_0040_C694()
 *
 * @name f__B4CD_1481_0040_C694
 * @implements B4CD:1481:0040:C694 ()
 *
 * Called From: B4CD:146B:0041:6709
 * Called From: B4CD:146B:0012:772A
 */
void f__B4CD_1481_0040_C694()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0xE));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx,  0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x1), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); f__B4CD_0000_0011_95D0();
	f__B4CD_14C1_0009_B383();
}

/**
 * Decompiled function f__B4CD_149A_0027_F865()
 *
 * @name f__B4CD_149A_0027_F865
 * @implements B4CD:149A:0027:F865 ()
 *
 * Called From: B4CD:1466:001B:2DF2
 */
void f__B4CD_149A_0027_F865()
{
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx,  0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x1), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); f__B4CD_0000_0011_95D0();
	f__B4CD_14C1_0009_B383();
}

/**
 * Decompiled function f__B4CD_14C1_0009_B383()
 *
 * @name f__B4CD_14C1_0009_B383
 * @implements B4CD:14C1:0009:B383 ()
 *
 * Called From: B4CD:14C1:0040:C694
 * Called From: B4CD:14C1:0043:D5C5
 * Called From: B4CD:14C1:0027:F865
 */
void f__B4CD_14C1_0009_B383()
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
 * Decompiled function f__B4CD_14C4_0006_F7CE()
 *
 * @name f__B4CD_14C4_0006_F7CE
 * @implements B4CD:14C4:0006:F7CE ()
 *
 * Called From: B4CD:13DF:0031:0880
 */
void f__B4CD_14C4_0006_F7CE()
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
 * Decompiled function f__B4CD_14CA_0013_F579()
 *
 * @name f__B4CD_14CA_0013_F579
 * @implements B4CD:14CA:0013:F579 ()
 *
 * Called From: 34CD:0093:0005:0000
 */
void f__B4CD_14CA_0013_F579()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { f__B4CD_152A_0012_EEB2(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x14DD); f__B4CD_10EE_0039_EC73();
	f__B4CD_14DD_0008_D276();
}

/**
 * Decompiled function f__B4CD_14DD_0008_D276()
 *
 * @name f__B4CD_14DD_0008_D276
 * @implements B4CD:14DD:0008:D276 ()
 *
 * Called From: B4CD:14DD:0013:F579
 */
void f__B4CD_14DD_0008_D276()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14E5); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_14E5_0036_B84B();
}

/**
 * Decompiled function f__B4CD_14E5_0036_B84B()
 *
 * @name f__B4CD_14E5_0036_B84B
 * @implements B4CD:14E5:0036:B84B ()
 *
 * Called From: B4CD:14E5:0008:D276
 */
void f__B4CD_14E5_0036_B84B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x323F));
	emu_andw(&emu_ax, 0x7FFF);
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x151B); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_151B_000C_452A();
}

/**
 * Decompiled function f__B4CD_151B_000C_452A()
 *
 * @name f__B4CD_151B_000C_452A
 * @implements B4CD:151B:000C:452A ()
 *
 * Called From: B4CD:151B:0036:B84B
 */
void f__B4CD_151B_000C_452A()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x13);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1527); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1527_0015_ABE6();
}

/**
 * Decompiled function f__B4CD_1527_0015_ABE6()
 *
 * @name f__B4CD_1527_0015_ABE6
 * @implements B4CD:1527:0015:ABE6 ()
 *
 * Called From: B4CD:1527:000C:452A
 */
void f__B4CD_1527_0015_ABE6()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__B4CD_153D_0009_3AEC(); return; }
	emu_movw(&emu_ax, 0x24);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_153C_000A_2CAC();
}

/**
 * Decompiled function f__B4CD_152A_0012_EEB2()
 *
 * @name f__B4CD_152A_0012_EEB2
 * @implements B4CD:152A:0012:EEB2 ()
 *
 * Called From: B4CD:14D6:0013:F579
 */
void f__B4CD_152A_0012_EEB2()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__B4CD_153D_0009_3AEC(); return; }
	emu_movw(&emu_ax, 0x24);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1537; emu_last_length = 0x0012; emu_last_crc = 0xEEB2; emu_call();
	f__B4CD_153C_000A_2CAC();
}

/**
 * Decompiled function f__B4CD_153C_000A_2CAC()
 *
 * @name f__B4CD_153C_000A_2CAC
 * @implements B4CD:153C:000A:2CAC ()
 *
 * Called From: B4CD:153C:0015:ABE6
 */
void f__B4CD_153C_000A_2CAC()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1546); f__B4CD_154C_0015_B7FB();
	f__B4CD_1546_0006_FC98();
}

/**
 * Decompiled function f__B4CD_153D_0009_3AEC()
 *
 * @name f__B4CD_153D_0009_3AEC
 * @implements B4CD:153D:0009:3AEC ()
 *
 * Called From: B4CD:1531:0012:EEB2
 * Called From: B4CD:1531:0015:ABE6
 */
void f__B4CD_153D_0009_3AEC()
{
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1546); f__B4CD_154C_0015_B7FB();
	f__B4CD_1546_0006_FC98();
}

/**
 * Decompiled function f__B4CD_1546_0006_FC98()
 *
 * @name f__B4CD_1546_0006_FC98
 * @implements B4CD:1546:0006:FC98 ()
 *
 * Called From: B4CD:1546:0009:3AEC
 * Called From: B4CD:1546:000A:2CAC
 */
void f__B4CD_1546_0006_FC98()
{
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
 * Decompiled function f__B4CD_154C_0015_B7FB()
 *
 * @name f__B4CD_154C_0015_B7FB
 * @implements B4CD:154C:0015:B7FB ()
 *
 * Called From: B4CD:1543:0009:3AEC
 * Called From: B4CD:1543:000A:2CAC
 */
void f__B4CD_154C_0015_B7FB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4CD_1561_0006_BF3C(); return; }
	/* Unresolved jump */ emu_ip = 0x1606; emu_last_cs = 0xB4CD; emu_last_ip = 0x155E; emu_last_length = 0x0015; emu_last_crc = 0xB7FB; emu_call();
}

/**
 * Decompiled function f__B4CD_1561_0006_BF3C()
 *
 * @name f__B4CD_1561_0006_BF3C
 * @implements B4CD:1561:0006:BF3C ()
 *
 * Called From: B4CD:155C:0015:B7FB
 */
void f__B4CD_1561_0006_BF3C()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1567_000A_1EC9();
}

/**
 * Decompiled function f__B4CD_1567_000A_1EC9()
 *
 * @name f__B4CD_1567_000A_1EC9
 * @implements B4CD:1567:000A:1EC9 ()
 *
 * Called From: B4CD:1567:0006:BF3C
 */
void f__B4CD_1567_000A_1EC9()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1571); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1571_000D_9D84();
}

/**
 * Decompiled function f__B4CD_1571_000D_9D84()
 *
 * @name f__B4CD_1571_000D_9D84
 * @implements B4CD:1571:000D:9D84 ()
 *
 * Called From: B4CD:1571:000A:1EC9
 */
void f__B4CD_1571_000D_9D84()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__B4CD_15F6_000E_1B50(); return;
}

/**
 * Decompiled function f__B4CD_157E_0009_AFDE()
 *
 * @name f__B4CD_157E_0009_AFDE
 * @implements B4CD:157E:0009:AFDE ()
 *
 * Called From: B4CD:15F9:000E:1B50
 * Called From: B4CD:15F9:0019:7F4A
 */
void f__B4CD_157E_0009_AFDE()
{
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	f__B4CD_15EE_0016_B8CD(); return;
}

/**
 * Decompiled function f__B4CD_1587_0013_97E3()
 *
 * @name f__B4CD_1587_0013_97E3
 * @implements B4CD:1587:0013:97E3 ()
 *
 * Called From: B4CD:15F1:0016:B8CD
 * Called From: B4CD:15F1:0019:7F4A
 */
void f__B4CD_1587_0013_97E3()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x159A); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_159A_000E_56C5();
}

/**
 * Decompiled function f__B4CD_159A_000E_56C5()
 *
 * @name f__B4CD_159A_000E_56C5
 * @implements B4CD:159A:000E:56C5 ()
 *
 * Called From: B4CD:159A:0013:97E3
 */
void f__B4CD_159A_000E_56C5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x15A8); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_15A8_0014_B701();
}

/**
 * Decompiled function f__B4CD_15A8_0014_B701()
 *
 * @name f__B4CD_15A8_0014_B701
 * @implements B4CD:15A8:0014:B701 ()
 *
 * Called From: B4CD:15A8:000E:56C5
 */
void f__B4CD_15A8_0014_B701()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_15C1_0007_5BAD(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_si);
	if (!emu_flags.zf) { f__B4CD_15EB_0019_7F4A(); return; }
	emu_push(emu_cs); emu_push(0x15BC); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_15BC_000C_5B07();
}

/**
 * Decompiled function f__B4CD_15BC_000C_5B07()
 *
 * @name f__B4CD_15BC_000C_5B07
 * @implements B4CD:15BC:000C:5B07 ()
 *
 * Called From: B4CD:15BC:0014:B701
 */
void f__B4CD_15BC_000C_5B07()
{
	emu_testw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4CD_15EB_0019_7F4A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15C8); f__B4CD_0750_0027_7BA5();
	f__B4CD_15C8_0011_D4BE();
}

/**
 * Decompiled function f__B4CD_15C1_0007_5BAD()
 *
 * @name f__B4CD_15C1_0007_5BAD
 * @implements B4CD:15C1:0007:5BAD ()
 *
 * Called From: B4CD:15B0:0014:B701
 */
void f__B4CD_15C1_0007_5BAD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15C8); f__B4CD_0750_0027_7BA5();
	f__B4CD_15C8_0011_D4BE();
}

/**
 * Decompiled function f__B4CD_15C8_0011_D4BE()
 *
 * @name f__B4CD_15C8_0011_D4BE
 * @implements B4CD:15C8:0011:D4BE ()
 *
 * Called From: B4CD:15C8:000C:5B07
 * Called From: B4CD:15C8:0007:5BAD
 */
void f__B4CD_15C8_0011_D4BE()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_flags.zf) { f__B4CD_15EB_0019_7F4A(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15D9); f__B4CD_0AFA_0011_D5DB();
	f__B4CD_15D9_0011_3494();
}

/**
 * Decompiled function f__B4CD_15D9_0011_3494()
 *
 * @name f__B4CD_15D9_0011_3494
 * @implements B4CD:15D9:0011:3494 ()
 *
 * Called From: B4CD:15D9:0011:D4BE
 */
void f__B4CD_15D9_0011_3494()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4CD_15EB_0019_7F4A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x15EA); emu_cs = 0x07D4; emu_ip = 0x02F8; emu_last_cs = 0xB4CD; emu_last_ip = 0x15E5; emu_last_length = 0x0011; emu_last_crc = 0x3494; emu_call();
	/* Unresolved jump */ emu_ip = 0x15EA; emu_last_cs = 0xB4CD; emu_last_ip = 0x15EA; emu_last_length = 0x0011; emu_last_crc = 0x3494; emu_call();
}

/**
 * Decompiled function f__B4CD_15EB_0019_7F4A()
 *
 * @name f__B4CD_15EB_0019_7F4A
 * @implements B4CD:15EB:0019:7F4A ()
 *
 * Called From: B4CD:15B5:0014:B701
 * Called From: B4CD:15BF:000C:5B07
 * Called From: B4CD:15CC:0011:D4BE
 * Called From: B4CD:15E0:0011:3494
 */
void f__B4CD_15EB_0019_7F4A()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1587_0013_97E3(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_157E_0009_AFDE(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1604); f__B4CD_0AFA_0011_D5DB();
	f__B4CD_1604_0008_AE7C();
}

/**
 * Decompiled function f__B4CD_15EE_0016_B8CD()
 *
 * @name f__B4CD_15EE_0016_B8CD
 * @implements B4CD:15EE:0016:B8CD ()
 *
 * Called From: B4CD:1585:0009:AFDE
 */
void f__B4CD_15EE_0016_B8CD()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1587_0013_97E3(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x157E; emu_last_cs = 0xB4CD; emu_last_ip = 0x15F9; emu_last_length = 0x0016; emu_last_crc = 0xB8CD; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1604); emu_ip = 0x0AFA; emu_last_cs = 0xB4CD; emu_last_ip = 0x1601; emu_last_length = 0x0016; emu_last_crc = 0xB8CD; emu_call();
	f__B4CD_1604_0008_AE7C();
}

/**
 * Decompiled function f__B4CD_15F6_000E_1B50()
 *
 * @name f__B4CD_15F6_000E_1B50
 * @implements B4CD:15F6:000E:1B50 ()
 *
 * Called From: B4CD:157C:000D:9D84
 */
void f__B4CD_15F6_000E_1B50()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_157E_0009_AFDE(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1604); emu_ip = 0x0AFA; emu_last_cs = 0xB4CD; emu_last_ip = 0x1601; emu_last_length = 0x000E; emu_last_crc = 0x1B50; emu_call();
	f__B4CD_1604_0008_AE7C();
}

/**
 * Decompiled function f__B4CD_1604_0008_AE7C()
 *
 * @name f__B4CD_1604_0008_AE7C
 * @implements B4CD:1604:0008:AE7C ()
 *
 * Called From: B4CD:1604:0019:7F4A
 */
void f__B4CD_1604_0008_AE7C()
{
	emu_pop(&emu_cx);
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
 * Decompiled function f__B4CD_17DC_0019_CB46()
 *
 * @name f__B4CD_17DC_0019_CB46
 * @implements B4CD:17DC:0019:CB46 ()
 *
 * Called From: 34CD:007F:0005:0000
 * Called From: B4CD:00D1:000A:13D1
 */
void f__B4CD_17DC_0019_CB46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x3952));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x0));
	emu_movb(&emu_ah, 0x0);
	emu_andw(&emu_ax, 0x7);
	f__B4CD_17F5_0002_2597(); return;
}

/**
 * Decompiled function f__B4CD_17F5_0002_2597()
 *
 * @name f__B4CD_17F5_0002_2597
 * @implements B4CD:17F5:0002:2597 ()
 *
 * Called From: B4CD:17F3:0019:CB46
 */
void f__B4CD_17F5_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_17F7_001D_1CA2()
 *
 * @name f__B4CD_17F7_001D_1CA2
 * @implements B4CD:17F7:001D:1CA2 ()
 *
 * Called From: 34CD:005C:0005:0000
 */
void f__B4CD_17F7_001D_1CA2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x3952));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x0));
	emu_movb(&emu_ah, 0x0);
	emu_andw(&emu_ax, 0xF0);
	emu_movb(&emu_cl, 0x4);
	emu_sarw(&emu_ax, emu_cl);
	f__B4CD_1814_0002_2597(); return;
}

/**
 * Decompiled function f__B4CD_1814_0002_2597()
 *
 * @name f__B4CD_1814_0002_2597
 * @implements B4CD:1814:0002:2597 ()
 *
 * Called From: B4CD:1812:001D:1CA2
 */
void f__B4CD_1814_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1816_0033_B55B()
 *
 * @name f__B4CD_1816_0033_B55B
 * @implements B4CD:1816:0033:B55B ()
 *
 * Called From: 34CD:0098:0005:0000
 */
void f__B4CD_1816_0033_B55B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x256E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x6);
	if (!emu_flags.zf) { f__B4CD_1881_0003_9C0D(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1849); emu_cs = 0x1082; emu_Building_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1849_0005_97AE();
}

/**
 * Decompiled function f__B4CD_1849_0005_97AE()
 *
 * @name f__B4CD_1849_0005_97AE
 * @implements B4CD:1849:0005:97AE ()
 *
 * Called From: B4CD:1849:0033:B55B
 */
void f__B4CD_1849_0005_97AE()
{
	emu_addws(&emu_sp, 0x8);
	f__B4CD_1873_0011_449B(); return;
}

/**
 * Decompiled function f__B4CD_184E_0018_18AB()
 *
 * @name f__B4CD_184E_0018_18AB
 * @implements B4CD:184E:0018:18AB ()
 *
 * Called From: B4CD:187F:0011:449B
 * Called From: B4CD:187F:0013:0FAD
 */
void f__B4CD_184E_0018_18AB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_flags.zf) { f__B4CD_1866_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	f__B4CD_1881_0003_9C0D(); return;
}

/**
 * Decompiled function f__B4CD_1866_000B_166D()
 *
 * @name f__B4CD_1866_000B_166D
 * @implements B4CD:1866:000B:166D ()
 *
 * Called From: B4CD:1858:0018:18AB
 */
void f__B4CD_1866_000B_166D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1871); emu_cs = 0x1082; emu_Building_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1871_0013_0FAD();
}

/**
 * Decompiled function f__B4CD_1871_0013_0FAD()
 *
 * @name f__B4CD_1871_0013_0FAD
 * @implements B4CD:1871:0013:0FAD ()
 *
 * Called From: B4CD:1871:000B:166D
 */
void f__B4CD_1871_0013_0FAD()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4CD_184E_0018_18AB(); return; }
	/* Unresolved jump */ emu_ip = 0x1B3A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1881; emu_last_length = 0x0013; emu_last_crc = 0x0FAD; emu_call();
}

/**
 * Decompiled function f__B4CD_1873_0011_449B()
 *
 * @name f__B4CD_1873_0011_449B
 * @implements B4CD:1873:0011:449B ()
 *
 * Called From: B4CD:184C:0005:97AE
 */
void f__B4CD_1873_0011_449B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4CD_184E_0018_18AB(); return; }
	/* Unresolved jump */ emu_ip = 0x1B3A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1881; emu_last_length = 0x0011; emu_last_crc = 0x449B; emu_call();
}

/**
 * Decompiled function f__B4CD_1881_0003_9C0D()
 *
 * @name f__B4CD_1881_0003_9C0D
 * @implements B4CD:1881:0003:9C0D ()
 *
 * Called From: B4CD:1834:0033:B55B
 * Called From: B4CD:1864:0018:18AB
 */
void f__B4CD_1881_0003_9C0D()
{
	f__B4CD_1B3A_0007_480D(); return;
}

/**
 * Decompiled function f__B4CD_1884_000B_06D0()
 *
 * @name f__B4CD_1884_000B_06D0
 * @implements B4CD:1884:000B:06D0 ()
 *
 * Called From: B4CD:1B3E:0007:480D
 * Called From: B4CD:1B3E:000E:EBDE
 */
void f__B4CD_1884_000B_06D0()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_bx, 0x7);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_188F_0007_A5AC(); return; }
	/* Unresolved jump */ emu_ip = 0x1B22; emu_last_cs = 0xB4CD; emu_last_ip = 0x188C; emu_last_length = 0x000B; emu_last_crc = 0x06D0; emu_call();
}

/**
 * Decompiled function f__B4CD_188F_0007_A5AC()
 *
 * @name f__B4CD_188F_0007_A5AC
 * @implements B4CD:188F:0007:A5AC ()
 *
 * Called From: B4CD:188A:000B:06D0
 */
void f__B4CD_188F_0007_A5AC()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx,  0x1B4B);
	switch (emu_ip) {
		case 0x1896: f__B4CD_1896_0028_64E3(); return;
		case 0x18D9: f__B4CD_18D9_0018_7F2B(); return;
		case 0x191D: f__B4CD_191D_001E_DD2D(); return;
		case 0x193B: f__B4CD_193B_0018_7F2B(); return;
		case 0x1A30: f__B4CD_1A30_0010_6E76(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x1891; emu_last_length = 0x0007; emu_last_crc = 0xA5AC;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4CD_1896_0028_64E3()
 *
 * @name f__B4CD_1896_0028_64E3
 * @implements B4CD:1896:0028:64E3 ()
 *
 * Called From: B4CD:1891:0007:A5AC
 */
void f__B4CD_1896_0028_64E3()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18BE); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18BE_0014_F426();
}

/**
 * Decompiled function f__B4CD_18A5_0019_7F1B()
 *
 * @name f__B4CD_18A5_0019_7F1B
 * @implements B4CD:18A5:0019:7F1B ()
 *
 * Called From: B4CD:1938:001E:DD2D
 */
void f__B4CD_18A5_0019_7F1B()
{
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18BE); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18BE_0014_F426();
}

/**
 * Decompiled function f__B4CD_18BE_0014_F426()
 *
 * @name f__B4CD_18BE_0014_F426
 * @implements B4CD:18BE:0014:F426 ()
 *
 * Called From: B4CD:18BE:0019:7F1B
 * Called From: B4CD:18BE:0028:64E3
 */
void f__B4CD_18BE_0014_F426()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18D2_0007_3CD7();
}

/**
 * Decompiled function f__B4CD_18CC_0006_433A()
 *
 * @name f__B4CD_18CC_0006_433A
 * @implements B4CD:18CC:0006:433A ()
 *
 * Called From: B4CD:191B:002C:A4D0
 * Called From: B4CD:1971:0021:6DF8
 */
void f__B4CD_18CC_0006_433A()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18D2_0007_3CD7();
}

/**
 * Decompiled function f__B4CD_18D2_0007_3CD7()
 *
 * @name f__B4CD_18D2_0007_3CD7
 * @implements B4CD:18D2:0007:3CD7 ()
 *
 * Called From: B4CD:18D2:0006:433A
 * Called From: B4CD:18D2:0014:F426
 */
void f__B4CD_18D2_0007_3CD7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	f__B4CD_1B26_000D_E672(); return;
}

/**
 * Decompiled function f__B4CD_18D9_0018_7F2B()
 *
 * @name f__B4CD_18D9_0018_7F2B
 * @implements B4CD:18D9:0018:7F2B ()
 *
 * Called From: B4CD:1891:0007:A5AC
 */
void f__B4CD_18D9_0018_7F2B()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18F1); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18F1_002C_A4D0();
}

/**
 * Decompiled function f__B4CD_18F1_002C_A4D0()
 *
 * @name f__B4CD_18F1_002C_A4D0
 * @implements B4CD:18F1:002C:A4D0 ()
 *
 * Called From: B4CD:18F1:0018:7F2B
 */
void f__B4CD_18F1_002C_A4D0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C12));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4CD_18CC_0006_433A(); return;
}

/**
 * Decompiled function f__B4CD_191D_001E_DD2D()
 *
 * @name f__B4CD_191D_001E_DD2D
 * @implements B4CD:191D:001E:DD2D ()
 *
 * Called From: B4CD:1891:0007:A5AC
 */
void f__B4CD_191D_001E_DD2D()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4CD_18A5_0019_7F1B(); return;
}

/**
 * Decompiled function f__B4CD_193B_0018_7F2B()
 *
 * @name f__B4CD_193B_0018_7F2B
 * @implements B4CD:193B:0018:7F2B ()
 *
 * Called From: B4CD:1891:0007:A5AC
 */
void f__B4CD_193B_0018_7F2B()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C14));
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1953); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1953_0021_6DF8();
}

/**
 * Decompiled function f__B4CD_1953_0021_6DF8()
 *
 * @name f__B4CD_1953_0021_6DF8
 * @implements B4CD:1953:0021:6DF8 ()
 *
 * Called From: B4CD:1953:0018:7F2B
 */
void f__B4CD_1953_0021_6DF8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C10));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx,  0x3C0E));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4CD_18CC_0006_433A(); return;
}

/**
 * Decompiled function f__B4CD_1A30_0010_6E76()
 *
 * @name f__B4CD_1A30_0010_6E76
 * @implements B4CD:1A30:0010:6E76 ()
 *
 * Called From: B4CD:1891:0007:A5AC
 */
void f__B4CD_1A30_0010_6E76()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1A40); emu_cs = 0x1082; emu_Building_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1A40_0029_FA07();
}

/**
 * Decompiled function f__B4CD_1A40_0029_FA07()
 *
 * @name f__B4CD_1A40_0029_FA07
 * @implements B4CD:1A40:0029:FA07 ()
 *
 * Called From: B4CD:1A40:0010:6E76
 */
void f__B4CD_1A40_0029_FA07()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1A7A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1A4F; emu_last_length = 0x0029; emu_last_crc = 0xFA07; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x78);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx,  0xA));
	emu_push(emu_cs); emu_push(0x1A69); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1A69_000A_CB50();
}

/**
 * Decompiled function f__B4CD_1A69_000A_CB50()
 *
 * @name f__B4CD_1A69_000A_CB50
 * @implements B4CD:1A69:000A:CB50 ()
 *
 * Called From: B4CD:1A69:0029:FA07
 */
void f__B4CD_1A69_000A_CB50()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A73); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1A73_0007_7DE1();
}

/**
 * Decompiled function f__B4CD_1A73_0007_7DE1()
 *
 * @name f__B4CD_1A73_0007_7DE1
 * @implements B4CD:1A73:0007:7DE1 ()
 *
 * Called From: B4CD:1A73:000A:CB50
 */
void f__B4CD_1A73_0007_7DE1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	f__B4CD_1B0E_000B_60DD(); return;
}

/**
 * Decompiled function f__B4CD_1B0E_000B_60DD()
 *
 * @name f__B4CD_1B0E_000B_60DD
 * @implements B4CD:1B0E:000B:60DD ()
 *
 * Called From: B4CD:1A77:0007:7DE1
 */
void f__B4CD_1B0E_000B_60DD()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B20; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B12; emu_last_length = 0x000B; emu_last_crc = 0x60DD; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1B19); f__B4CD_0F8B_0015_1689();
	f__B4CD_1B19_0009_B244();
}

/**
 * Decompiled function f__B4CD_1B19_0009_B244()
 *
 * @name f__B4CD_1B19_0009_B244
 * @implements B4CD:1B19:0009:B244 ()
 *
 * Called From: B4CD:1B19:000B:60DD
 */
void f__B4CD_1B19_0009_B244()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4CD_1B20_0002_C23A(); return; }
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x1B26; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B20; emu_last_length = 0x0009; emu_last_crc = 0xB244; emu_call();
}

/**
 * Decompiled function f__B4CD_1B20_0002_C23A()
 *
 * @name f__B4CD_1B20_0002_C23A
 * @implements B4CD:1B20:0002:C23A ()
 *
 * Called From: B4CD:1B1C:0009:B244
 */
void f__B4CD_1B20_0002_C23A()
{
	f__B4CD_1B26_000D_E672(); return;
}

/**
 * Decompiled function f__B4CD_1B24_0002_CFBA()
 *
 * @name f__B4CD_1B24_0002_CFBA
 * @implements B4CD:1B24:0002:CFBA ()
 *
 * Called From: B4CD:1B43:0004:0772
 */
void f__B4CD_1B24_0002_CFBA()
{
	f__B4CD_1B45_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_1B26_000D_E672()
 *
 * @name f__B4CD_1B26_000D_E672
 * @implements B4CD:1B26:000D:E672 ()
 *
 * Called From: B4CD:18D6:0007:3CD7
 * Called From: B4CD:1B20:0002:C23A
 */
void f__B4CD_1B26_000D_E672()
{
	emu_andw(&emu_si, 0xFFF);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B3A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B2C; emu_last_length = 0x000D; emu_last_crc = 0xE672; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1B33); f__B4CD_1086_0040_F11C();
	f__B4CD_1B33_000E_EBDE();
}

/**
 * Decompiled function f__B4CD_1B33_000E_EBDE()
 *
 * @name f__B4CD_1B33_000E_EBDE
 * @implements B4CD:1B33:000E:EBDE ()
 *
 * Called From: B4CD:1B33:000D:E672
 */
void f__B4CD_1B33_000E_EBDE()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4CD_1B3A_0007_480D(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B41; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B3C; emu_last_length = 0x000E; emu_last_crc = 0xEBDE; emu_call(); return; }
	f__B4CD_1884_000B_06D0(); return;
}

/**
 * Decompiled function f__B4CD_1B3A_0007_480D()
 *
 * @name f__B4CD_1B3A_0007_480D
 * @implements B4CD:1B3A:0007:480D ()
 *
 * Called From: B4CD:1881:0003:9C0D
 * Called From: B4CD:1B36:000E:EBDE
 */
void f__B4CD_1B3A_0007_480D()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4CD_1B41_0004_0772(); return; }
	f__B4CD_1884_000B_06D0(); return;
}

/**
 * Decompiled function f__B4CD_1B41_0004_0772()
 *
 * @name f__B4CD_1B41_0004_0772
 * @implements B4CD:1B41:0004:0772 ()
 *
 * Called From: B4CD:1B3C:0007:480D
 */
void f__B4CD_1B41_0004_0772()
{
	emu_movw(&emu_ax, emu_si);
	f__B4CD_1B24_0002_CFBA(); return;
}

/**
 * Decompiled function f__B4CD_1B45_0006_F7CE()
 *
 * @name f__B4CD_1B45_0006_F7CE
 * @implements B4CD:1B45:0006:F7CE ()
 *
 * Called From: B4CD:1B24:0002:CFBA
 */
void f__B4CD_1B45_0006_F7CE()
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
 * Decompiled function f__B4CD_1B5B_0011_08DE()
 *
 * @name f__B4CD_1B5B_0011_08DE
 * @implements B4CD:1B5B:0011:08DE ()
 *
 * Called From: B4CD:000E:0011:95D0
 */
void f__B4CD_1B5B_0011_08DE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B6C); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B6C_0009_C1E1();
}

/**
 * Decompiled function f__B4CD_1B6C_0009_C1E1()
 *
 * @name f__B4CD_1B6C_0009_C1E1
 * @implements B4CD:1B6C:0009:C1E1 ()
 *
 * Called From: B4CD:1B6C:0011:08DE
 */
void f__B4CD_1B6C_0009_C1E1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B75); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B75_000D_8FA0();
}

/**
 * Decompiled function f__B4CD_1B75_000D_8FA0()
 *
 * @name f__B4CD_1B75_000D_8FA0
 * @implements B4CD:1B75:000D:8FA0 ()
 *
 * Called From: B4CD:1B75:0009:C1E1
 */
void f__B4CD_1B75_000D_8FA0()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x1B82); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B82_000D_FF21();
}

/**
 * Decompiled function f__B4CD_1B82_000D_FF21()
 *
 * @name f__B4CD_1B82_000D_FF21
 * @implements B4CD:1B82:000D:FF21 ()
 *
 * Called From: B4CD:1B82:000D:8FA0
 */
void f__B4CD_1B82_000D_FF21()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x1B8F); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B8F_002A_CFE7();
}

/**
 * Decompiled function f__B4CD_1B8F_002A_CFE7()
 *
 * @name f__B4CD_1B8F_002A_CFE7
 * @implements B4CD:1B8F:002A:CFE7 ()
 *
 * Called From: B4CD:1B8F:000D:FF21
 */
void f__B4CD_1B8F_002A_CFE7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_1BB5_0004_EAB9(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_1BB5_0004_EAB9(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1BB5_0004_EAB9(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1BB9_0005_A97A(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1BBE_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_1BB5_0004_EAB9()
 *
 * @name f__B4CD_1BB5_0004_EAB9
 * @implements B4CD:1BB5:0004:EAB9 ()
 *
 * Called From: B4CD:1B96:002A:CFE7
 * Called From: B4CD:1B9E:002A:CFE7
 * Called From: B4CD:1BA8:002A:CFE7
 */
void f__B4CD_1BB5_0004_EAB9()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1BBE_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_1BB7_0002_C2BA()
 *
 * @name f__B4CD_1BB7_0002_C2BA
 * @implements B4CD:1BB7:0002:C2BA ()
 *
 * Called From: B4CD:1BBC:0005:A97A
 */
void f__B4CD_1BB7_0002_C2BA()
{
	f__B4CD_1BBE_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CD_1BB9_0005_A97A()
 *
 * @name f__B4CD_1BB9_0005_A97A
 * @implements B4CD:1BB9:0005:A97A ()
 *
 * Called From: B4CD:1BB3:002A:CFE7
 */
void f__B4CD_1BB9_0005_A97A()
{
	emu_movw(&emu_ax, 0x1);
	f__B4CD_1BB7_0002_C2BA(); return;
}

/**
 * Decompiled function f__B4CD_1BBE_0006_F7CE()
 *
 * @name f__B4CD_1BBE_0006_F7CE
 * @implements B4CD:1BBE:0006:F7CE ()
 *
 * Called From: B4CD:1BB7:0002:C2BA
 * Called From: B4CD:1BB7:0004:EAB9
 * Called From: B4CD:1BB7:002A:CFE7
 */
void f__B4CD_1BBE_0006_F7CE()
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
 * Decompiled function f__B4CD_1BC4_0013_1AB3()
 *
 * @name f__B4CD_1BC4_0013_1AB3
 * @implements B4CD:1BC4:0013:1AB3 ()
 *
 * Called From: 34CD:004D:0005:0000
 * Called From: B4CD:02BC:000D:DC77
 * Called From: B4CD:1D16:0033:84AF
 */
void f__B4CD_1BC4_0013_1AB3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4CD_1BD7_003C_397D(); return; }
	emu_movw(&emu_ax, 0x1);
	/* Unresolved jump */ emu_ip = 0x1C17; emu_last_cs = 0xB4CD; emu_last_ip = 0x1BD5; emu_last_length = 0x0013; emu_last_crc = 0x1AB3; emu_call();
}

/**
 * Decompiled function f__B4CD_1BD2_0005_F5FA()
 *
 * @name f__B4CD_1BD2_0005_F5FA
 * @implements B4CD:1BD2:0005:F5FA ()
 *
 * Called From: B4CD:1C11:003C:397D
 */
void f__B4CD_1BD2_0005_F5FA()
{
	emu_movw(&emu_ax, 0x1);
	f__B4CD_1C17_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_1BD5_0002_E03A()
 *
 * @name f__B4CD_1BD5_0002_E03A
 * @implements B4CD:1BD5:0002:E03A ()
 *
 * Called From: B4CD:1C15:0004:B739
 */
void f__B4CD_1BD5_0002_E03A()
{
	f__B4CD_1C17_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_1BD7_003C_397D()
 *
 * @name f__B4CD_1BD7_003C_397D
 * @implements B4CD:1BD7:003C:397D ()
 *
 * Called From: B4CD:1BD0:0013:1AB3
 */
void f__B4CD_1BD7_003C_397D()
{
	emu_movw(&emu_ax, emu_dx);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx,  0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_dx);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx,  0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_1C13_0004_B739(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1C11; emu_last_cs = 0xB4CD; emu_last_ip = 0x1C05; emu_last_length = 0x003C; emu_last_crc = 0x397D; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_1C13_0004_B739(); return; }
	f__B4CD_1BD2_0005_F5FA(); return;
}

/**
 * Decompiled function f__B4CD_1C13_0004_B739()
 *
 * @name f__B4CD_1C13_0004_B739
 * @implements B4CD:1C13:0004:B739 ()
 *
 * Called From: B4CD:1BFF:003C:397D
 * Called From: B4CD:1C0F:003C:397D
 */
void f__B4CD_1C13_0004_B739()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4CD_1BD5_0002_E03A(); return;
}

/**
 * Decompiled function f__B4CD_1C17_0003_2E57()
 *
 * @name f__B4CD_1C17_0003_2E57
 * @implements B4CD:1C17:0003:2E57 ()
 *
 * Called From: B4CD:1BD5:0005:F5FA
 * Called From: B4CD:1BD5:0002:E03A
 */
void f__B4CD_1C17_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1CDA_000C_C72C()
 *
 * @name f__B4CD_1CDA_000C_C72C
 * @implements B4CD:1CDA:000C:C72C ()
 *
 * Called From: 34CD:0052:0005:0000
 */
void f__B4CD_1CDA_000C_C72C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1CE6); f__B4CD_0750_0027_7BA5();
	f__B4CD_1CE6_0033_84AF();
}

/**
 * Decompiled function f__B4CD_1CE6_0033_84AF()
 *
 * @name f__B4CD_1CE6_0033_84AF
 * @implements B4CD:1CE6:0033:84AF ()
 *
 * Called From: B4CD:1CE6:000C:C72C
 */
void f__B4CD_1CE6_0033_84AF()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D5A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1CEA; emu_last_length = 0x0033; emu_last_crc = 0x84AF; emu_call(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x323F));
	emu_andw(&emu_ax, 0x7FFF);
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1D19); f__B4CD_1BC4_0013_1AB3();
	f__B4CD_1D19_002C_E5A9();
}

/**
 * Decompiled function f__B4CD_1D19_002C_E5A9()
 *
 * @name f__B4CD_1D19_002C_E5A9
 * @implements B4CD:1D19:002C:E5A9 ()
 *
 * Called From: B4CD:1D19:0033:84AF
 */
void f__B4CD_1D19_002C_E5A9()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D3B; emu_last_cs = 0xB4CD; emu_last_ip = 0x1D1C; emu_last_length = 0x002C; emu_last_crc = 0xE5A9; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_dx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx,  0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx,  0x1), emu_al);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1D45); emu_cs = 0x0C3A; f__0C3A_076E_0027_991C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1D45_000D_E1A6();
}

/**
 * Decompiled function f__B4CD_1D45_000D_E1A6()
 *
 * @name f__B4CD_1D45_000D_E1A6
 * @implements B4CD:1D45:000D:E1A6 ()
 *
 * Called From: B4CD:1D45:002C:E5A9
 */
void f__B4CD_1D45_000D_E1A6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1D52); f__B4CD_0000_0011_95D0();
	f__B4CD_1D52_0008_4D72();
}

/**
 * Decompiled function f__B4CD_1D52_0008_4D72()
 *
 * @name f__B4CD_1D52_0008_4D72
 * @implements B4CD:1D52:0008:4D72 ()
 *
 * Called From: B4CD:1D52:000D:E1A6
 */
void f__B4CD_1D52_0008_4D72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__B4CD_1D5E_0003_2E57(); return;
}

/**
 * Decompiled function f__B4CD_1D5E_0003_2E57()
 *
 * @name f__B4CD_1D5E_0003_2E57
 * @implements B4CD:1D5E:0003:2E57 ()
 *
 * Called From: B4CD:1D58:0008:4D72
 */
void f__B4CD_1D5E_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
