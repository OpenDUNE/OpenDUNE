/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__259E_0006_0016_858A()
 *
 * @name f__259E_0006_0016_858A
 * @implements 259E:0006:0016:858A ()
 * @implements 259E:001C:0005:60C3
 *
 * Called From: 10E4:2263:0013:D274
 * Called From: 1423:0408:0016:5986
 * Called From: B4B8:1D7F:0011:195A
 * Called From: B4B8:1FDE:0014:B1DF
 * Called From: B4B8:2188:0018:F01B
 * Called From: B4BE:0143:0014:8DDF
 * Called From: B4BE:020B:001A:F454
 * Called From: B4BE:0249:001A:F45B
 * Called From: B4BE:02B4:0014:0DFA
 * Called From: B4BE:02F4:001A:B479
 * Called From: B4BE:0355:0014:0DFA
 * Called From: B4BE:0395:0011:195A
 * Called From: B4BE:0395:001A:B479
 * Called From: B4DA:117C:0014:31C1
 * Called From: B4DA:11CE:0011:9942
 * Called From: B4ED:01DE:0014:B1F3
 * Called From: B4ED:03FC:0013:D256
 * Called From: B4ED:06B7:0013:6E51
 * Called From: B4ED:070C:0013:525F
 * Called From: B503:006A:0013:BF46
 * Called From: B503:0279:0014:B1CE
 * Called From: B503:0550:0012:7598
 * Called From: B511:0F2C:0011:9942
 * Called From: B511:1120:0014:B1CE
 * Called From: B511:11F6:0025:9022
 * Called From: B511:1447:000F:CDB2
 * Called From: B511:14E7:000F:CDB2
 */
void f__259E_0006_0016_858A()
{
l__0006:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x70A2);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x001C); f__259E_00B1_001C_4051();
	goto l__001C;
l__001C:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0021_001A_E253()
 *
 * @name f__259E_0021_001A_E253
 * @implements 259E:0021:001A:E253 ()
 * @implements 259E:003B:0005:6083
 *
 * Called From: 10E4:2001:0016:34AE
 * Called From: B4ED:0179:0023:78FA
 * Called From: B4ED:0A8A:0023:78F0
 */
void f__259E_0021_001A_E253()
{
l__0021:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66D0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66D2);
	emu_push(0x003B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61102: f__22A6_1102_004C_B069(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x259E; emu_last_ip = 0x0036; emu_last_length = 0x001A; emu_last_crc = 0xE253;
			emu_call();
			return;
	}
	goto l__003B;
l__003B:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0040_0015_5E4A()
 *
 * @name f__259E_0040_0015_5E4A
 * @implements 259E:0040:0015:5E4A ()
 * @implements 259E:0055:0005:6083
 *
 * Called From: 0642:05C2:0010:2CA3
 * Called From: 0642:06B9:000D:A409
 * Called From: 0642:06B9:0013:48D9
 * Called From: 0642:073A:000D:A409
 * Called From: 0642:073A:0013:43D9
 * Called From: 0C3A:17E2:000D:A409
 * Called From: 10E4:0469:0010:2CBB
 * Called From: 259E:0225:001E:04ED
 * Called From: 259E:0225:0017:E5A1
 * Called From: 259E:0225:0026:4520
 * Called From: 259E:0225:0028:CFAE
 * Called From: 25C4:03BF:0010:908E
 * Called From: B495:00E8:0010:2CBB
 * Called From: B4B8:185B:000E:A415
 * Called From: B4B8:186A:000F:9764
 * Called From: B4B8:1D9D:000D:A409
 * Called From: B4B8:1E08:000E:2564
 * Called From: B4B8:2274:000E:A56D
 * Called From: B4B8:2274:000D:A409
 * Called From: B4BE:00A9:0011:87E1
 * Called From: B4F2:0E0D:0010:2CBB
 * Called From: B4F2:0ED4:001D:B10D
 * Called From: B503:0573:000D:A409
 */
void f__259E_0040_0015_5E4A()
{
l__0040:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	goto l__0055;
l__0055:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_00B1_001C_4051()
 *
 * @name f__259E_00B1_001C_4051
 * @implements 259E:00B1:001C:4051 ()
 * @implements 259E:00CD:0015:D443
 * @implements 259E:00E2:0014:1303
 * @implements 259E:00FB:0009:30FE
 * @implements 259E:0104:0026:85EC
 * @implements 259E:012A:003A:029E
 * @implements 259E:012C:0038:203F
 * @implements 259E:0136:002E:0B37
 * @implements 259E:0137:002D:0A2F
 * @implements 259E:0157:000D:4ECC
 * @implements 259E:0164:004C:E7DA
 * @implements 259E:016D:0043:E83E
 * @implements 259E:017C:0034:B862
 * @implements 259E:018E:0022:79F4
 * @implements 259E:01B0:001C:3FC8
 * @implements 259E:01CC:0015:6837
 * @implements 259E:01E1:001F:7EB7
 * @implements 259E:01E3:001D:6BAA
 * @implements 259E:01EB:0015:E830
 * @implements 259E:0200:0028:CFAE
 * @implements 259E:0202:0026:4520
 * @implements 259E:020A:001E:04ED
 * @implements 259E:0211:0017:E5A1
 * @implements 259E:0212:0016:E52D
 * @implements 259E:0228:0004:5B1F
 * @implements 259E:022C:001C:7DA8
 * @implements 259E:023F:0009:2EAC
 * @implements 259E:0248:0006:F7CE
 *
 * Called From: 259E:0019:0016:858A
 */
void f__259E_00B1_001C_4051()
{
l__00B1:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x312);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00CA; emu_last_cs = 0x259E; emu_last_ip = 0x00C0; emu_last_length = 0x001C; emu_last_crc = 0x4051; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__00CD;
	goto l__0248;
l__00CD:
	emu_movw(&emu_ax, 0x300);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x312);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00E2); emu_cs = 0x01F7; emu_Tools_Memmove();
	goto l__00E2;
