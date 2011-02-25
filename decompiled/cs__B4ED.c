/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4ED_075D_002B_59B5()
 *
 * @name f__B4ED_075D_002B_59B5
 * @implements B4ED:075D:002B:59B5 ()
 * @implements B4ED:0788:0023:561F
 * @implements B4ED:07AB:000B:E321
 * @implements B4ED:07B2:0004:893F
 *
 * Called From: B4ED:07C6:0013:1343
 */
void f__B4ED_075D_002B_59B5()
{
l__075D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8070);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8058);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8056);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if (emu_al <= emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__0788;
	goto l__07B2;
l__0788:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8068));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x8068)) goto l__07B2;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07AB); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__07AB:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8070));
l__07B2:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_07B6_0013_1343()
 *
 * @name f__B4ED_07B6_0013_1343
 * @implements B4ED:07B6:0013:1343 ()
 * @implements B4ED:07C9:0031:DE45
 * @implements B4ED:07F7:0003:9C09
 * @implements B4ED:07FA:000A:FB76
 * @implements B4ED:0804:0048:45EC
 * @implements B4ED:0817:0035:D459
 * @implements B4ED:084C:001F:079B
 * @implements B4ED:0863:0008:ADC8
 * @implements B4ED:0864:0007:EBC8
 * @implements B4ED:086B:0013:0001
 * @implements B4ED:087E:000C:91BC
 * @implements B4ED:0887:0003:9C25
 * @implements B4ED:088A:0021:7FDF
 * @implements B4ED:089D:000E:5705
 * @implements B4ED:08AB:002C:7E4B
 * @implements B4ED:08D7:0022:BFE2
 * @implements B4ED:08F9:0022:0A36
 * @implements B4ED:090D:000E:CEAE
 * @implements B4ED:091B:0036:53F7
 * @implements B4ED:0951:0027:8E9A
 * @implements B4ED:0978:0008:E138
 * @implements B4ED:0980:0005:906E
 * @implements B4ED:0983:0002:D4BA
 * @implements B4ED:0985:001E:72A5
 * @implements B4ED:09A3:0008:A137
 * @implements B4ED:09AB:0023:8584
 * @implements B4ED:09AE:0020:96D5
 * @implements B4ED:09CE:001F:079B
 * @implements B4ED:09E5:0008:ADC8
 * @implements B4ED:09E6:0007:EBC8
 * @implements B4ED:09ED:0013:0001
 * @implements B4ED:0A00:0013:9139
 * @implements B4ED:0A09:000A:8A0B
 * @implements B4ED:0A13:000A:B57F
 * @implements B4ED:0A1D:001B:9BB7
 * @implements B4ED:0A38:0020:556A
 * @implements B4ED:0A58:0014:14B5
 * @implements B4ED:0A6C:0023:78F0
 * @implements B4ED:0A7F:0010:2CD1
 * @implements B4ED:0A8F:000F:896B
 * @implements B4ED:0A9E:0007:EF7C
 * @implements B4ED:0AA0:0005:8BCF
 *
 * Called From: B4ED:03B5:0015:B9E5
 * Called From: B4ED:041D:0009:7F9F
 * Called From: B4ED:05AB:0016:2DF9
 * Called From: B4ED:064F:000F:4273
 * Called From: B4ED:064F:0009:FEA3
 */
void f__B4ED_07B6_0013_1343()
{
l__07B6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8068));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x07C9); f__B4ED_075D_002B_59B5();
l__07C9:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8072);
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x805C);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x805A);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
		emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
		if (emu_al <= emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__07FA;
	}
l__07F7:
	goto l__0AA0;
l__07FA:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8074), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8074) != 0x0) goto l__0804;
	goto l__088A;
l__0804:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x806A), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x806A) == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ah = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x806A) = emu_ax;
	}
l__0817:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x806A);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x806A));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0887;
	emu_get_memory16(emu_ds, 0x00, 0x8074) = 0x0;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8072));
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x9) == 0x0) goto l__086B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__0864;
l__084C:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
	emu_ax = (int8)emu_al;
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x80AC));
	emu_get_memory8(emu_ds, emu_si, 0x8076) = emu_al;
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) {
		emu_get_memory8(emu_ds, emu_si, 0x8076) = 0x1;
	}
l__0863:
	emu_incw(&emu_si);
l__0864:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__084C;
	goto l__0887;
l__086B:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8076;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087E); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__087E:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = 0x1;
l__0887:
	goto l__0AA0;
