/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Tools_Malloc()
 *
 * @name emu_Tools_Malloc
 * @implements 23E1:0004:0014:2BC0 ()
 * @implements 23E1:0018:001C:B654
 * @implements 23E1:001F:0015:7A84
 * @implements 23E1:0034:000C:E591
 * @implements 23E1:0040:0018:62EC
 * @implements 23E1:0058:000C:12F7
 * @implements 23E1:005B:0009:3977
 * @implements 23E1:0066:000B:8D1F
 * @implements 23E1:0071:001F:EC67
 * @implements 23E1:008E:0002:C63A
 * @implements 23E1:009C:000F:1B49
 * @implements 23E1:00A8:0003:DDA4
 * @implements 23E1:00AB:000B:6351
 * @implements 23E1:00B6:0035:5E0E
 * @implements 23E1:00EB:001B:2FAC
 * @implements 23E1:00F7:000F:78DD
 * @implements 23E1:0106:0012:D6D9
 * @implements 23E1:0118:003B:3097
 * @implements 23E1:012D:0026:6C1D
 * @implements 23E1:0153:0008:5A28
 * @implements 23E1:0156:0005:F8A0
 * @implements 23E1:015B:0063:2E46
 * @implements 23E1:0175:0049:9AC9
 * @implements 23E1:0182:003C:8BCB
 * @implements 23E1:019D:0021:7B82
 * @implements 23E1:01B1:000D:78E8
 * @implements 23E1:01BE:0004:893F
 *
 * Called From: 10E4:0362:000C:1AF8
 * Called From: 15C2:0190:000F:92A6
 * Called From: 15C2:0228:000F:92A6
 * Called From: 15C2:030C:000F:92A6
 * Called From: 1DD7:100F:0013:A09B
 * Called From: 1DD7:119A:000F:C861
 * Called From: 1DD7:199B:000C:324F
 * Called From: 1DD7:1A8F:000F:955F
 * Called From: 1DD7:1B0F:000F:92E6
 * Called From: 253D:00BB:0015:F0C0
 * Called From: 256D:006B:000F:2FE8
 * Called From: 25C4:0182:0012:C097
 * Called From: 25C4:0340:0012:BF4D
 * Called From: 2B4C:00B9:000E:CC99
 * Called From: 2B4C:0135:000E:CC99
 * Called From: B480:0164:0017:957F
 * Called From: B483:08B4:0012:314A
 * Called From: B491:0BED:000E:A2A5
 * Called From: B4B8:0EF2:001E:DC63
 * Called From: B4B8:176F:0010:D3DB
 * Called From: B4B8:1789:001A:E7C5
 * Called From: B4B8:17A2:0019:6A0B
 * Called From: B4B8:17C9:0027:C603
 * Called From: B4B8:187B:0011:B8BA
 * Called From: B4B8:1894:0019:EE0B
 * Called From: B4B8:1934:004F:3A18
 * Called From: B4B8:1C48:001D:DFBC
 * Called From: B4B8:1C48:0011:EAB0
 * Called From: B4B8:1D26:001D:DFBC
 * Called From: B4B8:1D26:0011:EAB0
 * Called From: B4B8:211B:001D:DFBC
 * Called From: B511:101A:0010:D0C5
 * Called From: B520:0125:0016:52C9
 * Called From: B520:0246:0016:54C9
 * Called From: B520:030A:00C4:DD47
 * Called From: B53B:0111:000C:1AF8
 */
void emu_Tools_Malloc()
{
l__0004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x66F8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x66FA));
	if (emu_ax != 0) goto l__001F;
	emu_push(emu_cs);
	emu_push(0x0018); emu_Tools_GetFreeMemory();
l__0018:
	emu_get_memory16(emu_ds, 0x00, 0x66FA) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x66F8) = emu_ax;
l__001F:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x40);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x40) == 0) goto l__0040;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2649; f__2649_0336_004C_0948();
l__0034:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__01B1;
l__0040:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x20);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x20) == 0) goto l__0058;
	emu_ax = 0x10;
	goto l__005B;
l__0058:
	emu_ax = 0x1;
l__005B:
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	goto l__0066;
l__0066:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x01F7; f__01F7_1855_0053_AC2D();
l__0071:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0064; emu_last_cs = 0x23E1; emu_last_ip = 0x007B; emu_last_length = 0x001F; emu_last_crc = 0xEC67; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6C86);
		emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C88));
		if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0090; emu_last_cs = 0x23E1; emu_last_ip = 0x008C; emu_last_length = 0x001F; emu_last_crc = 0xEC67; emu_call(); return; }
	}
l__008E:
	goto l__009C;
l__009C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__00AB;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__00A8:
	goto l__01BE;
l__00AB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00B6); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
l__00B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x20);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x20) == 0) goto l__00EB;
	emu_al = 0xF;
	emu_subb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_dl = emu_al;
	emu_al = emu_dl;
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_dl;
	emu_orb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__00F7;
