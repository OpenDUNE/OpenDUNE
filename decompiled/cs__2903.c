/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2903_00CA_0015_756E()
 *
 * @name f__2903_00CA_0015_756E
 * @implements 2903:00CA:0015:756E ()
 * @implements 2903:00DB:0004:C672
 *
 * Called From: 07D4:18FF:000B:8253
 */
void f__2903_00CA_0015_756E()
{
l__00CA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) {
		emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_lodsw(emu_ds);
	}
l__00DB:
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_DrawSprite()
 *
 * @name emu_GUI_DrawSprite
 * @implements 2903:0158:001A:2931 ()
 * @implements 2903:0172:00B0:617E
 * @implements 2903:0180:00A2:7DFA
 * @implements 2903:0196:008C:28BE
 * @implements 2903:01B2:0070:C08B
 * @implements 2903:01B8:006A:9B16
 * @implements 2903:01EC:0036:14C5
 * @implements 2903:01FD:0025:A30E
 * @implements 2903:020D:0015:50E3
 * @implements 2903:0222:0041:BA21
 * @implements 2903:0227:003C:4DE6
 * @implements 2903:0263:0060:2C9A
 * @implements 2903:0286:003D:3E37
 * @implements 2903:029E:0025:6B18
 * @implements 2903:02C3:002A:DF7C
 * @implements 2903:02D1:001C:D95B
 * @implements 2903:02ED:0054:FC7A
 * @implements 2903:02FB:0046:75BF
 * @implements 2903:031B:0026:C426
 * @implements 2903:0325:001C:850F
 * @implements 2903:0341:0018:4AE8
 * @implements 2903:034A:000F:6AD7
 * @implements 2903:0359:0013:7287
 * @implements 2903:0362:000A:8999
 * @implements 2903:036C:001B:6CB6
 * @implements 2903:0371:0016:7D40
 * @implements 2903:0387:0043:3750
 * @implements 2903:03AE:001C:5777
 * @implements 2903:03BB:000F:9DD4
 * @implements 2903:03CA:0065:0A6F
 * @implements 2903:03D3:005C:6B02
 * @implements 2903:03EC:0043:4B28
 * @implements 2903:040A:0025:90A0
 * @implements 2903:042F:0003:1D14
 * @implements 2903:0432:0072:D3F8
 * @implements 2903:044D:0057:4D65
 * @implements 2903:0478:002C:6AED
 * @implements 2903:049B:0009:5066
 * @implements 2903:04A4:0018:7352
 * @implements 2903:04BC:0002:B33A
 * @implements 2903:04BE:0016:C1E2
 * @implements 2903:04C4:0010:92CB
 * @implements 2903:04D4:000E:82DD
 * @implements 2903:04E2:0008:5672
 * @implements 2903:04EA:0018:6F98
 * @implements 2903:0502:000C:D968
 *
 * Called From: 07D4:06C5:0028:D31F
 * Called From: 07D4:0709:0028:D31F
 * Called From: 07D4:074D:0028:D31F
 * Called From: 07D4:07A9:002E:9990
 * Called From: 07D4:0BAD:0031:A814
 * Called From: 07D4:0BAD:0042:98CD
 * Called From: 07D4:0C82:0046:7ED9
 * Called From: 07D4:0DA6:0036:17D1
 * Called From: 07D4:0DFE:0031:A9D0
 * Called From: 07D4:0DFE:0055:A271
 * Called From: 07D4:0DFE:0058:68F9
 * Called From: 07D4:0E39:0038:77DF
 * Called From: 07D4:0E39:003B:26C8
 * Called From: 07D4:0F95:002B:0C2A
 * Called From: 07D4:11FF:0049:B9BB
 * Called From: 07D4:1238:0025:37A1
 * Called From: 07D4:1238:0036:A4AC
 * Called From: 07D4:188B:0069:7F32
 * Called From: 07D4:188B:006E:C38D
 * Called From: 0AEC:0931:0039:D31B
 * Called From: 0AEC:09CB:0031:D7BE
 * Called From: 0AEC:0A79:0043:91CA
 * Called From: 0AEC:0DB0:0036:9D34
 * Called From: 10E4:03E7:0038:D51C
 * Called From: 10E4:0812:0026:6E79
 * Called From: 10E4:0812:0030:A563
 * Called From: 10E4:0812:003A:4A32
 * Called From: 10E4:08B1:0032:0FD7
 * Called From: 10E4:090D:003F:34F2
 * Called From: 10E4:090D:0035:C61C
 * Called From: 10E4:0940:002E:FA57
 * Called From: 10E4:13A4:0033:5882
 * Called From: 10E4:13F4:0029:203C
 * Called From: 10E4:1879:0043:1DB0
 * Called From: 10E4:211E:0028:4959
 * Called From: 2427:0069:002C:A9C9
 * Called From: 2B6C:0124:001F:F77F
 * Called From: B491:0552:000D:5F75
 * Called From: B495:0955:002E:7A31
 * Called From: B495:09EC:002B:80B3
 * Called From: B495:1023:005C:8468
 * Called From: B495:1045:001D:3294
 * Called From: B495:10E9:005C:046A
 * Called From: B495:110B:001D:B296
 * Called From: B495:12D1:0028:4959
 * Called From: B495:1454:004D:AD7F
 * Called From: B495:148B:0032:F13D
 * Called From: B4A2:08E0:0020:E97F
 * Called From: B4A2:08E0:0023:FD2E
 * Called From: B4DA:03EC:0023:B227
 * Called From: B4DA:0544:0023:B2A5
 * Called From: B4DA:06B0:0023:B2A5
 * Called From: B4DA:0A6F:0023:B323
 * Called From: B4DA:0AAE:0025:4AC8
 * Called From: B503:070C:000E:6448
 * Called From: B503:0A7C:002D:25DF
 * Called From: B503:0AED:000E:6448
 * Called From: B503:0EAC:0039:5737
 */
