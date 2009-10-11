/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B50B_0000_0029_BDBF()
 *
 * @name f__B50B_0000_0029_BDBF
 * @implements B50B:0000:0029:BDBF ()
 * @implements B50B:0029:0016:86FA
 * @implements B50B:003F:0016:62F4
 * @implements B50B:0055:0016:9CED
 * @implements B50B:006B:0017:B5C0
 * @implements B50B:0082:0016:ADF0
 * @implements B50B:0098:0016:245F
 * @implements B50B:00AE:0013:EDAA
 * @implements B50B:00C1:0013:414D
 * @implements B50B:00D4:0015:3423
 * @implements B50B:00E9:0013:4153
 * @implements B50B:00ED:000F:E9BC
 * @implements B50B:00FC:0015:81F6
 * @implements B50B:0111:0013:4159
 * @implements B50B:0115:000F:E9B6
 * @implements B50B:0124:0016:277C
 * @implements B50B:013A:001A:18B9
 * @implements B50B:0154:0016:6470
 * @implements B50B:016A:0016:856A
 * @implements B50B:0180:001A:4934
 * @implements B50B:019A:001A:CD0D
 * @implements B50B:01B4:0023:77E2
 * @implements B50B:01D7:0016:25CF
 * @implements B50B:01ED:001B:FE86
 * @implements B50B:0208:0016:60C3
 * @implements B50B:021E:0015:C5E6
 * @implements B50B:0233:0013:C2E1
 * @implements B50B:0246:0016:AAF3
 * @implements B50B:025C:0008:112E
 * @implements B50B:0264:0004:893F
 *
 * Called From: 350B:0020:0005:0000
 */
void f__B50B_0000_0029_BDBF()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8CFD) = 0x290;
	emu_ax = 0xE6;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8CFD;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0029); f__B50B_0608_002C_0256();
	goto l__0029;
l__0029:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x003F); f__B50B_05AA_0030_871C();
	goto l__003F;
l__003F:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0055); f__B50B_05AA_0030_871C();
	goto l__0055;
l__0055:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x006B); f__B50B_05AA_0030_871C();
	goto l__006B;
l__006B:
	emu_addw(&emu_sp, 0xA);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x3A0E);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0082); f__B50B_05DA_002E_8785();
	goto l__0082;
l__0082:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0098); f__B50B_05DA_002E_8785();
	goto l__0098;
l__0098:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F0));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00AE); f__B50B_05AA_0030_871C();
	goto l__00AE;
l__00AE:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	if (emu_flags.zf) goto l__00C1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved jump */ emu_ip = 0x00C5; emu_last_cs = 0xB50B; emu_last_ip = 0x00BF; emu_last_length = 0x0013; emu_last_crc = 0xEDAA; emu_call();
l__00C1:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00D4); f__B50B_05AA_0030_871C();
	goto l__00D4;
l__00D4:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) goto l__00E9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	goto l__00ED;
l__00E9:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	goto l__00ED;
l__00ED:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00FC); f__B50B_05AA_0030_871C();
	goto l__00FC;
l__00FC:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38F2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38F4));
	if (emu_flags.zf) goto l__0111;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	goto l__0115;
l__0111:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	goto l__0115;
l__0115:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0124); f__B50B_05AA_0030_871C();
	goto l__0124;
l__0124:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x013A); f__B50B_05AA_0030_871C();
	goto l__013A;
l__013A:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2AF6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2AF4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0154); f__B50B_0573_0037_8058();
	goto l__0154;
l__0154:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x016A); f__B50B_05AA_0030_871C();
	goto l__016A;
l__016A:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0180); f__B50B_05AA_0030_871C();
	goto l__0180;
l__0180:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F0));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x019A); f__B50B_0573_0037_8058();
	goto l__019A;
l__019A:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01B4); f__B50B_0573_0037_8058();
	goto l__01B4;
l__01B4:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38AC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38AE));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01D7); f__B50B_0573_0037_8058();
	goto l__01D7;
l__01D7:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01ED); f__B50B_05AA_0030_871C();
	goto l__01ED;
l__01ED:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x36;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x97E7;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0208); f__B50B_0608_002C_0256();
	goto l__0208;
l__0208:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FE));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x021E); f__B50B_05AA_0030_871C();
	goto l__021E;
l__021E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_flags.zf) goto l__0233;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved jump */ emu_ip = 0x0237; emu_last_cs = 0xB50B; emu_last_ip = 0x0231; emu_last_length = 0x0015; emu_last_crc = 0xC5E6; emu_call();
l__0233:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0246); f__B50B_05AA_0030_871C();
	goto l__0246;
l__0246:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38EA));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025C); f__B50B_05AA_0030_871C();
	goto l__025C;
