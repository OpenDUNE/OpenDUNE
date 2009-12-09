/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_String_Load()
 *
 * @name emu_String_Load
 * @implements 0FCB:000D:0019:5047 ()
 * @implements 0FCB:0026:0024:179B
 * @implements 0FCB:0034:0016:C1AF
 * @implements 0FCB:004A:0009:6FDE
 * @implements 0FCB:0053:000C:79F7
 * @implements 0FCB:005D:0002:2597
 *
 * Called From: 0642:00E5:000A:A0DD
 * Called From: B4AB:0008:000D:6028
 * Called From: B4B8:1CF2:000C:6762
 * Called From: B4B8:20E7:000C:6762
 * Called From: B4BE:0012:000B:DEF2
 * Called From: B4BE:0082:000C:5C4C
 */
void emu_String_Load()
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
l__0026:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38CC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38CA) = 0x0;
l__0034:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__005D;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x0642; emu_String_GenerateFilename();
l__004A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0053); emu_cs = 0x253D; f__253D_008A_0016_007A();
l__0053:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38CC) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38CA) = emu_ax;
l__005D:
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
 * @implements 0FCB:0186:0002:C23A
 * @implements 0FCB:0188:0004:9539
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
	goto l__0188;
l__009E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_ax != 0) goto l__00A9;
	goto l__0188;
l__00A9:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__00B0;
	goto l__0188;
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
l__0123:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
l__012C:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0138); emu_cs = 0x01F7; emu_String_strlen();
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
l__016F:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0183); emu_cs = 0x2502; emu_String_Decompress();
l__0183:
	emu_addw(&emu_sp, 0x8);
l__0186:
	goto l__018C;
l__0188:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0186;
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
