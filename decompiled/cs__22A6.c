/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GFX_CopyFromBuffer()
 *
 * @name emu_GFX_CopyFromBuffer
 * @implements 22A6:04F8:007A:6E25 ()
 * @implements 22A6:0517:005B:75B3
 * @implements 22A6:051F:0053:AB4B
 * @implements 22A6:052F:0043:EC1F
 * @implements 22A6:0538:003A:3C78
 * @implements 22A6:0546:002C:4F20
 * @implements 22A6:0555:001D:D834
 * @implements 22A6:0572:0024:48A3
 * @implements 22A6:0581:0015:1FDE
 *
 * Called From: 10E4:052E:002E:B2DF
 * Called From: 2B6C:004F:0045:C1FE
 * Called From: B4F2:0F59:001D:FF8F
 * Called From: B53B:0233:0029:5454
 */
void emu_GFX_CopyFromBuffer()
{
l__04F8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_cld();
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di < (int16)0x0) {
		emu_xorw(&emu_di, emu_di);
	}
l__0517:
	emu_cmpw(&emu_di, 0x28);
	if ((int16)emu_di >= (int16)0x28) {
		emu_di = 0x27;
	}
l__051F:
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx < (int16)0x0) {
		emu_xorw(&emu_dx, emu_dx);
	}
l__052F:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__0538:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_bx, 0x28);
	if (emu_bx > 0x28) {
		emu_bx = 0x28;
	}
l__0546:
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x002C; emu_last_crc = 0x4F20; emu_call(); return; }
	emu_cmpw(&emu_cx, 0xC8);
	if (emu_cx > 0xC8) {
		emu_cx = 0xC8;
	}
l__0555:
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x001D; emu_last_crc = 0xD834; emu_call(); return; }
	emu_push(emu_bx);
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	emu_pop(&emu_bx);
	emu_dx = emu_cx;
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0572); emu_GFX_GetSegment_ByIndex();
l__0572:
	emu_es = emu_ax;
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_ds = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = 0xA0;
	emu_subw(&emu_ax, emu_bx);
	emu_shlw(&emu_ax, 0x1);
l__0581:
	emu_cx = emu_bx;
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_di, emu_ax);
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__0581;
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0C69_008C_017F()
 *
 * @name f__22A6_0C69_008C_017F
 * @implements 22A6:0C69:008C:017F ()
 * @implements 22A6:0C85:0070:7672
 * @implements 22A6:0C98:005D:EC62
 * @implements 22A6:0CAA:004B:0D94
 * @implements 22A6:0CAF:0046:DC43
 * @implements 22A6:0CC8:002D:77C6
 * @implements 22A6:0CCD:0028:03E1
 * @implements 22A6:0CF5:0027:50AF
 *
 * Called From: B4A2:09C9:0028:6340
 */
void f__22A6_0C69_008C_017F()
{
l__0C69:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0C7C; emu_last_cs = 0x22A6; emu_last_ip = 0x0C78; emu_last_length = 0x008C; emu_last_crc = 0x017F; emu_call(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_di, 0x140);
	if ((int16)emu_di >= (int16)0x140) {
		emu_di = 0x13F;
	}
l__0C85:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0C8F; emu_last_cs = 0x22A6; emu_last_ip = 0x0C8B; emu_last_length = 0x0070; emu_last_crc = 0x7672; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__0C98:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, 0x0);
	if ((int16)emu_ax >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0CA2; emu_last_cs = 0x22A6; emu_last_ip = 0x0C9E; emu_last_length = 0x005D; emu_last_crc = 0xEC62; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_ax, 0x140);
	if ((int16)emu_ax >= (int16)0x140) {
		emu_ax = 0x13F;
	}
l__0CAA:
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax < (int16)emu_di) {
		emu_xchgw(&emu_ax, &emu_di);
	}
l__0CAF:
	emu_subw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x178) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_ax, 0x0);
	if ((int16)emu_ax >= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0CC0; emu_last_cs = 0x22A6; emu_last_ip = 0x0CBC; emu_last_length = 0x0046; emu_last_crc = 0xDC43; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_ax, 0xC8);
	if ((int16)emu_ax >= (int16)0xC8) {
		emu_ax = 0xC7;
	}
l__0CC8:
	emu_cmpw(&emu_ax, emu_dx);
	if ((int16)emu_ax < (int16)emu_dx) {
		emu_xchgw(&emu_ax, &emu_dx);
	}
