/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B5_0000_0014_F092()
 *
 * @name f__B4B5_0000_0014_F092
 * @implements B4B5:0000:0014:F092 ()
 * @implements B4B5:0011:0003:9539
 * @implements B4B5:0014:0038:72B6
 * @implements B4B5:004C:000D:0FE8
 * @implements B4B5:0059:0008:B4CF
 * @implements B4B5:0061:0014:7874
 * @implements B4B5:0075:001B:0118
 * @implements B4B5:0090:0014:EBAA
 * @implements B4B5:00A4:0022:04BB
 * @implements B4B5:00C6:001F:0DBE
 * @implements B4B5:00E5:001F:25BE
 * @implements B4B5:0104:0023:B49E
 * @implements B4B5:0127:001F:EA8A
 * @implements B4B5:0146:0022:A358
 * @implements B4B5:0168:0022:8C57
 * @implements B4B5:018A:0029:D26D
 * @implements B4B5:01B3:0026:A872
 * @implements B4B5:01D9:0026:480D
 * @implements B4B5:01FF:0008:5475
 * @implements B4B5:0207:000D:44AD
 * @implements B4B5:0214:0007:588E
 * @implements B4B5:021B:0041:D371
 * @implements B4B5:025C:000E:4C74
 * @implements B4B5:026A:000E:B38A
 * @implements B4B5:0278:0014:E9B8
 * @implements B4B5:028C:000B:6FB9
 * @implements B4B5:0297:0009:3799
 * @implements B4B5:02A0:0006:D4F4
 * @implements B4B5:02A6:0020:939D
 * @implements B4B5:02C6:0023:D24E
 * @implements B4B5:02E9:0024:0501
 * @implements B4B5:030D:003F:A1B8
 * @implements B4B5:0343:0009:0B24
 * @implements B4B5:0344:0008:0B07
 * @implements B4B5:034C:0019:3E28
 * @implements B4B5:03A0:000B:6148
 * @implements B4B5:03AB:0040:8201
 * @implements B4B5:03EB:0006:B612
 * @implements B4B5:03F1:000F:A0F4
 * @implements B4B5:0400:002B:2569
 * @implements B4B5:042B:0013:2B96
 * @implements B4B5:043E:000A:3572
 * @implements B4B5:0448:000C:97E0
 * @implements B4B5:0454:0010:8687
 * @implements B4B5:0464:000A:B659
 * @implements B4B5:046E:000C:17F9
 * @implements B4B5:047A:000B:186A
 * @implements B4B5:0485:0014:19B1
 * @implements B4B5:0499:0019:B499
 * @implements B4B5:04B2:000A:882F
 * @implements B4B5:04BC:0021:883C
 * @implements B4B5:04DD:0019:97D1
 * @implements B4B5:04F6:000A:882F
 * @implements B4B5:0500:0008:0AE5
 * @implements B4B5:0508:001C:DBB3
 * @implements B4B5:0524:000A:882F
 * @implements B4B5:052E:0019:A2F9
 * @implements B4B5:0547:000A:7577
 * @implements B4B5:0551:0021:D3B7
 * @implements B4B5:0572:0008:3755
 * @implements B4B5:057A:0017:470E
 * @implements B4B5:0591:0005:CFC9
 * @implements B4B5:0596:001F:757D
 * @implements B4B5:05B5:001F:CB42
 * @implements B4B5:05D4:001F:E8C6
 * @implements B4B5:05F3:0020:9640
 * @implements B4B5:0613:0011:7F5A
 * @implements B4B5:0624:000E:6326
 * @implements B4B5:0627:000B:414C
 * @implements B4B5:0632:0012:AEC4
 * @implements B4B5:0638:000C:610D
 * @implements B4B5:0644:000B:6148
 * @implements B4B5:064F:0040:7E01
 * @implements B4B5:068F:0006:77BF
 * @implements B4B5:0695:0014:F457
 * @implements B4B5:06A9:000A:C412
 * @implements B4B5:06B3:000F:80F4
 * @implements B4B5:06C2:002B:D951
 * @implements B4B5:06ED:0013:2B96
 * @implements B4B5:0700:000A:3572
 * @implements B4B5:070A:0014:A580
 * @implements B4B5:071E:000A:7659
 * @implements B4B5:0728:001C:537A
 * @implements B4B5:0744:0006:1788
 * @implements B4B5:0747:0003:9DAA
 * @implements B4B5:074A:000F:A0F4
 * @implements B4B5:0759:002B:D969
 * @implements B4B5:0784:0013:2B96
 * @implements B4B5:0797:000A:3572
 * @implements B4B5:07A1:0014:A580
 * @implements B4B5:07B5:000A:7659
 * @implements B4B5:07BF:000C:177A
 * @implements B4B5:07CB:0008:105D
 * @implements B4B5:07D3:0010:8687
 * @implements B4B5:07E3:000A:882F
 * @implements B4B5:07ED:0015:F37B
 * @implements B4B5:0802:000A:882F
 * @implements B4B5:080C:000D:8573
 * @implements B4B5:0819:0012:21EC
 * @implements B4B5:082B:0054:FF92
 * @implements B4B5:0874:000B:414C
 * @implements B4B5:087F:0012:EF6E
 * @implements B4B5:0885:000C:20A7
 * @implements B4B5:0891:000B:6148
 * @implements B4B5:089C:0040:4310
 * @implements B4B5:08DC:0006:F794
 * @implements B4B5:08E2:000C:1037
 * @implements B4B5:0A2F:000B:714A
 * @implements B4B5:0A3A:0012:0C4A
 * @implements B4B5:0A40:000C:A383
 * @implements B4B5:0A4C:0024:5A64
 * @implements B4B5:0A70:0013:2BE2
 * @implements B4B5:0A83:0013:90D2
 * @implements B4B5:0A96:000B:0225
 * @implements B4B5:0AA1:003E:17EA
 * @implements B4B5:0ADF:0035:0FCE
 * @implements B4B5:0AE8:002C:F21C
 * @implements B4B5:0AF0:0024:1264
 * @implements B4B5:0B14:0013:2BE2
 * @implements B4B5:0B27:0013:91B2
 * @implements B4B5:0B3A:000B:0225
 * @implements B4B5:0B45:000E:A2FD
 * @implements B4B5:0B53:002F:AC2C
 * @implements B4B5:0B72:0010:86F3
 * @implements B4B5:0B82:0035:DFC7
 * @implements B4B5:0B8B:002C:2215
 * @implements B4B5:0B93:0024:C265
 * @implements B4B5:0BB7:0013:2BE2
 * @implements B4B5:0BCA:0013:9072
 * @implements B4B5:0C38:000B:6148
 * @implements B4B5:0C43:001B:A229
 * @implements B4B5:0C5E:003E:84AE
 * @implements B4B5:0C6E:002E:3B47
 * @implements B4B5:0C9C:0006:F7AB
 * @implements B4B5:0CA2:000B:3223
 * @implements B4B5:0CAD:002A:1E0E
 * @implements B4B5:0CD7:0013:2B96
 * @implements B4B5:0CEA:000A:3572
 * @implements B4B5:0CF4:000C:97DE
 * @implements B4B5:0D00:0010:8687
 * @implements B4B5:0D10:000A:B659
 * @implements B4B5:0D1A:000E:D0D2
 * @implements B4B5:0D28:0018:8BBA
 * @implements B4B5:0D40:0014:D927
 * @implements B4B5:0D54:0023:4ECB
 * @implements B4B5:0D77:000A:FBE7
 * @implements B4B5:0D81:000E:548A
 * @implements B4B5:0D8F:002E:8780
 * @implements B4B5:0DBD:000A:882F
 * @implements B4B5:0DC7:0027:5285
 * @implements B4B5:0DEE:0014:EB62
 * @implements B4B5:0E02:003C:C4FF
 * @implements B4B5:0E33:000B:414C
 * @implements B4B5:0E3E:0012:6F7B
 * @implements B4B5:0E44:000C:A0B2
 * @implements B4B5:0E50:000B:6148
 * @implements B4B5:0E5B:003D:8F07
 * @implements B4B5:0E98:0006:373C
 * @implements B4B5:0E9E:0026:D6B3
 * @implements B4B5:0EC4:0013:2B96
 * @implements B4B5:0ED7:000A:3572
 * @implements B4B5:0EE1:000C:1773
 * @implements B4B5:0EED:0010:8687
 * @implements B4B5:0EFD:000A:257A
 * @implements B4B5:0F07:001B:3B64
 * @implements B4B5:0F22:000A:457E
 * @implements B4B5:0F2C:001B:0EE0
 * @implements B4B5:0F47:000A:882F
 * @implements B4B5:0F51:0015:FC7B
 * @implements B4B5:0F66:000A:882F
 * @implements B4B5:0F70:0017:CB04
 * @implements B4B5:0F87:000E:53E0
 * @implements B4B5:0F8A:000B:714A
 * @implements B4B5:0F95:0012:4C52
 * @implements B4B5:0F9B:000C:E39B
 * @implements B4B5:0FA7:000B:6148
 * @implements B4B5:0FB2:003D:8907
 * @implements B4B5:0FEF:0005:B26E
 * @implements B4B5:0FF4:000B:3C53
 * @implements B4B5:0FFF:002F:9FB4
 * @implements B4B5:102E:000E:3FBC
 * @implements B4B5:103C:001B:6488
 * @implements B4B5:104C:000B:714A
 * @implements B4B5:1057:0023:53D1
 * @implements B4B5:105D:001D:B706
 * @implements B4B5:107A:0006:F7CE
 *
 * Called From: 34B5:0020:0005:0000
 */
