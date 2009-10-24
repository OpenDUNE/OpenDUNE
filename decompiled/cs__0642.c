/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GameLoop_Main()
 *
 * @name emu_GameLoop_Main
 * @implements 0642:000C:001A:AF29 ()
 * @implements 0642:0026:0015:FB5A
 * @implements 0642:003B:002F:E02F
 * @implements 0642:0083:0015:F8DA
 * @implements 0642:0098:002F:D02F
 * @implements 0642:00E0:000A:A0DD
 * @implements 0642:00EA:000A:99DA
 * @implements 0642:00F4:000D:15EE
 * @implements 0642:0101:000C:BC6B
 * @implements 0642:010D:0006:E56C
 * @implements 0642:0113:000C:CF74
 * @implements 0642:011F:000B:70BA
 * @implements 0642:012A:0011:F8BB
 * @implements 0642:012B:0010:D43B
 * @implements 0642:013B:000C:B04E
 * @implements 0642:0147:0008:2A18
 * @implements 0642:014F:0009:07B9
 * @implements 0642:0158:0006:EAFC
 * @implements 0642:015E:0009:B0F3
 * @implements 0642:0167:000A:D6BC
 * @implements 0642:0171:0006:E56C
 * @implements 0642:0177:0030:A2C8
 * @implements 0642:0195:0012:6F93
 * @implements 0642:01A7:0006:9C2A
 * @implements 0642:01A8:0005:F82B
 * @implements 0642:01AD:000F:C47F
 * @implements 0642:01BC:000E:F44C
 * @implements 0642:01CA:0011:EBF0
 * @implements 0642:01DB:000D:A777
 * @implements 0642:01E8:000B:70BA
 * @implements 0642:01F3:0028:7517
 * @implements 0642:0209:0012:4ECE
 * @implements 0642:021B:000A:0B5A
 * @implements 0642:0225:0011:537A
 * @implements 0642:022C:000A:93B9
 * @implements 0642:0236:000A:17BC
 * @implements 0642:0240:0005:7A4B
 * @implements 0642:0245:0007:AEBB
 * @implements 0642:024C:0005:2EF2
 * @implements 0642:0251:0007:AEBE
 * @implements 0642:0258:0010:94D1
 * @implements 0642:0268:000A:7582
 * @implements 0642:0272:0013:DFDC
 * @implements 0642:0285:000B:69BA
 * @implements 0642:0290:001E:E9C7
 * @implements 0642:02AE:0027:9BAA
 * @implements 0642:02D0:0005:6B6D
 * @implements 0642:02D5:0010:86AA
 * @implements 0642:02E5:000B:70BA
 * @implements 0642:02F0:001E:0018
 * @implements 0642:0306:0008:64F7
 * @implements 0642:030E:000E:8DCF
 * @implements 0642:031C:0012:D4EA
 * @implements 0642:032E:0007:2A20
 * @implements 0642:0335:002B:2F1D
 * @implements 0642:0353:000D:A6BA
 * @implements 0642:0360:002F:5F80
 * @implements 0642:0377:0018:8AC7
 * @implements 0642:038F:0009:3ADE
 * @implements 0642:0398:000D:7292
 * @implements 0642:039D:0008:DF89
 * @implements 0642:03A5:0009:BE77
 * @implements 0642:03AE:000D:DD0B
 * @implements 0642:03BB:0007:BB52
 * @implements 0642:03C2:0005:BF6B
 * @implements 0642:03C7:0005:F04C
 * @implements 0642:03CC:0005:ED74
 * @implements 0642:03D1:0008:75E4
 * @implements 0642:03D9:0003:CA1A
 * @implements 0642:03DC:0002:C03A
 * @implements 0642:03DE:000E:F2B7
 * @implements 0642:03EC:0016:21F1
 * @implements 0642:0402:000D:9F2A
 * @implements 0642:0405:000A:88A8
 * @implements 0642:040F:0005:6168
 * @implements 0642:0414:0014:A716
 * @implements 0642:042B:0005:6168
 * @implements 0642:0430:0008:F5FA
 * @implements 0642:0438:000A:426B
 * @implements 0642:0442:000B:7BE4
 * @implements 0642:044D:0024:22E8
 * @implements 0642:0471:0008:4947
 *
 * Called From: B480:02CF:0032:E148
 */
