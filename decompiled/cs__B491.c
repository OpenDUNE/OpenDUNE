/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
	emu_push(emu_cs); emu_push(0x0BD8); emu_cs = 0x23E1; emu_Tools_GetFreeMemory();
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
