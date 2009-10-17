/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B495_0000_0022_1CF6()
 *
 * @name f__B495_0000_0022_1CF6
 * @implements B495:0000:0022:1CF6 ()
 * @implements B495:0022:0023:E778
 * @implements B495:0045:0009:4120
 * @implements B495:004E:0009:3E41
 * @implements B495:0057:0009:758E
 * @implements B495:0060:000C:1509
 * @implements B495:006C:000A:DBF9
 * @implements B495:0076:000E:1017
 * @implements B495:0084:0012:EA5B
 * @implements B495:0096:0007:73D6
 * @implements B495:0098:0005:1765
 * @implements B495:009D:0014:3443
 * @implements B495:00B1:000A:87F5
 * @implements B495:00BB:0006:5A9A
 * @implements B495:00C1:001C:D772
 * @implements B495:00DD:0010:2CBB
 * @implements B495:00ED:000D:2372
 * @implements B495:00FA:0004:893F
 *
 * Called From: 3495:0020:0005:0000
 */
void f__B495_0000_0022_1CF6()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0022;
l__0022:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x8BE8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ds, 0x00, 0x7FC2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x7FBE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7FB6) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0045;
l__0045:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x004E); f__B495_125B_0011_10C0();
	goto l__004E;
l__004E:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0057); f__B495_0DC9_0010_C643();
	goto l__0057;
l__0057:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x7FC0) = 0xFFFF;
	goto l__009D;
l__0060:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__006C;
l__006C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0076); f__B495_0DC9_0010_C643();
	goto l__0076;
l__0076:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x0084); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0084;
l__0084:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x6E);
	if (emu_ax != 0x6E) goto l__0098;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0096); f__B495_030B_001D_B90C();
	goto l__0096;
l__0096:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0098;
l__0098:
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__009D;
l__009D:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC0), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC0) == 0xFFFF) goto l__0060;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__00B1;
l__00B1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__00BB;
l__00BB:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x00C1); f__B495_0F30_0008_857D();
	goto l__00C1;
l__00C1:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00DD); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__00DD;
l__00DD:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x00ED); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__00ED;
l__00ED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38B6) = 0xFFFF;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FC0);
	goto l__00FA;
l__00FA:
	emu_sp = emu_bp;
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
 * @implements B495:0115:0022:C0E7
 * @implements B495:0137:000D:994C
 * @implements B495:0144:0006:97C3
 * @implements B495:014A:0029:416B
 * @implements B495:0173:000A:A88E
 * @implements B495:017D:0003:C21A
 * @implements B495:0180:0007:C661
 * @implements B495:0187:0009:F0DE
 * @implements B495:0190:0004:59FF
 * @implements B495:0192:0002:C13A
 * @implements B495:0196:0008:4D0B
 * @implements B495:019E:0013:FADA
 * @implements B495:01B1:000E:814C
 * @implements B495:01BF:0008:4F72
 * @implements B495:01C7:0004:DE52
 *
 * Called From: 3495:0025:0005:0000
 */
void f__B495_00FE_0017_4E8B()
{
l__00FE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_si;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0115;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) { /* Unresolved jump */ emu_ip = 0x014B; emu_last_cs = 0xB495; emu_last_ip = 0x0110; emu_last_length = 0x0017; emu_last_crc = 0x4E8B; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0194; emu_last_cs = 0xB495; emu_last_ip = 0x0112; emu_last_length = 0x0017; emu_last_crc = 0x4E8B; emu_call();
l__0115:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), 0x3);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x7FBC) >= (int16)0x3) goto l__014A;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FBC);
	emu_incw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x7FBA)) goto l__014A;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0xA;
	emu_push(emu_cs);
	emu_push(0x0137); f__B495_0F30_0008_857D();
	goto l__0137;
l__0137:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0144); f__B495_0DC9_0010_C643();
	goto l__0144;
l__0144:
	emu_pop(&emu_cx);
	emu_di = 0x1;
	goto l__0196;
l__014A:
	emu_incw(&emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FB8);
	emu_addw(&emu_ax, 0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x7FBA)) goto l__0180;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0xA;
	emu_di = 0x1;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0173); f__B495_1140_0009_13F2();
	goto l__0173;
l__0173:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x017D); f__B495_0DC9_0010_C643();
	goto l__017D;
l__017D:
	emu_pop(&emu_cx);
	goto l__0192;
l__0180:
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs);
	emu_push(0x0187); f__B495_089A_0011_B26C();
	goto l__0187;
l__0187:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0190); f__B495_119D_0009_53E9();
	goto l__0190;
l__0190:
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	goto l__0192;
l__0192:
	goto l__0196;
l__0196:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x019E); f__B495_0DC9_0010_C643();
	goto l__019E;
l__019E:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0196;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_push(emu_cs);
		emu_push(0x01B1); f__B495_089A_0011_B26C();
	}
	goto l__01B1;
l__01B1:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01BF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__01BF;
l__01BF:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__01C7;
l__01C7:
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
 * @implements B495:01E1:0018:D88B
 * @implements B495:01F9:000D:1A5D
 * @implements B495:0206:0006:9243
 * @implements B495:020C:0021:C120
 * @implements B495:022D:000D:9E8C
 * @implements B495:023A:0003:C21A
 * @implements B495:023D:0007:86F0
 * @implements B495:0244:0009:BF49
 * @implements B495:024D:0004:59FF
 * @implements B495:024F:0002:C13A
 * @implements B495:0253:0008:0E9A
 * @implements B495:025B:0013:BAEB
 * @implements B495:026E:000E:814C
 * @implements B495:027C:0008:4F72
 * @implements B495:0284:0004:DE52
 *
 * Called From: 3495:002A:0005:0000
 */
void f__B495_01CB_0016_9CD0()
{
l__01CB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_ax = emu_si;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__01E1;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0xB495; emu_last_ip = 0x01DD; emu_last_length = 0x0016; emu_last_crc = 0x9CD0; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0251; emu_last_cs = 0xB495; emu_last_ip = 0x01DF; emu_last_length = 0x0016; emu_last_crc = 0x9CD0; emu_call();
l__01E1:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FBC) == 0x0) goto l__020C;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0xA;
	emu_push(emu_cs);
	emu_push(0x01F9); f__B495_0F30_0008_857D();
	goto l__01F9;
l__01F9:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0206); f__B495_0DC9_0010_C643();
	goto l__0206;
l__0206:
	emu_pop(&emu_cx);
	emu_di = 0x1;
	goto l__0253;
l__020C:
	emu_incw(&emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FB8) == 0x0) goto l__023D;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0xA;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x7FB8));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x022D); f__B495_1140_0009_13F2();
	goto l__022D;
l__022D:
	emu_pop(&emu_cx);
	emu_di = 0x1;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x023A); f__B495_0DC9_0010_C643();
	goto l__023A;
l__023A:
	emu_pop(&emu_cx);
	goto l__024F;
l__023D:
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_cs);
	emu_push(0x0244); f__B495_089A_0011_B26C();
	goto l__0244;
