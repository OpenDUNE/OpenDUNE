/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"

/**
 * Decompiled function f__B4B8_1BE3_0019_861A()
 *  Patched to avoid stack overflow.
 *  It is very ugly .. but this function is 900 lines long!
 *
 * @name p__B4B8_1BE3_0019_861A
 * @implements B4B8:1BE3:0019:861A (0)
 * @implements B4B8:1BEC:0010:B763 (1)
 * @implements B4B8:1BFC:0004:0490 (2)
 * @implements B4B8:1C03:0008:5474
 * @implements B4B8:1C0B:000E:77A7
 * @implements B4B8:1C19:0017:1E9D
 * @implements B4B8:1C30:001D:C57B
 * @implements B4B8:1C4D:000F:B1A5
 * @implements B4B8:1C5C:0005:154E
 * @implements B4B8:1C61:0005:13D0
 * @implements B4B8:1C66:0009:F605 (3)
 * @implements B4B8:1C6F:001A:AD6B
 * @implements B4B8:1C89:001F:C7ED
 * @implements B4B8:1CA8:0018:AD37
 * @implements B4B8:1CD5:0008:5474
 * @implements B4B8:1CDD:000E:77A7
 * @implements B4B8:1CEB:000C:5324
 * @implements B4B8:1CF7:0017:1B85
 * @implements B4B8:1D0E:001D:C57B
 * @implements B4B8:1D2B:000F:B445
 * @implements B4B8:1D3A:0013:2C02
 * @implements B4B8:1D4D:000C:5B7B
 * @implements B4B8:1D59:0004:0148
 * @implements B4B8:1D5D:0005:112A
 * @implements B4B8:1D62:0008:50F6
 * @implements B4B8:1DF6:0009:F59B
 * @implements B4B8:1DFF:000E:3978 (4)
 * @implements B4B8:1E0D:000C:B254
 * @implements B4B8:1E19:0010:0BAC
 * @implements B4B8:1E2B:000E:67D1
 * @implements B4B8:1E39:000F:F8DE
 * @implements B4B8:1E41:0007:6EF8
 * @implements B4B8:1E48:0002:03AC
 * @implements B4B8:1E4A:0009:0C49
 * @implements B4B8:1E53:000A:8F29
 * @implements B4B8:1E5D:0046:A838
 * @implements B4B8:1EA3:0015:F8FC
 * @implements B4B8:1EB8:002C:BF02
 * @implements B4B8:1EC3:0021:308D
 * @implements B4B8:1EC4:0020:3003
 * @implements B4B8:1EE4:000C:9C55
 * @implements B4B8:1EF0:0017:B4A2
 * @implements B4B8:1F07:001E:7CBD
 * @implements B4B8:1F25:0070:0DEC
 * @implements B4B8:1F2A:006B:6DBC
 * @implements B4B8:1F2B:006A:5DBE
 * @implements B4B8:1F95:0009:C400
 * @implements B4B8:1F9E:0008:F35E
 * @implements B4B8:1FA6:0008:5720
 * @implements B4B8:1FAE:0021:7727
 * @implements B4B8:1FCF:0014:1024
 * @implements B4B8:1FE3:002F:82AA
 * @implements B4B8:1FF1:0021:B39A
 * @implements B4B8:2012:001E:B0C1
 * @implements B4B8:2030:000C:50F9
 * @implements B4B8:203C:0012:1E3E
 * @implements B4B8:204E:001D:2C93
 * @implements B4B8:206B:0008:F6BE (5)
 * @implements B4B8:2073:000D:D467
 * @implements B4B8:2078:0008:847C
 * @implements B4B8:2080:001D:61A2
 * @implements B4B8:209D:0023:825F
 * @implements B4B8:20BB:0005:17FC
 * @implements B4B8:20C0:0008:F2A2 (6)
 * @implements B4B8:20C8:0002:036C
 */