void f__B4B5_0000_0014_F092()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0xFFFF) goto l__0014;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0011;
l__0011:
	goto l__107A;
l__0014:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38DA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EB2;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x22);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004C); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__004C;
l__004C:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x22);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0059;
l__0059:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0061;
	/* Unresolved jump */ emu_ip = 0x000F; emu_last_cs = 0xB4B5; emu_last_ip = 0x005F; emu_last_length = 0x0008; emu_last_crc = 0xB4CF; emu_call();
l__0061:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x0075); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0075;
l__0075:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x22);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0090;
l__0090:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0xE6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8CFD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__00A4;
l__00A4:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x8CFD) = 0x290;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D01));
	emu_push(emu_ds);
	emu_ax = 0x1EC7;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00C6); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__00C6;
l__00C6:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x8D01) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D03));
	emu_push(emu_ds);
	emu_ax = 0x1ED0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00E5); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__00E5;
l__00E5:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x8D03) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D05));
	emu_push(emu_ds);
	emu_ax = 0x1EDE;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EDA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0104;
l__0104:
	emu_addw(&emu_sp, 0xE);
	emu_cwd();
	emu_get_memory16(emu_ds, 0x00, 0x8D07) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8D05) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EE3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0127); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0127;
l__0127:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x8D0B) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_ds);
	emu_ax = 0x1EEB;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0146); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0146;
