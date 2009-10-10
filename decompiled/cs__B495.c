/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B495_0000_0022_1CF6()
 *
 * @name f__B495_0000_0022_1CF6
 * @implements B495:0000:0022:1CF6 ()
 *
 * Called From: 3495:0020:0005:0000
 */
void f__B495_0000_0022_1CF6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0022_0023_E778();
}

/**
 * Decompiled function f__B495_0022_0023_E778()
 *
 * @name f__B495_0022_0023_E778
 * @implements B495:0022:0023:E778 ()
 *
 * Called From: B495:0022:0022:1CF6
 */
void f__B495_0022_0023_E778()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0045_0009_4120();
}

/**
 * Decompiled function f__B495_0045_0009_4120()
 *
 * @name f__B495_0045_0009_4120
 * @implements B495:0045:0009:4120 ()
 *
 * Called From: B495:0045:0023:E778
 */
void f__B495_0045_0009_4120()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_cs);
	emu_push(0x004E); f__B495_125B_0011_10C0();
	f__B495_004E_0009_3E41();
}

/**
 * Decompiled function f__B495_004E_0009_3E41()
 *
 * @name f__B495_004E_0009_3E41
 * @implements B495:004E:0009:3E41 ()
 *
 * Called From: B495:004E:0009:4120
 */
void f__B495_004E_0009_3E41()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0057); f__B495_0DC9_0010_C643();
	f__B495_0057_0009_758E();
}

/**
 * Decompiled function f__B495_0057_0009_758E()
 *
 * @name f__B495_0057_0009_758E
 * @implements B495:0057:0009:758E ()
 *
 * Called From: B495:0057:0009:3E41
 */
void f__B495_0057_0009_758E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FC0), 0xFFFF);
	f__B495_009D_0014_3443(); return;
}

/**
 * Decompiled function f__B495_0060_000C_1509()
 *
 * @name f__B495_0060_000C_1509
 * @implements B495:0060:000C:1509 ()
 *
 * Called From: B495:00A2:0014:3443
 */
void f__B495_0060_000C_1509()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_006C_000A_DBF9();
}

/**
 * Decompiled function f__B495_006C_000A_DBF9()
 *
 * @name f__B495_006C_000A_DBF9
 * @implements B495:006C:000A:DBF9 ()
 *
 * Called From: B495:006C:000C:1509
 */
void f__B495_006C_000A_DBF9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0076); f__B495_0DC9_0010_C643();
	f__B495_0076_000E_1017();
}

/**
 * Decompiled function f__B495_0076_000E_1017()
 *
 * @name f__B495_0076_000E_1017
 * @implements B495:0076:000E:1017 ()
 *
 * Called From: B495:0076:000A:DBF9
 */
void f__B495_0076_000E_1017()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x0084); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0084_0012_EA5B();
}

/**
 * Decompiled function f__B495_0084_0012_EA5B()
 *
 * @name f__B495_0084_0012_EA5B
 * @implements B495:0084:0012:EA5B ()
 *
 * Called From: B495:0084:000E:1017
 */
void f__B495_0084_0012_EA5B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x6E);
	if (!emu_flags.zf) { f__B495_0098_0005_1765(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0096); emu_ip = 0x030B; emu_last_cs = 0xB495; emu_last_ip = 0x0093; emu_last_length = 0x0012; emu_last_crc = 0xEA5B; emu_call();
	/* Unresolved jump */ emu_ip = 0x0096; emu_last_cs = 0xB495; emu_last_ip = 0x0096; emu_last_length = 0x0012; emu_last_crc = 0xEA5B; emu_call();
}

/**
 * Decompiled function f__B495_0098_0005_1765()
 *
 * @name f__B495_0098_0005_1765
 * @implements B495:0098:0005:1765 ()
 *
 * Called From: B495:0089:0012:EA5B
 */
void f__B495_0098_0005_1765()
{
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_009D_0014_3443();
}

/**
 * Decompiled function f__B495_009D_0014_3443()
 *
 * @name f__B495_009D_0014_3443
 * @implements B495:009D:0014:3443 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B495:005E:0009:758E
 * Called From: B495:009D:0005:1765
 */
void f__B495_009D_0014_3443()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC0), 0xFFFF);
	if (emu_flags.zf) { f__B495_0060_000C_1509(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00B1_000A_87F5();
}

/**
 * Decompiled function f__B495_00B1_000A_87F5()
 *
 * @name f__B495_00B1_000A_87F5
 * @implements B495:00B1:000A:87F5 ()
 *
 * Called From: B495:00B1:0014:3443
 */
void f__B495_00B1_000A_87F5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00BB_0006_5A9A();
}

/**
 * Decompiled function f__B495_00BB_0006_5A9A()
 *
 * @name f__B495_00BB_0006_5A9A
 * @implements B495:00BB:0006:5A9A ()
 *
 * Called From: B495:00BB:000A:87F5
 */
void f__B495_00BB_0006_5A9A()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x00C1); f__B495_0F30_0008_857D();
	f__B495_00C1_001C_D772();
}

/**
 * Decompiled function f__B495_00C1_001C_D772()
 *
 * @name f__B495_00C1_001C_D772
 * @implements B495:00C1:001C:D772 ()
 *
 * Called From: B495:00C1:0006:5A9A
 */
void f__B495_00C1_001C_D772()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00DD); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00DD_0010_2CBB();
}

/**
 * Decompiled function f__B495_00DD_0010_2CBB()
 *
 * @name f__B495_00DD_0010_2CBB
 * @implements B495:00DD:0010:2CBB ()
 *
 * Called From: B495:00DD:001C:D772
 */
void f__B495_00DD_0010_2CBB()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x00ED); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00ED_000D_2372();
}

/**
 * Decompiled function f__B495_00ED_000D_2372()
 *
 * @name f__B495_00ED_000D_2372
 * @implements B495:00ED:000D:2372 ()
 *
 * Called From: B495:00ED:0010:2CBB
 */
void f__B495_00ED_000D_2372()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FC0));
	f__B495_00FA_0004_893F(); return;
}

/**
 * Decompiled function f__B495_00FA_0004_893F()
 *
 * @name f__B495_00FA_0004_893F
 * @implements B495:00FA:0004:893F ()
 *
 * Called From: B495:00F8:000D:2372
 */
void f__B495_00FA_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_00FE_0017_4E8B()
 *
 * @name f__B495_00FE_0017_4E8B
 * @implements B495:00FE:0017:4E8B ()
 *
 * Called From: 3495:0025:0005:0000
 */
void f__B495_00FE_0017_4E8B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_si);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B495_0115_0022_C0E7(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x014B; emu_last_cs = 0xB495; emu_last_ip = 0x0110; emu_last_length = 0x0017; emu_last_crc = 0x4E8B; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0194; emu_last_cs = 0xB495; emu_last_ip = 0x0112; emu_last_length = 0x0017; emu_last_crc = 0x4E8B; emu_call();
}

/**
 * Decompiled function f__B495_0115_0022_C0E7()
 *
 * @name f__B495_0115_0022_C0E7
 * @implements B495:0115:0022:C0E7 ()
 *
 * Called From: B495:010B:0017:4E8B
 */
void f__B495_0115_0022_C0E7()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_014A_0029_416B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_014A_0029_416B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0xA);
	emu_push(emu_cs);
	emu_push(0x0137); f__B495_0F30_0008_857D();
	f__B495_0137_000D_994C();
}

/**
 * Decompiled function f__B495_0137_000D_994C()
 *
 * @name f__B495_0137_000D_994C
 * @implements B495:0137:000D:994C ()
 *
 * Called From: B495:0137:0022:C0E7
 */
void f__B495_0137_000D_994C()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0144); f__B495_0DC9_0010_C643();
	f__B495_0144_0006_97C3();
}

/**
 * Decompiled function f__B495_0144_0006_97C3()
 *
 * @name f__B495_0144_0006_97C3
 * @implements B495:0144:0006:97C3 ()
 *
 * Called From: B495:0144:000D:994C
 */
void f__B495_0144_0006_97C3()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, 0x1);
	f__B495_0196_0008_4D0B(); return;
}

/**
 * Decompiled function f__B495_014A_0029_416B()
 *
 * @name f__B495_014A_0029_416B
 * @implements B495:014A:0029:416B ()
 *
 * Called From: B495:011A:0022:C0E7
 * Called From: B495:0124:0022:C0E7
 */
void f__B495_014A_0029_416B()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FB8));
	emu_addw(&emu_ax, 0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_0180_0007_C661(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0xA);
	emu_movw(&emu_di, 0x1);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0173); f__B495_1140_0009_13F2();
	f__B495_0173_000A_A88E();
}

/**
 * Decompiled function f__B495_0173_000A_A88E()
 *
 * @name f__B495_0173_000A_A88E
 * @implements B495:0173:000A:A88E ()
 *
 * Called From: B495:0173:0029:416B
 */
void f__B495_0173_000A_A88E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x017D); f__B495_0DC9_0010_C643();
	f__B495_017D_0003_C21A();
}

/**
 * Decompiled function f__B495_017D_0003_C21A()
 *
 * @name f__B495_017D_0003_C21A
 * @implements B495:017D:0003:C21A ()
 *
 * Called From: B495:017D:000A:A88E
 */
void f__B495_017D_0003_C21A()
{
	emu_pop(&emu_cx);
	f__B495_0192_0002_C13A(); return;
}

/**
 * Decompiled function f__B495_0180_0007_C661()
 *
 * @name f__B495_0180_0007_C661
 * @implements B495:0180:0007:C661 ()
 *
 * Called From: B495:0155:0029:416B
 */
void f__B495_0180_0007_C661()
{
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs);
	emu_push(0x0187); f__B495_089A_0011_B26C();
	f__B495_0187_0009_F0DE();
}

/**
 * Decompiled function f__B495_0187_0009_F0DE()
 *
 * @name f__B495_0187_0009_F0DE
 * @implements B495:0187:0009:F0DE ()
 *
 * Called From: B495:0187:0007:C661
 */
void f__B495_0187_0009_F0DE()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0190); f__B495_119D_0009_53E9();
	f__B495_0190_0004_59FF();
}

/**
 * Decompiled function f__B495_0190_0004_59FF()
 *
 * @name f__B495_0190_0004_59FF
 * @implements B495:0190:0004:59FF ()
 *
 * Called From: B495:0190:0009:F0DE
 */
void f__B495_0190_0004_59FF()
{
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	f__B495_0196_0008_4D0B(); return;
}

/**
 * Decompiled function f__B495_0192_0002_C13A()
 *
 * @name f__B495_0192_0002_C13A
 * @implements B495:0192:0002:C13A ()
 *
 * Called From: B495:017E:0003:C21A
 */
void f__B495_0192_0002_C13A()
{
	f__B495_0196_0008_4D0B(); return;
}

/**
 * Decompiled function f__B495_0196_0008_4D0B()
 *
 * @name f__B495_0196_0008_4D0B
 * @implements B495:0196:0008:4D0B ()
 *
 * Called From: B495:0148:0006:97C3
 * Called From: B495:0192:0004:59FF
 * Called From: B495:0192:0002:C13A
 * Called From: B495:01A6:0013:FADA
 */
void f__B495_0196_0008_4D0B()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x019E); f__B495_0DC9_0010_C643();
	f__B495_019E_0013_FADA();
}

/**
 * Decompiled function f__B495_019E_0013_FADA()
 *
 * @name f__B495_019E_0013_FADA
 * @implements B495:019E:0013:FADA ()
 *
 * Called From: B495:019E:0008:4D0B
 */
void f__B495_019E_0013_FADA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (!emu_flags.zf) { f__B495_0196_0008_4D0B(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B495_01B1_000E_814C(); return; }
	emu_push(emu_cs);
	emu_push(0x01B1); f__B495_089A_0011_B26C();
	f__B495_01B1_000E_814C();
}

/**
 * Decompiled function f__B495_01B1_000E_814C()
 *
 * @name f__B495_01B1_000E_814C
 * @implements B495:01B1:000E:814C ()
 *
 * Called From: B495:01AA:0013:FADA
 * Called From: B495:01B1:0013:FADA
 */
void f__B495_01B1_000E_814C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01BF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_01BF_0008_4F72();
}

/**
 * Decompiled function f__B495_01BF_0008_4F72()
 *
 * @name f__B495_01BF_0008_4F72
 * @implements B495:01BF:0008:4F72 ()
 *
 * Called From: B495:01BF:000E:814C
 */
void f__B495_01BF_0008_4F72()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__B495_01C7_0004_DE52(); return;
}

/**
 * Decompiled function f__B495_01C7_0004_DE52()
 *
 * @name f__B495_01C7_0004_DE52
 * @implements B495:01C7:0004:DE52 ()
 *
 * Called From: B495:01C5:0008:4F72
 */
void f__B495_01C7_0004_DE52()
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
 * Decompiled function f__B495_01CB_0016_9CD0()
 *
 * @name f__B495_01CB_0016_9CD0
 * @implements B495:01CB:0016:9CD0 ()
 *
 * Called From: 3495:002A:0005:0000
 */
void f__B495_01CB_0016_9CD0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax, emu_si);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B495_01E1_0018_D88B(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0xB495; emu_last_ip = 0x01DD; emu_last_length = 0x0016; emu_last_crc = 0x9CD0; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0251; emu_last_cs = 0xB495; emu_last_ip = 0x01DF; emu_last_length = 0x0016; emu_last_crc = 0x9CD0; emu_call();
}

/**
 * Decompiled function f__B495_01E1_0018_D88B()
 *
 * @name f__B495_01E1_0018_D88B
 * @implements B495:01E1:0018:D88B ()
 *
 * Called From: B495:01D8:0016:9CD0
 */
void f__B495_01E1_0018_D88B()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), 0x0);
	if (emu_flags.zf) { f__B495_020C_0021_C120(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0xA);
	emu_push(emu_cs);
	emu_push(0x01F9); f__B495_0F30_0008_857D();
	f__B495_01F9_000D_1A5D();
}

/**
 * Decompiled function f__B495_01F9_000D_1A5D()
 *
 * @name f__B495_01F9_000D_1A5D
 * @implements B495:01F9:000D:1A5D ()
 *
 * Called From: B495:01F9:0018:D88B
 */
void f__B495_01F9_000D_1A5D()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0206); f__B495_0DC9_0010_C643();
	f__B495_0206_0006_9243();
}

