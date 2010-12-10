/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B491_0000_0022_DD43()
 *
 * @name f__B491_0000_0022_DD43
 * @implements B491:0000:0022:DD43 ()
 * @implements B491:0022:001F:89CC
 * @implements B491:0041:000A:11D7
 * @implements B491:004B:002D:3CAF
 * @implements B491:0078:000A:F1D1
 * @implements B491:0082:0103:8A92
 * @implements B491:0185:0022:B45D
 * @implements B491:01A7:001B:DDD1
 * @implements B491:01C2:000B:35E2
 * @implements B491:01CD:0013:C78E
 * @implements B491:01E0:0002:C03A
 * @implements B491:01E2:002A:5829
 * @implements B491:01F6:0016:9F67
 * @implements B491:020C:005A:35CB
 * @implements B491:0266:0022:210C
 * @implements B491:026C:001C:2A23
 * @implements B491:0288:001F:1054
 * @implements B491:02B0:0060:81FB
 * @implements B491:0310:001E:706C
 * @implements B491:032E:0002:C03A
 * @implements B491:0330:0019:0AAB
 * @implements B491:0349:0004:569F
 * @implements B491:034D:0019:89F0
 * @implements B491:0366:0039:CD67
 * @implements B491:0368:0037:144B
 * @implements B491:039F:000B:EC55
 * @implements B491:03AA:001E:BA97
 * @implements B491:03B1:0017:8857
 * @implements B491:03C8:0017:3C4E
 * @implements B491:03DF:000B:EC55
 * @implements B491:03EA:000C:7912
 * @implements B491:03F6:00A6:E714
 * @implements B491:0448:0054:ABA5
 * @implements B491:047E:001E:CA58
 * @implements B491:049C:000C:3DC9
 * @implements B491:04A8:0007:2C3D
 * @implements B491:04AF:0008:190A
 * @implements B491:04B7:000F:C361
 * @implements B491:04C6:000E:84A3
 * @implements B491:04C7:000D:85C7
 * @implements B491:04D4:0018:35D7
 * @implements B491:04E9:0003:5D1F
 * @implements B491:04EC:005E:6A50
 * @implements B491:0509:0041:DAB9
 * @implements B491:054A:000D:5F75
 * @implements B491:0557:001C:716B
 * @implements B491:0571:0002:FB3A
 * @implements B491:0573:0018:6844
 * @implements B491:058B:0019:53BA
 * @implements B491:05A2:0002:E2BA
 * @implements B491:05A4:0017:47EB
 * @implements B491:05B9:0002:D73A
 * @implements B491:05BB:0018:6844
 * @implements B491:05D3:0016:5657
 * @implements B491:05E7:0002:C03A
 * @implements B491:05E9:0023:F7BE
 * @implements B491:060C:000B:B381
 * @implements B491:0617:0054:7F11
 * @implements B491:066B:000E:7D4B
 * @implements B491:0679:0028:6D00
 * @implements B491:06A1:002F:58AA
 * @implements B491:06A3:002D:EBCE
 * @implements B491:06D0:000B:35E1
 * @implements B491:06DB:0022:E4A2
 * @implements B491:06DC:0021:A4B4
 * @implements B491:06F2:000B:7B2F
 * @implements B491:06FD:0009:A037
 * @implements B491:0706:0019:0CED
 * @implements B491:071F:0017:E28B
 * @implements B491:0736:002E:BCA5
 * @implements B491:0764:0061:E5C3
 * @implements B491:0767:005E:B087
 * @implements B491:07B3:0012:13FD
 * @implements B491:07C0:0005:20AE
 * @implements B491:07C5:0007:5398
 * @implements B491:07CC:0011:193C
 * @implements B491:07DD:000B:F574
 * @implements B491:07E8:0009:9926
 * @implements B491:07F1:0009:9126
 * @implements B491:07FA:0013:CE1B
 *
 * Called From: B491:0A0A:001C:C33B
 * Called From: B491:0A0A:001D:0B39
 */
