/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B495_0000_0022_74CE()
 *
 * @name f__B495_0000_0022_74CE
 * @implements B495:0000:0022:74CE ()
 *
 * Called From: 3495:0020:0005:1DB8
 * Called From: 3495:0020:0005:1C4C
 * Called From: 3495:0020:0005:1C34
 */
void f__B495_0000_0022_74CE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0022_0023_BC79();
}

/**
 * Decompiled function f__B495_0022_0023_BC79()
 *
 * @name f__B495_0022_0023_BC79
 * @implements B495:0022:0023:BC79 ()
 *
 * Called From: B495:0022:0022:74CE
 */
void f__B495_0022_0023_BC79()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7418), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FB6), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0045_0009_3230();
}

/**
 * Decompiled function f__B495_0045_0009_3230()
 *
 * @name f__B495_0045_0009_3230
 * @implements B495:0045:0009:3230 ()
 *
 * Called From: B495:0045:0023:BC79
 */
void f__B495_0045_0009_3230()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x004E); f__B495_125B_0011_FB03();
	f__B495_004E_0009_7173();
}

/**
 * Decompiled function f__B495_004E_0009_7173()
 *
 * @name f__B495_004E_0009_7173
 * @implements B495:004E:0009:7173 ()
 *
 * Called From: B495:004E:0009:3230
 */
void f__B495_004E_0009_7173()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0057); f__B495_0DC9_0010_2885();
	f__B495_0057_0009_423E();
}

/**
 * Decompiled function f__B495_0057_0009_423E()
 *
 * @name f__B495_0057_0009_423E
 * @implements B495:0057:0009:423E ()
 *
 * Called From: B495:0057:0009:7173
 */
void f__B495_0057_0009_423E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FC0), 0xFFFF);
	f__B495_009D_0014_97D3(); return;
}

/**
 * Decompiled function f__B495_0060_000C_BD15()
 *
 * @name f__B495_0060_000C_BD15
 * @implements B495:0060:000C:BD15 ()
 *
 * Called From: B495:00A2:0014:97D3
 */
void f__B495_0060_000C_BD15()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x10E4; f__10E4_0675_0026_5758();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_006C_000A_85F7();
}

/**
 * Decompiled function f__B495_006C_000A_85F7()
 *
 * @name f__B495_006C_000A_85F7
 * @implements B495:006C:000A:85F7 ()
 *
 * Called From: B495:006C:000C:BD15
 */
void f__B495_006C_000A_85F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0076); f__B495_0DC9_0010_2885();
	f__B495_0076_000E_89CF();
}

/**
 * Decompiled function f__B495_0076_000E_89CF()
 *
 * @name f__B495_0076_000E_89CF
 * @implements B495:0076:000E:89CF ()
 *
 * Called From: B495:0076:000A:85F7
 */
void f__B495_0076_000E_89CF()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA2));
	emu_push(emu_cs); emu_push(0x0084); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0084_0012_7520();
}

/**
 * Decompiled function f__B495_0084_0012_7520()
 *
 * @name f__B495_0084_0012_7520
 * @implements B495:0084:0012:7520 ()
 *
 * Called From: B495:0084:000E:89CF
 */
void f__B495_0084_0012_7520()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x6E);
	if (!emu_flags.zf) { f__B495_0098_0005_17FC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x0096); emu_ip = 0x030B; emu_last_cs = 0xB495; emu_last_ip = 0x0093; emu_last_length = 0x0012; emu_last_crc = 0x7520; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_0098_0005_17FC()
 *
 * @name f__B495_0098_0005_17FC
 * @implements B495:0098:0005:17FC ()
 *
 * Called From: B495:0089:0012:7520
 */
void f__B495_0098_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_009D_0014_97D3();
}

/**
 * Decompiled function f__B495_009D_0014_97D3()
 *
 * @name f__B495_009D_0014_97D3
 * @implements B495:009D:0014:97D3 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B495:005E:0009:423E
 * Called From: B495:009D:0005:17FC
 */
void f__B495_009D_0014_97D3()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC0), 0xFF);
	if (emu_flags.zf) { f__B495_0060_000C_BD15(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x10E4; f__10E4_0675_0026_5758();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00B1_000A_3CEB();
}

/**
 * Decompiled function f__B495_00B1_000A_3CEB()
 *
 * @name f__B495_00B1_000A_3CEB
 * @implements B495:00B1:000A:3CEB ()
 *
 * Called From: B495:00B1:0014:97D3
 */
void f__B495_00B1_000A_3CEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00BB_0006_0240();
}

/**
 * Decompiled function f__B495_00BB_0006_0240()
 *
 * @name f__B495_00BB_0006_0240
 * @implements B495:00BB:0006:0240 ()
 *
 * Called From: B495:00BB:000A:3CEB
 */
void f__B495_00BB_0006_0240()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x00C1); f__B495_0F30_0008_3A5E();
	f__B495_00C1_001C_4BB1();
}

/**
 * Decompiled function f__B495_00C1_001C_4BB1()
 *
 * @name f__B495_00C1_001C_4BB1
 * @implements B495:00C1:001C:4BB1 ()
 *
 * Called From: B495:00C1:0006:0240
 */
void f__B495_00C1_001C_4BB1()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DD); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00DD_0010_1B8C();
}

/**
 * Decompiled function f__B495_00DD_0010_1B8C()
 *
 * @name f__B495_00DD_0010_1B8C
 * @implements B495:00DD:0010:1B8C ()
 *
 * Called From: B495:00DD:001C:4BB1
 */
void f__B495_00DD_0010_1B8C()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x00ED); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_00ED_000D_9C3D();
}

/**
 * Decompiled function f__B495_00ED_000D_9C3D()
 *
 * @name f__B495_00ED_000D_9C3D
 * @implements B495:00ED:000D:9C3D ()
 *
 * Called From: B495:00ED:0010:1B8C
 */
void f__B495_00ED_000D_9C3D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FC0));
	f__B495_00FA_0004_0F7A(); return;
}

/**
 * Decompiled function f__B495_00FA_0004_0F7A()
 *
 * @name f__B495_00FA_0004_0F7A
 * @implements B495:00FA:0004:0F7A ()
 *
 * Called From: B495:00F8:000D:9C3D
 */
void f__B495_00FA_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_00FE_0017_557B()
 *
 * @name f__B495_00FE_0017_557B
 * @implements B495:00FE:0017:557B ()
 *
 * Called From: 3495:0025:0005:1290
 * Called From: 3495:0025:0005:1160
 */
void f__B495_00FE_0017_557B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B495_0115_0022_E7A6(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x014B; emu_last_cs = 0xB495; emu_last_ip = 0x0110; emu_last_length = 0x0017; emu_last_crc = 0x557B; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0194; emu_last_cs = 0xB495; emu_last_ip = 0x0112; emu_last_length = 0x0017; emu_last_crc = 0x557B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_0115_0022_E7A6()
 *
 * @name f__B495_0115_0022_E7A6
 * @implements B495:0115:0022:E7A6 ()
 *
 * Called From: B495:010B:0017:557B
 */
void f__B495_0115_0022_E7A6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBC), 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x014A; emu_last_cs = 0xB495; emu_last_ip = 0x011A; emu_last_length = 0x0022; emu_last_crc = 0xE7A6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_014A_0029_8CA6(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xA);
	emu_push(emu_cs);
	emu_push(0x0137); f__B495_0F30_0008_3A5E();
	f__B495_0137_000D_EEB6();
}

/**
 * Decompiled function f__B495_0137_000D_EEB6()
 *
 * @name f__B495_0137_000D_EEB6
 * @implements B495:0137:000D:EEB6 ()
 *
 * Called From: B495:0137:0022:E7A6
 */
void f__B495_0137_000D_EEB6()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0144); f__B495_0DC9_0010_2885();
	f__B495_0144_0006_0284();
}

/**
 * Decompiled function f__B495_0144_0006_0284()
 *
 * @name f__B495_0144_0006_0284
 * @implements B495:0144:0006:0284 ()
 *
 * Called From: B495:0144:000D:EEB6
 */
void f__B495_0144_0006_0284()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, 0x1);
	f__B495_0196_0008_5214(); return;
}

/**
 * Decompiled function f__B495_014A_0029_8CA6()
 *
 * @name f__B495_014A_0029_8CA6
 * @implements B495:014A:0029:8CA6 ()
 *
 * Called From: B495:0124:0022:E7A6
 */
void f__B495_014A_0029_8CA6()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FB8));
	emu_addw(&emu_ax.x, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_0180_0007_33A2(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xA);
	emu_movw(&emu_di, 0x1);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x7FB8));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0173); emu_ip = 0x1140; emu_last_cs = 0xB495; emu_last_ip = 0x0170; emu_last_length = 0x0029; emu_last_crc = 0x8CA6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_0180_0007_33A2()
 *
 * @name f__B495_0180_0007_33A2
 * @implements B495:0180:0007:33A2 ()
 *
 * Called From: B495:0155:0029:8CA6
 */
void f__B495_0180_0007_33A2()
{
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs);
	emu_push(0x0187); f__B495_089A_0011_B20F();
	f__B495_0187_0009_70B5();
}

/**
 * Decompiled function f__B495_0187_0009_70B5()
 *
 * @name f__B495_0187_0009_70B5
 * @implements B495:0187:0009:70B5 ()
 *
 * Called From: B495:0187:0007:33A2
 */
void f__B495_0187_0009_70B5()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0190); f__B495_119D_0009_4C12();
	f__B495_0190_0004_0408();
}

/**
 * Decompiled function f__B495_0190_0004_0408()
 *
 * @name f__B495_0190_0004_0408
 * @implements B495:0190:0004:0408 ()
 *
 * Called From: B495:0190:0009:70B5
 */
void f__B495_0190_0004_0408()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	f__B495_0196_0008_5214(); return;
}

/**
 * Decompiled function f__B495_0196_0008_5214()
 *
 * @name f__B495_0196_0008_5214
 * @implements B495:0196:0008:5214 ()
 *
 * Called From: B495:0148:0006:0284
 * Called From: B495:0192:0004:0408
 * Called From: B495:01A6:0013:750F
 */
void f__B495_0196_0008_5214()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x019E); f__B495_0DC9_0010_2885();
	f__B495_019E_0013_750F();
}

/**
 * Decompiled function f__B495_019E_0013_750F()
 *
 * @name f__B495_019E_0013_750F
 * @implements B495:019E:0013:750F ()
 *
 * Called From: B495:019E:0008:5214
 */
void f__B495_019E_0013_750F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B495_0196_0008_5214(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B495_01B1_000E_27D3(); return; }
	emu_push(emu_cs);
	emu_push(0x01B1); f__B495_089A_0011_B20F();
	f__B495_01B1_000E_27D3();
}

/**
 * Decompiled function f__B495_01B1_000E_27D3()
 *
 * @name f__B495_01B1_000E_27D3
 * @implements B495:01B1:000E:27D3 ()
 *
 * Called From: B495:01AA:0013:750F
 * Called From: B495:01B1:0013:750F
 */
void f__B495_01B1_000E_27D3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01BF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_01BF_0008_F43C();
}

/**
 * Decompiled function f__B495_01BF_0008_F43C()
 *
 * @name f__B495_01BF_0008_F43C
 * @implements B495:01BF:0008:F43C ()
 *
 * Called From: B495:01BF:000E:27D3
 */
void f__B495_01BF_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__B495_01C7_0004_07E2(); return;
}

/**
 * Decompiled function f__B495_01C7_0004_07E2()
 *
 * @name f__B495_01C7_0004_07E2
 * @implements B495:01C7:0004:07E2 ()
 *
 * Called From: B495:01C5:0008:F43C
 */