/**
 * Decompiled function f__B495_0206_0006_9243()
 *
 * @name f__B495_0206_0006_9243
 * @implements B495:0206:0006:9243 ()
 *
 * Called From: B495:0206:000D:1A5D
 */
void f__B495_0206_0006_9243()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, 0x1);
	f__B495_0253_0008_0E9A(); return;
}

/**
 * Decompiled function f__B495_020C_0021_C120()
 *
 * @name f__B495_020C_0021_C120
 * @implements B495:020C:0021:C120 ()
 *
 * Called From: B495:01E6:0018:D88B
 */
void f__B495_020C_0021_C120()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8), 0x0);
	if (emu_flags.zf) { f__B495_023D_0007_86F0(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0xA);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x022D); f__B495_1140_0009_13F2();
	f__B495_022D_000D_9E8C();
}

/**
 * Decompiled function f__B495_022D_000D_9E8C()
 *
 * @name f__B495_022D_000D_9E8C
 * @implements B495:022D:000D:9E8C ()
 *
 * Called From: B495:022D:0021:C120
 */
void f__B495_022D_000D_9E8C()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, 0x1);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x023A); f__B495_0DC9_0010_C643();
	f__B495_023A_0003_C21A();
}

/**
 * Decompiled function f__B495_023A_0003_C21A()
 *
 * @name f__B495_023A_0003_C21A
 * @implements B495:023A:0003:C21A ()
 *
 * Called From: B495:023A:000D:9E8C
 */
void f__B495_023A_0003_C21A()
{
	emu_pop(&emu_cx);
	f__B495_024F_0002_C13A(); return;
}

/**
 * Decompiled function f__B495_023D_0007_86F0()
 *
 * @name f__B495_023D_0007_86F0
 * @implements B495:023D:0007:86F0 ()
 *
 * Called From: B495:0212:0021:C120
 */
void f__B495_023D_0007_86F0()
{
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs);
	emu_push(0x0244); f__B495_089A_0011_B26C();
	f__B495_0244_0009_BF49();
}

/**
 * Decompiled function f__B495_0244_0009_BF49()
 *
 * @name f__B495_0244_0009_BF49
 * @implements B495:0244:0009:BF49 ()
 *
 * Called From: B495:0244:0007:86F0
 */
void f__B495_0244_0009_BF49()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x024D); f__B495_119D_0009_53E9();
	f__B495_024D_0004_59FF();
}

/**
 * Decompiled function f__B495_024D_0004_59FF()
 *
 * @name f__B495_024D_0004_59FF
 * @implements B495:024D:0004:59FF ()
 *
 * Called From: B495:024D:0009:BF49
 */
void f__B495_024D_0004_59FF()
{
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	f__B495_0253_0008_0E9A(); return;
}

/**
 * Decompiled function f__B495_024F_0002_C13A()
 *
 * @name f__B495_024F_0002_C13A
 * @implements B495:024F:0002:C13A ()
 *
 * Called From: B495:023B:0003:C21A
 */
void f__B495_024F_0002_C13A()
{
	f__B495_0253_0008_0E9A(); return;
}

/**
 * Decompiled function f__B495_0253_0008_0E9A()
 *
 * @name f__B495_0253_0008_0E9A
 * @implements B495:0253:0008:0E9A ()
 *
 * Called From: B495:020A:0006:9243
 * Called From: B495:024F:0004:59FF
 * Called From: B495:024F:0002:C13A
 * Called From: B495:0263:0013:BAEB
 */
void f__B495_0253_0008_0E9A()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025B); f__B495_0DC9_0010_C643();
	f__B495_025B_0013_BAEB();
}

/**
 * Decompiled function f__B495_025B_0013_BAEB()
 *
 * @name f__B495_025B_0013_BAEB
 * @implements B495:025B:0013:BAEB ()
 *
 * Called From: B495:025B:0008:0E9A
 */
void f__B495_025B_0013_BAEB()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (!emu_flags.zf) { f__B495_0253_0008_0E9A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B495_026E_000E_814C(); return; }
	emu_push(emu_cs);
	emu_push(0x026E); f__B495_089A_0011_B26C();
	f__B495_026E_000E_814C();
}

/**
 * Decompiled function f__B495_026E_000E_814C()
 *
 * @name f__B495_026E_000E_814C
 * @implements B495:026E:000E:814C ()
 *
 * Called From: B495:0267:0013:BAEB
 * Called From: B495:026E:0013:BAEB
 */
void f__B495_026E_000E_814C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_027C_0008_4F72();
}

/**
 * Decompiled function f__B495_027C_0008_4F72()
 *
 * @name f__B495_027C_0008_4F72
 * @implements B495:027C:0008:4F72 ()
 *
 * Called From: B495:027C:000E:814C
 */
void f__B495_027C_0008_4F72()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__B495_0284_0004_DE52(); return;
}

/**
 * Decompiled function f__B495_0284_0004_DE52()
 *
 * @name f__B495_0284_0004_DE52
 * @implements B495:0284:0004:DE52 ()
 *
 * Called From: B495:0282:0008:4F72
 */
void f__B495_0284_0004_DE52()
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
 * Decompiled function f__B495_0288_001F_5BC7()
 *
 * @name f__B495_0288_001F_5BC7
 * @implements B495:0288:001F:5BC7 ()
 *
 * Called From: 3495:002F:0005:0000
 */
void f__B495_0288_001F_5BC7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_02C5_0009_351E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02BD; emu_last_cs = 0xB495; emu_last_ip = 0x029A; emu_last_length = 0x001F; emu_last_crc = 0x5BC7; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x348B; emu_ip = 0x0025; emu_last_cs = 0xB495; emu_last_ip = 0x02A2; emu_last_length = 0x001F; emu_last_crc = 0x5BC7; emu_call();
	/* Unresolved jump */ emu_ip = 0x02A7; emu_last_cs = 0xB495; emu_last_ip = 0x02A7; emu_last_length = 0x001F; emu_last_crc = 0x5BC7; emu_call();
}

/**
 * Decompiled function f__B495_02C5_0009_351E()
 *
 * @name f__B495_02C5_0009_351E
 * @implements B495:02C5:0009:351E ()
 *
 * Called From: B495:0293:001F:5BC7
 */
void f__B495_02C5_0009_351E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B495_1230_001B_A160();
	f__B495_02CE_0031_594F();
}

/**
 * Decompiled function f__B495_02CE_0031_594F()
 *
 * @name f__B495_02CE_0031_594F
 * @implements B495:02CE:0031:594F ()
 *
 * Called From: B495:02CE:0009:351E
 */
void f__B495_02CE_0031_594F()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B495_02F1_000E_814C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FC0), 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02FF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_02FF_0008_4F72();
}

/**
 * Decompiled function f__B495_02F1_000E_814C()
 *
 * @name f__B495_02F1_000E_814C
 * @implements B495:02F1:000E:814C ()
 *
 * Called From: B495:02E1:0031:594F
 */
void f__B495_02F1_000E_814C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02FF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_02FF_0008_4F72();
}

/**
 * Decompiled function f__B495_02FF_0008_4F72()
 *
 * @name f__B495_02FF_0008_4F72
 * @implements B495:02FF:0008:4F72 ()
 *
 * Called From: B495:02FF:0031:594F
 * Called From: B495:02FF:000E:814C
 */
void f__B495_02FF_0008_4F72()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__B495_0307_0004_893F(); return;
}

/**
 * Decompiled function f__B495_0307_0004_893F()
 *
 * @name f__B495_0307_0004_893F
 * @implements B495:0307:0004:893F ()
 *
 * Called From: B495:0305:0008:4F72
 */
void f__B495_0307_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_030B_001D_B90C()
 *
 * @name f__B495_030B_001D_B90C
 * @implements B495:030B:001D:B90C ()
 *
 * Called From: 3495:0034:0005:0000
 */
void f__B495_030B_001D_B90C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FC0), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0376_0016_687B(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8BEA);
	/* Unresolved jump */ emu_ip = 0x036F; emu_last_cs = 0xB495; emu_last_ip = 0x0326; emu_last_length = 0x001D; emu_last_crc = 0xB90C; emu_call();
}

/**
 * Decompiled function f__B495_0376_0016_687B()
 *
 * @name f__B495_0376_0016_687B
 * @implements B495:0376:0016:687B ()
 *
 * Called From: B495:031C:001D:B90C
 */
void f__B495_0376_0016_687B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x038F; emu_last_cs = 0xB495; emu_last_ip = 0x037C; emu_last_length = 0x0016; emu_last_crc = 0x687B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_038C_0008_4F72();
}

/**
 * Decompiled function f__B495_038C_0008_4F72()
 *
 * @name f__B495_038C_0008_4F72
 * @implements B495:038C:0008:4F72 ()
 *
 * Called From: B495:038C:0016:687B
 */
void f__B495_038C_0008_4F72()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__B495_0394_0004_893F(); return;
}

/**
 * Decompiled function f__B495_0394_0004_893F()
 *
 * @name f__B495_0394_0004_893F
 * @implements B495:0394:0004:893F ()
 *
 * Called From: B495:0392:0008:4F72
 */
void f__B495_0394_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_03B9_0008_D80E()
 *
 * @name f__B495_03B9_0008_D80E
 * @implements B495:03B9:0008:D80E ()
 *
 * Called From: 3495:003E:0005:0000
 */
void f__B495_03B9_0008_D80E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs);
	emu_push(0x03C1); f__B495_0F30_0008_857D();
	f__B495_03C1_0012_9714();
}

/**
 * Decompiled function f__B495_03C1_0012_9714()
 *
 * @name f__B495_03C1_0012_9714
 * @implements B495:03C1:0012:9714 ()
 *
 * Called From: B495:03C1:0008:D80E
 */
void f__B495_03C1_0012_9714()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_subw(&emu_ax, 0x2E);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), emu_ax);
	emu_push(emu_cs);
	emu_push(0x03D3); f__B495_089A_0011_B26C();
	f__B495_03D3_0009_FC66();
}

/**
 * Decompiled function f__B495_03D3_0009_FC66()
 *
 * @name f__B495_03D3_0009_FC66
 * @implements B495:03D3:0009:FC66 ()
 *
 * Called From: B495:03D3:0012:9714
 */
void f__B495_03D3_0009_FC66()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03DC); f__B495_0DC9_0010_C643();
	f__B495_03DC_0006_B1FB();
}

/**
 * Decompiled function f__B495_03DC_0006_B1FB()
 *
 * @name f__B495_03DC_0006_B1FB
 * @implements B495:03DC:0006:B1FB ()
 *
 * Called From: B495:03DC:0009:FC66
 */
void f__B495_03DC_0006_B1FB()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	f__B495_03E2_0002_2597(); return;
}

/**
 * Decompiled function f__B495_03E2_0002_2597()
 *
 * @name f__B495_03E2_0002_2597
 * @implements B495:03E2:0002:2597 ()
 *
 * Called From: B495:03E0:0006:B1FB
 */
void f__B495_03E2_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_089A_0011_B26C()
 *
 * @name f__B495_089A_0011_B26C
 * @implements B495:089A:0011:B26C ()
 *
 * Called From: B495:0184:0007:C661
 * Called From: B495:01AE:0013:FADA
 * Called From: B495:0241:0007:86F0
 * Called From: B495:026B:0013:BAEB
 * Called From: B495:03D0:0012:9714
 * Called From: B495:157C:0005:464E
 */
void f__B495_089A_0011_B26C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x08AB); f__B495_1230_001B_A160();
	f__B495_08AB_0010_5134();
}

/**
 * Decompiled function f__B495_08AB_0010_5134()
 *
 * @name f__B495_08AB_0010_5134
 * @implements B495:08AB:0010:5134 ()
 *
 * Called From: B495:08AB:0011:B26C
 */
void f__B495_08AB_0010_5134()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_08BB_0031_B115();
}

/**
 * Decompiled function f__B495_08BB_0031_B115()
 *
 * @name f__B495_08BB_0031_B115
 * @implements B495:08BB:0031:B115 ()
 *
 * Called From: B495:08BB:0010:5134
 */
void f__B495_08BB_0031_B115()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FB0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs); emu_push(0x08EC); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_08EC_0026_18DF();
}

/**
 * Decompiled function f__B495_08EC_0026_18DF()
 *
 * @name f__B495_08EC_0026_18DF
 * @implements B495:08EC:0026:18DF ()
 *
 * Called From: B495:08EC:0031:B115
 */
void f__B495_08EC_0026_18DF()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0912_000E_36BE();
}

/**
 * Decompiled function f__B495_0912_000E_36BE()
 *
 * @name f__B495_0912_000E_36BE
 * @implements B495:0912:000E:36BE ()
 *
 * Called From: B495:0912:0026:18DF
 */
void f__B495_0912_000E_36BE()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0920_000C_42EE();
}

/**
 * Decompiled function f__B495_0920_000C_42EE()
 *
 * @name f__B495_0920_000C_42EE
 * @implements B495:0920:000C:42EE ()
 *
 * Called From: B495:0920:000E:36BE
 */
void f__B495_0920_000C_42EE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), 0x0);
	if (!emu_flags.zf) { f__B495_092C_002E_7A31(); return; }
	f__B495_09FE_0011_7710(); return;
}

/**
 * Decompiled function f__B495_092C_002E_7A31()
 *
 * @name f__B495_092C_002E_7A31
 * @implements B495:092C:002E:7A31 ()
 *
 * Called From: B495:0927:000C:42EE
 */
void f__B495_092C_002E_7A31()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x120);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x88);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x542));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x540));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_095A_0028_09CD();
}

/**
 * Decompiled function f__B495_095A_0028_09CD()
 *
 * @name f__B495_095A_0028_09CD
 * @implements B495:095A:0028:09CD ()
 *
 * Called From: B495:095A:002E:7A31
 */
void f__B495_095A_0028_09CD()
{
	emu_addw(&emu_sp, 0xE);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x4A2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x4A0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0982); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0982_0030_C02A();
}

/**
 * Decompiled function f__B495_0982_0030_C02A()
 *
 * @name f__B495_0982_0030_C02A
 * @implements B495:0982:0030:C02A ()
 *
 * Called From: B495:0982:0028:09CD
 */
void f__B495_0982_0030_C02A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E42));
	emu_decw(&emu_ax);
	emu_movw(&emu_di, emu_ax);
	f__B495_09FA_0015_88CA(); return;
}

