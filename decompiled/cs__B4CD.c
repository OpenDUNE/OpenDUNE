/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CD_0000_0011_CE2B()
 *
 * @name f__B4CD_0000_0011_CE2B
 * @implements B4CD:0000:0011:CE2B ()
 *
 * Called From: 34CD:00B1:0005:1EFA
 * Called From: 34CD:00B1:0005:1DB8
 * Called From: 34CD:00B1:0005:1C1C
 * Called From: 34CD:00B1:0005:1F4E
 * Called From: 34CD:00B1:0005:1E8A
 * Called From: 34CD:00B1:0005:1FC2
 * Called From: 34CD:00B1:0005:1C32
 * Called From: B4CD:018C:0010:18FA
 * Called From: B4CD:01A2:0011:3833
 * Called From: B4CD:01B7:0010:1826
 * Called From: B4CD:0485:000C:E271
 * Called From: B4CD:04BB:000D:3890
 * Called From: B4CD:04D1:0010:1984
 * Called From: B4CD:0548:0010:1BE2
 * Called From: B4CD:0573:0010:1B1E
 * Called From: B4CD:0D68:005B:3E81
 * Called From: B4CD:0D68:005E:2EBD
 * Called From: B4CD:0D68:000B:71F2
 * Called From: B4CD:14BE:0040:61EB
 * Called From: B4CD:14BE:0043:66EF
 * Called From: B4CD:14BE:0027:6D88
 */
void f__B4CD_0000_0011_CE2B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4CD_001A_000F_5060(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0011); f__B4CD_1B5B_0011_AB72();
	f__B4CD_0011_0009_4759();
}

/**
 * Decompiled function f__B4CD_0011_0009_4759()
 *
 * @name f__B4CD_0011_0009_4759
 * @implements B4CD:0011:0009:4759 ()
 *
 * Called From: B4CD:0011:0011:CE2B
 */
void f__B4CD_0011_0009_4759()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4CD_001A_000F_5060(); return; }
	f__B4CD_009A_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_001A_000F_5060()
 *
 * @name f__B4CD_001A_000F_5060
 * @implements B4CD:001A:000F:5060 ()
 *
 * Called From: B4CD:0008:0011:CE2B
 * Called From: B4CD:0015:0009:4759
 */
void f__B4CD_001A_000F_5060()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_bx.x, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0029; emu_last_cs = 0xB4CD; emu_last_ip = 0x0020; emu_last_length = 0x000F; emu_last_crc = 0x5060; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x9D);
	switch (emu_ip) {
		case 0x0029: f__B4CD_0029_001E_D6DD(); return;
		case 0x0083: f__B4CD_0083_0017_88A6(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0024; emu_last_length = 0x000F; emu_last_crc = 0x5060;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4CD_0029_001E_D6DD()
 *
 * @name f__B4CD_0029_001E_D6DD
 * @implements B4CD:0029:001E:D6DD ()
 *
 * Called From: B4CD:0024:000F:5060
 */
void f__B4CD_0029_001E_D6DD()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x721B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B4CD_0048_003B_8471(); return; }
	f__B4CD_0081_0002_0382(); return;
}

/**
 * Decompiled function f__B4CD_0048_003B_8471()
 *
 * @name f__B4CD_0048_003B_8471
 * @implements B4CD:0048:003B:8471 ()
 *
 * Called From: B4CD:0043:001E:D6DD
 */
void f__B4CD_0048_003B_8471()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_push(emu_si);
	emu_movw(&emu_si, 0x2462);
	emu_movw(&emu_cx.x, 0x9);
	emu_push(emu_cx.x);
	emu_lodsw(emu_ds);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_dx.l);
	emu_andb(&emu_dx.l, emu_get_memory8(emu_ds, emu_bx.x, -0x6A1B));
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x3A08), emu_dx.x);
	emu_pop(&emu_cx.x);
	if (--emu_cx.x != 0) { f__B4CD_0053_0030_961B(); return; }
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x721B), emu_ax.l);
	emu_pop(&emu_si);
	emu_ip = 0x009A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0081; emu_last_length = 0x003B; emu_last_crc = 0x8471; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0053_0030_961B()
 *
 * @name f__B4CD_0053_0030_961B
 * @implements B4CD:0053:0030:961B ()
 *
 * Called From: B4CD:007A:003B:8471
 * Called From: B4CD:007A:0030:961B
 */
void f__B4CD_0053_0030_961B()
{
	emu_push(emu_cx.x);
	emu_lodsw(emu_ds);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_dx.l);
	emu_andb(&emu_dx.l, emu_get_memory8(emu_ds, emu_bx.x, -0x6A1B));
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x3A08), emu_dx.x);
	emu_pop(&emu_cx.x);
	if (--emu_cx.x != 0) { f__B4CD_0053_0030_961B(); return; }
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x721B), emu_ax.l);
	emu_pop(&emu_si);
	f__B4CD_009A_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_0081_0002_0382()
 *
 * @name f__B4CD_0081_0002_0382
 * @implements B4CD:0081:0002:0382 ()
 *
 * Called From: B4CD:0045:001E:D6DD
 */
void f__B4CD_0081_0002_0382()
{
	f__B4CD_009A_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_0083_0017_88A6()
 *
 * @name f__B4CD_0083_0017_88A6
 * @implements B4CD:0083:0017:88A6 ()
 *
 * Called From: B4CD:0024:000F:5060
 */
void f__B4CD_0083_0017_88A6()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_ax.l);
	f__B4CD_009A_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_009A_0003_0212()
 *
 * @name f__B4CD_009A_0003_0212
 * @implements B4CD:009A:0003:0212 ()
 *
 * Called From: B4CD:0017:0009:4759
 * Called From: B4CD:0081:0030:961B
 * Called From: B4CD:0081:0002:0382
 * Called From: B4CD:0098:0017:88A6
 */
void f__B4CD_009A_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_00A5_0016_CC59()
 *
 * @name f__B4CD_00A5_0016_CC59
 * @implements B4CD:00A5:0016:CC59 ()
 *
 * Called From: 34CD:006B:0005:14AA
 * Called From: 34CD:006B:0005:1592
 */
void f__B4CD_00A5_0016_CC59()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x0F3F; f__0F3F_0076_0008_3E52();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_00BB_000F_C1E0();
}

/**
 * Decompiled function f__B4CD_00BB_000F_C1E0()
 *
 * @name f__B4CD_00BB_000F_C1E0
 * @implements B4CD:00BB:000F:C1E0 ()
 *
 * Called From: B4CD:00BB:0016:CC59
 */
void f__B4CD_00BB_000F_C1E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x0F3F; f__0F3F_007E_0008_3E22();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_00CA_000A_4EEF();
}

/**
 * Decompiled function f__B4CD_00CA_000A_4EEF()
 *
 * @name f__B4CD_00CA_000A_4EEF
 * @implements B4CD:00CA:000A:4EEF ()
 *
 * Called From: B4CD:00CA:000F:C1E0
 */
void f__B4CD_00CA_000A_4EEF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x00D4); f__B4CD_17DC_0019_F917();
	f__B4CD_00D4_0033_5DD3();
}

/**
 * Decompiled function f__B4CD_00D4_0033_5DD3()
 *
 * @name f__B4CD_00D4_0033_5DD3
 * @implements B4CD:00D4:0033:5DD3 ()
 *
 * Called From: B4CD:00D4:000A:4EEF
 */
void f__B4CD_00D4_0033_5DD3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2474));
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2484));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpw(&emu_di, 0x4000);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00FF; emu_last_cs = 0xB4CD; emu_last_ip = 0x00F6; emu_last_length = 0x0033; emu_last_crc = 0x5DD3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_0107_0009_F3A3(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x0114; emu_last_cs = 0xB4CD; emu_last_ip = 0x0105; emu_last_length = 0x0033; emu_last_crc = 0x5DD3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0105_0002_03B6()
 *
 * @name f__B4CD_0105_0002_03B6
 * @implements B4CD:0105:0002:03B6 ()
 *
 * Called From: B4CD:0112:0004:0516
 */
void f__B4CD_0105_0002_03B6()
{
	f__B4CD_0114_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0107_0009_F3A3()
 *
 * @name f__B4CD_0107_0009_F3A3
 * @implements B4CD:0107:0009:F3A3 ()
 *
 * Called From: B4CD:00FD:0033:5DD3
 */
void f__B4CD_0107_0009_F3A3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0110); emu_cs = 0x0F3F; f__0F3F_002C_000B_E123();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0110_0004_0516();
}

/**
 * Decompiled function f__B4CD_0110_0004_0516()
 *
 * @name f__B4CD_0110_0004_0516
 * @implements B4CD:0110:0004:0516 ()
 *
 * Called From: B4CD:0110:0009:F3A3
 */
void f__B4CD_0110_0004_0516()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4CD_0105_0002_03B6(); return;
}

/**
 * Decompiled function f__B4CD_0114_0006_137A()
 *
 * @name f__B4CD_0114_0006_137A
 * @implements B4CD:0114:0006:137A ()
 *
 * Called From: B4CD:0105:0002:03B6
 */
void f__B4CD_0114_0006_137A()
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
 * Decompiled function f__B4CD_011A_0011_0958()
 *
 * @name f__B4CD_011A_0011_0958
 * @implements B4CD:011A:0011:0958 ()
 *
 * Called From: B4CD:0215:0027:3AD1
 */
void f__B4CD_011A_0011_0958()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_012B_004D_6E19(); return; }
	emu_ip = 0x017C; emu_last_cs = 0xB4CD; emu_last_ip = 0x0129; emu_last_length = 0x0011; emu_last_crc = 0x0958; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_012B_004D_6E19()
 *
 * @name f__B4CD_012B_004D_6E19
 * @implements B4CD:012B:004D:6E19 ()
 *
 * Called From: B4CD:0127:0011:0958
 */
void f__B4CD_012B_004D_6E19()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4CD_013C_003C_1584(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E8));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2496));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2494));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_push(emu_cs);
	emu_push(0x0178); f__B4CD_057B_001A_A323();
	f__B4CD_0178_0007_72B2();
}

/**
 * Decompiled function f__B4CD_013C_003C_1584()
 *
 * @name f__B4CD_013C_003C_1584
 * @implements B4CD:013C:003C:1584 ()
 *
 * Called From: B4CD:012D:004D:6E19
 */
void f__B4CD_013C_003C_1584()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2496));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2494));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_push(emu_cs);
	emu_push(0x0178); f__B4CD_057B_001A_A323();
	f__B4CD_0178_0007_72B2();
}

/**
 * Decompiled function f__B4CD_0178_0007_72B2()
 *
 * @name f__B4CD_0178_0007_72B2
 * @implements B4CD:0178:0007:72B2 ()
 *
 * Called From: B4CD:0178:004D:6E19
 * Called From: B4CD:0178:003C:1584
 */
void f__B4CD_0178_0007_72B2()
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
 * Decompiled function f__B4CD_017F_0010_18FA()
 *
 * @name f__B4CD_017F_0010_18FA
 * @implements B4CD:017F:0010:18FA ()
 *
 * Called From: 34CD:002F:0005:1902
 * Called From: 34CD:002F:0005:183A
 */
void f__B4CD_017F_0010_18FA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x018F); f__B4CD_0000_0011_CE2B();
	f__B4CD_018F_0005_1CF2();
}

/**
 * Decompiled function f__B4CD_018F_0005_1CF2()
 *
 * @name f__B4CD_018F_0005_1CF2
 * @implements B4CD:018F:0005:1CF2 ()
 *
 * Called From: B4CD:018F:0010:18FA
 */
void f__B4CD_018F_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0194_0011_3833()
 *
 * @name f__B4CD_0194_0011_3833
 * @implements B4CD:0194:0011:3833 ()
 *
 * Called From: 34CD:002A:0005:17B2
 * Called From: 34CD:002A:0005:168A
 */
void f__B4CD_0194_0011_3833()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01A5); f__B4CD_0000_0011_CE2B();
	f__B4CD_01A5_0005_1CF2();
}

/**
 * Decompiled function f__B4CD_01A5_0005_1CF2()
 *
 * @name f__B4CD_01A5_0005_1CF2
 * @implements B4CD:01A5:0005:1CF2 ()
 *
 * Called From: B4CD:01A5:0011:3833
 */
void f__B4CD_01A5_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01AA_0010_1826()
 *
 * @name f__B4CD_01AA_0010_1826
 * @implements B4CD:01AA:0010:1826 ()
 *
 * Called From: 34CD:0048:0005:1452
 */
void f__B4CD_01AA_0010_1826()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01BA); f__B4CD_0000_0011_CE2B();
	f__B4CD_01BA_0005_1CF2();
}

/**
 * Decompiled function f__B4CD_01BA_0005_1CF2()
 *
 * @name f__B4CD_01BA_0005_1CF2
 * @implements B4CD:01BA:0005:1CF2 ()
 *
 * Called From: B4CD:01BA:0010:1826
 */
void f__B4CD_01BA_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01BF_0016_9EED()
 *
 * @name f__B4CD_01BF_0016_9EED
 * @implements B4CD:01BF:0016:9EED ()
 *
 * Called From: 34CD:008E:0005:1502
 * Called From: 34CD:008E:0005:17E4
 * Called From: 34CD:008E:0005:14B6
 * Called From: 34CD:008E:0005:143A
 */
void f__B4CD_01BF_0016_9EED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_01D5_000E_2DB8(); return; }
	emu_ip = 0x0402; emu_last_cs = 0xB4CD; emu_last_ip = 0x01D2; emu_last_length = 0x0016; emu_last_crc = 0x9EED; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_01D5_000E_2DB8()
 *
 * @name f__B4CD_01D5_000E_2DB8
 * @implements B4CD:01D5:000E:2DB8 ()
 *
 * Called From: B4CD:01D0:0016:9EED
 */
void f__B4CD_01D5_000E_2DB8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__B4CD_01E3_000E_2F20(); return; }
	f__B4CD_0402_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_01E3_000E_2F20()
 *
 * @name f__B4CD_01E3_000E_2F20
 * @implements B4CD:01E3:000E:2F20 ()
 *
 * Called From: B4CD:01DE:000E:2DB8
 */
void f__B4CD_01E3_000E_2F20()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__B4CD_01F1_0027_3AD1(); return; }
	f__B4CD_0402_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_01F1_0027_3AD1()
 *
 * @name f__B4CD_01F1_0027_3AD1
 * @implements B4CD:01F1:0027:3AD1 ()
 *
 * Called From: B4CD:01EC:000E:2F20
 */
void f__B4CD_01F1_0027_3AD1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__B4CD_021E_001C_AA24(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0218); f__B4CD_011A_0011_0958();
	f__B4CD_0218_0006_3CFA();
}

/**
 * Decompiled function f__B4CD_0218_0006_3CFA()
 *
 * @name f__B4CD_0218_0006_3CFA
 * @implements B4CD:0218:0006:3CFA ()
 *
 * Called From: B4CD:0218:0027:3AD1
 */
void f__B4CD_0218_0006_3CFA()
{
	emu_addws(&emu_sp, 0x6);
	f__B4CD_0402_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_021E_001C_AA24()
 *
 * @name f__B4CD_021E_001C_AA24
 * @implements B4CD:021E:001C:AA24 ()
 *
 * Called From: B4CD:020B:0027:3AD1
 */
void f__B4CD_021E_001C_AA24()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_023A_0015_232B();
}

/**
 * Decompiled function f__B4CD_023A_0015_232B()
 *
 * @name f__B4CD_023A_0015_232B
 * @implements B4CD:023A:0015:232B ()
 *
 * Called From: B4CD:023A:001C:AA24
 */
void f__B4CD_023A_0015_232B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_024F_0030_F722();
}

/**
 * Decompiled function f__B4CD_024F_0030_F722()
 *
 * @name f__B4CD_024F_0030_F722
 * @implements B4CD:024F:0030:F722 ()
 *
 * Called From: B4CD:024F:0015:232B
 */
void f__B4CD_024F_0030_F722()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0270_000F_4D04(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__B4CD_0281_000F_4D0C(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x027F); emu_cs = 0x1423; emu_ip = 0x0B4C; emu_last_cs = 0xB4CD; emu_last_ip = 0x027A; emu_last_length = 0x0030; emu_last_crc = 0xF722; emu_call(); // Jump does not resolve
	f__B4CD_027F_0002_03B2();
}

/**
 * Decompiled function f__B4CD_0270_000F_4D04()
 *
 * @name f__B4CD_0270_000F_4D04
 * @implements B4CD:0270:000F:4D04 ()
 *
 * Called From: B4CD:0260:0030:F722
 */
void f__B4CD_0270_000F_4D04()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x027F); emu_cs = 0x1423; f__1423_08CD_0012_4CA9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_027F_0002_03B2();
}

/**
 * Decompiled function f__B4CD_027F_0002_03B2()
 *
 * @name f__B4CD_027F_0002_03B2
 * @implements B4CD:027F:0002:03B2 ()
 *
 * Called From: B4CD:027F:000F:4D04
 */
void f__B4CD_027F_0002_03B2()
{
	f__B4CD_0290_000B_F303(); return;
}

/**
 * Decompiled function f__B4CD_0281_000F_4D0C()
 *
 * @name f__B4CD_0281_000F_4D0C
 * @implements B4CD:0281:000F:4D0C ()
 *
 * Called From: B4CD:026E:0030:F722
 */
void f__B4CD_0281_000F_4D0C()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x1423; f__1423_0BCC_0012_0D48();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0290_000B_F303();
}

/**
 * Decompiled function f__B4CD_0290_000B_F303()
 *
 * @name f__B4CD_0290_000B_F303
 * @implements B4CD:0290:000B:F303 ()
 *
 * Called From: B4CD:027F:0002:03B2
 * Called From: B4CD:0290:000F:4D0C
 */
void f__B4CD_0290_000B_F303()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_di, 0x1);
	if (emu_flags.zf) { f__B4CD_029B_000F_4254(); return; }
	f__B4CD_032A_0076_27B0(); return;
}

/**
 * Decompiled function f__B4CD_029B_000F_4254()
 *
 * @name f__B4CD_029B_000F_4254
 * @implements B4CD:029B:000F:4254 ()
 *
 * Called From: B4CD:0296:000B:F303
 */
void f__B4CD_029B_000F_4254()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x02AA); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_02AA_0008_715C();
}

/**
 * Decompiled function f__B4CD_02AA_0008_715C()
 *
 * @name f__B4CD_02AA_0008_715C
 * @implements B4CD:02AA:0008:715C ()
 *
 * Called From: B4CD:02AA:000F:4254
 */
void f__B4CD_02AA_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02B2); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_02B2_000D_550B();
}

/**
 * Decompiled function f__B4CD_02B2_000D_550B()
 *
 * @name f__B4CD_02B2_000D_550B
 * @implements B4CD:02B2:000D:550B ()
 *
 * Called From: B4CD:02B2:0008:715C
 */
void f__B4CD_02B2_000D_550B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4CD_02E6_0007_795E(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02BF); f__B4CD_1BC4_0013_C02D();
	f__B4CD_02BF_0023_91AA();
}

/**
 * Decompiled function f__B4CD_02BF_0023_91AA()
 *
 * @name f__B4CD_02BF_0023_91AA
 * @implements B4CD:02BF:0023:91AA ()
 *
 * Called From: B4CD:02BF:000D:550B
 */
