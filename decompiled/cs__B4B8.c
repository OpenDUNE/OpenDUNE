/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B8_0000_001F_3BC3()
 *
 * @name f__B4B8_0000_001F_3BC3
 * @implements B4B8:0000:001F:3BC3 ()
 * @implements B4B8:001F:000B:153A
 * @implements B4B8:002A:0005:517D
 * @implements B4B8:002F:002A:0E34
 * @implements B4B8:004D:000C:132E
 * @implements B4B8:004E:000B:175E
 * @implements B4B8:0059:0007:6578
 * @implements B4B8:0060:0005:517D
 * @implements B4B8:0065:000D:0E57
 * @implements B4B8:0072:001A:F649
 * @implements B4B8:008C:0012:07F6
 * @implements B4B8:008F:000F:E42E
 * @implements B4B8:009E:000B:411E
 * @implements B4B8:00A1:0008:30F2
 * @implements B4B8:00A9:002C:7BC6
 * @implements B4B8:00C5:0010:CDEF
 * @implements B4B8:00CC:0009:6E80
 * @implements B4B8:00D5:0007:4C78
 * @implements B4B8:00DC:0005:517D
 * @implements B4B8:00E1:000D:0557
 * @implements B4B8:00EE:001A:F649
 * @implements B4B8:0108:0012:07F6
 * @implements B4B8:010B:000F:E42E
 * @implements B4B8:011A:000B:411E
 * @implements B4B8:011D:0008:30F2
 * @implements B4B8:0125:0020:37E6
 * @implements B4B8:0133:0012:F921
 * @implements B4B8:013A:000B:81FA
 * @implements B4B8:0145:0007:CBF5
 * @implements B4B8:014C:0014:309A
 * @implements B4B8:0160:0031:B17A
 * @implements B4B8:0177:001A:22EE
 * @implements B4B8:0181:0010:B61D
 * @implements B4B8:0191:0008:7A2D
 * @implements B4B8:0199:0009:B615
 * @implements B4B8:01A2:0012:69D1
 * @implements B4B8:01A4:0010:C9DD
 * @implements B4B8:01B4:0021:1F5E
 * @implements B4B8:01D5:0026:1563
 * @implements B4B8:01FB:0031:C155
 * @implements B4B8:022C:0026:EC41
 * @implements B4B8:0252:004C:860B
 * @implements B4B8:0291:000D:BCC0
 * @implements B4B8:0292:000C:84C2
 * @implements B4B8:029E:000D:3338
 * @implements B4B8:02A2:0009:2E43
 * @implements B4B8:02AB:000D:3328
 * @implements B4B8:02AF:0009:EE52
 * @implements B4B8:02B8:0012:2C51
 * @implements B4B8:02CA:0018:139C
 * @implements B4B8:02E2:0015:4DA7
 * @implements B4B8:02F7:000A:E5C7
 * @implements B4B8:0301:002E:E825
 * @implements B4B8:0321:000E:5A5A
 * @implements B4B8:032F:0107:3FC4
 * @implements B4B8:03C8:006E:477E
 * @implements B4B8:03DA:005C:7497
 * @implements B4B8:03EC:004A:385B
 * @implements B4B8:03FE:0038:0D2C
 * @implements B4B8:042D:0009:EE46
 * @implements B4B8:0436:000C:5C34
 * @implements B4B8:0439:0009:AE4C
 * @implements B4B8:0442:0005:517D
 * @implements B4B8:0447:000F:3A31
 * @implements B4B8:0456:000E:062D
 * @implements B4B8:0458:000C:3407
 * @implements B4B8:0464:0009:D62D
 * @implements B4B8:046D:0018:31BE
 * @implements B4B8:0485:0017:626D
 * @implements B4B8:0488:0014:7CFA
 * @implements B4B8:049C:001F:3168
 * @implements B4B8:04BB:000C:6772
 * @implements B4B8:04C7:0026:950C
 * @implements B4B8:04D4:0019:D3E8
 * @implements B4B8:04E2:000B:8E57
 * @implements B4B8:04ED:0008:BC0F
 * @implements B4B8:04F5:0005:517D
 * @implements B4B8:04FA:0009:AE6E
 * @implements B4B8:0503:0009:FC28
 * @implements B4B8:050C:0028:CA07
 * @implements B4B8:0534:000D:1B27
 * @implements B4B8:0541:0009:1020
 * @implements B4B8:054A:000C:B6C6
 * @implements B4B8:0556:0008:CAD0
 * @implements B4B8:055E:000A:CB50
 * @implements B4B8:0568:001A:D0F6
 * @implements B4B8:0582:0014:3C98
 * @implements B4B8:0586:0010:4B6C
 * @implements B4B8:058F:0007:4902
 * @implements B4B8:0596:0014:9233
 * @implements B4B8:05AA:002E:A7A6
 * @implements B4B8:05CA:000E:61B9
 * @implements B4B8:05D8:0015:4DA7
 * @implements B4B8:05ED:000A:E477
 * @implements B4B8:05F7:002E:5FBC
 * @implements B4B8:0617:000E:99A3
 * @implements B4B8:0625:00CD:5050
 * @implements B4B8:0678:007A:730C
 * @implements B4B8:0684:006E:41F7
 * @implements B4B8:0690:0062:127F
 * @implements B4B8:069C:0056:9745
 * @implements B4B8:06B5:003D:9480
 * @implements B4B8:06B9:0039:C839
 * @implements B4B8:06C7:002B:CEAF
 * @implements B4B8:06CB:0027:BF4A
 * @implements B4B8:06D9:0019:9522
 * @implements B4B8:06DD:0015:4AB7
 * @implements B4B8:06EB:0007:A357
 * @implements B4B8:06EF:0003:1D00
 * @implements B4B8:06F2:0050:6E54
 * @implements B4B8:0706:003C:C12F
 * @implements B4B8:070A:0038:B396
 * @implements B4B8:0718:002A:E79B
 * @implements B4B8:071C:0026:2D78
 * @implements B4B8:072A:0018:1D2D
 * @implements B4B8:072E:0014:3692
 * @implements B4B8:073C:0006:7746
 * @implements B4B8:0740:0002:D83A
 * @implements B4B8:0742:0085:EEF7
 * @implements B4B8:074E:0079:C324
 * @implements B4B8:075A:006D:F1F1
 * @implements B4B8:0766:0061:E2DD
 * @implements B4B8:0772:0055:17EF
 * @implements B4B8:077D:004A:0B6B
 * @implements B4B8:0786:0041:6F70
 * @implements B4B8:0790:0037:3621
 * @implements B4B8:079A:002D:3384
 * @implements B4B8:07A4:0023:A413
 * @implements B4B8:07AE:0019:E64C
 * @implements B4B8:07BE:0009:2E6F
 * @implements B4B8:07C7:000C:1C1D
 * @implements B4B8:07CA:0009:EE65
 * @implements B4B8:07D3:001E:72A9
 * @implements B4B8:07F1:007A:9564
 * @implements B4B8:0861:000A:AA97
 * @implements B4B8:086B:002E:52FA
 * @implements B4B8:088D:000C:6279
 *
 * Called From: 34B8:003E:0005:0000
 */
void f__B4B8_0000_001F_3BC3()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x126);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x76A4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x76A2) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__001F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	goto l__004E;
l__002A:
	emu_push(emu_cs); emu_push(0x002F); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__002F:
	emu_andb(&emu_al, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_di);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_di);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) > 0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_addw(&emu_bx, emu_di);
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0xA;
	}
l__004D:
	emu_incw(&emu_di);
l__004E:
	emu_cmpw(&emu_di, 0x110);
	if ((int16)emu_di < (int16)0x110) goto l__002A;
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0059:
	emu_andw(&emu_ax, 0xF);
	emu_di = emu_ax;
	goto l__00CC;