l__0244:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x024D); f__B495_119D_0009_53E9();
	goto l__024D;
l__024D:
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	goto l__024F;
l__024F:
	goto l__0253;
l__0253:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025B); f__B495_0DC9_0010_C643();
	goto l__025B;
l__025B:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0253;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_push(emu_cs);
		emu_push(0x026E); f__B495_089A_0011_B26C();
	}
	goto l__026E;
l__026E:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x027C); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__027C;
l__027C:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0284;
l__0284:
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
 * @implements B495:02A7:0007:5C2B
 * @implements B495:02AE:000B:6487
 * @implements B495:02B9:0004:581F
 * @implements B495:02BD:0008:02CD
 * @implements B495:02C3:0002:D63A
 * @implements B495:02C5:0009:351E
 * @implements B495:02CE:0031:594F
 * @implements B495:02F1:000E:814C
 * @implements B495:02FF:0008:4F72
 * @implements B495:0307:0004:893F
 *
 * Called From: 3495:002F:0005:0000
 */
void f__B495_0288_001F_5BC7()
{
l__0288:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__02C5;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FB6) != 0x0) goto l__02BD;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__02A7;
l__02A7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x02AE); f__B495_0511_0011_10E0();
	goto l__02AE;
l__02AE:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02B9); emu_cs = 0x348B; ovl__348B(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__02B9;
l__02B9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__02C3;
l__02BD:
	emu_get_memory16(emu_ds, 0x00, 0x7FC0) = 0x1;
	goto l__02C3;
l__02C3:
	goto l__02F1;
l__02C5:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x02CE); f__B495_1230_001B_A160();
	goto l__02CE;
l__02CE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0x0);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x2A) > (int8)0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x2) = 0x1;
		emu_get_memory16(emu_ds, 0x00, 0x7FC0) = 0x1;
	}
	goto l__02F1;
l__02F1:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02FF); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__02FF;
l__02FF:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0307;
l__0307:
	emu_sp = emu_bp;
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
 * @implements B495:0328:0045:3C88
 * @implements B495:035D:0010:C27A
 * @implements B495:036D:001F:6B49
 * @implements B495:036F:001D:D82D
 * @implements B495:0376:0016:687B
 * @implements B495:038C:0008:4F72
 * @implements B495:038F:0005:D5FA
 * @implements B495:0394:0004:893F
 *
 * Called From: 3495:0034:0005:0000
 * Called From: B495:0093:0012:EA5B
 */
void f__B495_030B_001D_B90C()
{
l__030B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_get_memory16(emu_ds, 0x00, 0x7FC0) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0376;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x8BEA;
	goto l__036F;
l__0328:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_imuluw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
		emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6), emu_ax);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x2) = 0x0;
	}
	goto l__035D;
l__035D:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__036D;
l__036D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__036F;
l__036F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FB6) != 0x0) goto l__0328;
	goto l__0376;
l__0376:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__038F;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__038C;
l__038C:
	emu_addw(&emu_sp, 0x6);
	goto l__038F;
l__038F:
	emu_ax = 0x1;
	goto l__0394;
l__0394:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0398_0011_7346()
 *
 * @name f__B495_0398_0011_7346
 * @implements B495:0398:0011:7346 ()
 * @implements B495:03A9:000E:696C
 * @implements B495:03B7:0002:2597
 *
 * Called From: 3495:0039:0005:0000
 */
void f__B495_0398_0011_7346()
{
l__0398:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03A9); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__03A9;
l__03A9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x7FC0) = 0x2;
	emu_ax = 0x1;
	goto l__03B7;
l__03B7:
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
 * @implements B495:03C1:0012:9714
 * @implements B495:03D3:0009:FC66
 * @implements B495:03DC:0006:B1FB
 * @implements B495:03E2:0002:2597
 *
 * Called From: 3495:003E:0005:0000
 */
void f__B495_03B9_0008_D80E()
{
l__03B9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs);
	emu_push(0x03C1); f__B495_0F30_0008_857D();
	goto l__03C1;
l__03C1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_subw(&emu_ax, 0x2E);
	emu_get_memory16(emu_ds, 0x00, 0x7FBC) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x03D3); f__B495_089A_0011_B26C();
	goto l__03D3;
l__03D3:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03DC); f__B495_0DC9_0010_C643();
	goto l__03DC;
l__03DC:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__03E2;
l__03E2:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_03E4_0014_917E()
 *
 * @name f__B495_03E4_0014_917E
 * @implements B495:03E4:0014:917E ()
 * @implements B495:03F8:000C:3C25
 * @implements B495:0404:0046:53E4
 * @implements B495:044A:001C:8534
 * @implements B495:0466:0007:B149
 * @implements B495:0468:0005:D5FA
 * @implements B495:046D:0004:893F
 *
 * Called From: 3495:0043:0005:0000
 */
void f__B495_03E4_0014_917E()
{
l__03E4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03F8); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__03F8;
l__03F8:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0404); f__B495_1230_001B_A160();
	goto l__0404;
l__0404:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A3C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A3A);
	emu_addw(&emu_dx, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2A));
	if ((int8)emu_al >= (int8)emu_get_memory8(emu_es, emu_bx, 0x2A)) goto l__0468;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax > emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__0468;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x044A); f__B495_0D3E_000F_31B8();
	goto l__044A;
l__044A:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0466); f__B495_0BB9_0011_11A0();
	goto l__0466;
l__0466:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0468;
l__0468:
	emu_ax = 0x1;
	goto l__046D;
l__046D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0471_0014_897E()
 *
 * @name f__B495_0471_0014_897E
 * @implements B495:0471:0014:897E ()
 * @implements B495:0485:000C:FD89
 * @implements B495:0491:001D:8889
 * @implements B495:04AE:001E:4B54
 * @implements B495:04CC:0007:B149
 * @implements B495:04CE:0005:D5FA
 * @implements B495:04D3:0004:893F
 *
 * Called From: 3495:0048:0005:0000
 */
void f__B495_0471_0014_897E()
{
l__0471:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0485;
l__0485:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0491); f__B495_1230_001B_A160();
	goto l__0491;
l__0491:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x0) goto l__04CE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decb(&emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x04AE); f__B495_0D3E_000F_31B8();
	goto l__04AE;
l__04AE:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x04CC); f__B495_0BB9_0011_11A0();
	goto l__04CC;
l__04CC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__04CE;
l__04CE:
	emu_ax = 0x1;
	goto l__04D3;
l__04D3:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_04D7_000E_C317()
 *
 * @name f__B495_04D7_000E_C317
 * @implements B495:04D7:000E:C317 ()
 * @implements B495:04E5:0007:DD3A
 * @implements B495:04EC:000B:6487
 * @implements B495:04F7:0010:3315
 * @implements B495:0507:0008:4F72
 * @implements B495:050F:0002:2597
 *
 * Called From: 3495:004D:0005:0000
 */
void f__B495_04D7_000E_C317()
{
l__04D7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04E5); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__04E5;
l__04E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x04EC); f__B495_0511_0011_10E0();
	goto l__04EC;