void emu_GameLoop_Main()
{
l__000C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x98E9);
	emu_ah = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x37B6) = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si > (int16)0x1) goto l__0026;
	goto l__00E0;
l__0026:
	emu_push(emu_ds);
	emu_ax = 0x31EC;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x01F7; emu_String_strcasecmp();
	goto l__003B;
l__003B:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0083;
	emu_get_memory16(emu_ds, 0x00, 0x37B6) = 0x1;
	emu_decw(&emu_si);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Unresolved jump */ emu_ip = 0x006A; emu_last_cs = 0x0642; emu_last_ip = 0x006A; emu_last_length = 0x002F; emu_last_crc = 0xE02F; emu_call();
l__0083:
	emu_push(emu_ds);
	emu_ax = 0x31F0;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x01F7; emu_String_strcasecmp();
	goto l__0098;
l__0098:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00E0;
	emu_get_memory16(emu_ds, 0x00, 0x37B6) = 0x2;
	emu_decw(&emu_si);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00C7); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Unresolved jump */ emu_ip = 0x00C7; emu_last_cs = 0x0642; emu_last_ip = 0x00C7; emu_last_length = 0x002F; emu_last_crc = 0xD02F; emu_call();
l__00E0:
	emu_push(emu_ds);
	emu_ax = 0x31F4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00EA); emu_cs = 0x0FCB; f__0FCB_000D_0019_5047();
	goto l__00EA;
l__00EA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00F4); f__0642_0AD2_002A_8B98();
	goto l__00F4;
l__00F4:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0101); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Gameloop_IntroMenu();
	goto l__0101;
l__0101:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37AA));
	emu_push(emu_cs); emu_push(0x010D); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0000_0013_DC68();
	goto l__010D;
l__010D:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	goto l__0113;
l__0113:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__011F;
l__011F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	goto l__012A;
l__012A:
	emu_pop(&emu_cx);
	goto l__012B;
l__012B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BE) != 0x2) goto l__0195;
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x013B); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	goto l__013B;
l__013B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A38) = 0x5;
	emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0FB0_0028_02A0();
	goto l__0147;
l__0147:
	emu_get_memory16(emu_ds, 0x00, 0x3A38) = emu_ax;
	emu_push(emu_cs); emu_push(0x014F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	goto l__014F;
l__014F:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0158); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	goto l__0158;
l__0158:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x015E); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	goto l__015E;
l__015E:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	goto l__0167;
l__0167:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	goto l__0171;
l__0171:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	goto l__0177;
l__0177:
	emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x38B0) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x38B2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x2AF6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x2AF4) = 0x0;
	goto l__0195;
l__0195:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0E));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A0E)) goto l__01A8;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A10));
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	goto l__01A7;
l__01A7:
	emu_pop(&emu_cx);
	goto l__01A8;
l__01A8:
	emu_push(emu_cs);
	emu_push(0x01AD); f__0642_0559_0027_3560();
	goto l__01AD;
l__01AD:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BE) != 0x1) goto l__0209;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	goto l__01BC;
l__01BC:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x01CA); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0000_000E_B463();
	goto l__01CA;
l__01CA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38BE) = 0x0;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	goto l__01DB;
l__01DB:
	emu_pop(&emu_cx);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01E8); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__01E8;
l__01E8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	goto l__01F3;
l__01F3:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31BE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31BC) = emu_dx;
	goto l__0209;
l__0209:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31C0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38EC));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x38EC)) goto l__022C;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x021B); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	goto l__021B;
l__021B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_cs); emu_push(0x0225); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	goto l__0225;
l__0225:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38EC);
	emu_get_memory16(emu_ds, 0x00, 0x31C0) = emu_ax;
	goto l__022C;
l__022C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x4);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8D) != 0x4) goto l__0236;
	goto l__0306;
l__0236:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x5);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8D) != 0x5) goto l__0240;
	goto l__0306;
l__0240:
	emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	goto l__0245;