l__0146:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x39FC) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x39FE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_ds);
	emu_ax = 0x1EF7;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0168;
l__0168:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x3A00) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A02) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_push(emu_ds);
	emu_ax = 0x1F01;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__018A;
l__018A:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x8D09) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8D0D;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F17;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F0A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01B3); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__01B3;
l__01B3:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8D1B;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F2E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F23;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01D9); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__01D9;
l__01D9:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8D29;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F43;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F37;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FF); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__01FF;
l__01FF:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0207;
l__0207:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D07));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8D05));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0000_001F_3BC3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0214;
l__0214:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__0344;
l__021B:
	emu_ax = emu_si;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37FA);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x37F8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory8(emu_ss, emu_bp, -0xA2) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F56;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F50;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x025C); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__025C;
l__025C:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__026A;
l__026A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F5B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0278); emu_cs = 0x01F7; f__01F7_3A8A_0018_E4EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0278;
l__0278:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax != 0) goto l__028C;
	goto l__0343;
l__028C:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0297); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0297;
l__0297:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02A0;
	goto l__0343;
l__02A0:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02A6); emu_cs = 0x10BE; emu_House_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__02A6;
l__02A6:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F65;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x02C6); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__02C6;
l__02C6:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F6D;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__02E9;
l__02E9:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1C) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x27;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F73;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x030D); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_0000_0018_E5DC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__030D;
l__030D:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x48);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x48) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
		emu_get_memory16(emu_ds, 0x00, 0x3A38) = emu_si;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ds, 0x00, 0x3A3C) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x3A3A) = emu_dx;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ds, 0x00, 0x38B4) = emu_ax;
	}
	goto l__0343;