l__04EC:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04F7); emu_cs = 0x348B; ovl__348B(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__04F7;
l__04F7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0507); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0507;
l__0507:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__050F;
l__050F:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0511_0011_10E0()
 *
 * @name f__B495_0511_0011_10E0
 * @implements B495:0511:0011:10E0 ()
 * @implements B495:0522:0022:E64B
 * @implements B495:0544:002C:AAED
 * @implements B495:0570:0008:0683
 * @implements B495:0578:001E:433D
 * @implements B495:0596:0010:A44B
 * @implements B495:05A6:0005:2C9F
 * @implements B495:05AB:000D:BD91
 * @implements B495:05B8:0030:96A7
 * @implements B495:05E8:0023:E701
 * @implements B495:060B:0008:0683
 * @implements B495:0613:0019:57AC
 * @implements B495:062C:0017:0880
 * @implements B495:0643:0014:A7F7
 * @implements B495:0649:000E:5E3A
 * @implements B495:064E:0009:1235
 * @implements B495:0657:0002:D3BA
 * @implements B495:0659:001C:1E63
 * @implements B495:0675:0008:0683
 * @implements B495:067D:0021:51DC
 * @implements B495:0680:001E:0C98
 * @implements B495:069E:0021:58DD
 * @implements B495:06BF:0015:B497
 * @implements B495:06D4:000D:B8ED
 * @implements B495:06E1:002E:D74D
 * @implements B495:070F:0008:0683
 * @implements B495:0717:001F:5DA5
 * @implements B495:0736:0008:DBE0
 * @implements B495:073E:0024:E836
 * @implements B495:0762:0008:43E5
 * @implements B495:076A:0008:64F7
 * @implements B495:0772:000A:D27A
 * @implements B495:077C:0008:A228
 * @implements B495:0784:0007:843A
 * @implements B495:078B:0002:CE3A
 * @implements B495:078D:000C:1509
 * @implements B495:0799:000A:9E64
 * @implements B495:07A3:0006:7364
 * @implements B495:07A9:000D:1173
 * @implements B495:07B6:000E:553F
 * @implements B495:07C4:0012:1C25
 * @implements B495:07D6:0042:6511
 * @implements B495:0842:000C:6A71
 * @implements B495:084E:0006:F7CE
 *
 * Called From: B495:02AB:0007:5C2B
 * Called From: B495:04E9:0007:DD3A
 */
void f__B495_0511_0011_10E0()
{
l__0511:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0522); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0522;
l__0522:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_ax = 0x9F;
	emu_push(emu_ax);
	emu_ax = 0x137;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x053F; emu_last_length = 0x0022; emu_last_crc = 0xE64B;
			emu_call();
			return;
	}
	goto l__0544;
l__0544:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x8BEA;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_si = 0x30;
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0xB6;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0570); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0570;
l__0570:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0578); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0578;
l__0578:
	emu_addw(&emu_sp, 0xE);
	emu_addw(&emu_si, 0x7);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x136;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x81;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x0596);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0591; emu_last_length = 0x001E; emu_last_crc = 0x433D;
			emu_call();
			return;
	}
	goto l__0596;
l__0596:
	emu_addw(&emu_sp, 0xA);
	emu_addw(&emu_si, 0x2);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FB6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FB6) != 0x0) goto l__05A6;
	goto l__0659;
l__05A6:
	emu_xorw(&emu_di, emu_di);
	goto l__064E;
l__05AB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x0) goto l__05B8;
	goto l__0649;
l__05B8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_imuluw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1882;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__05E8;
l__05E8:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x060B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__060B;
l__060B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0613); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0613;
l__0613:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x062C); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__062C;
l__062C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x137;
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0643); f__B495_0854_0012_008A();
	goto l__0643;
l__0643:
	emu_addw(&emu_sp, 0xE);
	emu_addw(&emu_si, 0x8);
	goto l__0649;
l__0649:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	emu_incw(&emu_di);
	goto l__064E;
l__064E:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	if ((int16)emu_di >= (int16)emu_get_memory16(emu_ds, 0x00, 0x7FBA)) goto l__0657;
	goto l__05AB;
l__0657:
	goto l__0680;
l__0659:
	emu_ax = 0x112;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xB5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0675); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0675;
l__0675:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x067D); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__067D;
l__067D:
	emu_addw(&emu_sp, 0xE);
	goto l__0680;
l__0680:
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x94;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_push(emu_ax);
	emu_ax = 0x94;
	emu_push(emu_ax);
	emu_ax = 0x81;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x069E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0699; emu_last_length = 0x001E; emu_last_crc = 0x0C98;
			emu_call();
			return;
	}
	goto l__069E;
l__069E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x96;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_push(emu_ax);
	emu_ax = 0x96;
	emu_push(emu_ax);
	emu_ax = 0x81;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6656);
	emu_push(0x06BF);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x06BA; emu_last_length = 0x0021; emu_last_crc = 0x58DD;
			emu_call();
			return;
	}
	goto l__06BF;
l__06BF:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x188B;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__06D4;
l__06D4:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__06E1;
l__06E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x137;
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = 0x211;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_ax, 0xFFFD);
	emu_push(emu_ax);
	emu_ax = 0xB8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x070F); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__070F;
l__070F:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0717); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0717;
l__0717:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0736); f__B495_0854_0012_008A();
	goto l__0736;
l__0736:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x073E); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__073E;
l__073E:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x70;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0762); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0762;
l__0762:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x076A); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__076A;
l__076A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0772); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0772;
l__0772:
	emu_pop(&emu_cx);
	emu_ax = 0xB7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__077C;
l__077C:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0784); f__B495_0BB9_0011_11A0();
	goto l__0784;
l__0784:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x078B); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__078B;
l__078B:
	goto l__07A9;
l__078D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0799); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0799;
l__0799:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x07A3); f__B495_0DC9_0010_C643();
	goto l__07A3;
l__07A3:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x07A9); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__07A9;
l__07A9:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x07B6); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__07B6;
l__07B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__078D;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x07C4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__07C4;
l__07C4:
	emu_pop(&emu_cx);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x07D6); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__07D6;
l__07D6:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) goto l__0842;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_push(emu_cs); emu_push(0x0818); emu_cs = 0x29A3; f__29A3_02DA_003B_81C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	/* Unresolved jump */ emu_ip = 0x0818; emu_last_cs = 0xB495; emu_last_ip = 0x0818; emu_last_length = 0x0042; emu_last_crc = 0x6511; emu_call();
l__0842:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC0), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC0) == 0xFFFF) {
		emu_push(emu_cs);
		emu_push(0x084E); f__B495_089A_0011_B26C();
	}
	goto l__084E;
l__084E:
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
 * Decompiled function f__B495_0854_0012_008A()
 *
 * @name f__B495_0854_0012_008A
 * @implements B495:0854:0012:008A ()
 * @implements B495:0866:0020:FCC2
 * @implements B495:0886:0014:5132
 * @implements B495:088C:000E:5C4F
 *
 * Called From: B495:0640:0017:0880
 * Called From: B495:0733:001F:5DA5
 */