l__0245:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__024C;
	goto l__0306;
l__024C:
	emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0470_000E_519D();
	goto l__0251;
l__0251:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0258;
	goto l__0306;
l__0258:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x700C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x700C) != 0x0) goto l__0272;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	goto l__0268;
l__0268:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x0;
	goto l__0306;
l__0272:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x3E52) <= (int16)0x0) goto l__02AE;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0285); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__0285;
l__0285:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x11);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	goto l__0290;
l__0290:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31BE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31BC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0xFFFF;
	goto l__0306;
l__02AE:
	emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8D) == 0x0) goto l__0306;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31BE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x31BE)) goto l__0306;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x31BE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x31BC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x31BC)) goto l__0306;
	}
	goto l__02D0;
l__02D0:
	emu_push(emu_cs); emu_push(0x02D5); emu_cs = 0x1DD7; f__1DD7_088A_0026_5144();
	goto l__02D5;
l__02D5:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0306;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__02E5;
l__02E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F0); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	goto l__02F0;
l__02F0:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31BE) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31BC) = emu_dx;
	goto l__0306;
l__0306:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	goto l__030E;
l__030E:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0039_000B_EC51();
	goto l__031C;
l__031C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3A0E);
	emu_decw(&emu_bx);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx <= 0x3) goto l__032E;
	goto l__03DC;
l__032E:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x479);
	switch (emu_ip) {
		case 0x0335: goto l__0335;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x0330; emu_last_length = 0x0007; emu_last_crc = 0x2A20;
			emu_call();
			return;
	}
l__0335:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__039D;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31C4);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31C2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0377;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0377;
	}
	goto l__0353;
l__0353:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
	goto l__0360;
l__0360:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x12C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31C4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31C2) = emu_dx;
	goto l__0377;
l__0377:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) == 0x1) goto l__039D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x0F3F; emu_Tile_Center();
	goto l__038F;
l__038F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0398); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0398;
l__0398:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A02) = emu_ax;
	goto l__039D;
l__039D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	goto l__03A5;
l__03A5:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x03AE); emu_InGame_Numpad_Move();
	goto l__03AE;
l__03AE:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x03BB); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
	goto l__03BB;
l__03BB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x03C2); emu_cs = 0x16C5; f__16C5_0009_0023_21B3();
	goto l__03C2;
l__03C2:
	emu_push(emu_cs); emu_push(0x03C7); emu_cs = 0x176C; f__176C_010B_002F_7FAE();
	goto l__03C7;
l__03C7:
	emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x0972; f__0972_0007_0051_7645();
	goto l__03CC;
l__03CC:
	emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x1391; f__1391_000A_0035_2CB6();
	goto l__03D1;
l__03D1:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03D9); emu_cs = 0x07D4; f__07D4_0000_0027_FA61();
	goto l__03D9;
l__03D9:
	emu_pop(&emu_cx);
	goto l__03DE;
l__03DC:
	goto l__03DE;
l__03DE:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__03EC;
l__03EC:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38F8) == 0x0) goto l__0405;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) goto l__0405;
	emu_push(emu_cs); emu_push(0x0402); emu_cs = 0x1423; f__1423_02A5_002A_29F1();
	goto l__0402;
l__0402:
	emu_get_memory16(emu_ds, 0x00, 0x38F8) = emu_ax;
	goto l__0405;
l__0405:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38F8) == 0x0) goto l__040F;
	goto l__012B;
l__040F:
	emu_push(emu_cs); emu_push(0x0414); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	goto l__0414;
l__0414:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379A) == 0x0) goto l__042B;
	emu_push(emu_ds);
	emu_ax = 0x31F9;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x257A; emu_ip = 0x000D; emu_last_cs = 0x0642; emu_last_ip = 0x0423; emu_last_length = 0x0014; emu_last_crc = 0xA716; emu_call();
	/* Unresolved jump */ emu_ip = 0x0428; emu_last_cs = 0x0642; emu_last_ip = 0x0428; emu_last_length = 0x0014; emu_last_crc = 0xA716; emu_call();
l__042B:
	emu_push(emu_cs); emu_push(0x0430); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	goto l__0430;