void f__B495_01C7_0004_07E2()
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
 * Decompiled function f__B495_01CB_0016_E518()
 *
 * @name f__B495_01CB_0016_E518
 * @implements B495:01CB:0016:E518 ()
 *
 * Called From: 3495:002A:0005:11C8
 * Called From: 3495:002A:0005:1238
 */
void f__B495_01CB_0016_E518()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B495_01E1_0018_107F(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x020D; emu_last_cs = 0xB495; emu_last_ip = 0x01DD; emu_last_length = 0x0016; emu_last_crc = 0xE518; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0251; emu_last_cs = 0xB495; emu_last_ip = 0x01DF; emu_last_length = 0x0016; emu_last_crc = 0xE518; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_01E1_0018_107F()
 *
 * @name f__B495_01E1_0018_107F
 * @implements B495:01E1:0018:107F ()
 *
 * Called From: B495:01D8:0016:E518
 */
void f__B495_01E1_0018_107F()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBC), 0x0);
	if (emu_flags.zf) { f__B495_020C_0021_E0E0(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xA);
	emu_push(emu_cs);
	emu_push(0x01F9); f__B495_0F30_0008_3A5E();
	f__B495_01F9_000D_6FA0();
}

/**
 * Decompiled function f__B495_01F9_000D_6FA0()
 *
 * @name f__B495_01F9_000D_6FA0
 * @implements B495:01F9:000D:6FA0 ()
 *
 * Called From: B495:01F9:0018:107F
 */
void f__B495_01F9_000D_6FA0()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0206); f__B495_0DC9_0010_2885();
	f__B495_0206_0006_0292();
}

/**
 * Decompiled function f__B495_0206_0006_0292()
 *
 * @name f__B495_0206_0006_0292
 * @implements B495:0206:0006:0292 ()
 *
 * Called From: B495:0206:000D:6FA0
 */
void f__B495_0206_0006_0292()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, 0x1);
	f__B495_0253_0008_530E(); return;
}

/**
 * Decompiled function f__B495_020C_0021_E0E0()
 *
 * @name f__B495_020C_0021_E0E0
 * @implements B495:020C:0021:E0E0 ()
 *
 * Called From: B495:01E6:0018:107F
 */
void f__B495_020C_0021_E0E0()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FB8), 0x0);
	if (emu_flags.zf) { f__B495_023D_0007_32B4(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xA);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x7FB8));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x022D); emu_ip = 0x1140; emu_last_cs = 0xB495; emu_last_ip = 0x022A; emu_last_length = 0x0021; emu_last_crc = 0xE0E0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_023D_0007_32B4()
 *
 * @name f__B495_023D_0007_32B4
 * @implements B495:023D:0007:32B4 ()
 *
 * Called From: B495:0212:0021:E0E0
 */
void f__B495_023D_0007_32B4()
{
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs);
	emu_push(0x0244); f__B495_089A_0011_B20F();
	f__B495_0244_0009_71FF();
}

/**
 * Decompiled function f__B495_0244_0009_71FF()
 *
 * @name f__B495_0244_0009_71FF
 * @implements B495:0244:0009:71FF ()
 *
 * Called From: B495:0244:0007:32B4
 */
void f__B495_0244_0009_71FF()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x024D); f__B495_119D_0009_4C12();
	f__B495_024D_0004_0408();
}

/**
 * Decompiled function f__B495_024D_0004_0408()
 *
 * @name f__B495_024D_0004_0408
 * @implements B495:024D:0004:0408 ()
 *
 * Called From: B495:024D:0009:71FF
 */
void f__B495_024D_0004_0408()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	f__B495_0253_0008_530E(); return;
}

/**
 * Decompiled function f__B495_0253_0008_530E()
 *
 * @name f__B495_0253_0008_530E
 * @implements B495:0253:0008:530E ()
 *
 * Called From: B495:020A:0006:0292
 * Called From: B495:024F:0004:0408
 * Called From: B495:0263:0013:761B
 */
void f__B495_0253_0008_530E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x025B); f__B495_0DC9_0010_2885();
	f__B495_025B_0013_761B();
}

/**
 * Decompiled function f__B495_025B_0013_761B()
 *
 * @name f__B495_025B_0013_761B
 * @implements B495:025B:0013:761B ()
 *
 * Called From: B495:025B:0008:530E
 */
void f__B495_025B_0013_761B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B495_0253_0008_530E(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B495_026E_000E_27D3(); return; }
	emu_push(emu_cs);
	emu_push(0x026E); f__B495_089A_0011_B20F();
	f__B495_026E_000E_27D3();
}

/**
 * Decompiled function f__B495_026E_000E_27D3()
 *
 * @name f__B495_026E_000E_27D3
 * @implements B495:026E:000E:27D3 ()
 *
 * Called From: B495:0267:0013:761B
 * Called From: B495:026E:0013:761B
 */
void f__B495_026E_000E_27D3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_027C_0008_F43C();
}

/**
 * Decompiled function f__B495_027C_0008_F43C()
 *
 * @name f__B495_027C_0008_F43C
 * @implements B495:027C:0008:F43C ()
 *
 * Called From: B495:027C:000E:27D3
 */
void f__B495_027C_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__B495_0284_0004_07E2(); return;
}

/**
 * Decompiled function f__B495_0284_0004_07E2()
 *
 * @name f__B495_0284_0004_07E2
 * @implements B495:0284:0004:07E2 ()
 *
 * Called From: B495:0282:0008:F43C
 */
void f__B495_0284_0004_07E2()
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
 * Decompiled function f__B495_0288_001F_143C()
 *
 * @name f__B495_0288_001F_143C
 * @implements B495:0288:001F:143C ()
 *
 * Called From: 3495:002F:0005:1610
 * Called From: 3495:002F:0005:15E0
 */
void f__B495_0288_001F_143C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_02C5_0009_9DF7(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FB6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x02BD; emu_last_cs = 0xB495; emu_last_ip = 0x029A; emu_last_length = 0x001F; emu_last_crc = 0x143C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x348B; emu_ip = 0x02CC; emu_last_cs = 0xB495; emu_last_ip = 0x02A2; emu_last_length = 0x001F; emu_last_crc = 0x143C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_02C5_0009_9DF7()
 *
 * @name f__B495_02C5_0009_9DF7
 * @implements B495:02C5:0009:9DF7 ()
 *
 * Called From: B495:0293:001F:143C
 */
void f__B495_02C5_0009_9DF7()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B495_1230_001B_C015();
	f__B495_02CE_0031_DB15();
}

/**
 * Decompiled function f__B495_02CE_0031_DB15()
 *
 * @name f__B495_02CE_0031_DB15
 * @implements B495:02CE:0031:DB15 ()
 *
 * Called From: B495:02CE:0009:9DF7
 */
void f__B495_02CE_0031_DB15()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02F1; emu_last_cs = 0xB495; emu_last_ip = 0x02E1; emu_last_length = 0x0031; emu_last_crc = 0xDB15; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FC0), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02FF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_02FF_0008_F43C();
}

/**
 * Decompiled function f__B495_02FF_0008_F43C()
 *
 * @name f__B495_02FF_0008_F43C
 * @implements B495:02FF:0008:F43C ()
 *
 * Called From: B495:02FF:0031:DB15
 */
void f__B495_02FF_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__B495_0307_0004_0F7A(); return;
}

/**
 * Decompiled function f__B495_0307_0004_0F7A()
 *
 * @name f__B495_0307_0004_0F7A
 * @implements B495:0307:0004:0F7A ()
 *
 * Called From: B495:0305:0008:F43C
 */
void f__B495_0307_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_030B_001D_8AED()
 *
 * @name f__B495_030B_001D_8AED
 * @implements B495:030B:001D:8AED ()
 *
 * Called From: 3495:0034:0005:1E28
 */
void f__B495_030B_001D_8AED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FC0), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0376_0016_8C9F(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8BEA);
	emu_ip = 0x036F; emu_last_cs = 0xB495; emu_last_ip = 0x0326; emu_last_length = 0x001D; emu_last_crc = 0x8AED; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_0376_0016_8C9F()
 *
 * @name f__B495_0376_0016_8C9F
 * @implements B495:0376:0016:8C9F ()
 *
 * Called From: B495:031C:001D:8AED
 */
void f__B495_0376_0016_8C9F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x038F; emu_last_cs = 0xB495; emu_last_ip = 0x037C; emu_last_length = 0x0016; emu_last_crc = 0x8C9F; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_038C_0008_F43C();
}

/**
 * Decompiled function f__B495_038C_0008_F43C()
 *
 * @name f__B495_038C_0008_F43C
 * @implements B495:038C:0008:F43C ()
 *
 * Called From: B495:038C:0016:8C9F
 */
void f__B495_038C_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__B495_0394_0004_0F7A(); return;
}

/**
 * Decompiled function f__B495_0394_0004_0F7A()
 *
 * @name f__B495_0394_0004_0F7A
 * @implements B495:0394:0004:0F7A ()
 *
 * Called From: B495:0392:0008:F43C
 */
void f__B495_0394_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_03B9_0008_3F8A()
 *
 * @name f__B495_03B9_0008_3F8A
 * @implements B495:03B9:0008:3F8A ()
 *
 * Called From: 3495:003E:0005:1508
 * Called From: 3495:003E:0005:16F8
 */
void f__B495_03B9_0008_3F8A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs);
	emu_push(0x03C1); f__B495_0F30_0008_3A5E();
	f__B495_03C1_0012_47E6();
}

/**
 * Decompiled function f__B495_03C1_0012_47E6()
 *
 * @name f__B495_03C1_0012_47E6
 * @implements B495:03C1:0012:47E6 ()
 *
 * Called From: B495:03C1:0008:3F8A
 */
void f__B495_03C1_0012_47E6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_ax.x, 0x2E);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FBC), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03D3); f__B495_089A_0011_B20F();
	f__B495_03D3_0009_7307();
}

/**
 * Decompiled function f__B495_03D3_0009_7307()
 *
 * @name f__B495_03D3_0009_7307
 * @implements B495:03D3:0009:7307 ()
 *
 * Called From: B495:03D3:0012:47E6
 */
void f__B495_03D3_0009_7307()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03DC); f__B495_0DC9_0010_2885();
	f__B495_03DC_0006_02FC();
}

/**
 * Decompiled function f__B495_03DC_0006_02FC()
 *
 * @name f__B495_03DC_0006_02FC
 * @implements B495:03DC:0006:02FC ()
 *
 * Called From: B495:03DC:0009:7307
 */
void f__B495_03DC_0006_02FC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B495_03E2_0002_00E2(); return;
}

/**
 * Decompiled function f__B495_03E2_0002_00E2()
 *
 * @name f__B495_03E2_0002_00E2
 * @implements B495:03E2:0002:00E2 ()
 *
 * Called From: B495:03E0:0006:02FC
 */
void f__B495_03E2_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_089A_0011_B20F()
 *
 * @name f__B495_089A_0011_B20F
 * @implements B495:089A:0011:B20F ()
 *
 * Called From: B495:0184:0007:33A2
 * Called From: B495:01AE:0013:750F
 * Called From: B495:0241:0007:32B4
 * Called From: B495:026B:0013:761B
 * Called From: B495:03D0:0012:47E6
 * Called From: B495:157C:0005:0D0A
 */
void f__B495_089A_0011_B20F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_push(emu_cs);
	emu_push(0x08AB); f__B495_1230_001B_C015();
	f__B495_08AB_0010_BF75();
}

/**
 * Decompiled function f__B495_08AB_0010_BF75()
 *
 * @name f__B495_08AB_0010_BF75
 * @implements B495:08AB:0010:BF75 ()
 *
 * Called From: B495:08AB:0011:B20F
 */
void f__B495_08AB_0010_BF75()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_08BB_0031_45EB();
}

/**
 * Decompiled function f__B495_08BB_0031_45EB()
 *
 * @name f__B495_08BB_0031_45EB
 * @implements B495:08BB:0031:45EB ()
 *
 * Called From: B495:08BB:0010:BF75
 */