void f__B495_0854_0012_008A()
{
l__0854:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1880);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__088C;
l__0866:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x2) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0886;
l__0886:
	emu_addw(&emu_sp, 0xC);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x12));
	goto l__088C;
l__088C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0866;
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B495:08AB:0010:5134
 * @implements B495:08BB:0031:B115
 * @implements B495:08EC:0026:18DF
 * @implements B495:0912:000E:36BE
 * @implements B495:0920:000C:42EE
 * @implements B495:092C:002E:7A31
 * @implements B495:095A:0028:09CD
 * @implements B495:0982:0030:C02A
 * @implements B495:09B2:0014:F25C
 * @implements B495:09C6:002B:80B3
 * @implements B495:09F1:001E:2809
 * @implements B495:09F5:001A:CAEA
 * @implements B495:09FA:0015:88CA
 * @implements B495:09FE:0011:7710
 * @implements B495:0A0F:0021:EEAE
 * @implements B495:0A30:0026:5884
 * @implements B495:0A56:0008:0683
 * @implements B495:0A5E:0006:7722
 * @implements B495:0A64:001C:115A
 * @implements B495:0A80:0008:0683
 * @implements B495:0A88:002A:B2A6
 * @implements B495:0AB2:0008:0683
 * @implements B495:0ABA:0005:95AE
 * @implements B495:0ABF:001C:E66E
 * @implements B495:0ADB:0008:0683
 * @implements B495:0AE3:0006:3722
 * @implements B495:0AE6:0003:DD00
 * @implements B495:0AE9:002C:6F3D
 * @implements B495:0B15:0028:B5D4
 * @implements B495:0B3D:001F:97BC
 * @implements B495:0B5C:0008:0683
 * @implements B495:0B64:0008:C3BC
 * @implements B495:0B6C:0005:6168
 * @implements B495:0B71:0024:BED1
 * @implements B495:0B95:0008:43E5
 * @implements B495:0B9D:0008:1199
 * @implements B495:0BA5:000C:B6AC
 * @implements B495:0BB1:0008:AE7C
 *
 * Called From: B495:0184:0007:C661
 * Called From: B495:01AE:0013:FADA
 * Called From: B495:0241:0007:86F0
 * Called From: B495:026B:0013:BAEB
 * Called From: B495:03D0:0012:9714
 * Called From: B495:084B:000C:6A71
 * Called From: B495:157C:0005:464E
 */
void f__B495_089A_0011_B26C()
{
l__089A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x08AB); f__B495_1230_001B_A160();
	goto l__08AB;
l__08AB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__08BB;
l__08BB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
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
	goto l__08EC;
l__08EC:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0912;
l__0912:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0920;
l__0920:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8BE8) != 0x0) goto l__092C;
	goto l__09FE;
l__092C:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x120;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x88;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x542));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x540));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__095A;
l__095A:
	emu_addw(&emu_sp, 0xE);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x4A2);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x4A0);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0982); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0982;
l__0982:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2E42);
	emu_decw(&emu_ax);
	emu_di = emu_ax;
	goto l__09FA;
l__09B2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2E40);
	emu_decw(&emu_ax);
	emu_si = emu_ax;
	goto l__09F5;
l__09C6:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x09F1); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__09F1;
l__09F1:
	emu_addw(&emu_sp, 0xE);
	emu_decw(&emu_si);
	goto l__09F5;
l__09F5:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__09C6;
	emu_decw(&emu_di);
	goto l__09FA;
l__09FA:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__09B2;
	goto l__09FE;
l__09FE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) == 0xFF) goto l__0A0F;
	goto l__0AE9;
l__0A0F:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x70;
	emu_push(emu_ax);
	emu_ax = 0xB8;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A30); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0A30;
l__0A30:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0A64;
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xB9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A56); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0A56;
l__0A56:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5E); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0A5E;
l__0A5E:
	emu_addw(&emu_sp, 0xE);
	goto l__0AE6;
l__0A64:
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x5E;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xBA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A80); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0A80;
l__0A80:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A88); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0A88;
l__0A88:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FBE) == 0x0) goto l__0ABF;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBE));
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xBB;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AB2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0AB2;
l__0AB2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ABA); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0ABA;
l__0ABA:
	emu_addw(&emu_sp, 0x10);
	goto l__0AE6;
l__0ABF:
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0x14D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ADB); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0ADB;
l__0ADB:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0AE3;
l__0AE3:
	emu_addw(&emu_sp, 0xE);
	goto l__0AE6;
l__0AE6:
	goto l__0B6C;
l__0AE9:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0B6C;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B15); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B15;
l__0B15:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0xA9;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B3D); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B3D;
l__0B3D:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0xA9;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xB9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B5C); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B5C;
l__0B5C:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B64); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B64;
l__0B64:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs);
	emu_push(0x0B6C); f__B495_0D3E_000F_31B8();
	goto l__0B6C;
l__0B6C:
	emu_push(emu_cs); emu_push(0x0B71); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B71;
l__0B71:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x70;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B95); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B95;
l__0B95:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0B9D;
l__0B9D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0BA5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0BA5;
l__0BA5:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0BB1); f__B495_0BB9_0011_11A0();
	goto l__0BB1;
l__0BB1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
 * Decompiled function f__B495_0BB9_0011_11A0()
 *
 * @name f__B495_0BB9_0011_11A0
 * @implements B495:0BB9:0011:11A0 ()
 * @implements B495:0BCA:0021:D845
 * @implements B495:0BEB:0032:B14B
 * @implements B495:0C1D:0006:7737
 * @implements B495:0C23:0009:B187
 * @implements B495:0C2C:002A:6ABB
 * @implements B495:0C56:0008:0683
 * @implements B495:0C5E:000C:4A92
 * @implements B495:0C6A:0008:1FFE
 * @implements B495:0C72:0029:5C43
 * @implements B495:0C9B:0008:0683
 * @implements B495:0CA3:0013:CBED
 * @implements B495:0CB6:0008:1FFE
 * @implements B495:0CBE:0030:9AC5
 * @implements B495:0CEE:0008:0683
 * @implements B495:0CF6:0008:A3E0
 * @implements B495:0CF9:0005:6168
 * @implements B495:0CFE:002B:B990
 * @implements B495:0D29:0008:43E5
 * @implements B495:0D31:0006:4A77
 * @implements B495:0D37:0007:F77C
 *
 * Called From: B495:0463:001C:8534
 * Called From: B495:04C9:001E:4B54
 * Called From: B495:0781:0008:A228
 * Called From: B495:0BAE:000C:B6AC
 */
void f__B495_0BB9_0011_11A0()
{
l__0BB9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0BCA;
l__0BCA:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0x23;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__0BEB;
l__0BEB:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__0C23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0C23;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C1D); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0C1D;
l__0C1D:
	emu_addw(&emu_sp, 0xE);
	goto l__0CF9;
l__0C23:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0C2C); f__B495_1230_001B_A160();
	goto l__0C2C;