l__00E2:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C76), 0x3);
	if (emu_flags.zf) goto l__00FB;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00F6); f__259E_0040_0015_5E4A();
	/* Unresolved jump */ emu_ip = 0x00F6; emu_last_cs = 0x259E; emu_last_ip = 0x00F6; emu_last_length = 0x0014; emu_last_crc = 0x1303; emu_call();
l__00FB:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_xorw(&emu_si, emu_si);
	goto l__0137;
l__0104:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_bx, emu_si);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_di, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_si, 0xFCEE));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_ax);
	emu_orw(&emu_dx, emu_dx);
	if (!(emu_flags.sf != emu_flags.of)) goto l__012A;
	emu_movw(&emu_ax, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	goto l__012C;
l__012A:
	emu_movw(&emu_ax, emu_dx);
	goto l__012C;
l__012C:
	emu_movw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	}
	goto l__0136;
l__0136:
	emu_incw(&emu_si);
	goto l__0137;
l__0137:
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) goto l__0104;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cl, 0x8);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
		emu_cwd();
		emu_idivw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	}
	goto l__0157;
l__0157:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	goto l__016D;
l__0164:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__016D;
l__016D:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x200);
		if ((emu_flags.sf != emu_flags.of)) goto l__0164;
	}
	goto l__017C;
l__017C:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76A8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	goto l__018E;
l__018E:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cl, 0x8);
	emu_sarw(&emu_ax, emu_cl);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	emu_xorw(&emu_si, emu_si);
	goto l__0212;
l__01B0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_bx, emu_si);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_di, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp + emu_si, 0xFCEE));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) goto l__01CC;
	goto l__0211;
l__01CC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__01EB;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__01E1;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__01E3;
l__01E1:
	emu_movw(&emu_ax, emu_di);
	goto l__01E3;
l__01E3:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	goto l__01EB;
l__01EB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__020A;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0200;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0202;
l__0200:
	emu_movw(&emu_ax, emu_di);
	goto l__0202;
l__0202:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	goto l__020A;
l__020A:
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, 0xFCEE), emu_al);
	goto l__0211;
l__0211:
	emu_incw(&emu_si);
	goto l__0212;
l__0212:
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) goto l__01B0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) goto l__023F;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x312);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_5E4A();
	goto l__0228;
l__0228:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__022C;
l__022C:
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76A8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.cf) goto l__022C;
	if (emu_flags.zf) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_flags.cf) goto l__022C;
	}
	goto l__023F;
l__023F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) goto l__0248;
	goto l__018E;
l__0248:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
