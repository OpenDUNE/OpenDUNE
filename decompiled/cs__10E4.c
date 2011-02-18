/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__10E4_0675_0026_F126()
 *
 * @name f__10E4_0675_0026_F126
 * @implements 10E4:0675:0026:F126 ()
 * @implements 10E4:0692:0009:515B
 * @implements 10E4:069B:001C:0810
 * @implements 10E4:06B7:003E:4998
 * @implements 10E4:06D8:001D:8549
 * @implements 10E4:06F5:0009:542B
 * @implements 10E4:06FE:000D:FBBC
 * @implements 10E4:070B:002B:686F
 * @implements 10E4:072B:000B:CFDE
 * @implements 10E4:0736:000E:55D3
 * @implements 10E4:0738:000C:67F9
 * @implements 10E4:0744:000A:880A
 * @implements 10E4:0746:0008:AAA9
 * @implements 10E4:074E:0021:B9CA
 * @implements 10E4:0754:001B:A694
 * @implements 10E4:0766:0009:E680
 * @implements 10E4:076F:0009:CFBF
 * @implements 10E4:0772:0006:FAE3
 * @implements 10E4:0778:0065:1C92
 * @implements 10E4:0779:0064:1E5A
 * @implements 10E4:078D:0050:5136
 * @implements 10E4:07A3:003A:3E89
 * @implements 10E4:07AF:002E:F295
 * @implements 10E4:07BB:0022:01B5
 * @implements 10E4:07DD:003A:4A32
 * @implements 10E4:07E0:0037:82D1
 * @implements 10E4:07E7:0030:A563
 * @implements 10E4:07F1:0026:6E79
 * @implements 10E4:0817:001B:C66D
 * @implements 10E4:0832:0015:9380
 * @implements 10E4:0847:0008:C601
 * @implements 10E4:084F:0020:8382
 * @implements 10E4:086F:0015:8F49
 * @implements 10E4:0879:000B:3482
 * @implements 10E4:0884:0032:0FD7
 * @implements 10E4:08B6:001D:D213
 * @implements 10E4:08D3:003F:34F2
 * @implements 10E4:08DD:0035:C61C
 * @implements 10E4:0912:0005:9D6E
 * @implements 10E4:0915:0002:D8BA
 * @implements 10E4:0917:002E:FA57
 * @implements 10E4:0945:000C:4082
 * @implements 10E4:0948:0009:CB2A
 * @implements 10E4:0949:0008:4B09
 * @implements 10E4:0951:0012:67CD
 * @implements 10E4:0963:0028:2D48
 * @implements 10E4:098B:0008:C54E
 * @implements 10E4:0993:0008:6999
 * @implements 10E4:099B:0009:08B8
 * @implements 10E4:09A4:0007:F77C
 * @implements 10E4:09A5:0006:F7CE
 *
 * Called From: 0642:03B6:000D:DD0B
 * Called From: 10E4:2252:0009:919C
 * Called From: 10E4:2252:000C:BA1C
 * Called From: 10E4:2280:000D:91AA
 * Called From: B495:0067:000C:1509
 * Called From: B495:00AC:0014:3443
 * Called From: B495:0368:0010:C27A
 * Called From: B495:0368:0045:3C88
 * Called From: B495:0794:000C:1509
 * Called From: B495:1587:000D:D634
 */
void f__10E4_0675_0026_F126()
{
l__0675:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3642);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3640);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__069B;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__069B;
	}
l__0692:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__069B;
	goto l__09A5;
l__069B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3642) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3640) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x06B7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__06B7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x2) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ds, 0x00, 0x38B6) = emu_ax;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ds, 0x00, 0x363C) = emu_ax;
	}
l__06D8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__06F5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x363C)) goto l__06F5;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x363E) != 0x0) goto l__06F5;
	goto l__09A5;
l__06F5:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__06FE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x070B); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
l__070B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363C));
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__074E;
	emu_cl = 0x2;
	emu_sarw(&emu_si, emu_cl);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_si = 0x1;
	}