l__0060:
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0065:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__00C5;
l__0072:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x2006);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) goto l__008C;
	emu_xorw(&emu_ax, emu_ax);
	goto l__008F;
l__008C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__008F:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x110) goto l__009E;
	emu_ax = 0x110;
	goto l__00A1;
l__009E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__00A1:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_cs); emu_push(0x00A9); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__00A9:
	emu_andb(&emu_al, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_addb(&emu_dl, emu_al);
	emu_andb(&emu_dl, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_dl;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__00C5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x15) goto l__0072;
	emu_decw(&emu_di);
l__00CC:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0060;
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__00D5:
	emu_andw(&emu_ax, 0x3);
	emu_di = emu_ax;
	goto l__013A;
l__00DC:
	emu_push(emu_cs); emu_push(0x00E1); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__00E1:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0133;
l__00EE:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x2006);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) goto l__0108;
	emu_xorw(&emu_ax, emu_ax);
	goto l__010B;
l__0108:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__010B:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x110) goto l__011A;
	emu_ax = 0x110;
	goto l__011D;
l__011A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__011D:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0125:
	emu_andb(&emu_al, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0133:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x15) goto l__00EE;
	emu_decw(&emu_di);
l__013A:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__00DC;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__0181;
l__0145:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__0177;
l__014C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0160:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
l__0177:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) < (int16)0x40) goto l__014C;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
l__0181:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) < (int16)0x40) goto l__0145;
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__02AF;
l__0191:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__02A2;
l__0199:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__01A2;
	emu_ax = 0x1;
	goto l__01A4;
l__01A2:
	emu_xorw(&emu_ax, emu_ax);
l__01A4:
	emu_si = emu_ax;
	emu_dx = 0x15;
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_dx);
	emu_si = emu_ax;
	emu_di = emu_si;
	goto l__0292;
l__01B4:
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201D));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201B));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__01D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2021));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201F));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__01FB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_shrw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201D));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201B));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x022C); f__B4B8_09B6_0013_F1B4();
l__022C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2021));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201F));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0252); f__B4B8_09B6_0013_F1B4();
l__0252:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xF000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x14) & 0xF000) == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
		emu_incw(&emu_ax);
		emu_shrw(&emu_ax, 0x1);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	}
l__0291:
	emu_incw(&emu_di);
l__0292:
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x15);
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax <= (int16)emu_di) goto l__029E;
	goto l__01B4;
l__029E:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
l__02A2:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x40) goto l__02AB;
	goto l__0199;
l__02AB:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
l__02AF:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x40) goto l__02B8;
	goto l__0191;
l__02B8:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__02CA:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39EC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__0439;
l__02E2:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F7); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__02F7:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	goto l__0321;
l__0301:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
l__0321:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x26) < (int16)0x40) goto l__0301;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__042D;
l__032F:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x124);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x104);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x100);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xFC);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x128);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	}
l__03C8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	}
l__03DA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	}
l__03EC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	}
l__03FE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_bx = 0x9;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__042D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x40) goto l__0436;
	goto l__032F;
l__0436:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
l__0439:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x40) goto l__0442;
	goto l__02E2;
l__0442:
	emu_push(emu_cs); emu_push(0x0447); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0447:
	emu_andw(&emu_ax, 0xF);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x8);
	if (emu_si >= 0x8) goto l__0456;
	emu_ax = 0x8;
	goto l__0458;
l__0456:
	emu_ax = emu_si;
l__0458:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xC);
	if (emu_si <= 0xC) goto l__0464;
	emu_ax = 0xC;
	/* Unresolved jump */ emu_ip = 0x0466; emu_last_cs = 0xB4B8; emu_last_ip = 0x0462; emu_last_length = 0x000C; emu_last_crc = 0x3407; emu_call();
l__0464:
	emu_ax = emu_si;
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x046D); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__046D:
	emu_andw(&emu_ax, 0x3);
	emu_decw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_si;
	emu_subw(&emu_ax, 0x3);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0485;
	emu_ax = emu_si;
	emu_subw(&emu_ax, 0x3);
	goto l__0488;
l__0485:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
l__0488:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39EC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_xorw(&emu_di, emu_di);
	goto l__04E2;
l__049C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x12)) goto l__04BB;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x6;
	goto l__04D4;
l__04BB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) < emu_si) goto l__04C7;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x4;
	goto l__04D4;
l__04C7:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x10)) {
		emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x2;
	}
l__04D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	emu_incw(&emu_di);
l__04E2:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__049C;
	emu_push(emu_cs); emu_push(0x04ED); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__04ED:
	emu_andw(&emu_ax, 0x2F);
	emu_si = emu_ax;
	goto l__058F;
l__04F5:
	emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__04FA:
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0503); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0503:
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x050C); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__050C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A50), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A50) == 0x0) goto l__058F;
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0534:
	emu_andw(&emu_ax, 0x1F);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	goto l__0586;
l__0541:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__054A:
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0556); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0556:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x055E); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__055E:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0568:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1000);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) >= (int16)0x1000) goto l__0541;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) < (int16)0x0) goto l__0541;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x0582); f__B4B8_0899_002D_EBA1();
l__0582:
	emu_pop(&emu_cx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
l__0586:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__0541;
	emu_decw(&emu_si);
l__058F:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0596;
	goto l__04F5;
l__0596:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39EC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	goto l__05CA;
l__05AA:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
l__05CA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) < (int16)0x40) goto l__05AA;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__07CA;
l__05D8:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05ED); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__05ED:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	goto l__0617;
l__05F7:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
l__0617:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) < (int16)0x40) goto l__05F7;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__07BE;
l__0625:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x124);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x100);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x128);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	}
l__0678:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	}
l__0684:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	}
l__0690:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	}
l__069C:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) != 0x4) goto l__06F2;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1A) != 0x6) goto l__06B9;
	}
l__06B5:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
l__06B9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x6) goto l__06CB;
	}
l__06C7:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
l__06CB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x6) goto l__06DD;
	}
l__06D9:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
l__06DD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x20) != 0x6) goto l__06EF;
	}
l__06EB:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
l__06EF:
	goto l__0772;
l__06F2:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) != 0x8) goto l__0742;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1A) != 0x9) goto l__070A;
	}
l__0706:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
l__070A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x9) goto l__071C;
	}
l__0718:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
l__071C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x9) goto l__072E;
	}
l__072A:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
l__072E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x20) != 0x9) goto l__0740;
	}
l__073C:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
l__0740:
	goto l__0772;
l__0742:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	}
l__074E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	}
l__075A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	}
l__0766:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	}
l__0772:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	}
l__077D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x4) {
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	}
l__0786:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x2) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	}
l__0790:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x6) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	}
l__079A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x8) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	}
l__07A4:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x9) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	}
l__07AE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__07BE:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x40) goto l__07C7;
	goto l__0625;
l__07C7:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
l__07CA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x40) goto l__07D3;
	goto l__05D8;
l__07D3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_bx;
	emu_xorw(&emu_di, emu_di);
	goto l__0861;
l__07F1:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x2) = 0x0;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0x0;
	emu_incw(&emu_di);
l__0861:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__07F1;
	emu_xorw(&emu_di, emu_di);
	goto l__088D;
l__086B:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_si, emu_dx);
	emu_dx = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_andw(&emu_dx, 0x1FF);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x323F) = emu_dx;
	emu_incw(&emu_di);