l__0343:
	emu_incw(&emu_si);
	goto l__0344;
l__0344:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si >= (int16)0x6) goto l__034C;
	goto l__021B;
l__034C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x8) != 0x0) goto l__03A0;
	emu_di = 0x50;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x10BE; emu_House_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	/* Unresolved jump */ emu_ip = 0x0365; emu_last_cs = 0xB4B5; emu_last_ip = 0x0365; emu_last_length = 0x0019; emu_last_crc = 0x3E28; emu_call();
l__03A0:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__03AB;
l__03AB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x1F7B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__03EB;
l__03EB:
	emu_addw(&emu_sp, 0x16);
	goto l__0638;
l__03F1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0400); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0400;
l__0400:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x1F7B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x042B); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__042B;
l__042B:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__043E;
l__043E:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0448); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0448;
l__0448:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__0454;
	goto l__0627;
l__0454:
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0464); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0464;
l__0464:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x3533; overlay(0x3533, 0); f__B533_0000_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__046E;
l__046E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__047A;
	goto l__0627;
l__047A:
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x0FE4; emu_Unit_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0485;
l__0485:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0499;
	goto l__0627;
l__0499:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04B2); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__04B2;
l__04B2:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04BC); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__04BC;
l__04BC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x04DD); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__04DD;
l__04DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04F6); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__04F6;
l__04F6:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0500); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0500;
l__0500:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0508;
l__0508:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0524); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0524;
l__0524:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x052E); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__052E;
l__052E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x64) = emu_al;
	emu_push(emu_ds);
	emu_ax = 0x1F83;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0547;
l__0547:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x1381; f__1381_0005_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0551;
l__0551:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x4F) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x50) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0572); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0572;
l__0572:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x057A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__057A;
l__057A:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0596;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x2);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) <= (int16)0x2) goto l__0596;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FE4; emu_Unit_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0591;
l__0591:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0627;
l__0596:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) != 0) { /* Unresolved jump */ emu_ip = 0x05B8; emu_last_cs = 0xB4B5; emu_last_ip = 0x059F; emu_last_length = 0x001F; emu_last_crc = 0x757D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05B5); emu_cs = 0x176C; f__176C_000E_000E_633D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__05B5;
l__05B5:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x9) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05D4); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__05D4;
l__05D4:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__05F3;
l__05F3:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0613); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0613;
l__0613:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0624); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0624;
l__0624:
	emu_addw(&emu_sp, 0x6);
	goto l__0627;
l__0627:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0632;
l__0632:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	goto l__0638;
l__0638:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0644;
	goto l__03F1;
l__0644:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x064F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__064F;
l__064F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x1F87;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x068F); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__068F;
l__068F:
	emu_addw(&emu_sp, 0x16);
	goto l__0885;
l__0695:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F92;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x01F7; f__01F7_28DC_0009_EE56();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__06A9;
l__06A9:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__06B3;
	goto l__074A;