/**
 * Decompiled function f__B495_09B2_0014_F25C()
 *
 * @name f__B495_09B2_0014_F25C
 * @implements B495:09B2:0014:F25C ()
 *
 * Called From: B495:09FC:0015:88CA
 * Called From: B495:09FC:001E:2809
 */
void f__B495_09B2_0014_F25C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E40));
	emu_decw(&emu_ax);
	emu_movw(&emu_si, emu_ax);
	f__B495_09F5_001A_CAEA(); return;
}

/**
 * Decompiled function f__B495_09C6_002B_80B3()
 *
 * @name f__B495_09C6_002B_80B3
 * @implements B495:09C6:002B:80B3 ()
 *
 * Called From: B495:09F7:001A:CAEA
 * Called From: B495:09F7:001E:2809
 */
void f__B495_09C6_002B_80B3()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x09F1); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_09F1_001E_2809();
}

/**
 * Decompiled function f__B495_09F1_001E_2809()
 *
 * @name f__B495_09F1_001E_2809
 * @implements B495:09F1:001E:2809 ()
 *
 * Called From: B495:09F1:002B:80B3
 */
void f__B495_09F1_001E_2809()
{
	emu_addw(&emu_sp, 0xE);
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09C6_002B_80B3(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09B2_0014_F25C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_flags.zf) { f__B495_0A0F_0021_EEAE(); return; }
	f__B495_0AE9_002C_6F3D(); return;
}

/**
 * Decompiled function f__B495_09F5_001A_CAEA()
 *
 * @name f__B495_09F5_001A_CAEA
 * @implements B495:09F5:001A:CAEA ()
 *
 * Called From: B495:09C4:0014:F25C
 */
void f__B495_09F5_001A_CAEA()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09C6_002B_80B3(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09B2; emu_last_cs = 0xB495; emu_last_ip = 0x09FC; emu_last_length = 0x001A; emu_last_crc = 0xCAEA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A0F; emu_last_cs = 0xB495; emu_last_ip = 0x0A0A; emu_last_length = 0x001A; emu_last_crc = 0xCAEA; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0AE9; emu_last_cs = 0xB495; emu_last_ip = 0x0A0C; emu_last_length = 0x001A; emu_last_crc = 0xCAEA; emu_call();
}

/**
 * Decompiled function f__B495_09FA_0015_88CA()
 *
 * @name f__B495_09FA_0015_88CA
 * @implements B495:09FA:0015:88CA ()
 *
 * Called From: B495:09B0:0030:C02A
 */
void f__B495_09FA_0015_88CA()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09B2_0014_F25C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A0F; emu_last_cs = 0xB495; emu_last_ip = 0x0A0A; emu_last_length = 0x0015; emu_last_crc = 0x88CA; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0AE9; emu_last_cs = 0xB495; emu_last_ip = 0x0A0C; emu_last_length = 0x0015; emu_last_crc = 0x88CA; emu_call();
}

/**
 * Decompiled function f__B495_09FE_0011_7710()
 *
 * @name f__B495_09FE_0011_7710
 * @implements B495:09FE:0011:7710 ()
 *
 * Called From: B495:0929:000C:42EE
 */
void f__B495_09FE_0011_7710()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_flags.zf) { f__B495_0A0F_0021_EEAE(); return; }
	f__B495_0AE9_002C_6F3D(); return;
}

/**
 * Decompiled function f__B495_0A0F_0021_EEAE()
 *
 * @name f__B495_0A0F_0021_EEAE
 * @implements B495:0A0F:0021:EEAE ()
 *
 * Called From: B495:0A0A:0011:7710
 * Called From: B495:0A0A:001E:2809
 */
void f__B495_0A0F_0021_EEAE()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x70);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xB8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A30); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0A30_0026_5884();
}

/**
 * Decompiled function f__B495_0A30_0026_5884()
 *
 * @name f__B495_0A30_0026_5884
 * @implements B495:0A30:0026:5884 ()
 *
 * Called From: B495:0A30:0021:EEAE
 */
void f__B495_0A30_0026_5884()
{
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0A64_001C_115A(); return; }
	emu_movw(&emu_ax, 0x132);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x63);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xDC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xB9);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0A56); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0xB495; emu_last_ip = 0x0A51; emu_last_length = 0x0026; emu_last_crc = 0x5884; emu_call();
	/* Unresolved jump */ emu_ip = 0x0A56; emu_last_cs = 0xB495; emu_last_ip = 0x0A56; emu_last_length = 0x0026; emu_last_crc = 0x5884; emu_call();
}

/**
 * Decompiled function f__B495_0A64_001C_115A()
 *
 * @name f__B495_0A64_001C_115A
 * @implements B495:0A64:001C:115A ()
 *
 * Called From: B495:0A38:0026:5884
 */
void f__B495_0A64_001C_115A()
{
	emu_movw(&emu_ax, 0x132);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xDC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xBA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A80); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0A80_0008_0683();
}

/**
 * Decompiled function f__B495_0A80_0008_0683()
 *
 * @name f__B495_0A80_0008_0683
 * @implements B495:0A80:0008:0683 ()
 *
 * Called From: B495:0A80:001C:115A
 */
void f__B495_0A80_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A88); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0A88_002A_B2A6();
}

/**
 * Decompiled function f__B495_0A88_002A_B2A6()
 *
 * @name f__B495_0A88_002A_B2A6
 * @implements B495:0A88:002A:B2A6 ()
 *
 * Called From: B495:0A88:0008:0683
 */
void f__B495_0A88_002A_B2A6()
{
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (emu_flags.zf) { f__B495_0ABF_001C_E66E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBE));
	emu_movw(&emu_ax, 0x132);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x68);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xDC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xBB);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AB2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0AB2_0008_0683();
}

/**
 * Decompiled function f__B495_0AB2_0008_0683()
 *
 * @name f__B495_0AB2_0008_0683
 * @implements B495:0AB2:0008:0683 ()
 *
 * Called From: B495:0AB2:002A:B2A6
 */
void f__B495_0AB2_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ABA); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0ABA_0005_95AE();
}

/**
 * Decompiled function f__B495_0ABA_0005_95AE()
 *
 * @name f__B495_0ABA_0005_95AE
 * @implements B495:0ABA:0005:95AE ()
 *
 * Called From: B495:0ABA:0008:0683
 */
void f__B495_0ABA_0005_95AE()
{
	emu_addw(&emu_sp, 0x10);
	f__B495_0AE6_0003_DD00(); return;
}

/**
 * Decompiled function f__B495_0ABF_001C_E66E()
 *
 * @name f__B495_0ABF_001C_E66E
 * @implements B495:0ABF:001C:E66E ()
 *
 * Called From: B495:0A90:002A:B2A6
 */
void f__B495_0ABF_001C_E66E()
{
	emu_movw(&emu_ax, 0x132);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x68);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xDC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x14D);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ADB); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0ADB_0008_0683();
}

/**
 * Decompiled function f__B495_0ADB_0008_0683()
 *
 * @name f__B495_0ADB_0008_0683
 * @implements B495:0ADB:0008:0683 ()
 *
 * Called From: B495:0ADB:001C:E66E
 */
void f__B495_0ADB_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0AE3_0006_3722();
}

/**
 * Decompiled function f__B495_0AE3_0006_3722()
 *
 * @name f__B495_0AE3_0006_3722
 * @implements B495:0AE3:0006:3722 ()
 *
 * Called From: B495:0AE3:0008:0683
 */
void f__B495_0AE3_0006_3722()
{
	emu_addw(&emu_sp, 0xE);
	f__B495_0B6C_0005_6168(); return;
}

/**
 * Decompiled function f__B495_0AE6_0003_DD00()
 *
 * @name f__B495_0AE6_0003_DD00
 * @implements B495:0AE6:0003:DD00 ()
 *
 * Called From: B495:0ABD:0005:95AE
 */
void f__B495_0AE6_0003_DD00()
{
	f__B495_0B6C_0005_6168(); return;
}

/**
 * Decompiled function f__B495_0AE9_002C_6F3D()
 *
 * @name f__B495_0AE9_002C_6F3D
 * @implements B495:0AE9:002C:6F3D ()
 *
 * Called From: B495:0A0C:001E:2809
 * Called From: B495:0A0C:0011:7710
 */
void f__B495_0AE9_002C_6F3D()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0B6C_0005_6168(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA0);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x63);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0B15); emu_cs = 0x24D0; emu_ip = 0x000D; emu_last_cs = 0xB495; emu_last_ip = 0x0B10; emu_last_length = 0x002C; emu_last_crc = 0x6F3D; emu_call();
	/* Unresolved jump */ emu_ip = 0x0B15; emu_last_cs = 0xB495; emu_last_ip = 0x0B15; emu_last_length = 0x002C; emu_last_crc = 0x6F3D; emu_call();
}

/**
 * Decompiled function f__B495_0B6C_0005_6168()
 *
 * @name f__B495_0B6C_0005_6168
 * @implements B495:0B6C:0005:6168 ()
 *
 * Called From: B495:0AE6:0003:DD00
 * Called From: B495:0AE6:0006:3722
 * Called From: B495:0AEE:002C:6F3D
 */
void f__B495_0B6C_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0B71); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0B71_0024_BED1();
}

/**
 * Decompiled function f__B495_0B71_0024_BED1()
 *
 * @name f__B495_0B71_0024_BED1
 * @implements B495:0B71:0024:BED1 ()
 *
 * Called From: B495:0B71:0005:6168
 */
void f__B495_0B71_0024_BED1()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x70);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B95); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0B95_0008_43E5();
}

/**
 * Decompiled function f__B495_0B95_0008_43E5()
 *
 * @name f__B495_0B95_0008_43E5
 * @implements B495:0B95:0008:43E5 ()
 *
 * Called From: B495:0B95:0024:BED1
 */
void f__B495_0B95_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0B9D_0008_1199();
}

/**
 * Decompiled function f__B495_0B9D_0008_1199()
 *
 * @name f__B495_0B9D_0008_1199
 * @implements B495:0B9D:0008:1199 ()
 *
 * Called From: B495:0B9D:0008:43E5
 */
void f__B495_0B9D_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0BA5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0BA5_000C_B6AC();
}

/**
 * Decompiled function f__B495_0BA5_000C_B6AC()
 *
 * @name f__B495_0BA5_000C_B6AC
 * @implements B495:0BA5:000C:B6AC ()
 *
 * Called From: B495:0BA5:0008:1199
 */
void f__B495_0BA5_000C_B6AC()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0BB1); f__B495_0BB9_0011_11A0();
	f__B495_0BB1_0008_AE7C();
}

/**
 * Decompiled function f__B495_0BB1_0008_AE7C()
 *
 * @name f__B495_0BB1_0008_AE7C
 * @implements B495:0BB1:0008:AE7C ()
 *
 * Called From: B495:0BB1:000C:B6AC
 */
void f__B495_0BB1_0008_AE7C()
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
 * Decompiled function f__B495_0BB9_0011_11A0()
 *
 * @name f__B495_0BB9_0011_11A0
 * @implements B495:0BB9:0011:11A0 ()
 *
 * Called From: B495:0BAE:000C:B6AC
 */
void f__B495_0BB9_0011_11A0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0BCA_0021_D845();
}

/**
 * Decompiled function f__B495_0BCA_0021_D845()
 *
 * @name f__B495_0BCA_0021_D845
 * @implements B495:0BCA:0021:D845 ()
 *
 * Called From: B495:0BCA:0011:11A0
 */
void f__B495_0BCA_0021_D845()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x74);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x23);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x136);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x15);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0BEB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0BE6; emu_last_length = 0x0021; emu_last_crc = 0xD845;
			emu_call();
			return;
	}
	f__B495_0BEB_0032_B14B();
}

/**
 * Decompiled function f__B495_0BEB_0032_B14B()
 *
 * @name f__B495_0BEB_0032_B14B
 * @implements B495:0BEB:0032:B14B ()
 *
 * Called From: B495:0BEB:0021:D845
 */
void f__B495_0BEB_0032_B14B()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B495_0C23_0009_B187(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C23; emu_last_cs = 0xB495; emu_last_ip = 0x0BFD; emu_last_length = 0x0032; emu_last_crc = 0xB14B; emu_call(); return; }
	emu_movw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0C1D); emu_cs = 0x10E4; emu_ip = 0x1EF1; emu_last_cs = 0xB495; emu_last_ip = 0x0C18; emu_last_length = 0x0032; emu_last_crc = 0xB14B; emu_call();
	/* Unresolved jump */ emu_ip = 0x0C1D; emu_last_cs = 0xB495; emu_last_ip = 0x0C1D; emu_last_length = 0x0032; emu_last_crc = 0xB14B; emu_call();
}

/**
 * Decompiled function f__B495_0C23_0009_B187()
 *
 * @name f__B495_0C23_0009_B187
 * @implements B495:0C23:0009:B187 ()
 *
 * Called From: B495:0BF4:0032:B14B
 */
void f__B495_0C23_0009_B187()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0C2C); f__B495_1230_001B_A160();
	f__B495_0C2C_002A_6ABB();
}

/**
 * Decompiled function f__B495_0C2C_002A_6ABB()
 *
 * @name f__B495_0C2C_002A_6ABB
 * @implements B495:0C2C:002A:6ABB ()
 *
 * Called From: B495:0C2C:0009:B187
 */
void f__B495_0C2C_002A_6ABB()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x0C56); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C56_0008_0683();
}

/**
 * Decompiled function f__B495_0C56_0008_0683()
 *
 * @name f__B495_0C56_0008_0683
 * @implements B495:0C56:0008:0683 ()
 *
 * Called From: B495:0C56:002A:6ABB
 */
void f__B495_0C56_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C5E); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C5E_000C_4A92();
}

/**
 * Decompiled function f__B495_0C5E_000C_4A92()
 *
 * @name f__B495_0C5E_000C_4A92
 * @implements B495:0C5E:000C:4A92 ()
 *
 * Called From: B495:0C5E:0008:0683
 */
void f__B495_0C5E_000C_4A92()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0xB2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C6A); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C6A_0008_1FFE();
}

/**
 * Decompiled function f__B495_0C6A_0008_1FFE()
 *
 * @name f__B495_0C6A_0008_1FFE
 * @implements B495:0C6A:0008:1FFE ()
 *
 * Called From: B495:0C6A:000C:4A92
 */