l__0430:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	goto l__0438;
l__0438:
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	goto l__0442;
l__0442:
	emu_pop(&emu_cx);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x044D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x0448; emu_last_length = 0x000B; emu_last_crc = 0x7BE4;
			emu_call();
			return;
	}
	goto l__044D;
l__044D:
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
	emu_push(emu_cs); emu_push(0x0471); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	goto l__0471;
l__0471:
	emu_addw(&emu_sp, 0x10);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_InGame_Numpad_Move()
 *
 * @name emu_InGame_Numpad_Move
 * @implements 0642:0481:0010:36A4 ()
 * @implements 0642:0491:0018:2263
 * @implements 0642:049A:000F:4EEF
 * @implements 0642:04A9:0004:25FB
 * @implements 0642:04AD:0009:B95F
 * @implements 0642:04B6:0003:D29A
 * @implements 0642:04BD:0005:B5FA
 * @implements 0642:04C2:0005:E87A
 * @implements 0642:04C7:0004:E3B9
 * @implements 0642:04CB:0005:8CFA
 * @implements 0642:04D0:0005:B37A
 * @implements 0642:04D5:0005:91FA
 * @implements 0642:04DA:0005:D47A
 * @implements 0642:04DF:0009:1090
 * @implements 0642:04E2:0006:13CC
 * @implements 0642:04E8:0002:A63A
 * @implements 0642:04EA:0002:C03A
 * @implements 0642:04EC:0005:8BCF
 *
 * Called From: 0642:03AB:0009:BE77
 */
void emu_InGame_Numpad_Move()
{
l__0481:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0491;
	goto l__04EC;
l__0491:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
	emu_cx = 0x1A;
	emu_bx = 0x4F1;
	goto l__049A;
l__049A:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__04A9;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__049A;
	goto l__04EA;
l__04A9:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x34);
	switch (emu_ip) {
		case 0x04AD: goto l__04AD;
		case 0x04BD: goto l__04BD;
		case 0x04C2: goto l__04C2;
		case 0x04C7: goto l__04C7;
		case 0x04CB: goto l__04CB;
		case 0x04D0: goto l__04D0;
		case 0x04D5: goto l__04D5;
		case 0x04DA: goto l__04DA;
		case 0x04DF: goto l__04DF;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x04A9; emu_last_length = 0x0004; emu_last_crc = 0x25FB;
			emu_call();
			return;
	}
l__04AD:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04B6); f__0642_07BE_0058_A125();
	goto l__04B6;
l__04B6:
	emu_pop(&emu_cx);
	goto l__04EC;
l__04BD:
	emu_ax = 0x6;
	goto l__04E2;
l__04C2:
	emu_ax = 0x2;
	goto l__04E2;
l__04C7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__04E2;
l__04CB:
	emu_ax = 0x4;
	goto l__04E2;
l__04D0:
	emu_ax = 0x7;
	goto l__04E2;
l__04D5:
	emu_ax = 0x5;
	goto l__04E2;
l__04DA:
	emu_ax = 0x1;
	goto l__04E2;
l__04DF:
	emu_ax = 0x3;
	goto l__04E2;
l__04E2:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04E8); emu_cs = 0x0F78; f__0F78_0435_000E_32E0();
	goto l__04E8;
l__04E8:
	goto l__04B6;
l__04EA:
	goto l__04EC;