void f__B495_08BB_0031_45EB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FB0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FAE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs); emu_push(0x08EC); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_08EC_0026_40E1();
}

/**
 * Decompiled function f__B495_08EC_0026_40E1()
 *
 * @name f__B495_08EC_0026_40E1
 * @implements B495:08EC:0026:40E1 ()
 *
 * Called From: B495:08EC:0031:45EB
 */
void f__B495_08EC_0026_40E1()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0912_000E_986D();
}

/**
 * Decompiled function f__B495_0912_000E_986D()
 *
 * @name f__B495_0912_000E_986D
 * @implements B495:0912:000E:986D ()
 *
 * Called From: B495:0912:0026:40E1
 */
void f__B495_0912_000E_986D()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0920_000C_8F15();
}

/**
 * Decompiled function f__B495_0920_000C_8F15()
 *
 * @name f__B495_0920_000C_8F15
 * @implements B495:0920:000C:8F15 ()
 *
 * Called From: B495:0920:000E:986D
 */
void f__B495_0920_000C_8F15()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7418), 0x0);
	if (!emu_flags.zf) { f__B495_092C_002E_E991(); return; }
	emu_ip = 0x09FE; emu_last_cs = 0xB495; emu_last_ip = 0x0929; emu_last_length = 0x000C; emu_last_crc = 0x8F15; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_092C_002E_E991()
 *
 * @name f__B495_092C_002E_E991
 * @implements B495:092C:002E:E991 ()
 *
 * Called From: B495:0927:000C:8F15
 */
void f__B495_092C_002E_E991()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x120);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x88);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x542));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x540));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_095A_0028_4047();
}

/**
 * Decompiled function f__B495_095A_0028_4047()
 *
 * @name f__B495_095A_0028_4047
 * @implements B495:095A:0028:4047 ()
 *
 * Called From: B495:095A:002E:E991
 */
void f__B495_095A_0028_4047()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x4A2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, 0x00,  0x4A0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0982); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0982_0030_3D44();
}

/**
 * Decompiled function f__B495_0982_0030_3D44()
 *
 * @name f__B495_0982_0030_3D44
 * @implements B495:0982:0030:3D44 ()
 *
 * Called From: B495:0982:0028:4047
 */
void f__B495_0982_0030_3D44()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E42));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__B495_09FA_0015_0146(); return;
}

/**
 * Decompiled function f__B495_09B2_0014_A6B6()
 *
 * @name f__B495_09B2_0014_A6B6
 * @implements B495:09B2:0014:A6B6 ()
 *
 * Called From: B495:09FC:0015:0146
 * Called From: B495:09FC:001E:193D
 */
void f__B495_09B2_0014_A6B6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E40));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__B495_09F5_001A_C907(); return;
}

/**
 * Decompiled function f__B495_09C6_002B_765B()
 *
 * @name f__B495_09C6_002B_765B
 * @implements B495:09C6:002B:765B ()
 *
 * Called From: B495:09F7:001A:C907
 * Called From: B495:09F7:001E:193D
 */
void f__B495_09C6_002B_765B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x09F1); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_09F1_001E_193D();
}

/**
 * Decompiled function f__B495_09F1_001E_193D()
 *
 * @name f__B495_09F1_001E_193D
 * @implements B495:09F1:001E:193D ()
 *
 * Called From: B495:09F1:002B:765B
 */
void f__B495_09F1_001E_193D()
{
	emu_addws(&emu_sp, 0xE);
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09C6_002B_765B(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09B2_0014_A6B6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0A0F; emu_last_cs = 0xB495; emu_last_ip = 0x0A0A; emu_last_length = 0x001E; emu_last_crc = 0x193D; emu_call(); return; } // Jump does not resolve
	f__B495_0AE9_002C_AEA6(); return;
}

/**
 * Decompiled function f__B495_09F5_001A_C907()
 *
 * @name f__B495_09F5_001A_C907
 * @implements B495:09F5:001A:C907 ()
 *
 * Called From: B495:09C4:0014:A6B6
 */
void f__B495_09F5_001A_C907()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09C6_002B_765B(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x09B2; emu_last_cs = 0xB495; emu_last_ip = 0x09FC; emu_last_length = 0x001A; emu_last_crc = 0xC907; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0A0F; emu_last_cs = 0xB495; emu_last_ip = 0x0A0A; emu_last_length = 0x001A; emu_last_crc = 0xC907; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0AE9; emu_last_cs = 0xB495; emu_last_ip = 0x0A0C; emu_last_length = 0x001A; emu_last_crc = 0xC907; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_09FA_0015_0146()
 *
 * @name f__B495_09FA_0015_0146
 * @implements B495:09FA:0015:0146 ()
 *
 * Called From: B495:09B0:0030:3D44
 */
void f__B495_09FA_0015_0146()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_09B2_0014_A6B6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0A0F; emu_last_cs = 0xB495; emu_last_ip = 0x0A0A; emu_last_length = 0x0015; emu_last_crc = 0x0146; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0AE9; emu_last_cs = 0xB495; emu_last_ip = 0x0A0C; emu_last_length = 0x0015; emu_last_crc = 0x0146; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_0AE9_002C_AEA6()
 *
 * @name f__B495_0AE9_002C_AEA6
 * @implements B495:0AE9:002C:AEA6 ()
 *
 * Called From: B495:0A0C:001E:193D
 */
void f__B495_0AE9_002C_AEA6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0B6C_0005_11DE(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x63);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B15); emu_cs = 0x24D0; emu_ip = 0x0B22; emu_last_cs = 0xB495; emu_last_ip = 0x0B10; emu_last_length = 0x002C; emu_last_crc = 0xAEA6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_0B6C_0005_11DE()
 *
 * @name f__B495_0B6C_0005_11DE
 * @implements B495:0B6C:0005:11DE ()
 *
 * Called From: B495:0AEE:002C:AEA6
 */
void f__B495_0B6C_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0B71); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0B71_0024_0D76();
}

/**
 * Decompiled function f__B495_0B71_0024_0D76()
 *
 * @name f__B495_0B71_0024_0D76
 * @implements B495:0B71:0024:0D76 ()
 *
 * Called From: B495:0B71:0005:11DE
 */
void f__B495_0B71_0024_0D76()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x70);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B95); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0B95_0008_F13E();
}

/**
 * Decompiled function f__B495_0B95_0008_F13E()
 *
 * @name f__B495_0B95_0008_F13E
 * @implements B495:0B95:0008:F13E ()
 *
 * Called From: B495:0B95:0024:0D76
 */
void f__B495_0B95_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0B9D_0008_EAEA();
}

/**
 * Decompiled function f__B495_0B9D_0008_EAEA()
 *
 * @name f__B495_0B9D_0008_EAEA
 * @implements B495:0B9D:0008:EAEA ()
 *
 * Called From: B495:0B9D:0008:F13E
 */
void f__B495_0B9D_0008_EAEA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0BA5); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0BA5_000C_9507();
}

/**
 * Decompiled function f__B495_0BA5_000C_9507()
 *
 * @name f__B495_0BA5_000C_9507
 * @implements B495:0BA5:000C:9507 ()
 *
 * Called From: B495:0BA5:0008:EAEA
 */
void f__B495_0BA5_000C_9507()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x0BB1); f__B495_0BB9_0011_9B02();
	f__B495_0BB1_0008_66FA();
}

/**
 * Decompiled function f__B495_0BB1_0008_66FA()
 *
 * @name f__B495_0BB1_0008_66FA
 * @implements B495:0BB1:0008:66FA ()
 *
 * Called From: B495:0BB1:000C:9507
 */
void f__B495_0BB1_0008_66FA()
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
 * Decompiled function f__B495_0BB9_0011_9B02()
 *
 * @name f__B495_0BB9_0011_9B02
 * @implements B495:0BB9:0011:9B02 ()
 *
 * Called From: B495:0BAE:000C:9507
 */
void f__B495_0BB9_0011_9B02()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0BCA_0021_F045();
}

/**
 * Decompiled function f__B495_0BCA_0021_F045()
 *
 * @name f__B495_0BCA_0021_F045
 * @implements B495:0BCA:0021:F045 ()
 *
 * Called From: B495:0BCA:0011:9B02
 */
void f__B495_0BCA_0021_F045()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x74);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x23);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x136);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x15);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0BEB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0BE6; emu_last_length = 0x0021; emu_last_crc = 0xF045;
			emu_call();
			return;
	}
	f__B495_0BEB_0032_BC6E();
}

/**
 * Decompiled function f__B495_0BEB_0032_BC6E()
 *
 * @name f__B495_0BEB_0032_BC6E
 * @implements B495:0BEB:0032:BC6E ()
 *
 * Called From: B495:0BEB:0021:F045
 */
void f__B495_0BEB_0032_BC6E()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B495_0C23_0009_9C7D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C23; emu_last_cs = 0xB495; emu_last_ip = 0x0BFD; emu_last_length = 0x0032; emu_last_crc = 0xBC6E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C1D); emu_cs = 0x10E4; emu_ip = 0x2B0E; emu_last_cs = 0xB495; emu_last_ip = 0x0C18; emu_last_length = 0x0032; emu_last_crc = 0xBC6E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_0C23_0009_9C7D()
 *
 * @name f__B495_0C23_0009_9C7D
 * @implements B495:0C23:0009:9C7D ()
 *
 * Called From: B495:0BF4:0032:BC6E
 */
void f__B495_0C23_0009_9C7D()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0C2C); f__B495_1230_001B_C015();
	f__B495_0C2C_002A_F14C();
}

/**
 * Decompiled function f__B495_0C2C_002A_F14C()
 *
 * @name f__B495_0C2C_002A_F14C
 * @implements B495:0C2C:002A:F14C ()
 *
 * Called From: B495:0C2C:0009:9C7D
 */
void f__B495_0C2C_002A_F14C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_cs); emu_push(0x0C56); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C56_0008_7B10();
}

/**
 * Decompiled function f__B495_0C56_0008_7B10()
 *
 * @name f__B495_0C56_0008_7B10
 * @implements B495:0C56:0008:7B10 ()
 *
 * Called From: B495:0C56:002A:F14C
 */
void f__B495_0C56_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C5E); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C5E_000C_EB8D();
}

/**
 * Decompiled function f__B495_0C5E_000C_EB8D()
 *
 * @name f__B495_0C5E_000C_EB8D
 * @implements B495:0C5E:000C:EB8D ()
 *
 * Called From: B495:0C5E:0008:7B10
 */
void f__B495_0C5E_000C_EB8D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0xB2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C6A); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C6A_0008_74DE();
}

/**
 * Decompiled function f__B495_0C6A_0008_74DE()
 *
 * @name f__B495_0C6A_0008_74DE
 * @implements B495:0C6A:0008:74DE ()
 *
 * Called From: B495:0C6A:000C:EB8D
 */
void f__B495_0C6A_0008_74DE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C72); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C72_0029_2A24();
}

/**
 * Decompiled function f__B495_0C72_0029_2A24()
 *
 * @name f__B495_0C72_0029_2A24
 * @implements B495:0C72:0029:2A24 ()
 *
 * Called From: B495:0C72:0008:74DE
 */
void f__B495_0C72_0029_2A24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3));
	emu_movw(&emu_ax.x, 0x12);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x136);
	emu_subw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C9B); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0C9B_0008_7B10();
}

/**
 * Decompiled function f__B495_0C9B_0008_7B10()
 *
 * @name f__B495_0C9B_0008_7B10
 * @implements B495:0C9B:0008:7B10 ()
 *
 * Called From: B495:0C9B:0029:2A24
 */
void f__B495_0C9B_0008_7B10()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0CA3_0013_320A();
}

/**
 * Decompiled function f__B495_0CA3_0013_320A()
 *
 * @name f__B495_0CA3_0013_320A
 * @implements B495:0CA3:0013:320A ()
 *
 * Called From: B495:0CA3:0008:7B10
 */