void f__B4CD_02BF_0023_91AA()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4CD_02E6_0007_795E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x02E6; emu_last_cs = 0xB4CD; emu_last_ip = 0x02CD; emu_last_length = 0x0023; emu_last_crc = 0x91AA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs);
	emu_push(0x02E2); f__B4CD_07F4_0013_5FE1();
	f__B4CD_02E2_000B_7B59();
}

/**
 * Decompiled function f__B4CD_02E2_000B_7B59()
 *
 * @name f__B4CD_02E2_000B_7B59
 * @implements B4CD:02E2:000B:7B59 ()
 *
 * Called From: B4CD:02E2:0023:91AA
 */
void f__B4CD_02E2_000B_7B59()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02ED); f__B4CD_1086_0040_609C();
	f__B4CD_02ED_00B3_479A();
}

/**
 * Decompiled function f__B4CD_02E6_0007_795E()
 *
 * @name f__B4CD_02E6_0007_795E
 * @implements B4CD:02E6:0007:795E ()
 *
 * Called From: B4CD:02B6:000D:550B
 * Called From: B4CD:02C3:0023:91AA
 */
void f__B4CD_02E6_0007_795E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02ED); f__B4CD_1086_0040_609C();
	f__B4CD_02ED_00B3_479A();
}

/**
 * Decompiled function f__B4CD_02ED_00B3_479A()
 *
 * @name f__B4CD_02ED_00B3_479A
 * @implements B4CD:02ED:00B3:479A ()
 *
 * Called From: B4CD:02ED:0007:795E
 * Called From: B4CD:02ED:000B:7B59
 */
void f__B4CD_02ED_00B3_479A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4CD_032A_0076_27B0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incb(&emu_ax.l);
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x033B; emu_last_cs = 0xB4CD; emu_last_ip = 0x032C; emu_last_length = 0x00B3; emu_last_crc = 0x479A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x48);
	if (!emu_flags.zf) { emu_ip = 0x037A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0364; emu_last_length = 0x00B3; emu_last_crc = 0x479A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__B4CD_037F_0021_88E1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (!emu_flags.zf) { f__B4CD_037F_0021_88E1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_A323();
	f__B4CD_03A0_0034_5E67();
}

/**
 * Decompiled function f__B4CD_032A_0076_27B0()
 *
 * @name f__B4CD_032A_0076_27B0
 * @implements B4CD:032A:0076:27B0 ()
 *
 * Called From: B4CD:0298:000B:F303
 * Called From: B4CD:02FB:00B3:479A
 */
void f__B4CD_032A_0076_27B0()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4CD_033B_0065_1B67(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x48);
	if (!emu_flags.zf) { emu_ip = 0x037A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0364; emu_last_length = 0x0076; emu_last_crc = 0x27B0; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__B4CD_037F_0021_88E1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (!emu_flags.zf) { f__B4CD_037F_0021_88E1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_A323();
	f__B4CD_03A0_0034_5E67();
}

/**
 * Decompiled function f__B4CD_033B_0065_1B67()
 *
 * @name f__B4CD_033B_0065_1B67
 * @implements B4CD:033B:0065:1B67 ()
 *
 * Called From: B4CD:032C:0076:27B0
 */
void f__B4CD_033B_0065_1B67()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x48);
	if (!emu_flags.zf) { f__B4CD_037A_0026_BF49(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__B4CD_037F_0021_88E1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (!emu_flags.zf) { f__B4CD_037F_0021_88E1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_A323();
	f__B4CD_03A0_0034_5E67();
}

/**
 * Decompiled function f__B4CD_037A_0026_BF49()
 *
 * @name f__B4CD_037A_0026_BF49
 * @implements B4CD:037A:0026:BF49 ()
 *
 * Called From: B4CD:0364:0065:1B67
 */
void f__B4CD_037A_0026_BF49()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x21);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_A323();
	f__B4CD_03A0_0034_5E67();
}

/**
 * Decompiled function f__B4CD_037F_0021_88E1()
 *
 * @name f__B4CD_037F_0021_88E1
 * @implements B4CD:037F:0021:88E1 ()
 *
 * Called From: B4CD:036E:00B3:479A
 * Called From: B4CD:036E:0076:27B0
 * Called From: B4CD:036E:0065:1B67
 * Called From: B4CD:0378:0076:27B0
 * Called From: B4CD:0378:00B3:479A
 * Called From: B4CD:0378:0065:1B67
 */
void f__B4CD_037F_0021_88E1()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_A323();
	f__B4CD_03A0_0034_5E67();
}

/**
 * Decompiled function f__B4CD_03A0_0034_5E67()
 *
 * @name f__B4CD_03A0_0034_5E67
 * @implements B4CD:03A0:0034:5E67 ()
 *
 * Called From: B4CD:03A0:0021:88E1
 * Called From: B4CD:03A0:0026:BF49
 * Called From: B4CD:03A0:00B3:479A
 * Called From: B4CD:03A0:0076:27B0
 * Called From: B4CD:03A0:0065:1B67
 */
void f__B4CD_03A0_0034_5E67()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__B4CD_0402_0006_137A(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x5C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x5A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03D4); emu_ip = 0x057B; emu_last_cs = 0xB4CD; emu_last_ip = 0x03D1; emu_last_length = 0x0034; emu_last_crc = 0x5E67; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_0402_0006_137A()
 *
 * @name f__B4CD_0402_0006_137A
 * @implements B4CD:0402:0006:137A ()
 *
 * Called From: B4CD:01E0:000E:2DB8
 * Called From: B4CD:01EE:000E:2F20
 * Called From: B4CD:021B:0006:3CFA
 * Called From: B4CD:03AC:0034:5E67
 */
void f__B4CD_0402_0006_137A()
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
 * Decompiled function f__B4CD_0408_001F_4084()
 *
 * @name f__B4CD_0408_001F_4084
 * @implements B4CD:0408:001F:4084 ()
 *
 * Called From: 34CD:0039:0005:1E5A
 * Called From: 34CD:0039:0005:1F62
 */
void f__B4CD_0408_001F_4084()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__B4CD_0476_0006_0A0E(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0427); f__B4CD_10EE_0039_70D6();
	f__B4CD_0427_001C_0F08();
}

/**
 * Decompiled function f__B4CD_0427_001C_0F08()
 *
 * @name f__B4CD_0427_001C_0F08
 * @implements B4CD:0427:001C:0F08 ()
 *
 * Called From: B4CD:0427:001F:4084
 */
void f__B4CD_0427_001C_0F08()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x0476; emu_last_cs = 0xB4CD; emu_last_ip = 0x042C; emu_last_length = 0x001C; emu_last_crc = 0x0F08; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__B4CD_0476_0006_0A0E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0443_0039_1A8C();
}

/**
 * Decompiled function f__B4CD_0443_0039_1A8C()
 *
 * @name f__B4CD_0443_0039_1A8C
 * @implements B4CD:0443:0039:1A8C ()
 *
 * Called From: B4CD:0443:001C:0F08
 */
void f__B4CD_0443_0039_1A8C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__B4CD_0454_0028_8081(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	if (emu_flags.zf) { f__B4CD_0476_0006_0A0E(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xEF);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; emu_ip = 0x0774; emu_last_cs = 0xB4CD; emu_last_ip = 0x0477; emu_last_length = 0x0039; emu_last_crc = 0x1A8C; emu_call(); // Jump does not resolve
	f__B4CD_047C_000C_E271();
}

/**
 * Decompiled function f__B4CD_0454_0028_8081()
 *
 * @name f__B4CD_0454_0028_8081
 * @implements B4CD:0454:0028:8081 ()
 *
 * Called From: B4CD:0447:0039:1A8C
 */
void f__B4CD_0454_0028_8081()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xEF);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; f__07D4_02F8_0055_0AD5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_047C_000C_E271();
}

/**
 * Decompiled function f__B4CD_0476_0006_0A0E()
 *
 * @name f__B4CD_0476_0006_0A0E
 * @implements B4CD:0476:0006:0A0E ()
 *
 * Called From: B4CD:0420:001F:4084
 * Called From: B4CD:0431:001C:0F08
 * Called From: B4CD:0452:0039:1A8C
 */
void f__B4CD_0476_0006_0A0E()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; f__07D4_02F8_0055_0AD5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_047C_000C_E271();
}

/**
 * Decompiled function f__B4CD_047C_000C_E271()
 *
 * @name f__B4CD_047C_000C_E271
 * @implements B4CD:047C:000C:E271 ()
 *
 * Called From: B4CD:047C:0006:0A0E
 * Called From: B4CD:047C:0028:8081
 */
void f__B4CD_047C_000C_E271()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0488); f__B4CD_0000_0011_CE2B();
	f__B4CD_0488_0006_3A32();
}

/**
 * Decompiled function f__B4CD_0488_0006_3A32()
 *
 * @name f__B4CD_0488_0006_3A32
 * @implements B4CD:0488:0006:3A32 ()
 *
 * Called From: B4CD:0488:000C:E271
 */
void f__B4CD_0488_0006_3A32()
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
 * Decompiled function f__B4CD_048E_0012_450B()
 *
 * @name f__B4CD_048E_0012_450B
 * @implements B4CD:048E:0012:450B ()
 *
 * Called From: 34CD:0043:0005:163A
 * Called From: 34CD:0043:0005:14DC
 * Called From: 34CD:0043:0005:178E
 * Called From: 34CD:0043:0005:1702
 */
void f__B4CD_048E_0012_450B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_04A0_0008_6FFE();
}

/**
 * Decompiled function f__B4CD_04A0_0008_6FFE()
 *
 * @name f__B4CD_04A0_0008_6FFE
 * @implements B4CD:04A0:0008:6FFE ()
 *
 * Called From: B4CD:04A0:0012:450B
 */
void f__B4CD_04A0_0008_6FFE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04A8); f__B4CD_1269_0019_57F0();
	f__B4CD_04A8_0009_5F8F();
}

/**
 * Decompiled function f__B4CD_04A8_0009_5F8F()
 *
 * @name f__B4CD_04A8_0009_5F8F
 * @implements B4CD:04A8:0009:5F8F ()
 *
 * Called From: B4CD:04A8:0008:6FFE
 */
void f__B4CD_04A8_0009_5F8F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x07D4; f__07D4_02F8_0055_0AD5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_04B1_000D_3890();
}

/**
 * Decompiled function f__B4CD_04B1_000D_3890()
 *
 * @name f__B4CD_04B1_000D_3890
 * @implements B4CD:04B1:000D:3890 ()
 *
 * Called From: B4CD:04B1:0009:5F8F
 */
void f__B4CD_04B1_000D_3890()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04BE); f__B4CD_0000_0011_CE2B();
	f__B4CD_04BE_0006_3A32();
}

/**
 * Decompiled function f__B4CD_04BE_0006_3A32()
 *
 * @name f__B4CD_04BE_0006_3A32
 * @implements B4CD:04BE:0006:3A32 ()
 *
 * Called From: B4CD:04BE:000D:3890
 */
void f__B4CD_04BE_0006_3A32()
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
 * Decompiled function f__B4CD_04C4_0010_1984()
 *
 * @name f__B4CD_04C4_0010_1984
 * @implements B4CD:04C4:0010:1984 ()
 *
 * Called From: 34CD:0020:0005:129A
 * Called From: 34CD:0020:0005:13A2
 */
void f__B4CD_04C4_0010_1984()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x04D4); f__B4CD_0000_0011_CE2B();
	f__B4CD_04D4_0005_1CF2();
}

/**
 * Decompiled function f__B4CD_04D4_0005_1CF2()
 *
 * @name f__B4CD_04D4_0005_1CF2
 * @implements B4CD:04D4:0005:1CF2 ()
 *
 * Called From: B4CD:04D4:0010:1984
 */
void f__B4CD_04D4_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_04D9_0011_0966()
 *
 * @name f__B4CD_04D9_0011_0966
 * @implements B4CD:04D9:0011:0966 ()
 *
 * Called From: 34CD:0066:0005:134A
 * Called From: 34CD:0066:0005:1272
 */
void f__B4CD_04D9_0011_0966()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_04EA_0011_272C(); return; }
	emu_ip = 0x0538; emu_last_cs = 0xB4CD; emu_last_ip = 0x04E8; emu_last_length = 0x0011; emu_last_crc = 0x0966; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_04EA_0011_272C()
 *
 * @name f__B4CD_04EA_0011_272C
 * @implements B4CD:04EA:0011:272C ()
 *
 * Called From: B4CD:04E6:0011:0966
 */
void f__B4CD_04EA_0011_272C()
{
	emu_cmpws(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B4CD_04FB_0009_CFF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (emu_flags.zf) { emu_ip = 0x04FB; emu_last_cs = 0xB4CD; emu_last_ip = 0x04F7; emu_last_length = 0x0011; emu_last_crc = 0x272C; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0538; emu_last_cs = 0xB4CD; emu_last_ip = 0x04F9; emu_last_length = 0x0011; emu_last_crc = 0x272C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_04FB_0009_CFF8()
 *
 * @name f__B4CD_04FB_0009_CFF8
 * @implements B4CD:04FB:0009:CFF8 ()
 *
 * Called From: B4CD:04ED:0011:272C
 */
void f__B4CD_04FB_0009_CFF8()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4CD_0504_0030_BE4F(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4CD_0506_002E_BE1C(); return;
}

/**
 * Decompiled function f__B4CD_0504_0030_BE4F()
 *
 * @name f__B4CD_0504_0030_BE4F
 * @implements B4CD:0504:0030:BE4F ()
 *
 * Called From: B4CD:04FD:0009:CFF8
 */
void f__B4CD_0504_0030_BE4F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), emu_ax.l);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24AE));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24AC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0534); f__B4CD_057B_001A_A323();
	f__B4CD_0534_0007_72B2();
}

/**
 * Decompiled function f__B4CD_0506_002E_BE1C()
 *
 * @name f__B4CD_0506_002E_BE1C
 * @implements B4CD:0506:002E:BE1C ()
 *
 * Called From: B4CD:0502:0009:CFF8
 */
void f__B4CD_0506_002E_BE1C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), emu_ax.l);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24AE));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x24AC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0534); f__B4CD_057B_001A_A323();
	f__B4CD_0534_0007_72B2();
}

/**
 * Decompiled function f__B4CD_0534_0007_72B2()
 *
 * @name f__B4CD_0534_0007_72B2
 * @implements B4CD:0534:0007:72B2 ()
 *
 * Called From: B4CD:0534:002E:BE1C
 * Called From: B4CD:0534:0030:BE4F
 */
void f__B4CD_0534_0007_72B2()
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
 * Decompiled function f__B4CD_053B_0010_1BE2()
 *
 * @name f__B4CD_053B_0010_1BE2
 * @implements B4CD:053B:0010:1BE2 ()
 *
 * Called From: 34CD:003E:0005:1D62
 * Called From: 34CD:003E:0005:1C5A
 */
void f__B4CD_053B_0010_1BE2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x054B); f__B4CD_0000_0011_CE2B();
	f__B4CD_054B_0005_1CF2();
}

/**
 * Decompiled function f__B4CD_054B_0005_1CF2()
 *
 * @name f__B4CD_054B_0005_1CF2
 * @implements B4CD:054B:0005:1CF2 ()
 *
 * Called From: B4CD:054B:0010:1BE2
 */
void f__B4CD_054B_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0566_0010_1B1E()
 *
 * @name f__B4CD_0566_0010_1B1E
 * @implements B4CD:0566:0010:1B1E ()
 *
 * Called From: 34CD:0025:0005:18B2
 * Called From: 34CD:0025:0005:198A
 */
void f__B4CD_0566_0010_1B1E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0576); f__B4CD_0000_0011_CE2B();
	f__B4CD_0576_0005_1CF2();
}

/**
 * Decompiled function f__B4CD_0576_0005_1CF2()
 *
 * @name f__B4CD_0576_0005_1CF2
 * @implements B4CD:0576:0005:1CF2 ()
 *
 * Called From: B4CD:0576:0010:1B1E
 */
void f__B4CD_0576_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_057B_001A_A323()
 *
 * @name f__B4CD_057B_001A_A323
 * @implements B4CD:057B:001A:A323 ()
 *
 * Called From: B4CD:0175:004D:6E19
 * Called From: B4CD:0175:003C:1584
 * Called From: B4CD:039D:0021:88E1
 * Called From: B4CD:039D:0026:BF49
 * Called From: B4CD:039D:00B3:479A
 * Called From: B4CD:039D:0076:27B0
 * Called From: B4CD:039D:0065:1B67
 * Called From: B4CD:0531:002E:BE1C
 * Called From: B4CD:0531:0030:BE4F
 */
void f__B4CD_057B_001A_A323()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0592; emu_last_cs = 0xB4CD; emu_last_ip = 0x0588; emu_last_length = 0x001A; emu_last_crc = 0xA323; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B4CD_0595_0009_6DBC(); return; }
	emu_ip = 0x074A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0592; emu_last_length = 0x001A; emu_last_crc = 0xA323; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0595_0009_6DBC()
 *
 * @name f__B4CD_0595_0009_6DBC
 * @implements B4CD:0595:0009:6DBC ()
 *
 * Called From: B4CD:0590:001A:A323
 */
void f__B4CD_0595_0009_6DBC()
{
	emu_decw(&emu_si);
	emu_cmpws(&emu_si, 0x1F);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_059E_000B_E5C4(); return; }
	f__B4CD_0657_000A_F8EB(); return;
}

/**
 * Decompiled function f__B4CD_059E_000B_E5C4()
 *
 * @name f__B4CD_059E_000B_E5C4
 * @implements B4CD:059E:000B:E5C4 ()
 *
 * Called From: B4CD:0599:0009:6DBC
 */
void f__B4CD_059E_000B_E5C4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05A9); emu_cs = 0x0F3F; f__0F3F_0046_000C_D261();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_05A9_0010_44D5();
}

/**
 * Decompiled function f__B4CD_05A9_0010_44D5()
 *
 * @name f__B4CD_05A9_0010_44D5
 * @implements B4CD:05A9:0010:44D5 ()
 *
 * Called From: B4CD:05A9:000B:E5C4
 */
void f__B4CD_05A9_0010_44D5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05B9); emu_cs = 0x0F3F; f__0F3F_0052_000C_D561();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_05B9_0023_B50E();
}

/**
 * Decompiled function f__B4CD_05B9_0023_B50E()
 *
 * @name f__B4CD_05B9_0023_B50E
 * @implements B4CD:05B9:0023:B50E ()
 *
 * Called From: B4CD:05B9:0010:44D5
 */
void f__B4CD_05B9_0023_B50E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_bx.x, 0x10);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_andw(&emu_ax.x, 0xFE);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_si, 0x2);
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	f__B4CD_064F_0008_3AC4(); return;
}

/**
 * Decompiled function f__B4CD_05DC_0008_C2D4()
 *
 * @name f__B4CD_05DC_0008_C2D4
 * @implements B4CD:05DC:0008:C2D4 ()
 *
 * Called From: B4CD:0652:0008:3AC4
 * Called From: B4CD:0652:0013:45A4
 */
void f__B4CD_05DC_0008_C2D4()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__B4CD_0648_000F_42E7(); return;
}

/**
 * Decompiled function f__B4CD_05E4_0036_F7CC()
 *
 * @name f__B4CD_05E4_0036_F7CC
 * @implements B4CD:05E4:0036:F7CC ()
 *
 * Called From: B4CD:064A:000F:42E7
 * Called From: B4CD:064A:0013:45A4
 */
