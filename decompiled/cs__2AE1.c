/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2AE1_0096_0009_9B4B()
 *
 * @name f__2AE1_0096_0009_9B4B
 * @implements 2AE1:0096:0009:9B4B ()
 * @implements 2AE1:009F:000E:69CD
 * @implements 2AE1:00AD:000A:C73C
 *
 * Called From: 2AE1:00C8:0014:51EF
 * Called From: 2AE1:02B0:0014:50E5
 */
void f__2AE1_0096_0009_9B4B()
{
l__0096:
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x009F); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	goto l__009F;
l__009F:
	emu_addw(&emu_sp, 0x4);
	emu_ds = emu_dx;
	emu_si = emu_ax;
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00AD); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	goto l__00AD;
l__00AD:
	emu_addw(&emu_sp, 0x4);
	emu_es = emu_dx;
	emu_di = emu_ax;
	emu_pop(&emu_dx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_00B7_0014_51EF()
 *
 * @name f__2AE1_00B7_0014_51EF
 * @implements 2AE1:00B7:0014:51EF ()
 * @implements 2AE1:00CB:0017:8457
 * @implements 2AE1:00D0:0012:E6A7
 * @implements 2AE1:00D9:0009:B81A
 * @implements 2AE1:00E2:000C:275B
 * @implements 2AE1:00E6:0008:BE2C
 * @implements 2AE1:00EE:0008:7F1B
 * @implements 2AE1:00F6:000B:4C40
 * @implements 2AE1:0101:001A:4505
 * @implements 2AE1:0111:000A:25FC
 * @implements 2AE1:011B:000D:FFF5
 * @implements 2AE1:011D:000B:AB71
 * @implements 2AE1:0128:0009:C732
 *
 * Called From: B52A:0594:0016:5135
 * Called From: B52A:0A95:0024:8346
 */
void f__2AE1_00B7_0014_51EF()
{
l__00B7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00CB); f__2AE1_0096_0009_9B4B();
	goto l__00CB;
l__00CB:
	emu_cld();
	emu_xorw(&emu_ax, emu_ax);
	emu_cx = emu_ax;
	goto l__00D0;
l__00D0:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__00E2;
	if (emu_flags.sf) goto l__00EE;
	emu_cl = emu_al;
	goto l__00D9;
l__00D9:
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) goto l__00D9;
	goto l__00D0;
l__00E2:
	emu_cl = emu_get_memory8(emu_ds, emu_si, 0x0);
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	goto l__00E6;
l__00E6:
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) goto l__00E6;
	goto l__00D0;
l__00EE:
	emu_subb(&emu_al, 0x80);
	if (emu_flags.zf) goto l__00F6;
	emu_addw(&emu_di, emu_ax);
	goto l__00D0;
l__00F6:
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0101;
	emu_addw(&emu_di, emu_ax);
	emu_xorb(&emu_ah, emu_ah);
	goto l__00D0;
l__0101:
	if (emu_flags.zf) goto l__0128;
	emu_subw(&emu_ax, 0x8000);
	emu_testw(&emu_ax, 0x4000);
	if ((emu_ax & 0x4000) == 0) goto l__011B;
	emu_subw(&emu_ax, 0x4000);
	emu_cx = emu_ax;
	emu_lodsb(emu_ds);
	goto l__0111;
l__0111:
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) goto l__0111;
	emu_xorb(&emu_ah, emu_ah);
	goto l__00D0;
l__011B:
	emu_cx = emu_ax;
	goto l__011D;
l__011D:
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	if (--emu_cx != 0) goto l__011D;
	emu_xorb(&emu_ah, emu_ah);
	goto l__00D0;
l__0128:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_0131_0023_99F9()
 *
 * @name f__2AE1_0131_0023_99F9
 * @implements 2AE1:0131:0023:99F9 ()
 * @implements 2AE1:0135:001F:252C
 * @implements 2AE1:013E:0016:2FC8
 * @implements 2AE1:0150:0004:8D34
 * @implements 2AE1:0154:0019:37A1
 * @implements 2AE1:0158:0015:8B6A
 * @implements 2AE1:0169:0004:9994
 * @implements 2AE1:016D:0018:1E2B
 * @implements 2AE1:0175:0010:649A
 * @implements 2AE1:0185:0002:973A
 * @implements 2AE1:0187:0019:918D
 * @implements 2AE1:0190:0010:649A
 * @implements 2AE1:01A0:0004:B439
 * @implements 2AE1:01A4:0028:160C
 * @implements 2AE1:01B4:0018:8921
 * @implements 2AE1:01C5:0007:D6E3
 * @implements 2AE1:01E7:0003:2E77
 *
 * Called From: 2AE1:02CA:0004:8219
 */