void emu_GUI_DrawSprite()
{
l__0158:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x44);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_es;
	emu_addw(&emu_ax, emu_di);
	if (!emu_flags.zf) goto l__0172;
	goto l__0502;
l__0172:
	emu_get_memory16(emu_ss, emu_bp, -0x40) = emu_ds;
	emu_testb(&emu_get_memory8(emu_es, emu_di, 0x0), 0x1);
	if ((emu_get_memory8(emu_es, emu_di, 0x0) & 0x1) != 0) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	}
l__0180:
	emu_di = 0x2;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2000) != 0) {
		emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ss, emu_bp + emu_di, 0x12));
		emu_get_memory16(emu_ss, emu_bp, -0x3E) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x3C) = emu_es;
		emu_addw(&emu_di, 0x4);
	}
l__0196:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x100) == 0) goto l__01B8;
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ss, emu_bp + emu_di, 0x12));
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_es;
	emu_ax = emu_get_memory16(emu_ss, emu_bp + emu_di, 0x16);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	}
l__01B2:
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_addw(&emu_di, 0x6);
l__01B8:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x200) != 0) {
		emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x5E));
		emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x5E));
		emu_andw(&emu_get_memory16(emu_cs, 0x00, 0x5E), 0xF);
		emu_bx = 0x60;
		emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x5E));
		emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
		emu_get_memory16(emu_cs, 0x00, 0x70) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x74) = 0x0;
		emu_get_memory16(emu_cs, 0x00, 0x72) = 0x100;
	}
l__01EC:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x1000) != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp + emu_di, 0x12);
		emu_get_memory16(emu_cs, 0x00, 0x72) = emu_ax;
		emu_addw(&emu_di, 0x2);
	}
l__01FD:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x800) != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp + emu_di, 0x12);
		emu_get_memory8(emu_ss, emu_bp, -0x18) = emu_al;
		emu_addw(&emu_di, 0x2);
	}
l__020D:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x4) == 0) goto l__0222;
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ss, emu_bp + emu_di, 0x12));
	emu_get_memory16(emu_ss, emu_bp, -0x30) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x32) = emu_es;
	emu_addw(&emu_di, 0x4);
	goto l__0227;