l__06B3:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06C2); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__06C2;
l__06C2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x1F87;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06ED); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__06ED;
l__06ED:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0700); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0700;
l__0700:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x070A); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__070A;
l__070A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x071E); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__071E;
l__071E:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0728); emu_cs = 0x3530; overlay(0x3530, 0); f__B530_0000_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0728;
l__0728:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0747;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__0747;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0744); emu_cs = 0x0C3A; f__0C3A_0009_0029_BF94();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0744;
l__0744:
	emu_addw(&emu_sp, 0x8);
	goto l__0747;
l__0747:
	goto l__0874;
l__074A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0759); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0759;
l__0759:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x1F87;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0784); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0784;
l__0784:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0797); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0797;
l__0797:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07A1); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__07A1;
l__07A1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x07B5); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__07B5;
l__07B5:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07BF); emu_cs = 0x3530; overlay(0x3530, 0); f__B530_0000_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__07BF;
l__07BF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__07CB;
	goto l__0874;
l__07CB:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__07D3;
	goto l__0874;
l__07D3:
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x07E3); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__07E3;
l__07E3:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__07ED;
l__07ED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0802); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0802;
l__0802:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x080C); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__080C;
l__080C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0819); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1133_0039_A02F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0819;
l__0819:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0874;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x082B); emu_cs = 0x0C3A; f__0C3A_0009_0029_BF94();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__082B;
l__082B:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_dx = 0x60;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2C94;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1A);
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFBFF);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	}
	goto l__0874;
l__0874:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x087F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__087F;
l__087F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	goto l__0885;
l__0885:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0891;
	goto l__0695;
l__0891:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x089C); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__089C;
l__089C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x1EDA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__08DC;
l__08DC:
	emu_addw(&emu_sp, 0x16);
	goto l__0A40;
l__08E2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x43);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x43) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0xB4B5; emu_last_ip = 0x08E9; emu_last_length = 0x000C; emu_last_crc = 0x1037; emu_call(); return; }
	goto l__0A2F;
l__0A2F:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0A3A;
l__0A3A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	goto l__0A40;
l__0A40:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0A4C;
	goto l__08E2;
l__0A4C:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F96;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EDA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A70); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0A70;
l__0A70:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F9C;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A83); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0A83;
l__0A83:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0AF0;
	goto l__0AE8;
l__0A96:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AA1); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0AA1;
l__0AA1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F4);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x323F), 0x8000);
	emu_push(emu_ds);
	emu_ax = 0x1F9C;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0ADF); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0ADF;
l__0ADF:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	goto l__0AE8;
l__0AE8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0A96;
	goto l__0AF0;
l__0AF0:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1F9F;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EDA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B14); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0B14;
l__0B14:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F9C;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B27); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0B27;
l__0B27:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0B93;
	goto l__0B8B;
l__0B3A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0B45); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0B45;
l__0B45:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0B53); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_14CA_0013_F579();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0B53;
l__0B53:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) {
		emu_ax = emu_di;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x1FF);
	}
	goto l__0B72;
l__0B72:
	emu_push(emu_ds);
	emu_ax = 0x1F9C;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0B82); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0B82;
l__0B82:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	goto l__0B8B;
l__0B8B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0B3A;
	goto l__0B93;
l__0B93:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EC0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1FA5;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1EDA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BB7); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0BB7;
l__0BB7:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F9C;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0BCA;
l__0BCA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0C38;
	/* Unresolved jump */ emu_ip = 0x0C30; emu_last_cs = 0xB4B5; emu_last_ip = 0x0BDB; emu_last_length = 0x0013; emu_last_crc = 0x9072; emu_call();
l__0C38:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C43); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0C43;
l__0C43:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__0C6E;
l__0C5E:
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x8D43) = 0xFFFF;
	emu_incw(&emu_si);
	goto l__0C6E;
l__0C6E:
	emu_cmpw(&emu_si, 0x10);
	if ((int16)emu_si < (int16)0x10) goto l__0C5E;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x1FAD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C9C); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0C9C;
l__0C9C:
	emu_addw(&emu_sp, 0x16);
	goto l__0E44;