void p__B4B8_1BE3_0019_861A(uint8 entry)
{
	switch (entry) {
		case 0: goto f__B4B8_1BE3_0019_861A;
		case 1: goto f__B4B8_1BEC_0010_B763;
		case 2: goto f__B4B8_1BFC_0004_0490;
		case 3: goto f__B4B8_1C66_0009_F605;
		case 4: goto f__B4B8_1DFF_000E_3978;
		case 5: goto f__B4B8_206B_0008_F6BE;
		case 6: goto f__B4B8_20C0_0008_F2A2;
	}

f__B4B8_1BE3_0019_861A:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_si);
	emu_movw(&emu_cx.x, 0x5);
	emu_movw(&emu_bx.x, 0x2281);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x1BFC; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BF2; emu_last_length = 0x0019; emu_last_crc = 0x861A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { goto f__B4B8_1BEC_0010_B763; return; }
	emu_ip = 0x1E48; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BF9; emu_last_length = 0x0019; emu_last_crc = 0x861A; emu_call(); // Jump does not resolve

f__B4B8_1BEC_0010_B763:
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { goto f__B4B8_1BFC_0004_0490; return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { goto f__B4B8_1BEC_0010_B763; return; }
	goto f__B4B8_1E48_0002_03AC; return;


f__B4B8_1BFC_0004_0490:
	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xA);
	switch (emu_ip) {
		case 0x1C03: goto f__B4B8_1C03_0008_5474; return;
		case 0x1D5D: goto f__B4B8_1D5D_0005_112A; return;
		case 0x1DF6: goto f__B4B8_1DF6_0009_F59B; return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x1BFC; emu_last_length = 0x0004; emu_last_crc = 0x0490;
			emu_call();
			return;
	}

f__B4B8_1C03_0008_5474:
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C0B); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C0B_000E_77A7;

f__B4B8_1C0B_000E_77A7:
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x1C19); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C19_0017_1E9D;

f__B4B8_1C19_0017_1E9D:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { goto f__B4B8_1C30_001D_C57B; return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x6D60);
	emu_ip = 0x1C3C; emu_last_cs = 0xB4B8; emu_last_ip = 0x1C2E; emu_last_length = 0x0017; emu_last_crc = 0x1E9D; emu_call(); // Jump does not resolve

f__B4B8_1C30_001D_C57B:
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x2EE0);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_cs); emu_push(0x1C4D); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C4D_000F_B1A5;

f__B4B8_1C4D_000F_B1A5:
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DA), emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C5C); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C5C_0005_154E;

f__B4B8_1C5C_0005_154E:
	emu_push(emu_cs); emu_push(0x1C61); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C61_0005_13D0;

f__B4B8_1C61_0005_13D0:
	emu_push(emu_cs); emu_push(0x1C66); emu_cs = 0x34BE; ovl__34BE(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C66_0009_F605;

f__B4B8_1C66_0009_F605:
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C6F); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C6F_001A_AD6B;

f__B4B8_1C6F_001A_AD6B:
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22C0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C89); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1C89_001F_C7ED;

f__B4B8_1C89_001F_C7ED:
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x1CA8); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1CA8_0018_AD37;

f__B4B8_1CA8_0018_AD37:
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (!emu_flags.zf) { goto f__B4B8_1CD5_0008_5474; return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x230A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1CC0); emu_cs = 0x1FB5; emu_ip = 0x1EBA; emu_last_cs = 0xB4B8; emu_last_ip = 0x1CBB; emu_last_length = 0x0018; emu_last_crc = 0xAD37; emu_call(); // Jump does not resolve
	emu_unknown_call();

f__B4B8_1CD5_0008_5474:
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1CDD); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1CDD_000E_77A7;

f__B4B8_1CDD_000E_77A7:
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x1CEB); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1CEB_000C_5324;

f__B4B8_1CEB_000C_5324:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2316);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1CF7); emu_cs = 0x0FCB; f__0FCB_000D_0019_1BED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1CF7_0017_1B85;

f__B4B8_1CF7_0017_1B85:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { goto f__B4B8_1D0E_001D_C57B; return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x4E20);
	emu_ip = 0x1D1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1D0C; emu_last_length = 0x0017; emu_last_crc = 0x1B85; emu_call(); // Jump does not resolve

f__B4B8_1D0E_001D_C57B:
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x2EE0);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_cs); emu_push(0x1D2B); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1D2B_000F_B445;

f__B4B8_1D2B_000F_B445:
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DA), emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D3A); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1D3A_0013_2C02;