l__04EC:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_0559_0027_3560()
 *
 * @name f__0642_0559_0027_3560
 * @implements 0642:0559:0027:3560 ()
 * @implements 0642:0574:000C:4D0E
 * @implements 0642:0580:000C:CC3D
 * @implements 0642:058C:002B:2BAE
 * @implements 0642:058F:0028:2879
 * @implements 0642:0591:0026:A299
 * @implements 0642:05B7:0010:2CA3
 * @implements 0642:05C7:0031:5A24
 * @implements 0642:05E8:0010:FCFE
 * @implements 0642:05F8:000B:A38F
 * @implements 0642:0603:000A:C012
 * @implements 0642:060D:0015:23C1
 * @implements 0642:0622:0018:8149
 * @implements 0642:063A:0018:8149
 * @implements 0642:0652:0018:8149
 * @implements 0642:066A:0016:3765
 * @implements 0642:0680:001C:6279
 * @implements 0642:069C:000F:7F87
 * @implements 0642:06AB:0013:48D9
 * @implements 0642:06B1:000D:A409
 * @implements 0642:06BE:0040:399F
 * @implements 0642:06D4:002A:1932
 * @implements 0642:06E9:0015:23A1
 * @implements 0642:06FE:0018:8129
 * @implements 0642:0716:0016:04B0
 * @implements 0642:072C:0013:43D9
 * @implements 0642:0732:000D:A409
 * @implements 0642:073F:001B:0AF9
 * @implements 0642:0755:0005:2EF2
 * @implements 0642:075A:0003:2E57
 *
 * Called From: 0642:01AA:0005:F82B
 * Called From: 0642:01AA:0006:9C2A
 * Called From: 10E4:0483:0005:1765
 * Called From: 10E4:0496:0005:1765
 * Called From: B495:0098:0005:1765
 * Called From: B495:0098:0007:73D6
 * Called From: B495:07A4:0006:7364
 * Called From: B4B8:20BB:0005:1765
 * Called From: B4B8:20BB:0023:32FB
 * Called From: B4CD:0EAF:0008:ADED
 * Called From: B4CD:0F17:0008:ADED
 * Called From: B4DA:0C1B:0009:2F5C
 * Called From: B4F2:02A2:0005:1765
 * Called From: B4F2:02A2:0007:73D6
 * Called From: B4F2:048B:0005:1765
 * Called From: B4F2:048B:0007:73D6
 * Called From: B4F2:068C:0005:1765
 * Called From: B4F2:068C:0008:8DED
 * Called From: B4F2:1163:0005:1765
 * Called From: B4F2:1163:0007:EB00
 * Called From: B511:0F7E:0009:0F5C
 * Called From: B511:1142:000A:C086
 */
void f__0642_0559_0027_3560()
{
l__0559:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31D0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31CE);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__05E8;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__05E8;
	}
	goto l__0574;
l__0574:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B2) == 0x0) goto l__0580;
	emu_si = 0xF;
	goto l__0591;
l__0580:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x31D2) == 0x0) goto l__058C;
	emu_ax = 0x6;
	goto l__058F;
l__058C:
	emu_ax = 0xF;
	goto l__058F;
l__058F:
	emu_si = emu_ax;
	goto l__0591;
l__0591:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2CD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05B7); emu_cs = 0x01F7; emu_Tools_Memmove();
	goto l__05B7;
l__05B7:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x05C7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	goto l__05C7;
l__05C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31D2);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x31D2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31D0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31CE) = emu_dx;
	goto l__05E8;
l__05E8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31CC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31CA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__05F8;
	goto l__06D4;
l__05F8:
	if ((emu_flags.sf != emu_flags.of)) goto l__0603;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0603;
	goto l__06D4;
l__0603:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x0) goto l__060D;
	goto l__06D4;
l__060D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	goto l__0622;
l__0622:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	goto l__063A;
l__063A:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0652); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	goto l__0652;
l__0652:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x066A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	goto l__066A;
l__066A:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0xD);
		if (emu_get_memory16(emu_ds, 0x00, 0x31D4) == 0xD) goto l__0680;
		emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0xD;
	}
	goto l__06B1;
l__0680:
	emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0xF;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) == 0x2) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x38EC) != 0x0) goto l__069C;
		emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0x6;
	}
	goto l__06B1;
l__069C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38EC) >= (int16)0x0) goto l__06AB;
	emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0x5;
	goto l__06B1;
l__06AB:
	emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0xF;
	goto l__06B1;
l__06B1:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x06BE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	goto l__06BE;
l__06BE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31CC) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31CA) = emu_dx;
	goto l__06D4;
l__06D4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31C8);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31C6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0755;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0755;
	}
	goto l__06E9;
l__06E9:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D6));
	emu_ax = 0xDF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	goto l__06FE;
l__06FE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D6));
	emu_ax = 0xDF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0716); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
	goto l__0716;