l__0CCD:
	emu_subw(&emu_ax, emu_dx);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x17A) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory8(emu_cs, 0x00, 0x17C) = emu_al;
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_di, emu_ax);
	emu_ax = 0x140;
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x178));
	emu_get_memory16(emu_cs, 0x00, 0x70) = emu_ax;
	emu_push(0x0CF5); emu_GFX_GetScreenSegment();
l__0CF5:
	emu_es = emu_ax;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x17A);
	emu_bl = emu_get_memory8(emu_cs, 0x00, 0x17C);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x178);
	emu_xorb(&emu_get_memory8(emu_es, emu_di, 0x0), emu_bl);
	emu_incw(&emu_di);
	emu_decw(&emu_dx);
	if (emu_dx != 0) { /* Unresolved jump */ emu_ip = 0x0D06; emu_last_cs = 0x22A6; emu_last_ip = 0x0D0B; emu_last_length = 0x0027; emu_last_crc = 0x50AF; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x0D01; emu_last_cs = 0x22A6; emu_last_ip = 0x0D12; emu_last_length = 0x0027; emu_last_crc = 0x50AF; emu_call(); }
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FAE_0027_2378()
 *
 * @name f__22A6_0FAE_0027_2378
 * @implements 22A6:0FAE:0027:2378 ()
 *
 * Called From: 29A3:0171:0004:C0E6
 * Called From: 29A3:01B1:0004:C0E6
 * Called From: 2B4C:004A:0004:C0E6
 * Called From: 2B4C:01ED:0004:C0E6
 * Called From: 2B6C:015E:0004:C0E6
 * Called From: 2B6C:018E:0004:C0E6
 * Called From: 2B6C:026C:0004:C0E6
 * Called From: 2B6C:02C1:0004:C0E6
 * Called From: 2B99:0076:0004:C0E6
 */
void emu_GFX_Ignore2()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FD7_0043_ACF9()
 *
 * @name f__22A6_0FD7_0043_ACF9
 * @implements 22A6:0FD7:0043:ACF9 ()
 *
 * Called From: 29A3:0165:0017:5360
 * Called From: 29A3:0165:002A:CFEE
 * Called From: 29A3:0165:002D:9BAA
 * Called From: 29A3:01A5:000C:9EC2
 * Called From: 2B4C:003E:0017:D42A
 * Called From: 2B4C:01E1:0047:12C3
 * Called From: 2B6C:0153:0020:C73F
 * Called From: 2B6C:0183:001E:6939
 * Called From: 2B6C:0261:007B:97B2
 * Called From: 2B6C:0261:008B:F96D
 * Called From: 2B6C:0261:009B:5944
 * Called From: 2B6C:0261:00CE:4D32
 * Called From: 2B6C:0261:005A:3B17
 * Called From: 2B6C:0261:0033:EB45
 * Called From: 2B6C:0261:00AD:F519
 * Called From: 2B6C:02B6:0028:3AD7
 * Called From: 2B6C:02B6:0027:6AD7
 * Called From: 2B99:0065:000C:9EC2
 */
void emu_GFX_Ignore1()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GFX_CopyToBuffer()
 *
 * @name emu_GFX_CopyToBuffer
 * @implements 22A6:101C:004B:D9F3 ()
 * @implements 22A6:103A:002D:1381
 * @implements 22A6:1042:0025:252F
 * @implements 22A6:1052:0015:64FB
 * @implements 22A6:105B:000C:90E2
 * @implements 22A6:1067:002E:63A9
 * @implements 22A6:106F:0026:D3B0
 * @implements 22A6:1080:0015:5471
 * @implements 22A6:108F:0006:A6A5
 * @implements 22A6:1095:0026:C042
 * @implements 22A6:109E:001D:52A1
 * @implements 22A6:10BB:0022:80E0
 * @implements 22A6:10C4:0019:6051
 *
 * Called From: 10E4:039B:002B:904E
 * Called From: 2B6C:0106:0025:3C9F
 * Called From: 2B6C:0106:002F:7133
 * Called From: 2B6C:0106:0045:838C
 * Called From: B4F2:0F15:001D:FFB4
 * Called From: B53B:0147:0028:D443
 */
void emu_GFX_CopyToBuffer()
{
l__101C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_cld();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x0);
	if ((int16)emu_si < (int16)0x0) {
		emu_xorw(&emu_si, emu_si);
	}
l__103A:
	emu_cmpw(&emu_si, 0x28);
	if ((int16)emu_si >= (int16)0x28) {
		emu_si = 0x27;
	}