l__0C2C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x0C56); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0C56;
l__0C56:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C5E); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0C5E;
l__0C5E:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0xB2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C6A); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0C6A;
l__0C6A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C72); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0C72;
l__0C72:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3));
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_ax = 0xB1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C9B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0C9B;
l__0C9B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0CA3;
l__0CA3:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0CF9;
	emu_ax = 0xB4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CB6); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0CB6;
l__0CB6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CBE); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0CBE;
l__0CBE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x2);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_ax = 0xB3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CEE); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0CEE;
l__0CEE:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CF6); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0CF6;
l__0CF6:
	emu_addw(&emu_sp, 0x10);
	goto l__0CF9;
l__0CF9:
	emu_push(emu_cs); emu_push(0x0CFE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0CFE;
l__0CFE:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) { /* Unresolved jump */ emu_ip = 0x0D2C; emu_last_cs = 0xB495; emu_last_ip = 0x0D00; emu_last_length = 0x002B; emu_last_crc = 0xB990; emu_call(); return; }
	emu_push(emu_di);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_ax = 0xB6;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__0D29;
l__0D29:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D31); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0D31;
l__0D31:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0D37); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0D37;
l__0D37:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B495_0D3E_000F_31B8()
 *
 * @name f__B495_0D3E_000F_31B8
 * @implements B495:0D3E:000F:31B8 ()
 * @implements B495:0D4D:001A:7F2D
 * @implements B495:0D67:0031:1ED7
 * @implements B495:0D98:0025:8B74
 * @implements B495:0DB3:000A:82B9
 * @implements B495:0DBD:0008:43E5
 * @implements B495:0DC5:0004:893F
 *
 * Called From: B495:0447:0046:53E4
 * Called From: B495:04AB:001D:8889
 * Called From: B495:0B69:0008:C3BC
 */
void f__B495_0D3E_000F_31B8()
{
l__0D3E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0D4D); f__B495_1230_001B_A160();
	goto l__0D4D;
l__0D4D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) == 0xFF) goto l__0DC5;
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0D67;
l__0D67:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	if (emu_al != emu_get_memory8(emu_es, emu_bx, 0x2)) goto l__0D98;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0xA9;
	goto l__0DB3;
l__0D98:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	goto l__0DB3;
l__0DB3:
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0DBD;
l__0DBD:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0DC5); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0DC5;
l__0DC5:
	emu_sp = emu_bp;
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
 * @implements B495:0DD9:0018:EC07
 * @implements B495:0DF1:0018:09EF
 * @implements B495:0E09:002A:0E56
 * @implements B495:0E33:001B:3AB1
 * @implements B495:0E4E:001B:5840
 * @implements B495:0E69:0008:2BE5
 * @implements B495:0E71:0002:CC3A
 * @implements B495:0E73:0018:CB64
 * @implements B495:0E88:0003:1D08
 * @implements B495:0E8B:005C:9A4A
 * @implements B495:0EB4:0033:353B
 * @implements B495:0EC3:0024:C884
 * @implements B495:0EE7:001A:CA6C
 * @implements B495:0EEA:0017:098F
 * @implements B495:0EF3:000E:BE7B
 * @implements B495:0F01:000E:A5AF
 * @implements B495:0F0F:0002:ACBA
 * @implements B495:0F13:0015:AB67
 * @implements B495:0F28:0008:2947
 * @implements B495:0F2B:0005:8BCF
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
 * Called From: B495:07A0:000A:9E64
 * Called From: B495:1195:0008:798E
 * Called From: B495:1228:0008:BA25
 */
void f__B495_0DC9_0010_C643()
{
l__0DC9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) goto l__0DD9;
	goto l__0E73;
l__0DD9:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0DF1;
l__0DF1:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0E09;
l__0E09:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x7F9E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7F9C) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7FA0) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7FA1) = 0x8;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FBC);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x18);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0E33); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0E33;
l__0E33:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x47;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E4E); emu_cs = 0x251B; f__251B_0000_001E_7202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0E4E;
l__0E4E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_ax = 0x67;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E69); emu_cs = 0x251B; f__251B_0000_001E_7202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0E69;
l__0E69:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0E71); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0E71;
l__0E71:
	goto l__0E8B;
l__0E73:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7F9E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7F9C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0E8B;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0E8B;
	}
	goto l__0E88;
l__0E88:
	goto l__0F2B;
l__0E8B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x7F9E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7F9C) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x0);
	if ((int8)emu_get_memory8(emu_ds, 0x00, 0x7FA0) >= (int8)0x0) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x3F);
		if ((int8)emu_get_memory8(emu_ds, 0x00, 0x7FA0) <= (int8)0x3F) goto l__0EC3;
	}
	goto l__0EB4;
l__0EB4:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_negb(&emu_al, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x7FA1) = emu_al;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	goto l__0EC3;
l__0EC3:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, 0x2FD);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0EE7;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0F0F;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0F01;
	/* Unresolved jump */ emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0024; emu_last_crc = 0xC884; emu_call();
l__0EE7:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0EEA;
l__0EEA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	goto l__0EF3;
l__0EF3:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	goto l__0F13;
l__0F01:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0EF3;
l__0F0F:
	goto l__0EEA;
l__0F13:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F28); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0F28;
l__0F28:
	emu_addw(&emu_sp, 0x8);
	goto l__0F2B;
l__0F2B:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B495:0F38:0038:E4A8
 * @implements B495:0F70:0008:43E5
 * @implements B495:0F78:0002:2597
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
l__0F30:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0F38;
l__0F38:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FBC);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x15);
	emu_push(emu_ax);
	emu_ax = 0x45;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FBC);
	emu_incw(&emu_ax);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_ax = 0x45;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__0F70;
l__0F70:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F78); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0F78;
l__0F78:
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
 * @implements B495:0F85:0024:33C2
 * @implements B495:0FA9:0008:43E5
 * @implements B495:0FB1:0009:C63E
 * @implements B495:0FBA:0012:A9EF
 * @implements B495:0FCC:005C:8468
 * @implements B495:1028:0005:96AE
 * @implements B495:102D:001D:3294
 * @implements B495:104A:0005:91EE
 * @implements B495:104D:0002:D43A
 * @implements B495:104F:0025:696E
 * @implements B495:1074:000C:3159
 * @implements B495:1077:0009:BD71
 * @implements B495:1080:0012:A9EF
 * @implements B495:1092:005C:046A
 * @implements B495:10EE:0005:96AE
 * @implements B495:10F3:001D:B296
 * @implements B495:1110:0005:966E
 * @implements B495:1113:0002:D3BA
 * @implements B495:1115:0024:2AF0
 * @implements B495:1139:0007:98BA
 * @implements B495:113C:0004:893F
 *
 * Called From: B495:118D:0004:03BA
 * Called From: B495:156F:0007:9157
 */
void f__B495_0F7A_000B_410C()
{
l__0F7A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0F85); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0F85;
l__0F85:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FA9); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0FA9;
l__0FA9:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FB1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__0FB1;
l__0FB1:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FBA); f__B495_1230_001B_A160();
	goto l__0FBA;