void f__B491_0000_0022_DD43()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x19C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0022); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0022:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x0041); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0041:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004B); emu_cs = 0x260F; emu_Sprite_GetWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__004B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_dx, emu_cl);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x0078); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0078:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0082); emu_cs = 0x260F; emu_Sprite_GetHeight();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0082:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_sarw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_di);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0x0;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_di);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_di);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0x0;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_di);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_di);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0x0;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_ax, emu_ax);
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
	emu_push(emu_cs); emu_push(0x0185); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0185:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
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
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__01A7:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x1830));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x182E));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_cs); emu_push(0x01C2); emu_cs = 0x1DD2; f__1DD2_0008_004C_D4CF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__01C2:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01CD); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__01CD:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76A8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_push(emu_cs); emu_push(0x01E0); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__01E0:
	goto l__01E2;
l__01E2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AA));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x76AA)) goto l__01E2;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76A8));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76A8)) goto l__01E2;
	}
l__01F6:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76A8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__047E;
l__020C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__0266;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x1A7);
	emu_addw(&emu_dx, 0x2);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x1A7);
	emu_addw(&emu_dx, 0x9);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x1A7);
	emu_addw(&emu_dx, 0x9);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_cl = 0x3;
	emu_sarw(&emu_ax, emu_cl);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx);
	goto l__026C;
l__0266:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
l__026C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_push(emu_ds);
	emu_ax = 0x183C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x01F7; f__01F7_39F5_0008_F939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0288:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__02B0;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x01F7; emu_String_strchr();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
	/* Unresolved jump */ emu_ip = 0x02A7; emu_last_cs = 0xB491; emu_last_ip = 0x02A7; emu_last_length = 0x001F; emu_last_crc = 0x1054; emu_call();
l__02B0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x194);
	emu_addw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ss, emu_bx, 0x0) = emu_dl;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x194);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_ss, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x02E9; emu_last_cs = 0xB491; emu_last_ip = 0x02E4; emu_last_length = 0x0060; emu_last_crc = 0x81FB; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x192);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ss, emu_bx, 0x0) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0310;
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__0310;
	goto l__032E;
l__0310:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x192);
	emu_addw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ss, emu_bx, 0x0) = emu_dl;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	goto l__0330;
l__032E:
	goto l__0330;
l__0330:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x1) goto l__034D;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A2E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A2C));
	emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x2605; emu_Font_Select();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0349:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0368;
l__034D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2) goto l__0368;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A30));
	emu_push(emu_cs); emu_push(0x0366); emu_cs = 0x2605; emu_Font_Select();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0366:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0368:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x193);
	emu_addw(&emu_ax, emu_dx);
	emu_dl = emu_get_memory8(emu_ds, 0x00, 0x6C71);
	emu_bx = emu_ax;
	emu_get_memory8(emu_ss, emu_bx, 0x0) = emu_dl;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x192);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__039F;
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__03C8;
	goto l__03DF;
l__039F:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x03AA); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__03AA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x9D;
	emu_subw(&emu_dx, emu_ax);
l__03B1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_bx = 0xB;
	emu_push(emu_dx);
	emu_imuluw(&emu_ax, emu_bx);
	emu_movw(&emu_dx, emu_bp - 0x19C);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	goto l__03F6;
l__03C8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x19C);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ss, emu_bx, 0x0) = 0xA1;
	goto l__03F6;
l__03DF:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x03EA); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__03EA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x140;
	emu_subw(&emu_dx, emu_ax);
	emu_shrw(&emu_dx, 0x1);
	emu_incw(&emu_dx);
	goto l__03B1;
l__03F6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x1A7);
	emu_addw(&emu_dx, 0x8);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bx, 0x0), 0x5);
	if (emu_get_memory8(emu_ss, emu_bx, 0x0) == 0x5) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_dx = 0xB;
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_dx, emu_bp - 0x1A7);
		emu_addw(&emu_dx, 0x9);
		emu_addw(&emu_ax, emu_dx);
		emu_bx = emu_ax;
		emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
		emu_ax = (int8)emu_al;
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_dx = 0xB;
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_dx, emu_bp - 0x1A7);
		emu_addw(&emu_dx, 0x9);
		emu_addw(&emu_ax, emu_dx);
		emu_bx = emu_ax;
		emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
		emu_ax = (int8)emu_al;
		emu_cl = 0x3;
		emu_sarw(&emu_ax, emu_cl);
		emu_pop(&emu_dx);
		emu_addw(&emu_dx, emu_ax);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx);
	}
