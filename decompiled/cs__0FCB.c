/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0FCB_000D_0019_5047()
 *
 * @name f__0FCB_000D_0019_5047
 * @implements 0FCB:000D:0019:5047 ()
 * @implements 0FCB:0026:0024:179B
 * @implements 0FCB:0034:0016:C1AF
 * @implements 0FCB:004A:0009:6FDE
 * @implements 0FCB:0053:000C:79F7
 * @implements 0FCB:005D:0002:2597
 *
 * Called From: 0642:00E5:000A:A0DD
 * Called From: B4B8:1CF2:000C:6762
 * Called From: B4B8:20E7:000C:6762
 * Called From: B4BE:0012:000B:DEF2
 * Called From: B4BE:0082:000C:5C4C
 */
void f__0FCB_000D_0019_5047()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38CA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38CC));
	if (emu_ax == 0) goto l__0034;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CA));
	emu_push(emu_cs); emu_push(0x0026); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	goto l__0026;
l__0026:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38CC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38CA) = 0x0;
	goto l__0034;
l__0034:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__005D;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x0642; f__0642_075D_0011_C164();
	goto l__004A;
l__004A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0053); emu_cs = 0x253D; f__253D_008A_0016_007A();
	goto l__0053;
l__0053:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38CC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38CA) = emu_ax;
	goto l__005D;
l__005D:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FCB_005F_001C_FDC4()
 *
 * @name f__0FCB_005F_001C_FDC4
 * @implements 0FCB:005F:001C:FDC4 ()
 * @implements 0FCB:007B:0005:87EE
 * @implements 0FCB:0086:0002:2597
 *
 * Called From: 0972:05F1:0006:6F66
 * Called From: 0972:0600:000F:119B
 * Called From: 0972:0736:0025:6D67
 * Called From: 0972:1749:0009:F63A
 * Called From: 0972:1759:0010:7163
 * Called From: 0AEC:068C:0036:0E6D
 * Called From: 0AEC:06C6:000D:201F
 * Called From: 0AEC:06C6:001E:C418
 * Called From: 0AEC:06E4:000D:92EB
 * Called From: 0AEC:06F0:000C:A4A0
 * Called From: 0AEC:0B64:0040:84EA
 * Called From: 0AEC:0BBC:0020:6A79
 * Called From: 0AEC:0BD0:000C:54F8
 * Called From: 0AEC:0BD0:0005:3367
 * Called From: 0AEC:0BF7:0018:A44D
 * Called From: 0AEC:0F3F:0020:45D7
 * Called From: 0AEC:0F3F:002B:B5D3
 * Called From: 0AEC:0F3F:0030:42F4
 * Called From: 0AEC:0F52:000B:559F
 * Called From: 0C3A:1AB8:0021:A062
 * Called From: 0C3A:1AB8:0005:3367
 * Called From: 0C3A:1B21:001B:3C60
 * Called From: 0C3A:1B60:0016:D019
 * Called From: 0C3A:209F:002C:9F6D
 * Called From: 0C3A:2769:002E:3CAB
 * Called From: 0C3A:27CD:0034:EAA1
 * Called From: 0C3A:2876:002A:363F
 * Called From: 0C3A:2876:002E:3E5B
 * Called From: 0C3A:28F3:004C:0493
 * Called From: 10E4:12C5:0005:3367
 * Called From: 10E4:12C5:0006:7366
 * Called From: 10E4:12C5:0009:753A
 * Called From: 10E4:1413:001F:1051
 * Called From: 10E4:1470:0006:7366
 * Called From: 10E4:1470:001E:32D6
 * Called From: 10E4:15C2:0046:E443
 * Called From: 10E4:18E5:0024:7FCD
 * Called From: 10E4:197E:001F:5AE8
 * Called From: 10E4:1A5E:002D:4350
 * Called From: 10E4:1A87:001C:F6F9
 * Called From: 10E4:1B22:001E:B7BB
 * Called From: 10E4:1B22:0006:7366
 * Called From: 10E4:1B22:0025:E5D0
 * Called From: 1391:04CD:0024:200D
 * Called From: 1391:04CD:0021:2689
 * Called From: 1391:0563:0013:CAB6
 * Called From: 1391:058C:001E:0E5D
 * Called From: 1423:033D:000E:1BB4
 * Called From: 1423:0478:000E:1AB4
 * Called From: 176C:2678:000C:1FEB
 * Called From: 176C:26A2:001A:8FC8
 * Called From: 1A34:230F:0023:B208
 * Called From: 1A34:2804:002C:C218
 * Called From: 1A34:2833:0018:A4D6
 * Called From: 1A34:2843:000B:5F7D
 * Called From: 1A34:290B:000A:5B6D
 * Called From: 1A34:290B:000C:5845
 * Called From: B480:02E0:0009:3238
 * Called From: B483:03FA:0013:5CAE
 * Called From: B495:056B:002C:AAED
 * Called From: B495:0606:0023:E701
 * Called From: B495:0670:001C:1E63
 * Called From: B495:070A:002E:D74D
 * Called From: B495:0777:000A:D27A
 * Called From: B495:0A51:0026:5884
 * Called From: B495:0A7B:001C:115A
 * Called From: B495:0AAD:002A:B2A6
 * Called From: B495:0AD6:001C:E66E
 * Called From: B495:0B57:001F:97BC
 * Called From: B495:0C51:002A:6ABB
 * Called From: B495:0C65:000C:4A92
 * Called From: B495:0C96:0029:5C43
 * Called From: B495:0CB1:0013:CBED
 * Called From: B495:0CE9:0030:9AC5
 * Called From: B495:16A0:000C:26D1
 * Called From: B4B8:1E9E:0046:55E8
 * Called From: B4E0:0057:0015:7283
 * Called From: B4E0:08A8:0027:44E5
 * Called From: B4ED:099E:001E:72A5
 * Called From: B4F2:0934:002B:B1B5
 * Called From: B4F2:0CE5:0006:6B66
 * Called From: B4F2:13A5:0006:6B66
 * Called From: B503:02DD:000C:E210
 * Called From: B503:037B:000C:E510
 * Called From: B503:03E1:0009:6E38
 * Called From: B503:03E1:000D:81B6
 * Called From: B503:04E0:0012:2CFC
 * Called From: B511:0CD5:001E:3AA6
 * Called From: B511:0D13:0024:CF16
 * Called From: B511:1231:0024:1AEB
 * Called From: B511:1289:0024:2BD7
 * Called From: B518:0086:000F:0B6B
 * Called From: B518:009E:0010:30D5
 * Called From: B518:00BD:0017:653F
 * Called From: B518:00D1:0009:3A38
 * Called From: B518:00D1:000C:B390
 * Called From: B518:00E5:000C:08A3
 * Called From: B518:0112:0009:3938
 * Called From: B518:015B:0026:A5B8
 * Called From: B518:018C:0029:E5C5
 * Called From: B518:08D3:000C:BE90
 * Called From: B518:08E7:000C:04A3
 * Called From: B518:0914:0009:3538
 * Called From: B518:0946:002A:4D1C
 * Called From: B518:09BD:0064:9D4A
 * Called From: B518:0CAF:001D:C8E7
 * Called From: B518:0D1B:0029:5362
 * Called From: B518:0D1B:001D:970B
 * Called From: B518:0D62:001F:5EF1
 * Called From: B518:0D8C:001D:DCC9
 * Called From: B518:0EE1:0027:CF00
 * Called From: B518:121E:000C:BD90
 * Called From: B518:123E:0018:55B9
 * Called From: B518:1254:000E:E653
 * Called From: B518:128A:002E:746D
 * Called From: B518:12AD:001B:ED48
 * Called From: B518:12D0:001B:EDC8
 * Called From: B518:13B4:0017:7E44
 */