l__0FBA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0FCC;
	goto l__104F;
l__0FCC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__102D;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1028); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1028;
l__1028:
	emu_addw(&emu_sp, 0x14);
	goto l__104D;
l__102D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__104A;
l__104A:
	emu_addw(&emu_sp, 0xE);
	goto l__104D;
l__104D:
	goto l__1077;
l__104F:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1074); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1074;
l__1074:
	emu_addw(&emu_sp, 0x10);
	goto l__1077;
l__1077:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1080); f__B495_1230_001B_A160();
	goto l__1080;
l__1080:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1092;
	goto l__1115;
l__1092:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__10F3;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10EE); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__10EE;
l__10EE:
	emu_addw(&emu_sp, 0x14);
	goto l__1113;
l__10F3:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1110); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1110;
l__1110:
	emu_addw(&emu_sp, 0xE);
	goto l__1113;
l__1113:
	goto l__113C;
l__1115:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1139;
l__1139:
	emu_addw(&emu_sp, 0x10);
	goto l__113C;
l__113C:
	emu_sp = emu_bp;
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
 * @implements B495:1149:0008:DE28
 * @implements B495:1151:0004:F879
 * @implements B495:1155:0029:6D47
 * @implements B495:117E:000E:5A2B
 * @implements B495:1182:000A:B929
 * @implements B495:118C:0004:03BA
 * @implements B495:1190:0008:798E
 * @implements B495:1198:0005:DC9A
 *
 * Called From: B495:0170:0029:416B
 * Called From: B495:022A:0021:C120
 */
void f__B495_1140_0009_13F2()
{
l__1140:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1149); f__B495_0F30_0008_857D();
	goto l__1149;
l__1149:
	emu_di = 0x20;
	emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1151;
l__1151:
	emu_xorw(&emu_si, emu_si);
	goto l__1182;
l__1155:
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__117E;
l__117E:
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
	goto l__1182;
l__1182:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si < (int16)0x20) goto l__1155;
	emu_push(emu_cs); emu_push(0x118C); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__118C;
l__118C:
	emu_push(emu_cs);
	emu_push(0x1190); f__B495_0F7A_000B_410C();
	goto l__1190;
l__1190:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1198); f__B495_0DC9_0010_C643();
	goto l__1198;
l__1198:
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
 * @implements B495:11A6:0008:DE28
 * @implements B495:11AE:0004:039F
 * @implements B495:11B2:0004:F879
 * @implements B495:11B6:0029:6D47
 * @implements B495:11DF:000D:7583
 * @implements B495:11E3:0009:7045
 * @implements B495:11EC:0029:6D53
 * @implements B495:1215:000E:7C2B
 * @implements B495:1219:000A:9F29
 * @implements B495:1223:0008:BA25
 * @implements B495:122B:0005:DC9A
 *
 * Called From: B495:018D:0009:F0DE
 * Called From: B495:024A:0009:BF49
 */
void f__B495_119D_0009_53E9()
{
l__119D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x11A6); f__B495_0F30_0008_857D();
	goto l__11A6;
l__11A6:
	emu_di = 0x20;
	emu_push(emu_cs); emu_push(0x11AE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__11AE;
l__11AE:
	emu_push(emu_cs);
	emu_push(0x11B2); f__B495_0F30_0008_857D();
	goto l__11B2;
l__11B2:
	emu_xorw(&emu_si, emu_si);
	goto l__11E3;
l__11B6:
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__11DF;
l__11DF:
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
	goto l__11E3;
l__11E3:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si < (int16)0x6) goto l__11B6;
	emu_xorw(&emu_si, emu_si);
	goto l__1219;
l__11EC:
	emu_subw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__1215;
l__1215:
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
	goto l__1219;
l__1219:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si < (int16)0x6) goto l__11EC;
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1223;
l__1223:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x122B); f__B495_0DC9_0010_C643();
	goto l__122B;
l__122B:
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
 * @implements B495:1245:0006:25A9
 * @implements B495:1249:0002:C73A
 * @implements B495:124B:000E:7B97
 * @implements B495:1259:0002:2597
 *
 * Called From: B495:02CB:0009:351E
 * Called From: B495:0401:000C:3C25
 * Called From: B495:048E:000C:FD89
 * Called From: B495:08A8:0011:B26C
 * Called From: B495:0C29:0009:B187
 * Called From: B495:0D4A:000F:31B8
 * Called From: B495:0FB7:0009:C63E
 * Called From: B495:107D:000C:3159
 * Called From: B495:107D:0009:BD71
 * Called From: B495:13F7:0005:00BD
 */
void f__B495_1230_001B_A160()
{
l__1230:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FB8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_ax;
	emu_orw(&emu_bx, emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
		if ((int16)emu_bx < (int16)emu_get_memory16(emu_ds, 0x00, 0x7FBA)) goto l__124B;
	}
	goto l__1245;
l__1245:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__1249;
l__1249:
	goto l__1259;
l__124B:
	emu_ax = emu_bx;
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_ds;
	emu_addw(&emu_ax, 0x8BEA);
	goto l__1249;
l__1259:
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
 * @implements B495:126C:0020:F6F3
 * @implements B495:128C:0022:8F4B
 * @implements B495:12AE:0028:4959
 * @implements B495:12D6:004C:6411
 * @implements B495:1322:0023:03CB
 * @implements B495:1345:001A:D69A
 * @implements B495:135F:000D:4B46
 * @implements B495:136C:002C:681F
 * @implements B495:1398:002A:E9C6
 * @implements B495:13C2:0006:5263
 * @implements B495:13C8:0013:93C6
 * @implements B495:13DB:000A:E8F7
 * @implements B495:13E5:0010:F867
 * @implements B495:13E8:000D:4B26
 * @implements B495:13F5:0005:00BD
 * @implements B495:13FA:0012:8CC7
 * @implements B495:140C:004D:AD7F
 * @implements B495:1459:0005:9C2E
 * @implements B495:145E:0032:F13D
 * @implements B495:1490:000F:D6BB
 * @implements B495:1493:000C:A3AA
 * @implements B495:1497:0008:43A1
 * @implements B495:149F:0036:9C55
 * @implements B495:14D5:0026:33F4
 * @implements B495:14FB:000E:1EBD
 * @implements B495:1509:0007:05DB
 * @implements B495:1510:0020:001D
 * @implements B495:1530:0008:43E5
 * @implements B495:1538:0012:B2A2
 * @implements B495:154A:0021:6CFA
 * @implements B495:156B:0007:9157
 * @implements B495:1572:0008:64F7
 * @implements B495:157A:0005:464E
 * @implements B495:157F:000D:D634
 * @implements B495:158C:000A:97F5
 * @implements B495:1596:0007:F77C
 *
 * Called From: B495:004B:0009:4120
 */
void f__B495_125B_0011_10C0()
{
l__125B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x126C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__126C;
l__126C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
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
	emu_ax = 0x188E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x128C); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__128C;
l__128C:
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
	emu_push(emu_cs); emu_push(0x12AE); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__12AE;
l__12AE:
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
	emu_push(emu_cs); emu_push(0x12D6); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__12D6;
l__12D6:
	emu_addw(&emu_sp, 0xE);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2C34;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB6);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2C34;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB7);
	emu_ah = 0x0;
	emu_di = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1322); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1322;