void f__B495_0C6A_0008_1FFE()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C72); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C72_0029_5C43();
}

/**
 * Decompiled function f__B495_0C72_0029_5C43()
 *
 * @name f__B495_0C72_0029_5C43
 * @implements B495:0C72:0029:5C43 ()
 *
 * Called From: B495:0C72:0008:1FFE
 */
void f__B495_0C72_0029_5C43()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3));
	emu_movw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x136);
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xB1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C9B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C9B_0008_0683();
}

/**
 * Decompiled function f__B495_0C9B_0008_0683()
 *
 * @name f__B495_0C9B_0008_0683
 * @implements B495:0C9B:0008:0683 ()
 *
 * Called From: B495:0C9B:0029:5C43
 */
void f__B495_0C9B_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0CA3_0013_CBED();
}

/**
 * Decompiled function f__B495_0CA3_0013_CBED()
 *
 * @name f__B495_0CA3_0013_CBED
 * @implements B495:0CA3:0013:CBED ()
 *
 * Called From: B495:0CA3:0008:0683
 */
void f__B495_0CA3_0013_CBED()
{
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0CF9_0005_6168(); return; }
	emu_movw(&emu_ax, 0xB4);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0CB6); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0xB495; emu_last_ip = 0x0CB1; emu_last_length = 0x0013; emu_last_crc = 0xCBED; emu_call();
	/* Unresolved jump */ emu_ip = 0x0CB6; emu_last_cs = 0xB495; emu_last_ip = 0x0CB6; emu_last_length = 0x0013; emu_last_crc = 0xCBED; emu_call();
}

/**
 * Decompiled function f__B495_0CF9_0005_6168()
 *
 * @name f__B495_0CF9_0005_6168
 * @implements B495:0CF9:0005:6168 ()
 *
 * Called From: B495:0CAB:0013:CBED
 */
void f__B495_0CF9_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0CFE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0CFE_002B_B990();
}

/**
 * Decompiled function f__B495_0CFE_002B_B990()
 *
 * @name f__B495_0CFE_002B_B990
 * @implements B495:0CFE:002B:B990 ()
 *
 * Called From: B495:0CFE:0005:6168
 */
void f__B495_0CFE_002B_B990()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D2C; emu_last_cs = 0xB495; emu_last_ip = 0x0D00; emu_last_length = 0x002B; emu_last_crc = 0xB990; emu_call(); return; }
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xB6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x15);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x15);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0D29);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0D24; emu_last_length = 0x002B; emu_last_crc = 0xB990;
			emu_call();
			return;
	}
	f__B495_0D29_0008_43E5();
}

/**
 * Decompiled function f__B495_0D29_0008_43E5()
 *
 * @name f__B495_0D29_0008_43E5
 * @implements B495:0D29:0008:43E5 ()
 *
 * Called From: B495:0D29:002B:B990
 */
void f__B495_0D29_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D31); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0D31_0006_4A77();
}

/**
 * Decompiled function f__B495_0D31_0006_4A77()
 *
 * @name f__B495_0D31_0006_4A77
 * @implements B495:0D31:0006:4A77 ()
 *
 * Called From: B495:0D31:0008:43E5
 */
void f__B495_0D31_0006_4A77()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0D37); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0D37_0007_F77C();
}

/**
 * Decompiled function f__B495_0D37_0007_F77C()
 *
 * @name f__B495_0D37_0007_F77C
 * @implements B495:0D37:0007:F77C ()
 *
 * Called From: B495:0D37:0006:4A77
 */
void f__B495_0D37_0007_F77C()
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
 * Decompiled function f__B495_0DC9_0010_C643()
 *
 * @name f__B495_0DC9_0010_C643
 * @implements B495:0DC9:0010:C643 ()
 *
 * Called From: B495:0054:0009:3E41
 * Called From: B495:0073:000A:DBF9
 * Called From: B495:0141:000D:994C
 * Called From: B495:017A:000A:A88E
 * Called From: B495:019B:0008:4D0B
 * Called From: B495:0203:000D:1A5D
 * Called From: B495:0237:000D:9E8C
 * Called From: B495:0258:0008:0E9A
 * Called From: B495:03D9:0009:FC66
 * Called From: B495:1195:0008:798E
 * Called From: B495:1228:0008:BA25
 */
void f__B495_0DC9_0010_C643()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__B495_0DD9_0018_EC07(); return; }
	f__B495_0E73_0018_CB64(); return;
}

/**
 * Decompiled function f__B495_0DD9_0018_EC07()
 *
 * @name f__B495_0DD9_0018_EC07
 * @implements B495:0DD9:0018:EC07 ()
 *
 * Called From: B495:0DD4:0010:C643
 */
void f__B495_0DD9_0018_EC07()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0DF1_0018_09EF();
}

/**
 * Decompiled function f__B495_0DF1_0018_09EF()
 *
 * @name f__B495_0DF1_0018_09EF
 * @implements B495:0DF1:0018:09EF ()
 *
 * Called From: B495:0DF1:0018:EC07
 */
void f__B495_0DF1_0018_09EF()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E09_002A_0E56();
}

/**
 * Decompiled function f__B495_0E09_002A_0E56()
 *
 * @name f__B495_0E09_002A_0E56
 * @implements B495:0E09:002A:0E56 ()
 *
 * Called From: B495:0E09:0018:09EF
 */
void f__B495_0E09_002A_0E56()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7F9E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7F9C), 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x7FA1), 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_movb(&emu_cl, 0x5);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x18);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_cs); emu_push(0x0E33); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E33_001B_3AB1();
}

/**
 * Decompiled function f__B495_0E33_001B_3AB1()
 *
 * @name f__B495_0E33_001B_3AB1
 * @implements B495:0E33:001B:3AB1 ()
 *
 * Called From: B495:0E33:002A:0E56
 */
void f__B495_0E33_001B_3AB1()
{
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x68);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x47);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E4E); emu_cs = 0x251B; f__251B_0000_001E_7202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E4E_001B_5840();
}

/**
 * Decompiled function f__B495_0E4E_001B_5840()
 *
 * @name f__B495_0E4E_001B_5840
 * @implements B495:0E4E:001B:5840 ()
 *
 * Called From: B495:0E4E:001B:3AB1
 */
void f__B495_0E4E_001B_5840()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x67);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E69); emu_cs = 0x251B; f__251B_0000_001E_7202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E69_0008_2BE5();
}

/**
 * Decompiled function f__B495_0E69_0008_2BE5()
 *
 * @name f__B495_0E69_0008_2BE5
 * @implements B495:0E69:0008:2BE5 ()
 *
 * Called From: B495:0E69:001B:5840
 */
void f__B495_0E69_0008_2BE5()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0E71); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E71_0002_CC3A();
}

/**
 * Decompiled function f__B495_0E71_0002_CC3A()
 *
 * @name f__B495_0E71_0002_CC3A
 * @implements B495:0E71:0002:CC3A ()
 *
 * Called From: B495:0E71:0008:2BE5
 */
void f__B495_0E71_0002_CC3A()
{
	f__B495_0E8B_005C_9A4A(); return;
}

/**
 * Decompiled function f__B495_0E73_0018_CB64()
 *
 * @name f__B495_0E73_0018_CB64
 * @implements B495:0E73:0018:CB64 ()
 *
 * Called From: B495:0DD6:0010:C643
 */
void f__B495_0E73_0018_CB64()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7F9E));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7F9C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { f__B495_0E8B_005C_9A4A(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B495_0E88_0003_1D08(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__B495_0E8B_005C_9A4A(); return; }
	f__B495_0F2B_0005_8BCF(); return;
}

/**
 * Decompiled function f__B495_0E88_0003_1D08()
 *
 * @name f__B495_0E88_0003_1D08
 * @implements B495:0E88:0003:1D08 ()
 *
 * Called From: B495:0E80:0018:CB64
 */
void f__B495_0E88_0003_1D08()
{
	f__B495_0F2B_0005_8BCF(); return;
}

/**
 * Decompiled function f__B495_0E8B_005C_9A4A()
 *
 * @name f__B495_0E8B_005C_9A4A
 * @implements B495:0E8B:005C:9A4A ()
 *
 * Called From: B495:0E71:0002:CC3A
 * Called From: B495:0E7E:0018:CB64
 * Called From: B495:0E86:0018:CB64
 */
void f__B495_0E8B_005C_9A4A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7F9E), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7F9C), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA1));
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_0EB4_0033_353B(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x3F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B495_0EC3_0024_C884(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA1));
	emu_negb(&emu_al, emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x7FA1), emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA1));
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_dx, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B495_0EE7_001A_CA6C(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B495_0F0F_0002_ACBA(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B495_0F01_000E_A5AF(); return; }
	/* Unresolved jump */ emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x005C; emu_last_crc = 0x9A4A; emu_call();
}

/**
 * Decompiled function f__B495_0EB4_0033_353B()
 *
 * @name f__B495_0EB4_0033_353B
 * @implements B495:0EB4:0033:353B ()
 *
 * Called From: B495:0EAB:005C:9A4A
 */
void f__B495_0EB4_0033_353B()
{
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA1));
	emu_negb(&emu_al, emu_al);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x7FA1), emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA1));
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_dx, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B495_0EE7_001A_CA6C(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B495_0F0F_0002_ACBA(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B495_0F01_000E_A5AF(); return; }
	/* Unresolved jump */ emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0033; emu_last_crc = 0x353B; emu_call();
}

/**
 * Decompiled function f__B495_0EC3_0024_C884()
 *
 * @name f__B495_0EC3_0024_C884
 * @implements B495:0EC3:0024:C884 ()
 *
 * Called From: B495:0EB2:005C:9A4A
 */
void f__B495_0EC3_0024_C884()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_dx, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B495_0EE7_001A_CA6C(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B495_0F0F_0002_ACBA(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B495_0F01_000E_A5AF(); return; }
	/* Unresolved jump */ emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0024; emu_last_crc = 0xC884; emu_call();
}

/**
 * Decompiled function f__B495_0EE7_001A_CA6C()
 *
 * @name f__B495_0EE7_001A_CA6C
 * @implements B495:0EE7:001A:CA6C ()
 *
 * Called From: B495:0ED9:0024:C884
 * Called From: B495:0ED9:005C:9A4A
 * Called From: B495:0ED9:0033:353B
 */
void f__B495_0EE7_001A_CA6C()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	f__B495_0F13_0015_AB67(); return;
}

/**
 * Decompiled function f__B495_0EEA_0017_098F()
 *
 * @name f__B495_0EEA_0017_098F
 * @implements B495:0EEA:0017:098F ()
 *
 * Called From: B495:0F0F:0002:ACBA
 */
void f__B495_0EEA_0017_098F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	f__B495_0F13_0015_AB67(); return;
}

/**
 * Decompiled function f__B495_0EF3_000E_BE7B()
 *
 * @name f__B495_0EF3_000E_BE7B
 * @implements B495:0EF3:000E:BE7B ()
 *
 * Called From: B495:0F0D:000E:A5AF
 */
void f__B495_0EF3_000E_BE7B()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	f__B495_0F13_0015_AB67(); return;
}

/**
 * Decompiled function f__B495_0F01_000E_A5AF()
 *
 * @name f__B495_0F01_000E_A5AF
 * @implements B495:0F01:000E:A5AF ()
 *
 * Called From: B495:0EE3:0024:C884
 * Called From: B495:0EE3:005C:9A4A
 * Called From: B495:0EE3:0033:353B
 */
void f__B495_0F01_000E_A5AF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B495_0EF3_000E_BE7B(); return;
}

/**
 * Decompiled function f__B495_0F0F_0002_ACBA()
 *
 * @name f__B495_0F0F_0002_ACBA
 * @implements B495:0F0F:0002:ACBA ()
 *
 * Called From: B495:0EDE:0024:C884
 * Called From: B495:0EDE:005C:9A4A
 * Called From: B495:0EDE:0033:353B
 */
void f__B495_0F0F_0002_ACBA()
{
	f__B495_0EEA_0017_098F(); return;
}

/**
 * Decompiled function f__B495_0F13_0015_AB67()
 *
 * @name f__B495_0F13_0015_AB67
 * @implements B495:0F13:0015:AB67 ()
 *
 * Called From: B495:0EFF:001A:CA6C
 * Called From: B495:0EFF:000E:BE7B
 * Called From: B495:0EFF:0017:098F
 */
void f__B495_0F13_0015_AB67()
{
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F28); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F28_0008_2947();
}

/**
 * Decompiled function f__B495_0F28_0008_2947()
 *
 * @name f__B495_0F28_0008_2947
 * @implements B495:0F28:0008:2947 ()
 *
 * Called From: B495:0F28:0015:AB67
 */
void f__B495_0F28_0008_2947()
{
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F2B_0005_8BCF()
 *
 * @name f__B495_0F2B_0005_8BCF
 * @implements B495:0F2B:0005:8BCF ()
 *
 * Called From: B495:0E88:0018:CB64
 * Called From: B495:0E88:0003:1D08
 */
void f__B495_0F2B_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F30_0008_857D()
 *
 * @name f__B495_0F30_0008_857D
 * @implements B495:0F30:0008:857D ()
 *
 * Called From: B495:00BE:0006:5A9A
 * Called From: B495:0134:0022:C0E7
 * Called From: B495:01F6:0018:D88B
 * Called From: B495:03BE:0008:D80E
 * Called From: B495:1146:0009:13F2
 * Called From: B495:11A3:0009:53E9
 * Called From: B495:11AF:0004:039F
 */
void f__B495_0F30_0008_857D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F38_0038_E4A8();
}

/**
 * Decompiled function f__B495_0F38_0038_E4A8()
 *
 * @name f__B495_0F38_0038_E4A8
 * @implements B495:0F38:0038:E4A8 ()
 *
 * Called From: B495:0F38:0008:857D
 */
void f__B495_0F38_0038_E4A8()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x26);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_movb(&emu_cl, 0x5);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x15);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x45);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_incw(&emu_ax);
	emu_movb(&emu_cl, 0x5);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x45);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0F70);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0F6B; emu_last_length = 0x0038; emu_last_crc = 0xE4A8;
			emu_call();
			return;
	}
	f__B495_0F70_0008_43E5();
}