l__088D:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__086B;
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
 * Decompiled function f__B4B8_0899_002D_EBA1()
 *
 * @name f__B4B8_0899_002D_EBA1
 * @implements B4B8:0899:002D:EBA1 ()
 * @implements B4B8:08C6:0016:33E5
 * @implements B4B8:08DC:0004:8D11
 * @implements B4B8:08E0:0008:857E
 * @implements B4B8:08E8:0008:9D79
 * @implements B4B8:08F0:0006:CB3D
 * @implements B4B8:08F6:000B:6174
 * @implements B4B8:0901:000A:9283
 * @implements B4B8:090B:0044:05FB
 * @implements B4B8:094F:002F:B048
 * @implements B4B8:0972:000C:DA05
 * @implements B4B8:0975:0009:2AFD
 * @implements B4B8:097E:000C:DB82
 * @implements B4B8:0981:0009:2AFA
 * @implements B4B8:098A:0002:D23A
 * @implements B4B8:098C:0024:DA74
 * @implements B4B8:09AE:0002:C03A
 * @implements B4B8:09B0:0006:F7CE
 *
 * Called From: B4B8:057F:001A:D0F6
 * Called From: B4B8:08D9:0016:33E5
 */
void f__B4B8_0899_002D_EBA1()
{
l__0899:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__08C6;
	emu_cmpw(&emu_ax, 0x9);
	if (emu_ax == 0x9) goto l__08E0;
	goto l__098C;
l__08C6:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x9;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x08DC); f__B4B8_0899_002D_EBA1();
l__08DC:
	emu_pop(&emu_cx);
	goto l__09B0;
l__08E0:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0xFFFF;
	goto l__0981;
l__08E8:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xFFFF;
	goto l__0975;
l__08F0:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08F6); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__08F6:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0901); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0901:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__090B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_di, 0x1000);
		if ((int16)emu_di < (int16)0x1000) {
			emu_ax = emu_di;
			emu_cl = 0x2;
			emu_shlw(&emu_ax, emu_cl);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
			emu_addw(&emu_bx, emu_ax);
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
			emu_dx = 0x1C;
			emu_imuluw(&emu_ax, emu_dx);
			emu_bx = emu_ax;
			emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3A50);
			emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
			if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__094F;
			emu_ax = emu_si;
			emu_cl = 0x2;
			emu_shlw(&emu_ax, emu_cl);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
			emu_addw(&emu_bx, emu_ax);
			emu_get_memory16(emu_es, emu_bx, 0x0) = 0x8;
		}
	}
	goto l__0972;
l__094F:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x9);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0x9) {
		emu_ax = emu_di;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x0) = 0x8;
	}
l__0972:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0975:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) > (int16)0x1) goto l__097E;
	goto l__08F0;
l__097E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0981:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) > (int16)0x1) goto l__098A;
	goto l__08E8;
l__098A:
	goto l__09B0;
l__098C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A50), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A50) != 0x0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x0) = 0x8;
	}
l__09AE:
	goto l__09B0;
l__09B0:
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
 * Decompiled function f__B4B8_09B6_0013_F1B4()
 *
 * @name f__B4B8_09B6_0013_F1B4
 * @implements B4B8:09B6:0013:F1B4 ()
 * @implements B4B8:09C9:0004:5B1F
 * @implements B4B8:09CD:0003:2E57
 *
 * Called From: B4B8:0229:0031:C155
 * Called From: B4B8:024F:0026:EC41
 */
void f__B4B8_09B6_0013_F1B4()
{
l__09B6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_si, 0x3F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__09C9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__09CD;
l__09CD:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_09D0_0012_0D7D()
 *
 * @name f__B4B8_09D0_0012_0D7D
 * @implements B4B8:09D0:0012:0D7D ()
 * @implements B4B8:09E2:003C:C270
 * @implements B4B8:0A14:000A:5F41
 *
 * Called From: B4B8:0E89:0034:00A7
 */
void f__B4B8_09D0_0012_0D7D()
{
l__09D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0A1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x09DC; emu_last_length = 0x0012; emu_last_crc = 0x0D7D; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	goto l__0A14;
l__09E2:
	emu_ax = emu_dx;
	emu_addw(&emu_ax, 0x10);
	emu_andw(&emu_ax, 0xE0);
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_dx;
	emu_addw(&emu_ax, 0x8);
	emu_andw(&emu_ax, 0xF0);
	emu_cl = 0x4;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x4);
	emu_cl = 0x4;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_dx);
l__0A14:
	emu_cmpw(&emu_dx, 0x100);
	if ((int16)emu_dx < (int16)0x100) goto l__09E2;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0A1E_001A_E094()
 *
 * @name f__B4B8_0A1E_001A_E094
 * @implements B4B8:0A1E:001A:E094 ()
 * @implements B4B8:0A38:0014:466B
 * @implements B4B8:0A44:0008:59B7
 * @implements B4B8:0A4C:0023:CC83
 * @implements B4B8:0A6F:002B:8318
 * @implements B4B8:0A9A:0012:3EFE
 * @implements B4B8:0AAC:0012:F330
 * @implements B4B8:0ABE:0020:7E3F
 * @implements B4B8:0AC6:0018:40A6
 * @implements B4B8:0ADE:0016:BE51
 * @implements B4B8:0AF4:000C:BF3D
 * @implements B4B8:0B00:0022:7AFB
 * @implements B4B8:0B12:0010:4B5B
 * @implements B4B8:0B22:0024:5457
 * @implements B4B8:0B3A:000C:60AC
 * @implements B4B8:0B46:000E:D932
 * @implements B4B8:0B54:0005:A6CA
 * @implements B4B8:0B59:0022:DECA
 * @implements B4B8:0B7B:000B:CE54
 * @implements B4B8:0B7F:0007:D940
 * @implements B4B8:0B86:0005:26CC
 * @implements B4B8:0B8B:0022:DECA
 * @implements B4B8:0BAD:000C:3148
 * @implements B4B8:0BB1:0008:BB43
 * @implements B4B8:0BB9:0002:C03A
 * @implements B4B8:0BBB:0006:F7CE
 *
 * Called From: 34B8:0034:0005:0000
 * Called From: B4B8:19FF:0013:03D7
 * Called From: B4B8:19FF:0014:93D2
 * Called From: B4B8:1D4A:0013:4DE4
 * Called From: B4B8:1DD3:002A:80E8
 */
void f__B4B8_0A1E_001A_E094()
{
l__0A1E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_ax = 0x216B;
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_cx = 0xC;
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x01F7; emu_Tools_MemcopyCX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0A38:
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) {
		emu_di = 0x1;
	}
l__0A44:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0A4C); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0A4C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	goto l__0B3A;
l__0A6F:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x9939;
	emu_ax = emu_di;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0A9A:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x2E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x01F7; emu_String_strchr();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0AAC:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0AC6;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ABE); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0ABE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
l__0AC6:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFDE8;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ADE); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0ADE:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__0B12;
l__0AF4:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B00); emu_cs = 0x2903; f__2903_007A_0032_762D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0B00:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x4);
	emu_incw(&emu_si);
l__0B12:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0AF4;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0B22); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0B22:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
l__0B3A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0B46;
	goto l__0A6F;
l__0B46:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0B54;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0B86;
	goto l__0BB9;
l__0B54:
	emu_si = 0x7;
	goto l__0B7F;
l__0B59:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x0B7B); emu_cs = 0x2BB6; f__2BB6_000C_0043_A570();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0B7B:
	emu_addw(&emu_sp, 0x8);
	emu_incw(&emu_si);
l__0B7F:
	emu_cmpw(&emu_si, 0xB);
	if ((int16)emu_si <= (int16)0xB) goto l__0B59;
	goto l__0BBB;
l__0B86:
	emu_si = 0x6F;
	goto l__0BB1;
l__0B8B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x0BAD); emu_cs = 0x2BB6; f__2BB6_000C_0043_A570();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0BAD:
	emu_addw(&emu_sp, 0x8);
	emu_incw(&emu_si);