void f__B495_0CA3_0013_320A()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_0CF9_0005_11DE(); return; }
	emu_movw(&emu_ax.x, 0xB4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CB6); emu_cs = 0x0FCB; emu_ip = 0x0D15; emu_last_cs = 0xB495; emu_last_ip = 0x0CB1; emu_last_length = 0x0013; emu_last_crc = 0x320A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_0CF9_0005_11DE()
 *
 * @name f__B495_0CF9_0005_11DE
 * @implements B495:0CF9:0005:11DE ()
 *
 * Called From: B495:0CAB:0013:320A
 */
void f__B495_0CF9_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0CFE); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0CFE_002B_AA4F();
}

/**
 * Decompiled function f__B495_0CFE_002B_AA4F()
 *
 * @name f__B495_0CFE_002B_AA4F
 * @implements B495:0CFE:002B:AA4F ()
 *
 * Called From: B495:0CFE:0005:11DE
 */
void f__B495_0CFE_002B_AA4F()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0xB495; emu_last_ip = 0x0D00; emu_last_length = 0x002B; emu_last_crc = 0xAA4F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x15);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x15);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0D29);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0D24; emu_last_length = 0x002B; emu_last_crc = 0xAA4F;
			emu_call();
			return;
	}
	f__B495_0D29_0008_F13E();
}

/**
 * Decompiled function f__B495_0D29_0008_F13E()
 *
 * @name f__B495_0D29_0008_F13E
 * @implements B495:0D29:0008:F13E ()
 *
 * Called From: B495:0D29:002B:AA4F
 */
void f__B495_0D29_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D31); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0D31_0006_04AA();
}

/**
 * Decompiled function f__B495_0D31_0006_04AA()
 *
 * @name f__B495_0D31_0006_04AA
 * @implements B495:0D31:0006:04AA ()
 *
 * Called From: B495:0D31:0008:F13E
 */
void f__B495_0D31_0006_04AA()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0D37); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0D37_0007_3FFA();
}

/**
 * Decompiled function f__B495_0D37_0007_3FFA()
 *
 * @name f__B495_0D37_0007_3FFA
 * @implements B495:0D37:0007:3FFA ()
 *
 * Called From: B495:0D37:0006:04AA
 */
void f__B495_0D37_0007_3FFA()
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
 * Decompiled function f__B495_0DC9_0010_2885()
 *
 * @name f__B495_0DC9_0010_2885
 * @implements B495:0DC9:0010:2885 ()
 *
 * Called From: B495:0054:0009:7173
 * Called From: B495:0073:000A:85F7
 * Called From: B495:0141:000D:EEB6
 * Called From: B495:019B:0008:5214
 * Called From: B495:0203:000D:6FA0
 * Called From: B495:0258:0008:530E
 * Called From: B495:03D9:0009:7307
 * Called From: B495:1228:0008:B6AE
 */
void f__B495_0DC9_0010_2885()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__B495_0DD9_0018_6245(); return; }
	f__B495_0E73_0018_9452(); return;
}

/**
 * Decompiled function f__B495_0DD9_0018_6245()
 *
 * @name f__B495_0DD9_0018_6245
 * @implements B495:0DD9:0018:6245 ()
 *
 * Called From: B495:0DD4:0010:2885
 */
void f__B495_0DD9_0018_6245()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_ax.x, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DF1); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0DF1_0018_E4D5();
}

/**
 * Decompiled function f__B495_0DF1_0018_E4D5()
 *
 * @name f__B495_0DF1_0018_E4D5
 * @implements B495:0DF1:0018:E4D5 ()
 *
 * Called From: B495:0DF1:0018:6245
 */
void f__B495_0DF1_0018_E4D5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E09_002A_09DC();
}

/**
 * Decompiled function f__B495_0E09_002A_09DC()
 *
 * @name f__B495_0E09_002A_09DC
 * @implements B495:0E09:002A:09DC ()
 *
 * Called From: B495:0E09:0018:E4D5
 */
void f__B495_0E09_002A_09DC()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F9E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F9C), 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7FA0), 0x0);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7FA1), 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x18);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E33); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E33_001B_2913();
}

/**
 * Decompiled function f__B495_0E33_001B_2913()
 *
 * @name f__B495_0E33_001B_2913
 * @implements B495:0E33:001B:2913 ()
 *
 * Called From: B495:0E33:002A:09DC
 */
void f__B495_0E33_001B_2913()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x68);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x47);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E4E); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E4E_001B_D853();
}

/**
 * Decompiled function f__B495_0E4E_001B_D853()
 *
 * @name f__B495_0E4E_001B_D853
 * @implements B495:0E4E:001B:D853 ()
 *
 * Called From: B495:0E4E:001B:2913
 */
void f__B495_0E4E_001B_D853()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x67);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E69); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E69_0008_F7BE();
}

/**
 * Decompiled function f__B495_0E69_0008_F7BE()
 *
 * @name f__B495_0E69_0008_F7BE
 * @implements B495:0E69:0008:F7BE ()
 *
 * Called From: B495:0E69:001B:D853
 */
void f__B495_0E69_0008_F7BE()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0E71); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0E71_0002_039C();
}

/**
 * Decompiled function f__B495_0E71_0002_039C()
 *
 * @name f__B495_0E71_0002_039C
 * @implements B495:0E71:0002:039C ()
 *
 * Called From: B495:0E71:0008:F7BE
 */
void f__B495_0E71_0002_039C()
{
	f__B495_0E8B_005C_FFA8(); return;
}

/**
 * Decompiled function f__B495_0E73_0018_9452()
 *
 * @name f__B495_0E73_0018_9452
 * @implements B495:0E73:0018:9452 ()
 *
 * Called From: B495:0DD6:0010:2885
 */
void f__B495_0E73_0018_9452()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7F9E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7F9C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E8B; emu_last_cs = 0xB495; emu_last_ip = 0x0E7E; emu_last_length = 0x0018; emu_last_crc = 0x9452; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E88; emu_last_cs = 0xB495; emu_last_ip = 0x0E80; emu_last_length = 0x0018; emu_last_crc = 0x9452; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__B495_0E8B_005C_FFA8(); return; }
	f__B495_0F2B_0005_04BA(); return;
}

/**
 * Decompiled function f__B495_0E8B_005C_FFA8()
 *
 * @name f__B495_0E8B_005C_FFA8
 * @implements B495:0E8B:005C:FFA8 ()
 *
 * Called From: B495:0E71:0002:039C
 * Called From: B495:0E86:0018:9452
 */
void f__B495_0E8B_005C_FFA8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F9E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F9C), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA1));
	emu_addb(&emu_get_memory8(emu_ds, 0x00,  0x7FA0), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7FA0), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_0EB4_0033_6F80(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7FA0), 0x3F);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B495_0EC3_0024_66BC(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA1));
	emu_negb(&emu_ax.l, emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7FA1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA1));
	emu_addb(&emu_get_memory8(emu_ds, 0x00,  0x7FA0), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B495_0EE7_001A_E836(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B495_0F0F_0002_021E(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0F01; emu_last_cs = 0xB495; emu_last_ip = 0x0EE3; emu_last_length = 0x005C; emu_last_crc = 0xFFA8; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x005C; emu_last_crc = 0xFFA8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_0EB4_0033_6F80()
 *
 * @name f__B495_0EB4_0033_6F80
 * @implements B495:0EB4:0033:6F80 ()
 *
 * Called From: B495:0EAB:005C:FFA8
 */
void f__B495_0EB4_0033_6F80()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA1));
	emu_negb(&emu_ax.l, emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7FA1), emu_ax.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA1));
	emu_addb(&emu_get_memory8(emu_ds, 0x00,  0x7FA0), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B495_0EE7_001A_E836(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B495_0F0F_0002_021E(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0F01; emu_last_cs = 0xB495; emu_last_ip = 0x0EE3; emu_last_length = 0x0033; emu_last_crc = 0x6F80; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0033; emu_last_crc = 0x6F80; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_0EC3_0024_66BC()
 *
 * @name f__B495_0EC3_0024_66BC
 * @implements B495:0EC3:0024:66BC ()
 *
 * Called From: B495:0EB2:005C:FFA8
 */
void f__B495_0EC3_0024_66BC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_addw(&emu_dx.x, 0x2FD);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B495_0EE7_001A_E836(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B495_0F0F_0002_021E(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x0F01; emu_last_cs = 0xB495; emu_last_ip = 0x0EE3; emu_last_length = 0x0024; emu_last_crc = 0x66BC; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0024; emu_last_crc = 0x66BC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_0EE7_001A_E836()
 *
 * @name f__B495_0EE7_001A_E836
 * @implements B495:0EE7:001A:E836 ()
 *
 * Called From: B495:0ED9:0024:66BC
 * Called From: B495:0ED9:005C:FFA8
 * Called From: B495:0ED9:0033:6F80
 */
void f__B495_0EE7_001A_E836()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	f__B495_0F13_0015_07D5(); return;
}

/**
 * Decompiled function f__B495_0EEA_0017_6435()
 *
 * @name f__B495_0EEA_0017_6435
 * @implements B495:0EEA:0017:6435 ()
 *
 * Called From: B495:0F0F:0002:021E
 */
void f__B495_0EEA_0017_6435()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7FA0));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	f__B495_0F13_0015_07D5(); return;
}

/**
 * Decompiled function f__B495_0F0F_0002_021E()
 *
 * @name f__B495_0F0F_0002_021E
 * @implements B495:0F0F:0002:021E ()
 *
 * Called From: B495:0EDE:0024:66BC
 * Called From: B495:0EDE:005C:FFA8
 * Called From: B495:0EDE:0033:6F80
 */
void f__B495_0F0F_0002_021E()
{
	f__B495_0EEA_0017_6435(); return;
}

/**
 * Decompiled function f__B495_0F13_0015_07D5()
 *
 * @name f__B495_0F13_0015_07D5
 * @implements B495:0F13:0015:07D5 ()
 *
 * Called From: B495:0EFF:001A:E836
 * Called From: B495:0EFF:0017:6435
 */
void f__B495_0F13_0015_07D5()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x0F28); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F28_0008_E7BA();
}

/**
 * Decompiled function f__B495_0F28_0008_E7BA()
 *
 * @name f__B495_0F28_0008_E7BA
 * @implements B495:0F28:0008:E7BA ()
 *
 * Called From: B495:0F28:0015:07D5
 */
void f__B495_0F28_0008_E7BA()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F2B_0005_04BA()
 *
 * @name f__B495_0F2B_0005_04BA
 * @implements B495:0F2B:0005:04BA ()
 *
 * Called From: B495:0E88:0018:9452
 */
void f__B495_0F2B_0005_04BA()
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
 * Decompiled function f__B495_0F30_0008_3A5E()
 *
 * @name f__B495_0F30_0008_3A5E
 * @implements B495:0F30:0008:3A5E ()
 *
 * Called From: B495:00BE:0006:0240
 * Called From: B495:0134:0022:E7A6
 * Called From: B495:01F6:0018:107F
 * Called From: B495:03BE:0008:3F8A
 * Called From: B495:11A3:0009:4C12
 * Called From: B495:11AF:0004:07A2
 */
void f__B495_0F30_0008_3A5E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F38_0038_C532();
}

/**
 * Decompiled function f__B495_0F38_0038_C532()
 *
 * @name f__B495_0F38_0038_C532
 * @implements B495:0F38:0038:C532 ()
 *
 * Called From: B495:0F38:0008:3A5E
 */
void f__B495_0F38_0038_C532()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x26);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x15);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x45);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FBC));
	emu_incw(&emu_ax.x);
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x45);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x0F70);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0F6B; emu_last_length = 0x0038; emu_last_crc = 0xC532;
			emu_call();
			return;
	}
	f__B495_0F70_0008_F13E();
}