void f__2AE1_0131_0023_99F9()
{
l__0131:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_di);
	goto l__0135;
l__0135:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__0154;
	if (emu_flags.sf) goto l__016D;
	emu_cl = emu_al;
	goto l__013E;
l__013E:
	emu_lodsb(emu_ds);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx == emu_bx) {
		emu_xorw(&emu_dx, emu_dx);
		emu_pop(&emu_di);
		emu_addw(&emu_di, 0x140);
		emu_push(emu_di);
	}
	goto l__0150;
l__0150:
	if (--emu_cx != 0) goto l__013E;
	goto l__0135;
l__0154:
	emu_cl = emu_get_memory8(emu_ds, emu_si, 0x0);
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	goto l__0158;
l__0158:
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx == emu_bx) {
		emu_xorw(&emu_dx, emu_dx);
		emu_pop(&emu_di);
		emu_addw(&emu_di, 0x140);
		emu_push(emu_di);
	}
	goto l__0169;
l__0169:
	if (--emu_cx != 0) goto l__0158;
	goto l__0135;
l__016D:
	emu_subb(&emu_al, 0x80);
	if (emu_flags.zf) goto l__0187;
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	goto l__0175;
l__0175:
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx < emu_bx) goto l__0185;
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	goto l__0175;
l__0185:
	goto l__0135;
l__0187:
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__01A4;
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	goto l__0190;
l__0190:
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx < emu_bx) goto l__01A0;
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	goto l__0190;
l__01A0:
	emu_xorb(&emu_ah, emu_ah);
	goto l__0135;
l__01A4:
	if (emu_flags.zf) goto l__01E7;
	emu_subw(&emu_ax, 0x8000);
	emu_testw(&emu_ax, 0x4000);
	if ((emu_ax & 0x4000) == 0) { /* Unresolved jump */ emu_ip = 0x01CC; emu_last_cs = 0x2AE1; emu_last_ip = 0x01AC; emu_last_length = 0x0028; emu_last_crc = 0x160C; emu_call(); return; }
	emu_subw(&emu_ax, 0x4000);
	emu_cx = emu_ax;
	emu_lodsb(emu_ds);
	goto l__01B4;
l__01B4:
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_al);
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx == emu_bx) {
		emu_xorw(&emu_dx, emu_dx);
		emu_pop(&emu_di);
		emu_addw(&emu_di, 0x140);
		emu_push(emu_di);
	}
	goto l__01C5;
l__01C5:
	if (--emu_cx != 0) goto l__01B4;
	emu_xorb(&emu_ah, emu_ah);
	goto l__0135;
l__01E7:
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_01EA_0020_A570()
 *
 * @name f__2AE1_01EA_0020_A570
 * @implements 2AE1:01EA:0020:A570 ()
 * @implements 2AE1:01EB:001F:A527
 * @implements 2AE1:01F4:0016:AFC3
 * @implements 2AE1:0206:0004:8D34
 * @implements 2AE1:020A:0019:B7AA
 * @implements 2AE1:020E:0015:0B61
 * @implements 2AE1:021F:0004:9994
 * @implements 2AE1:0223:0018:1E2B
 * @implements 2AE1:022B:0010:649A
 * @implements 2AE1:023B:0002:973A
 * @implements 2AE1:023D:0019:918D
 * @implements 2AE1:0246:0010:649A
 * @implements 2AE1:0256:0004:B439
 * @implements 2AE1:025A:0028:177C
 * @implements 2AE1:0282:001B:1E1F
 * @implements 2AE1:0284:0019:4C0E
 * @implements 2AE1:0296:0007:12EA
 * @implements 2AE1:029D:0002:A597
 *
 * Called From: 2AE1:02C4:0014:2D3F
 */