l__0BB1:
	emu_cmpw(&emu_si, 0x80);
	if ((int16)emu_si <= (int16)0x80) goto l__0B8B;
	goto l__0BBB;
l__0BB9:
	goto l__0BBB;
l__0BBB:
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
 * Decompiled function emu_Window_WidgetClick_Create()
 *
 * @name emu_Window_WidgetClick_Create
 * @implements B4B8:0BC1:000C:1630 ()
 * @implements B4B8:0BCD:008A:FDF3
 * @implements B4B8:0C57:00A3:B72D
 * @implements B4B8:0CAA:0050:EFB0
 * @implements B4B8:0CFA:0024:2C86
 * @implements B4B8:0D05:0019:9B88
 * @implements B4B8:0D1E:0005:8BCF
 *
 * Called From: B4B8:1A37:000B:A1A7
 */
void emu_Window_WidgetClick_Create()
{
l__0BC1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__0D05;
l__0BCD:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0C57); emu_Window_Widget_Allocate();
l__0C57:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xA) < (int16)0x0) {
		emu_ax = emu_si;
		emu_dx = 0x18;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E6B;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
		emu_ax = emu_si;
		emu_dx = 0x18;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E6B;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	}
l__0CAA:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x30) = emu_dx;
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0242_0017_581D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0CFA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3C28) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C26) = emu_ax;
	emu_incw(&emu_si);
l__0D05:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) goto l__0D1E;
	goto l__0BCD;
l__0D1E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0D23_0010_BA99()
 *
 * @name f__B4B8_0D23_0010_BA99
 * @implements B4B8:0D23:0010:BA99 ()
 * @implements B4B8:0D33:000F:D70C
 * @implements B4B8:0D42:0025:9D20
 * @implements B4B8:0D67:0056:DC5A
 * @implements B4B8:0DBD:009B:1454
 * @implements B4B8:0E58:0034:00A7
 * @implements B4B8:0E8C:001E:3931
 * @implements B4B8:0EAA:0024:9D41
 * @implements B4B8:0ECA:0004:893F
 *
 * Called From: 34B8:0039:0005:0000
 * Called From: B4B8:21DF:0004:C890
 */
void f__B4B8_0D23_0010_BA99()
{
l__0D23:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2177), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2177) == 0x0) goto l__0D33;
	goto l__0ECA;
l__0D33:
	emu_get_memory16(emu_ds, 0x00, 0x2177) = 0x1;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D42); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0D42:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6116) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6114) = 0x0;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x223E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x1587; f__1587_0008_0012_30AE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0D67:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_get_memory16(emu_ds, 0x00, 0x38D0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38CE) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE9);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CE7);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_get_memory16(emu_ds, 0x00, 0x38D4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38D2) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38D0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38CE);
	emu_get_memory16(emu_ds, 0x00, 0x39F0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x39EE) = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39F0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_push(emu_ds);
	emu_ax = 0x2247;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0DBD:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_get_memory16(emu_ds, 0x00, 0x39F2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x39F4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ds, 0x00, 0x39F8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x39F6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x39FA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_push(emu_cs); emu_push(0x0E58); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0E58:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38D0) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38CE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38D0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38CE);
	emu_get_memory16(emu_ds, 0x00, 0x3954) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3952) = emu_dx;
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), 0x100);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), 0x0);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3954));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3952));
	emu_push(emu_cs);
	emu_push(0x0E8C); f__B4B8_09D0_0012_0D7D();
l__0E8C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_push(emu_ds);
	emu_ax = 0x6168;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2250;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EAA); f__B4B8_2295_0018_A862();
l__0EAA:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
l__0ECA:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ECE_000B_BD2E()
 *
 * @name f__B4B8_0ECE_000B_BD2E
 * @implements B4B8:0ECE:000B:BD2E ()
 *
 * Called From: 34B8:0025:0005:0000
 */
void f__B4B8_0ECE_000B_BD2E()
{
l__0ECE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ds, 0x00, 0x2177) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Window_Widget_Allocate()
 *
 * @name emu_Window_Widget_Allocate
 * @implements B4B8:0ED9:001E:DC63 ()
 * @implements B4B8:0EF7:0094:B671
 * @implements B4B8:0F8B:0007:20BF
 * @implements B4B8:0F92:001B:C282
 * @implements B4B8:0FAD:000C:69DB
 * @implements B4B8:0FB9:0020:BED0
 * @implements B4B8:1009:0003:1D01
 * @implements B4B8:100C:0018:9F31
 * @implements B4B8:1016:000E:EDB6
 * @implements B4B8:1024:004D:6612
 * @implements B4B8:1071:0014:8D34
 * @implements B4B8:1085:000B:4127
 * @implements B4B8:1090:006F:7552
 * @implements B4B8:10F7:0008:C849
 * @implements B4B8:10FF:0006:F7CE
 *
 * Called From: 34B8:0020:0005:0000
 * Called From: B4B8:0C54:008A:FDF3
 */
void emu_Window_Widget_Allocate()
{
l__0ED9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0EF7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x28) = 0xB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x29) = 0xC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = 0xF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x27) = 0xC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x44C5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x38) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_es, emu_bx, 0x3A) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_bx = emu_di;
	emu_subw(&emu_bx, 0xFFFC);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx <= 0x3) goto l__0F8B;
	goto l__1024;
l__0F8B:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1105);
	switch (emu_ip) {
		case 0x0F92: goto l__0F92;
		case 0x0FAD: goto l__0FAD;
		case 0x0FB9: goto l__0FB9;
		case 0x100C: goto l__100C;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x0F8D; emu_last_length = 0x0007; emu_last_crc = 0x20BF;
			emu_call();
			return;
	}
l__0F92:
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	goto l__1090;
l__0FAD:
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x4;
	emu_ax = 0xAEC;
	emu_dx = 0xE3E;
	goto l__1016;
l__0FB9:
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x4;
	emu_ax = 0xAEC;
	emu_dx = 0x809;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__1009;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FD9); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
	/* Unresolved jump */ emu_ip = 0x0FD9; emu_last_cs = 0xB4B8; emu_last_ip = 0x0FD9; emu_last_length = 0x0020; emu_last_crc = 0xBED0; emu_call();
l__1009:
	goto l__1090;
l__100C:
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x4;
	emu_ax = 0xAEC;
	emu_dx = 0xCA1;
l__1016:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	goto l__1090;
l__1024:
	emu_get_memory8(emu_ss, emu_bp, -0x5) = 0x1;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x446);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x444);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x108E; emu_last_cs = 0xB4B8; emu_last_ip = 0x1064; emu_last_length = 0x004D; emu_last_crc = 0x6612; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1071); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1071:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1085); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1085:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	goto l__1090;
l__1090:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x5);
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x5);
	emu_get_memory8(emu_es, emu_bx, 0xC) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x5);
	emu_get_memory8(emu_es, emu_bx, 0xA) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	emu_cmpw(&emu_di, 0x19);
	if (emu_di == 0x19) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
		emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
		emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	}
l__10F7:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__10FF;
l__10FF:
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
 * Decompiled function f__B4B8_110D_000D_FD5C()
 *
 * @name f__B4B8_110D_000D_FD5C
 * @implements B4B8:110D:000D:FD5C ()
 * @implements B4B8:111A:0055:2891
 * @implements B4B8:1161:000E:7FB5
 * @implements B4B8:1164:000B:43AB
 *
 * Called From: 34B8:002F:0005:0000
 * Called From: B4B8:21E7:0008:5434
 */
void f__B4B8_110D_000D_FD5C()
{
l__110D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__1164;
l__111A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = 0x10;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = 0x10;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x9) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) <= (int16)0x6) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C42));
			emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
			emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
			emu_cl = 0x4;
			emu_shlb(&emu_al, emu_cl);
			emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
			emu_addb(&emu_al, 0x90);
			emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
		}
	}
