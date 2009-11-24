/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0C10_0008_0014_19CD()
 *
 * @name f__0C10_0008_0014_19CD
 * @implements 0C10:0008:0014:19CD ()
 * @implements 0C10:001C:000B:D573
 * @implements 0C10:0027:000A:9E3D
 * @implements 0C10:002E:0003:DD06
 * @implements 0C10:0031:0006:5783
 * @implements 0C10:0037:000D:AB27
 * @implements 0C10:0044:0019:AB96
 * @implements 0C10:005D:000B:0B0F
 * @implements 0C10:0068:000E:57D7
 * @implements 0C10:0076:0012:339E
 * @implements 0C10:0088:000D:9624
 * @implements 0C10:0095:000D:063B
 * @implements 0C10:0097:000B:CBA9
 * @implements 0C10:00A2:0012:93B0
 * @implements 0C10:00B4:000F:EBFF
 * @implements 0C10:00C3:0009:46FF
 * @implements 0C10:00CC:0006:F7CE
 *
 * Called From: 176C:0F0C:0008:9B67
 * Called From: 176C:223E:000B:9877
 * Called From: 176C:2534:000B:9475
 * Called From: 1A34:1C95:0008:9B67
 */
void f__0C10_0008_0014_19CD()
{
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x001C); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
l__001C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x002C; emu_last_cs = 0x0C10; emu_last_ip = 0x001F; emu_last_length = 0x000B; emu_last_crc = 0xD573; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0027); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
l__0027:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0031;
	emu_xorw(&emu_ax, emu_ax);
l__002E:
	goto l__00CC;
l__0031:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
l__0037:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
l__0044:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x0C10; emu_last_ip = 0x0051; emu_last_length = 0x0019; emu_last_crc = 0xAB96; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__005D;
	/* Unresolved jump */ emu_ip = 0x002C; emu_last_cs = 0x0C10; emu_last_ip = 0x005B; emu_last_length = 0x0019; emu_last_crc = 0xAB96; emu_call();
l__005D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0068); f__0C10_0168_0014_CEB0();
l__0068:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0076); f__0C10_0168_0014_CEB0();
l__0076:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) goto l__0097;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0088); f__0C10_0182_0012_B114();
l__0088:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0095); f__0C10_0182_0012_B114();
l__0095:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0097:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x00A2); f__0C10_013D_0016_8C5C();
l__00A2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x00C6; emu_last_cs = 0x0C10; emu_last_ip = 0x00A6; emu_last_length = 0x0012; emu_last_crc = 0x93B0; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x00B4); f__0C10_00D2_000F_D61E();
l__00B4:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x00C3); f__0C10_00D2_000F_D61E();
l__00C3:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__002E;
l__00CC:
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
 * Decompiled function f__0C10_00D2_000F_D61E()
 *
 * @name f__0C10_00D2_000F_D61E
 * @implements 0C10:00D2:000F:D61E ()
 * @implements 0C10:00DF:0002:ED3A
 * @implements 0C10:00E1:003D:FEA4
 * @implements 0C10:011E:0015:46CA
 * @implements 0C10:0133:0008:1D72
 * @implements 0C10:0136:0005:87FA
 * @implements 0C10:013B:0002:2597
 *
 * Called From: 0972:0BF0:0012:0853
 * Called From: 0C10:00B1:0012:93B0
 * Called From: 0C10:00C0:000F:EBFF
 * Called From: 1A34:2C7F:0020:54FF
 * Called From: 1A34:2C7F:003E:E039
 */
void f__0C10_00D2_000F_D61E()
{
l__00D2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__00E1;
	emu_xorw(&emu_ax, emu_ax);
l__00DF:
	goto l__013B;
l__00E1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x26) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x1) != 0) goto l__0136;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x16) & 0x10) == 0) goto l__0136;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x011E); emu_cs = 0x1A34; emu_Structure_GetLinkedUnit();
l__011E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0136;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0133); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__0133:
	emu_addw(&emu_sp, 0x6);
l__0136:
	emu_ax = 0x1;
	goto l__00DF;
l__013B:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_013D_0016_8C5C()
 *
 * @name f__0C10_013D_0016_8C5C
 * @implements 0C10:013D:0016:8C5C ()
 * @implements 0C10:0153:000B:B65C
 * @implements 0C10:015E:0004:EA39
 * @implements 0C10:0160:0002:C23A
 * @implements 0C10:0166:0002:2597
 *
 * Called From: 0C10:009F:000B:CBA9
 * Called From: 0C10:009F:000D:063B
 * Called From: 176C:221E:0015:1BD8
 * Called From: 176C:247C:0015:C163
 * Called From: 1A34:0111:0020:5691
 * Called From: 1A34:28DC:000B:C880
 */
void f__0C10_013D_0016_8C5C()
{
l__013D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0162; emu_last_cs = 0x0C10; emu_last_ip = 0x0146; emu_last_length = 0x0016; emu_last_crc = 0x8C5C; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0153); f__0C10_0168_0014_CEB0();
l__0153:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__015E;
	emu_ax = 0x1;
	goto l__0160;