l__025C:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0264;
l__0264:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0268_0012_E6D0()
 *
 * @name f__B50B_0268_0012_E6D0
 * @implements B50B:0268:0012:E6D0 ()
 * @implements B50B:027A:0018:B4ED
 * @implements B50B:0292:0055:5B5D
 * @implements B50B:0294:0053:5AC9
 * @implements B50B:02CC:001B:88F6
 * @implements B50B:02D1:0016:7810
 * @implements B50B:02E7:0027:EA0A
 * @implements B50B:030E:000D:6B9A
 * @implements B50B:0311:000A:BFDF
 * @implements B50B:0312:0009:AE1F
 * @implements B50B:031B:0005:BBA6
 * @implements B50B:0320:0006:F7CE
 *
 * Called From: 350B:0025:0005:0000
 */
void f__B50B_0268_0012_E6D0()
{
l__0268:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_xorw(&emu_di, emu_di);
	goto l__0312;
l__027A:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x78);
	if (emu_flags.zf) goto l__0292;
	emu_ax = 0x1;
	goto l__0294;
l__0292:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0294;
l__0294:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x323F), 0x8000);
	if (emu_flags.zf) {
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
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x323F), emu_dx);
		if (emu_flags.zf) goto l__02D1;
	}
	goto l__02CC;
l__02CC:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	goto l__02D1;
l__02D1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) goto l__0311;
	emu_push(emu_di);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02E7); f__B50B_05AA_0030_871C();
	goto l__02E7;
l__02E7:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x030E); f__B50B_0608_002C_0256();
	goto l__030E;
l__030E:
	emu_addw(&emu_sp, 0xE);
	goto l__0311;
l__0311:
	emu_incw(&emu_di);
	goto l__0312;
l__0312:
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) goto l__031B;
	goto l__027A;
l__031B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0320;
l__0320:
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
 * Decompiled function f__B50B_0326_0016_CD5C()
 *
 * @name f__B50B_0326_0016_CD5C
 * @implements B50B:0326:0016:CD5C ()
 * @implements B50B:033C:0002:DEBA
 * @implements B50B:033E:0014:33ED
 * @implements B50B:0352:001B:EC40
 * @implements B50B:036D:000E:14EB
 * @implements B50B:037B:0015:674F
 * @implements B50B:0390:0004:893F
 *
 * Called From: 350B:002A:0005:0000
 */
void f__B50B_0326_0016_CD5C()
{
l__0326:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x48);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x033C); emu_cs = 0x10BE; emu_House_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__033C;
l__033C:
	goto l__037B;
l__033E:
	emu_ax = 0x42;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x48);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0352;
l__0352:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x42;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x48);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x036D); f__B50B_0608_002C_0256();
	goto l__036D;
l__036D:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x037B); emu_cs = 0x10BE; emu_House_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__037B;
l__037B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) goto l__033E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0390;
l__0390:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0394_001F_01AF()
 *
 * @name f__B50B_0394_001F_01AF
 * @implements B50B:0394:001F:01AF ()
 * @implements B50B:03B3:0005:A3AE
 * @implements B50B:03B8:0015:A7EC
 * @implements B50B:03CD:000D:2F88
 * @implements B50B:03DA:001B:6333
 * @implements B50B:03F5:000E:5B75
 * @implements B50B:0403:0015:3F4F
 * @implements B50B:0405:0013:AD82
 * @implements B50B:0418:0004:893F
 *
 * Called From: 350B:002F:0005:0000
 */
void f__B50B_0394_001F_01AF()
{
l__0394:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x86);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03B3); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__03B3;
l__03B3:
	emu_addw(&emu_sp, 0x8);
	goto l__0405;
l__03B8:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x86);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__03CD;
l__03CD:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x74);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03DA); f__B50B_0522_0036_7E4C();
	goto l__03DA;
l__03DA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x86);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03F5); f__B50B_0608_002C_0256();
	goto l__03F5;
l__03F5:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0403); emu_cs = 0x0FE4; emu_Unit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0403;
l__0403:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0405;
l__0405:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) goto l__03B8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0418;
l__0418:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_041C_001E_0374()
 *
 * @name f__B50B_041C_001E_0374
 * @implements B50B:041C:001E:0374 ()
 * @implements B50B:043A:0005:A0AE
 * @implements B50B:043F:0014:3099
 * @implements B50B:0453:000D:AF5A
 * @implements B50B:0460:001A:6788
 * @implements B50B:047A:000E:3487
 * @implements B50B:0488:0015:374F
 * @implements B50B:048A:0013:A582
 * @implements B50B:049D:0004:893F
 *
 * Called From: 350B:0034:0005:0000
 */
void f__B50B_041C_001E_0374()
{
l__041C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x5E);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x1082; emu_Building_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__043A;
l__043A:
	emu_addw(&emu_sp, 0x8);
	goto l__048A;
l__043F:
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0453); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0453;
l__0453:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0460); f__B50B_0522_0036_7E4C();
	goto l__0460;