l__1161:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__1164:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x100) goto l__111A;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_116F_0013_15F7()
 *
 * @name f__B4B8_116F_0013_15F7
 * @implements B4B8:116F:0013:15F7 ()
 * @implements B4B8:1182:000B:03A1
 * @implements B4B8:118D:0009:F53F
 * @implements B4B8:1196:0009:C506
 * @implements B4B8:119F:0019:6C90
 * @implements B4B8:11B8:001C:8274
 * @implements B4B8:11D4:000E:4382
 * @implements B4B8:11E2:004D:9641
 * @implements B4B8:122F:0006:778E
 * @implements B4B8:1369:000C:2396
 * @implements B4B8:1375:000A:92AE
 * @implements B4B8:14DB:0039:83D0
 * @implements B4B8:1514:0006:F780
 * @implements B4B8:151A:0026:AD40
 * @implements B4B8:1540:000E:6379
 * @implements B4B8:154E:0026:6A7F
 * @implements B4B8:1574:000B:42FA
 * @implements B4B8:157F:000F:726A
 * @implements B4B8:158E:0023:DD60
 * @implements B4B8:15B1:005D:ED2E
 * @implements B4B8:160E:0009:7F8A
 * @implements B4B8:160F:0008:7FA9
 * @implements B4B8:1617:000B:714A
 * @implements B4B8:1622:0012:0C56
 * @implements B4B8:1628:000C:A39F
 * @implements B4B8:1634:000A:921D
 * @implements B4B8:16CE:0005:8BCF
 *
 * Called From: B4B8:17DE:0013:8AC6
 */
void f__B4B8_116F_0013_15F7()
{
l__116F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1182;
	goto l__16CE;
l__1182:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x118D); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__118D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1196;
	goto l__16CE;
l__1196:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__119F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x7D00;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x11B8); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11B8:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11D4); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11D4:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11E2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_bx, 0x1388);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x2255;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x122F); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__122F:
	emu_addw(&emu_sp, 0x16);
	goto l__1369;
l__1369:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1375;
	/* Unresolved jump */ emu_ip = 0x1235; emu_last_cs = 0xB4B8; emu_last_ip = 0x1372; emu_last_length = 0x000C; emu_last_crc = 0x2396; emu_call();
l__1375:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x137F; emu_last_cs = 0xB4B8; emu_last_ip = 0x137A; emu_last_length = 0x000A; emu_last_crc = 0x92AE; emu_call(); return; }
	goto l__14DB;
l__14DB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x229A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1514); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1514:
	emu_addw(&emu_sp, 0x16);
	goto l__1628;
l__151A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x229A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1540); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1540:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x154E); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_07E2_0012_911F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__154E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1C);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x226B;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1574); emu_cs = 0x01F7; f__01F7_3803_001E_AAD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1574:
	emu_addw(&emu_sp, 0x18);
	emu_cmpw(&emu_ax, 0x4);
	if ((int16)emu_ax >= (int16)0x4) goto l__157F;
	goto l__1617;
l__157F:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__160F;
l__158E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs); emu_push(0x15B1); emu_cs = 0x01F7; emu_String_strcasecmp();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__15B1:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__160E;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x52) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x40) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x4E) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	goto l__1617;
l__160E:
	emu_incw(&emu_si);
l__160F:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si >= (int16)0x1B) goto l__1617;
	goto l__158E;
l__1617:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1622); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1622:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
l__1628:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1634;
	goto l__151A;
l__1634:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x163E; emu_last_cs = 0xB4B8; emu_last_ip = 0x1639; emu_last_length = 0x000A; emu_last_crc = 0x921D; emu_call(); return; }
	goto l__16CE;