l__088A:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x806A), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x806A) == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
		emu_ah = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x806A) = emu_ax;
	}
l__089D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x806A);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x806A));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__08AB;
	goto l__0AA0;
l__08AB:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x90);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08D7); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__08D7:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x8074) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x5), 0x55);
	if (emu_get_memory8(emu_es, emu_bx, 0x5) != 0x55) goto l__08F9;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	goto l__090D;
l__08F9:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
l__090D:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x091B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0916; emu_last_length = 0x000E; emu_last_crc = 0xCEAE;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__091B:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x0) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x4);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x4) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8062), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x8062) == 0xFFFF) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8072), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8072) == 0x0) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x0) goto l__0985;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8062);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8072));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0951); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0951:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x31C), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x31C) == 0x0) goto l__0983;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0978); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0978:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0980); f__B4ED_0BF4_001B_A3A9();
l__0980:
	emu_addw(&emu_sp, 0x6);
l__0983:
	goto l__09AE;
l__0985:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) goto l__09AE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x09A3); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__09A3:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09AB); f__B4ED_0BF4_001B_A3A9();
l__09AB:
	emu_addw(&emu_sp, 0x6);
l__09AE:
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x7), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x7) == 0x0) goto l__09ED;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x7);
	emu_ah = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__09E6;
l__09CE:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
	emu_ax = (int8)emu_al;
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x80AC));
	emu_get_memory8(emu_ds, emu_si, 0x8076) = emu_al;
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) {
		emu_get_memory8(emu_ds, emu_si, 0x8076) = 0x1;
	}
l__09E5:
	emu_incw(&emu_si);
l__09E6:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__09CE;
	goto l__0A09;
l__09ED:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8076;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A00); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A00:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = 0x1;
l__0A09:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A38) == 0xFFFF) goto l__0A13;
	goto l__0AA0;
l__0A13:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8072), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x8072) == 0x2) goto l__0A1D;
	goto l__0AA0;
l__0A1D:
	emu_ax = 0x21;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A38:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x112;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_ax = 0xBD;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2620;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A58:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0x0;
	emu_get_memory8(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0A7F;
l__0A6C:
	emu_movw(&emu_ax, emu_bp - 0x15);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_addb(&emu_al, 0xD7);
	emu_get_memory8(emu_ss, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0A7F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x6);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x6) goto l__0A6C;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x16);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; f__259E_0021_001A_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A8F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8066));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8064));
	emu_push(emu_cs); emu_push(0x0A9E); emu_cs = 0x2605; emu_Font_Select();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A9E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0AA0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0AA5_0010_6B85()
 *
 * @name f__B4ED_0AA5_0010_6B85
 * @implements B4ED:0AA5:0010:6B85 ()
 * @implements B4ED:0AB5:000A:21D5
 * @implements B4ED:0ABF:001C:4DFB
 * @implements B4ED:0AD4:0007:52A6
 * @implements B4ED:0ADB:0038:50FD
 * @implements B4ED:0AF9:001A:F677
 * @implements B4ED:0B13:0005:8F6E
 * @implements B4ED:0B18:0011:B6CD
 * @implements B4ED:0B29:000B:DF20
 * @implements B4ED:0B2C:0008:8E34
 * @implements B4ED:0B34:000B:C01D
 * @implements B4ED:0B3F:0020:1BA6
 * @implements B4ED:0B5F:0010:125F
 * @implements B4ED:0B63:000C:18B8
 * @implements B4ED:0B68:0007:F468
 * @implements B4ED:0B6F:0004:FDF9
 * @implements B4ED:0B73:0020:F173
 * @implements B4ED:0B93:001C:12CF
 * @implements B4ED:0B98:0017:BCFF
 * @implements B4ED:0B99:0016:BC73
 * @implements B4ED:0B9E:0011:D835
 * @implements B4ED:0BAF:0017:53DB
 * @implements B4ED:0BC6:0008:97B0
 * @implements B4ED:0BC9:0005:3538
 * @implements B4ED:0BCE:0006:F7CE
 *
 * Called From: B4ED:03DD:000C:7044
 * Called From: B4ED:0608:0008:0927
 * Called From: B4ED:06ED:0015:4210
 */
void f__B4ED_0AA5_0010_6B85()
{
l__0AA5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_cs); emu_push(0x0AB5); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0470();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0AB5:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80AE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x80AE) != 0x0) goto l__0ABF;
	goto l__0BC9;
l__0ABF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x806E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x806C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0ADB;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0ADB;
	}