/**
 * Decompiled function f__B495_0F70_0008_F13E()
 *
 * @name f__B495_0F70_0008_F13E
 * @implements B495:0F70:0008:F13E ()
 *
 * Called From: B495:0F70:0038:C532
 */
void f__B495_0F70_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F78); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F78_0002_00E2();
}

/**
 * Decompiled function f__B495_0F78_0002_00E2()
 *
 * @name f__B495_0F78_0002_00E2
 * @implements B495:0F78:0002:00E2 ()
 *
 * Called From: B495:0F78:0008:F13E
 */
void f__B495_0F78_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F7A_000B_BADF()
 *
 * @name f__B495_0F7A_000B_BADF
 * @implements B495:0F7A:000B:BADF ()
 *
 * Called From: B495:156F:0007:77B4
 */
void f__B495_0F7A_000B_BADF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0F85); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0F85_0024_834B();
}

/**
 * Decompiled function f__B495_0F85_0024_834B()
 *
 * @name f__B495_0F85_0024_834B
 * @implements B495:0F85:0024:834B ()
 *
 * Called From: B495:0F85:000B:BADF
 */
void f__B495_0F85_0024_834B()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FA9); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0FA9_0008_F13E();
}

/**
 * Decompiled function f__B495_0FA9_0008_F13E()
 *
 * @name f__B495_0FA9_0008_F13E
 * @implements B495:0FA9:0008:F13E ()
 *
 * Called From: B495:0FA9:0024:834B
 */
void f__B495_0FA9_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FB1); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_0FB1_0009_F0FD();
}

/**
 * Decompiled function f__B495_0FB1_0009_F0FD()
 *
 * @name f__B495_0FB1_0009_F0FD
 * @implements B495:0FB1:0009:F0FD ()
 *
 * Called From: B495:0FB1:0008:F13E
 */
void f__B495_0FB1_0009_F0FD()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0FBA); f__B495_1230_001B_C015();
	f__B495_0FBA_0012_E42A();
}

/**
 * Decompiled function f__B495_0FBA_0012_E42A()
 *
 * @name f__B495_0FBA_0012_E42A
 * @implements B495:0FBA:0012:E42A ()
 *
 * Called From: B495:0FBA:0009:F0FD
 */
void f__B495_0FBA_0012_E42A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x0FCC; emu_last_cs = 0xB495; emu_last_ip = 0x0FC7; emu_last_length = 0x0012; emu_last_crc = 0xE42A; emu_call(); return; } // Jump does not resolve
	f__B495_104F_0025_9C31(); return;
}

/**
 * Decompiled function f__B495_104F_0025_9C31()
 *
 * @name f__B495_104F_0025_9C31
 * @implements B495:104F:0025:9C31 ()
 *
 * Called From: B495:0FC9:0012:E42A
 */
void f__B495_104F_0025_9C31()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1074); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1074_000C_276D();
}

/**
 * Decompiled function f__B495_1074_000C_276D()
 *
 * @name f__B495_1074_000C_276D
 * @implements B495:1074:000C:276D ()
 *
 * Called From: B495:1074:0025:9C31
 */
void f__B495_1074_000C_276D()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1080); f__B495_1230_001B_C015();
	f__B495_1080_0012_E42A();
}

/**
 * Decompiled function f__B495_1080_0012_E42A()
 *
 * @name f__B495_1080_0012_E42A
 * @implements B495:1080:0012:E42A ()
 *
 * Called From: B495:1080:000C:276D
 */
void f__B495_1080_0012_E42A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x1092; emu_last_cs = 0xB495; emu_last_ip = 0x108D; emu_last_length = 0x0012; emu_last_crc = 0xE42A; emu_call(); return; } // Jump does not resolve
	f__B495_1115_0024_58C3(); return;
}

/**
 * Decompiled function f__B495_1115_0024_58C3()
 *
 * @name f__B495_1115_0024_58C3
 * @implements B495:1115:0024:58C3 ()
 *
 * Called From: B495:108F:0012:E42A
 */
void f__B495_1115_0024_58C3()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1139_0007_7DFA();
}

/**
 * Decompiled function f__B495_1139_0007_7DFA()
 *
 * @name f__B495_1139_0007_7DFA
 * @implements B495:1139:0007:7DFA ()
 *
 * Called From: B495:1139:0024:58C3
 */
void f__B495_1139_0007_7DFA()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_119D_0009_4C12()
 *
 * @name f__B495_119D_0009_4C12
 * @implements B495:119D:0009:4C12 ()
 *
 * Called From: B495:018D:0009:70B5
 * Called From: B495:024A:0009:71FF
 */
void f__B495_119D_0009_4C12()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x11A6); f__B495_0F30_0008_3A5E();
	f__B495_11A6_0008_BEDE();
}

/**
 * Decompiled function f__B495_11A6_0008_BEDE()
 *
 * @name f__B495_11A6_0008_BEDE
 * @implements B495:11A6:0008:BEDE ()
 *
 * Called From: B495:11A6:0009:4C12
 */
void f__B495_11A6_0008_BEDE()
{
	emu_movw(&emu_di, 0x20);
	emu_push(emu_cs); emu_push(0x11AE); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_11AE_0004_07A2();
}

/**
 * Decompiled function f__B495_11AE_0004_07A2()
 *
 * @name f__B495_11AE_0004_07A2
 * @implements B495:11AE:0004:07A2 ()
 *
 * Called From: B495:11AE:0008:BEDE
 */
void f__B495_11AE_0004_07A2()
{
	emu_push(emu_cs);
	emu_push(0x11B2); f__B495_0F30_0008_3A5E();
	f__B495_11B2_0004_0776();
}

/**
 * Decompiled function f__B495_11B2_0004_0776()
 *
 * @name f__B495_11B2_0004_0776
 * @implements B495:11B2:0004:0776 ()
 *
 * Called From: B495:11B2:0004:07A2
 */
void f__B495_11B2_0004_0776()
{
	emu_xorw(&emu_si, emu_si);
	f__B495_11E3_0009_FAB7(); return;
}

/**
 * Decompiled function f__B495_11B6_0029_F106()
 *
 * @name f__B495_11B6_0029_F106
 * @implements B495:11B6:0029:F106 ()
 *
 * Called From: B495:11E6:0009:FAB7
 * Called From: B495:11E6:000D:42AA
 */
void f__B495_11B6_0029_F106()
{
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x11DF);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x11DA; emu_last_length = 0x0029; emu_last_crc = 0xF106;
			emu_call();
			return;
	}
	f__B495_11DF_000D_42AA();
}

/**
 * Decompiled function f__B495_11DF_000D_42AA()
 *
 * @name f__B495_11DF_000D_42AA
 * @implements B495:11DF:000D:42AA ()
 *
 * Called From: B495:11DF:0029:F106
 */
void f__B495_11DF_000D_42AA()
{
	emu_addws(&emu_sp, 0x10);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11B6_0029_F106(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B495_1219_000A_EFBD(); return;
}

/**
 * Decompiled function f__B495_11E3_0009_FAB7()
 *
 * @name f__B495_11E3_0009_FAB7
 * @implements B495:11E3:0009:FAB7 ()
 *
 * Called From: B495:11B4:0004:0776
 */
void f__B495_11E3_0009_FAB7()
{
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11B6_0029_F106(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x1219; emu_last_cs = 0xB495; emu_last_ip = 0x11EA; emu_last_length = 0x0009; emu_last_crc = 0xFAB7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_11EC_0029_A106()
 *
 * @name f__B495_11EC_0029_A106
 * @implements B495:11EC:0029:A106 ()
 *
 * Called From: B495:121C:000A:EFBD
 * Called From: B495:121C:000E:9F86
 */
void f__B495_11EC_0029_A106()
{
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6626);
	emu_push(0x1215);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: f__22A6_034F_000C_6447(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1210; emu_last_length = 0x0029; emu_last_crc = 0xA106;
			emu_call();
			return;
	}
	f__B495_1215_000E_9F86();
}

/**
 * Decompiled function f__B495_1215_000E_9F86()
 *
 * @name f__B495_1215_000E_9F86
 * @implements B495:1215:000E:9F86 ()
 *
 * Called From: B495:1215:0029:A106
 */
void f__B495_1215_000E_9F86()
{
	emu_addws(&emu_sp, 0x10);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11EC_0029_A106(); return; }
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1223_0008_B6AE();
}

/**
 * Decompiled function f__B495_1219_000A_EFBD()
 *
 * @name f__B495_1219_000A_EFBD
 * @implements B495:1219:000A:EFBD ()
 *
 * Called From: B495:11EA:000D:42AA
 */
void f__B495_1219_000A_EFBD()
{
	emu_cmpws(&emu_si, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_11EC_0029_A106(); return; }
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x2B6C; emu_ip = 0x138C; emu_last_cs = 0xB495; emu_last_ip = 0x121E; emu_last_length = 0x000A; emu_last_crc = 0xEFBD; emu_call(); // Jump does not resolve
	f__B495_1223_0008_B6AE();
}

/**
 * Decompiled function f__B495_1223_0008_B6AE()
 *
 * @name f__B495_1223_0008_B6AE
 * @implements B495:1223:0008:B6AE ()
 *
 * Called From: B495:1223:000E:9F86
 */
void f__B495_1223_0008_B6AE()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x122B); f__B495_0DC9_0010_2885();
	f__B495_122B_0005_0CC2();
}

/**
 * Decompiled function f__B495_122B_0005_0CC2()
 *
 * @name f__B495_122B_0005_0CC2
 * @implements B495:122B:0005:0CC2 ()
 *
 * Called From: B495:122B:0008:B6AE
 */
void f__B495_122B_0005_0CC2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1230_001B_C015()
 *
 * @name f__B495_1230_001B_C015
 * @implements B495:1230:001B:C015 ()
 *
 * Called From: B495:02CB:0009:9DF7
 * Called From: B495:08A8:0011:B20F
 * Called From: B495:0C29:0009:9C7D
 * Called From: B495:0FB7:0009:F0FD
 * Called From: B495:107D:000C:276D
 * Called From: B495:13F7:0005:0C44
 */
void f__B495_1230_001B_C015()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FB8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_orw(&emu_bx.x, emu_bx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1245_0006_1000(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	if ((emu_flags.sf != emu_flags.of)) { f__B495_124B_000E_24A4(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B495_1259_0002_00E2(); return;
}

/**
 * Decompiled function f__B495_1245_0006_1000()
 *
 * @name f__B495_1245_0006_1000
 * @implements B495:1245:0006:1000 ()
 *
 * Called From: B495:123D:001B:C015
 */
void f__B495_1245_0006_1000()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B495_1259_0002_00E2(); return;
}

/**
 * Decompiled function f__B495_1249_0002_03B0()
 *
 * @name f__B495_1249_0002_03B0
 * @implements B495:1249:0002:03B0 ()
 *
 * Called From: B495:1257:000E:24A4
 */
void f__B495_1249_0002_03B0()
{
	f__B495_1259_0002_00E2(); return;
}

/**
 * Decompiled function f__B495_124B_000E_24A4()
 *
 * @name f__B495_124B_000E_24A4
 * @implements B495:124B:000E:24A4 ()
 *
 * Called From: B495:1243:001B:C015
 */
void f__B495_124B_000E_24A4()
{
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, 0xB);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_ds);
	emu_addw(&emu_ax.x, 0x8BEA);
	f__B495_1249_0002_03B0(); return;
}

/**
 * Decompiled function f__B495_1259_0002_00E2()
 *
 * @name f__B495_1259_0002_00E2
 * @implements B495:1259:0002:00E2 ()
 *
 * Called From: B495:1249:0002:03B0
 * Called From: B495:1249:001B:C015
 * Called From: B495:1249:0006:1000
 */