l__00EB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__00F7:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xA) & 0x10) == 0) goto l__0156;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__012D;
l__0106:
	emu_ax = 0x7D00;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0118); emu_cs = 0x01F7; emu_Tools_Memset();
l__0118:
	emu_addw(&emu_sp, 0x8);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_ax, 0x7D0);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
l__012D:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) > 0x0) goto l__0106;
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) { /* Unresolved jump */ emu_ip = 0x0142; emu_last_cs = 0x23E1; emu_last_ip = 0x0139; emu_last_length = 0x0026; emu_last_crc = 0x6C1D; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) > 0x7D00) goto l__0106;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; emu_Tools_Memset();
l__0153:
	emu_addw(&emu_sp, 0x8);
l__0156:
	emu_push(emu_cs);
	emu_push(0x015B); f__23E1_03DB_000B_CF65();
l__015B:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x66F2));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x66F2)) goto l__0182;
	if (emu_ax >= emu_get_memory16(emu_ds, 0x00, 0x66F2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x66F0));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x66F0)) goto l__0182;
	}
l__0175:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ds, 0x00, 0x66F2) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x66F0) = emu_dx;
l__0182:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x66FA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x66F8);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x66F6));
	if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x66F6)) goto l__01B1;
	if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x66F6)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x66F4));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x66F4)) goto l__01B1;
	}
l__019D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x66FA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x66F8);
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_get_memory16(emu_ds, 0x00, 0x66F6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x66F4) = emu_dx;
l__01B1:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x6C8A));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__00A8;
l__01BE:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
	emu_push(emu_cs); emu_push(0x01DE); emu_cs = 0x2649; f__2649_0BAE_001D_25B1();
l__01DE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__01F3;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01EF); emu_cs = 0x2649; f__2649_05DF_0011_F459();
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
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x01F7; f__01F7_1741_001B_9E34();
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
	emu_push(emu_cs); emu_push(0x024C); emu_cs = 0x01F7; f__01F7_1741_001B_9E34();
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
 * Decompiled function emu_Tools_GetFreeMemory()
 *
 * @name emu_Tools_GetFreeMemory
 * @implements 23E1:0334:000B:CF65 ()
 * @implements 23E1:033F:000A:E287
 * @implements 23E1:0349:000D:7816
 * @implements 23E1:0356:0007:D436
 * @implements 23E1:0367:0005:F70A
 * @implements 23E1:036C:0012:A59F
 * @implements 23E1:037E:002E:5E5E
 * @implements 23E1:03A2:000A:15E0
 * @implements 23E1:03AC:0025:E1A5
 * @implements 23E1:03C9:0008:CA49
 * @implements 23E1:03D5:0002:C03A
 * @implements 23E1:03D7:0004:893F
 *
 * Called From: 10E4:034C:0009:0D32
 * Called From: 1DB6:0182:0005:150B
 * Called From: 1DD7:1A2F:0005:150B
 * Called From: 23E1:0015:0014:2BC0
 * Called From: 2B4C:009F:0006:590A
 * Called From: 2B4C:011B:0006:590A
 * Called From: 2B4C:011B:001C:EC2A
 * Called From: B480:0081:000C:5821
 * Called From: B491:0BD3:000E:3BA8
 * Called From: B53B:00FB:0009:0D32
 */
void emu_Tools_GetFreeMemory()
{
l__0334:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
l__033F:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__0367;
	emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x3500; overlay(0x3500, 0); emu_PrepareEnd();
l__0349:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6714));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6712));
	emu_push(emu_cs); emu_push(0x0356); emu_cs = 0x28E4; emu_Tools_PrintString();
l__0356:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x035D); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Unresolved jump */ emu_ip = 0x035D; emu_last_cs = 0x23E1; emu_last_ip = 0x035D; emu_last_length = 0x0007; emu_last_crc = 0xD436; emu_call();
l__0367:
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x01F7; f__01F7_1B73_0022_8ADB();
l__036C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	goto l__03A2;
l__037E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
		if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x2)) {
			if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) { /* Unresolved jump */ emu_ip = 0x0396; emu_last_cs = 0x23E1; emu_last_ip = 0x038F; emu_last_length = 0x002E; emu_last_crc = 0x5E5E; emu_call(); return; }
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
			if (emu_dx > emu_get_memory16(emu_ss, emu_bp, -0x4)) {
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
				emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
				emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
				emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
			}
		}
	}
l__03A2:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03AC); emu_cs = 0x01F7; f__01F7_1DE5_0036_9480();
l__03AC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__037E;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x03D1; emu_last_cs = 0x23E1; emu_last_ip = 0x03BF; emu_last_length = 0x0025; emu_last_crc = 0xE1A5; emu_call(); return; }
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) <= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x4) <= 0x0) { /* Unresolved jump */ emu_ip = 0x03D1; emu_last_cs = 0x23E1; emu_last_ip = 0x03C7; emu_last_length = 0x0025; emu_last_crc = 0xE1A5; emu_call(); return; }
	}
l__03C9:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__03D5;
l__03D5:
	goto l__03D7;
l__03D7:
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
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
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