l__16CE:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Gameloop_IntroMenu()
 *
 * @name emu_Gameloop_IntroMenu
 * @implements B4B8:16D3:0022:3C6A ()
 * @implements B4B8:16F5:0017:8515
 * @implements B4B8:170C:000C:840B
 * @implements B4B8:1718:000A:59F5
 * @implements B4B8:1722:0042:5923
 * @implements B4B8:1764:0010:D3DB
 * @implements B4B8:1774:001A:E7C5
 * @implements B4B8:178E:0019:6A0B
 * @implements B4B8:17A7:0027:C603
 * @implements B4B8:17CE:0013:8AC6
 * @implements B4B8:17E1:000F:E497
 * @implements B4B8:17F0:0027:AC90
 * @implements B4B8:1817:001F:0626
 * @implements B4B8:1836:000B:F571
 * @implements B4B8:1841:0011:6D15
 * @implements B4B8:1852:000E:A415
 * @implements B4B8:1860:000F:9764
 * @implements B4B8:186F:0011:B8BA
 * @implements B4B8:1880:0019:EE0B
 * @implements B4B8:1899:002C:7400
 * @implements B4B8:18C5:0025:1863
 * @implements B4B8:18EA:004F:3A18
 * @implements B4B8:1939:001B:556A
 * @implements B4B8:1954:0010:C42D
 * @implements B4B8:1964:0009:6FDE
 * @implements B4B8:196D:0017:0B05
 * @implements B4B8:1984:000A:8AD2
 * @implements B4B8:1988:0006:564A
 * @implements B4B8:198E:0031:26DF
 * @implements B4B8:19BF:001D:EB62
 * @implements B4B8:19DC:0012:4248
 * @implements B4B8:19EE:0014:93D2
 * @implements B4B8:19EF:0013:03D7
 * @implements B4B8:1A02:0023:5281
 * @implements B4B8:1A25:0005:87AE
 * @implements B4B8:1A2A:0005:816D
 * @implements B4B8:1A2F:000B:A1A7
 * @implements B4B8:1A3A:0005:9EEE
 * @implements B4B8:1A3F:0009:CF06
 * @implements B4B8:1A48:0010:5926
 * @implements B4B8:1A58:001E:DA55
 * @implements B4B8:1A76:0025:CBCB
 * @implements B4B8:1A9B:0013:FFC6
 * @implements B4B8:1AAE:0010:CE4A
 * @implements B4B8:1ABE:0013:104B
 * @implements B4B8:1AD1:0010:CE4A
 * @implements B4B8:1AE1:0013:4073
 * @implements B4B8:1AF4:0010:CE4A
 * @implements B4B8:1B04:0013:0075
 * @implements B4B8:1B17:0014:191A
 * @implements B4B8:1B2B:0025:9F95
 * @implements B4B8:1B50:0027:A86C
 * @implements B4B8:1B77:000A:E2A3
 * @implements B4B8:1B81:000F:A141
 * @implements B4B8:1B90:000F:DC51
 * @implements B4B8:1B9F:0010:30A4
 * @implements B4B8:1BAF:0010:3989
 * @implements B4B8:1BB1:000E:B9BB
 * @implements B4B8:1BBF:0018:10AD
 * @implements B4B8:1BC1:0016:222D
 * @implements B4B8:1BD7:0025:87CA
 * @implements B4B8:1BDD:001F:2E51
 * @implements B4B8:1BE3:0019:233D
 * @implements B4B8:1BEC:0010:76E3
 * @implements B4B8:1BFC:0004:3AFB
 * @implements B4B8:1C03:0008:FC73
 * @implements B4B8:1C0B:000E:5697
 * @implements B4B8:1C19:0017:856F
 * @implements B4B8:1C30:001D:DFBC
 * @implements B4B8:1C4D:000F:E943
 * @implements B4B8:1C5C:0005:FB00
 * @implements B4B8:1C61:0005:9EFD
 * @implements B4B8:1C66:0009:C151
 * @implements B4B8:1C6F:001A:FE4A
 * @implements B4B8:1C89:001F:0626
 * @implements B4B8:1CA8:0018:7248
 * @implements B4B8:1CC0:000E:6633
 * @implements B4B8:1CCE:000F:9669
 * @implements B4B8:1CD5:0008:FC73
 * @implements B4B8:1CDD:000E:5697
 * @implements B4B8:1CEB:000C:6762
 * @implements B4B8:1CF7:0017:810B
 * @implements B4B8:1D0E:001D:DFBC
 * @implements B4B8:1D2B:000F:0946
 * @implements B4B8:1D3A:0013:4DE4
 * @implements B4B8:1D4D:000C:5887
 * @implements B4B8:1D59:0004:8D1C
 * @implements B4B8:1D5D:0005:1E52
 * @implements B4B8:1D62:0008:C68B
 * @implements B4B8:1D6A:0004:8D12
 * @implements B4B8:1D6E:0005:6168
 * @implements B4B8:1D73:0011:195A
 * @implements B4B8:1D84:000B:F574
 * @implements B4B8:1D8F:0006:E56C
 * @implements B4B8:1D95:000D:A409
 * @implements B4B8:1DA2:000A:DA03
 * @implements B4B8:1DAC:002A:80E8
 * @implements B4B8:1DD6:000A:FC97
 * @implements B4B8:1DD9:0007:D435
 * @implements B4B8:1DE0:000D:2400
 * @implements B4B8:1DED:0009:3D49
 * @implements B4B8:1DF4:0002:EA3A
 * @implements B4B8:1DF6:0009:F0F7
 * @implements B4B8:1DFF:000E:2564
 * @implements B4B8:1E0D:000C:86D4
 * @implements B4B8:1E19:0010:30A4
 * @implements B4B8:1E29:0010:3989
 * @implements B4B8:1E2B:000E:B9BB
 * @implements B4B8:1E39:000F:B6A6
 * @implements B4B8:1E3B:000D:D3A6
 * @implements B4B8:1E41:0007:CF65
 * @implements B4B8:1E48:0002:C03A
 * @implements B4B8:1E4A:0009:9034
 * @implements B4B8:1E53:000A:5518
 * @implements B4B8:1E5D:0046:55E8
 * @implements B4B8:1EA3:0015:D2BF
 * @implements B4B8:1EB8:002C:6A88
 * @implements B4B8:1EC3:0021:AF2E
 * @implements B4B8:1EC4:0020:8CAE
 * @implements B4B8:1EE4:000C:BF5E
 * @implements B4B8:1EF0:0017:BB13
 * @implements B4B8:1F07:001E:9076
 * @implements B4B8:1F25:0070:2A4C
 * @implements B4B8:1F2A:006B:A553
 * @implements B4B8:1F2B:006A:655B
 * @implements B4B8:1F95:0009:0769
 * @implements B4B8:1F9E:0008:DBE0
 * @implements B4B8:1FA6:0008:A467
 * @implements B4B8:1FAE:0021:2C9D
 * @implements B4B8:1FCF:0014:B1DF
 * @implements B4B8:1FE3:002F:4EAF
 * @implements B4B8:1FF1:0021:2797
 * @implements B4B8:2012:001E:B87D
 * @implements B4B8:2030:000C:418E
 * @implements B4B8:203C:0012:7861
 * @implements B4B8:204E:001D:0D81
 * @implements B4B8:206B:0008:3BE5
 * @implements B4B8:2073:000D:8BFB
 * @implements B4B8:2078:0008:F782
 * @implements B4B8:2080:001D:BE00
 * @implements B4B8:209D:0023:32FB
 * @implements B4B8:20BB:0005:1765
 * @implements B4B8:20C0:0008:7DFA
 * @implements B4B8:20C8:0002:F03A
 * @implements B4B8:20CA:0008:FC73
 * @implements B4B8:20D2:000E:5697
 * @implements B4B8:20E0:000C:6762
 * @implements B4B8:20EC:0017:810B
 * @implements B4B8:2103:001D:DFBC
 * @implements B4B8:2120:000F:E943
 * @implements B4B8:212A:0005:6168
 * @implements B4B8:212F:0034:7DBA
 * @implements B4B8:2163:0012:2CF4
 * @implements B4B8:2175:0018:F01B
 * @implements B4B8:2176:0017:A91B
 * @implements B4B8:218D:000B:F574
 * @implements B4B8:2198:0006:8488
 * @implements B4B8:2199:0005:E089
 * @implements B4B8:219E:0015:8E2E
 * @implements B4B8:21B3:000C:18BE
 * @implements B4B8:21B6:0009:9116
 * @implements B4B8:21BF:000C:D8AD
 * @implements B4B8:21CB:000B:B5DE
 * @implements B4B8:21D6:0008:2A18
 * @implements B4B8:21DE:0004:C890
 * @implements B4B8:21E2:0008:5434
 * @implements B4B8:21EA:000A:D6BC
 * @implements B4B8:21F4:0006:E56C
 * @implements B4B8:21FA:001B:9776
 * @implements B4B8:2229:0014:1EF0
 * @implements B4B8:2242:000D:F528
 * @implements B4B8:224F:0007:05DB
 * @implements B4B8:2256:000C:E0BE
 * @implements B4B8:2262:0009:BAB5
 * @implements B4B8:2265:0006:BEE9
 * @implements B4B8:226B:000E:A56D
 * @implements B4B8:226C:000D:A409
 * @implements B4B8:2279:0008:AE7C
 *
 * Called From: 34B8:002A:0005:0000
 */
void emu_Gameloop_IntroMenu()
{
l__16D3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_si = 0x1C;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16F5); emu_cs = 0x1FB5; f__1FB5_17D7_0018_F3C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__16F5:
	emu_pop(&emu_cx);
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2179;
	emu_push(emu_ax);
	emu_ax = 0x29E8;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x170C); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__170C:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xDEE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1718); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1718:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1722); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0028_0013_DF68();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1722:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38B2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x3A38) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x37A0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3B34) = 0xD7;
	emu_get_memory16(emu_ds, 0x00, 0x3B36) = 0x35;
	emu_get_memory16(emu_ds, 0x00, 0x3B50) = 0xD8;
	emu_get_memory16(emu_ds, 0x00, 0x3B52) = 0x35;
	emu_get_memory16(emu_ds, 0x00, 0x3A0E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3A10) = 0x0;
	emu_push(emu_cs); emu_push(0x1764); emu_cs = 0x3536; overlay(0x3536, 0); f__B536_0129_000A_8178();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1764:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1774); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1774:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3C38) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C36) = emu_ax;
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__178E:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3C34) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C32) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x100;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x17A7); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__17A7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3C44) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C42) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x2EE0;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x17CE); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__17CE:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38DC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38DA) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x22B4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x17E1); f__B4B8_116F_0013_15F7();
l__17E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x17F0); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__17F0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38DC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DA) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_ax = 0x22C0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1817); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1817:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x1836); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1836:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1841); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1841:
	emu_pop(&emu_cx);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_dx, &emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_cx = 0x100;
	emu_xorw(&emu_bx, emu_bx);
	emu_al = 0x12;
	emu_ah = 0x10;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x1852); Interrupt_Video();