/**
 * Decompiled function f__B495_0F70_0008_43E5()
 *
 * @name f__B495_0F70_0008_43E5
 * @implements B495:0F70:0008:43E5 ()
 *
 * Called From: B495:0F70:0038:E4A8
 */
void f__B495_0F70_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F78); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F78_0002_2597();
}

/**
 * Decompiled function f__B495_0F78_0002_2597()
 *
 * @name f__B495_0F78_0002_2597
 * @implements B495:0F78:0002:2597 ()
 *
 * Called From: B495:0F78:0008:43E5
 */
void f__B495_0F78_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F7A_000B_410C()
 *
 * @name f__B495_0F7A_000B_410C
 * @implements B495:0F7A:000B:410C ()
 *
 * Called From: B495:118D:0004:03BA
 * Called From: B495:156F:0007:9157
 */
void f__B495_0F7A_000B_410C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0F85); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F85_0024_33C2();
}

/**
 * Decompiled function f__B495_0F85_0024_33C2()
 *
 * @name f__B495_0F85_0024_33C2
 * @implements B495:0F85:0024:33C2 ()
 *
 * Called From: B495:0F85:000B:410C
 */
void f__B495_0F85_0024_33C2()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FA9); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0FA9_0008_43E5();
}

/**
 * Decompiled function f__B495_0FA9_0008_43E5()
 *
 * @name f__B495_0FA9_0008_43E5
 * @implements B495:0FA9:0008:43E5 ()
 *
 * Called From: B495:0FA9:0024:33C2
 */
void f__B495_0FA9_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FB1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0FB1_0009_C63E();
}

/**
 * Decompiled function f__B495_0FB1_0009_C63E()
 *
 * @name f__B495_0FB1_0009_C63E
 * @implements B495:0FB1:0009:C63E ()
 *
 * Called From: B495:0FB1:0008:43E5
 */
void f__B495_0FB1_0009_C63E()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FBA); f__B495_1230_001B_A160();
	f__B495_0FBA_0012_A9EF();
}

/**
 * Decompiled function f__B495_0FBA_0012_A9EF()
 *
 * @name f__B495_0FBA_0012_A9EF
 * @implements B495:0FBA:0012:A9EF ()
 *
 * Called From: B495:0FBA:0009:C63E
 */
void f__B495_0FBA_0012_A9EF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B495_0FCC_005C_8468(); return; }
	f__B495_104F_0025_696E(); return;
}

/**
 * Decompiled function f__B495_0FCC_005C_8468()
 *
 * @name f__B495_0FCC_005C_8468
 * @implements B495:0FCC:005C:8468 ()
 *
 * Called From: B495:0FC7:0012:A9EF
 */
void f__B495_0FCC_005C_8468()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (!emu_flags.zf) { f__B495_102D_001D_3294(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_movw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1028); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0xB495; emu_last_ip = 0x1023; emu_last_length = 0x005C; emu_last_crc = 0x8468; emu_call();
	/* Unresolved jump */ emu_ip = 0x1028; emu_last_cs = 0xB495; emu_last_ip = 0x1028; emu_last_length = 0x005C; emu_last_crc = 0x8468; emu_call();
}

/**
 * Decompiled function f__B495_102D_001D_3294()
 *
 * @name f__B495_102D_001D_3294
 * @implements B495:102D:001D:3294 ()
 *
 * Called From: B495:0FFC:005C:8468
 */
void f__B495_102D_001D_3294()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_104A_0005_91EE();
}

/**
 * Decompiled function f__B495_104A_0005_91EE()
 *
 * @name f__B495_104A_0005_91EE
 * @implements B495:104A:0005:91EE ()
 *
 * Called From: B495:104A:001D:3294
 */
void f__B495_104A_0005_91EE()
{
	emu_addw(&emu_sp, 0xE);
	f__B495_1077_0009_BD71(); return;
}

/**
 * Decompiled function f__B495_104F_0025_696E()
 *
 * @name f__B495_104F_0025_696E
 * @implements B495:104F:0025:696E ()
 *
 * Called From: B495:0FC9:0012:A9EF
 */
void f__B495_104F_0025_696E()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1074); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1074_000C_3159();
}

/**
 * Decompiled function f__B495_1074_000C_3159()
 *
 * @name f__B495_1074_000C_3159
 * @implements B495:1074:000C:3159 ()
 *
 * Called From: B495:1074:0025:696E
 */
void f__B495_1074_000C_3159()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1080); f__B495_1230_001B_A160();
	f__B495_1080_0012_A9EF();
}

/**
 * Decompiled function f__B495_1077_0009_BD71()
 *
 * @name f__B495_1077_0009_BD71
 * @implements B495:1077:0009:BD71 ()
 *
 * Called From: B495:104D:0005:91EE
 */
void f__B495_1077_0009_BD71()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1080); f__B495_1230_001B_A160();
	f__B495_1080_0012_A9EF();
}

/**
 * Decompiled function f__B495_1080_0012_A9EF()
 *
 * @name f__B495_1080_0012_A9EF
 * @implements B495:1080:0012:A9EF ()
 *
 * Called From: B495:1080:000C:3159
 * Called From: B495:1080:0009:BD71
 */
void f__B495_1080_0012_A9EF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B495_1092_005C_046A(); return; }
	f__B495_1115_0024_2AF0(); return;
}

/**
 * Decompiled function f__B495_1092_005C_046A()
 *
 * @name f__B495_1092_005C_046A
 * @implements B495:1092:005C:046A ()
 *
 * Called From: B495:108D:0012:A9EF
 */
void f__B495_1092_005C_046A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (!emu_flags.zf) { f__B495_10F3_001D_B296(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_movw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x10EE); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0xB495; emu_last_ip = 0x10E9; emu_last_length = 0x005C; emu_last_crc = 0x046A; emu_call();
	/* Unresolved jump */ emu_ip = 0x10EE; emu_last_cs = 0xB495; emu_last_ip = 0x10EE; emu_last_length = 0x005C; emu_last_crc = 0x046A; emu_call();
}

/**
 * Decompiled function f__B495_10F3_001D_B296()
 *
 * @name f__B495_10F3_001D_B296
 * @implements B495:10F3:001D:B296 ()
 *
 * Called From: B495:10C2:005C:046A
 */
void f__B495_10F3_001D_B296()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1110); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1110_0005_966E();
}

/**
 * Decompiled function f__B495_1110_0005_966E()
 *
 * @name f__B495_1110_0005_966E
 * @implements B495:1110:0005:966E ()
 *
 * Called From: B495:1110:001D:B296
 */
void f__B495_1110_0005_966E()
{
	emu_addw(&emu_sp, 0xE);
	f__B495_113C_0004_893F(); return;
}

/**
 * Decompiled function f__B495_1115_0024_2AF0()
 *
 * @name f__B495_1115_0024_2AF0
 * @implements B495:1115:0024:2AF0 ()
 *
 * Called From: B495:108F:0012:A9EF
 */
void f__B495_1115_0024_2AF0()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1139_0007_98BA();
}

/**
 * Decompiled function f__B495_1139_0007_98BA()
 *
 * @name f__B495_1139_0007_98BA
 * @implements B495:1139:0007:98BA ()
 *
 * Called From: B495:1139:0024:2AF0
 */
void f__B495_1139_0007_98BA()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_113C_0004_893F()
 *
 * @name f__B495_113C_0004_893F
 * @implements B495:113C:0004:893F ()
 *
 * Called From: B495:1113:0005:966E
 */
void f__B495_113C_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1140_0009_13F2()
 *
 * @name f__B495_1140_0009_13F2
 * @implements B495:1140:0009:13F2 ()
 *
 * Called From: B495:0170:0029:416B
 * Called From: B495:022A:0021:C120
 */
void f__B495_1140_0009_13F2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1149); f__B495_0F30_0008_857D();
	f__B495_1149_0008_DE28();
}

/**
 * Decompiled function f__B495_1149_0008_DE28()
 *
 * @name f__B495_1149_0008_DE28
 * @implements B495:1149:0008:DE28 ()
 *
 * Called From: B495:1149:0009:13F2
 */
void f__B495_1149_0008_DE28()
{
	emu_movw(&emu_di, 0x20);
	emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1151_0004_F879();
}

/**
 * Decompiled function f__B495_1151_0004_F879()
 *
 * @name f__B495_1151_0004_F879
 * @implements B495:1151:0004:F879 ()
 *
 * Called From: B495:1151:0008:DE28
 */
void f__B495_1151_0004_F879()
{
	emu_xorw(&emu_si, emu_si);
	f__B495_1182_000A_B929(); return;
}

/**
 * Decompiled function f__B495_1155_0029_6D47()
 *
 * @name f__B495_1155_0029_6D47
 * @implements B495:1155:0029:6D47 ()
 *
 * Called From: B495:1185:000A:B929
 * Called From: B495:1185:000E:5A2B
 */
void f__B495_1155_0029_6D47()
{
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x117E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1179; emu_last_length = 0x0029; emu_last_crc = 0x6D47;
			emu_call();
			return;
	}
	f__B495_117E_000E_5A2B();
}

/**
 * Decompiled function f__B495_117E_000E_5A2B()
 *
 * @name f__B495_117E_000E_5A2B
 * @implements B495:117E:000E:5A2B ()
 *
 * Called From: B495:117E:0029:6D47
 */
void f__B495_117E_000E_5A2B()
{
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1155_0029_6D47(); return; }
	emu_push(emu_cs); emu_push(0x118C); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_118C_0004_03BA();
}

/**
 * Decompiled function f__B495_1182_000A_B929()
 *
 * @name f__B495_1182_000A_B929
 * @implements B495:1182:000A:B929 ()
 *
 * Called From: B495:1153:0004:F879
 */
void f__B495_1182_000A_B929()
{
	emu_cmpw(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1155_0029_6D47(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x118C); emu_cs = 0x2B6C; emu_ip = 0x0169; emu_last_cs = 0xB495; emu_last_ip = 0x1187; emu_last_length = 0x000A; emu_last_crc = 0xB929; emu_call();
	f__B495_118C_0004_03BA();
}

/**
 * Decompiled function f__B495_118C_0004_03BA()
 *
 * @name f__B495_118C_0004_03BA
 * @implements B495:118C:0004:03BA ()
 *
 * Called From: B495:118C:000E:5A2B
 */
void f__B495_118C_0004_03BA()
{
	emu_push(emu_cs);
	emu_push(0x1190); f__B495_0F7A_000B_410C();
	f__B495_1190_0008_798E();
}

/**
 * Decompiled function f__B495_1190_0008_798E()
 *
 * @name f__B495_1190_0008_798E
 * @implements B495:1190:0008:798E ()
 *
 * Called From: B495:1190:0004:03BA
 */
void f__B495_1190_0008_798E()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1198); f__B495_0DC9_0010_C643();
	f__B495_1198_0005_DC9A();
}

/**
 * Decompiled function f__B495_1198_0005_DC9A()
 *
 * @name f__B495_1198_0005_DC9A
 * @implements B495:1198:0005:DC9A ()
 *
 * Called From: B495:1198:0008:798E
 */
void f__B495_1198_0005_DC9A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_119D_0009_53E9()
 *
 * @name f__B495_119D_0009_53E9
 * @implements B495:119D:0009:53E9 ()
 *
 * Called From: B495:018D:0009:F0DE
 * Called From: B495:024A:0009:BF49
 */
void f__B495_119D_0009_53E9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x11A6); f__B495_0F30_0008_857D();
	f__B495_11A6_0008_DE28();
}

/**
 * Decompiled function f__B495_11A6_0008_DE28()
 *
 * @name f__B495_11A6_0008_DE28
 * @implements B495:11A6:0008:DE28 ()
 *
 * Called From: B495:11A6:0009:53E9
 */
void f__B495_11A6_0008_DE28()
{
	emu_movw(&emu_di, 0x20);
	emu_push(emu_cs); emu_push(0x11AE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_11AE_0004_039F();
}

/**
 * Decompiled function f__B495_11AE_0004_039F()
 *
 * @name f__B495_11AE_0004_039F
 * @implements B495:11AE:0004:039F ()
 *
 * Called From: B495:11AE:0008:DE28
 */
void f__B495_11AE_0004_039F()
{
	emu_push(emu_cs);
	emu_push(0x11B2); f__B495_0F30_0008_857D();
	f__B495_11B2_0004_F879();
}

/**
 * Decompiled function f__B495_11B2_0004_F879()
 *
 * @name f__B495_11B2_0004_F879
 * @implements B495:11B2:0004:F879 ()
 *
 * Called From: B495:11B2:0004:039F
 */
void f__B495_11B2_0004_F879()
{
	emu_xorw(&emu_si, emu_si);
	f__B495_11E3_0009_7045(); return;
}

/**
 * Decompiled function f__B495_11B6_0029_6D47()
 *
 * @name f__B495_11B6_0029_6D47
 * @implements B495:11B6:0029:6D47 ()
 *
 * Called From: B495:11E6:0009:7045
 * Called From: B495:11E6:000D:7583
 */
void f__B495_11B6_0029_6D47()
{
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x11DF);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x11DA; emu_last_length = 0x0029; emu_last_crc = 0x6D47;
			emu_call();
			return;
	}
	f__B495_11DF_000D_7583();
}

/**
 * Decompiled function f__B495_11DF_000D_7583()
 *
 * @name f__B495_11DF_000D_7583
 * @implements B495:11DF:000D:7583 ()
 *
 * Called From: B495:11DF:0029:6D47
 */
void f__B495_11DF_000D_7583()
{
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11B6_0029_6D47(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B495_1219_000A_9F29(); return;
}

/**
 * Decompiled function f__B495_11E3_0009_7045()
 *
 * @name f__B495_11E3_0009_7045
 * @implements B495:11E3:0009:7045 ()
 *
 * Called From: B495:11B4:0004:F879
 */
void f__B495_11E3_0009_7045()
{
	emu_cmpw(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11B6_0029_6D47(); return; }
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB495; emu_last_ip = 0x11EA; emu_last_length = 0x0009; emu_last_crc = 0x7045; emu_call();
}

/**
 * Decompiled function f__B495_11EC_0029_6D53()
 *
 * @name f__B495_11EC_0029_6D53
 * @implements B495:11EC:0029:6D53 ()
 *
 * Called From: B495:121C:000A:9F29
 * Called From: B495:121C:000E:7C2B
 */
void f__B495_11EC_0029_6D53()
{
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x1215);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_5E0A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1210; emu_last_length = 0x0029; emu_last_crc = 0x6D53;
			emu_call();
			return;
	}
	f__B495_1215_000E_7C2B();
}