void f__B4CD_05E4_0036_F7CC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0647; emu_last_cs = 0xB4CD; emu_last_ip = 0x05E9; emu_last_length = 0x0036; emu_last_crc = 0xF7CC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0647; emu_last_cs = 0xB4CD; emu_last_ip = 0x05F3; emu_last_length = 0x0036; emu_last_crc = 0xF7CC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0647; emu_last_cs = 0xB4CD; emu_last_ip = 0x05FB; emu_last_length = 0x0036; emu_last_crc = 0xF7CC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax.x, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0647; emu_last_cs = 0xB4CD; emu_last_ip = 0x0606; emu_last_length = 0x0036; emu_last_crc = 0xF7CC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x061A); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_061A_002A_C621();
}

/**
 * Decompiled function f__B4CD_061A_002A_C621()
 *
 * @name f__B4CD_061A_002A_C621
 * @implements B4CD:061A:002A:C621 ()
 *
 * Called From: B4CD:061A:0036:F7CC
 */
void f__B4CD_061A_002A_C621()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call/jump based on memory/register values */
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
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0641; emu_last_length = 0x002A; emu_last_crc = 0xC621;
			emu_call();
			return;
	}
	f__B4CD_0644_0013_45A4();
}

/**
 * Decompiled function f__B4CD_0644_0013_45A4()
 *
 * @name f__B4CD_0644_0013_45A4
 * @implements B4CD:0644:0013:45A4 ()
 *
 * Called From: B4CD:0644:002A:C621
 */
void f__B4CD_0644_0013_45A4()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05E4_0036_F7CC(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05DC_0008_C2D4(); return; }
	f__B4CD_074A_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0648_000F_42E7()
 *
 * @name f__B4CD_0648_000F_42E7
 * @implements B4CD:0648:000F:42E7 ()
 *
 * Called From: B4CD:05E2:0008:C2D4
 */
void f__B4CD_0648_000F_42E7()
{
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05E4_0036_F7CC(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x05DC; emu_last_cs = 0xB4CD; emu_last_ip = 0x0652; emu_last_length = 0x000F; emu_last_crc = 0x42E7; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x074A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0654; emu_last_length = 0x000F; emu_last_crc = 0x42E7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_064F_0008_3AC4()
 *
 * @name f__B4CD_064F_0008_3AC4
 * @implements B4CD:064F:0008:3AC4 ()
 *
 * Called From: B4CD:05DA:0023:B50E
 */
void f__B4CD_064F_0008_3AC4()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_05DC_0008_C2D4(); return; }
	emu_ip = 0x074A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0654; emu_last_length = 0x0008; emu_last_crc = 0x3AC4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0657_000A_F8EB()
 *
 * @name f__B4CD_0657_000A_F8EB
 * @implements B4CD:0657:000A:F8EB ()
 *
 * Called From: B4CD:059B:0009:6DBC
 */
void f__B4CD_0657_000A_F8EB()
{
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0661_000E_E4AE(); return; }
	emu_movw(&emu_ax.x, 0x20);
	emu_ip = 0x0663; emu_last_cs = 0xB4CD; emu_last_ip = 0x065F; emu_last_length = 0x000A; emu_last_crc = 0xF8EB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0661_000E_E4AE()
 *
 * @name f__B4CD_0661_000E_E4AE
 * @implements B4CD:0661:000E:E4AE ()
 *
 * Called From: B4CD:065A:000A:F8EB
 */
void f__B4CD_0661_000E_E4AE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xF);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_066F_0040_DFF3(); return; }
	emu_movw(&emu_ax.x, 0xF);
	f__B4CD_0671_003E_DF1B(); return;
}

/**
 * Decompiled function f__B4CD_066F_0040_DFF3()
 *
 * @name f__B4CD_066F_0040_DFF3
 * @implements B4CD:066F:0040:DFF3 ()
 *
 * Called From: B4CD:0668:000E:E4AE
 */
void f__B4CD_066F_0040_DFF3()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3960));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x395E));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x20);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2DCE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4CD_0741_0009_09F3(); return;
}

/**
 * Decompiled function f__B4CD_0671_003E_DF1B()
 *
 * @name f__B4CD_0671_003E_DF1B
 * @implements B4CD:0671:003E:DF1B ()
 *
 * Called From: B4CD:066D:000E:E4AE
 */
void f__B4CD_0671_003E_DF1B()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3960));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x395E));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x20);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2DCE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4CD_0741_0009_09F3(); return;
}

/**
 * Decompiled function f__B4CD_06AF_0011_0F5B()
 *
 * @name f__B4CD_06AF_0011_0F5B
 * @implements B4CD:06AF:0011:0F5B ()
 *
 * Called From: B4CD:0747:0009:09F3
 * Called From: B4CD:0747:000C:11FD
 */
void f__B4CD_06AF_0011_0F5B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x06C0); emu_cs = 0x0F3F; f__0F3F_00F3_0011_D3FE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_06C0_0014_3259();
}

/**
 * Decompiled function f__B4CD_06C0_0014_3259()
 *
 * @name f__B4CD_06C0_0014_3259
 * @implements B4CD:06C0:0014:3259 ()
 *
 * Called From: B4CD:06C0:0011:0F5B
 */
void f__B4CD_06C0_0014_3259()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x0F3F; f__0F3F_000D_0019_C11D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_06D4_0011_5511();
}

/**
 * Decompiled function f__B4CD_06D4_0011_5511()
 *
 * @name f__B4CD_06D4_0011_5511
 * @implements B4CD:06D4:0011:5511 ()
 *
 * Called From: B4CD:06D4:0014:3259
 */
void f__B4CD_06D4_0011_5511()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4CD_0720_001E_0B94(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06E5); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_06E5_0032_5971();
}

/**
 * Decompiled function f__B4CD_06E5_0032_5971()
 *
 * @name f__B4CD_06E5_0032_5971
 * @implements B4CD:06E5:0032:5971 ()
 *
 * Called From: B4CD:06E5:0011:5511
 */
void f__B4CD_06E5_0032_5971()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__B4CD_0720_001E_0B94(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call/jump based on memory/register values */
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
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0714; emu_last_length = 0x0032; emu_last_crc = 0x5971;
			emu_call();
			return;
	}
	f__B4CD_0717_0027_7386();
}

/**
 * Decompiled function f__B4CD_0717_0027_7386()
 *
 * @name f__B4CD_0717_0027_7386
 * @implements B4CD:0717:0027:7386 ()
 *
 * Called From: B4CD:0717:0032:5971
 */
void f__B4CD_0717_0027_7386()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__B4CD_073E_000C_11FD(); return; }
	f__B4CD_074A_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0720_001E_0B94()
 *
 * @name f__B4CD_0720_001E_0B94
 * @implements B4CD:0720:001E:0B94 ()
 *
 * Called From: B4CD:06D8:0011:5511
 * Called From: B4CD:06F0:0032:5971
 */
void f__B4CD_0720_001E_0B94()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__B4CD_073E_000C_11FD(); return; }
	f__B4CD_074A_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_073E_000C_11FD()
 *
 * @name f__B4CD_073E_000C_11FD
 * @implements B4CD:073E:000C:11FD ()
 *
 * Called From: B4CD:073A:001E:0B94
 * Called From: B4CD:073A:0027:7386
 */
void f__B4CD_073E_000C_11FD()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x9);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_074A_0006_137A(); return; }
	f__B4CD_06AF_0011_0F5B(); return;
}

/**
 * Decompiled function f__B4CD_0741_0009_09F3()
 *
 * @name f__B4CD_0741_0009_09F3
 * @implements B4CD:0741:0009:09F3 ()
 *
 * Called From: B4CD:06AC:0040:DFF3
 * Called From: B4CD:06AC:003E:DF1B
 */
void f__B4CD_0741_0009_09F3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x9);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x074A; emu_last_cs = 0xB4CD; emu_last_ip = 0x0745; emu_last_length = 0x0009; emu_last_crc = 0x09F3; emu_call(); return; } // Jump does not resolve
	f__B4CD_06AF_0011_0F5B(); return;
}

/**
 * Decompiled function f__B4CD_074A_0006_137A()
 *
 * @name f__B4CD_074A_0006_137A
 * @implements B4CD:074A:0006:137A ()
 *
 * Called From: B4CD:0654:0013:45A4
 * Called From: B4CD:073C:0027:7386
 * Called From: B4CD:073C:001E:0B94
 * Called From: B4CD:0745:000C:11FD
 */
void f__B4CD_074A_0006_137A()
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
 * Decompiled function f__B4CD_0750_0027_EDA0()
 *
 * @name f__B4CD_0750_0027_EDA0
 * @implements B4CD:0750:0027:EDA0 ()
 *
 * Called From: 34CD:0061:0005:1BC2
 * Called From: 34CD:0061:0005:1880
 * Called From: 34CD:0061:0005:1924
 * Called From: 34CD:0061:0005:1A76
 * Called From: 34CD:0061:0005:1BB2
 * Called From: 34CD:0061:0005:190A
 * Called From: 34CD:0061:0005:1AFA
 * Called From: B4CD:0A29:0016:4757
 * Called From: B4CD:0B0F:0007:6460
 * Called From: B4CD:0C47:0014:AEAF
 * Called From: B4CD:0CC1:0007:7964
 * Called From: B4CD:15C5:000C:23A8
 * Called From: B4CD:15C5:0007:79A2
 */
void f__B4CD_0750_0027_EDA0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F8));
	if (!emu_flags.zf) { f__B4CD_0778_0013_36AA(); return; }
	emu_movw(&emu_ax.x, 0xA);
	f__B4CD_07F0_0004_07E2(); return;
}

/**
 * Decompiled function f__B4CD_0775_0002_035E()
 *
 * @name f__B4CD_0775_0002_035E
 * @implements B4CD:0775:0002:035E ()
 *
 * Called From: B4CD:0789:0005:1598
 * Called From: B4CD:07CE:000B:1E63
 * Called From: B4CD:07EE:000A:0AA5
 */
void f__B4CD_0775_0002_035E()
{
	f__B4CD_07F0_0004_07E2(); return;
}

/**
 * Decompiled function f__B4CD_0778_0013_36AA()
 *
 * @name f__B4CD_0778_0013_36AA
 * @implements B4CD:0778:0013:36AA ()
 *
 * Called From: B4CD:0770:0027:EDA0
 */
void f__B4CD_0778_0013_36AA()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (emu_flags.zf) { f__B4CD_0786_0005_1598(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__B4CD_078B_0015_B44A(); return; }
	emu_movw(&emu_ax.x, 0xE);
	emu_ip = 0x0775; emu_last_cs = 0xB4CD; emu_last_ip = 0x0789; emu_last_length = 0x0013; emu_last_crc = 0x36AA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0786_0005_1598()
 *
 * @name f__B4CD_0786_0005_1598
 * @implements B4CD:0786:0005:1598 ()
 *
 * Called From: B4CD:077C:0013:36AA
 */
void f__B4CD_0786_0005_1598()
{
	emu_movw(&emu_ax.x, 0xE);
	f__B4CD_0775_0002_035E(); return;
}

/**
 * Decompiled function f__B4CD_078B_0015_B44A()
 *
 * @name f__B4CD_078B_0015_B44A
 * @implements B4CD:078B:0015:B44A ()
 *
 * Called From: B4CD:0784:0013:36AA
 */
void f__B4CD_078B_0015_B44A()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x07A0; emu_last_cs = 0xB4CD; emu_last_ip = 0x078F; emu_last_length = 0x0015; emu_last_crc = 0xB44A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	emu_addw(&emu_ax.x, 0x4B);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_07A0_0020_F5D6(); return; }
	emu_movw(&emu_ax.x, 0xB);
	emu_ip = 0x0775; emu_last_cs = 0xB4CD; emu_last_ip = 0x079E; emu_last_length = 0x0015; emu_last_crc = 0xB44A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_07A0_0020_F5D6()
 *
 * @name f__B4CD_07A0_0020_F5D6
 * @implements B4CD:07A0:0020:F5D6 ()
 *
 * Called From: B4CD:0799:0015:B44A
 */
void f__B4CD_07A0_0020_F5D6()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FA));
	if (!emu_flags.zf) { f__B4CD_07C0_0005_0CEA(); return; }
	emu_movw(&emu_ax.x, 0xD);
	emu_ip = 0x0775; emu_last_cs = 0xB4CD; emu_last_ip = 0x07BE; emu_last_length = 0x0020; emu_last_crc = 0xF5D6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_07C0_0005_0CEA()
 *
 * @name f__B4CD_07C0_0005_0CEA
 * @implements B4CD:07C0:0005:0CEA ()
 *
 * Called From: B4CD:07B9:0020:F5D6
 */
void f__B4CD_07C0_0005_0CEA()
{
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x07C5); f__B4CD_1133_0039_7483();
	f__B4CD_07C5_000B_1E63();
}

/**
 * Decompiled function f__B4CD_07C5_000B_1E63()
 *
 * @name f__B4CD_07C5_000B_1E63
 * @implements B4CD:07C5:000B:1E63 ()
 *
 * Called From: B4CD:07C5:0005:0CEA
 */
void f__B4CD_07C5_000B_1E63()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B4CD_07D0_0016_5A73(); return; }
	emu_movw(&emu_ax.x, 0xC);
	f__B4CD_0775_0002_035E(); return;
}

/**
 * Decompiled function f__B4CD_07D0_0016_5A73()
 *
 * @name f__B4CD_07D0_0016_5A73
 * @implements B4CD:07D0:0016:5A73 ()
 *
 * Called From: B4CD:07C9:000B:1E63
 */
void f__B4CD_07D0_0016_5A73()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F6));
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x07E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x07DA; emu_last_length = 0x0016; emu_last_crc = 0x5A73; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x52);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_07E6_000A_0AA5(); return; }
	emu_movw(&emu_ax.x, 0x4);
	emu_ip = 0x0775; emu_last_cs = 0xB4CD; emu_last_ip = 0x07E4; emu_last_length = 0x0016; emu_last_crc = 0x5A73; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_07E6_000A_0AA5()
 *
 * @name f__B4CD_07E6_000A_0AA5
 * @implements B4CD:07E6:000A:0AA5 ()
 *
 * Called From: B4CD:07DF:0016:5A73
 */
void f__B4CD_07E6_000A_0AA5()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x24B8));
	f__B4CD_0775_0002_035E(); return;
}

/**
 * Decompiled function f__B4CD_07F0_0004_07E2()
 *
 * @name f__B4CD_07F0_0004_07E2
 * @implements B4CD:07F0:0004:07E2 ()
 *
 * Called From: B4CD:0775:0002:035E
 * Called From: B4CD:0775:0027:EDA0
 */
void f__B4CD_07F0_0004_07E2()
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
 * Decompiled function f__B4CD_07F4_0013_5FE1()
 *
 * @name f__B4CD_07F4_0013_5FE1
 * @implements B4CD:07F4:0013:5FE1 ()
 *
 * Called From: 34CD:00BB:0005:1182
 * Called From: 34CD:00BB:0005:10BA
 * Called From: B4CD:02DF:0023:91AA
 */
void f__B4CD_07F4_0013_5FE1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0807); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0807_000C_758B();
}

/**
 * Decompiled function f__B4CD_0807_000C_758B()
 *
 * @name f__B4CD_0807_000C_758B
 * @implements B4CD:0807:000C:758B ()
 *
 * Called From: B4CD:0807:0013:5FE1
 */
void f__B4CD_0807_000C_758B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0813); f__B4CD_0F8B_0015_DD56();
	f__B4CD_0813_0009_464D();
}

/**
 * Decompiled function f__B4CD_0813_0009_464D()
 *
 * @name f__B4CD_0813_0009_464D
 * @implements B4CD:0813:0009:464D ()
 *
 * Called From: B4CD:0813:000C:758B
 */
void f__B4CD_0813_0009_464D()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4CD_081C_0008_EA1A(); return; }
	emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x0819; emu_last_length = 0x0009; emu_last_crc = 0x464D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_081C_0008_EA1A()
 *
 * @name f__B4CD_081C_0008_EA1A
 * @implements B4CD:081C:0008:EA1A ()
 *
 * Called From: B4CD:0817:0009:464D
 */
void f__B4CD_081C_0008_EA1A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0824); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0824_000C_DF6B();
}

/**
 * Decompiled function f__B4CD_0824_000C_DF6B()
 *
 * @name f__B4CD_0824_000C_DF6B
 * @implements B4CD:0824:000C:DF6B ()
 *
 * Called From: B4CD:0824:0008:EA1A
 */
void f__B4CD_0824_000C_DF6B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0830); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0830_000F_BA5C();
}

/**
 * Decompiled function f__B4CD_0830_000F_BA5C()
 *
 * @name f__B4CD_0830_000F_BA5C
 * @implements B4CD:0830:000F:BA5C ()
 *
 * Called From: B4CD:0830:000C:DF6B
 */
void f__B4CD_0830_000F_BA5C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x083F); emu_cs = 0x0F3F; f__0F3F_0037_000F_EA0C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_083F_0012_8D69();
}

/**
 * Decompiled function f__B4CD_083F_0012_8D69()
 *
 * @name f__B4CD_083F_0012_8D69
 * @implements B4CD:083F:0012:8D69 ()
 *
 * Called From: B4CD:083F:000F:BA5C
 */
void f__B4CD_083F_0012_8D69()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__B4CD_08D9_0008_0E26(); return;
}

/**
 * Decompiled function f__B4CD_0851_0009_7FAF()
 *
 * @name f__B4CD_0851_0009_7FAF
 * @implements B4CD:0851:0009:7FAF ()
 *
 * Called From: B4CD:08DE:0008:0E26
 * Called From: B4CD:08DE:000F:D804
 * Called From: B4CD:08DE:0012:DAAF
 */
void f__B4CD_0851_0009_7FAF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__B4CD_08D3_000E_D827(); return;
}

/**
 * Decompiled function f__B4CD_085A_0033_67FE()
 *
 * @name f__B4CD_085A_0033_67FE
 * @implements B4CD:085A:0033:67FE ()
 *
 * Called From: B4CD:08D6:000E:D827
 * Called From: B4CD:08D6:000F:D804
 * Called From: B4CD:08D6:0012:DAAF
 */
void f__B4CD_085A_0033_67FE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x08D2; emu_last_cs = 0xB4CD; emu_last_ip = 0x085F; emu_last_length = 0x0033; emu_last_crc = 0x67FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_si);
	emu_cmpw(&emu_ax.x, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_D804(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x08D2; emu_last_cs = 0xB4CD; emu_last_ip = 0x0870; emu_last_length = 0x0033; emu_last_crc = 0x67FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x08D2; emu_last_cs = 0xB4CD; emu_last_ip = 0x087A; emu_last_length = 0x0033; emu_last_crc = 0x67FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x088D); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_088D_0016_E5D7();
}

/**
 * Decompiled function f__B4CD_088D_0016_E5D7()
 *
 * @name f__B4CD_088D_0016_E5D7
 * @implements B4CD:088D:0016:E5D7 ()
 *
 * Called From: B4CD:088D:0033:67FE
 */
void f__B4CD_088D_0016_E5D7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08A3); emu_cs = 0x0F3F; f__0F3F_0037_000F_EA0C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_08A3_0019_0A11();
}

/**
 * Decompiled function f__B4CD_08A3_0019_0A11()
 *
 * @name f__B4CD_08A3_0019_0A11
 * @implements B4CD:08A3:0019:0A11 ()
 *
 * Called From: B4CD:08A3:0016:E5D7
 */
void f__B4CD_08A3_0019_0A11()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x08BC); emu_cs = 0x0F3F; f__0F3F_0104_0013_AF6A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_08BC_0013_9550();
}