l__072B:
	emu_cmpw(&emu_si, 0x80);
	if ((int16)emu_si <= (int16)0x80) goto l__0736;
	emu_ax = 0x80;
	goto l__0738;
l__0736:
	emu_ax = emu_si;
l__0738:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFF80);
	if ((int16)emu_si >= (int16)0xFF80) goto l__0744;
	emu_ax = 0xFF80;
	goto l__0746;
l__0744:
	emu_ax = emu_si;
l__0746:
	emu_si = emu_ax;
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363E), emu_si);
	goto l__0754;
l__074E:
	emu_get_memory16(emu_ds, 0x00, 0x363E) = 0x0;
l__0754:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0779;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) <= (int16)0x7) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF9);
		if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) >= (int16)0xFFF9) goto l__0779;
	}
l__0766:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__076F;
	emu_ax = 0x34;
	goto l__0772;
l__076F:
	emu_ax = 0x35;
l__0772:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0778); emu_cs = 0x1DD7; emu_Driver_Sound_Play_Wrapper();
l__0778:
	emu_pop(&emu_cx);
l__0779:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) < (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363C), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x363C) == 0x0) {
			emu_get_memory16(emu_ds, 0x00, 0x363E) = 0x0;
		}
	}
l__078D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x363E);
	emu_cl = 0x3;
	emu_sarw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x363C), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) < (int16)0x0) {
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x363C));
	}
l__07A3:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) > (int16)0x0) {
		emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x7);
	}
l__07AF:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) < (int16)0x0) {
		emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0xFFF8);
	}
l__07BB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x363C);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) >= (int16)0x0) goto l__07E7;
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) >= (int16)0x0) goto l__07DD;
	emu_xorw(&emu_ax, emu_ax);
	goto l__07E0;
l__07DD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
l__07E0:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x8);
l__07E7:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x363E) > (int16)0x0) {
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	}
l__07F1:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x472));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x470));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0817); emu_cs = 0x2903; emu_GUI_DrawSprite();
l__0817:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_get_memory16(emu_ds, 0x00, 0x38B6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ds);
	emu_ax = 0x3770;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0832); emu_cs = 0x01F7; emu_String_sprintf();
l__0832:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ds);
	emu_ax = 0x3770;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0847); emu_cs = 0x01F7; emu_String_sprintf();
l__0847:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_di, emu_di);
	goto l__0949;
l__084F:
	emu_ax = emu_di;
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (emu_get_memory8(emu_ss, emu_bp, -0x1) != 0x20) goto l__086F;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0xD;
	goto l__0879;
l__086F:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFDE);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
l__0879:
	emu_al = emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFF4);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC));
	if (emu_al != emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC)) goto l__0884;
	goto l__0917;
l__0884:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x2903; emu_GUI_DrawSprite();
l__08B6:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x363E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x363E) == 0x0) goto l__0915;
	emu_al = emu_get_memory8(emu_ss, emu_bp + emu_di, 0xFFEC);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = emu_al;
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (emu_get_memory8(emu_ss, emu_bp, -0x1) != 0x20) goto l__08D3;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0xD;
	goto l__08DD;
l__08D3:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFDE);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
l__08DD:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_addw(&emu_ax, 0x8);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x363E));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x2903; emu_GUI_DrawSprite();
l__0912:
	emu_addw(&emu_sp, 0xE);
l__0915:
	goto l__0948;
l__0917:
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x0945); emu_cs = 0x2903; emu_GUI_DrawSprite();
l__0945:
	emu_addw(&emu_sp, 0xE);
l__0948:
	emu_incw(&emu_di);
l__0949:
	emu_cmpw(&emu_di, 0x6);
	if ((int16)emu_di >= (int16)0x6) goto l__0951;
	goto l__084F;
l__0951:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C91));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x6C91)) goto l__0993;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0963); emu_cs = 0x2642; f__2642_0002_005E_87F6();
l__0963:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_subw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x098B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
l__098B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0993); emu_cs = 0x2642; f__2642_0069_0008_D517();
l__0993:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs); emu_push(0x099B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__099B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A4); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
l__09A4:
	emu_pop(&emu_cx);