l__0448:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x19A);
	emu_addw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_bx = emu_ax;
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x198);
	emu_addw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_si = emu_ax;
	emu_get_memory16(emu_ss, emu_si, 0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_si, 0x0) = emu_bx;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__047E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_bx = 0x6;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_addw(&emu_ax, 0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__049C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__049C;
	goto l__020C;
l__049C:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x1836);
	emu_cmpw(&emu_bx, 0x5);
	if (emu_bx <= 0x5) goto l__04A8;
	goto l__05E9;
l__04A8:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x80D);
	switch (emu_ip) {
		case 0x04AF: goto l__04AF;
		case 0x04D4: goto l__04D4;
		case 0x04EC: goto l__04EC;
		case 0x0573: goto l__0573;
		case 0x05A4: goto l__05A4;
		case 0x05BB: goto l__05BB;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB491; emu_last_ip = 0x04AA; emu_last_length = 0x0007; emu_last_crc = 0x2C3D;
			emu_call();
			return;
	}
l__04AF:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x04B7); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__04B7:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0x0) goto l__04C7;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x04C6); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__04C6:
	emu_pop(&emu_cx);
l__04C7:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x1836));
	emu_get_memory16(emu_ds, 0x00, 0x1838) = 0x2;
	goto l__05E9;
l__04D4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1838);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x1838));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ds, 0x00, 0x1838) = 0x0;
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x1836));
	}
l__04E9:
	goto l__05E9;
l__04EC:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x442));
	if (emu_ax == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	}
l__0509:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2E);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x30);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__054A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0557); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0557:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x1838) = 0x8;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x1836));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_incw(&emu_di);
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0x6);
	if ((int16)emu_ax >= (int16)0x6) {
		emu_xorw(&emu_di, emu_di);
	}
l__0571:
	goto l__05E9;
l__0573:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1838);
	emu_dx = 0x300;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x058B); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__058B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1838);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x1838));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x1836));
		emu_get_memory16(emu_ds, 0x00, 0x1838) = 0x14;
	}
l__05A2:
	goto l__05E9;
l__05A4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1838);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x1838));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ds, 0x00, 0x1838) = 0x0;
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x1836));
	}
l__05B9:
	goto l__05E9;
l__05BB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1838);
	emu_dx = 0x300;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x05D3); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__05D3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1838);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x1838));
	emu_cmpw(&emu_ax, 0x8);
	if ((int16)emu_ax >= (int16)0x8) {
		emu_get_memory16(emu_ds, 0x00, 0x1836) = 0x0;
	}
l__05E7:
	goto l__05E9;
l__05E9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x060C); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__060C:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__06F2;
l__0617:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x198);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x19C);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x19A);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_si = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x9931));
	if ((int16)emu_si >= (int16)emu_get_memory16(emu_ds, 0x00, 0x9931)) goto l__06DC;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x066B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__066B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A30));
	emu_push(emu_cs); emu_push(0x0679); emu_cs = 0x2605; emu_Font_Select();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0679:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x193);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	if (emu_al == emu_get_memory8(emu_ds, 0x00, 0x6C71)) goto l__06A3;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A2E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A2C));
	emu_push(emu_cs); emu_push(0x06A1); emu_cs = 0x2605; emu_Font_Select();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__06A1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__06A3:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x198);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x06D0); emu_cs = 0x2BC2; emu_GUI_DrawText();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__06D0:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06DB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__06DB:
	emu_pop(&emu_cx);
l__06DC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_bp - 0x19A);
	emu_addw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_decw(&emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__06F2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__06FD;
	goto l__0617;
l__06FD:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0706); emu_cs = 0x2BEE; emu_Video_WaitForNextVSync();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0706:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x1830));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x182E));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x1DD2; f__1DD2_0008_004C_D4CF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__071F:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x19A), 0xFFF6);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x19A) >= (int16)0xFFF6) goto l__0767;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x196));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x198));
	emu_push(emu_cs); emu_push(0x0736); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0736:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x198), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x198));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x194);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x191);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x19C);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0764); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0764:
	emu_addw(&emu_sp, 0xA);