f__B4B8_1D3A_0013_2C02:
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1D4D); f__B4B8_0A1E_001A_11DB();
	goto f__B4B8_1D4D_000C_5B7B;

f__B4B8_1D4D_000C_5B7B:
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D59); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1D59_0004_0148;

f__B4B8_1D59_0004_0148:
	emu_pop(&emu_cx.x);
	goto f__B4B8_1E41_0007_6EF8; return;

f__B4B8_1D5D_0005_112A:
	emu_push(emu_cs); emu_push(0x1D62); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1D62_0008_50F6;

f__B4B8_1D62_0008_50F6:
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D6A); emu_cs = 0x01F7; f__01F7_0377_000D_71AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	emu_unknown_call();

f__B4B8_1DF6_0009_F59B:
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1DFF); emu_cs = 0x3518; ovl__3518(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1DFF_000E_3978;

f__B4B8_1DFF_000E_3978:
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1E0D_000C_B254;

f__B4B8_1E0D_000C_B254:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1E19); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1E19_0010_0BAC;

f__B4B8_1E19_0010_0BAC:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1E29; emu_last_cs = 0xB4B8; emu_last_ip = 0x1E22; emu_last_length = 0x0010; emu_last_crc = 0x0BAC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	goto f__B4B8_1E2B_000E_67D1; return;

f__B4B8_1E2B_000E_67D1:
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { goto f__B4B8_1E39_000F_F8DE; return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1E3B; emu_last_cs = 0xB4B8; emu_last_ip = 0x1E37; emu_last_length = 0x000E; emu_last_crc = 0x67D1; emu_call(); // Jump does not resolve

f__B4B8_1E39_000F_F8DE:
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	goto f__B4B8_1E4A_0009_0C49; return;

f__B4B8_1E41_0007_6EF8:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	goto f__B4B8_1E4A_0009_0C49; return;

f__B4B8_1E48_0002_03AC:
	goto f__B4B8_1E4A_0009_0C49; return;

f__B4B8_1E4A_0009_0C49:
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { goto f__B4B8_1E53_000A_8F29; return; }
	goto f__B4B8_2078_0008_847C; return;

f__B4B8_1E53_000A_8F29:
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B8), 0x0);
	emu_xorw(&emu_di, emu_di);
	goto f__B4B8_1EC4_0020_3003; return;

f__B4B8_1E5D_0046_A838:
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x219D), 0x0);
	if (emu_flags.zf) { goto f__B4B8_1EB8_002C_BF02; return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x219D));
	emu_push(emu_cs); emu_push(0x1EA3); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1EA3_0015_F8FC;

f__B4B8_1EA3_0015_F8FC:
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	goto f__B4B8_1EC3_0021_308D; return;

f__B4B8_1EB8_002C_BF02:
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41B8), 0x0);
	if (!emu_flags.zf) { goto f__B4B8_1EC3_0021_308D; return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B8), emu_di);
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { goto f__B4B8_1E5D_0046_A838; return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; emu_ip = 0x3DD5; emu_last_cs = 0xB4B8; emu_last_ip = 0x1EDF; emu_last_length = 0x002C; emu_last_crc = 0xBF02; emu_call(); // Jump does not resolve
	goto f__B4B8_1EE4_000C_9C55;

f__B4B8_1EC3_0021_308D:
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { goto f__B4B8_1E5D_0046_A838; return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1EE4_000C_9C55;

f__B4B8_1EC4_0020_3003:
	emu_cmpws(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { goto f__B4B8_1E5D_0046_A838; return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; emu_ip = 0x3DD5; emu_last_cs = 0xB4B8; emu_last_ip = 0x1EDF; emu_last_length = 0x0020; emu_last_crc = 0x3003; emu_call(); // Jump does not resolve
	goto f__B4B8_1EE4_000C_9C55;

f__B4B8_1EE4_000C_9C55:
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_si, emu_si);
	goto f__B4B8_1F2B_006A_5DBE; return;

f__B4B8_1EF0_0017_B4A2:
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1F07); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1F07_001E_7CBD;

f__B4B8_1F07_001E_7CBD:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.cf || emu_flags.zf)) { goto f__B4B8_1F2A_006B_6DBC; return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1F25); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1F25_0070_0DEC;

