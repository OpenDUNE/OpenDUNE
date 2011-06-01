/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Tools_Free()
 *
 * @name emu_Tools_Free
 * @implements 23E1:01C2:0011:24E8 ()
 * @implements 23E1:01D3:000B:ACDF
 * @implements 23E1:01DE:0011:2432
 * @implements 23E1:01EF:0004:769F
 * @implements 23E1:01F3:0035:7AA8
 * @implements 23E1:0228:0004:4A1F
 * @implements 23E1:022C:000F:C150
 * @implements 23E1:023B:0011:0456
 * @implements 23E1:0246:0006:9688
 * @implements 23E1:024C:000A:CB2D
 * @implements 23E1:024E:0008:5D41
 * @implements 23E1:0252:0004:893F
 *
 * Called From: 0FCB:0021:0019:5047
 * Called From: 10E4:054B:0012:00C8
 * Called From: 15C2:0058:001D:0028
 * Called From: 15C2:0077:001F:81D4
 * Called From: 1DD7:0224:0016:41ED
 * Called From: 1DD7:1069:000D:AC4F
 * Called From: 1DD7:1069:0015:6DFD
 * Called From: 1DD7:125B:0016:C125
 * Called From: 1DD7:125B:0027:D9F0
 * Called From: 1DD7:13AD:0010:D5AA
 * Called From: 1DD7:1732:0010:D59A
 * Called From: 1DD7:1732:0019:4769
 * Called From: 1DD7:1744:0012:C80C
 * Called From: 1DD7:1BD9:002A:17AC
 * Called From: 1DD7:1BEB:0012:F50C
 * Called From: 1DD7:1BFD:0010:869A
 * Called From: 1DD7:1BFD:0012:EA0C
 * Called From: 2B4C:00FF:001B:853E
 * Called From: B480:0187:000B:874B
 * Called From: B491:0C6B:002A:6159
 * Called From: B491:0D5E:000B:5732
 * Called From: B4B8:17EB:000F:E497
 * Called From: B4B8:1C14:000E:5697
 * Called From: B4B8:1CE6:000E:5697
 * Called From: B4B8:20DB:000E:5697
 * Called From: B4E0:00E6:000D:1817
 * Called From: B4ED:018F:0010:CD7E
 * Called From: B511:0E0A:000B:9749
 * Called From: B511:0E17:000D:4AD9
 * Called From: B511:11D1:001B:9F2E
 * Called From: B511:1467:001B:8EEC
 * Called From: B518:0A68:0027:5A8F
 * Called From: B520:022C:000E:38A3
 * Called From: B520:03B1:001B:4BEB
 * Called From: B520:03BE:000D:A2A1
 * Called From: B52A:04A1:0030:9D41
 * Called From: B53B:0266:0012:DC62
 */
void emu_Tools_Free()
{
l__01C2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__01D3;
	goto l__0252;
l__01D3:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01DE); emu_cs = 0x2649; emu_Highmem_IsInHighmem();
l__01DE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__01F3;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01EF); emu_cs = 0x2649; emu_Highmem_Free();
l__01EF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__024E;
l__01F3:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_decw(&emu_ax);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0xF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_get_memory8(emu_ss, emu_bp, -0x5) = emu_al;
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x20);
	if ((emu_get_memory8(emu_ss, emu_bp, -0x5) & 0x20) == 0) goto l__022C;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x5);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0xF);
	emu_dx = 0xF;
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x01F7; emu_Tools_Free_Internal();
l__0228:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__024E;
l__022C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__023B;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_decw(&emu_ax);
	goto l__0246;
l__023B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0xF);
l__0246:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x024C); emu_cs = 0x01F7; emu_Tools_Free_Internal();
l__024C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__024E:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x6C8A));
l__0252:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_03DB_000B_CF65()
 *
 * @name f__23E1_03DB_000B_CF65
 * @implements 23E1:03DB:000B:CF65 ()
 * @implements 23E1:03E6:000E:32CC
 * @implements 23E1:03F4:000E:7972
 * @implements 23E1:0402:0007:D436
 * @implements 23E1:0418:0005:F70A
 * @implements 23E1:041D:0012:BB9F
 * @implements 23E1:042F:0022:89AF
 * @implements 23E1:0447:000A:15E0
 * @implements 23E1:0451:000F:0E67
 * @implements 23E1:0460:0004:893F
 *
 * Called From: 23E1:0158:0008:5A28
 * Called From: 23E1:0158:0005:F8A0
 */
void f__23E1_03DB_000B_CF65()
{
l__03DB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
l__03E6:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__0418;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x263B; emu_Video_SetMode();
l__03F4:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6714));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6712));
	emu_push(emu_cs); emu_push(0x0402); emu_cs = 0x28E4; emu_Tools_PrintString();
l__0402:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Unresolved jump */ emu_ip = 0x0409; emu_last_cs = 0x23E1; emu_last_ip = 0x0409; emu_last_length = 0x0007; emu_last_crc = 0xD436; emu_call();
l__0418:
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x01F7; f__01F7_1B73_0022_8ADB();
l__041D:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	goto l__0447;
l__042F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
		emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	}
l__0447:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0451); emu_cs = 0x01F7; f__01F7_1DE5_0036_9480();
l__0451:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__042F;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0460;
l__0460:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