l__09A5:
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
 * Decompiled function f__10E4_0D58_004B_FEF5()
 *
 * @name f__10E4_0D58_004B_FEF5
 * @implements 10E4:0D58:004B:FEF5 ()
 * @implements 10E4:0D82:0021:381A
 * @implements 10E4:0DA3:000D:E645
 * @implements 10E4:0DB3:0039:BC66
 * @implements 10E4:0DEC:0007:8446
 * @implements 10E4:0DF3:000E:ED31
 * @implements 10E4:0E01:0008:1934
 * @implements 10E4:0E04:0005:A136
 * @implements 10E4:0E3D:008B:FF4E
 * @implements 10E4:0E59:006F:6BD0
 * @implements 10E4:0E6D:005B:EF3E
 * @implements 10E4:0E7C:004C:0D2C
 * @implements 10E4:0E8B:003D:04DF
 * @implements 10E4:0EC8:0049:0BFB
 * @implements 10E4:0F11:0009:B39B
 *
 * Called From: 10E4:13CD:0015:2931
 */
void f__10E4_0D58_004B_FEF5()
{
l__0D58:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = 0x16;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x3A16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0xE) = emu_di;
	}
l__0D82:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D8D; emu_last_cs = 0x10E4; emu_last_ip = 0x0D84; emu_last_length = 0x0021; emu_last_crc = 0x381A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di >= (int16)emu_si) goto l__0DA3;
	emu_ax = emu_di;
	/* Unresolved jump */ emu_ip = 0x0DA5; emu_last_cs = 0x10E4; emu_last_ip = 0x0DA1; emu_last_length = 0x0021; emu_last_crc = 0x381A; emu_call();
l__0DA3:
	emu_ax = emu_si;
	emu_si = emu_ax;
	emu_cmpw(&emu_di, 0x1);
	if ((int16)emu_di <= (int16)0x1) { /* Unresolved jump */ emu_ip = 0x0DB0; emu_last_cs = 0x10E4; emu_last_ip = 0x0DAA; emu_last_length = 0x000D; emu_last_crc = 0xE645; emu_call(); return; }
	emu_ax = emu_di;
	goto l__0DB3;
l__0DB3:
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x0) { /* Unresolved jump */ emu_ip = 0x0E09; emu_last_cs = 0x10E4; emu_last_ip = 0x0DD1; emu_last_length = 0x0039; emu_last_crc = 0xBC66; emu_call(); return; }
	emu_ax = emu_di;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_cwd();
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_push(emu_dx);
	emu_cwd();
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
l__0DEC:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF3); emu_cs = 0x01F7; emu_Tools_Divd();
l__0DF3:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x1) goto l__0E01;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0E04;
l__0E01:
	emu_ax = 0x1;
l__0E04:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__0E3D;
l__0E3D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_di;
	emu_sarw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	}
l__0E59:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	}
l__0E6D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) {
			emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
		}
	}
l__0E7C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) {
			emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
		}
	}
l__0E8B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x8) == 0x0) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x10E4; emu_last_ip = 0x0E93; emu_last_length = 0x003D; emu_last_crc = 0x04DF; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EC8); emu_GUI_DrawBorder();
l__0EC8:
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) { /* Unresolved jump */ emu_ip = 0x0F14; emu_last_cs = 0x10E4; emu_last_ip = 0x0ECF; emu_last_length = 0x0049; emu_last_crc = 0x0BFB; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0F11);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x10E4; emu_last_ip = 0x0F0C; emu_last_length = 0x0049; emu_last_crc = 0x0BFB;
			emu_call();
			return;
	}
