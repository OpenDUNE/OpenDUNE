/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
	emu_push(0x0CF5); emu_GFX_Screen_GetSegmentActive();
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