l__1852:
	emu_pop(&emu_es);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1860); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1860:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x186F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__186F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x100;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1880); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1880:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3C3C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C3A) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x100;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1899); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1899:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3C40) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C3E) = emu_ax;
	emu_ax = 0x55;
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6638);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x663A);
	emu_push(0x18C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60597: f__22A6_0597_0019_A23D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x18C0; emu_last_length = 0x002C; emu_last_crc = 0x7400;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__18C5:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x55;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6638);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x663A);
	emu_push(0x18EA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60597: f__22A6_0597_0019_A23D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x18E5; emu_last_length = 0x0025; emu_last_crc = 0x1863;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__18EA:
	emu_addw(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_get_memory8(emu_es, emu_bx, 0xFF) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_get_memory8(emu_es, emu_bx, 0xDF) = 0xDF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_get_memory8(emu_es, emu_bx, 0xEF) = 0xEF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_get_memory8(emu_es, emu_bx, 0xFF) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_get_memory8(emu_es, emu_bx, 0xDF) = 0xDF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_get_memory8(emu_es, emu_bx, 0xEF) = 0xEF;
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x5DC;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1939); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1939:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3C48) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C46) = emu_ax;
	emu_ax = 0x5DC;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C48));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C46));
	emu_push(emu_cs); emu_push(0x1954); emu_cs = 0x2903; f__2903_090A_0019_4354();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1954:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x22C8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1964); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1964:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x196D); emu_cs = 0x253D; f__253D_008A_0016_007A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__196D:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38C8) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38C6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x2) goto l__1984;
	emu_push(emu_ds);
	emu_ax = 0x22D0;
	goto l__1988;
l__1984:
	emu_push(emu_ds);
	emu_ax = 0x22DB;
l__1988:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x198E); emu_cs = 0x256D; f__256D_0004_001C_9F23();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__198E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A2E) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3A2C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x99F1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x99EF);
	emu_get_memory16(emu_ds, 0x00, 0x3A32) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A30) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x6128;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x392E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x22E5;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19BF); f__B4B8_2295_0018_A862();
l__19BF:
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x33B6;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3918;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x22EA;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19DC); f__B4B8_2295_0018_A862();
l__19DC:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A38) == 0xFFFF) goto l__19EF;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x19EE); f__B4B8_110D_000D_FD5C();
l__19EE:
	emu_pop(&emu_cx);
l__19EF:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1A02); f__B4B8_0A1E_001A_E094();
l__1A02:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A25); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A25:
	emu_addw(&emu_sp, 0x8);
	goto l__1A2F;
l__1A2A:
	emu_push(emu_cs); emu_push(0x1A2F); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A2F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x1);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x706A) > (int16)0x1) goto l__1A2A;
	emu_push(emu_cs);
	emu_push(0x1A3A); emu_Window_WidgetClick_Create();
l__1A3A:
	emu_push(emu_cs); emu_push(0x1A3F); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GameOptions_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A3F:
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A48); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A48:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A58); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A58:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x1234;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x5678;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1A76); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A76:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ds, 0x00, 0x39EC) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x39EA) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x4000);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1A9B); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1A9B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AAE); emu_cs = 0x0FE4; emu_Unit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1AAE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1ABE); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1ABE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AD1); emu_cs = 0x104B; emu_Team_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1AD1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AE1); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1AE1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AF4); emu_cs = 0x10BE; emu_House_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1AF4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B04); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B04:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B17); emu_cs = 0x1082; emu_Structure_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B17:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x58);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B2B); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B2B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ds, 0x00, 0x3958) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3956) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x770);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B50); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B50:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ds, 0x00, 0x395C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x395A) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x280);
	emu_si = 0x1C;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_push(emu_cs); emu_push(0x1B77); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B77:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37AE) == 0x0) goto l__1B81;
	goto l__20CA;
l__1B81:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_push(emu_ds);
	emu_ax = 0x22F0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B90); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B90:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x22FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B9F); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1B9F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__1BAF;
	emu_ax = 0x1;
	goto l__1BB1;
l__1BAF:
	emu_xorw(&emu_ax, emu_ax);
l__1BB1:
	emu_shlw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__1BBF;
	emu_ax = 0x1;
	goto l__1BC1;
l__1BBF:
	emu_xorw(&emu_ax, emu_ax);
l__1BC1:
	emu_pop(&emu_dx);
	emu_orw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x0) goto l__1BDD;
	emu_push(emu_ds);
	emu_ax = 0x230A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1BD7); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1BD7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1BE3;
l__1BDD:
	emu_get_memory16(emu_ds, 0x00, 0x37B4) = 0x1;
l__1BE3:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_si;
	emu_cx = 0x5;
	emu_bx = 0x2281;
l__1BEC:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__1BFC;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__1BEC;
	goto l__1E48;
l__1BFC:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA);
	switch (emu_ip) {
		case 0x1C03: goto l__1C03;
		case 0x1D5D: goto l__1D5D;
		case 0x1D6E: goto l__1D6E;
		case 0x1DF6: goto l__1DF6;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x1BFC; emu_last_length = 0x0004; emu_last_crc = 0x3AFB;
			emu_call();
			return;
	}
l__1C03:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C0B); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C0B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1C19); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C19:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x0) goto l__1C30;
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x6D60;
	/* Unresolved jump */ emu_ip = 0x1C3C; emu_last_cs = 0xB4B8; emu_last_ip = 0x1C2E; emu_last_length = 0x0017; emu_last_crc = 0x856F; emu_call();
l__1C30:
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x2EE0;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x1C4D); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C4D:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38DC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38DA) = emu_ax;
	emu_push(emu_cs); emu_push(0x1C5C); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C5C:
	emu_push(emu_cs); emu_push(0x1C61); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C61:
	emu_push(emu_cs); emu_push(0x1C66); emu_cs = 0x34BE; overlay(0x34BE, 0); emu_Gameloop_Intro();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C66:
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C6F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C6F:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_ax = 0x22C0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C89); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1C89:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x1CA8); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1CA8:
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) != 0x0) goto l__1CD5;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x230A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CC0); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1CC0:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x1CCE); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1CCE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x37B4) = 0x1;
l__1CD5:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CDD); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1CDD:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1CEB); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1CEB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x2316;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CF7); emu_cs = 0x0FCB; emu_String_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1CF7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x0) goto l__1D0E;
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x4E20;
	/* Unresolved jump */ emu_ip = 0x1D1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1D0C; emu_last_length = 0x0017; emu_last_crc = 0x810B; emu_call();
l__1D0E:
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x2EE0;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x1D2B); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D2B:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38DC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38DA) = emu_ax;
	emu_push(emu_cs); emu_push(0x1D3A); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D3A:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1D4D); f__B4B8_0A1E_001A_E094();
l__1D4D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D59); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D59:
	emu_pop(&emu_cx);
	goto l__1E41;
l__1D5D:
	emu_push(emu_cs); emu_push(0x1D62); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D62:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D6A); emu_cs = 0x01F7; emu_Terminate_Normal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D6A:
	emu_pop(&emu_cx);
	goto l__1E4A;
l__1D6E:
	emu_push(emu_cs); emu_push(0x1D73); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D73:
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1D84); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D84:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D8F); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D8F:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1D95); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1D95:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1DA2); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1DA2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1DAC); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_SaveLoad_List();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1DAC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1DE0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BE) == 0x1) goto l__1DD9;
	emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x0;
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1DD6); f__B4B8_0A1E_001A_E094();
l__1DD6:
	emu_addw(&emu_sp, 0x8);
l__1DD9:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	goto l__1DF4;
l__1DE0:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1DED); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1DED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__1DF4:
	goto l__1E4A;
l__1DF6:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1DFF); emu_cs = 0x3518; overlay(0x3518, 0); f__B518_0558_0010_240A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1DFF:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1E0D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x22FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1E19); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1E19:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__1E29;
	emu_ax = 0x1;
	goto l__1E2B;
l__1E29:
	emu_xorw(&emu_ax, emu_ax);
l__1E2B:
	emu_shlw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__1E39;
	emu_ax = 0x1;
	goto l__1E3B;
l__1E39:
	emu_xorw(&emu_ax, emu_ax);
l__1E3B:
	emu_pop(&emu_dx);
	emu_orw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
l__1E41:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	goto l__1E4A;
l__1E48:
	goto l__1E4A;
l__1E4A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__1E53;
	goto l__2078;