void f__B495_1259_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_125B_0011_FB03()
 *
 * @name f__B495_125B_0011_FB03
 * @implements B495:125B:0011:FB03 ()
 *
 * Called From: B495:004B:0009:3230
 */
void f__B495_125B_0011_FB03()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x126C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_126C_0020_44EB();
}

/**
 * Decompiled function f__B495_126C_0020_44EB()
 *
 * @name f__B495_126C_0020_44EB
 * @implements B495:126C:0020:44EB ()
 *
 * Called From: B495:126C:0011:FB03
 */
void f__B495_126C_0020_44EB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
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
	emu_movw(&emu_ax.x, 0x188E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x128C); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_128C_0022_CEB1();
}

/**
 * Decompiled function f__B495_128C_0022_CEB1()
 *
 * @name f__B495_128C_0022_CEB1
 * @implements B495:128C:0022:CEB1 ()
 *
 * Called From: B495:128C:0020:44EB
 */
void f__B495_128C_0022_CEB1()
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
	emu_push(emu_cs); emu_push(0x12AE); emu_cs = 0x2BB6; f__2BB6_004F_0014_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_12AE_0028_809F();
}

/**
 * Decompiled function f__B495_12AE_0028_809F()
 *
 * @name f__B495_12AE_0028_809F
 * @implements B495:12AE:0028:809F ()
 *
 * Called From: B495:12AE:0022:CEB1
 */
void f__B495_12AE_0028_809F()
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
	emu_push(emu_cs); emu_push(0x12D6); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_12D6_004C_B262();
}

/**
 * Decompiled function f__B495_12D6_004C_B262()
 *
 * @name f__B495_12D6_004C_B262
 * @implements B495:12D6:004C:B262 ()
 *
 * Called From: B495:12D6:0028:809F
 */
void f__B495_12D6_004C_B262()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2C34);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB6));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2C34);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB7));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1322); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1322_0023_AD6A();
}

/**
 * Decompiled function f__B495_1322_0023_AD6A()
 *
 * @name f__B495_1322_0023_AD6A
 * @implements B495:1322:0023:AD6A ()
 *
 * Called From: B495:1322:004C:B262
 */
void f__B495_1322_0023_AD6A()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1345); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1345_001A_C658();
}

/**
 * Decompiled function f__B495_1345_001A_C658()
 *
 * @name f__B495_1345_001A_C658
 * @implements B495:1345:001A:C658 ()
 *
 * Called From: B495:1345:0023:AD6A
 */
void f__B495_1345_001A_C658()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FA8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FA6), emu_dx.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x135F); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_135F_000D_DEA1();
}

/**
 * Decompiled function f__B495_135F_000D_DEA1()
 *
 * @name f__B495_135F_000D_DEA1
 * @implements B495:135F:000D:DEA1 ()
 *
 * Called From: B495:135F:001A:C658
 */
void f__B495_135F_000D_DEA1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FB4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FB2), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x136C); f__B495_159D_0027_3A70();
	f__B495_136C_002C_BDA3();
}

/**
 * Decompiled function f__B495_136C_002C_BDA3()
 *
 * @name f__B495_136C_002C_BDA3
 * @implements B495:136C:002C:BDA3 ()
 *
 * Called From: B495:136C:000D:DEA1
 */
void f__B495_136C_002C_BDA3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x7FA6), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00,  0x7FA8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FB4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7FB2));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FAC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FAA), emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x1398); f__B495_1A29_0012_7EAA();
	f__B495_1398_002A_CA79();
}

/**
 * Decompiled function f__B495_1398_002A_CA79()
 *
 * @name f__B495_1398_002A_CA79
 * @implements B495:1398:002A:CA79 ()
 *
 * Called From: B495:1398:002C:BDA3
 */
void f__B495_1398_002A_CA79()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FAC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7FAA));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FB0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FAE), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x7FA6), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00,  0x7FA8), emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x13C2); f__B495_17E6_002B_8A2E();
	f__B495_13C2_0006_2FB4();
}

/**
 * Decompiled function f__B495_13C2_0006_2FB4()
 *
 * @name f__B495_13C2_0006_2FB4
 * @implements B495:13C2:0006:2FB4 ()
 *
 * Called From: B495:13C2:002A:CA79
 */
void f__B495_13C2_0006_2FB4()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	f__B495_13E8_000D_59DF(); return;
}

/**
 * Decompiled function f__B495_13C8_0013_CE5D()
 *
 * @name f__B495_13C8_0013_CE5D
 * @implements B495:13C8:0013:CE5D ()
 *
 * Called From: B495:13EB:000D:59DF
 * Called From: B495:13EB:0010:59BB
 */
void f__B495_13C8_0013_CE5D()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA2));
	emu_push(emu_cs); emu_push(0x13DB); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_13DB_000A_AC57();
}

/**
 * Decompiled function f__B495_13DB_000A_AC57()
 *
 * @name f__B495_13DB_000A_AC57
 * @implements B495:13DB:000A:AC57 ()
 *
 * Called From: B495:13DB:0013:CE5D
 */
void f__B495_13DB_000A_AC57()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13E5); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_13E5_0010_59BB();
}

/**
 * Decompiled function f__B495_13E5_0010_59BB()
 *
 * @name f__B495_13E5_0010_59BB
 * @implements B495:13E5:0010:59BB ()
 *
 * Called From: B495:13E5:000A:AC57
 */
void f__B495_13E5_0010_59BB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_13C8_0013_CE5D(); return; }
	emu_movw(&emu_di, 0x18);
	emu_xorw(&emu_si, emu_si);
	f__B495_1497_0008_F57E(); return;
}

/**
 * Decompiled function f__B495_13E8_000D_59DF()
 *
 * @name f__B495_13E8_000D_59DF
 * @implements B495:13E8:000D:59DF ()
 *
 * Called From: B495:13C6:0006:2FB4
 */
void f__B495_13E8_000D_59DF()
{
	emu_cmpws(&emu_si, 0x4);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_13C8_0013_CE5D(); return; }
	emu_movw(&emu_di, 0x18);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x1497; emu_last_cs = 0xB495; emu_last_ip = 0x13F2; emu_last_length = 0x000D; emu_last_crc = 0x59DF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_13F5_0005_0C44()
 *
 * @name f__B495_13F5_0005_0C44
 * @implements B495:13F5:0005:0C44 ()
 *
 * Called From: B495:149C:0008:F57E
 * Called From: B495:149C:000F:B101
 * Called From: B495:149C:000C:F170
 */
void f__B495_13F5_0005_0C44()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x13FA); f__B495_1230_001B_C015();
	f__B495_13FA_0012_E3BC();
}

/**
 * Decompiled function f__B495_13FA_0012_E3BC()
 *
 * @name f__B495_13FA_0012_E3BC
 * @implements B495:13FA:0012:E3BC ()
 *
 * Called From: B495:13FA:0005:0C44
 */
void f__B495_13FA_0012_E3BC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__B495_140C_004D_BF51(); return; }
	f__B495_1493_000C_F170(); return;
}

/**
 * Decompiled function f__B495_140C_004D_BF51()
 *
 * @name f__B495_140C_004D_BF51
 * @implements B495:140C:004D:BF51 ()
 *
 * Called From: B495:1407:0012:E3BC
 */
void f__B495_140C_004D_BF51()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0xFF);
	if (!emu_flags.zf) { f__B495_145E_0032_DCD9(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FAA));
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1459); emu_cs = 0x2903; emu_ip = 0x15B1; emu_last_cs = 0xB495; emu_last_ip = 0x1454; emu_last_length = 0x004D; emu_last_crc = 0xBF51; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_145E_0032_DCD9()
 *
 * @name f__B495_145E_0032_DCD9
 * @implements B495:145E:0032:DCD9 ()
 *
 * Called From: B495:1418:004D:BF51
 */
void f__B495_145E_0032_DCD9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x7));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1490); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1490_000F_B101();
}

/**
 * Decompiled function f__B495_1490_000F_B101()
 *
 * @name f__B495_1490_000F_B101
 * @implements B495:1490:000F:B101 ()
 *
 * Called From: B495:1490:0032:DCD9
 */
void f__B495_1490_000F_B101()
{
	emu_addws(&emu_sp, 0xE);
	emu_addws(&emu_di, 0x20);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x149F; emu_last_cs = 0xB495; emu_last_ip = 0x149A; emu_last_length = 0x000F; emu_last_crc = 0xB101; emu_call(); return; } // Jump does not resolve
	f__B495_13F5_0005_0C44(); return;
}

/**
 * Decompiled function f__B495_1493_000C_F170()
 *
 * @name f__B495_1493_000C_F170
 * @implements B495:1493:000C:F170 ()
 *
 * Called From: B495:1409:0012:E3BC
 */
void f__B495_1493_000C_F170()
{
	emu_addws(&emu_di, 0x20);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_149F_0036_B57C(); return; }
	f__B495_13F5_0005_0C44(); return;
}

/**
 * Decompiled function f__B495_1497_0008_F57E()
 *
 * @name f__B495_1497_0008_F57E
 * @implements B495:1497:0008:F57E ()
 *
 * Called From: B495:13F2:0010:59BB
 */
void f__B495_1497_0008_F57E()
{
	emu_cmpws(&emu_si, 0x4);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x149F; emu_last_cs = 0xB495; emu_last_ip = 0x149A; emu_last_length = 0x0008; emu_last_crc = 0xF57E; emu_call(); return; } // Jump does not resolve
	f__B495_13F5_0005_0C44(); return;
}

/**
 * Decompiled function f__B495_149F_0036_B57C()
 *
 * @name f__B495_149F_0036_B57C
 * @implements B495:149F:0036:B57C ()
 *
 * Called From: B495:149A:000C:F170
 */
void f__B495_149F_0036_B57C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FBC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FB8), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FB0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FAE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x740F));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs); emu_push(0x14D5); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_14D5_0026_CE6F();
}

/**
 * Decompiled function f__B495_14D5_0026_CE6F()
 *
 * @name f__B495_14D5_0026_CE6F
 * @implements B495:14D5:0026:CE6F ()
 *
 * Called From: B495:14D5:0036:B57C
 */
void f__B495_14D5_0026_CE6F()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x14FB); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_14FB_000E_96ED();
}

/**
 * Decompiled function f__B495_14FB_000E_96ED()
 *
 * @name f__B495_14FB_000E_96ED
 * @implements B495:14FB:000E:96ED ()
 *
 * Called From: B495:14FB:0026:CE6F
 */
void f__B495_14FB_000E_96ED()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1509); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1509_0007_2B1E();
}

/**
 * Decompiled function f__B495_1509_0007_2B1E()
 *
 * @name f__B495_1509_0007_2B1E
 * @implements B495:1509:0007:2B1E ()
 *
 * Called From: B495:1509:000E:96ED
 */
void f__B495_1509_0007_2B1E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x1510); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1510_0020_7795();
}

/**
 * Decompiled function f__B495_1510_0020_7795()
 *
 * @name f__B495_1510_0020_7795
 * @implements B495:1510:0020:7795 ()
 *
 * Called From: B495:1510:0007:2B1E
 */
void f__B495_1510_0020_7795()
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
	emu_push(emu_cs); emu_push(0x1530); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1530_0008_F13E();
}

/**
 * Decompiled function f__B495_1530_0008_F13E()
 *
 * @name f__B495_1530_0008_F13E
 * @implements B495:1530:0008:F13E ()
 *
 * Called From: B495:1530:0020:7795
 */
void f__B495_1530_0008_F13E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1538); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1538_0012_547D();
}

/**
 * Decompiled function f__B495_1538_0012_547D()
 *
 * @name f__B495_1538_0012_547D
 * @implements B495:1538:0012:547D ()
 *
 * Called From: B495:1538:0008:F13E
 */