/**
 * Decompiled function f__B4CD_08BC_0013_9550()
 *
 * @name f__B4CD_08BC_0013_9550
 * @implements B4CD:08BC:0013:9550 ()
 *
 * Called From: B4CD:08BC:0019:0A11
 */
void f__B4CD_08BC_0013_9550()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_08D2_000F_D804(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x08CF); f__B4CD_1269_0019_57F0();
	f__B4CD_08CF_0012_DAAF();
}

/**
 * Decompiled function f__B4CD_08CF_0012_DAAF()
 *
 * @name f__B4CD_08CF_0012_DAAF
 * @implements B4CD:08CF:0012:DAAF ()
 *
 * Called From: B4CD:08CF:0013:9550
 */
void f__B4CD_08CF_0012_DAAF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_085A_0033_67FE(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DC; emu_last_length = 0x0012; emu_last_crc = 0xDAAF; emu_call(); return; } // Jump does not resolve
	f__B4CD_0851_0009_7FAF(); return;
}

/**
 * Decompiled function f__B4CD_08D2_000F_D804()
 *
 * @name f__B4CD_08D2_000F_D804
 * @implements B4CD:08D2:000F:D804 ()
 *
 * Called From: B4CD:0869:0033:67FE
 * Called From: B4CD:08C2:0013:9550
 */
void f__B4CD_08D2_000F_D804()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_085A_0033_67FE(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_08E1_0006_137A(); return; }
	f__B4CD_0851_0009_7FAF(); return;
}

/**
 * Decompiled function f__B4CD_08D3_000E_D827()
 *
 * @name f__B4CD_08D3_000E_D827
 * @implements B4CD:08D3:000E:D827 ()
 *
 * Called From: B4CD:0858:0009:7FAF
 */
void f__B4CD_08D3_000E_D827()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_085A_0033_67FE(); return; }
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DC; emu_last_length = 0x000E; emu_last_crc = 0xD827; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0851; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DE; emu_last_length = 0x000E; emu_last_crc = 0xD827; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_08D9_0008_0E26()
 *
 * @name f__B4CD_08D9_0008_0E26
 * @implements B4CD:08D9:0008:0E26 ()
 *
 * Called From: B4CD:084E:0012:8D69
 */
void f__B4CD_08D9_0008_0E26()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08E1; emu_last_cs = 0xB4CD; emu_last_ip = 0x08DC; emu_last_length = 0x0008; emu_last_crc = 0x0E26; emu_call(); return; } // Jump does not resolve
	f__B4CD_0851_0009_7FAF(); return;
}

/**
 * Decompiled function f__B4CD_08E1_0006_137A()
 *
 * @name f__B4CD_08E1_0006_137A
 * @implements B4CD:08E1:0006:137A ()
 *
 * Called From: B4CD:08DC:000F:D804
 */
void f__B4CD_08E1_0006_137A()
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
 * Decompiled function f__B4CD_08E7_002B_5180()
 *
 * @name f__B4CD_08E7_002B_5180
 * @implements B4CD:08E7:002B:5180 ()
 *
 * Called From: 34CD:00A7:0005:10CA
 */
void f__B4CD_08E7_002B_5180()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0912_000C_FC1C();
}

/**
 * Decompiled function f__B4CD_0912_000C_FC1C()
 *
 * @name f__B4CD_0912_000C_FC1C
 * @implements B4CD:0912:000C:FC1C ()
 *
 * Called From: B4CD:0912:002B:5180
 */
void f__B4CD_0912_000C_FC1C()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_091E_000C_B26D();
}

/**
 * Decompiled function f__B4CD_091E_000C_B26D()
 *
 * @name f__B4CD_091E_000C_B26D
 * @implements B4CD:091E:000C:B26D ()
 *
 * Called From: B4CD:091E:000C:FC1C
 */
void f__B4CD_091E_000C_B26D()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x092A); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_092A_000C_F36C();
}

/**
 * Decompiled function f__B4CD_092A_000C_F36C()
 *
 * @name f__B4CD_092A_000C_F36C
 * @implements B4CD:092A:000C:F36C ()
 *
 * Called From: B4CD:092A:000C:B26D
 */
void f__B4CD_092A_000C_F36C()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0936_001C_8C58();
}

/**
 * Decompiled function f__B4CD_0936_001C_8C58()
 *
 * @name f__B4CD_0936_001C_8C58
 * @implements B4CD:0936:001C:8C58 ()
 *
 * Called From: B4CD:0936:000C:F36C
 */
void f__B4CD_0936_001C_8C58()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0952; emu_last_cs = 0xB4CD; emu_last_ip = 0x094B; emu_last_length = 0x001C; emu_last_crc = 0x8C58; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	f__B4CD_095E_0026_3BC9(); return;
}

/**
 * Decompiled function f__B4CD_095E_0026_3BC9()
 *
 * @name f__B4CD_095E_0026_3BC9
 * @implements B4CD:095E:0026:3BC9 ()
 *
 * Called From: B4CD:0950:001C:8C58
 */
void f__B4CD_095E_0026_3BC9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0984; emu_last_cs = 0xB4CD; emu_last_ip = 0x097D; emu_last_length = 0x0026; emu_last_crc = 0x3BC9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	f__B4CD_099D_0019_E6BF(); return;
}

/**
 * Decompiled function f__B4CD_099D_0019_E6BF()
 *
 * @name f__B4CD_099D_0019_E6BF
 * @implements B4CD:099D:0019:E6BF ()
 *
 * Called From: B4CD:0982:0026:3BC9
 */
void f__B4CD_099D_0019_E6BF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_09B6_0032_6453(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__B4CD_09C2_0026_C229(); return;
}

/**
 * Decompiled function f__B4CD_09B6_0032_6453()
 *
 * @name f__B4CD_09B6_0032_6453
 * @implements B4CD:09B6:0032:6453 ()
 *
 * Called From: B4CD:09AF:0019:E6BF
 */
void f__B4CD_09B6_0032_6453()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x09E8; emu_last_cs = 0xB4CD; emu_last_ip = 0x09E1; emu_last_length = 0x0032; emu_last_crc = 0x6453; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	f__B4CD_0A01_000C_0F0C(); return;
}

/**
 * Decompiled function f__B4CD_09C2_0026_C229()
 *
 * @name f__B4CD_09C2_0026_C229
 * @implements B4CD:09C2:0026:C229 ()
 *
 * Called From: B4CD:09B4:0019:E6BF
 */
void f__B4CD_09C2_0026_C229()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x09E8; emu_last_cs = 0xB4CD; emu_last_ip = 0x09E1; emu_last_length = 0x0026; emu_last_crc = 0xC229; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	f__B4CD_0A01_000C_0F0C(); return;
}

/**
 * Decompiled function f__B4CD_0A01_000C_0F0C()
 *
 * @name f__B4CD_0A01_000C_0F0C
 * @implements B4CD:0A01:000C:0F0C ()
 *
 * Called From: B4CD:09E6:0032:6453
 * Called From: B4CD:09E6:0026:C229
 */
void f__B4CD_0A01_000C_0F0C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__B4CD_0AD0_000B_932A(); return;
}

/**
 * Decompiled function f__B4CD_0A0D_0009_0899()
 *
 * @name f__B4CD_0A0D_0009_0899
 * @implements B4CD:0A0D:0009:0899 ()
 *
 * Called From: B4CD:0AD8:000B:932A
 * Called From: B4CD:0AD8:000E:5312
 */
void f__B4CD_0A0D_0009_0899()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__B4CD_0AC2_000B_97C6(); return;
}

/**
 * Decompiled function f__B4CD_0A16_0016_4757()
 *
 * @name f__B4CD_0A16_0016_4757
 * @implements B4CD:0A16:0016:4757 ()
 *
 * Called From: B4CD:0ACA:000B:97C6
 * Called From: B4CD:0ACA:000E:77FE
 * Called From: B4CD:0ACA:002D:5918
 */
void f__B4CD_0A16_0016_4757()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A2C); f__B4CD_0750_0027_EDA0();
	f__B4CD_0A2C_000B_F03A();
}

/**
 * Decompiled function f__B4CD_0A2C_000B_F03A()
 *
 * @name f__B4CD_0A2C_000B_F03A
 * @implements B4CD:0A2C:000B:F03A ()
 *
 * Called From: B4CD:0A2C:0016:4757
 */
void f__B4CD_0A2C_000B_F03A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A37); f__B4CD_0F8B_0015_DD56();
	f__B4CD_0A37_0009_44A5();
}

/**
 * Decompiled function f__B4CD_0A37_0009_44A5()
 *
 * @name f__B4CD_0A37_0009_44A5
 * @implements B4CD:0A37:0009:44A5 ()
 *
 * Called From: B4CD:0A37:000B:F03A
 */
void f__B4CD_0A37_0009_44A5()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4CD_0A40_001B_41F2(); return; }
	emu_ip = 0x0ABF; emu_last_cs = 0xB4CD; emu_last_ip = 0x0A3D; emu_last_length = 0x0009; emu_last_crc = 0x44A5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0A40_001B_41F2()
 *
 * @name f__B4CD_0A40_001B_41F2
 * @implements B4CD:0A40:001B:41F2 ()
 *
 * Called From: B4CD:0A3B:0009:44A5
 */
void f__B4CD_0A40_001B_41F2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x20);
	if (!emu_flags.zf) { f__B4CD_0ABF_000E_77FE(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A5B); f__B4CD_10EE_0039_70D6();
	f__B4CD_0A5B_0012_1CA1();
}

/**
 * Decompiled function f__B4CD_0A5B_0012_1CA1()
 *
 * @name f__B4CD_0A5B_0012_1CA1
 * @implements B4CD:0A5B:0012:1CA1 ()
 *
 * Called From: B4CD:0A5B:001B:41F2
 */
void f__B4CD_0A5B_0012_1CA1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (emu_flags.zf) { f__B4CD_0A6D_0009_443A(); return; }
	f__B4CD_0ABF_000E_77FE(); return;
}

/**
 * Decompiled function f__B4CD_0A6D_0009_443A()
 *
 * @name f__B4CD_0A6D_0009_443A
 * @implements B4CD:0A6D:0009:443A ()
 *
 * Called From: B4CD:0A69:0012:1CA1
 */
void f__B4CD_0A6D_0009_443A()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0A76_0057_D4C9();
}

/**
 * Decompiled function f__B4CD_0A76_0057_D4C9()
 *
 * @name f__B4CD_0A76_0057_D4C9
 * @implements B4CD:0A76:0057:D4C9 ()
 *
 * Called From: B4CD:0A76:0009:443A
 */
void f__B4CD_0A76_0057_D4C9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { f__B4CD_0AA0_002D_5918(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0AA0_002D_5918(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AA0; emu_last_cs = 0xB4CD; emu_last_ip = 0x0A92; emu_last_length = 0x0057; emu_last_crc = 0xD4C9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4CD_0ABF_000E_77FE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ABF; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AB1; emu_last_length = 0x0057; emu_last_crc = 0xD4C9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ACD; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AC8; emu_last_length = 0x0057; emu_last_crc = 0xD4C9; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0A16; emu_last_cs = 0xB4CD; emu_last_ip = 0x0ACA; emu_last_length = 0x0057; emu_last_crc = 0xD4C9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0AA0_002D_5918()
 *
 * @name f__B4CD_0AA0_002D_5918
 * @implements B4CD:0AA0:002D:5918 ()
 *
 * Called From: B4CD:0A7F:0057:D4C9
 * Called From: B4CD:0A85:0057:D4C9
 */
void f__B4CD_0AA0_002D_5918()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4CD_0ABF_000E_77FE(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ABF_000E_77FE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ACD_000E_5312(); return; }
	f__B4CD_0A16_0016_4757(); return;
}

/**
 * Decompiled function f__B4CD_0ABF_000E_77FE()
 *
 * @name f__B4CD_0ABF_000E_77FE
 * @implements B4CD:0ABF:000E:77FE ()
 *
 * Called From: B4CD:0A52:001B:41F2
 * Called From: B4CD:0A6B:0012:1CA1
 * Called From: B4CD:0AA4:002D:5918
 * Called From: B4CD:0AA4:0057:D4C9
 * Called From: B4CD:0AB1:002D:5918
 */
void f__B4CD_0ABF_000E_77FE()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ACD_000E_5312(); return; }
	f__B4CD_0A16_0016_4757(); return;
}

/**
 * Decompiled function f__B4CD_0AC2_000B_97C6()
 *
 * @name f__B4CD_0AC2_000B_97C6
 * @implements B4CD:0AC2:000B:97C6 ()
 *
 * Called From: B4CD:0A13:0009:0899
 */
void f__B4CD_0AC2_000B_97C6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ACD; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AC8; emu_last_length = 0x000B; emu_last_crc = 0x97C6; emu_call(); return; } // Jump does not resolve
	f__B4CD_0A16_0016_4757(); return;
}

/**
 * Decompiled function f__B4CD_0ACD_000E_5312()
 *
 * @name f__B4CD_0ACD_000E_5312
 * @implements B4CD:0ACD:000E:5312 ()
 *
 * Called From: B4CD:0AC8:000E:77FE
 * Called From: B4CD:0AC8:002D:5918
 */
void f__B4CD_0ACD_000E_5312()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0ADB_0010_7B39(); return; }
	f__B4CD_0A0D_0009_0899(); return;
}

/**
 * Decompiled function f__B4CD_0AD0_000B_932A()
 *
 * @name f__B4CD_0AD0_000B_932A
 * @implements B4CD:0AD0:000B:932A ()
 *
 * Called From: B4CD:0A0A:000C:0F0C
 */
void f__B4CD_0AD0_000B_932A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0ADB; emu_last_cs = 0xB4CD; emu_last_ip = 0x0AD6; emu_last_length = 0x000B; emu_last_crc = 0x932A; emu_call(); return; } // Jump does not resolve
	f__B4CD_0A0D_0009_0899(); return;
}

/**
 * Decompiled function f__B4CD_0ADB_0010_7B39()
 *
 * @name f__B4CD_0ADB_0010_7B39
 * @implements B4CD:0ADB:0010:7B39 ()
 *
 * Called From: B4CD:0AD6:000E:5312
 */
void f__B4CD_0ADB_0010_7B39()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0AF0; emu_last_cs = 0xB4CD; emu_last_ip = 0x0ADF; emu_last_length = 0x0010; emu_last_crc = 0x7B39; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0AEB_0005_108E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4CD_0AF4_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0AE9_0002_03BE()
 *
 * @name f__B4CD_0AE9_0002_03BE
 * @implements B4CD:0AE9:0002:03BE ()
 *
 * Called From: B4CD:0AEE:0005:108E
 */
void f__B4CD_0AE9_0002_03BE()
{
	f__B4CD_0AF4_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0AEB_0005_108E()
 *
 * @name f__B4CD_0AEB_0005_108E
 * @implements B4CD:0AEB:0005:108E ()
 *
 * Called From: B4CD:0AE4:0010:7B39
 */
void f__B4CD_0AEB_0005_108E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4CD_0AE9_0002_03BE(); return;
}

/**
 * Decompiled function f__B4CD_0AF4_0006_137A()
 *
 * @name f__B4CD_0AF4_0006_137A
 * @implements B4CD:0AF4:0006:137A ()
 *
 * Called From: B4CD:0AE9:0002:03BE
 * Called From: B4CD:0AE9:0010:7B39
 */
void f__B4CD_0AF4_0006_137A()
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
 * Decompiled function f__B4CD_0AFA_0011_9926()
 *
 * @name f__B4CD_0AFA_0011_9926
 * @implements B4CD:0AFA:0011:9926 ()
 *
 * Called From: 34CD:00AC:0005:110A
 * Called From: B4CD:15D6:0011:BF8F
 * Called From: B4CD:1601:0019:7F5B
 */
void f__B4CD_0AFA_0011_9926()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__B4CD_0B0B_0007_6460(); return; }
	emu_ip = 0x0C30; emu_last_cs = 0xB4CD; emu_last_ip = 0x0B08; emu_last_length = 0x0011; emu_last_crc = 0x9926; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0B0B_0007_6460()
 *
 * @name f__B4CD_0B0B_0007_6460
 * @implements B4CD:0B0B:0007:6460 ()
 *
 * Called From: B4CD:0B06:0011:9926
 */
void f__B4CD_0B0B_0007_6460()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B12); f__B4CD_0750_0027_EDA0();
	f__B4CD_0B12_0013_A84B();
}

/**
 * Decompiled function f__B4CD_0B12_0013_A84B()
 *
 * @name f__B4CD_0B12_0013_A84B
 * @implements B4CD:0B12:0013:A84B ()
 *
 * Called From: B4CD:0B12:0007:6460
 */
void f__B4CD_0B12_0013_A84B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B25_0015_B3F4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0B25_0015_B3F4(); return; }
	emu_ip = 0x0C30; emu_last_cs = 0xB4CD; emu_last_ip = 0x0B22; emu_last_length = 0x0013; emu_last_crc = 0xA84B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0B25_0015_B3F4()
 *
 * @name f__B4CD_0B25_0015_B3F4
 * @implements B4CD:0B25:0015:B3F4 ()
 *
 * Called From: B4CD:0B1A:0013:A84B
 * Called From: B4CD:0B20:0013:A84B
 */
void f__B4CD_0B25_0015_B3F4()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_0B3A_001B_804C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_flags.zf) { f__B4CD_0B3A_001B_804C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0B3A_001B_804C(); return; }
	f__B4CD_0C30_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0B3A_001B_804C()
 *
 * @name f__B4CD_0B3A_001B_804C
 * @implements B4CD:0B3A:001B:804C ()
 *
 * Called From: B4CD:0B29:0015:B3F4
 * Called From: B4CD:0B2F:0015:B3F4
 * Called From: B4CD:0B35:0015:B3F4
 */
void f__B4CD_0B3A_001B_804C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4CD_0B55_0013_D62C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (emu_flags.zf) { f__B4CD_0B55_0013_D62C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_0B55_0013_D62C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0B55_0013_D62C(); return; }
	f__B4CD_0C30_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0B55_0013_D62C()
 *
 * @name f__B4CD_0B55_0013_D62C
 * @implements B4CD:0B55:0013:D62C ()
 *
 * Called From: B4CD:0B3E:001B:804C
 * Called From: B4CD:0B44:001B:804C
 * Called From: B4CD:0B4A:001B:804C
 * Called From: B4CD:0B50:001B:804C
 */
void f__B4CD_0B55_0013_D62C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0B6F_000D_D7F6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0B68_0007_6EC8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	f__B4CD_0B6D_0002_0388(); return;
}

/**
 * Decompiled function f__B4CD_0B68_0007_6EC8()
 *
 * @name f__B4CD_0B68_0007_6EC8
 * @implements B4CD:0B68:0007:6EC8 ()
 *
 * Called From: B4CD:0B5F:0013:D62C
 */
void f__B4CD_0B68_0007_6EC8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	f__B4CD_0B81_007D_5737(); return;
}

/**
 * Decompiled function f__B4CD_0B6D_0002_0388()
 *
 * @name f__B4CD_0B6D_0002_0388
 * @implements B4CD:0B6D:0002:0388 ()
 *
 * Called From: B4CD:0B66:0013:D62C
 */
void f__B4CD_0B6D_0002_0388()
{
	f__B4CD_0B81_007D_5737(); return;
}