l__0222:
	emu_get_memory16(emu_ss, emu_bp, -0x32) = 0x100;
l__0227:
	emu_get_memory16(emu_ss, emu_bp, -0x34) = 0x0;
	emu_xorw(&emu_bx, emu_bx);
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0x12);
	emu_shlb(&emu_bl, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x1E);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x2E);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_bl = emu_get_memory8(emu_ss, emu_bp,  0x13);
	emu_andb(&emu_bl, 0xF);
	emu_shlb(&emu_bl, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x3E);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0263); emu_cs = 0x252E; emu_Memory_GetBlock2();
l__0263:
	emu_pop(&emu_ax);
	emu_es = emu_dx;
	emu_xorw(&emu_di, emu_di);
	emu_si = 0x4062;
	emu_cl = 0x4;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_cl = 0x3;
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_di, emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x4000) == 0) {
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax);
	}
l__0286:
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x4);
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x4000) != 0) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax);
	}
l__029E:
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x4) == 0) goto l__02C3;
	emu_mulw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_al = emu_ah;
	emu_ah = emu_dl;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02C3;
	goto l__0502;
l__02C3:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x8000) != 0) {
		emu_dx = emu_ax;
		emu_shrw(&emu_dx, 0x1);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx);
	}
l__02D1:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lodsw(emu_ds);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x4) == 0) goto l__02ED;
	emu_mulw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_al = emu_ah;
	emu_ah = emu_dl;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02ED;
	goto l__0502;
l__02ED:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x8000) != 0) {
		emu_dx = emu_ax;
		emu_shrw(&emu_dx, 0x1);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx);
	}
l__02FB:
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_addw(&emu_si, 0x3);
	emu_lodsw(emu_ds);
	emu_bx = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x10) & 0x1) != 0) {
		emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
		if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2000) == 0) {
			emu_get_memory16(emu_ss, emu_bp, -0x3E) = emu_si;
			emu_get_memory16(emu_ss, emu_bp, -0x3C) = emu_ds;
		}
	}
l__031B:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x400) != 0) {
		emu_addw(&emu_si, 0x10);
	}
l__0325:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x10) & 0x2) != 0) goto l__034A;
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx);
	emu_bx = emu_ds;
	emu_ds = emu_get_memory16(emu_ss, emu_bp, -0x40);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; emu_Format80_Decode();
l__0341:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
l__034A:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2) != 0) goto l__0359;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	goto l__0362;
l__0359:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
l__0362:
	if (!emu_flags.sf) goto l__03BB;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__036C;
	goto l__0502;
l__036C:
	emu_negw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_ax;
l__0371:
	emu_get_memory16(emu_ss, emu_bp, -0x42) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_si;
	emu_get_memory16(emu_ss, emu_bp, -0x36) = emu_ds;
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_cx;
	emu_xorw(&emu_dx, emu_dx);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x0387);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0384; emu_last_length = 0x0016; emu_last_crc = 0x7D40;
			emu_call();
			return;
	}
l__0387:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x32);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x34) & 0xFF00) == 0) goto l__0371;
	emu_xorw(&emu_ax, emu_ax);
	emu_xchgb(&emu_get_memory8(emu_ss, emu_bp, -0x33), &emu_al);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0371;
	if (emu_flags.sf) {
		emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x38));
		emu_xorb(&emu_al, emu_al);
		emu_negw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_get_memory16(emu_ss, emu_bp, -0x2A));
		emu_ah = emu_get_memory8(emu_ss, emu_bp, -0x2A);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax);
	}
l__03AE:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2) == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_ax;
	}
l__03BB:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2) != 0) goto l__03CA;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	goto l__03D3;
l__03CA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
l__03D3:
	if (emu_flags.sf) goto l__042F;
	if (emu_flags.zf) goto l__042F;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x12)) {
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
		if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2) != 0) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
			emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_ax;
		}
	}
l__03EC:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.sf) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
		emu_negw(&emu_ax, emu_ax);
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
		if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__042F;
		emu_xorw(&emu_ax, emu_ax);
		emu_get_memory16(emu_ss, emu_bp,  0xC) = emu_ax;
	}