l__1E53:
	emu_get_memory16(emu_ds, 0x00, 0x41B8) = 0x0;
	emu_xorw(&emu_di, emu_di);
	goto l__1EC4;
l__1E5D:
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_di;
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x219D), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x219D) == 0x0) goto l__1EB8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_di;
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x219D));
	emu_push(emu_cs); emu_push(0x1EA3); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1EA3:
	emu_pop(&emu_cx);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_cx, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_cx);
	emu_get_memory16(emu_ss, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	goto l__1EC3;
l__1EB8:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41B8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41B8) == 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x41B8) = emu_di;
	}
l__1EC3:
	emu_incw(&emu_di);
l__1EC4:
	emu_cmpw(&emu_di, 0x6);
	if ((int16)emu_di < (int16)0x6) goto l__1E5D;
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
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1EE4:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__1F2B;
l__1EF0:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1F07); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1F07:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__1F2A;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1F25); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1F25:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
l__1F2A:
	emu_incw(&emu_si);
l__1F2B:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x41B8));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ds, 0x00, 0x41B8)) goto l__1EF0;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cl = 0x3;
	emu_shrw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ds, 0x00, 0x41B6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x41B6);
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_ds, 0x00, 0x4136) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cl = 0x4;
	emu_shrw(&emu_ax, emu_cl);
	emu_dx = 0x13;
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x4132) = emu_dx;
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x41B8);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_shrw(&emu_ax, 0x1);
	emu_dx = 0xA0;
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x4134) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0xB);
	emu_get_memory16(emu_ds, 0x00, 0x4138) = emu_ax;
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
	emu_ax = 0x231B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1F95:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F9E); emu_cs = 0x34CA; overlay(0x34CA, 0); f__B4CA_020F_0017_A939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1F9E:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1FA6); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1FA6:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1FAE:
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x1FCF); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1FCF:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1FE3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1FE3:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	}
l__1FF1:
	emu_ax = 0x39;
	emu_push(emu_ax);
	emu_ax = 0x231;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x85;
	emu_push(emu_ax);
	emu_ax = 0xC0;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2321;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2012); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2012:
	emu_addw(&emu_sp, 0x10);
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
	emu_push(emu_cs); emu_push(0x2030); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2030:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x203C); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__203C:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x204E); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__204E:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x206B); emu_cs = 0x34E6; overlay(0x34E6, 0); f__B4E6_0108_004A_C989();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__206B:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x2073); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2073:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
l__2078:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) != 0x0) goto l__2080;
	goto l__20C8;
l__2080:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x209D); emu_cs = 0x34E6; overlay(0x34E6, 0); f__B4E6_0200_0091_FAEA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__209D:
	emu_addw(&emu_sp, 0x10);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
		emu_dx = 0xC;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = emu_si;
		emu_shlw(&emu_dx, 0x1);
		emu_addw(&emu_ax, emu_dx);
		emu_bx = emu_ax;
		emu_si = emu_get_memory16(emu_ds, emu_bx, 0x219D);
	}
l__20BB:
	emu_push(emu_cs); emu_push(0x20C0); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__20C0:
	emu_cmpw(&emu_si, 0x1B);
	if (emu_si == 0x1B) goto l__20C8;
	goto l__1BE3;
l__20C8:
	goto l__212A;
l__20CA:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20D2); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__20D2:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x20E0); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__20E0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x2316;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20EC); emu_cs = 0x0FCB; emu_String_Load();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__20EC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x0) goto l__2103;
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x4E20;
	/* Unresolved jump */ emu_ip = 0x210F; emu_last_cs = 0xB4B8; emu_last_ip = 0x2101; emu_last_length = 0x0017; emu_last_crc = 0x810B; emu_call();
l__2103:
	emu_get_memory16(emu_ds, 0x00, 0x38E0) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38DE) = 0x2EE0;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x2120); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2120:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38DC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38DA) = emu_ax;
l__212A:
	emu_push(emu_cs); emu_push(0x212F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__212F:
	emu_get_memory16(emu_ds, 0x00, 0x37B4) = 0x0;
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x2163);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x215E; emu_last_length = 0x0034; emu_last_crc = 0x7DBA;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2163:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__2176;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2175); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2175:
	emu_pop(&emu_cx);
l__2176:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__2199;
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x218D); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__218D:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2198); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2198:
	emu_pop(&emu_cx);
l__2199:
	emu_push(emu_cs); emu_push(0x219E); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__219E:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379A) == 0x0) goto l__21B6;
	emu_push(emu_ds);
	emu_ax = 0x2327;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x379A));
	emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x257A; f__257A_000D_001A_3B75();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__21B3:
	emu_addw(&emu_sp, 0x6);
l__21B6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__21BF;
	goto l__226C;
l__21BF:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A38) != 0xFFFF) goto l__21DE;
	emu_push(emu_cs); emu_push(0x21CB); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__21CB:
	emu_get_memory16(emu_ds, 0x00, 0x3A38) = 0x5;
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0FB0_0028_02A0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__21D6:
	emu_get_memory16(emu_ds, 0x00, 0x3A38) = emu_ax;
	emu_push(emu_cs); emu_push(0x21DE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__21DE:
	emu_push(emu_cs);
	emu_push(0x21E2); f__B4B8_0D23_0010_BA99();
l__21E2:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x21EA); f__B4B8_110D_000D_FD5C();
l__21EA:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x21F4); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__21F4:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__21FA:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37AE) == 0x0) goto l__2229;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B2) == 0x0) { /* Unresolved jump */ emu_ip = 0x221A; emu_last_cs = 0xB4B8; emu_last_ip = 0x2206; emu_last_length = 0x001B; emu_last_crc = 0x9776; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2215); emu_cs = 0x3503; emu_ip = 0x0020; emu_last_cs = 0xB4B8; emu_last_ip = 0x2210; emu_last_length = 0x001B; emu_last_crc = 0x9776; emu_call();
	/* Unresolved jump */ emu_ip = 0x2215; emu_last_cs = 0xB4B8; emu_last_ip = 0x2215; emu_last_length = 0x001B; emu_last_crc = 0x9776; emu_call();
l__2229:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B2) == 0x0) goto l__2242;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x223D); emu_cs = 0x3503; emu_ip = 0x0020; emu_last_cs = 0xB4B8; emu_last_ip = 0x2238; emu_last_length = 0x0014; emu_last_crc = 0x1EF0; emu_call();
	/* Unresolved jump */ emu_ip = 0x223D; emu_last_cs = 0xB4B8; emu_last_ip = 0x223D; emu_last_length = 0x0014; emu_last_crc = 0x1EF0; emu_call();
l__2242:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x224F); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0000_000E_B463();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__224F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x2256); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2256:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__2262;
	emu_ax = 0x5;
	goto l__2265;
l__2262:
	emu_ax = 0x4;
l__2265:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x226B); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__226B:
	emu_pop(&emu_cx);
l__226C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x2279); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__2279:
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
 * Decompiled function f__B4B8_2295_0018_A862()
 *
 * @name f__B4B8_2295_0018_A862
 * @implements B4B8:2295:0018:A862 ()
 * @implements B4B8:22AD:001F:5CD7
 * @implements B4B8:22CC:0005:862E
 * @implements B4B8:22D1:0002:2597
 *
 * Called From: B4B8:0EA7:001E:3931
 * Called From: B4B8:19BC:0031:26DF
 * Called From: B4B8:19D9:001D:EB62
 */
void f__B4B8_2295_0018_A862()
{
l__2295:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x2330;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22AD); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__22AD:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22CC); emu_cs = 0x15C2; emu_Script_LoadFromFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__22CC:
	emu_addw(&emu_sp, 0x10);
	goto l__22D1;
l__22D1:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