l__1042:
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, 0x0);
	if ((int16)emu_dx < (int16)0x0) {
		emu_xorw(&emu_dx, emu_dx);
	}
l__1052:
	emu_cmpw(&emu_dx, 0xC8);
	if ((int16)emu_dx >= (int16)0xC8) {
		emu_dx = 0xC7;
	}
l__105B:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_bx, 0x0);
	if ((int16)emu_bx > (int16)0x0) goto l__1067;
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x000C; emu_last_crc = 0x90E2; emu_call();
l__1067:
	emu_cmpw(&emu_bx, 0x28);
	if ((int16)emu_bx > (int16)0x28) {
		emu_bx = 0x28;
	}
l__106F:
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_cx, 0x0);
	if ((int16)emu_cx <= (int16)0x0) { /* Unresolved jump */ emu_ip = 0x1063; emu_last_cs = 0x22A6; emu_last_ip = 0x1075; emu_last_length = 0x0026; emu_last_crc = 0xD3B0; emu_call(); return; }
	emu_cmpw(&emu_cx, 0xC8);
	if ((int16)emu_cx > (int16)0xC8) {
		emu_cx = 0xC8;
	}
l__1080:
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(emu_di);
	emu_es = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_cmpw(&emu_bx, 0x28);
	if (emu_bx > 0x28) {
		emu_bx = 0x28;
	}
l__108F:
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx != 0) goto l__1095;
	/* Unresolved jump */ emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0006; emu_last_crc = 0xA6A5; emu_call();
l__1095:
	emu_cmpw(&emu_cx, 0xC8);
	if (emu_cx > 0xC8) {
		emu_cx = 0xC8;
	}
l__109E:
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x1093; emu_last_cs = 0x22A6; emu_last_ip = 0x10A0; emu_last_length = 0x001D; emu_last_crc = 0x52A1; emu_call(); return; }
	emu_push(emu_bx);
	emu_bx = emu_dx;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x17D);
	emu_addw(&emu_si, emu_ax);
	emu_pop(&emu_bx);
	emu_dx = emu_cx;
	emu_shlw(&emu_bx, 0x1);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x10BB); emu_GFX_GetSegment_ByIndex();
l__10BB:
	emu_ds = emu_ax;
	emu_ax = 0xA0;
	emu_subw(&emu_ax, emu_bx);
	emu_shlw(&emu_ax, 0x1);
l__10C4:
	emu_cx = emu_bx;
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_ax);
	emu_decw(&emu_dx);
	if (emu_dx != 0) goto l__10C4;
	emu_ax = emu_di;
	emu_pop(&emu_di);
	emu_subw(&emu_ax, emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1200_007B_0356()
 *
 * @name f__22A6_1200_007B_0356
 * @implements 22A6:1200:007B:0356 ()
 * @implements 22A6:1217:0064:103D
 * @implements 22A6:121C:005F:FFCA
 * @implements 22A6:1240:003B:7C56
 * @implements 22A6:1245:0036:A3B9
 * @implements 22A6:124A:0031:5864
 * @implements 22A6:124F:002C:E71B
 *
 * Called From: 06F7:0906:0013:E47B
 */
void f__22A6_1200_007B_0356()
{
l__1200:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = 0x40;
	emu_es = emu_ax;
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x63);
	emu_addb(&emu_dl, 0x6);
l__1217:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__1217;
l__121C:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__121C;
	emu_cli();
	emu_subb(&emu_dl, 0x6);
	emu_ah = 0x1;
	emu_al = 0xC;
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_decw(&emu_dx);
	emu_ah = 0x40;
	emu_incb(&emu_al);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_sti();
	emu_addb(&emu_dl, 0x5);
l__1240:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__1240;
l__1245:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__1245;
l__124A:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) == 0) goto l__124A;
l__124F:
	emu_inb(&emu_al, emu_dx);
	emu_testb(&emu_al, 0x8);
	if ((emu_al & 0x8) != 0) goto l__124F;
	emu_cli();
	emu_subb(&emu_dl, 0x6);
	emu_ah = 0x0;
	emu_al = 0xC;
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_decw(&emu_dx);
	emu_ah = 0x0;
	emu_incb(&emu_al);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_incw(&emu_dx);
	emu_outb(emu_dx, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_sti();
	emu_addb(&emu_dl, 0x5);
	if (--emu_cx != 0) goto l__1217;
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