void f__B495_1538_0012_547D()
{
	emu_movw(&emu_ax.x, 0x17);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x48);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666E);
	emu_push(0x154A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_D20B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1545; emu_last_length = 0x0012; emu_last_crc = 0x547D;
			emu_call();
			return;
	}
	f__B495_154A_0021_44EB();
}

/**
 * Decompiled function f__B495_154A_0021_44EB()
 *
 * @name f__B495_154A_0021_44EB
 * @implements B495:154A:0021:44EB ()
 *
 * Called From: B495:154A:0012:547D
 */
void f__B495_154A_0021_44EB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x70);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x156B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x1566; emu_last_length = 0x0021; emu_last_crc = 0x44EB;
			emu_call();
			return;
	}
	f__B495_156B_0007_77B4();
}

/**
 * Decompiled function f__B495_156B_0007_77B4()
 *
 * @name f__B495_156B_0007_77B4
 * @implements B495:156B:0007:77B4 ()
 *
 * Called From: B495:156B:0021:44EB
 */
void f__B495_156B_0007_77B4()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_cs);
	emu_push(0x1572); f__B495_0F7A_000B_BADF();
	f__B495_1572_0008_566A();
}

/**
 * Decompiled function f__B495_1572_0008_566A()
 *
 * @name f__B495_1572_0008_566A
 * @implements B495:1572:0008:566A ()
 *
 * Called From: B495:1572:0007:77B4
 */
void f__B495_1572_0008_566A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x157A); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_157A_0005_0D0A();
}

/**
 * Decompiled function f__B495_157A_0005_0D0A()
 *
 * @name f__B495_157A_0005_0D0A
 * @implements B495:157A:0005:0D0A ()
 *
 * Called From: B495:157A:0008:566A
 */
void f__B495_157A_0005_0D0A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x157F); f__B495_089A_0011_B20F();
	f__B495_157F_000D_9D07();
}

/**
 * Decompiled function f__B495_157F_000D_9D07()
 *
 * @name f__B495_157F_000D_9D07
 * @implements B495:157F:000D:9D07 ()
 *
 * Called From: B495:157F:0005:0D0A
 */
void f__B495_157F_000D_9D07()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x158C); emu_cs = 0x10E4; f__10E4_0675_0026_5758();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_158C_000A_3DEB();
}

/**
 * Decompiled function f__B495_158C_000A_3DEB()
 *
 * @name f__B495_158C_000A_3DEB
 * @implements B495:158C:000A:3DEB ()
 *
 * Called From: B495:158C:000D:9D07
 */
void f__B495_158C_000A_3DEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1596); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1596_0007_3FFA();
}

/**
 * Decompiled function f__B495_1596_0007_3FFA()
 *
 * @name f__B495_1596_0007_3FFA
 * @implements B495:1596:0007:3FFA ()
 *
 * Called From: B495:1596:000A:3DEB
 */
void f__B495_1596_0007_3FFA()
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
 * Decompiled function f__B495_159D_0027_3A70()
 *
 * @name f__B495_159D_0027_3A70
 * @implements B495:159D:0027:3A70 ()
 *
 * Called From: B495:1369:000D:DEA1
 */
void f__B495_159D_0027_3A70()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FB4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7FB2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, 0x30C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x15C4); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_15C4_0022_5591();
}

/**
 * Decompiled function f__B495_15C4_0022_5591()
 *
 * @name f__B495_15C4_0022_5591
 * @implements B495:15C4:0022:5591 ()
 *
 * Called From: B495:15C4:0027:3A70
 */
void f__B495_15C4_0022_5591()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2C34);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x15E6); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_15E6_000C_F51C();
}

/**
 * Decompiled function f__B495_15E6_000C_F51C()
 *
 * @name f__B495_15E6_000C_F51C
 * @implements B495:15E6:000C:F51C ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B495_15E6_000C_F51C()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__B495_17C0_0008_F70C(); return;
}

/**
 * Decompiled function f__B495_15F2_004B_F4D7()
 *
 * @name f__B495_15F2_004B_F4D7
 * @implements B495:15F2:004B:F4D7 ()
 *
 * Called From: B495:17C5:0008:F70C
 * Called From: B495:17C5:001E:2871
 * Called From: B495:17C5:0011:CA3C
 * Called From: B495:17C5:000D:CB0D
 */
void f__B495_15F2_004B_F4D7()
{
	emu_cmpws(&emu_si, 0xC);
	if (!emu_flags.zf) { f__B495_15FE_003F_525C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_06B2(); return; }
	emu_cmpws(&emu_si, 0xB);
	if (!emu_flags.zf) { emu_ip = 0x160A; emu_last_cs = 0xB495; emu_last_ip = 0x1601; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1608; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x8);
	if (!emu_flags.zf) { emu_ip = 0x1616; emu_last_cs = 0xB495; emu_last_ip = 0x160D; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1614; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x9);
	if (!emu_flags.zf) { emu_ip = 0x1622; emu_last_cs = 0xB495; emu_last_ip = 0x1619; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1620; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xA);
	if (!emu_flags.zf) { emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x004B; emu_last_crc = 0xF4D7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_15FE_003F_525C()
 *
 * @name f__B495_15FE_003F_525C
 * @implements B495:15FE:003F:525C ()
 *
 * Called From: B495:15F5:004B:F4D7
 */
void f__B495_15FE_003F_525C()
{
	emu_cmpws(&emu_si, 0xB);
	if (!emu_flags.zf) { f__B495_160A_0033_DA06(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1608; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x8);
	if (!emu_flags.zf) { f__B495_1616_0027_49A8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1614; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x9);
	if (!emu_flags.zf) { emu_ip = 0x1622; emu_last_cs = 0xB495; emu_last_ip = 0x1619; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1620; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xA);
	if (!emu_flags.zf) { emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x003F; emu_last_crc = 0x525C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_160A_0033_DA06()
 *
 * @name f__B495_160A_0033_DA06
 * @implements B495:160A:0033:DA06 ()
 *
 * Called From: B495:1601:003F:525C
 */
void f__B495_160A_0033_DA06()
{
	emu_cmpws(&emu_si, 0x8);
	if (!emu_flags.zf) { f__B495_1616_0027_49A8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_06B2(); return; }
	emu_cmpws(&emu_si, 0x9);
	if (!emu_flags.zf) { emu_ip = 0x1622; emu_last_cs = 0xB495; emu_last_ip = 0x1619; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x1620; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xA);
	if (!emu_flags.zf) { emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x0033; emu_last_crc = 0xDA06; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_1616_0027_49A8()
 *
 * @name f__B495_1616_0027_49A8
 * @implements B495:1616:0027:49A8 ()
 *
 * Called From: B495:160D:0033:DA06
 * Called From: B495:160D:003F:525C
 */
void f__B495_1616_0027_49A8()
{
	emu_cmpws(&emu_si, 0x9);
	if (!emu_flags.zf) { f__B495_1622_001B_B362(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_06B2(); return; }
	emu_cmpws(&emu_si, 0xA);
	if (!emu_flags.zf) { emu_ip = 0x162E; emu_last_cs = 0xB495; emu_last_ip = 0x1625; emu_last_length = 0x0027; emu_last_crc = 0x49A8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x163A; emu_last_cs = 0xB495; emu_last_ip = 0x162C; emu_last_length = 0x0027; emu_last_crc = 0x49A8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x0027; emu_last_crc = 0x49A8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x0027; emu_last_crc = 0x49A8; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x0027; emu_last_crc = 0x49A8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_1622_001B_B362()
 *
 * @name f__B495_1622_001B_B362
 * @implements B495:1622:001B:B362 ()
 *
 * Called From: B495:1619:0027:49A8
 */
void f__B495_1622_001B_B362()
{
	emu_cmpws(&emu_si, 0xA);
	if (!emu_flags.zf) { f__B495_162E_000F_19D9(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_163A_0003_06B2(); return; }
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1631; emu_last_length = 0x001B; emu_last_crc = 0xB362; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x001B; emu_last_crc = 0xB362; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x17BB; emu_last_cs = 0xB495; emu_last_ip = 0x163A; emu_last_length = 0x001B; emu_last_crc = 0xB362; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_162E_000F_19D9()
 *
 * @name f__B495_162E_000F_19D9
 * @implements B495:162E:000F:19D9 ()
 *
 * Called From: B495:1625:001B:B362
 */
void f__B495_162E_000F_19D9()
{
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { f__B495_163D_005C_9CBF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x163D; emu_last_cs = 0xB495; emu_last_ip = 0x1638; emu_last_length = 0x000F; emu_last_crc = 0x19D9; emu_call(); return; } // Jump does not resolve
	f__B495_17BB_000D_CB0D(); return;
}

/**
 * Decompiled function f__B495_163A_0003_06B2()
 *
 * @name f__B495_163A_0003_06B2
 * @implements B495:163A:0003:06B2 ()
 *
 * Called From: B495:15FC:004B:F4D7
 * Called From: B495:1614:0033:DA06
 * Called From: B495:1620:0027:49A8
 * Called From: B495:162C:001B:B362
 */
void f__B495_163A_0003_06B2()
{
	f__B495_17BB_000D_CB0D(); return;
}

/**
 * Decompiled function f__B495_163D_005C_9CBF()
 *
 * @name f__B495_163D_005C_9CBF
 * @implements B495:163D:005C:9CBF ()
 *
 * Called From: B495:1631:000F:19D9
 */
void f__B495_163D_005C_9CBF()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2E);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B495_1699_000C_CC8F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B495_16B5_0065_E6F0(); return;
}

/**
 * Decompiled function f__B495_1699_000C_CC8F()
 *
 * @name f__B495_1699_000C_CC8F
 * @implements B495:1699:000C:CC8F ()
 *
 * Called From: B495:168C:005C:9CBF
 */
void f__B495_1699_000C_CC8F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_cs); emu_push(0x16A5); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_16A5_000F_7E60();
}

/**
 * Decompiled function f__B495_16A5_000F_7E60()
 *
 * @name f__B495_16A5_000F_7E60
 * @implements B495:16A5:000F:7E60 ()
 *
 * Called From: B495:16A5:000C:CC8F
 */
void f__B495_16A5_000F_7E60()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29DA; f__29DA_00D0_0013_27E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_16B4_0066_F0B0();
}

/**
 * Decompiled function f__B495_16B4_0066_F0B0()
 *
 * @name f__B495_16B4_0066_F0B0
 * @implements B495:16B4:0066:F0B0 ()
 *
 * Called From: B495:16B4:000F:7E60
 */
void f__B495_16B4_0066_F0B0()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0xFF);
	if (!emu_flags.zf) { f__B495_171A_0084_190D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x0);
	emu_ip = 0x1787; emu_last_cs = 0xB495; emu_last_ip = 0x1718; emu_last_length = 0x0066; emu_last_crc = 0xF0B0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_16B5_0065_E6F0()
 *
 * @name f__B495_16B5_0065_E6F0
 * @implements B495:16B5:0065:E6F0 ()
 *
 * Called From: B495:1697:005C:9CBF
 */
void f__B495_16B5_0065_E6F0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0xFF);
	if (!emu_flags.zf) { f__B495_171A_0084_190D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x0);
	f__B495_1787_0017_F98A(); return;
}

/**
 * Decompiled function f__B495_171A_0084_190D()
 *
 * @name f__B495_171A_0084_190D
 * @implements B495:171A:0084:190D ()
 *
 * Called From: B495:16FE:0065:E6F0
 * Called From: B495:16FE:0066:F0B0
 */
void f__B495_171A_0084_190D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x446));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x444));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_dx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x17AA; emu_last_cs = 0xB495; emu_last_ip = 0x1789; emu_last_length = 0x0084; emu_last_crc = 0x190D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA2));
	emu_push(emu_cs); emu_push(0x179E); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_179E_000C_67C1();
}