/**
 * Decompiled function f__B4CD_0B6F_000D_D7F6()
 *
 * @name f__B4CD_0B6F_000D_D7F6
 * @implements B4CD:0B6F:000D:D7F6 ()
 *
 * Called From: B4CD:0B59:0013:D62C
 */
void f__B4CD_0B6F_000D_D7F6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B7C_0082_5459(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	f__B4CD_0B81_007D_5737(); return;
}

/**
 * Decompiled function f__B4CD_0B7C_0082_5459()
 *
 * @name f__B4CD_0B7C_0082_5459
 * @implements B4CD:0B7C:0082:5459 ()
 *
 * Called From: B4CD:0B73:000D:D7F6
 */
void f__B4CD_0B7C_0082_5459()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0B91_006D_31A0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0B9C; emu_last_cs = 0xB4CD; emu_last_ip = 0x0B95; emu_last_length = 0x0082; emu_last_crc = 0x5459; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx.x, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); emu_ip = 0x0C36; emu_last_cs = 0xB4CD; emu_last_ip = 0x0BFB; emu_last_length = 0x0082; emu_last_crc = 0x5459; emu_call(); // Jump does not resolve
	f__B4CD_0BFE_000B_AA10();
}

/**
 * Decompiled function f__B4CD_0B81_007D_5737()
 *
 * @name f__B4CD_0B81_007D_5737
 * @implements B4CD:0B81:007D:5737 ()
 *
 * Called From: B4CD:0B6D:0007:6EC8
 * Called From: B4CD:0B6D:0002:0388
 * Called From: B4CD:0B7A:000D:D7F6
 */
void f__B4CD_0B81_007D_5737()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_0B91_006D_31A0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B9C_0062_E320(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx.x, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); emu_ip = 0x0C36; emu_last_cs = 0xB4CD; emu_last_ip = 0x0BFB; emu_last_length = 0x007D; emu_last_crc = 0x5737; emu_call(); // Jump does not resolve
	f__B4CD_0BFE_000B_AA10();
}

/**
 * Decompiled function f__B4CD_0B91_006D_31A0()
 *
 * @name f__B4CD_0B91_006D_31A0
 * @implements B4CD:0B91:006D:31A0 ()
 *
 * Called From: B4CD:0B8A:0082:5459
 * Called From: B4CD:0B8A:007D:5737
 */
void f__B4CD_0B91_006D_31A0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (!emu_flags.zf) { f__B4CD_0B9C_0062_E320(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx.x, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); f__B4CD_0C36_0014_AEAF();
	f__B4CD_0BFE_000B_AA10();
}

/**
 * Decompiled function f__B4CD_0B9C_0062_E320()
 *
 * @name f__B4CD_0B9C_0062_E320
 * @implements B4CD:0B9C:0062:E320 ()
 *
 * Called From: B4CD:0B95:007D:5737
 * Called From: B4CD:0B95:006D:31A0
 */
void f__B4CD_0B9C_0062_E320()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_dx.x, 0x1FF);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di,  0x0), 0xFE00);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_orw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_dx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); f__B4CD_0C36_0014_AEAF();
	f__B4CD_0BFE_000B_AA10();
}

/**
 * Decompiled function f__B4CD_0BFE_000B_AA10()
 *
 * @name f__B4CD_0BFE_000B_AA10
 * @implements B4CD:0BFE:000B:AA10 ()
 *
 * Called From: B4CD:0BFE:0062:E320
 * Called From: B4CD:0BFE:006D:31A0
 */
void f__B4CD_0BFE_000B_AA10()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C09); f__B4CD_0C36_0014_AEAF();
	f__B4CD_0C09_000B_A82C();
}

/**
 * Decompiled function f__B4CD_0C09_000B_A82C()
 *
 * @name f__B4CD_0C09_000B_A82C
 * @implements B4CD:0C09:000B:A82C ()
 *
 * Called From: B4CD:0C09:000B:AA10
 */
void f__B4CD_0C09_000B_A82C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C14); f__B4CD_0C36_0014_AEAF();
	f__B4CD_0C14_000D_8B26();
}

/**
 * Decompiled function f__B4CD_0C14_000D_8B26()
 *
 * @name f__B4CD_0C14_000D_8B26
 * @implements B4CD:0C14:000D:8B26 ()
 *
 * Called From: B4CD:0C14:000B:A82C
 */
void f__B4CD_0C14_000D_8B26()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0xFFC0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C21); f__B4CD_0C36_0014_AEAF();
	f__B4CD_0C21_000D_F492();
}

/**
 * Decompiled function f__B4CD_0C21_000D_F492()
 *
 * @name f__B4CD_0C21_000D_F492
 * @implements B4CD:0C21:000D:F492 ()
 *
 * Called From: B4CD:0C21:000D:8B26
 */
void f__B4CD_0C21_000D_F492()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C2E); f__B4CD_0C36_0014_AEAF();
	f__B4CD_0C2E_0008_AFFA();
}

/**
 * Decompiled function f__B4CD_0C2E_0008_AFFA()
 *
 * @name f__B4CD_0C2E_0008_AFFA
 * @implements B4CD:0C2E:0008:AFFA ()
 *
 * Called From: B4CD:0C2E:000D:F492
 */
void f__B4CD_0C2E_0008_AFFA()
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
 * Decompiled function f__B4CD_0C30_0006_137A()
 *
 * @name f__B4CD_0C30_0006_137A
 * @implements B4CD:0C30:0006:137A ()
 *
 * Called From: B4CD:0B37:0015:B3F4
 * Called From: B4CD:0B52:001B:804C
 */
void f__B4CD_0C30_0006_137A()
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
 * Decompiled function f__B4CD_0C36_0014_AEAF()
 *
 * @name f__B4CD_0C36_0014_AEAF
 * @implements B4CD:0C36:0014:AEAF ()
 *
 * Called From: B4CD:0BFB:0062:E320
 * Called From: B4CD:0BFB:006D:31A0
 * Called From: B4CD:0C06:000B:AA10
 * Called From: B4CD:0C11:000B:A82C
 * Called From: B4CD:0C1E:000D:8B26
 * Called From: B4CD:0C2B:000D:F492
 */
void f__B4CD_0C36_0014_AEAF()
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
	emu_push(0x0C4A); f__B4CD_0750_0027_EDA0();
	f__B4CD_0C4A_0015_4805();
}

/**
 * Decompiled function f__B4CD_0C4A_0015_4805()
 *
 * @name f__B4CD_0C4A_0015_4805
 * @implements B4CD:0C4A:0015:4805 ()
 *
 * Called From: B4CD:0C4A:0014:AEAF
 */
void f__B4CD_0C4A_0015_4805()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_flags.zf) { f__B4CD_0C5F_0008_DE80(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_flags.zf) { f__B4CD_0C5F_0008_DE80(); return; }
	f__B4CD_0D60_000B_71F2(); return;
}

/**
 * Decompiled function f__B4CD_0C5F_0008_DE80()
 *
 * @name f__B4CD_0C5F_0008_DE80
 * @implements B4CD:0C5F:0008:DE80 ()
 *
 * Called From: B4CD:0C54:0015:4805
 * Called From: B4CD:0C5A:0015:4805
 */
void f__B4CD_0C5F_0008_DE80()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4CD_0CF9_0009_0EB3(); return;
}

/**
 * Decompiled function f__B4CD_0C67_0016_B982()
 *
 * @name f__B4CD_0C67_0016_B982
 * @implements B4CD:0C67:0016:B982 ()
 *
 * Called From: B4CD:0CFF:0009:0EB3
 * Called From: B4CD:0CFF:000C:36BD
 */
void f__B4CD_0C67_0016_B982()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x255E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0C7D); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0C7D_000C_C6EB();
}

/**
 * Decompiled function f__B4CD_0C7D_000C_C6EB()
 *
 * @name f__B4CD_0C7D_000C_C6EB
 * @implements B4CD:0C7D:000C:C6EB ()
 *
 * Called From: B4CD:0C7D:0016:B982
 */
void f__B4CD_0C7D_000C_C6EB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0C89); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0C89_0034_EE66();
}

/**
 * Decompiled function f__B4CD_0C89_0034_EE66()
 *
 * @name f__B4CD_0C89_0034_EE66
 * @implements B4CD:0C89:0034:EE66 ()
 *
 * Called From: B4CD:0C89:000C:C6EB
 */
void f__B4CD_0C89_0034_EE66()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C91; emu_last_length = 0x0034; emu_last_crc = 0xEE66; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C97; emu_last_length = 0x0034; emu_last_crc = 0xEE66; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C9D; emu_last_length = 0x0034; emu_last_crc = 0xEE66; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x40);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_0CBD_0007_7964(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_flags.zf) { emu_ip = 0x0CB1; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CA9; emu_last_length = 0x0034; emu_last_crc = 0xEE66; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0CBB; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CAF; emu_last_length = 0x0034; emu_last_crc = 0xEE66; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_si, emu_ax.x);
	emu_ip = 0x0CF6; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CBB; emu_last_length = 0x0034; emu_last_crc = 0xEE66; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0CBD_0007_7964()
 *
 * @name f__B4CD_0CBD_0007_7964
 * @implements B4CD:0CBD:0007:7964 ()
 *
 * Called From: B4CD:0CA3:0034:EE66
 */
void f__B4CD_0CBD_0007_7964()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0CC4); f__B4CD_0750_0027_EDA0();
	f__B4CD_0CC4_0022_827D();
}

/**
 * Decompiled function f__B4CD_0CC4_0022_827D()
 *
 * @name f__B4CD_0CC4_0022_827D
 * @implements B4CD:0CC4:0022:827D ()
 *
 * Called From: B4CD:0CC4:0007:7964
 */
void f__B4CD_0CC4_0022_827D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (!emu_flags.zf) { f__B4CD_0CE6_001C_8EBE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8);
	if (emu_flags.zf) { f__B4CD_0CDA_000C_8176(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if (!emu_flags.zf) { f__B4CD_0CE4_0002_038C(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_si, emu_ax.x);
	f__B4CD_0CF6_000C_36BD(); return;
}

/**
 * Decompiled function f__B4CD_0CDA_000C_8176()
 *
 * @name f__B4CD_0CDA_000C_8176
 * @implements B4CD:0CDA:000C:8176 ()
 *
 * Called From: B4CD:0CD2:0022:827D
 */
void f__B4CD_0CDA_000C_8176()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_si, emu_ax.x);
	f__B4CD_0CF6_000C_36BD(); return;
}

/**
 * Decompiled function f__B4CD_0CE4_0002_038C()
 *
 * @name f__B4CD_0CE4_0002_038C
 * @implements B4CD:0CE4:0002:038C ()
 *
 * Called From: B4CD:0CD8:0022:827D
 */
void f__B4CD_0CE4_0002_038C()
{
	f__B4CD_0CF6_000C_36BD(); return;
}

/**
 * Decompiled function f__B4CD_0CE6_001C_8EBE()
 *
 * @name f__B4CD_0CE6_001C_8EBE
 * @implements B4CD:0CE6:001C:8EBE ()
 *
 * Called From: B4CD:0CCC:0022:827D
 */
void f__B4CD_0CE6_001C_8EBE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if (!emu_flags.zf) { f__B4CD_0CF6_000C_36BD(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_si, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0D02_000B_39E6(); return; }
	emu_ip = 0x0C67; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CFF; emu_last_length = 0x001C; emu_last_crc = 0x8EBE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0CF6_000C_36BD()
 *
 * @name f__B4CD_0CF6_000C_36BD
 * @implements B4CD:0CF6:000C:36BD ()
 *
 * Called From: B4CD:0CE4:000C:8176
 * Called From: B4CD:0CE4:0022:827D
 * Called From: B4CD:0CE4:0002:038C
 * Called From: B4CD:0CEA:001C:8EBE
 */
void f__B4CD_0CF6_000C_36BD()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_0D02_000B_39E6(); return; }
	f__B4CD_0C67_0016_B982(); return;
}

/**
 * Decompiled function f__B4CD_0CF9_0009_0EB3()
 *
 * @name f__B4CD_0CF9_0009_0EB3
 * @implements B4CD:0CF9:0009:0EB3 ()
 *
 * Called From: B4CD:0C64:0008:DE80
 */
void f__B4CD_0CF9_0009_0EB3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D02; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CFD; emu_last_length = 0x0009; emu_last_crc = 0x0EB3; emu_call(); return; } // Jump does not resolve
	f__B4CD_0C67_0016_B982(); return;
}

/**
 * Decompiled function f__B4CD_0D02_000B_39E6()
 *
 * @name f__B4CD_0D02_000B_39E6
 * @implements B4CD:0D02:000B:39E6 ()
 *
 * Called From: B4CD:0CFD:000C:36BD
 * Called From: B4CD:0CFD:001C:8EBE
 */
void f__B4CD_0D02_000B_39E6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (!emu_flags.zf) { f__B4CD_0D0D_005E_2EBD(); return; }
	emu_addws(&emu_si, 0x31);
	f__B4CD_0D10_005B_3E81(); return;
}

/**
 * Decompiled function f__B4CD_0D0D_005E_2EBD()
 *
 * @name f__B4CD_0D0D_005E_2EBD
 * @implements B4CD:0D0D:005E:2EBD ()
 *
 * Called From: B4CD:0D06:000B:39E6
 */
void f__B4CD_0D0D_005E_2EBD()
{
	emu_addws(&emu_si, 0x41);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); f__B4CD_0000_0011_CE2B();
	f__B4CD_0D6B_0009_D27B();
}

/**
 * Decompiled function f__B4CD_0D10_005B_3E81()
 *
 * @name f__B4CD_0D10_005B_3E81
 * @implements B4CD:0D10:005B:3E81 ()
 *
 * Called From: B4CD:0D0B:000B:39E6
 */
void f__B4CD_0D10_005B_3E81()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); f__B4CD_0000_0011_CE2B();
	f__B4CD_0D6B_0009_D27B();
}

/**
 * Decompiled function f__B4CD_0D60_000B_71F2()
 *
 * @name f__B4CD_0D60_000B_71F2
 * @implements B4CD:0D60:000B:71F2 ()
 *
 * Called From: B4CD:0C5C:0015:4805
 */
void f__B4CD_0D60_000B_71F2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); f__B4CD_0000_0011_CE2B();
	f__B4CD_0D6B_0009_D27B();
}

/**
 * Decompiled function f__B4CD_0D6B_0009_D27B()
 *
 * @name f__B4CD_0D6B_0009_D27B
 * @implements B4CD:0D6B:0009:D27B ()
 *
 * Called From: B4CD:0D6B:005B:3E81
 * Called From: B4CD:0D6B:005E:2EBD
 * Called From: B4CD:0D6B:000B:71F2
 */
void f__B4CD_0D6B_0009_D27B()
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
 * Decompiled function f__B4CD_0D74_0020_95E1()
 *
 * @name f__B4CD_0D74_0020_95E1
 * @implements B4CD:0D74:0020:95E1 ()
 *
 * Called From: 34CD:0070:0005:19D2
 * Called From: 34CD:0070:0005:1B1A
 * Called From: 34CD:0070:0005:18EA
 */
void f__B4CD_0D74_0020_95E1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__B4CD_0D94_0008_DEA0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0F85; emu_last_cs = 0xB4CD; emu_last_ip = 0x0D91; emu_last_length = 0x0020; emu_last_crc = 0x95E1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0D91_0003_048E()
 *
 * @name f__B4CD_0D91_0003_048E
 * @implements B4CD:0D91:0003:048E ()
 *
 * Called From: B4CD:0F82:0005:0CE4
 */
void f__B4CD_0D91_0003_048E()
{
	f__B4CD_0F85_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0D94_0008_DEA0()
 *
 * @name f__B4CD_0D94_0008_DEA0
 * @implements B4CD:0D94:0008:DEA0 ()
 *
 * Called From: B4CD:0D8D:0020:95E1
 */
void f__B4CD_0D94_0008_DEA0()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D9C); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0D9C_008E_F571();
}

/**
 * Decompiled function f__B4CD_0D9C_008E_F571()
 *
 * @name f__B4CD_0D9C_008E_F571
 * @implements B4CD:0D9C:008E:F571 ()
 *
 * Called From: B4CD:0D9C:0008:DEA0
 */
void f__B4CD_0D9C_008E_F571()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (emu_flags.zf) { f__B4CD_0DD8_0052_F812(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0x4);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0DD5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DC3; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DD8; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DD3; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DE1; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0x4);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DF6; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E06; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0E68; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E0D; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_ip = 0x0E2B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E25; emu_last_length = 0x008E; emu_last_crc = 0xF571; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_0DD8_0052_F812()
 *
 * @name f__B4CD_0DD8_0052_F812
 * @implements B4CD:0DD8:0052:F812 ()
 *
 * Called From: B4CD:0DAE:008E:F571
 */
void f__B4CD_0DD8_0052_F812()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0DE1; emu_last_length = 0x0052; emu_last_crc = 0xF812; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andws(&emu_dx.x, 0x0);
	emu_andw(&emu_ax.x, 0x4);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { f__B4CD_0E0B_001F_6BF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E0B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E06; emu_last_length = 0x0052; emu_last_crc = 0xF812; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0E68; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E0D; emu_last_length = 0x0052; emu_last_crc = 0xF812; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_ip = 0x0E2B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E25; emu_last_length = 0x0052; emu_last_crc = 0xF812; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_0E0B_001F_6BF8()
 *
 * @name f__B4CD_0E0B_001F_6BF8
 * @implements B4CD:0E0B:001F:6BF8 ()
 *
 * Called From: B4CD:0DF6:0052:F812
 */
void f__B4CD_0E0B_001F_6BF8()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4CD_0E68_000F_00BA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_ip = 0x0E2B; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E25; emu_last_length = 0x001F; emu_last_crc = 0x6BF8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_0E68_000F_00BA()
 *
 * @name f__B4CD_0E68_000F_00BA
 * @implements B4CD:0E68:000F:00BA ()
 *
 * Called From: B4CD:0E0D:001F:6BF8
 */
void f__B4CD_0E68_000F_00BA()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0E77; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E6D; emu_last_length = 0x000F; emu_last_crc = 0x00BA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0EDA; emu_last_cs = 0xB4CD; emu_last_ip = 0x0E72; emu_last_length = 0x000F; emu_last_crc = 0x00BA; emu_call(); return; } // Jump does not resolve
	f__B4CD_0F4F_0002_03AC(); return;
}

/**
 * Decompiled function f__B4CD_0F4F_0002_03AC()
 *
 * @name f__B4CD_0F4F_0002_03AC
 * @implements B4CD:0F4F:0002:03AC ()
 *
 * Called From: B4CD:0E74:000F:00BA
 */
void f__B4CD_0F4F_0002_03AC()
{
	f__B4CD_0F51_000F_EFE3(); return;
}

/**
 * Decompiled function f__B4CD_0F51_000F_EFE3()
 *
 * @name f__B4CD_0F51_000F_EFE3
 * @implements B4CD:0F51:000F:EFE3 ()
 *
 * Called From: B4CD:0F4F:0002:03AC
 */
void f__B4CD_0F51_000F_EFE3()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4CD_0F76_000A_DC7B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F60); emu_cs = 0x352A; emu_ip = 0x0F85; emu_last_cs = 0xB4CD; emu_last_ip = 0x0F5B; emu_last_length = 0x000F; emu_last_crc = 0xEFE3; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_0F76_000A_DC7B()
 *
 * @name f__B4CD_0F76_000A_DC7B
 * @implements B4CD:0F76:000A:DC7B ()
 *
 * Called From: B4CD:0F53:000F:EFE3
 */