/**
 * Decompiled function f__B495_1215_000E_7C2B()
 *
 * @name f__B495_1215_000E_7C2B
 * @implements B495:1215:000E:7C2B ()
 *
 * Called From: B495:1215:0029:6D53
 */
void f__B495_1215_000E_7C2B()
{
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11EC_0029_6D53(); return; }
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1223_0008_BA25();
}

/**
 * Decompiled function f__B495_1219_000A_9F29()
 *
 * @name f__B495_1219_000A_9F29
 * @implements B495:1219:000A:9F29 ()
 *
 * Called From: B495:11EA:000D:7583
 */
void f__B495_1219_000A_9F29()
{
	emu_cmpw(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11EC_0029_6D53(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x2B6C; emu_ip = 0x0169; emu_last_cs = 0xB495; emu_last_ip = 0x121E; emu_last_length = 0x000A; emu_last_crc = 0x9F29; emu_call();
	f__B495_1223_0008_BA25();
}

/**
 * Decompiled function f__B495_1223_0008_BA25()
 *
 * @name f__B495_1223_0008_BA25
 * @implements B495:1223:0008:BA25 ()
 *
 * Called From: B495:1223:000E:7C2B
 */
void f__B495_1223_0008_BA25()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x122B); f__B495_0DC9_0010_C643();
	f__B495_122B_0005_DC9A();
}

/**
 * Decompiled function f__B495_122B_0005_DC9A()
 *
 * @name f__B495_122B_0005_DC9A
 * @implements B495:122B:0005:DC9A ()
 *
 * Called From: B495:122B:0008:BA25
 */
void f__B495_122B_0005_DC9A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1230_001B_A160()
 *
 * @name f__B495_1230_001B_A160
 * @implements B495:1230:001B:A160 ()
 *
 * Called From: B495:02CB:0009:351E
 * Called From: B495:08A8:0011:B26C
 * Called From: B495:0C29:0009:B187
 * Called From: B495:0FB7:0009:C63E
 * Called From: B495:107D:000C:3159
 * Called From: B495:107D:0009:BD71
 * Called From: B495:13F7:0005:00BD
 */
void f__B495_1230_001B_A160()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FB8));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_ax);
	emu_orw(&emu_bx, emu_bx);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1245_0006_25A9(); return; }
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	if ((emu_flags.sf != emu_flags.of)) { f__B495_124B_000E_7B97(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B495_1259_0002_2597(); return;
}

/**
 * Decompiled function f__B495_1245_0006_25A9()
 *
 * @name f__B495_1245_0006_25A9
 * @implements B495:1245:0006:25A9 ()
 *
 * Called From: B495:123D:001B:A160
 */
void f__B495_1245_0006_25A9()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B495_1259_0002_2597(); return;
}

/**
 * Decompiled function f__B495_1249_0002_C73A()
 *
 * @name f__B495_1249_0002_C73A
 * @implements B495:1249:0002:C73A ()
 *
 * Called From: B495:1257:000E:7B97
 */
void f__B495_1249_0002_C73A()
{
	f__B495_1259_0002_2597(); return;
}

/**
 * Decompiled function f__B495_124B_000E_7B97()
 *
 * @name f__B495_124B_000E_7B97
 * @implements B495:124B:000E:7B97 ()
 *
 * Called From: B495:1243:001B:A160
 */
void f__B495_124B_000E_7B97()
{
	emu_movw(&emu_ax, emu_bx);
	emu_movw(&emu_dx, 0xB);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_ds);
	emu_addw(&emu_ax, 0x8BEA);
	f__B495_1249_0002_C73A(); return;
}

/**
 * Decompiled function f__B495_1259_0002_2597()
 *
 * @name f__B495_1259_0002_2597
 * @implements B495:1259:0002:2597 ()
 *
 * Called From: B495:1249:0002:C73A
 * Called From: B495:1249:001B:A160
 * Called From: B495:1249:0006:25A9
 */
void f__B495_1259_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_125B_0011_10C0()
 *
 * @name f__B495_125B_0011_10C0
 * @implements B495:125B:0011:10C0 ()
 *
 * Called From: B495:004B:0009:4120
 */
void f__B495_125B_0011_10C0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x126C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_126C_0020_F6F3();
}

/**
 * Decompiled function f__B495_126C_0020_F6F3()
 *
 * @name f__B495_126C_0020_F6F3
 * @implements B495:126C:0020:F6F3 ()
 *
 * Called From: B495:126C:0011:10C0
 */
void f__B495_126C_0020_F6F3()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
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
	emu_movw(&emu_ax, 0x188E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x128C); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_128C_0022_8F4B();
}

/**
 * Decompiled function f__B495_128C_0022_8F4B()
 *
 * @name f__B495_128C_0022_8F4B
 * @implements B495:128C:0022:8F4B ()
 *
 * Called From: B495:128C:0020:F6F3
 */
void f__B495_128C_0022_8F4B()
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
	emu_push(emu_cs); emu_push(0x12AE); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_12AE_0028_4959();
}

/**
 * Decompiled function f__B495_12AE_0028_4959()
 *
 * @name f__B495_12AE_0028_4959
 * @implements B495:12AE:0028:4959 ()
 *
 * Called From: B495:12AE:0022:8F4B
 */
void f__B495_12AE_0028_4959()
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
	emu_push(emu_cs); emu_push(0x12D6); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_12D6_004C_6411();
}

/**
 * Decompiled function f__B495_12D6_004C_6411()
 *
 * @name f__B495_12D6_004C_6411
 * @implements B495:12D6:004C:6411 ()
 *
 * Called From: B495:12D6:0028:4959
 */
void f__B495_12D6_004C_6411()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2C34);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB6));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2C34);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB7));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1322); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1322_0023_03CB();
}

/**
 * Decompiled function f__B495_1322_0023_03CB()
 *
 * @name f__B495_1322_0023_03CB
 * @implements B495:1322:0023:03CB ()
 *
 * Called From: B495:1322:004C:6411
 */
void f__B495_1322_0023_03CB()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x98);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1345); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1345_001A_D69A();
}

/**
 * Decompiled function f__B495_1345_001A_D69A()
 *
 * @name f__B495_1345_001A_D69A
 * @implements B495:1345:001A:D69A ()
 *
 * Called From: B495:1345:0023:03CB
 */
void f__B495_1345_001A_D69A()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FA8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FA6), emu_dx);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x135F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_135F_000D_4B46();
}

/**
 * Decompiled function f__B495_135F_000D_4B46()
 *
 * @name f__B495_135F_000D_4B46
 * @implements B495:135F:000D:4B46 ()
 *
 * Called From: B495:135F:001A:D69A
 */
void f__B495_135F_000D_4B46()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FB4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FB2), emu_ax);
	emu_push(emu_cs);
	emu_push(0x136C); f__B495_159D_0027_1B29();
	f__B495_136C_002C_681F();
}

/**
 * Decompiled function f__B495_136C_002C_681F()
 *
 * @name f__B495_136C_002C_681F
 * @implements B495:136C:002C:681F ()
 *
 * Called From: B495:136C:000D:4B46
 */
void f__B495_136C_002C_681F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x7FA6), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x7FA8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FB4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7FB2));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FAC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FAA), emu_dx);
	emu_push(emu_cs);
	emu_push(0x1398); f__B495_1A29_0012_DF2C();
	f__B495_1398_002A_E9C6();
}

/**
 * Decompiled function f__B495_1398_002A_E9C6()
 *
 * @name f__B495_1398_002A_E9C6
 * @implements B495:1398:002A:E9C6 ()
 *
 * Called From: B495:1398:002C:681F
 */
void f__B495_1398_002A_E9C6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FB0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FAE), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x7FA6), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x7FA8), emu_ax);
	emu_push(emu_cs);
	emu_push(0x13C2); f__B495_17E6_002B_0A6D();
	f__B495_13C2_0006_5263();
}

/**
 * Decompiled function f__B495_13C2_0006_5263()
 *
 * @name f__B495_13C2_0006_5263
 * @implements B495:13C2:0006:5263 ()
 *
 * Called From: B495:13C2:002A:E9C6
 */
void f__B495_13C2_0006_5263()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	f__B495_13E8_000D_4B26(); return;
}

/**
 * Decompiled function f__B495_13C8_0013_93C6()
 *
 * @name f__B495_13C8_0013_93C6
 * @implements B495:13C8:0013:93C6 ()
 *
 * Called From: B495:13EB:000D:4B26
 * Called From: B495:13EB:0010:F867
 */
void f__B495_13C8_0013_93C6()
{
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x2E);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x13DB); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_13DB_000A_E8F7();
}

/**
 * Decompiled function f__B495_13DB_000A_E8F7()
 *
 * @name f__B495_13DB_000A_E8F7
 * @implements B495:13DB:000A:E8F7 ()
 *
 * Called From: B495:13DB:0013:93C6
 */
void f__B495_13DB_000A_E8F7()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13E5); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_13E5_0010_F867();
}

/**
 * Decompiled function f__B495_13E5_0010_F867()
 *
 * @name f__B495_13E5_0010_F867
 * @implements B495:13E5:0010:F867 ()
 *
 * Called From: B495:13E5:000A:E8F7
 */
void f__B495_13E5_0010_F867()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_13C8_0013_93C6(); return; }
	emu_movw(&emu_di, 0x18);
	emu_xorw(&emu_si, emu_si);
	f__B495_1497_0008_43A1(); return;
}

/**
 * Decompiled function f__B495_13E8_000D_4B26()
 *
 * @name f__B495_13E8_000D_4B26
 * @implements B495:13E8:000D:4B26 ()
 *
 * Called From: B495:13C6:0006:5263
 */
void f__B495_13E8_000D_4B26()
{
	emu_cmpw(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_13C8_0013_93C6(); return; }
	emu_movw(&emu_di, 0x18);
	emu_xorw(&emu_si, emu_si);
	f__B495_1497_0008_43A1(); return;
}

/**
 * Decompiled function f__B495_13F5_0005_00BD()
 *
 * @name f__B495_13F5_0005_00BD
 * @implements B495:13F5:0005:00BD ()
 *
 * Called From: B495:149C:0008:43A1
 * Called From: B495:149C:000F:D6BB
 * Called From: B495:149C:000C:A3AA
 */
void f__B495_13F5_0005_00BD()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x13FA); f__B495_1230_001B_A160();
	f__B495_13FA_0012_8CC7();
}

/**
 * Decompiled function f__B495_13FA_0012_8CC7()
 *
 * @name f__B495_13FA_0012_8CC7
 * @implements B495:13FA:0012:8CC7 ()
 *
 * Called From: B495:13FA:0005:00BD
 */
void f__B495_13FA_0012_8CC7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__B495_140C_004D_AD7F(); return; }
	f__B495_1493_000C_A3AA(); return;
}

/**
 * Decompiled function f__B495_140C_004D_AD7F()
 *
 * @name f__B495_140C_004D_AD7F
 * @implements B495:140C:004D:AD7F ()
 *
 * Called From: B495:1407:0012:8CC7
 */
void f__B495_140C_004D_AD7F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (!emu_flags.zf) { f__B495_145E_0032_F13D(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_movw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1459); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1459_0005_9C2E();
}

/**
 * Decompiled function f__B495_1459_0005_9C2E()
 *
 * @name f__B495_1459_0005_9C2E
 * @implements B495:1459:0005:9C2E ()
 *
 * Called From: B495:1459:004D:AD7F
 */
void f__B495_1459_0005_9C2E()
{
	emu_addw(&emu_sp, 0x14);
	f__B495_1493_000C_A3AA(); return;
}

/**
 * Decompiled function f__B495_145E_0032_F13D()
 *
 * @name f__B495_145E_0032_F13D
 * @implements B495:145E:0032:F13D ()
 *
 * Called From: B495:1418:004D:AD7F
 */
void f__B495_145E_0032_F13D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1490); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1490_000F_D6BB();
}

/**
 * Decompiled function f__B495_1490_000F_D6BB()
 *
 * @name f__B495_1490_000F_D6BB
 * @implements B495:1490:000F:D6BB ()
 *
 * Called From: B495:1490:0032:F13D
 */
void f__B495_1490_000F_D6BB()
{
	emu_addw(&emu_sp, 0xE);
	emu_addw(&emu_di, 0x20);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_149F_0036_9C55(); return; }
	f__B495_13F5_0005_00BD(); return;
}

/**
 * Decompiled function f__B495_1493_000C_A3AA()
 *
 * @name f__B495_1493_000C_A3AA
 * @implements B495:1493:000C:A3AA ()
 *
 * Called From: B495:1409:0012:8CC7
 * Called From: B495:145C:0005:9C2E
 */
void f__B495_1493_000C_A3AA()
{
	emu_addw(&emu_di, 0x20);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_149F_0036_9C55(); return; }
	f__B495_13F5_0005_00BD(); return;
}

/**
 * Decompiled function f__B495_1497_0008_43A1()
 *
 * @name f__B495_1497_0008_43A1
 * @implements B495:1497:0008:43A1 ()
 *
 * Called From: B495:13F2:0010:F867
 * Called From: B495:13F2:000D:4B26
 */
void f__B495_1497_0008_43A1()
{
	emu_cmpw(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x149F; emu_last_cs = 0xB495; emu_last_ip = 0x149A; emu_last_length = 0x0008; emu_last_crc = 0x43A1; emu_call(); return; }
	f__B495_13F5_0005_00BD(); return;
}

/**
 * Decompiled function f__B495_149F_0036_9C55()
 *
 * @name f__B495_149F_0036_9C55
 * @implements B495:149F:0036:9C55 ()
 *
 * Called From: B495:149A:000C:A3AA
 * Called From: B495:149A:000F:D6BB
 */
void f__B495_149F_0036_9C55()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FB0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8BF1));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs); emu_push(0x14D5); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_14D5_0026_33F4();
}

/**
 * Decompiled function f__B495_14D5_0026_33F4()
 *
 * @name f__B495_14D5_0026_33F4
 * @implements B495:14D5:0026:33F4 ()
 *
 * Called From: B495:14D5:0036:9C55
 */
void f__B495_14D5_0026_33F4()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x14FB); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_14FB_000E_1EBD();
}