l__0460:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x58;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5E);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x047A); f__B50B_0608_002C_0256();
	goto l__047A;
l__047A:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x1082; emu_Building_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0488;
l__0488:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__048A;
l__048A:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) goto l__043F;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__049D;
l__049D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_04A1_001A_1AA9()
 *
 * @name f__B50B_04A1_001A_1AA9
 * @implements B50B:04A1:001A:1AA9 ()
 * @implements B50B:04BB:0005:A16E
 * @implements B50B:04C0:0014:31F1
 * @implements B50B:04D4:000D:6F9A
 * @implements B50B:04E1:001A:A5BE
 * @implements B50B:04FB:000E:2499
 * @implements B50B:0509:0015:374F
 * @implements B50B:050B:0013:A582
 * @implements B50B:051E:0004:893F
 *
 * Called From: 350B:0039:0005:0000
 */
void f__B50B_04A1_001A_1AA9()
{
l__04A1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x5A);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04BB); emu_cs = 0x104B; emu_AirUnit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__04BB;
l__04BB:
	emu_addw(&emu_sp, 0x6);
	goto l__050B;
l__04C0:
	emu_ax = 0x53;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04D4); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__04D4;
l__04D4:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x3C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04E1); f__B50B_0522_0036_7E4C();
	goto l__04E1;
l__04E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x53;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04FB); f__B50B_0608_002C_0256();
	goto l__04FB;
l__04FB:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0509); emu_cs = 0x104B; emu_AirUnit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0509;
l__0509:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__050B;
l__050B:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) goto l__04C0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__051E;
l__051E:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0522_0036_7E4C()
 *
 * @name f__B50B_0522_0036_7E4C
 * @implements B50B:0522:0036:7E4C ()
 * @implements B50B:0558:001B:D133
 * @implements B50B:0562:0011:8C88
 *
 * Called From: B50B:03D7:000D:2F88
 * Called From: B50B:045D:000D:AF5A
 * Called From: B50B:04DE:000D:6F9A
 */
void f__B50B_0522_0036_7E4C()
{
l__0522:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_flags.zf) goto l__0562;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0558); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0558;
l__0558:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	goto l__0562;
l__0562:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0573_0037_8058()
 *
 * @name f__B50B_0573_0037_8058
 * @implements B50B:0573:0037:8058 ()
 *
 * Called From: B50B:0151:001A:18B9
 * Called From: B50B:0197:001A:4934
 * Called From: B50B:01B1:001A:CD0D
 * Called From: B50B:01D4:0023:77E2
 */
void f__B50B_0573_0037_8058()
{
l__0573:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x4);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_05AA_0030_871C()
 *
 * @name f__B50B_05AA_0030_871C
 * @implements B50B:05AA:0030:871C ()
 *
 * Called From: B50B:003C:0016:86FA
 * Called From: B50B:0052:0016:62F4
 * Called From: B50B:0068:0016:9CED
 * Called From: B50B:00AB:0016:245F
 * Called From: B50B:00D1:0013:414D
 * Called From: B50B:00F9:000F:E9BC
 * Called From: B50B:00F9:0013:4153
 * Called From: B50B:0121:0013:4159
 * Called From: B50B:0121:000F:E9B6
 * Called From: B50B:0137:0016:277C
 * Called From: B50B:0167:0016:6470
 * Called From: B50B:017D:0016:856A
 * Called From: B50B:01EA:0016:25CF
 * Called From: B50B:021B:0016:60C3
 * Called From: B50B:0243:0013:C2E1
 * Called From: B50B:0259:0016:AAF3
 * Called From: B50B:02E4:0016:7810
 * Called From: B50B:02E4:001B:88F6
 * Called From: B50B:02E4:0053:5AC9
 */
void f__B50B_05AA_0030_871C()
{
l__05AA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_05DA_002E_8785()
 *
 * @name f__B50B_05DA_002E_8785
 * @implements B50B:05DA:002E:8785 ()
 *
 * Called From: B50B:007F:0017:B5C0
 * Called From: B50B:0095:0016:ADF0
 */
void f__B50B_05DA_002E_8785()
{
l__05DA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0608_002C_0256()
 *
 * @name f__B50B_0608_002C_0256
 * @implements B50B:0608:002C:0256 ()
 * @implements B50B:0634:0014:DF6D
 *
 * Called From: B50B:0026:0029:BDBF
 * Called From: B50B:0205:001B:FE86
 * Called From: B50B:030B:0027:EA0A
 * Called From: B50B:036A:001B:EC40
 * Called From: B50B:03F2:001B:6333
 * Called From: B50B:0477:001A:6788
 * Called From: B50B:04F8:001A:A5BE
 */
void f__B50B_0608_002C_0256()
{
l__0608:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0634); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	goto l__0634;
l__0634:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