void f__B4CD_0F76_000A_DC7B()
{
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { f__B4CD_0F80_0005_0CE4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0F82; emu_last_cs = 0xB4CD; emu_last_ip = 0x0F7E; emu_last_length = 0x000A; emu_last_crc = 0xDC7B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_0F80_0005_0CE4()
 *
 * @name f__B4CD_0F80_0005_0CE4
 * @implements B4CD:0F80:0005:0CE4 ()
 *
 * Called From: B4CD:0F79:000A:DC7B
 */
void f__B4CD_0F80_0005_0CE4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_0D91_0003_048E(); return;
}

/**
 * Decompiled function f__B4CD_0F85_0006_137A()
 *
 * @name f__B4CD_0F85_0006_137A
 * @implements B4CD:0F85:0006:137A ()
 *
 * Called From: B4CD:0D91:0003:048E
 */
void f__B4CD_0F85_0006_137A()
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
 * Decompiled function f__B4CD_0F8B_0015_DD56()
 *
 * @name f__B4CD_0F8B_0015_DD56
 * @implements B4CD:0F8B:0015:DD56 ()
 *
 * Called From: 34CD:0057:0005:1632
 * Called From: 34CD:0057:0005:1570
 * Called From: 34CD:0057:0005:1786
 * Called From: 34CD:0057:0005:1642
 * Called From: 34CD:0057:0005:170A
 * Called From: 34CD:0057:0005:14FA
 * Called From: B4CD:0810:000C:758B
 * Called From: B4CD:0A34:000B:F03A
 */
void f__B4CD_0F8B_0015_DD56()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_si, 0xC000);
	if (emu_flags.zf) { f__B4CD_0FA1_0006_041A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1013_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0F9C_0004_067A()
 *
 * @name f__B4CD_0F9C_0004_067A
 * @implements B4CD:0F9C:0004:067A ()
 *
 * Called From: B4CD:100C:0002:02B0
 * Called From: B4CD:100C:005E:2A6A
 */
void f__B4CD_0F9C_0004_067A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1013_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0F9E_0002_034A()
 *
 * @name f__B4CD_0F9E_0002_034A
 * @implements B4CD:0F9E:0002:034A ()
 *
 * Called From: B4CD:1011:0005:15AA
 */
void f__B4CD_0F9E_0002_034A()
{
	f__B4CD_1013_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_0FA1_0006_041A()
 *
 * @name f__B4CD_0FA1_0006_041A
 * @implements B4CD:0FA1:0006:041A ()
 *
 * Called From: B4CD:0F9A:0015:DD56
 */
void f__B4CD_0FA1_0006_041A()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0FA7_0009_406A();
}

/**
 * Decompiled function f__B4CD_0FA7_0009_406A()
 *
 * @name f__B4CD_0FA7_0009_406A
 * @implements B4CD:0FA7:0009:406A ()
 *
 * Called From: B4CD:0FA7:0006:041A
 */
void f__B4CD_0FA7_0009_406A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FB0); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_0FB0_005E_2A6A();
}

/**
 * Decompiled function f__B4CD_0FB0_005E_2A6A()
 *
 * @name f__B4CD_0FB0_005E_2A6A
 * @implements B4CD:0FB0:005E:2A6A ()
 *
 * Called From: B4CD:0FB0:0009:406A
 */
void f__B4CD_0FB0_005E_2A6A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100C_0002_02B0(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100C_0002_02B0(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100C_0002_02B0(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_100E_0005_15AA(); return; }
	f__B4CD_0F9C_0004_067A(); return;
}

/**
 * Decompiled function f__B4CD_100C_0002_02B0()
 *
 * @name f__B4CD_100C_0002_02B0
 * @implements B4CD:100C:0002:02B0 ()
 *
 * Called From: B4CD:0FC0:005E:2A6A
 * Called From: B4CD:0FDC:005E:2A6A
 * Called From: B4CD:0FED:005E:2A6A
 */
void f__B4CD_100C_0002_02B0()
{
	f__B4CD_0F9C_0004_067A(); return;
}

/**
 * Decompiled function f__B4CD_100E_0005_15AA()
 *
 * @name f__B4CD_100E_0005_15AA
 * @implements B4CD:100E:0005:15AA ()
 *
 * Called From: B4CD:100A:005E:2A6A
 */
void f__B4CD_100E_0005_15AA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4CD_0F9E_0002_034A(); return;
}

/**
 * Decompiled function f__B4CD_1013_0006_137A()
 *
 * @name f__B4CD_1013_0006_137A
 * @implements B4CD:1013:0006:137A ()
 *
 * Called From: B4CD:0F9E:0004:067A
 * Called From: B4CD:0F9E:0002:034A
 * Called From: B4CD:0F9E:0015:DD56
 */
void f__B4CD_1013_0006_137A()
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
 * Decompiled function f__B4CD_1086_0040_609C()
 *
 * @name f__B4CD_1086_0040_609C
 * @implements B4CD:1086:0040:609C ()
 *
 * Called From: 34CD:00C0:0005:161A
 * Called From: 34CD:00C0:0005:166A
 * Called From: 34CD:00C0:0005:14D2
 * Called From: 34CD:00C0:0005:1722
 * Called From: B4CD:02EA:0007:795E
 * Called From: B4CD:02EA:000B:7B59
 * Called From: B4CD:1B30:000D:50DF
 */
void f__B4CD_1086_0040_609C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x10E4; emu_last_cs = 0xB4CD; emu_last_ip = 0x1092; emu_last_length = 0x0040; emu_last_crc = 0x609C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movb(&emu_ax.h, 0x0);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_10E4_0006_11A6(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__B4CD_10C9_0019_B54A(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_10C6_0003_0126();
}

/**
 * Decompiled function f__B4CD_10C6_0003_0126()
 *
 * @name f__B4CD_10C6_0003_0126
 * @implements B4CD:10C6:0003:0126 ()
 *
 * Called From: B4CD:10C6:0040:609C
 * Called From: B4CD:10E2:0002:0268
 */
void f__B4CD_10C6_0003_0126()
{
	emu_pop(&emu_cx.x);
	f__B4CD_10EA_0004_07E2(); return;
}

/**
 * Decompiled function f__B4CD_10C7_0002_03EE()
 *
 * @name f__B4CD_10C7_0002_03EE
 * @implements B4CD:10C7:0002:03EE ()
 *
 * Called From: B4CD:10E8:0006:11A6
 */
void f__B4CD_10C7_0002_03EE()
{
	f__B4CD_10EA_0004_07E2(); return;
}

/**
 * Decompiled function f__B4CD_10C9_0019_B54A()
 *
 * @name f__B4CD_10C9_0019_B54A
 * @implements B4CD:10C9:0019:B54A ()
 *
 * Called From: B4CD:10BE:0040:609C
 */
void f__B4CD_10C9_0019_B54A()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x20);
	if (emu_flags.zf) { emu_ip = 0x10E4; emu_last_cs = 0xB4CD; emu_last_ip = 0x10DA; emu_last_length = 0x0019; emu_last_crc = 0xB54A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10E2); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_10E2_0002_0268();
}

/**
 * Decompiled function f__B4CD_10E2_0002_0268()
 *
 * @name f__B4CD_10E2_0002_0268
 * @implements B4CD:10E2:0002:0268 ()
 *
 * Called From: B4CD:10E2:0019:B54A
 */
void f__B4CD_10E2_0002_0268()
{
	f__B4CD_10C6_0003_0126(); return;
}

/**
 * Decompiled function f__B4CD_10E4_0006_11A6()
 *
 * @name f__B4CD_10E4_0006_11A6
 * @implements B4CD:10E4:0006:11A6 ()
 *
 * Called From: B4CD:10AB:0040:609C
 */
void f__B4CD_10E4_0006_11A6()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_10C7_0002_03EE(); return;
}

/**
 * Decompiled function f__B4CD_10EA_0004_07E2()
 *
 * @name f__B4CD_10EA_0004_07E2
 * @implements B4CD:10EA:0004:07E2 ()
 *
 * Called From: B4CD:10C7:0002:03EE
 * Called From: B4CD:10C7:0003:0126
 */
void f__B4CD_10EA_0004_07E2()
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
 * Decompiled function f__B4CD_10EE_0039_70D6()
 *
 * @name f__B4CD_10EE_0039_70D6
 * @implements B4CD:10EE:0039:70D6 ()
 *
 * Called From: 34CD:00A2:0005:109A
 * Called From: 34CD:00A2:0005:11A2
 * Called From: B4CD:0424:001F:4084
 * Called From: B4CD:0A58:001B:41F2
 * Called From: B4CD:130A:0009:7B1E
 * Called From: B4CD:1473:001B:4AB7
 * Called From: B4CD:1473:0041:FDD7
 */
void f__B4CD_10EE_0039_70D6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x112A; emu_last_cs = 0xB4CD; emu_last_ip = 0x10F9; emu_last_length = 0x0039; emu_last_crc = 0x70D6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__B4CD_112A_0006_11EC(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movb(&emu_ax.h, 0x0);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1127); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1127_0003_0168();
}

/**
 * Decompiled function f__B4CD_1127_0003_0168()
 *
 * @name f__B4CD_1127_0003_0168
 * @implements B4CD:1127:0003:0168 ()
 *
 * Called From: B4CD:1127:0039:70D6
 */
void f__B4CD_1127_0003_0168()
{
	emu_pop(&emu_cx.x);
	f__B4CD_1130_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_1128_0002_03A0()
 *
 * @name f__B4CD_1128_0002_03A0
 * @implements B4CD:1128:0002:03A0 ()
 *
 * Called From: B4CD:112E:0006:11EC
 */
void f__B4CD_1128_0002_03A0()
{
	f__B4CD_1130_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_112A_0006_11EC()
 *
 * @name f__B4CD_112A_0006_11EC
 * @implements B4CD:112A:0006:11EC ()
 *
 * Called From: B4CD:110C:0039:70D6
 */
void f__B4CD_112A_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1128_0002_03A0(); return;
}

/**
 * Decompiled function f__B4CD_1130_0003_0212()
 *
 * @name f__B4CD_1130_0003_0212
 * @implements B4CD:1130:0003:0212 ()
 *
 * Called From: B4CD:1128:0002:03A0
 * Called From: B4CD:1128:0003:0168
 */
void f__B4CD_1130_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1133_0039_7483()
 *
 * @name f__B4CD_1133_0039_7483
 * @implements B4CD:1133:0039:7483 ()
 *
 * Called From: 34CD:00B6:0005:1D42
 * Called From: 34CD:00B6:0005:1E00
 * Called From: 34CD:00B6:0005:1FA4
 * Called From: 34CD:00B6:0005:1CF6
 * Called From: 34CD:00B6:0005:1D32
 * Called From: 34CD:00B6:0005:1F8A
 * Called From: 34CD:00B6:0005:1C7A
 * Called From: B4CD:07C2:0005:0CEA
 * Called From: B4CD:131A:0008:EC44
 */
void f__B4CD_1133_0039_7483()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x116F; emu_last_cs = 0xB4CD; emu_last_ip = 0x113E; emu_last_length = 0x0039; emu_last_crc = 0x7483; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x20);
	if (emu_flags.zf) { f__B4CD_116F_0006_11EC(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movb(&emu_ax.h, 0x0);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x116C); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_116C_0003_0168();
}

/**
 * Decompiled function f__B4CD_116C_0003_0168()
 *
 * @name f__B4CD_116C_0003_0168
 * @implements B4CD:116C:0003:0168 ()
 *
 * Called From: B4CD:116C:0039:7483
 */
void f__B4CD_116C_0003_0168()
{
	emu_pop(&emu_cx.x);
	f__B4CD_1175_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_116D_0002_03A0()
 *
 * @name f__B4CD_116D_0002_03A0
 * @implements B4CD:116D:0002:03A0 ()
 *
 * Called From: B4CD:1173:0006:11EC
 */
void f__B4CD_116D_0002_03A0()
{
	f__B4CD_1175_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_116F_0006_11EC()
 *
 * @name f__B4CD_116F_0006_11EC
 * @implements B4CD:116F:0006:11EC ()
 *
 * Called From: B4CD:1151:0039:7483
 */
void f__B4CD_116F_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_116D_0002_03A0(); return;
}

/**
 * Decompiled function f__B4CD_1175_0003_0212()
 *
 * @name f__B4CD_1175_0003_0212
 * @implements B4CD:1175:0003:0212 ()
 *
 * Called From: B4CD:116D:0002:03A0
 * Called From: B4CD:116D:0003:0168
 */
void f__B4CD_1175_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1178_000D_521E()
 *
 * @name f__B4CD_1178_000D_521E
 * @implements B4CD:1178:000D:521E ()
 *
 * Called From: 34CD:0084:0005:19F2
 * Called From: 34CD:0084:0005:18CA
 */
void f__B4CD_1178_000D_521E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1185); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1185_000B_D16B();
}

/**
 * Decompiled function f__B4CD_1185_000B_D16B()
 *
 * @name f__B4CD_1185_000B_D16B
 * @implements B4CD:1185:000B:D16B ()
 *
 * Called From: B4CD:1185:000D:521E
 */
void f__B4CD_1185_000B_D16B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1190); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1190_002C_590E();
}

/**
 * Decompiled function f__B4CD_1190_002C_590E()
 *
 * @name f__B4CD_1190_002C_590E
 * @implements B4CD:1190:002C:590E ()
 *
 * Called From: B4CD:1190:000B:D16B
 */
void f__B4CD_1190_002C_590E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_subws(&emu_si, 0x7);
	emu_subws(&emu_di, 0x5);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_addw(&emu_ax.x, 0xFFF1);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_11BC_0040_A4A9(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B4CD_11D7_0025_5915(); return;
}

/**
 * Decompiled function f__B4CD_11BC_0040_A4A9()
 *
 * @name f__B4CD_11BC_0040_A4A9
 * @implements B4CD:11BC:0040:A4A9 ()
 *
 * Called From: B4CD:11B6:002C:590E
 */
void f__B4CD_11BC_0040_A4A9()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_addw(&emu_ax.x, 0xFFF1);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_11FC_002F_7D22(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__B4CD_1217_0014_0DFC(); return;
}

/**
 * Decompiled function f__B4CD_11D7_0025_5915()
 *
 * @name f__B4CD_11D7_0025_5915
 * @implements B4CD:11D7:0025:5915 ()
 *
 * Called From: B4CD:11BA:002C:590E
 */
void f__B4CD_11D7_0025_5915()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_11FC_002F_7D22(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__B4CD_1217_0014_0DFC(); return;
}

/**
 * Decompiled function f__B4CD_11FC_002F_7D22()
 *
 * @name f__B4CD_11FC_002F_7D22
 * @implements B4CD:11FC:002F:7D22 ()
 *
 * Called From: B4CD:11F6:0040:A4A9
 * Called From: B4CD:11F6:0025:5915
 */
void f__B4CD_11FC_002F_7D22()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFF6);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_122B_0020_ADAA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B4CD_1237_0014_03B4(); return;
}

/**
 * Decompiled function f__B4CD_1217_0014_0DFC()
 *
 * @name f__B4CD_1217_0014_0DFC
 * @implements B4CD:1217:0014:0DFC ()
 *
 * Called From: B4CD:11FA:0025:5915
 * Called From: B4CD:11FA:0040:A4A9
 */
void f__B4CD_1217_0014_0DFC()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_122B_0020_ADAA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__B4CD_1237_0014_03B4(); return;
}

/**
 * Decompiled function f__B4CD_122B_0020_ADAA()
 *
 * @name f__B4CD_122B_0020_ADAA
 * @implements B4CD:122B:0020:ADAA ()
 *
 * Called From: B4CD:1225:0014:0DFC
 * Called From: B4CD:1225:002F:7D22
 */
void f__B4CD_122B_0020_ADAA()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_124B_0015_F4AE(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__B4CD_1257_0009_C77B(); return;
}

/**
 * Decompiled function f__B4CD_1237_0014_03B4()
 *
 * @name f__B4CD_1237_0014_03B4
 * @implements B4CD:1237:0014:03B4 ()
 *
 * Called From: B4CD:1229:0014:0DFC
 * Called From: B4CD:1229:002F:7D22
 */
void f__B4CD_1237_0014_03B4()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4CD_124B_0015_F4AE(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__B4CD_1257_0009_C77B(); return;
}

/**
 * Decompiled function f__B4CD_124B_0015_F4AE()
 *
 * @name f__B4CD_124B_0015_F4AE
 * @implements B4CD:124B:0015:F4AE ()
 *
 * Called From: B4CD:1245:0020:ADAA
 * Called From: B4CD:1245:0014:03B4
 */
void f__B4CD_124B_0015_F4AE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1260_0009_85C2();
}

/**
 * Decompiled function f__B4CD_1257_0009_C77B()
 *
 * @name f__B4CD_1257_0009_C77B
 * @implements B4CD:1257:0009:C77B ()
 *
 * Called From: B4CD:1249:0014:03B4
 * Called From: B4CD:1249:0020:ADAA
 */
void f__B4CD_1257_0009_C77B()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1260_0009_85C2();
}

/**
 * Decompiled function f__B4CD_1260_0009_85C2()
 *
 * @name f__B4CD_1260_0009_85C2
 * @implements B4CD:1260:0009:85C2 ()
 *
 * Called From: B4CD:1260:0009:C77B
 * Called From: B4CD:1260:0015:F4AE
 */
void f__B4CD_1260_0009_85C2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FE), emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1269_0019_57F0()
 *
 * @name f__B4CD_1269_0019_57F0
 * @implements B4CD:1269:0019:57F0 ()
 *
 * Called From: 34CD:00CA:0005:18FA
 * Called From: B4CD:04A5:0008:6FFE
 * Called From: B4CD:08CC:0013:9550
 */
void f__B4CD_1269_0019_57F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__B4CD_1282_0041_3735(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1381_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_127D_0005_0ED4()
 *
 * @name f__B4CD_127D_0005_0ED4
 * @implements B4CD:127D:0005:0ED4 ()
 *
 * Called From: B4CD:12C1:0041:3735
 */
void f__B4CD_127D_0005_0ED4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1381_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_127F_0003_04B4()
 *
 * @name f__B4CD_127F_0003_04B4
 * @implements B4CD:127F:0003:04B4 ()
 *
 * Called From: B4CD:137E:0008:97EC
 */
void f__B4CD_127F_0003_04B4()
{
	f__B4CD_1381_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_1282_0041_3735()
 *
 * @name f__B4CD_1282_0041_3735
 * @implements B4CD:1282:0041:3735 ()
 *
 * Called From: B4CD:127B:0019:57F0
 */
void f__B4CD_1282_0041_3735()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_12C3_0006_041A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x12C1; emu_last_cs = 0xB4CD; emu_last_ip = 0x12B4; emu_last_length = 0x0041; emu_last_crc = 0x3735; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax.x, 0x10);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_12C3_0006_041A(); return; }
	f__B4CD_127D_0005_0ED4(); return;
}

/**
 * Decompiled function f__B4CD_12C3_0006_041A()
 *
 * @name f__B4CD_12C3_0006_041A
 * @implements B4CD:12C3:0006:041A ()
 *
 * Called From: B4CD:12AB:0041:3735
 * Called From: B4CD:12BF:0041:3735
 */
void f__B4CD_12C3_0006_041A()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12C9); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_12C9_0009_406A();
}