l__0767:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_bx = 0x6;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_addw(&emu_ax, 0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x8)) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_dx = 0xB;
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_bx, emu_bp - 0x1A7);
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_ss, emu_bx, 0x9);
		emu_ax = (int8)emu_al;
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_dx = 0xB;
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_bx, emu_bp - 0x1A7);
		emu_addw(&emu_bx, emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x2);
		emu_pop(&emu_dx);
		emu_addw(&emu_ax, emu_dx);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992B);
		emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x9931));
		emu_cmpw(&emu_ax, emu_dx);
		if (emu_ax < emu_dx) {
			emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
		}
	}
l__07B3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x1836), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x1836) == 0x0) goto l__07CC;
	}
l__07C0:
	emu_push(emu_cs); emu_push(0x07C5); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__07C5:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__07CC;
	goto l__01E0;
l__07CC:
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x07DD); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__07DD:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07E8); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__07E8:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x07F1); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__07F1:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x07FA); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__07FA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x1838) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x1836) = 0x0;
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
 * Decompiled function f__B491_0819_000C_0B7D()
 *
 * @name f__B491_0819_000C_0B7D
 * @implements B491:0819:000C:0B7D ()
 * @implements B491:0825:0009:D326
 * @implements B491:082E:001F:19D1
 * @implements B491:084D:000B:F570
 * @implements B491:0858:0025:F411
 * @implements B491:087D:0014:0DD8
 * @implements B491:0891:000B:AD60
 * @implements B491:089C:0006:9C26
 * @implements B491:08A2:0009:EFAF
 * @implements B491:08AB:000A:D546
 * @implements B491:08B5:000E:6239
 * @implements B491:08C3:006D:3899
 * @implements B491:0908:0028:416C
 * @implements B491:090B:0025:46E3
 * @implements B491:0930:002A:3680
 * @implements B491:095A:002E:2737
 * @implements B491:0988:0008:7B24
 * @implements B491:0990:0005:6168
 * @implements B491:0995:000A:9698
 * @implements B491:099F:0018:910F
 * @implements B491:09B7:001C:C3B8
 * @implements B491:09B9:001A:E623
 * @implements B491:09D3:0009:CFD6
 * @implements B491:09DC:000B:6022
 * @implements B491:09E7:0009:EFAF
 * @implements B491:09F0:001D:0B39
 * @implements B491:09F1:001C:C33B
 * @implements B491:0A0D:0008:9226
 * @implements B491:0A15:0015:1784
 * @implements B491:0A2A:0008:6188
 * @implements B491:0A32:000A:5BEF
 * @implements B491:0A3C:0005:8BCF
 *
 * Called From: 3491:0020:0005:0000
 */
void f__B491_0819_000C_0B7D()
{
l__0819:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0825); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0825:
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x082E); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__082E:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x183F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x084D); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_File_ReadChunkOrLengthFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__084D:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0858); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0858:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x087D); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__087D:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0891); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0891:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x089C); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__089C:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x08A2); f__B491_0C3E_0008_F6B9();
l__08A2:
	emu_ax = 0x21;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08AB); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__08AB:
	emu_pop(&emu_cx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08B5); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__08B5:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__090B;
l__08C3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
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
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
			emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
			emu_al = emu_get_memory8(emu_ds, 0x00, 0x3A38);
			emu_cl = 0x4;
			emu_shlb(&emu_al, emu_cl);
			emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
			emu_addb(&emu_al, 0x90);
			emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
		}
	}
l__0908:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__090B:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x100) goto l__08C3;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x184B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_File_ReadChunkOrLengthFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0930:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__095A:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0988); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0988:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs);
	emu_push(0x0990); f__B491_0A41_0011_85AD();