/**
 * Decompiled function f__B495_14FB_000E_1EBD()
 *
 * @name f__B495_14FB_000E_1EBD
 * @implements B495:14FB:000E:1EBD ()
 *
 * Called From: B495:14FB:0026:33F4
 */
void f__B495_14FB_000E_1EBD()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1509); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1509_0007_05DB();
}

/**
 * Decompiled function f__B495_1509_0007_05DB()
 *
 * @name f__B495_1509_0007_05DB
 * @implements B495:1509:0007:05DB ()
 *
 * Called From: B495:1509:000E:1EBD
 */
void f__B495_1509_0007_05DB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1510); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1510_0020_001D();
}

/**
 * Decompiled function f__B495_1510_0020_001D()
 *
 * @name f__B495_1510_0020_001D
 * @implements B495:1510:0020:001D ()
 *
 * Called From: B495:1510:0007:05DB
 */
void f__B495_1510_0020_001D()
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
	emu_push(emu_cs); emu_push(0x1530); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1530_0008_43E5();
}

/**
 * Decompiled function f__B495_1530_0008_43E5()
 *
 * @name f__B495_1530_0008_43E5
 * @implements B495:1530:0008:43E5 ()
 *
 * Called From: B495:1530:0020:001D
 */
void f__B495_1530_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1538); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1538_0012_B2A2();
}

/**
 * Decompiled function f__B495_1538_0012_B2A2()
 *
 * @name f__B495_1538_0012_B2A2
 * @implements B495:1538:0012:B2A2 ()
 *
 * Called From: B495:1538:0008:43E5
 */
void f__B495_1538_0012_B2A2()
{
	emu_movw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x48);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666E);
	emu_push(0x154A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_E39A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1545; emu_last_length = 0x0012; emu_last_crc = 0xB2A2;
			emu_call();
			return;
	}
	f__B495_154A_0021_6CFA();
}

/**
 * Decompiled function f__B495_154A_0021_6CFA()
 *
 * @name f__B495_154A_0021_6CFA
 * @implements B495:154A:0021:6CFA ()
 *
 * Called From: B495:154A:0012:B2A2
 */
void f__B495_154A_0021_6CFA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0xC7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x70);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x156B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1566; emu_last_length = 0x0021; emu_last_crc = 0x6CFA;
			emu_call();
			return;
	}
	f__B495_156B_0007_9157();
}

/**
 * Decompiled function f__B495_156B_0007_9157()
 *
 * @name f__B495_156B_0007_9157
 * @implements B495:156B:0007:9157 ()
 *
 * Called From: B495:156B:0021:6CFA
 */
void f__B495_156B_0007_9157()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs);
	emu_push(0x1572); f__B495_0F7A_000B_410C();
	f__B495_1572_0008_64F7();
}

/**
 * Decompiled function f__B495_1572_0008_64F7()
 *
 * @name f__B495_1572_0008_64F7
 * @implements B495:1572:0008:64F7 ()
 *
 * Called From: B495:1572:0007:9157
 */
void f__B495_1572_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x157A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_157A_0005_464E();
}

/**
 * Decompiled function f__B495_157A_0005_464E()
 *
 * @name f__B495_157A_0005_464E
 * @implements B495:157A:0005:464E ()
 *
 * Called From: B495:157A:0008:64F7
 */
void f__B495_157A_0005_464E()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x157F); f__B495_089A_0011_B26C();
	f__B495_157F_000D_D634();
}

/**
 * Decompiled function f__B495_157F_000D_D634()
 *
 * @name f__B495_157F_000D_D634
 * @implements B495:157F:000D:D634 ()
 *
 * Called From: B495:157F:0005:464E
 */
void f__B495_157F_000D_D634()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x158C); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_158C_000A_97F5();
}

/**
 * Decompiled function f__B495_158C_000A_97F5()
 *
 * @name f__B495_158C_000A_97F5
 * @implements B495:158C:000A:97F5 ()
 *
 * Called From: B495:158C:000D:D634
 */
void f__B495_158C_000A_97F5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1596); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1596_0007_F77C();
}

/**
 * Decompiled function f__B495_1596_0007_F77C()
 *
 * @name f__B495_1596_0007_F77C
 * @implements B495:1596:0007:F77C ()
 *
 * Called From: B495:1596:000A:97F5
 */
void f__B495_1596_0007_F77C()
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
 * Decompiled function f__B495_159D_0027_1B29()
 *
 * @name f__B495_159D_0027_1B29
 * @implements B495:159D:0027:1B29 ()
 *
 * Called From: B495:1369:000D:4B46
 */
void f__B495_159D_0027_1B29()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FB4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7FB2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, 0x30C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x15C4); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_15C4_0022_CA3D();
}

/**
 * Decompiled function f__B495_15C4_0022_CA3D()
 *
 * @name f__B495_15C4_0022_CA3D
 * @implements B495:15C4:0022:CA3D ()
 *
 * Called From: B495:15C4:0027:1B29
 */
void f__B495_15C4_0022_CA3D()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2C34);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15E6); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_15E6_000C_12E0();
}

/**
 * Decompiled function f__B495_15E6_000C_12E0()
 *
 * @name f__B495_15E6_000C_12E0
 * @implements B495:15E6:000C:12E0 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B495_15E6_000C_12E0()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_di, emu_ax);
	f__B495_17C0_0008_674E(); return;
}

/**
 * Decompiled function f__B495_15F2_004B_9877()
 *
 * @name f__B495_15F2_004B_9877
 * @implements B495:15F2:004B:9877 ()
 *
 * Called From: B495:17C5:0008:674E
 * Called From: B495:17C5:001E:BE3A
 * Called From: B495:17C5:0011:1844
 * Called From: B495:17C5:000D:A173
 */
void f__B495_15F2_004B_9877()
{
	emu_cmpw(&emu_si, 0xC);
	if (!emu_flags.zf) { f__B495_15FE_003F_AACD(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_9DBF(); return; }
	emu_cmpw(&emu_si, 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x160A; emu_last_cs = 0xB495; emu_last_ip = 0x1601; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1608; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_si, 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1616; emu_last_cs = 0xB495; emu_last_ip = 0x160D; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1614; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_si, 0x9);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1622; emu_last_cs = 0xB495; emu_last_ip = 0x1619; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1620; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_si, 0xA);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_si, 0x7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x004B; emu_last_crc = 0x9877; emu_call();
}

/**
 * Decompiled function f__B495_15FE_003F_AACD()
 *
 * @name f__B495_15FE_003F_AACD
 * @implements B495:15FE:003F:AACD ()
 *
 * Called From: B495:15F5:004B:9877
 */
void f__B495_15FE_003F_AACD()
{
	emu_cmpw(&emu_si, 0xB);
	if (!emu_flags.zf) { f__B495_160A_0033_F1EE(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1608; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_si, 0x8);
	if (!emu_flags.zf) { f__B495_1616_0027_51DC(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1614; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_si, 0x9);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1622; emu_last_cs = 0xB495; emu_last_ip = 0x1619; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1620; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_si, 0xA);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_si, 0x7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x003F; emu_last_crc = 0xAACD; emu_call();
}

/**
 * Decompiled function f__B495_160A_0033_F1EE()
 *
 * @name f__B495_160A_0033_F1EE
 * @implements B495:160A:0033:F1EE ()
 *
 * Called From: B495:1601:003F:AACD
 */
void f__B495_160A_0033_F1EE()
{
	emu_cmpw(&emu_si, 0x8);
	if (!emu_flags.zf) { f__B495_1616_0027_51DC(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_9DBF(); return; }
	emu_cmpw(&emu_si, 0x9);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1622; emu_last_cs = 0xB495; emu_last_ip = 0x1619; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1620; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call(); return; }
	emu_cmpw(&emu_si, 0xA);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call(); return; }
	emu_cmpw(&emu_si, 0x7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x0033; emu_last_crc = 0xF1EE; emu_call();
}

/**
 * Decompiled function f__B495_1616_0027_51DC()
 *
 * @name f__B495_1616_0027_51DC
 * @implements B495:1616:0027:51DC ()
 *
 * Called From: B495:160D:0033:F1EE
 * Called From: B495:160D:003F:AACD
 */
void f__B495_1616_0027_51DC()
{
	emu_cmpw(&emu_si, 0x9);
	if (!emu_flags.zf) { f__B495_1622_001B_7817(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_9DBF(); return; }
	emu_cmpw(&emu_si, 0xA);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x0027; emu_last_crc = 0x51DC; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x0027; emu_last_crc = 0x51DC; emu_call(); return; }
	emu_cmpw(&emu_si, 0x7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x0027; emu_last_crc = 0x51DC; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x0027; emu_last_crc = 0x51DC; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x0027; emu_last_crc = 0x51DC; emu_call();
}

/**
 * Decompiled function f__B495_1622_001B_7817()
 *
 * @name f__B495_1622_001B_7817
 * @implements B495:1622:001B:7817 ()
 *
 * Called From: B495:1619:0027:51DC
 */
void f__B495_1622_001B_7817()
{
	emu_cmpw(&emu_si, 0xA);
	if (!emu_flags.zf) { f__B495_162E_000F_4A9E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_9DBF(); return; }
	emu_cmpw(&emu_si, 0x7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x001B; emu_last_crc = 0x7817; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x001B; emu_last_crc = 0x7817; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x001B; emu_last_crc = 0x7817; emu_call();
}

/**
 * Decompiled function f__B495_162E_000F_4A9E()
 *
 * @name f__B495_162E_000F_4A9E
 * @implements B495:162E:000F:4A9E ()
 *
 * Called From: B495:1625:001B:7817
 */
void f__B495_162E_000F_4A9E()
{
	emu_cmpw(&emu_si, 0x7);
	if (!emu_flags.zf) { f__B495_163D_005C_C51C(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (!emu_flags.zf) { f__B495_163D_005C_C51C(); return; }
	f__B495_17BB_000D_A173(); return;
}

/**
 * Decompiled function f__B495_163A_0003_9DBF()
 *
 * @name f__B495_163A_0003_9DBF
 * @implements B495:163A:0003:9DBF ()
 *
 * Called From: B495:15FC:004B:9877
 * Called From: B495:1614:0033:F1EE
 * Called From: B495:1620:0027:51DC
 * Called From: B495:162C:001B:7817
 */
void f__B495_163A_0003_9DBF()
{
	f__B495_17BB_000D_A173(); return;
}

/**
 * Decompiled function f__B495_163D_005C_C51C()
 *
 * @name f__B495_163D_005C_C51C
 * @implements B495:163D:005C:C51C ()
 *
 * Called From: B495:1631:000F:4A9E
 * Called From: B495:1638:000F:4A9E
 */
void f__B495_163D_005C_C51C()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x2E);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1));
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x20), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_1699_000C_26D1(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_negw(&emu_ax, emu_ax);
	f__B495_16B5_0065_FD28(); return;
}

/**
 * Decompiled function f__B495_1699_000C_26D1()
 *
 * @name f__B495_1699_000C_26D1
 * @implements B495:1699:000C:26D1 ()
 *
 * Called From: B495:168C:005C:C51C
 */
void f__B495_1699_000C_26D1()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x16A5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_16A5_000F_E74D();
}

/**
 * Decompiled function f__B495_16A5_000F_E74D()
 *
 * @name f__B495_16A5_000F_E74D
 * @implements B495:16A5:000F:E74D ()
 *
 * Called From: B495:16A5:000C:26D1
 */
void f__B495_16A5_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_16B4_0066_9929();
}

/**
 * Decompiled function f__B495_16B4_0066_9929()
 *
 * @name f__B495_16B4_0066_9929
 * @implements B495:16B4:0066:9929 ()
 *
 * Called From: B495:16B4:000F:E74D
 */
void f__B495_16B4_0066_9929()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x32), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x30), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4));
	emu_movb(&emu_ah, 0x0);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x5));
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x24), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0xFFFF);
	if (!emu_flags.zf) { f__B495_171A_0084_7025(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xC), 0x0);
	/* Unresolved jump */ emu_ip = 0x1787; emu_last_cs = 0xB495; emu_last_ip = 0x1718; emu_last_length = 0x0066; emu_last_crc = 0x9929; emu_call();
}

/**
 * Decompiled function f__B495_16B5_0065_FD28()
 *
 * @name f__B495_16B5_0065_FD28
 * @implements B495:16B5:0065:FD28 ()
 *
 * Called From: B495:1697:005C:C51C
 */
void f__B495_16B5_0065_FD28()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x32), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x30), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4));
	emu_movb(&emu_ah, 0x0);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x5));
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x24), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0xFFFF);
	if (!emu_flags.zf) { f__B495_171A_0084_7025(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xC), 0x0);
	f__B495_1787_0017_D53F(); return;
}

/**
 * Decompiled function f__B495_171A_0084_7025()
 *
 * @name f__B495_171A_0084_7025
 * @implements B495:171A:0084:7025 ()
 *
 * Called From: B495:16FE:0065:FD28
 * Called From: B495:16FE:0066:9929
 */
void f__B495_171A_0084_7025()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xC), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x446));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x444));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x18), emu_dx);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17AA; emu_last_cs = 0xB495; emu_last_ip = 0x1789; emu_last_length = 0x0084; emu_last_crc = 0x7025; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x179E); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_179E_000C_0D6D();
}

/**
 * Decompiled function f__B495_1787_0017_D53F()
 *
 * @name f__B495_1787_0017_D53F
 * @implements B495:1787:0017:D53F ()
 *
 * Called From: B495:1718:0065:FD28
 */
void f__B495_1787_0017_D53F()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B495_17AA_001E_BE3A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x179E); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_179E_000C_0D6D();
}

/**
 * Decompiled function f__B495_179E_000C_0D6D()
 *
 * @name f__B495_179E_000C_0D6D
 * @implements B495:179E:000C:0D6D ()
 *
 * Called From: B495:179E:0017:D53F
 * Called From: B495:179E:0084:7025
 */
void f__B495_179E_000C_0D6D()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FA4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FA2), emu_ax);
	f__B495_17B7_0011_1844(); return;
}

/**
 * Decompiled function f__B495_17AA_001E_BE3A()
 *
 * @name f__B495_17AA_001E_BE3A
 * @implements B495:17AA:001E:BE3A ()
 *
 * Called From: B495:1789:0017:D53F
 */