l__0F11:
	emu_addw(&emu_sp, 0xA);
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
 * Decompiled function f__10E4_2099_0012_A216()
 *
 * @name f__10E4_2099_0012_A216
 * @implements 10E4:2099:0012:A216 ()
 * @implements 10E4:20AB:0009:542B
 * @implements 10E4:20B4:0025:D60D
 * @implements 10E4:20D9:0022:8F4B
 * @implements 10E4:20FB:0028:4959
 * @implements 10E4:2123:0012:8D21
 * @implements 10E4:2135:000A:1679
 * @implements 10E4:213F:0009:311A
 * @implements 10E4:2148:0012:81F6
 * @implements 10E4:215A:000A:F8FD
 * @implements 10E4:2164:0013:8AD5
 * @implements 10E4:2177:000A:F8FD
 * @implements 10E4:2181:0015:A299
 * @implements 10E4:2196:0005:882E
 * @implements 10E4:219B:000B:C1F1
 * @implements 10E4:21A6:000D:DBFF
 * @implements 10E4:21B3:0023:8806
 * @implements 10E4:21B5:0021:C330
 * @implements 10E4:21D6:0005:8AAE
 * @implements 10E4:21DB:000F:0096
 * @implements 10E4:21EA:000E:5BF5
 * @implements 10E4:21F8:001C:86CA
 * @implements 10E4:21FA:001A:A351
 * @implements 10E4:2214:0006:0569
 * @implements 10E4:221A:0020:001D
 * @implements 10E4:223A:000F:6F2A
 * @implements 10E4:2249:000C:BA1C
 * @implements 10E4:224C:0009:919C
 * @implements 10E4:2255:0013:D274
 * @implements 10E4:2268:0008:1BE5
 * @implements 10E4:2270:0006:4A77
 * @implements 10E4:2276:000D:91AA
 * @implements 10E4:2283:0007:843A
 * @implements 10E4:228A:0006:F7CE
 *
 * Called From: B4E9:0170:0040:197F
 * Called From: B4E9:03FC:000E:D57A
 * Called From: B4F2:0311:0008:EA61
 */
void f__10E4_2099_0012_A216()
{
l__2099:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__20AB;
	emu_push(emu_si);
	/* Unresolved jump */ emu_ip = 0x20AF; emu_last_cs = 0x10E4; emu_last_ip = 0x20A9; emu_last_length = 0x0012; emu_last_crc = 0xA216; emu_call();
l__20AB:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20B4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__20B4:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3777;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20D9); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_Sprites_LoadImage();
l__20D9:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20FB); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
l__20FB:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC0;
	emu_push(emu_ax);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46E));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x46C));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2123); emu_cs = 0x2903; emu_GUI_DrawSprite();
l__2123:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x2135); emu_cs = 0x07D4; emu_Unknown_07D4_159A();
l__2135:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x213F); emu_cs = 0x07D4; emu_Unknown_07D4_0000();
l__213F:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2148); emu_GUI_Widget_ActionPanel_Draw();
l__2148:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x215A); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
l__215A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2164); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
l__2164:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x2177); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
l__2177:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2181); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
l__2181:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2196); emu_cs = 0x1082; emu_Structure_FindFirst();
l__2196:
	emu_addw(&emu_sp, 0x8);
	goto l__21B5;
l__219B:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x21A6); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
l__21A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x1082; emu_Structure_FindNext();
l__21B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__21B5:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__219B;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__21D6:
	emu_addw(&emu_sp, 0x8);
	goto l__21FA;
l__21DB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x21EA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_B4CD_01BF();
l__21EA:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21F8); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__21F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__21FA:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__21DB;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2270;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2214); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__2214:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x221A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
l__221A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x223A); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
l__223A:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B6) != 0xFFFF) goto l__2249;
	emu_ax = 0x2;
	goto l__224C;
l__2249:
	emu_ax = 0x1;
l__224C:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2255); f__10E4_0675_0026_F126();
l__2255:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x2268); emu_cs = 0x259E; f__259E_0006_0016_858A();
l__2268:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x2270); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
l__2270:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2276); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__2276:
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x2283); f__10E4_0675_0026_F126();
l__2283:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x228A); emu_cs = 0x29E8; emu_Input_History_Clear();
l__228A:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