void f__0FCB_005F_001C_FDC4()
{
l__005F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38CA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38CC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0080; emu_last_cs = 0x0FCB; emu_last_ip = 0x0069; emu_last_length = 0x001C; emu_last_crc = 0xFDC4; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CA));
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x2502; f__2502_0165_0027_41E7();
	goto l__007B;
l__007B:
	emu_addw(&emu_sp, 0x6);
	goto l__0086;
l__0086:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FCB_0088_0016_2DD9()
 *
 * @name f__0FCB_0088_0016_2DD9
 * @implements 0FCB:0088:0016:2DD9 ()
 * @implements 0FCB:009E:000B:ACA4
 * @implements 0FCB:00A9:0007:D2AB
 * @implements 0FCB:00B0:001B:5ECC
 * @implements 0FCB:00CB:0017:6A41
 * @implements 0FCB:00E2:0015:AB73
 * @implements 0FCB:00F7:0018:1322
 * @implements 0FCB:010F:0014:0A45
 * @implements 0FCB:0123:0009:2605
 * @implements 0FCB:012C:000C:74DA
 * @implements 0FCB:0138:0037:24E5
 * @implements 0FCB:016F:0014:2C10
 * @implements 0FCB:0183:0005:872E
 * @implements 0FCB:018C:0006:F7CE
 *
 * Called From: B4E0:079E:0009:DAE3
 * Called From: B511:0DB5:0009:DAE3
 * Called From: B511:130C:0009:DAE3
 */
void f__0FCB_0088_0016_2DD9()
{
l__0088:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__009E;
	/* Unresolved jump */ emu_ip = 0x0188; emu_last_cs = 0x0FCB; emu_last_ip = 0x009B; emu_last_length = 0x0016; emu_last_crc = 0x2DD9; emu_call();
l__009E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax != 0) goto l__00A9;
	/* Unresolved jump */ emu_ip = 0x0188; emu_last_cs = 0x0FCB; emu_last_ip = 0x00A6; emu_last_length = 0x000B; emu_last_crc = 0xACA4; emu_call();
l__00A9:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__00B0;
	/* Unresolved jump */ emu_ip = 0x0188; emu_last_cs = 0x0FCB; emu_last_ip = 0x00AD; emu_last_length = 0x0007; emu_last_crc = 0xD2AB; emu_call();
l__00B0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CB); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	goto l__00CB;
l__00CB:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_ax, 0x1);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E2); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	goto l__00E2;
l__00E2:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F7); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__00F7;
l__00F7:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x010F); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	goto l__010F;
l__010F:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_di;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__0123;
l__0123:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	goto l__012C;
l__012C:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0138); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	goto l__0138;
l__0138:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_di;
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_bx, emu_ax);
	emu_decw(&emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, 0x1);
	emu_adcw(&emu_dx, 0x0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	goto l__016F;
l__016F:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0183); emu_cs = 0x2502; f__2502_00FA_0009_9EB2();
	goto l__0183;
l__0183:
	emu_addw(&emu_sp, 0x8);
	goto l__018C;
l__018C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