l__0990:
	emu_push(emu_cs); emu_push(0x0995); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0995:
	emu_push(emu_ds);
	emu_ax = 0x1857;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x099F); emu_cs = 0x259E; f__259E_0021_001A_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__099F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0xFFFF;
	emu_si = 0x1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x09B7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__09B7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__09B9:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CF1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CEF));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x1834));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x1832));
	emu_push(emu_ds);
	emu_ax = 0x1863;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09D3); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__09D3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09DC); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__09DC:
	emu_addw(&emu_sp, 0xC);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__09E7;
	emu_xorw(&emu_si, emu_si);
	goto l__09F1;
l__09E7:
	emu_ax = 0x21;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09F0); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__09F0:
	emu_pop(&emu_cx);
l__09F1:
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x1834));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x1832));
	emu_push(emu_cs);
	emu_push(0x0A0D); f__B491_0000_0022_DD43();
l__0A0D:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0A15); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A15:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__09B9;
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x0A2A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A2A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0A32); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A32:
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x0A3C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB491; emu_last_ip = 0x0A37; emu_last_length = 0x000A; emu_last_crc = 0x5BEF;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A3C:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B491_0A41_0011_85AD()
 *
 * @name f__B491_0A41_0011_85AD
 * @implements B491:0A41:0011:85AD ()
 * @implements B491:0A52:0018:9AB5
 * @implements B491:0A6A:0033:8240
 * @implements B491:0A9D:0019:12A9
 * @implements B491:0AB6:002E:618F
 * @implements B491:0AE4:0015:B811
 * @implements B491:0AF9:0011:6076
 * @implements B491:0B0A:0073:EF8A
 * @implements B491:0B33:004A:A79F
 * @implements B491:0B58:0025:F73C
 * @implements B491:0B7D:000C:4F2E
 * @implements B491:0B89:0017:8405
 * @implements B491:0BA0:0010:CA55
 * @implements B491:0BB0:001A:A0AD
 * @implements B491:0BCA:000E:3BA8
 * @implements B491:0BD8:001A:8A48
 * @implements B491:0BE4:000E:A2A5
 * @implements B491:0BF2:0028:83F4
 * @implements B491:0C1A:0010:EA52
 * @implements B491:0C22:0008:7FB9
 * @implements B491:0C2A:0014:5036
 *
 * Called From: B491:098D:0008:7B24
 */
void f__B491_0A41_0011_85AD()
{
l__0A41:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A52); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A52:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x1830) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x182E) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_xorw(&emu_cx, emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x140;
	emu_push(emu_cs); emu_push(0x0A6A); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A6A:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x1830);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x182E);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory16(emu_ds, 0x00, 0x1834) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x1832) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CF1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CEF);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A9D); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0A9D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3C48) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C46) = emu_ax;
	emu_ax = 0x4E20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C48));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C46));
	emu_push(emu_cs); emu_push(0x0AB6); emu_cs = 0x2903; emu_Unknown_2903_090A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0AB6:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C48);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C46);
	emu_addw(&emu_dx, 0x4E20);
	emu_get_memory16(emu_ds, 0x00, 0x3C34) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3C32) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_ax = 0x186B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE4); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0AE4:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_si = 0x9;
	goto l__0B58;
l__0AF9:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_xorw(&emu_di, emu_di);
	goto l__0B33;
l__0B0A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_imuluw(&emu_ax, emu_si);
	emu_bx = 0x9;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x16);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_di);
l__0B33:
	emu_cmpw(&emu_di, 0x2FD);
	if ((int16)emu_di < (int16)0x2FD) goto l__0B0A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x3F;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x3F;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x3F;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_decw(&emu_si);
l__0B58:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0AF9;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3C38) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3C36) = emu_dx;
	emu_ax = 0x300;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x0B7D); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0B7D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B89); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0B89:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2DCE;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x440;
	emu_si = 0x1;
	goto l__0C22;
l__0BA0:
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x1873;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BB0); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0BB0:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xFA00;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0BCA:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_cs); emu_push(0x0BD8); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0BD8:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp, -0x12)) { /* Unresolved jump */ emu_ip = 0x0C21; emu_last_cs = 0xB491; emu_last_ip = 0x0BDB; emu_last_length = 0x001A; emu_last_crc = 0x8A48; emu_call(); return; }
	if ((int16)emu_dx <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x12)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x14)) { /* Unresolved jump */ emu_ip = 0x0C21; emu_last_cs = 0xB491; emu_last_ip = 0x0BE2; emu_last_length = 0x001A; emu_last_crc = 0x8A48; emu_call(); return; }
	}