l__0716:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D6), 0xC);
		if (emu_get_memory16(emu_ds, 0x00, 0x31D6) == 0xC) goto l__072C;
		emu_get_memory16(emu_ds, 0x00, 0x31D6) = 0xC;
	}
	goto l__0732;
l__072C:
	emu_get_memory16(emu_ds, 0x00, 0x31D6) = 0xA;
	goto l__0732;
l__0732:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x073F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	goto l__073F;
l__073F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31C8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31C6) = emu_dx;
	goto l__0755;
l__0755:
	emu_push(emu_cs); emu_push(0x075A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0470_000E_519D();
	goto l__075A;
l__075A:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_075D_0011_C164()
 *
 * @name f__0642_075D_0011_C164
 * @implements 0642:075D:0011:C164 ()
 * @implements 0642:076C:0002:E73A
 * @implements 0642:076E:0014:FFCC
 * @implements 0642:0782:0017:3AC1
 * @implements 0642:0799:0019:BAF4
 * @implements 0642:07B2:000A:EC0B
 * @implements 0642:07BC:0002:2597
 *
 * Called From: 0FCB:0045:0016:C1AF
 * Called From: 0FCB:0045:0024:179B
 * Called From: B491:09CE:001C:C3B8
 * Called From: B491:09CE:001A:E623
 * Called From: B4B8:0AB9:0012:F330
 * Called From: B4B8:195F:0010:C42D
 * Called From: B4B8:1F90:006B:A553
 * Called From: B4BE:0274:001E:AB48
 * Called From: B4DA:1121:0042:2923
 * Called From: B4E0:0472:000D:05BD
 * Called From: B4E0:0795:0024:4F14
 * Called From: B511:0DAC:001C:BDE5
 * Called From: B511:10C0:001C:9617
 * Called From: B511:1303:001C:D688
 * Called From: B511:1382:0021:27D9
 */
void f__0642_075D_0011_C164()
{
l__075D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__076E;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__076C;
l__076C:
	goto l__07BC;
l__076E:
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x8282;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0782); emu_cs = 0x01F7; emu_Tools_Memmove();
	goto l__0782;
l__0782:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory8(emu_ds, 0x00, 0x828A) = 0x0;
	emu_push(emu_ds);
	emu_ax = 0x3202;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8282;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0799); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	goto l__0799;
l__0799:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x31D8);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8282;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07B2); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	goto l__07B2;
l__07B2:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_ds;
	emu_ax = 0x8282;
	goto l__076C;
l__07BC:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0642_07BE_0058_A125()
 *
 * @name f__0642_07BE_0058_A125
 * @implements 0642:07BE:0058:A125 ()
 * @implements 0642:0816:0008:D758
 * @implements 0642:081E:0014:04BF
 * @implements 0642:086B:0013:5F86
 * @implements 0642:087E:0006:D736
 * @implements 0642:0884:0020:E43F
 * @implements 0642:08A4:0010:1761
 * @implements 0642:08B4:0008:D758
 * @implements 0642:08BC:0008:77BC
 * @implements 0642:08C4:005F:F325
 * @implements 0642:08EE:0035:D9D4
 * @implements 0642:090E:0015:704F
 * @implements 0642:0923:0012:1D2E
 * @implements 0642:0935:001E:6A29
 * @implements 0642:0948:000B:799F
 * @implements 0642:0953:0013:9D60
 * @implements 0642:0955:0011:D656
 * @implements 0642:0966:0013:3054
 * @implements 0642:0979:0006:D72E
 * @implements 0642:097F:0010:1771
 * @implements 0642:098F:0008:D758
 * @implements 0642:0997:0008:77BC
 * @implements 0642:099F:005F:F7A1
 * @implements 0642:09C9:0035:F510
 * @implements 0642:09E9:0015:544F
 * @implements 0642:09FE:0012:1D6C
 * @implements 0642:0A10:001E:01FB
 * @implements 0642:0A23:000B:166D
 * @implements 0642:0A2E:0013:852A
 * @implements 0642:0A30:0011:CE1C
 * @implements 0642:0A41:005E:95AC
 * @implements 0642:0A55:004A:C310
 * @implements 0642:0A69:0036:D301
 * @implements 0642:0A7D:0022:6FD3
 * @implements 0642:0A91:000E:6603
 * @implements 0642:0AA5:001E:3662
 * @implements 0642:0AC3:0008:4AB0
 * @implements 0642:0ACB:0007:F77C
 *
 * Called From: 0642:04B3:0009:B95F
 */