l__0CA2:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0CAD); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0CAD;
l__0CAD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x1FAD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CD7); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0CD7;
l__0CD7:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CEA); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0CEA;
l__0CEA:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0CF4;
l__0CF4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__0D00;
	goto l__0E33;
l__0D00:
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0D10); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0D10;
l__0D10:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D1A); emu_cs = 0x3533; overlay(0x3533, 0); f__B533_0000_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0D1A;
l__0D1A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0xFFFF) goto l__0D28;
	goto l__0E33;
l__0D28:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D40); emu_cs = 0x1A34; emu_Unit_Create();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0D40;
l__0D40:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0D54;
	goto l__0E33;
l__0D54:
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x8D43) = emu_dx;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0D77); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0D77;
l__0D77:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D81); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0D81;
l__0D81:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1FBC;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D8F); emu_cs = 0x01F7; f__01F7_3A8A_0018_E4EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0D8F;
l__0D8F:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFD0);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_bx, 0x8D45) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0DBD;
l__0DBD:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DC7); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0DC7;
l__0DC7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_bx, 0x8D47) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DEE); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0DEE;
l__0DEE:
	emu_addw(&emu_sp, 0x8);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2B);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2B) goto l__0E02;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x1;
	/* Unresolved jump */ emu_ip = 0x0E07; emu_last_cs = 0xB4B5; emu_last_ip = 0x0E00; emu_last_length = 0x0014; emu_last_crc = 0xEB62; emu_call();
l__0E02:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x8D47);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ds, emu_bx, 0x8D49) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ds, emu_bx, 0x8D4B) = emu_dx;
	goto l__0E33;
l__0E33:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0E3E;
l__0E3E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	goto l__0E44;
l__0E44:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0E50;
	goto l__0CA2;
l__0E50:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E5B); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0E5B;
l__0E5B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x2);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_subw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x1FF9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0E98;
l__0E98:
	emu_addw(&emu_sp, 0x16);
	goto l__0F9B;
l__0E9E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x1FF9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EC4); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0EC4;
l__0EC4:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ED7); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0ED7;
l__0ED7:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE1); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0EE1;
l__0EE1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__0EED;
	goto l__0F8A;
l__0EED:
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0EFD;
l__0EFD:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F07); emu_cs = 0x1381; f__1381_00D0_0008_1ADC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F07;
l__0F07:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0xFFFF) goto l__0F8A;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0F22); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F22;
l__0F22:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F2C); emu_cs = 0x1381; f__1381_0096_0008_1ADC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F2C;
l__0F2C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0xFFFF) goto l__0F8A;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0F47); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F47;
l__0F47:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F51); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F51;
l__0F51:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x1F81;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F66;
l__0F66:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F70); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F70;
l__0F70:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0F87); emu_cs = 0x104B; f__104B_024D_0012_1DC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F87;
l__0F87:
	emu_addw(&emu_sp, 0xA);
	goto l__0F8A;
l__0F8A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F95); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0F95;
l__0F95:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	goto l__0F9B;
l__0F9B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0FA7;
	goto l__0E9E;
l__0FA7:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0FB2); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0FB2;
l__0FB2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x2);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DE);
	emu_subw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x1FFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0FEF;
l__0FEF:
	emu_addw(&emu_sp, 0x16);
	goto l__105D;
l__0FF4:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x3533; overlay(0x3533, 0); f__B533_0000_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__0FFF;
l__0FFF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__104C;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x1FFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x102E); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_03C8_002C_9251();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__102E;
l__102E:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x103C); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__103C;
l__103C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_ds, emu_bx, 0x97E7) = emu_ax;
	goto l__104C;
l__104C:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1057); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	goto l__1057;
l__1057:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	goto l__105D;
l__105D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0FF4;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_get_memory16(emu_ds, 0x00, 0x38AE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38AC) = emu_dx;
	emu_ax = 0x1;
	goto l__0011;
l__107A:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