l__015E:
	emu_xorw(&emu_ax, emu_ax);
l__0160:
	goto l__0166;
l__0166:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0168_0014_CEB0()
 *
 * @name f__0C10_0168_0014_CEB0
 * @implements 0C10:0168:0014:CEB0 ()
 * @implements 0C10:017A:0002:C23A
 * @implements 0C10:017C:0004:9539
 * @implements 0C10:0180:0002:2597
 *
 * Called From: 0972:0AA5:0012:C6CB
 * Called From: 0972:0AC1:0012:B5DA
 * Called From: 0C10:0065:000B:0B0F
 * Called From: 0C10:0073:000E:57D7
 * Called From: 0C10:0150:0016:8C5C
 * Called From: 0C3A:2979:000B:70FD
 * Called From: 176C:0F1B:000F:9658
 * Called From: 176C:2BE4:0014:2C56
 * Called From: 1A34:311B:001E:AED8
 * Called From: 1A34:36C1:000B:70FD
 * Called From: 1A34:36C1:001D:281D
 * Called From: 1A34:36C1:002F:3E26
 */
void f__0C10_0168_0014_CEB0()
{
l__0168:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__017C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x26);
l__017A:
	goto l__0180;
l__017C:
	emu_xorw(&emu_ax, emu_ax);
	goto l__017A;
l__0180:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0182_0012_B114()
 *
 * @name f__0C10_0182_0012_B114
 * @implements 0C10:0182:0012:B114 ()
 * @implements 0C10:0194:000D:4CEC
 * @implements 0C10:01A1:0012:26F5
 * @implements 0C10:01B3:000D:063C
 * @implements 0C10:01C0:0016:1D4B
 * @implements 0C10:01D6:0036:61BA
 * @implements 0C10:020A:0002:CC3A
 * @implements 0C10:020C:0006:3784
 * @implements 0C10:0212:000B:6134
 * @implements 0C10:021D:0025:6A21
 * @implements 0C10:0224:001E:CED9
 * @implements 0C10:0235:000D:C370
 * @implements 0C10:023E:0004:E839
 * @implements 0C10:0242:0005:8BCF
 *
 * Called From: 0972:0ADD:000B:D0F3
 * Called From: 0972:0AEC:000F:3656
 * Called From: 0972:0CFE:0010:0DA8
 * Called From: 0972:0CFE:000D:8532
 * Called From: 0972:0E3A:0010:0DA8
 * Called From: 0972:0E3A:000D:8532
 * Called From: 0972:11FD:0012:15D4
 * Called From: 0AEC:0392:0011:A949
 * Called From: 0C10:0085:0012:339E
 * Called From: 0C10:0092:000D:9624
 * Called From: 0C3A:2954:000F:DCEB
 * Called From: 176C:0973:0010:0DA8
 * Called From: 176C:0A1A:0010:0D90
 * Called From: 176C:0BA4:0046:5A28
 * Called From: 176C:0C3E:0017:BC9C
 * Called From: 176C:0D64:000D:8532
 * Called From: 176C:2595:002F:8944
 * Called From: 176C:2C65:000D:8532
 * Called From: 1A34:1DCF:000D:0971
 * Called From: 1A34:2F84:000E:2A03
 * Called From: 1A34:2F84:000B:0889
 * Called From: 1A34:3679:000F:DCEB
 * Called From: 1A34:36D2:0011:21E1
 */
void f__0C10_0182_0012_B114()
{
l__0182:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0194;
	goto l__023E;
l__0194:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x26);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
l__01A1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01B3); f__0C10_0247_000D_A5E6();
l__01B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x01C0); f__0C10_0247_000D_A5E6();
l__01C0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__023E;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01D6); emu_cs = 0x167E; f__167E_0284_000C_4C88();
l__01D6:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__020C;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x26));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x26)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	}
l__020A:
	goto l__0224;
l__020C:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0212); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
l__0212:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0224;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021D); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
l__021D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
l__0224:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x26) = 0x0;
	}
l__0235:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x26) = 0x0;
l__023E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0242;
l__0242:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0247_000D_A5E6()
 *
 * @name f__0C10_0247_000D_A5E6
 * @implements 0C10:0247:000D:A5E6 ()
 * @implements 0C10:0254:003C:67AC
 * @implements 0C10:0290:0014:0758
 * @implements 0C10:02A4:0005:6143
 * @implements 0C10:02A7:0002:2597
 *
 * Called From: 0C10:01B0:0012:26F5
 * Called From: 0C10:01BD:000D:063C
 */
void f__0C10_0247_000D_A5E6()
{
l__0247:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0254;
	goto l__02A7;
l__0254:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x26) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x1) != 0) goto l__02A7;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x16) & 0x10) == 0) goto l__02A7;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x1A34; emu_Structure_GetLinkedUnit();
l__0290:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__02A7;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__02A4:
	emu_addw(&emu_sp, 0x6);
l__02A7:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