/**
 * Decompiled function f__B4CD_12C9_0009_406A()
 *
 * @name f__B4CD_12C9_0009_406A
 * @implements B4CD:12C9:0009:406A ()
 *
 * Called From: B4CD:12C9:0006:041A
 */
void f__B4CD_12C9_0009_406A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12D2); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_12D2_001B_C71B();
}

/**
 * Decompiled function f__B4CD_12D2_001B_C71B()
 *
 * @name f__B4CD_12D2_001B_C71B
 * @implements B4CD:12D2:001B:C71B ()
 *
 * Called From: B4CD:12D2:0009:406A
 */
void f__B4CD_12D2_001B_C71B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x12EB; emu_last_cs = 0xB4CD; emu_last_ip = 0x12DA; emu_last_length = 0x001B; emu_last_crc = 0xC71B; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x12EB; emu_last_cs = 0xB4CD; emu_last_ip = 0x12E0; emu_last_length = 0x001B; emu_last_crc = 0xC71B; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x12EB; emu_last_cs = 0xB4CD; emu_last_ip = 0x12E4; emu_last_length = 0x001B; emu_last_crc = 0xC71B; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_12ED_0017_64F5(); return; }
	emu_ip = 0x127D; emu_last_cs = 0xB4CD; emu_last_ip = 0x12EB; emu_last_length = 0x001B; emu_last_crc = 0xC71B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_12ED_0017_64F5()
 *
 * @name f__B4CD_12ED_0017_64F5
 * @implements B4CD:12ED:0017:64F5 ()
 *
 * Called From: B4CD:12E9:001B:C71B
 */
void f__B4CD_12ED_0017_64F5()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1304); emu_cs = 0x07D4; f__07D4_02F8_0055_0AD5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1304_0009_7B1E();
}

/**
 * Decompiled function f__B4CD_1304_0009_7B1E()
 *
 * @name f__B4CD_1304_0009_7B1E
 * @implements B4CD:1304:0009:7B1E ()
 *
 * Called From: B4CD:1304:0017:64F5
 */
void f__B4CD_1304_0009_7B1E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x130D); f__B4CD_10EE_0039_70D6();
	f__B4CD_130D_0008_7B74();
}

/**
 * Decompiled function f__B4CD_130D_0008_7B74()
 *
 * @name f__B4CD_130D_0008_7B74
 * @implements B4CD:130D:0008:7B74 ()
 *
 * Called From: B4CD:130D:0009:7B1E
 */
void f__B4CD_130D_0008_7B74()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x1423; f__1423_08CD_0012_4CA9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1315_0008_EC44();
}

/**
 * Decompiled function f__B4CD_1315_0008_EC44()
 *
 * @name f__B4CD_1315_0008_EC44
 * @implements B4CD:1315:0008:EC44 ()
 *
 * Called From: B4CD:1315:0008:7B74
 */
void f__B4CD_1315_0008_EC44()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x131D); f__B4CD_1133_0039_7483();
	f__B4CD_131D_0030_5F48();
}

/**
 * Decompiled function f__B4CD_131D_0030_5F48()
 *
 * @name f__B4CD_131D_0030_5F48
 * @implements B4CD:131D:0030:5F48 ()
 *
 * Called From: B4CD:131D:0008:EC44
 */
void f__B4CD_131D_0030_5F48()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4CD_1348_0005_0D88(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
	if (!emu_flags.zf) { f__B4CD_1348_0005_0D88(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_07E4();
	f__B4CD_134D_000A_0762();
}

/**
 * Decompiled function f__B4CD_1348_0005_0D88()
 *
 * @name f__B4CD_1348_0005_0D88
 * @implements B4CD:1348:0005:0D88 ()
 *
 * Called From: B4CD:132A:0030:5F48
 * Called From: B4CD:133E:0030:5F48
 */
void f__B4CD_1348_0005_0D88()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_07E4();
	f__B4CD_134D_000A_0762();
}

/**
 * Decompiled function f__B4CD_134D_000A_0762()
 *
 * @name f__B4CD_134D_000A_0762
 * @implements B4CD:134D:000A:0762 ()
 *
 * Called From: B4CD:134D:0005:0D88
 * Called From: B4CD:134D:0030:5F48
 */
void f__B4CD_134D_000A_0762()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1357); f__B4CD_1387_002A_07E4();
	f__B4CD_1357_000A_053A();
}

/**
 * Decompiled function f__B4CD_1357_000A_053A()
 *
 * @name f__B4CD_1357_000A_053A
 * @implements B4CD:1357:000A:053A ()
 *
 * Called From: B4CD:1357:000A:0762
 */
void f__B4CD_1357_000A_053A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1361); f__B4CD_1387_002A_07E4();
	f__B4CD_1361_000C_3F00();
}

/**
 * Decompiled function f__B4CD_1361_000C_3F00()
 *
 * @name f__B4CD_1361_000C_3F00
 * @implements B4CD:1361:000C:3F00 ()
 *
 * Called From: B4CD:1361:000A:053A
 */
void f__B4CD_1361_000C_3F00()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xFFC0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x136D); f__B4CD_1387_002A_07E4();
	f__B4CD_136D_000C_4090();
}

/**
 * Decompiled function f__B4CD_136D_000C_4090()
 *
 * @name f__B4CD_136D_000C_4090
 * @implements B4CD:136D:000C:4090 ()
 *
 * Called From: B4CD:136D:000C:3F00
 */
void f__B4CD_136D_000C_4090()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1379); f__B4CD_1387_002A_07E4();
	f__B4CD_1379_0008_97EC();
}

/**
 * Decompiled function f__B4CD_1379_0008_97EC()
 *
 * @name f__B4CD_1379_0008_97EC
 * @implements B4CD:1379:0008:97EC ()
 *
 * Called From: B4CD:1379:000C:4090
 */
void f__B4CD_1379_0008_97EC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4CD_127F_0003_04B4(); return;
}

/**
 * Decompiled function f__B4CD_1381_0006_137A()
 *
 * @name f__B4CD_1381_0006_137A
 * @implements B4CD:1381:0006:137A ()
 *
 * Called From: B4CD:127F:0003:04B4
 * Called From: B4CD:127F:0005:0ED4
 * Called From: B4CD:127F:0019:57F0
 */
void f__B4CD_1381_0006_137A()
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
 * Decompiled function f__B4CD_1387_002A_07E4()
 *
 * @name f__B4CD_1387_002A_07E4
 * @implements B4CD:1387:002A:07E4 ()
 *
 * Called From: B4CD:134A:0005:0D88
 * Called From: B4CD:134A:0030:5F48
 * Called From: B4CD:1354:000A:0762
 * Called From: B4CD:135E:000A:053A
 * Called From: B4CD:136A:000C:3F00
 * Called From: B4CD:1376:000C:4090
 */
void f__B4CD_1387_002A_07E4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_di, 0xFFF);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_13B1_0031_0752(); return; }
	emu_movw(&emu_si, 0xF);
	f__B4CD_1464_0012_D648(); return;
}

/**
 * Decompiled function f__B4CD_13B1_0031_0752()
 *
 * @name f__B4CD_13B1_0031_0752
 * @implements B4CD:13B1:0031:0752 ()
 *
 * Called From: B4CD:13A9:002A:07E4
 */
void f__B4CD_13B1_0031_0752()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { f__B4CD_13E2_0009_FE8A(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x13DF; emu_last_cs = 0xB4CD; emu_last_ip = 0x13D3; emu_last_length = 0x0031; emu_last_crc = 0x0752; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_13E2_0009_FE8A(); return; }
	f__B4CD_14C4_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_13E2_0009_FE8A()
 *
 * @name f__B4CD_13E2_0009_FE8A
 * @implements B4CD:13E2:0009:FE8A ()
 *
 * Called From: B4CD:13CD:0031:0752
 * Called From: B4CD:13DD:0031:0752
 */
void f__B4CD_13E2_0009_FE8A()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4CD_145E_0018_56B0(); return;
}

/**
 * Decompiled function f__B4CD_13EB_0016_B085()
 *
 * @name f__B4CD_13EB_0016_B085
 * @implements B4CD:13EB:0016:B085 ()
 *
 * Called From: B4CD:1462:0018:56B0
 * Called From: B4CD:1462:0041:FDD7
 * Called From: B4CD:1462:001B:4AB7
 */
void f__B4CD_13EB_0016_B085()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2566));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1401); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1401_000C_DFEB();
}

/**
 * Decompiled function f__B4CD_1401_000C_DFEB()
 *
 * @name f__B4CD_1401_000C_DFEB
 * @implements B4CD:1401:000C:DFEB ()
 *
 * Called From: B4CD:1401:0016:B085
 */
void f__B4CD_1401_000C_DFEB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x140D); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_140D_0028_D1A2();
}

/**
 * Decompiled function f__B4CD_140D_0028_D1A2()
 *
 * @name f__B4CD_140D_0028_D1A2
 * @implements B4CD:140D:0028:D1A2 ()
 *
 * Called From: B4CD:140D:000C:DFEB
 */
void f__B4CD_140D_0028_D1A2()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1429; emu_last_cs = 0xB4CD; emu_last_ip = 0x1415; emu_last_length = 0x0028; emu_last_crc = 0xD1A2; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1429; emu_last_cs = 0xB4CD; emu_last_ip = 0x141B; emu_last_length = 0x0028; emu_last_crc = 0xD1A2; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1429; emu_last_cs = 0xB4CD; emu_last_ip = 0x1421; emu_last_length = 0x0028; emu_last_crc = 0xD1A2; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_1435_0041_FDD7(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_si, emu_ax.x);
	emu_ip = 0x145B; emu_last_cs = 0xB4CD; emu_last_ip = 0x1433; emu_last_length = 0x0028; emu_last_crc = 0xD1A2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_1435_0041_FDD7()
 *
 * @name f__B4CD_1435_0041_FDD7
 * @implements B4CD:1435:0041:FDD7 ()
 *
 * Called From: B4CD:1427:0028:D1A2
 */
void f__B4CD_1435_0041_FDD7()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2566));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__B4CD_145B_001B_4AB7(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_orw(&emu_si, emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_13EB_0016_B085(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x149A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1466; emu_last_length = 0x0041; emu_last_crc = 0xFDD7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { f__B4CD_1481_0040_61EB(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); f__B4CD_10EE_0039_70D6();
	f__B4CD_1476_0008_7B74();
}

/**
 * Decompiled function f__B4CD_145B_001B_4AB7()
 *
 * @name f__B4CD_145B_001B_4AB7
 * @implements B4CD:145B:001B:4AB7 ()
 *
 * Called From: B4CD:144F:0041:FDD7
 */
void f__B4CD_145B_001B_4AB7()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_13EB_0016_B085(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4CD_149A_0027_6D88(); return; }
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { emu_ip = 0x1481; emu_last_cs = 0xB4CD; emu_last_ip = 0x146B; emu_last_length = 0x001B; emu_last_crc = 0x4AB7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); f__B4CD_10EE_0039_70D6();
	f__B4CD_1476_0008_7B74();
}

/**
 * Decompiled function f__B4CD_145E_0018_56B0()
 *
 * @name f__B4CD_145E_0018_56B0
 * @implements B4CD:145E:0018:56B0 ()
 *
 * Called From: B4CD:13E9:0009:FE8A
 */
void f__B4CD_145E_0018_56B0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_13EB_0016_B085(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x149A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1466; emu_last_length = 0x0018; emu_last_crc = 0x56B0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { emu_ip = 0x1481; emu_last_cs = 0xB4CD; emu_last_ip = 0x146B; emu_last_length = 0x0018; emu_last_crc = 0x56B0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); emu_ip = 0x10EE; emu_last_cs = 0xB4CD; emu_last_ip = 0x1473; emu_last_length = 0x0018; emu_last_crc = 0x56B0; emu_call(); // Jump does not resolve
	f__B4CD_1476_0008_7B74();
}

/**
 * Decompiled function f__B4CD_1464_0012_D648()
 *
 * @name f__B4CD_1464_0012_D648
 * @implements B4CD:1464:0012:D648 ()
 *
 * Called From: B4CD:13AE:002A:07E4
 */
void f__B4CD_1464_0012_D648()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x149A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1466; emu_last_length = 0x0012; emu_last_crc = 0xD648; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xF);
	if (emu_flags.zf) { f__B4CD_1481_0040_61EB(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); emu_ip = 0x10EE; emu_last_cs = 0xB4CD; emu_last_ip = 0x1473; emu_last_length = 0x0012; emu_last_crc = 0xD648; emu_call(); // Jump does not resolve
	f__B4CD_1476_0008_7B74();
}

/**
 * Decompiled function f__B4CD_1476_0008_7B74()
 *
 * @name f__B4CD_1476_0008_7B74
 * @implements B4CD:1476:0008:7B74 ()
 *
 * Called From: B4CD:1476:001B:4AB7
 * Called From: B4CD:1476:0041:FDD7
 */
void f__B4CD_1476_0008_7B74()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x147E); emu_cs = 0x1423; f__1423_08CD_0012_4CA9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_147E_0043_66EF();
}

/**
 * Decompiled function f__B4CD_147E_0043_66EF()
 *
 * @name f__B4CD_147E_0043_66EF
 * @implements B4CD:147E:0043:66EF ()
 *
 * Called From: B4CD:147E:0008:7B74
 */
void f__B4CD_147E_0043_66EF()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); f__B4CD_0000_0011_CE2B();
	f__B4CD_14C1_0009_D27B();
}

/**
 * Decompiled function f__B4CD_1481_0040_61EB()
 *
 * @name f__B4CD_1481_0040_61EB
 * @implements B4CD:1481:0040:61EB ()
 *
 * Called From: B4CD:146B:0041:FDD7
 * Called From: B4CD:146B:0012:D648
 */
void f__B4CD_1481_0040_61EB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); f__B4CD_0000_0011_CE2B();
	f__B4CD_14C1_0009_D27B();
}

/**
 * Decompiled function f__B4CD_149A_0027_6D88()
 *
 * @name f__B4CD_149A_0027_6D88
 * @implements B4CD:149A:0027:6D88 ()
 *
 * Called From: B4CD:1466:001B:4AB7
 */
void f__B4CD_149A_0027_6D88()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); f__B4CD_0000_0011_CE2B();
	f__B4CD_14C1_0009_D27B();
}

/**
 * Decompiled function f__B4CD_14C1_0009_D27B()
 *
 * @name f__B4CD_14C1_0009_D27B
 * @implements B4CD:14C1:0009:D27B ()
 *
 * Called From: B4CD:14C1:0040:61EB
 * Called From: B4CD:14C1:0043:66EF
 * Called From: B4CD:14C1:0027:6D88
 */
void f__B4CD_14C1_0009_D27B()
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
 * Decompiled function f__B4CD_14C4_0006_137A()
 *
 * @name f__B4CD_14C4_0006_137A
 * @implements B4CD:14C4:0006:137A ()
 *
 * Called From: B4CD:13DF:0031:0752
 */
void f__B4CD_14C4_0006_137A()
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
 * Decompiled function f__B4CD_14CA_0013_A385()
 *
 * @name f__B4CD_14CA_0013_A385
 * @implements B4CD:14CA:0013:A385 ()
 *
 * Called From: 34CD:0093:0005:12FA
 */
void f__B4CD_14CA_0013_A385()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { f__B4CD_152A_0012_7136(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x14DD); emu_ip = 0x10EE; emu_last_cs = 0xB4CD; emu_last_ip = 0x14DA; emu_last_length = 0x0013; emu_last_crc = 0xA385; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_152A_0012_7136()
 *
 * @name f__B4CD_152A_0012_7136
 * @implements B4CD:152A:0012:7136 ()
 *
 * Called From: B4CD:14D6:0013:A385
 */
void f__B4CD_152A_0012_7136()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__B4CD_153D_0009_6C79(); return; }
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x3483; emu_ip = 0x1566; emu_last_cs = 0xB4CD; emu_last_ip = 0x1537; emu_last_length = 0x0012; emu_last_crc = 0x7136; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_153D_0009_6C79()
 *
 * @name f__B4CD_153D_0009_6C79
 * @implements B4CD:153D:0009:6C79 ()
 *
 * Called From: B4CD:1531:0012:7136
 */
void f__B4CD_153D_0009_6C79()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1546); f__B4CD_154C_0015_8DCE();
	f__B4CD_1546_0006_28A2();
}

/**
 * Decompiled function f__B4CD_1546_0006_28A2()
 *
 * @name f__B4CD_1546_0006_28A2
 * @implements B4CD:1546:0006:28A2 ()
 *
 * Called From: B4CD:1546:0009:6C79
 */
void f__B4CD_1546_0006_28A2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_154C_0015_8DCE()
 *
 * @name f__B4CD_154C_0015_8DCE
 * @implements B4CD:154C:0015:8DCE ()
 *
 * Called From: B4CD:1543:0009:6C79
 */
void f__B4CD_154C_0015_8DCE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4CD_1561_0006_045A(); return; }
	emu_ip = 0x1606; emu_last_cs = 0xB4CD; emu_last_ip = 0x155E; emu_last_length = 0x0015; emu_last_crc = 0x8DCE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_1561_0006_045A()
 *
 * @name f__B4CD_1561_0006_045A
 * @implements B4CD:1561:0006:045A ()
 *
 * Called From: B4CD:155C:0015:8DCE
 */
void f__B4CD_1561_0006_045A()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1567_000A_492A();
}

/**
 * Decompiled function f__B4CD_1567_000A_492A()
 *
 * @name f__B4CD_1567_000A_492A
 * @implements B4CD:1567:000A:492A ()
 *
 * Called From: B4CD:1567:0006:045A
 */
void f__B4CD_1567_000A_492A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1571); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1571_000D_D44F();
}

/**
 * Decompiled function f__B4CD_1571_000D_D44F()
 *
 * @name f__B4CD_1571_000D_D44F
 * @implements B4CD:1571:000D:D44F ()
 *
 * Called From: B4CD:1571:000A:492A
 */
void f__B4CD_1571_000D_D44F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__B4CD_15F6_000E_B67F(); return;
}

/**
 * Decompiled function f__B4CD_157E_0009_8C43()
 *
 * @name f__B4CD_157E_0009_8C43
 * @implements B4CD:157E:0009:8C43 ()
 *
 * Called From: B4CD:15F9:000E:B67F
 * Called From: B4CD:15F9:0019:7F5B
 */
void f__B4CD_157E_0009_8C43()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__B4CD_15EE_0016_B95A(); return;
}

/**
 * Decompiled function f__B4CD_1587_0013_D9CB()
 *
 * @name f__B4CD_1587_0013_D9CB
 * @implements B4CD:1587:0013:D9CB ()
 *
 * Called From: B4CD:15F1:0016:B95A
 * Called From: B4CD:15F1:0019:7F5B
 */
void f__B4CD_1587_0013_D9CB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x159A); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_159A_000E_CF6F();
}

/**
 * Decompiled function f__B4CD_159A_000E_CF6F()
 *
 * @name f__B4CD_159A_000E_CF6F
 * @implements B4CD:159A:000E:CF6F ()
 *
 * Called From: B4CD:159A:0013:D9CB
 */
void f__B4CD_159A_000E_CF6F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x15A8); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_15A8_0014_E71A();
}

/**
 * Decompiled function f__B4CD_15A8_0014_E71A()
 *
 * @name f__B4CD_15A8_0014_E71A
 * @implements B4CD:15A8:0014:E71A ()
 *
 * Called From: B4CD:15A8:000E:CF6F
 */