void f__0642_07BE_0058_A125()
{
l__07BE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0832; emu_last_cs = 0x0642; emu_last_ip = 0x0803; emu_last_length = 0x0058; emu_last_crc = 0xA125; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0816); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0816;
l__0816:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x081E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
	goto l__081E;
l__081E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0830; emu_last_cs = 0x0642; emu_last_ip = 0x0821; emu_last_length = 0x0014; emu_last_crc = 0x04BF; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__086B;
l__086B:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x087E); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__087E;
l__087E:
	emu_addw(&emu_sp, 0x8);
	goto l__0955;
l__0884:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x400) != 0) goto l__08A4;
	goto l__0948;
l__08A4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__08B4;
l__08B4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08BC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
	goto l__08BC;
l__08BC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__08C4;
	goto l__0948;
l__08C4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0948;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	}
	goto l__08EE;
l__08EE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	}
	goto l__090E;
l__090E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0923;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0923;
	emu_si = 0x1;
	goto l__0948;
l__0923:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0935;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	goto l__0948;
l__0935:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
		emu_di = 0x1;
	}
	goto l__0948;
l__0948:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0953); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__0953;
l__0953:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0955;
l__0955:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0966;
	goto l__0884;
l__0966:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0979); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__0979;
l__0979:
	emu_addw(&emu_sp, 0x8);
	goto l__0A30;
l__097F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x098F); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__098F;
l__098F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0997); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
	goto l__0997;
l__0997:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__099F;
	goto l__0A23;
l__099F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0A23;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	}
	goto l__09C9;
l__09C9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	}
	goto l__09E9;
l__09E9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__09FE;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__09FE;
	emu_si = 0x1;
	goto l__0A23;
l__09FE:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0A10;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	goto l__0A23;
l__0A10:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
		emu_di = 0x1;
	}
	goto l__0A23;
l__0A23:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A2E); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__0A2E;
l__0A2E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0A30;
l__0A30:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0A41;
	goto l__097F;
l__0A41:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	}
	goto l__0A55;
l__0A55:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	}
	goto l__0A69;
l__0A69:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	}
	goto l__0A7D;
l__0A7D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	}
	goto l__0A91;
l__0A91:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) { /* Unresolved jump */ emu_ip = 0x0A9F; emu_last_cs = 0x0642; emu_last_ip = 0x0A95; emu_last_length = 0x000E; emu_last_crc = 0x6603; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	goto l__0AA5;
l__0AA5:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0ACC; emu_last_cs = 0x0642; emu_last_ip = 0x0AB1; emu_last_length = 0x001E; emu_last_crc = 0x3662; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0AC3;
l__0AC3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ACB); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	goto l__0ACB;
l__0ACB:
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
 * Decompiled function f__0642_0AD2_002A_8B98()
 *
 * @name f__0642_0AD2_002A_8B98
 * @implements 0642:0AD2:002A:8B98 ()
 * @implements 0642:0B55:0003:2E57
 *
 * Called From: 0642:00F1:000A:99DA
 */
void f__0642_0AD2_002A_8B98()
{
l__0AD2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8D), 0x6);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8D) == 0x6) { /* Unresolved jump */ emu_ip = 0x0AE6; emu_last_cs = 0x0642; emu_last_ip = 0x0ADD; emu_last_length = 0x002A; emu_last_crc = 0x8B98; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8B), 0x6);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8B) != 0x6) goto l__0B55;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x3204;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AFC); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
	/* Unresolved jump */ emu_ip = 0x0AFC; emu_last_cs = 0x0642; emu_last_ip = 0x0AFC; emu_last_length = 0x002A; emu_last_crc = 0x8B98; emu_call();
l__0B55:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