/**
 * Decompiled function f__B495_1787_0017_F98A()
 *
 * @name f__B495_1787_0017_F98A
 * @implements B495:1787:0017:F98A ()
 *
 * Called From: B495:1718:0065:E6F0
 */
void f__B495_1787_0017_F98A()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B495_17AA_001E_2871(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA2));
	emu_push(emu_cs); emu_push(0x179E); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_179E_000C_67C1();
}

/**
 * Decompiled function f__B495_179E_000C_67C1()
 *
 * @name f__B495_179E_000C_67C1
 * @implements B495:179E:000C:67C1 ()
 *
 * Called From: B495:179E:0017:F98A
 * Called From: B495:179E:0084:190D
 */
void f__B495_179E_000C_67C1()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FA4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FA2), emu_ax.x);
	f__B495_17B7_0011_CA3C(); return;
}

/**
 * Decompiled function f__B495_17AA_001E_2871()
 *
 * @name f__B495_17AA_001E_2871
 * @implements B495:17AA:001E:2871 ()
 *
 * Called From: B495:1789:0017:F98A
 */
void f__B495_17AA_001E_2871()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FA4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FA2), emu_dx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { emu_ip = 0x17C8; emu_last_cs = 0xB495; emu_last_ip = 0x17C3; emu_last_length = 0x001E; emu_last_crc = 0x2871; emu_call(); return; } // Jump does not resolve
	f__B495_15F2_004B_F4D7(); return;
}

/**
 * Decompiled function f__B495_17B7_0011_CA3C()
 *
 * @name f__B495_17B7_0011_CA3C
 * @implements B495:17B7:0011:CA3C ()
 *
 * Called From: B495:17A8:000C:67C1
 */
void f__B495_17B7_0011_CA3C()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { emu_ip = 0x17C8; emu_last_cs = 0xB495; emu_last_ip = 0x17C3; emu_last_length = 0x0011; emu_last_crc = 0xCA3C; emu_call(); return; } // Jump does not resolve
	f__B495_15F2_004B_F4D7(); return;
}

/**
 * Decompiled function f__B495_17BB_000D_CB0D()
 *
 * @name f__B495_17BB_000D_CB0D
 * @implements B495:17BB:000D:CB0D ()
 *
 * Called From: B495:163A:000F:19D9
 * Called From: B495:163A:0003:06B2
 */
void f__B495_17BB_000D_CB0D()
{
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { f__B495_17C8_000D_CFED(); return; }
	f__B495_15F2_004B_F4D7(); return;
}

/**
 * Decompiled function f__B495_17C0_0008_F70C()
 *
 * @name f__B495_17C0_0008_F70C
 * @implements B495:17C0:0008:F70C ()
 *
 * Called From: B495:15EF:000C:F51C
 */
void f__B495_17C0_0008_F70C()
{
	emu_cmpws(&emu_si, 0xD);
	if (!emu_flags.cf) { emu_ip = 0x17C8; emu_last_cs = 0xB495; emu_last_ip = 0x17C3; emu_last_length = 0x0008; emu_last_crc = 0xF70C; emu_call(); return; } // Jump does not resolve
	f__B495_15F2_004B_F4D7(); return;
}

/**
 * Decompiled function f__B495_17C8_000D_CFED()
 *
 * @name f__B495_17C8_000D_CFED
 * @implements B495:17C8:000D:CFED ()
 *
 * Called From: B495:17C3:000D:CB0D
 */
void f__B495_17C8_000D_CFED()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FA2));
	emu_push(emu_cs); emu_push(0x17D5); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_17D5_000B_248E();
}

/**
 * Decompiled function f__B495_17D5_000B_248E()
 *
 * @name f__B495_17D5_000B_248E
 * @implements B495:17D5:000B:248E ()
 *
 * Called From: B495:17D5:000D:CFED
 */
void f__B495_17D5_000B_248E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x3C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	f__B495_17E0_0006_137A(); return;
}

/**
 * Decompiled function f__B495_17E0_0006_137A()
 *
 * @name f__B495_17E0_0006_137A
 * @implements B495:17E0:0006:137A ()
 *
 * Called From: B495:17DE:000B:248E
 */
void f__B495_17E0_0006_137A()
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
 * Decompiled function f__B495_17E6_002B_8A2E()
 *
 * @name f__B495_17E6_002B_8A2E
 * @implements B495:17E6:002B:8A2E ()
 *
 * Called From: B495:13BF:002A:CA79
 */
void f__B495_17E6_002B_8A2E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FBA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FBC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FB8), 0x0);
	emu_movw(&emu_ax.x, 0x113);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8BEA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1811_002F_9CC0();
}

/**
 * Decompiled function f__B495_1811_002F_9CC0()
 *
 * @name f__B495_1811_002F_9CC0
 * @implements B495:1811:002F:9CC0 ()
 *
 * Called From: B495:1811:002B:8A2E
 */
void f__B495_1811_002F_9CC0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8BEA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FC2), 0x0);
	if (emu_flags.zf) { f__B495_187A_0015_897B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38AC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38AE));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1840); emu_cs = 0x01F7; emu_ip = 0x1D20; emu_last_cs = 0xB495; emu_last_ip = 0x183B; emu_last_length = 0x002F; emu_last_crc = 0x9CC0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_187A_0015_897B()
 *
 * @name f__B495_187A_0015_897B
 * @implements B495:187A:0015:897B ()
 *
 * Called From: B495:1821:002F:9CC0
 */
void f__B495_187A_0015_897B()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7418), 0x0);
	if (!emu_flags.zf) { f__B495_18F7_000E_0125(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x18F0; emu_last_cs = 0xB495; emu_last_ip = 0x188D; emu_last_length = 0x0015; emu_last_crc = 0x897B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B495_18F7_000E_0125()
 *
 * @name f__B495_18F7_000E_0125
 * @implements B495:18F7:000E:0125 ()
 *
 * Called From: B495:187F:0015:897B
 */
void f__B495_18F7_000E_0125()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	emu_xorw(&emu_si, emu_si);
	f__B495_1962_001A_50B8(); return;
}

/**
 * Decompiled function f__B495_1905_0077_C812()
 *
 * @name f__B495_1905_0077_C812
 * @implements B495:1905:0077:C812 ()
 *
 * Called From: B495:1965:001A:50B8
 * Called From: B495:1965:0030:EE22
 * Called From: B495:1965:001F:D0BF
 * Called From: B495:1965:0027:BAFC
 */
void f__B495_1905_0077_C812()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x0);
	if (emu_flags.zf) { f__B495_195D_001F_D0BF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x7), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x3), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x20));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5), emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B495_194C_0030_EE22(); return; }
	emu_cmpws(&emu_si, 0x1);
	if (!emu_flags.zf) { f__B495_1955_0027_BAFC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5), 0x64);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1905; emu_last_cs = 0xB495; emu_last_ip = 0x1965; emu_last_length = 0x0077; emu_last_crc = 0xC812; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x0077; emu_last_crc = 0xC812; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x18AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x1BEF; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0077; emu_last_crc = 0xC812; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_194C_0030_EE22()
 *
 * @name f__B495_194C_0030_EE22
 * @implements B495:194C:0030:EE22 ()
 *
 * Called From: B495:1945:0077:C812
 */
void f__B495_194C_0030_EE22()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5), 0x64);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_C812(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x0030; emu_last_crc = 0xEE22; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x18AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x1BEF; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0030; emu_last_crc = 0xEE22; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_1955_0027_BAFC()
 *
 * @name f__B495_1955_0027_BAFC
 * @implements B495:1955:0027:BAFC ()
 *
 * Called From: B495:194A:0077:C812
 */
void f__B495_1955_0027_BAFC()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_C812(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x0027; emu_last_crc = 0xBAFC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x18AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x1BEF; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x0027; emu_last_crc = 0xBAFC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_195D_001F_D0BF()
 *
 * @name f__B495_195D_001F_D0BF
 * @implements B495:195D:001F:D0BF ()
 *
 * Called From: B495:190D:0077:C812
 */
void f__B495_195D_001F_D0BF()
{
	emu_incw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_C812(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBA), 0x0);
	if (!emu_flags.zf) { f__B495_198D_001A_1453(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x18AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x1BEF; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x001F; emu_last_crc = 0xD0BF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_1962_001A_50B8()
 *
 * @name f__B495_1962_001A_50B8
 * @implements B495:1962:001A:50B8 ()
 *
 * Called From: B495:1903:000E:0125
 */
void f__B495_1962_001A_50B8()
{
	emu_cmpws(&emu_si, 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__B495_1905_0077_C812(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7FBA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x198D; emu_last_cs = 0xB495; emu_last_ip = 0x196C; emu_last_length = 0x001A; emu_last_crc = 0x50B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x18AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; emu_ip = 0x1BEF; emu_last_cs = 0xB495; emu_last_ip = 0x1977; emu_last_length = 0x001A; emu_last_crc = 0x50B8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B495_198D_001A_1453()
 *
 * @name f__B495_198D_001A_1453
 * @implements B495:198D:001A:1453 ()
 *
 * Called From: B495:196C:001F:D0BF
 */
void f__B495_198D_001A_1453()
{
	emu_movw(&emu_ax.x, 0x3495);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x98);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FBA));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8BEA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x19A7); emu_cs = 0x01F7; f__01F7_325B_0026_41F1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_19A7_0009_D77B();
}

/**
 * Decompiled function f__B495_19A7_0009_D77B()
 *
 * @name f__B495_19A7_0009_D77B
 * @implements B495:19A7:0009:D77B ()
 *
 * Called From: B495:19A7:001A:1453
 */
void f__B495_19A7_0009_D77B()
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
 * Decompiled function f__B495_1A14_0013_03AE()
 *
 * @name f__B495_1A14_0013_03AE
 * @implements B495:1A14:0013:03AE ()
 *
 * Called From: 3495:0098:0005:1CE0
 * Called From: 3495:0098:0005:1F10
 */
void f__B495_1A14_0013_03AE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5));
	f__B495_1A27_0002_00E2(); return;
}

/**
 * Decompiled function f__B495_1A27_0002_00E2()
 *
 * @name f__B495_1A27_0002_00E2
 * @implements B495:1A27:0002:00E2 ()
 *
 * Called From: B495:1A25:0013:03AE
 */
void f__B495_1A27_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1A29_0012_7EAA()
 *
 * @name f__B495_1A29_0012_7EAA
 * @implements B495:1A29:0012:7EAA ()
 *
 * Called From: B495:1395:002C:BDA3
 */
void f__B495_1A29_0012_7EAA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x18D0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1A3B); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1A3B_001A_C341();
}

/**
 * Decompiled function f__B495_1A3B_001A_C341()
 *
 * @name f__B495_1A3B_001A_C341
 * @implements B495:1A3B:001A:C341 ()
 *
 * Called From: B495:1A3B:0012:7EAA
 */
void f__B495_1A3B_001A_C341()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x100);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7FAA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A55); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1A55_0009_CF13();
}

/**
 * Decompiled function f__B495_1A55_0009_CF13()
 *
 * @name f__B495_1A55_0009_CF13
 * @implements B495:1A55:0009:CF13 ()
 *
 * Called From: B495:1A55:001A:C341
 */
void f__B495_1A55_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A5E); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	f__B495_1A5E_0008_60A4();
}

/**
 * Decompiled function f__B495_1A5E_0008_60A4()
 *
 * @name f__B495_1A5E_0008_60A4
 * @implements B495:1A5E:0008:60A4 ()
 *
 * Called From: B495:1A5E:0009:CF13
 */
void f__B495_1A5E_0008_60A4()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x100);
	f__B495_1A66_0003_0212(); return;
}

/**
 * Decompiled function f__B495_1A66_0003_0212()
 *
 * @name f__B495_1A66_0003_0212
 * @implements B495:1A66:0003:0212 ()
 *
 * Called From: B495:1A64:0008:60A4
 */
void f__B495_1A66_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