l__040A:
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) goto l__042F;
	if (emu_flags.zf) goto l__042F;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x14)) {
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
		emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
		emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	}
	goto l__0432;
l__042F:
	goto l__0502;
l__0432:
	emu_get_memory16(emu_ss, emu_bp, -0x3A) = 0x140;
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ds = emu_get_memory16(emu_ss, emu_bp, -0x40);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x2) != 0) {
		emu_negw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_get_memory16(emu_ss, emu_bp, -0x3A));
		emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_decw(&emu_bx);
	}
l__044D:
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x66EC));
	emu_ax = emu_get_memory16(emu_ds, emu_bx + emu_si, 0x0);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_di, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_di;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x1) != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
		emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x20), &emu_ax);
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_decw(&emu_ax);
		emu_addw(&emu_di, emu_ax);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	}
l__0478:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if ((emu_get_memory16(emu_ss, emu_bp,  0x12) & 0x4) != 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
		emu_xorw(&emu_dx, emu_dx);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
		emu_get_memory16(emu_ss, emu_bp, -0x44) = emu_ax;
		emu_xchgb(&emu_ah, &emu_dl);
		emu_xchgb(&emu_al, &emu_ah);
		emu_divw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x30));
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
		emu_negw(&emu_dx, emu_dx);
		emu_get_memory16(emu_ss, emu_bp, -0x42) = emu_dx;
	}
l__049B:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x34) & 0xFF00) == 0) goto l__04A4;
	goto l__04C4;
l__04A4:
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x32);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x34) & 0xFF00) != 0) goto l__04BE;
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_cx;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x04BC);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04B9; emu_last_length = 0x0018; emu_last_crc = 0x7352;
			emu_call();
			return;
	}
l__04BC:
	goto l__04A4;
l__04BE:
	emu_get_memory16(emu_ss, emu_bp, -0x38) = emu_si;
	emu_get_memory16(emu_ss, emu_bp, -0x36) = emu_ds;
l__04C4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x1E);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x04D4);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04D1; emu_last_length = 0x0010; emu_last_crc = 0x92CB;
			emu_call();
			return;
	}
l__04D4:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) == 0x0) goto l__04EA;
	emu_addw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_push(0x04E2);
		switch (emu_ip) {
			case 0x0530: f__2903_0530_0008_CF42(); break;
			case 0x0569: f__2903_0569_000A_C3B0(); break;
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x2903; emu_last_ip = 0x04DF; emu_last_length = 0x000E; emu_last_crc = 0x82DD;
				emu_call();
				return;
		}
	}
l__04E2:
	emu_addw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_cx == 0) goto l__04EA;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x04EA);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04E7; emu_last_length = 0x0008; emu_last_crc = 0x5672;
			emu_call();
			return;
	}
l__04EA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x3A);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x22);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0) goto l__0502;
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x33));
	if (emu_get_memory8(emu_ss, emu_bp, -0x33) == 0) goto l__04A4;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x38));
	goto l__04C4;
l__0502:
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
 * Decompiled function f__2903_050E_0022_419A()
 *
 * @name f__2903_050E_0022_419A
 * @implements 2903:050E:0022:419A ()
 * @implements 2903:0517:0019:CB65
 * @implements 2903:051F:0011:4D58
 * @implements 2903:0528:0008:C0D2
 *
 * Called From: 2903:0384:001B:6CB6
 * Called From: 2903:0384:0016:7D40
 * Called From: 2903:04B9:0018:7352
 * Called From: 2903:04D1:0016:C1E2
 * Called From: 2903:04D1:0010:92CB
 * Called From: 2903:04E7:0008:5672
 */