f__B4B8_1F25_0070_0DEC:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { goto f__B4B8_1EF0_0017_B4A2; return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41B6));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4136), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4132), emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4134), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4138), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x231B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; emu_ip = 0x26F2; emu_last_cs = 0xB4B8; emu_last_ip = 0x1F90; emu_last_length = 0x0070; emu_last_crc = 0x0DEC; emu_call(); // Jump does not resolve
	goto f__B4B8_1F95_0009_C400;

f__B4B8_1F2A_006B_6DBC:
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { goto f__B4B8_1EF0_0017_B4A2; return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41B6));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4136), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4132), emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4134), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4138), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x231B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1F95_0009_C400;

f__B4B8_1F2B_006A_5DBE:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { goto f__B4B8_1EF0_0017_B4A2; return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41B6));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4136), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4132), emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4134), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4138), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x231B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; emu_ip = 0x26F2; emu_last_cs = 0xB4B8; emu_last_ip = 0x1F90; emu_last_length = 0x006A; emu_last_crc = 0x5DBE; emu_call(); // Jump does not resolve
	goto f__B4B8_1F95_0009_C400;

f__B4B8_1F95_0009_C400:
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F9E); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1F9E_0008_F35E;

f__B4B8_1F9E_0008_F35E:
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1FA6); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1FA6_0008_5720;

f__B4B8_1FA6_0008_5720:
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1FAE_0021_7727;

f__B4B8_1FAE_0021_7727:
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1FCF); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1FCF_0014_1024;

f__B4B8_1FCF_0014_1024:
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x1FE3); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_1FE3_002F_82AA;

f__B4B8_1FE3_002F_82AA:
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (!emu_flags.zf) { goto f__B4B8_1FF1_0021_B39A; return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_ax.x, 0x39);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x231);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x85);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2321);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2012); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_2012_001E_B0C1;

f__B4B8_1FF1_0021_B39A:
	emu_movw(&emu_ax.x, 0x39);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x231);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x85);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2321);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2012); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_2012_001E_B0C1;

f__B4B8_2012_001E_B0C1:
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2030); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_2030_000C_50F9;

f__B4B8_2030_000C_50F9:
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203C); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_203C_0012_1E3E;

f__B4B8_203C_0012_1E3E:
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x204E); emu_cs = 0x10E4; f__10E4_057F_0052_B1B7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_204E_001D_2C93;

f__B4B8_204E_001D_2C93:
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x206B); emu_cs = 0x34E6; ovl__34E6(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_206B_0008_F6BE;

f__B4B8_206B_0008_F6BE:
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x2073); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_2073_000D_D467;

f__B4B8_2073_000D_D467:
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { goto f__B4B8_2080_001D_61A2; return; }
	emu_ip = 0x20C8; emu_last_cs = 0xB4B8; emu_last_ip = 0x207E; emu_last_length = 0x000D; emu_last_crc = 0xD467; emu_call(); // Jump does not resolve

f__B4B8_2078_0008_847C:
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { goto f__B4B8_2080_001D_61A2; return; }
	emu_ip = 0x20C8; emu_last_cs = 0xB4B8; emu_last_ip = 0x207E; emu_last_length = 0x0008; emu_last_crc = 0x847C; emu_call(); // Jump does not resolve

f__B4B8_2080_001D_61A2:
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x209D); emu_cs = 0x34E6; ovl__34E6(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_209D_0023_825F;

f__B4B8_209D_0023_825F:
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { goto f__B4B8_20BB_0005_17FC; return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x219D));
	emu_push(emu_cs); emu_push(0x20C0); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_20C0_0008_F2A2;

f__B4B8_20BB_0005_17FC:
	emu_push(emu_cs); emu_push(0x20C0); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	goto f__B4B8_20C0_0008_F2A2;

f__B4B8_20C0_0008_F2A2:
	emu_cmpws(&emu_si, 0x1B);
	if (emu_flags.zf) { goto f__B4B8_20C8_0002_036C; return; }
	goto f__B4B8_1BE3_0019_861A; return;

f__B4B8_20C8_0002_036C:
	f__B4B8_212A_0005_11DE();
}