l__0AD4:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0ADB;
	goto l__0BC9;
l__0ADB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x7);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x806E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x806C) = emu_dx;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x80AC));
	if (emu_get_memory16(emu_ds, 0x00, 0x80AC) != 0) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) goto l__0B34;
	}
l__0AF9:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80AE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x80AE) != 0x1) goto l__0B18;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B13); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0B13:
	emu_addw(&emu_sp, 0xA);
	goto l__0B2C;
l__0B18:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B29); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0B29:
	emu_addw(&emu_sp, 0x8);
l__0B2C:
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x0;
	goto l__0B9E;
l__0B34:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80AE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x80AE) != 0x1) goto l__0B6F;
	emu_xorw(&emu_si, emu_si);
	goto l__0B68;
l__0B3F:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8076);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8088);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0B5F;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	goto l__0B63;
l__0B5F:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
l__0B63:
	emu_get_memory8(emu_ds, emu_si, 0x8088) = emu_al;
	emu_incw(&emu_si);
l__0B68:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__0B3F;
	goto l__0B9E;
l__0B6F:
	emu_xorw(&emu_si, emu_si);
	goto l__0B99;
l__0B73:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8088);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8076);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) <= (int16)0x0) goto l__0B93;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_ds, emu_si, 0x8088) = emu_al;
	goto l__0B98;
l__0B93:
	emu_get_memory8(emu_ds, emu_si, 0x8088) = 0x0;
l__0B98:
	emu_incw(&emu_si);
l__0B99:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__0B73;
l__0B9E:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0BC9;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_FFBA();
l__0BAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xDD;
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0BC6); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0BC6:
	emu_addw(&emu_sp, 0x8);
l__0BC9:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x80AE);
	goto l__0BCE;
l__0BCE:
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
 * Decompiled function f__B4ED_0BD4_001B_FFBA()
 *
 * @name f__B4ED_0BD4_001B_FFBA
 * @implements B4ED:0BD4:001B:FFBA ()
 * @implements B4ED:0BEF:0005:60C3
 *
 * Called From: B4ED:03EB:000E:4927
 * Called From: B4ED:06A6:0010:3DF7
 * Called From: B4ED:06FB:000E:F48E
 * Called From: B4ED:0BAC:0011:D835
 * Called From: B4ED:0BAC:001C:12CF
 * Called From: B4ED:0BAC:0017:BCFF
 */
void f__B4ED_0BD4_001B_FFBA()
{
l__0BD4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x285);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BEF); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0BEF:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0BF4_001B_A3A9()
 *
 * @name f__B4ED_0BF4_001B_A3A9
 * @implements B4ED:0BF4:001B:A3A9 ()
 * @implements B4ED:0C0F:0017:23CA
 * @implements B4ED:0C26:002D:EEC9
 * @implements B4ED:0C29:002A:12B1
 * @implements B4ED:0C3E:0015:D153
 * @implements B4ED:0C53:0025:0CBC
 * @implements B4ED:0C5D:001B:FAE7
 * @implements B4ED:0C78:002B:3DD8
 * @implements B4ED:0CA3:0012:1689
 * @implements B4ED:0CB0:0005:8BCF
 *
 * Called From: B4ED:097D:0008:E138
 * Called From: B4ED:09A8:0008:A137
 */
void f__B4ED_0BF4_001B_A3A9()
{
l__0BF4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C0F); f__B4ED_0CB5_0015_3E7D();
l__0C0F:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0C29;
l__0C26:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__0C29:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
		emu_cmpb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x264A));
		if (emu_al != emu_get_memory8(emu_ds, 0x00, 0x264A)) goto l__0C26;
	}
l__0C3E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0C53;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0C5D;
l__0C53:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
l__0C5D:
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0C78:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0CB0;
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0CA3:
	emu_addw(&emu_sp, 0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xD;
l__0CB0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0CB5_0015_3E7D()
 *
 * @name f__B4ED_0CB5_0015_3E7D
 * @implements B4ED:0CB5:0015:3E7D ()
 * @implements B4ED:0CCA:0018:4398
 * @implements B4ED:0CE2:0024:596B
 * @implements B4ED:0CF4:0012:9FA9
 *
 * Called From: B4ED:0C0C:001B:A3A9
 */
void f__B4ED_0CB5_0015_3E7D()
{
l__0CB5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CBE; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CC6; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; }
	goto l__0CF4;
l__0CCA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xE1);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xE1) goto l__0CE2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x1;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__0CF4;
l__0CE2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
l__0CF4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0CCA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