l__1322:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1345); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1345;
l__1345:
	emu_addw(&emu_sp, 0x10);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE9);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CE7);
	emu_get_memory16(emu_ds, 0x00, 0x7FA8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7FA6) = emu_dx;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x135F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__135F;
l__135F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x7FB4) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x7FB2) = emu_ax;
	emu_push(emu_cs);
	emu_push(0x136C); f__B495_159D_0027_1B29();
	goto l__136C;
l__136C:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x7FA6), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x7FA8), emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FB4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7FB2);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_ds, 0x00, 0x7FAC) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7FAA) = emu_dx;
	emu_push(emu_cs);
	emu_push(0x1398); f__B495_1A29_0012_DF2C();
	goto l__1398;
l__1398:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FAC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7FAA);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_ds, 0x00, 0x7FB0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7FAE) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x7FA6), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x7FA8), emu_ax);
	emu_push(emu_cs);
	emu_push(0x13C2); f__B495_17E6_002B_0A6D();
	goto l__13C2;
l__13C2:
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x7FBA);
	goto l__13E8;
l__13C8:
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x2E);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x13DB); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__13DB;
l__13DB:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13E5); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__13E5;
l__13E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
	goto l__13E8;
l__13E8:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__13C8;
	emu_di = 0x18;
	emu_xorw(&emu_si, emu_si);
	goto l__1497;
l__13F5:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x13FA); f__B495_1230_001B_A160();
	goto l__13FA;
l__13FA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax != 0) goto l__140C;
	goto l__1493;
l__140C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__145E;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1459); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1459;
l__1459:
	emu_addw(&emu_sp, 0x14);
	goto l__1493;
l__145E:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1490); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1490;
l__1490:
	emu_addw(&emu_sp, 0xE);
	goto l__1493;
l__1493:
	emu_addw(&emu_di, 0x20);
	emu_incw(&emu_si);
	goto l__1497;
l__1497:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si >= (int16)0x4) goto l__149F;
	goto l__13F5;
l__149F:
	emu_get_memory16(emu_ds, 0x00, 0x7FBC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7FB8) = 0x0;
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
	goto l__14D5;
l__14D5:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x14FB); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__14FB;
l__14FB:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1509); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1509;
l__1509:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1510); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1510;
l__1510:
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
	emu_push(emu_cs); emu_push(0x1530); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1530;
l__1530:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1538); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1538;
l__1538:
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__154A;
l__154A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_ax = 0x70;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

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
	goto l__156B;
l__156B:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs);
	emu_push(0x1572); f__B495_0F7A_000B_410C();
	goto l__1572;
l__1572:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x157A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__157A;
l__157A:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x157F); f__B495_089A_0011_B26C();
	goto l__157F;
l__157F:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x158C); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__158C;
l__158C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1596); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1596;
l__1596:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B495_159D_0027_1B29()
 *
 * @name f__B495_159D_0027_1B29
 * @implements B495:159D:0027:1B29 ()
 * @implements B495:15C4:0022:CA3D
 * @implements B495:15E6:000C:12E0
 * @implements B495:15F2:004B:9877
 * @implements B495:15FE:003F:AACD
 * @implements B495:160A:0033:F1EE
 * @implements B495:1616:0027:51DC
 * @implements B495:1622:001B:7817
 * @implements B495:162E:000F:4A9E
 * @implements B495:163A:0003:9DBF
 * @implements B495:163D:005C:C51C
 * @implements B495:1699:000C:26D1
 * @implements B495:16A5:000F:E74D
 * @implements B495:16B4:0066:9929
 * @implements B495:16B5:0065:FD28
 * @implements B495:171A:0084:7025
 * @implements B495:1787:0017:D53F
 * @implements B495:179E:000C:0D6D
 * @implements B495:17AA:001E:BE3A
 * @implements B495:17B7:0011:1844
 * @implements B495:17BB:000D:A173
 * @implements B495:17C0:0008:674E
 * @implements B495:17C8:000D:C17F
 * @implements B495:17D5:000B:2D0F
 * @implements B495:17E0:0006:F7CE
 *
 * Called From: B495:1369:000D:4B46
 */
void f__B495_159D_0027_1B29()
{
l__159D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FB4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7FB2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = 0x30C;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x15C4); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__15C4;
l__15C4:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2C34;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15E6); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__15E6;
l__15E6:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_si = emu_ax;
	emu_di = emu_ax;
	goto l__17C0;
l__15F2:
	emu_cmpw(&emu_si, 0xC);
	if (emu_si == 0xC) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__163A;
	}
	goto l__15FE;
l__15FE:
	emu_cmpw(&emu_si, 0xB);
	if (emu_si == 0xB) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) != 0x0) goto l__163A;
	}
	goto l__160A;
l__160A:
	emu_cmpw(&emu_si, 0x8);
	if (emu_si == 0x8) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__163A;
	}
	goto l__1616;
l__1616:
	emu_cmpw(&emu_si, 0x9);
	if (emu_si == 0x9) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__163A;
	}
	goto l__1622;
l__1622:
	emu_cmpw(&emu_si, 0xA);
	if (emu_si == 0xA) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__163A;
	}
	goto l__162E;
l__162E:
	emu_cmpw(&emu_si, 0x7);
	if (emu_si != 0x7) goto l__163D;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FBE) != 0x0) goto l__163D;
	goto l__163A;
l__163A:
	goto l__17BB;
l__163D:
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x2E);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x6) >= (int16)0x0) goto l__1699;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_negw(&emu_ax, emu_ax);
	goto l__16B5;
l__1699:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x16A5); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__16A5;
l__16A5:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16B4); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__16B4;
l__16B4:
	emu_pop(&emu_cx);
	goto l__16B5;
l__16B5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x30) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
	emu_ah = 0x0;
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x2) != 0xFFFF) goto l__171A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xC) = 0x0;
	goto l__1787;
l__171A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0xC) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x446);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x444);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	goto l__1787;
l__1787:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__17AA;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x179E); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__179E;
l__179E:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x7FA4) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x7FA2) = emu_ax;
	goto l__17B7;
l__17AA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ds, 0x00, 0x7FA4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7FA2) = emu_dx;
	goto l__17B7;
l__17B7:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C);
	goto l__17BB;
l__17BB:
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xE);
	goto l__17C0;
l__17C0:
	emu_cmpw(&emu_si, 0xD);
	if (emu_si >= 0xD) goto l__17C8;
	goto l__15F2;
l__17C8:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA2));
	emu_push(emu_cs); emu_push(0x17D5); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__17D5;
l__17D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_di;
	emu_dx = 0x3C;
	emu_imuluw(&emu_ax, emu_dx);
	goto l__17E0;