void f__B4CD_15A8_0014_E71A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_15C1_0007_79A2(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_si);
	if (!emu_flags.zf) { f__B4CD_15EB_0019_7F5B(); return; }
	emu_push(emu_cs); emu_push(0x15BC); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_15BC_000C_23A8();
}

/**
 * Decompiled function f__B4CD_15BC_000C_23A8()
 *
 * @name f__B4CD_15BC_000C_23A8
 * @implements B4CD:15BC:000C:23A8 ()
 *
 * Called From: B4CD:15BC:0014:E71A
 */
void f__B4CD_15BC_000C_23A8()
{
	emu_testw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B4CD_15EB_0019_7F5B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15C8); f__B4CD_0750_0027_EDA0();
	f__B4CD_15C8_0011_BF8F();
}

/**
 * Decompiled function f__B4CD_15C1_0007_79A2()
 *
 * @name f__B4CD_15C1_0007_79A2
 * @implements B4CD:15C1:0007:79A2 ()
 *
 * Called From: B4CD:15B0:0014:E71A
 */
void f__B4CD_15C1_0007_79A2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15C8); f__B4CD_0750_0027_EDA0();
	f__B4CD_15C8_0011_BF8F();
}

/**
 * Decompiled function f__B4CD_15C8_0011_BF8F()
 *
 * @name f__B4CD_15C8_0011_BF8F
 * @implements B4CD:15C8:0011:BF8F ()
 *
 * Called From: B4CD:15C8:000C:23A8
 * Called From: B4CD:15C8:0007:79A2
 */
void f__B4CD_15C8_0011_BF8F()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__B4CD_15EB_0019_7F5B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15D9); f__B4CD_0AFA_0011_9926();
	f__B4CD_15D9_0011_56BD();
}

/**
 * Decompiled function f__B4CD_15D9_0011_56BD()
 *
 * @name f__B4CD_15D9_0011_56BD
 * @implements B4CD:15D9:0011:56BD ()
 *
 * Called From: B4CD:15D9:0011:BF8F
 */
void f__B4CD_15D9_0011_56BD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4CD_15EB_0019_7F5B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x15EA); emu_cs = 0x07D4; emu_ip = 0x18E2; emu_last_cs = 0xB4CD; emu_last_ip = 0x15E5; emu_last_length = 0x0011; emu_last_crc = 0x56BD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_15EB_0019_7F5B()
 *
 * @name f__B4CD_15EB_0019_7F5B
 * @implements B4CD:15EB:0019:7F5B ()
 *
 * Called From: B4CD:15B5:0014:E71A
 * Called From: B4CD:15BF:000C:23A8
 * Called From: B4CD:15CC:0011:BF8F
 * Called From: B4CD:15E0:0011:56BD
 */
void f__B4CD_15EB_0019_7F5B()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1587_0013_D9CB(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_157E_0009_8C43(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1604); f__B4CD_0AFA_0011_9926();
	f__B4CD_1604_0008_66FA();
}

/**
 * Decompiled function f__B4CD_15EE_0016_B95A()
 *
 * @name f__B4CD_15EE_0016_B95A
 * @implements B4CD:15EE:0016:B95A ()
 *
 * Called From: B4CD:1585:0009:8C43
 */
void f__B4CD_15EE_0016_B95A()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1587_0013_D9CB(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x157E; emu_last_cs = 0xB4CD; emu_last_ip = 0x15F9; emu_last_length = 0x0016; emu_last_crc = 0xB95A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1604); emu_ip = 0x0AFA; emu_last_cs = 0xB4CD; emu_last_ip = 0x1601; emu_last_length = 0x0016; emu_last_crc = 0xB95A; emu_call(); // Jump does not resolve
	f__B4CD_1604_0008_66FA();
}

/**
 * Decompiled function f__B4CD_15F6_000E_B67F()
 *
 * @name f__B4CD_15F6_000E_B67F
 * @implements B4CD:15F6:000E:B67F ()
 *
 * Called From: B4CD:157C:000D:D44F
 */
void f__B4CD_15F6_000E_B67F()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_157E_0009_8C43(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1604); emu_ip = 0x0AFA; emu_last_cs = 0xB4CD; emu_last_ip = 0x1601; emu_last_length = 0x000E; emu_last_crc = 0xB67F; emu_call(); // Jump does not resolve
	f__B4CD_1604_0008_66FA();
}

/**
 * Decompiled function f__B4CD_1604_0008_66FA()
 *
 * @name f__B4CD_1604_0008_66FA
 * @implements B4CD:1604:0008:66FA ()
 *
 * Called From: B4CD:1604:0019:7F5B
 */
void f__B4CD_1604_0008_66FA()
{
	emu_pop(&emu_cx.x);
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
 * Decompiled function f__B4CD_17DC_0019_F917()
 *
 * @name f__B4CD_17DC_0019_F917
 * @implements B4CD:17DC:0019:F917 ()
 *
 * Called From: 34CD:007F:0005:10C0
 * Called From: 34CD:007F:0005:1382
 * Called From: 34CD:007F:0005:1236
 * Called From: 34CD:007F:0005:13F2
 * Called From: 34CD:007F:0005:12BA
 * Called From: B4CD:00D1:000A:4EEF
 */
void f__B4CD_17DC_0019_F917()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3952));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x7);
	f__B4CD_17F5_0002_00E2(); return;
}

/**
 * Decompiled function f__B4CD_17F5_0002_00E2()
 *
 * @name f__B4CD_17F5_0002_00E2
 * @implements B4CD:17F5:0002:00E2 ()
 *
 * Called From: B4CD:17F3:0019:F917
 */
void f__B4CD_17F5_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_17F7_001D_7923()
 *
 * @name f__B4CD_17F7_001D_7923
 * @implements B4CD:17F7:001D:7923 ()
 *
 * Called From: 34CD:005C:0005:1132
 * Called From: 34CD:005C:0005:100A
 */
void f__B4CD_17F7_001D_7923()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_ax.x, 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3952));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0xF0);
	emu_movb(&emu_cx.l, 0x4);
	emu_sarw(&emu_ax.x, emu_cx.l);
	f__B4CD_1814_0002_00E2(); return;
}

/**
 * Decompiled function f__B4CD_1814_0002_00E2()
 *
 * @name f__B4CD_1814_0002_00E2
 * @implements B4CD:1814:0002:00E2 ()
 *
 * Called From: B4CD:1812:001D:7923
 */
void f__B4CD_1814_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1816_0033_4F45()
 *
 * @name f__B4CD_1816_0033_4F45
 * @implements B4CD:1816:0033:4F45 ()
 *
 * Called From: 34CD:0098:0005:1F5A
 */
void f__B4CD_1816_0033_4F45()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x256E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x6);
	if (!emu_flags.zf) { f__B4CD_1881_0003_0594(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1849); emu_cs = 0x1082; emu_ip = 0x1946; emu_last_cs = 0xB4CD; emu_last_ip = 0x1844; emu_last_length = 0x0033; emu_last_crc = 0x4F45; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4CD_1881_0003_0594()
 *
 * @name f__B4CD_1881_0003_0594
 * @implements B4CD:1881:0003:0594 ()
 *
 * Called From: B4CD:1834:0033:4F45
 */
void f__B4CD_1881_0003_0594()
{
	f__B4CD_1B3A_0007_312E(); return;
}

/**
 * Decompiled function f__B4CD_1884_000B_D8B5()
 *
 * @name f__B4CD_1884_000B_D8B5
 * @implements B4CD:1884:000B:D8B5 ()
 *
 * Called From: B4CD:1B3E:0007:312E
 */
void f__B4CD_1884_000B_D8B5()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_bx.x, 0x7);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_188F_0007_5E52(); return; }
	emu_ip = 0x1B22; emu_last_cs = 0xB4CD; emu_last_ip = 0x188C; emu_last_length = 0x000B; emu_last_crc = 0xD8B5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_188F_0007_5E52()
 *
 * @name f__B4CD_188F_0007_5E52
 * @implements B4CD:188F:0007:5E52 ()
 *
 * Called From: B4CD:188A:000B:D8B5
 */
void f__B4CD_188F_0007_5E52()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1B4B);
	switch (emu_ip) {
		case 0x1896: f__B4CD_1896_0028_7013(); return;
		case 0x18D9: f__B4CD_18D9_0018_36BA(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x1891; emu_last_length = 0x0007; emu_last_crc = 0x5E52;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4CD_1896_0028_7013()
 *
 * @name f__B4CD_1896_0028_7013
 * @implements B4CD:1896:0028:7013 ()
 *
 * Called From: B4CD:1891:0007:5E52
 */
void f__B4CD_1896_0028_7013()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18BE); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18BE_0014_9C5A();
}

/**
 * Decompiled function f__B4CD_18BE_0014_9C5A()
 *
 * @name f__B4CD_18BE_0014_9C5A
 * @implements B4CD:18BE:0014:9C5A ()
 *
 * Called From: B4CD:18BE:0028:7013
 */
void f__B4CD_18BE_0014_9C5A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18D2_0007_22D8();
}

/**
 * Decompiled function f__B4CD_18CC_0006_037A()
 *
 * @name f__B4CD_18CC_0006_037A
 * @implements B4CD:18CC:0006:037A ()
 *
 * Called From: B4CD:191B:002C:BD88
 */
void f__B4CD_18CC_0006_037A()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18D2_0007_22D8();
}

/**
 * Decompiled function f__B4CD_18D2_0007_22D8()
 *
 * @name f__B4CD_18D2_0007_22D8
 * @implements B4CD:18D2:0007:22D8 ()
 *
 * Called From: B4CD:18D2:0014:9C5A
 * Called From: B4CD:18D2:0006:037A
 */
void f__B4CD_18D2_0007_22D8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	f__B4CD_1B26_000D_50DF(); return;
}

/**
 * Decompiled function f__B4CD_18D9_0018_36BA()
 *
 * @name f__B4CD_18D9_0018_36BA
 * @implements B4CD:18D9:0018:36BA ()
 *
 * Called From: B4CD:1891:0007:5E52
 */
void f__B4CD_18D9_0018_36BA()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C14));
	emu_addw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18F1); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_18F1_002C_BD88();
}

/**
 * Decompiled function f__B4CD_18F1_002C_BD88()
 *
 * @name f__B4CD_18F1_002C_BD88
 * @implements B4CD:18F1:002C:BD88 ()
 *
 * Called From: B4CD:18F1:0018:36BA
 */
void f__B4CD_18F1_002C_BD88()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C12));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4CD_18CC_0006_037A(); return;
}

/**
 * Decompiled function f__B4CD_1B24_0002_0392()
 *
 * @name f__B4CD_1B24_0002_0392
 * @implements B4CD:1B24:0002:0392 ()
 *
 * Called From: B4CD:1B43:0004:0C92
 */
void f__B4CD_1B24_0002_0392()
{
	f__B4CD_1B45_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_1B26_000D_50DF()
 *
 * @name f__B4CD_1B26_000D_50DF
 * @implements B4CD:1B26:000D:50DF ()
 *
 * Called From: B4CD:18D6:0007:22D8
 */
void f__B4CD_1B26_000D_50DF()
{
	emu_andw(&emu_si, 0xFFF);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x1B3A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B2C; emu_last_length = 0x000D; emu_last_crc = 0x50DF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1B33); f__B4CD_1086_0040_609C();
	f__B4CD_1B33_000E_0936();
}

/**
 * Decompiled function f__B4CD_1B33_000E_0936()
 *
 * @name f__B4CD_1B33_000E_0936
 * @implements B4CD:1B33:000E:0936 ()
 *
 * Called From: B4CD:1B33:000D:50DF
 */
void f__B4CD_1B33_000E_0936()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B4CD_1B3A_0007_312E(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1B41; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B3C; emu_last_length = 0x000E; emu_last_crc = 0x0936; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1884; emu_last_cs = 0xB4CD; emu_last_ip = 0x1B3E; emu_last_length = 0x000E; emu_last_crc = 0x0936; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_1B3A_0007_312E()
 *
 * @name f__B4CD_1B3A_0007_312E
 * @implements B4CD:1B3A:0007:312E ()
 *
 * Called From: B4CD:1881:0003:0594
 * Called From: B4CD:1B36:000E:0936
 */
void f__B4CD_1B3A_0007_312E()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4CD_1B41_0004_0C92(); return; }
	f__B4CD_1884_000B_D8B5(); return;
}

/**
 * Decompiled function f__B4CD_1B41_0004_0C92()
 *
 * @name f__B4CD_1B41_0004_0C92
 * @implements B4CD:1B41:0004:0C92 ()
 *
 * Called From: B4CD:1B3C:0007:312E
 */
void f__B4CD_1B41_0004_0C92()
{
	emu_movw(&emu_ax.x, emu_si);
	f__B4CD_1B24_0002_0392(); return;
}

/**
 * Decompiled function f__B4CD_1B45_0006_137A()
 *
 * @name f__B4CD_1B45_0006_137A
 * @implements B4CD:1B45:0006:137A ()
 *
 * Called From: B4CD:1B24:0002:0392
 */
void f__B4CD_1B45_0006_137A()
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
 * Decompiled function f__B4CD_1B5B_0011_AB72()
 *
 * @name f__B4CD_1B5B_0011_AB72
 * @implements B4CD:1B5B:0011:AB72 ()
 *
 * Called From: B4CD:000E:0011:CE2B
 */
void f__B4CD_1B5B_0011_AB72()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B6C); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B6C_0009_406A();
}

/**
 * Decompiled function f__B4CD_1B6C_0009_406A()
 *
 * @name f__B4CD_1B6C_0009_406A
 * @implements B4CD:1B6C:0009:406A ()
 *
 * Called From: B4CD:1B6C:0011:AB72
 */
void f__B4CD_1B6C_0009_406A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B75); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B75_000D_D1D9();
}

/**
 * Decompiled function f__B4CD_1B75_000D_D1D9()
 *
 * @name f__B4CD_1B75_000D_D1D9
 * @implements B4CD:1B75:000D:D1D9 ()
 *
 * Called From: B4CD:1B75:0009:406A
 */
void f__B4CD_1B75_000D_D1D9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x1B82); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B82_000D_D8A9();
}

/**
 * Decompiled function f__B4CD_1B82_000D_D8A9()
 *
 * @name f__B4CD_1B82_000D_D8A9
 * @implements B4CD:1B82:000D:D8A9 ()
 *
 * Called From: B4CD:1B82:000D:D1D9
 */
void f__B4CD_1B82_000D_D8A9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x1B8F); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { ovl__34CD(0xFF); }
	f__B4CD_1B8F_002A_6F7E();
}

/**
 * Decompiled function f__B4CD_1B8F_002A_6F7E()
 *
 * @name f__B4CD_1B8F_002A_6F7E
 * @implements B4CD:1B8F:002A:6F7E ()
 *
 * Called From: B4CD:1B8F:000D:D8A9
 */
void f__B4CD_1B8F_002A_6F7E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_1BB5_0004_0696(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.sf != emu_flags.of)) { f__B4CD_1BB5_0004_0696(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1BB5_0004_0696(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, 0xA);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4CD_1BB9_0005_154E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1BBE_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_1BB5_0004_0696()
 *
 * @name f__B4CD_1BB5_0004_0696
 * @implements B4CD:1BB5:0004:0696 ()
 *
 * Called From: B4CD:1B96:002A:6F7E
 * Called From: B4CD:1B9E:002A:6F7E
 * Called From: B4CD:1BA8:002A:6F7E
 */
void f__B4CD_1BB5_0004_0696()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1BBE_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_1BB7_0002_03A6()
 *
 * @name f__B4CD_1BB7_0002_03A6
 * @implements B4CD:1BB7:0002:03A6 ()
 *
 * Called From: B4CD:1BBC:0005:154E
 */
void f__B4CD_1BB7_0002_03A6()
{
	f__B4CD_1BBE_0006_137A(); return;
}

/**
 * Decompiled function f__B4CD_1BB9_0005_154E()
 *
 * @name f__B4CD_1BB9_0005_154E
 * @implements B4CD:1BB9:0005:154E ()
 *
 * Called From: B4CD:1BB3:002A:6F7E
 */
void f__B4CD_1BB9_0005_154E()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4CD_1BB7_0002_03A6(); return;
}

/**
 * Decompiled function f__B4CD_1BBE_0006_137A()
 *
 * @name f__B4CD_1BBE_0006_137A
 * @implements B4CD:1BBE:0006:137A ()
 *
 * Called From: B4CD:1BB7:0002:03A6
 * Called From: B4CD:1BB7:0004:0696
 * Called From: B4CD:1BB7:002A:6F7E
 */
void f__B4CD_1BBE_0006_137A()
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
 * Decompiled function f__B4CD_1BC4_0013_C02D()
 *
 * @name f__B4CD_1BC4_0013_C02D
 * @implements B4CD:1BC4:0013:C02D ()
 *
 * Called From: 34CD:004D:0005:1262
 * Called From: 34CD:004D:0005:1120
 * Called From: 34CD:004D:0005:1084
 * Called From: 34CD:004D:0005:13D6
 * Called From: 34CD:004D:0005:1212
 * Called From: 34CD:004D:0005:135A
 * Called From: 34CD:004D:0005:10AA
 * Called From: B4CD:02BC:000D:550B
 */
void f__B4CD_1BC4_0013_C02D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4CD_1BD7_003C_D013(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1C17; emu_last_cs = 0xB4CD; emu_last_ip = 0x1BD5; emu_last_length = 0x0013; emu_last_crc = 0xC02D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CD_1BD2_0005_143C()
 *
 * @name f__B4CD_1BD2_0005_143C
 * @implements B4CD:1BD2:0005:143C ()
 *
 * Called From: B4CD:1C11:003C:D013
 */
void f__B4CD_1BD2_0005_143C()
{
	emu_movw(&emu_ax.x, 0x1);
	f__B4CD_1C17_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_1BD5_0002_032C()
 *
 * @name f__B4CD_1BD5_0002_032C
 * @implements B4CD:1BD5:0002:032C ()
 *
 * Called From: B4CD:1C15:0004:07E0
 */
void f__B4CD_1BD5_0002_032C()
{
	f__B4CD_1C17_0003_0212(); return;
}

/**
 * Decompiled function f__B4CD_1BD7_003C_D013()
 *
 * @name f__B4CD_1BD7_003C_D013
 * @implements B4CD:1BD7:003C:D013 ()
 *
 * Called From: B4CD:1BD0:0013:C02D
 */
void f__B4CD_1BD7_003C_D013()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__B4CD_1C13_0004_07E0(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1C11; emu_last_cs = 0xB4CD; emu_last_ip = 0x1C05; emu_last_length = 0x003C; emu_last_crc = 0xD013; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4CD_1C13_0004_07E0(); return; }
	f__B4CD_1BD2_0005_143C(); return;
}

/**
 * Decompiled function f__B4CD_1C13_0004_07E0()
 *
 * @name f__B4CD_1C13_0004_07E0
 * @implements B4CD:1C13:0004:07E0 ()
 *
 * Called From: B4CD:1BFF:003C:D013
 * Called From: B4CD:1C0F:003C:D013
 */
void f__B4CD_1C13_0004_07E0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4CD_1BD5_0002_032C(); return;
}

/**
 * Decompiled function f__B4CD_1C17_0003_0212()
 *
 * @name f__B4CD_1C17_0003_0212
 * @implements B4CD:1C17:0003:0212 ()
 *
 * Called From: B4CD:1BD5:0005:143C
 * Called From: B4CD:1BD5:0002:032C
 */
void f__B4CD_1C17_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