l__0BE4:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x0BF2); emu_cs = 0x23E1; emu_Tools_Malloc();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0BF2:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0C1A); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0C1A:
	emu_addw(&emu_sp, 0xC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
	emu_incw(&emu_si);
l__0C22:
	emu_cmpw(&emu_si, 0xB);
	if ((int16)emu_si > (int16)0xB) goto l__0C2A;
	goto l__0BA0;
l__0C2A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
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
 * Decompiled function f__B491_0C3E_0008_F6B9()
 *
 * @name f__B491_0C3E_0008_F6B9
 * @implements B491:0C3E:0008:F6B9 ()
 * @implements B491:0C46:002A:6159
 * @implements B491:0C70:001C:05DA
 * @implements B491:0C72:001A:2041
 * @implements B491:0C8C:0014:7858
 * @implements B491:0CA0:0014:0157
 * @implements B491:0CB4:0014:1653
 * @implements B491:0CC8:0014:6E67
 * @implements B491:0CDC:0014:6C6B
 * @implements B491:0CF0:0014:F56C
 * @implements B491:0D04:0014:CB73
 * @implements B491:0D18:0014:EA7A
 * @implements B491:0D2C:000D:B58B
 * @implements B491:0D39:000C:7254
 * @implements B491:0D45:0006:EFF6
 *
 * Called From: B491:089F:0006:9C26
 */
void f__B491_0C3E_0008_F6B9()
{
l__0C3E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	goto l__0C72;
l__0C46:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C28);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C26);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3C28) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3C26) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C70); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0C70:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0C72:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C26);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C28));
	if (emu_ax != 0) goto l__0C46;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_ax = 0x61;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C8C); f__B491_0D4B_000D_85F6();
l__0C8C:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_ax = 0x62;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CA0); f__B491_0D4B_000D_85F6();
l__0CA0:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CB4); f__B491_0D4B_000D_85F6();
l__0CB4:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_ax = 0x64;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CC8); f__B491_0D4B_000D_85F6();
l__0CC8:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38C8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38C6));
	emu_ax = 0x65;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CDC); f__B491_0D4B_000D_85F6();
l__0CDC:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C48));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C46));
	emu_ax = 0x66;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CF0); f__B491_0D4B_000D_85F6();
l__0CF0:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x67;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D04); f__B491_0D4B_000D_85F6();
l__0D04:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D18); f__B491_0D4B_000D_85F6();
l__0D18:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CA));
	emu_ax = 0x69;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D2C); f__B491_0D4B_000D_85F6();
l__0D2C:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x3918;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D39); emu_cs = 0x15C2; emu_Script_ClearInfo();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0D39:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x392E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D45); emu_cs = 0x15C2; emu_Script_ClearInfo();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0D45:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B491_0D4B_000D_85F6()
 *
 * @name f__B491_0D4B_000D_85F6
 * @implements B491:0D4B:000D:85F6 ()
 * @implements B491:0D58:000B:5732
 * @implements B491:0D63:0004:5B1F
 * @implements B491:0D67:0002:2597
 *
 * Called From: B491:0C89:001C:05DA
 * Called From: B491:0C9D:0014:7858
 * Called From: B491:0CB1:0014:0157
 * Called From: B491:0CC5:0014:1653
 * Called From: B491:0CD9:0014:6E67
 * Called From: B491:0CED:0014:6C6B
 * Called From: B491:0D01:0014:F56C
 * Called From: B491:0D15:0014:CB73
 * Called From: B491:0D29:0014:EA7A
 */
void f__B491_0D4B_000D_85F6()
{
l__0D4B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax != 0) goto l__0D58;
	goto l__0D67;
l__0D58:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0D63); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3491) { overlay(0x3491, 1); }
l__0D63:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0D67;
l__0D67:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