void f__B495_17AA_001E_BE3A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FA4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FA2), emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	emu_cmpw(&emu_si, 0xD);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x17C8; emu_last_cs = 0xB495; emu_last_ip = 0x17C3; emu_last_length = 0x001E; emu_last_crc = 0xBE3A; emu_call(); return; }
	f__B495_15F2_004B_9877(); return;
}

/**
 * Decompiled function f__B495_17B7_0011_1844()
 *
 * @name f__B495_17B7_0011_1844
 * @implements B495:17B7:0011:1844 ()
 *
 * Called From: B495:17A8:000C:0D6D
 */
void f__B495_17B7_0011_1844()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	emu_cmpw(&emu_si, 0xD);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x17C8; emu_last_cs = 0xB495; emu_last_ip = 0x17C3; emu_last_length = 0x0011; emu_last_crc = 0x1844; emu_call(); return; }
	f__B495_15F2_004B_9877(); return;
}

/**
 * Decompiled function f__B495_17BB_000D_A173()
 *
 * @name f__B495_17BB_000D_A173
 * @implements B495:17BB:000D:A173 ()
 *
 * Called From: B495:163A:000F:4A9E
 * Called From: B495:163A:0003:9DBF
 */
void f__B495_17BB_000D_A173()
{
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	emu_cmpw(&emu_si, 0xD);
	if (!emu_flags.cf) { f__B495_17C8_000D_C17F(); return; }
	f__B495_15F2_004B_9877(); return;
}

/**
 * Decompiled function f__B495_17C0_0008_674E()
 *
 * @name f__B495_17C0_0008_674E
 * @implements B495:17C0:0008:674E ()
 *
 * Called From: B495:15EF:000C:12E0
 */
void f__B495_17C0_0008_674E()
{
	emu_cmpw(&emu_si, 0xD);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x17C8; emu_last_cs = 0xB495; emu_last_ip = 0x17C3; emu_last_length = 0x0008; emu_last_crc = 0x674E; emu_call(); return; }
	f__B495_15F2_004B_9877(); return;
}

/**
 * Decompiled function f__B495_17C8_000D_C17F()
 *
 * @name f__B495_17C8_000D_C17F
 * @implements B495:17C8:000D:C17F ()
 *
 * Called From: B495:17C3:000D:A173
 */
void f__B495_17C8_000D_C17F()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x17D5); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_17D5_000B_2D0F();
}

/**
 * Decompiled function f__B495_17D5_000B_2D0F()
 *
 * @name f__B495_17D5_000B_2D0F
 * @implements B495:17D5:000B:2D0F ()
 *
 * Called From: B495:17D5:000D:C17F
 */
void f__B495_17D5_000B_2D0F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0x3C);
	emu_imuluw(&emu_ax, emu_dx);
	f__B495_17E0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B495_17E0_0006_F7CE()
 *
 * @name f__B495_17E0_0006_F7CE
 * @implements B495:17E0:0006:F7CE ()
 *
 * Called From: B495:17DE:000B:2D0F
 */
void f__B495_17E0_0006_F7CE()
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
 * Decompiled function f__B495_17E6_002B_0A6D()
 *
 * @name f__B495_17E6_002B_0A6D
 * @implements B495:17E6:002B:0A6D ()
 *
 * Called From: B495:13BF:002A:E9C6
 */
void f__B495_17E6_002B_0A6D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8), 0x0);
	emu_movw(&emu_ax, 0x113);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8BEA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1811_002F_FBC1();
}

/**
 * Decompiled function f__B495_1811_002F_FBC1()
 *
 * @name f__B495_1811_002F_FBC1
 * @implements B495:1811:002F:FBC1 ()
 *
 * Called From: B495:1811:002B:0A6D
 */
void f__B495_1811_002F_FBC1()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8BEA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_187A_0015_1B58(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3C);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38AC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38AE));
	emu_push(emu_ax);
	emu_push(emu_dx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1840); emu_cs = 0x01F7; emu_ip = 0x04E0; emu_last_cs = 0xB495; emu_last_ip = 0x183B; emu_last_length = 0x002F; emu_last_crc = 0xFBC1; emu_call();
	/* Unresolved jump */ emu_ip = 0x1840; emu_last_cs = 0xB495; emu_last_ip = 0x1840; emu_last_length = 0x002F; emu_last_crc = 0xFBC1; emu_call();
}

/**
 * Decompiled function f__B495_187A_0015_1B58()
 *
 * @name f__B495_187A_0015_1B58
 * @implements B495:187A:0015:1B58 ()
 *
 * Called From: B495:1821:002F:FBC1
 */
void f__B495_187A_0015_1B58()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), 0x0);
	if (!emu_flags.zf) { f__B495_18F7_000E_9846(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B495_18F0_0007_D2A0(); return;
}

/**
 * Decompiled function f__B495_188F_0034_1B64()
 *
 * @name f__B495_188F_0034_1B64
 * @implements B495:188F:0034:1B64 ()
 *
 * Called From: B495:18F3:0007:D2A0
 * Called From: B495:18F3:000C:FD2C
 * Called From: B495:18F3:0031:E426
 */
void f__B495_188F_0034_1B64()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0x0);
	if (emu_flags.zf) { f__B495_18EB_000C_FD2C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x9), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x7), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_18C6_0031_E426(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x18C3); emu_ip = 0x19B0; emu_last_cs = 0xB495; emu_last_ip = 0x18C0; emu_last_length = 0x0034; emu_last_crc = 0x1B64; emu_call();
	/* Unresolved jump */ emu_ip = 0x18C3; emu_last_cs = 0xB495; emu_last_ip = 0x18C3; emu_last_length = 0x0034; emu_last_crc = 0x1B64; emu_call();
}

/**
 * Decompiled function f__B495_18C6_0031_E426()
 *
 * @name f__B495_18C6_0031_E426
 * @implements B495:18C6:0031:E426 ()
 *
 * Called From: B495:18B5:0034:1B64
 */
void f__B495_18C6_0031_E426()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x3), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x20));
	emu_movws(&emu_ax, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5), emu_ax);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x5A);
	emu_cmpw(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_188F_0034_1B64(); return; }
	/* Unresolved jump */ emu_ip = 0x1967; emu_last_cs = 0xB495; emu_last_ip = 0x18F5; emu_last_length = 0x0031; emu_last_crc = 0xE426; emu_call();
}

/**
 * Decompiled function f__B495_18EB_000C_FD2C()
 *
 * @name f__B495_18EB_000C_FD2C
 * @implements B495:18EB:000C:FD2C ()
 *
 * Called From: B495:1897:0034:1B64
 */
void f__B495_18EB_000C_FD2C()
{
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x5A);
	emu_cmpw(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_188F_0034_1B64(); return; }
	f__B495_1967_0015_296F(); return;
}

/**
 * Decompiled function f__B495_18F0_0007_D2A0()
 *
 * @name f__B495_18F0_0007_D2A0
 * @implements B495:18F0:0007:D2A0 ()
 *
 * Called From: B495:188D:0015:1B58
 */
void f__B495_18F0_0007_D2A0()
{
	emu_cmpw(&emu_si, 0x1B);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_188F_0034_1B64(); return; }
	/* Unresolved jump */ emu_ip = 0x1967; emu_last_cs = 0xB495; emu_last_ip = 0x18F5; emu_last_length = 0x0007; emu_last_crc = 0xD2A0; emu_call();
}

/**
 * Decompiled function f__B495_18F7_000E_9846()
 *
 * @name f__B495_18F7_000E_9846
 * @implements B495:18F7:000E:9846 ()
 *
 * Called From: B495:187F:0015:1B58
 */
void f__B495_18F7_000E_9846()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	emu_xorw(&emu_si, emu_si);
	f__B495_1962_001A_622A(); return;
}

/**
 * Decompiled function f__B495_1905_0077_8C18()
 *
 * @name f__B495_1905_0077_8C18
 * @implements B495:1905:0077:8C18 ()
 *
 * Called From: B495:1965:001A:622A
 * Called From: B495:1965:0030:B3C4
 * Called From: B495:1965:001F:D3A8
 * Called From: B495:1965:0027:D1FB
 * Called From: B495:1965:0077:8C18
 */
void f__B495_1905_0077_8C18()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0x0);
	if (emu_flags.zf) { f__B495_195D_001F_D3A8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x9), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x7), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x3), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x20));
	emu_movws(&emu_ax, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5), emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B495_194C_0030_B3C4(); return; }
	emu_cmpw(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B495_1955_0027_D1FB(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5), 0x64);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpw(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_8C18(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x0077; emu_last_crc = 0x8C18; emu_call(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18AA);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x0273; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0077; emu_last_crc = 0x8C18; emu_call();
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x0077; emu_last_crc = 0x8C18; emu_call();
}

/**
 * Decompiled function f__B495_194C_0030_B3C4()
 *
 * @name f__B495_194C_0030_B3C4
 * @implements B495:194C:0030:B3C4 ()
 *
 * Called From: B495:1945:0077:8C18
 */
void f__B495_194C_0030_B3C4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5), 0x64);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpw(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_8C18(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x0030; emu_last_crc = 0xB3C4; emu_call(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18AA);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x0273; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0030; emu_last_crc = 0xB3C4; emu_call();
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x0030; emu_last_crc = 0xB3C4; emu_call();
}

/**
 * Decompiled function f__B495_1955_0027_D1FB()
 *
 * @name f__B495_1955_0027_D1FB
 * @implements B495:1955:0027:D1FB ()
 *
 * Called From: B495:194A:0077:8C18
 */
void f__B495_1955_0027_D1FB()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpw(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_8C18(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (!emu_flags.zf) { f__B495_198D_001A_5737(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18AA);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x0273; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0027; emu_last_crc = 0xD1FB; emu_call();
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x0027; emu_last_crc = 0xD1FB; emu_call();
}

/**
 * Decompiled function f__B495_195D_001F_D3A8()
 *
 * @name f__B495_195D_001F_D3A8
 * @implements B495:195D:001F:D3A8 ()
 *
 * Called From: B495:190D:0077:8C18
 */
void f__B495_195D_001F_D3A8()
{
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpw(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_8C18(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (!emu_flags.zf) { f__B495_198D_001A_5737(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18AA);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x0273; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x001F; emu_last_crc = 0xD3A8; emu_call();
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x001F; emu_last_crc = 0xD3A8; emu_call();
}

/**
 * Decompiled function f__B495_1962_001A_622A()
 *
 * @name f__B495_1962_001A_622A
 * @implements B495:1962:001A:622A ()
 *
 * Called From: B495:1903:000E:9846
 */
void f__B495_1962_001A_622A()
{
	emu_cmpw(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_8C18(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x001A; emu_last_crc = 0x622A; emu_call(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18AA);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x0273; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x001A; emu_last_crc = 0x622A; emu_call();
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x001A; emu_last_crc = 0x622A; emu_call();
}

/**
 * Decompiled function f__B495_1967_0015_296F()
 *
 * @name f__B495_1967_0015_296F
 * @implements B495:1967:0015:296F ()
 *
 * Called From: B495:18F5:000C:FD2C
 */
void f__B495_1967_0015_296F()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (!emu_flags.zf) { f__B495_198D_001A_5737(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18AA);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x0273; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0015; emu_last_crc = 0x296F; emu_call();
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x0015; emu_last_crc = 0x296F; emu_call();
}

/**
 * Decompiled function f__B495_198D_001A_5737()
 *
 * @name f__B495_198D_001A_5737
 * @implements B495:198D:001A:5737 ()
 *
 * Called From: B495:196C:001F:D3A8
 * Called From: B495:196C:0027:D1FB
 * Called From: B495:196C:0015:296F
 */
void f__B495_198D_001A_5737()
{
	emu_movw(&emu_ax, 0x3495);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x98);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xB);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8BEA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19A7); emu_cs = 0x01F7; f__01F7_325B_0026_C673();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_19A7_0009_B397();
}

/**
 * Decompiled function f__B495_19A7_0009_B397()
 *
 * @name f__B495_19A7_0009_B397
 * @implements B495:19A7:0009:B397 ()
 *
 * Called From: B495:19A7:001A:5737
 */
void f__B495_19A7_0009_B397()
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
 * Decompiled function f__B495_1A14_0013_AE3F()
 *
 * @name f__B495_1A14_0013_AE3F
 * @implements B495:1A14:0013:AE3F ()
 *
 * Called From: 3495:0098:0005:0000
 */
void f__B495_1A14_0013_AE3F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5));
	f__B495_1A27_0002_2597(); return;
}

/**
 * Decompiled function f__B495_1A27_0002_2597()
 *
 * @name f__B495_1A27_0002_2597
 * @implements B495:1A27:0002:2597 ()
 *
 * Called From: B495:1A25:0013:AE3F
 */
void f__B495_1A27_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1A29_0012_DF2C()
 *
 * @name f__B495_1A29_0012_DF2C
 * @implements B495:1A29:0012:DF2C ()
 *
 * Called From: B495:1395:002C:681F
 */
void f__B495_1A29_0012_DF2C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x18D0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A3B); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1A3B_001A_4B96();
}

/**
 * Decompiled function f__B495_1A3B_001A_4B96()
 *
 * @name f__B495_1A3B_001A_4B96
 * @implements B495:1A3B:001A:4B96 ()
 *
 * Called From: B495:1A3B:0012:DF2C
 */
void f__B495_1A3B_001A_4B96()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x100);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A55); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1A55_0009_2605();
}

/**
 * Decompiled function f__B495_1A55_0009_2605()
 *
 * @name f__B495_1A55_0009_2605
 * @implements B495:1A55:0009:2605 ()
 *
 * Called From: B495:1A55:001A:4B96
 */
void f__B495_1A55_0009_2605()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A5E); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1A5E_0008_D4BF();
}

/**
 * Decompiled function f__B495_1A5E_0008_D4BF()
 *
 * @name f__B495_1A5E_0008_D4BF
 * @implements B495:1A5E:0008:D4BF ()
 *
 * Called From: B495:1A5E:0009:2605
 */
void f__B495_1A5E_0008_D4BF()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, 0x100);
	f__B495_1A66_0003_2E57(); return;
}

/**
 * Decompiled function f__B495_1A66_0003_2E57()
 *
 * @name f__B495_1A66_0003_2E57
 * @implements B495:1A66:0003:2E57 ()
 *
 * Called From: B495:1A64:0008:D4BF
 */
void f__B495_1A66_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