l__17E0:
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
 * Decompiled function f__B495_17E6_002B_0A6D()
 *
 * @name f__B495_17E6_002B_0A6D
 * @implements B495:17E6:002B:0A6D ()
 * @implements B495:1811:002F:FBC1
 * @implements B495:1840:0023:3B9E
 * @implements B495:1863:0014:F324
 * @implements B495:1877:0018:A9D0
 * @implements B495:187A:0015:1B58
 * @implements B495:188F:0034:1B64
 * @implements B495:18C3:0003:C89A
 * @implements B495:18C6:0031:E426
 * @implements B495:18CD:002A:EA97
 * @implements B495:18EB:000C:FD2C
 * @implements B495:18F0:0007:D2A0
 * @implements B495:18F7:000E:9846
 * @implements B495:1905:0077:8C18
 * @implements B495:194C:0030:B3C4
 * @implements B495:1955:0027:D1FB
 * @implements B495:195D:001F:D3A8
 * @implements B495:1962:001A:622A
 * @implements B495:1967:0015:296F
 * @implements B495:198D:001A:5737
 * @implements B495:19A7:0009:B397
 *
 * Called From: B495:13BF:002A:E9C6
 */
void f__B495_17E6_002B_0A6D()
{
l__17E6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ds, 0x00, 0x7FBA) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7FBC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7FB8) = 0x0;
	emu_ax = 0x113;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8BEA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1811;
l__1811:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x8BEA;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__187A;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38AC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38AE));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1840); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1840;
l__1840:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_bx = 0x3C;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_di = emu_ax;
	emu_ax = emu_di;
	emu_imuluw(&emu_ax, emu_di);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1863); emu_cs = 0x01F7; f__01F7_07D4_0011_370E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1863;
l__1863:
	emu_pop(&emu_cx);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ds);
	emu_ax = 0x1898;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1877); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1877;
l__1877:
	emu_addw(&emu_sp, 0xC);
	goto l__187A;
l__187A:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8BE8) != 0x0) goto l__18F7;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__18F0;
l__188F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) == 0x0) goto l__18EB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_es, emu_bx, 0x9) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x7) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_si;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__18C6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs);
	emu_push(0x18C3); f__B495_19B0_0016_09F7();
	goto l__18C3;
l__18C3:
	emu_pop(&emu_cx);
	goto l__18CD;
l__18C6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	goto l__18CD;
l__18CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x3) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x20);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x5) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	goto l__18EB;
l__18EB:
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x5A);
	goto l__18F0;
l__18F0:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si < (int16)0x1B) goto l__188F;
	goto l__1967;
l__18F7:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0xA;
	emu_xorw(&emu_si, emu_si);
	goto l__1962;
l__1905:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) == 0x0) goto l__195D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_es, emu_bx, 0x9) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x7) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x3) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x20);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x5) = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_cmpw(&emu_si, 0x1);
		if (emu_si != 0x1) goto l__1955;
	}
	goto l__194C;
l__194C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x5) = 0x64;
	goto l__1955;
l__1955:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB);
	goto l__195D;
l__195D:
	emu_incw(&emu_si);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x60);
	goto l__1962;
l__1962:
	emu_cmpw(&emu_si, 0x13);
	if ((int16)emu_si < (int16)0x13) goto l__1905;
	goto l__1967;
l__1967:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBA), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FBA) != 0x0) goto l__198D;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x18AA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x197C); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	/* Unresolved jump */ emu_ip = 0x197C; emu_last_cs = 0xB495; emu_last_ip = 0x197C; emu_last_length = 0x0015; emu_last_crc = 0x296F; emu_call();
l__198D:
	emu_ax = 0x3495;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBA));
	emu_push(emu_ds);
	emu_ax = 0x8BEA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19A7); emu_cs = 0x01F7; f__01F7_325B_0026_C673();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__19A7;
l__19A7:
	emu_addw(&emu_sp, 0xC);
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
 * Decompiled function f__B495_1960_0016_09F7()
 *
 * @name f__B495_1960_0016_09F7
 * @implements B495:1960:0016:09F7 ()
 * @implements B495:1976:000F:9C12
 * @implements B495:1985:0031:87C0
 * @implements B495:19B6:0009:A42A
 * @implements B495:19B9:0006:4370
 * @implements B495:19BF:0005:8BCF
 *
 * Called From: B495:1870:0034:1B64
 */
void f__B495_1960_0016_09F7()
{
l__1960:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1976); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1976;
l__1976:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1985); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1985;
l__1985:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_ax = emu_si;
	emu_bx = 0xA;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_bx = 0xA;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_si = emu_dx;
	emu_cmpw(&emu_si, 0x3E7);
	if (emu_si >= 0x3E7) goto l__19B6;
	emu_ax = emu_si;
	goto l__19B9;
l__19B6:
	emu_ax = 0x3E7;
	goto l__19B9;
l__19B9:
	emu_si = emu_ax;
	emu_ax = emu_si;
	goto l__19BF;
l__19BF:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_19B0_0016_09F7()
 *
 * @name f__B495_19B0_0016_09F7
 * @implements B495:19B0:0016:09F7 ()
 * @implements B495:19C6:000F:9C12
 * @implements B495:19D5:0031:87C0
 * @implements B495:1A06:0009:A42A
 * @implements B495:1A09:0006:4370
 * @implements B495:1A0F:0005:8BCF
 *
 * Called From: B495:18C0:0034:1B64
 */
void f__B495_19B0_0016_09F7()
{
l__19B0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19C6); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__19C6;
l__19C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19D5); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__19D5;
l__19D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_ax = emu_si;
	emu_bx = 0xA;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_bx = 0xA;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_si = emu_dx;
	emu_cmpw(&emu_si, 0x3E7);
	if (emu_si >= 0x3E7) goto l__1A06;
	emu_ax = emu_si;
	goto l__1A09;
l__1A06:
	emu_ax = 0x3E7;
	goto l__1A09;
l__1A09:
	emu_si = emu_ax;
	emu_ax = emu_si;
	goto l__1A0F;
l__1A0F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements B495:1A27:0002:2597
 *
 * Called From: 3495:0098:0005:0000
 */
void f__B495_1A14_0013_AE3F()
{
l__1A14:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5));
	goto l__1A27;
l__1A27:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1A14_0004_893F()
 *
 * @name f__B495_1A14_0004_893F
 * @implements B495:1A14:0004:893F ()
 *
 * Called From: 3495:0098:0005:0000
 */
void f__B495_1A14_0004_893F()
{
l__1A14:
	emu_sp = emu_bp;
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
 * @implements B495:1A3B:001A:4B96
 * @implements B495:1A55:0009:2605
 * @implements B495:1A5E:0008:D4BF
 * @implements B495:1A66:0003:2E57
 *
 * Called From: B495:1395:002C:681F
 */
void f__B495_1A29_0012_DF2C()
{
l__1A29:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x18D0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A3B); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1A3B;
l__1A3B:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x100;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A55); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1A55;
l__1A55:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A5E); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { ovl__3495(0xFF); }
	goto l__1A5E;
l__1A5E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x100;
	goto l__1A66;
l__1A66:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