void f__2903_050E_0022_419A()
{
l__050E:
	emu_push(emu_es);
	emu_bx = emu_ds;
	emu_es = emu_bx;
	emu_xchgw(&emu_di, &emu_si);
	if (emu_cx == 0) goto l__0528;
l__0517:
	emu_xorw(&emu_ax, emu_ax);
	emu_repne_scasb();
	if (!emu_flags.zf) {
		if (emu_cx == 0) goto l__0528;
	}
l__051F:
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_incw(&emu_cx);
	emu_subw(&emu_cx, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0517;
l__0528:
	emu_ds = emu_bx;
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0530_0008_CF42()
 *
 * @name f__2903_0530_0008_CF42
 * @implements 2903:0530:0008:CF42 ()
 * @implements 2903:0538:0005:FF2C
 * @implements 2903:053D:0008:A30A
 * @implements 2903:0544:0001:6180
 *
 * Called From: 2903:04DF:000E:82DD
 * Called From: 2903:0539:0005:FF2C
 * Called From: 2903:0542:0008:A30A
 */
void f__2903_0530_0008_CF42()
{
l__0530:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__053D;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0538);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_5083(); break;
		case 0x0584: f__2903_0584_0015_8493(); break;
		case 0x0599: f__2903_0599_0017_FD2B(); break;
		case 0x05C8: f__2903_05C8_0018_6BB5(); break;
		case 0x05E0: f__2903_05E0_000A_A47A(); break;
		case 0x05EA: f__2903_05EA_001D_06CA(); break;
		case 0x061F: f__2903_061F_0015_4925(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0535; emu_last_length = 0x0008; emu_last_crc = 0xCF42;
			emu_call();
			return;
	}
l__0538:
	emu_incw(&emu_di);
	if (--emu_cx != 0) goto l__0530;
	goto l__0544;
l__053D:
	emu_lodsb(emu_ds);
	emu_addw(&emu_di, emu_ax);
	emu_subw(&emu_cx, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0530;
l__0544:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0545_0024_06E5()
 *
 * @name f__2903_0545_0024_06E5
 * @implements 2903:0545:0024:06E5 ()
 * @implements 2903:054E:001B:2459
 * @implements 2903:0556:0013:45D6
 * @implements 2903:055F:000A:E6B4
 *
 * Called From: 2903:0384:001B:6CB6
 * Called From: 2903:0384:0016:7D40
 * Called From: 2903:04B9:0018:7352
 * Called From: 2903:04D1:0016:C1E2
 * Called From: 2903:04D1:0010:92CB
 * Called From: 2903:04E7:0008:5672
 */
void f__2903_0545_0024_06E5()
{
l__0545:
	emu_push(emu_es);
	emu_ax = emu_ds;
	emu_es = emu_ax;
	emu_xchgw(&emu_di, &emu_si);
	if (emu_cx == 0) goto l__055F;
l__054E:
	emu_xorw(&emu_ax, emu_ax);
	emu_repne_scasb();
	if (!emu_flags.zf) {
		if (emu_cx == 0) goto l__055F;
	}
l__0556:
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_incw(&emu_di);
	emu_incw(&emu_cx);
	emu_subw(&emu_cx, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__054E;
l__055F:
	emu_ax = emu_es;
	emu_ds = emu_ax;
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0569_000A_C3B0()
 *
 * @name f__2903_0569_000A_C3B0
 * @implements 2903:0569:000A:C3B0 ()
 * @implements 2903:056B:0008:CF42
 * @implements 2903:0573:0005:FF6C
 * @implements 2903:0578:0008:A35A
 * @implements 2903:057F:0001:6180
 *
 * Called From: 2903:04DF:000E:82DD
 */
void f__2903_0569_000A_C3B0()
{
l__0569:
	emu_xorb(&emu_ah, emu_ah);
l__056B:
	emu_lodsb(emu_ds);
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) goto l__0578;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0573);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_5083(); break;
		case 0x05C8: f__2903_05C8_0018_6BB5(); break;
		case 0x05E0: f__2903_05E0_000A_A47A(); break;
		case 0x061F: f__2903_061F_0015_4925(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0570; emu_last_length = 0x0008; emu_last_crc = 0xCF42;
			emu_call();
			return;
	}
l__0573:
	emu_decw(&emu_di);
	if (--emu_cx != 0) goto l__056B;
	goto l__057F;
l__0578:
	emu_lodsb(emu_ds);
	emu_subw(&emu_di, emu_ax);
	emu_subw(&emu_cx, emu_ax);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__056B;
l__057F:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0580_0004_5083()
 *
 * @name f__2903_0580_0004_5083
 * @implements 2903:0580:0004:5083 ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_0580_0004_5083()
{
l__0580:
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0584_0015_8493()
 *
 * @name f__2903_0584_0015_8493
 * @implements 2903:0584:0015:8493 ()
 * @implements 2903:058E:000B:34EF
 *
 * Called From: 2903:0535:0008:CF42
 */
void f__2903_0584_0015_8493()
{
l__0584:
	emu_push(emu_ds);
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_cx;
	emu_lfp(&emu_ds, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x28);
l__058E:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0);
	if (--emu_cx != 0) goto l__058E;
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x2A);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0599_0017_FD2B()
 *
 * @name f__2903_0599_0017_FD2B
 * @implements 2903:0599:0017:FD2B ()
 * @implements 2903:05B0:0018:F32C
 *
 * Called From: 2903:0535:0008:CF42
 */
void f__2903_0599_0017_FD2B()
{
l__0599:
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x74);
	emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x72));
	emu_orb(&emu_bh, emu_bh);
	if (emu_bh != 0) goto l__05B0;
	emu_get_memory16(emu_cs, 0x00, 0x74) = emu_bx;
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__05B0:
	emu_xorb(&emu_bh, emu_bh);
	emu_get_memory16(emu_cs, 0x00, 0x74) = emu_bx;
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_subw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05C8_0018_6BB5()
 *
 * @name f__2903_05C8_0018_6BB5
 * @implements 2903:05C8:0018:6BB5 ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_05C8_0018_6BB5()
{
l__05C8:
	emu_push(emu_ds);
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_cx;
	emu_lfp(&emu_ds, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x05D5; emu_last_cs = 0x2903; emu_last_ip = 0x05D6; emu_last_length = 0x0018; emu_last_crc = 0x6BB5; emu_call(); }
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x2A);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05E0_000A_A47A()
 *
 * @name f__2903_05E0_000A_A47A
 * @implements 2903:05E0:000A:A47A ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_05E0_000A_A47A()
{
l__05E0:
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0);
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05EA_001D_06CA()
 *
 * @name f__2903_05EA_001D_06CA
 * @implements 2903:05EA:001D:06CA ()
 * @implements 2903:0607:0018:F32C
 *
 * Called From: 2903:0535:0008:CF42
 */
void f__2903_05EA_001D_06CA()
{
l__05EA:
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x74);
	emu_addw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x72));
	emu_orb(&emu_bh, emu_bh);
	if (emu_bh != 0) goto l__0607;
	emu_get_memory16(emu_cs, 0x00, 0x74) = emu_bx;
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0);
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__0607:
	emu_xorb(&emu_bh, emu_bh);
	emu_get_memory16(emu_cs, 0x00, 0x74) = emu_bx;
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	emu_subw(&emu_di, emu_get_memory16(emu_cs, 0x00, 0x70));
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_061F_0015_4925()
 *
 * @name f__2903_061F_0015_4925
 * @implements 2903:061F:0015:4925 ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_061F_0015_4925()
{
l__061F:
	emu_push(emu_ds);
	emu_push(emu_cx);
	emu_lfp(&emu_ds, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0);
	emu_lfp(&emu_ds, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_al, 0x0);
	if (--emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x062B; emu_last_cs = 0x2903; emu_last_ip = 0x062C; emu_last_length = 0x0015; emu_last_crc = 0x4925; emu_call(); }
	emu_get_memory8(emu_es, emu_di, 0x0) = emu_al;
	emu_pop(&emu_cx);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_090A_0019_4354()
 *
 * @name f__2903_090A_0019_4354
 * @implements 2903:090A:0019:4354 ()
 *
 * Called From: B491:0AB1:0019:12A9
 * Called From: B4B8:194F:001B:556A
 */
void f__2903_090A_0019_4354()
{
l__090A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x6F1C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x6F18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ds, 0x00, 0x6F1A) = emu_ax;
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