void f__2AE1_01EA_0020_A570()
{
l__01EA:
	emu_push(emu_di);
	goto l__01EB;
l__01EB:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__020A;
	if (emu_flags.sf) goto l__0223;
	emu_cl = emu_al;
	goto l__01F4;
l__01F4:
	emu_lodsb(emu_ds);
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx == emu_bx) {
		emu_xorw(&emu_dx, emu_dx);
		emu_pop(&emu_di);
		emu_addw(&emu_di, 0x140);
		emu_push(emu_di);
	}
	goto l__0206;
l__0206:
	if (--emu_cx != 0) goto l__01F4;
	goto l__01EB;
l__020A:
	emu_cl = emu_get_memory8(emu_ds, emu_si, 0x0);
	emu_incw(&emu_si);
	emu_lodsb(emu_ds);
	goto l__020E;
l__020E:
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx == emu_bx) {
		emu_xorw(&emu_dx, emu_dx);
		emu_pop(&emu_di);
		emu_addw(&emu_di, 0x140);
		emu_push(emu_di);
	}
	goto l__021F;
l__021F:
	if (--emu_cx != 0) goto l__020E;
	goto l__01EB;
l__0223:
	emu_subb(&emu_al, 0x80);
	if (emu_flags.zf) goto l__023D;
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	goto l__022B;
l__022B:
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx < emu_bx) goto l__023B;
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	goto l__022B;
l__023B:
	goto l__01EB;
l__023D:
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__025A;
	emu_addw(&emu_di, emu_ax);
	emu_addw(&emu_dx, emu_ax);
	goto l__0246;
l__0246:
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx < emu_bx) goto l__0256;
	emu_subw(&emu_dx, emu_bx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	emu_addw(&emu_di, emu_dx);
	goto l__0246;
l__0256:
	emu_xorb(&emu_ah, emu_ah);
	goto l__01EB;
l__025A:
	if (emu_flags.zf) goto l__029D;
	emu_subw(&emu_ax, 0x8000);
	emu_testw(&emu_ax, 0x4000);
	if ((emu_ax & 0x4000) == 0) goto l__0282;
	emu_subw(&emu_ax, 0x4000);
	emu_cx = emu_ax;
	emu_lodsb(emu_ds);
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx != emu_bx) { /* Unresolved jump */ emu_ip = 0x027B; emu_last_cs = 0x2AE1; emu_last_ip = 0x0271; emu_last_length = 0x0028; emu_last_crc = 0x177C; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_di);
	emu_addw(&emu_di, 0x140);
	emu_push(emu_di);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x026A; emu_last_cs = 0x2AE1; emu_last_ip = 0x027B; emu_last_length = 0x0028; emu_last_crc = 0x177C; emu_call(); }
	emu_xorb(&emu_ah, emu_ah);
	goto l__01EB;
l__0282:
	emu_cx = emu_ax;
	goto l__0284;
l__0284:
	emu_lodsb(emu_ds);
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_incw(&emu_di);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_dx, emu_bx);
	if (emu_dx == emu_bx) {
		emu_xorw(&emu_dx, emu_dx);
		emu_pop(&emu_di);
		emu_addw(&emu_di, 0x140);
		emu_push(emu_di);
	}
	goto l__0296;
l__0296:
	if (--emu_cx != 0) goto l__0284;
	emu_xorb(&emu_ah, emu_ah);
	goto l__01EB;
l__029D:
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2AE1_029F_0014_50E5()
 *
 * @name f__2AE1_029F_0014_50E5
 * @implements 2AE1:029F:0014:50E5 ()
 * @implements 2AE1:02B3:0014:2D3F
 * @implements 2AE1:02C7:0002:C23A
 * @implements 2AE1:02C9:0004:8219
 * @implements 2AE1:02CD:0009:C732
 *
 * Called From: B52A:0579:0057:BCE0
 * Called From: B52A:0ABA:0020:7369
 */
void f__2AE1_029F_0014_50E5()
{
l__029F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x02B3); f__2AE1_0096_0009_9B4B();
	goto l__02B3;
l__02B3:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_cld();
	emu_xorw(&emu_ax, emu_ax);
	emu_cx = emu_ax;
	emu_dx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x10) == 0x0) goto l__02C9;
	emu_push(emu_cs);
	emu_push(0x02C7); f__2AE1_01EA_0020_A570();
	goto l__02C7;
l__02C7:
	goto l__02CD;
l__02C9:
	emu_push(emu_cs);
	emu_push(0x02CD); f__2AE1_0131_0023_99F9();
	goto l__02CD;
l__02CD:
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
