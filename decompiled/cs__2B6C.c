/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B6C_000E_0045_C1FE()
 *
 * @name f__2B6C_000E_0045_C1FE
 * @implements 2B6C:000E:0045:C1FE ()
 * @implements 2B6C:0053:001B:7422
 * @implements 2B6C:005C:0012:99BA
 * @implements 2B6C:0066:0008:FF9D
 *
 * Called From: 29A3:016C:0008:63C3
 * Called From: 29E8:0C2E:0021:D7CA
 * Called From: 2B4C:0045:0008:63C3
 * Called From: 2B6C:015B:0007:9309
 * Called From: 2B6C:0269:0007:128D
 * Called From: 2B99:006C:0008:63C3
 */
void f__2B6C_000E_0045_C1FE()
{
l__000E:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7097) != 0x0) goto l__0066;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x706A) != 0x0) goto l__005C;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x709A);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x709C);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x709E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x70A0);
	emu_cmpw(&emu_cx, 0x0);
	if (emu_cx == 0x0) goto l__005C;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x708C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x708C) == 0x0) { /* Unresolved jump */ emu_ip = 0x0056; emu_last_cs = 0x2B6C; emu_last_ip = 0x0041; emu_last_length = 0x0045; emu_last_crc = 0xC1FE; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708A));
	emu_push(emu_dx);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x662E);
	emu_push(0x0053);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_6E25(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x004F; emu_last_length = 0x0045; emu_last_crc = 0xC1FE;
			emu_call();
			return;
	}
l__0053:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ds, 0x00, 0x709E) = 0x0;
l__005C:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x1);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x0);
l__0066:
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_006E_002E_4FBC()
 *
 * @name f__2B6C_006E_002E_4FBC
 * @implements 2B6C:006E:002E:4FBC ()
 * @implements 2B6C:0099:0003:1D04
 * @implements 2B6C:009C:006E:992E
 * @implements 2B6C:00B3:0057:2EDD
 * @implements 2B6C:00C5:0045:838C
 * @implements 2B6C:00DB:002F:7133
 * @implements 2B6C:00E5:0025:3C9F
 * @implements 2B6C:010A:001F:F77F
 * @implements 2B6C:0129:000E:E866
 * @implements 2B6C:012C:000B:CA8C
 *
 * Called From: 29A3:01AC:0008:63C5
 * Called From: 29E8:0C33:0005:F14D
 * Called From: 2B4C:01E8:0008:63C5
 * Called From: 2B6C:018B:0007:931D
 * Called From: 2B6C:02BE:0007:D28E
 * Called From: 2B99:0071:0005:F14D
 */
void f__2B6C_006E_002E_4FBC()
{
l__006E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7097) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x706A) != 0x0) {
			emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x706A));
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x0);
			if (emu_get_memory16(emu_ds, 0x00, 0x706A) == 0x0) goto l__009C;
		}
	}
l__0099:
	goto l__012C;
l__009C:
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x7076);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7074);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7078));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	if (emu_flags.sf) {
		emu_ax = 0x0;
	}
l__00B3:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_subw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x707A));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	if (emu_flags.sf) {
		emu_addw(&emu_dx, emu_bx);
		emu_bx = 0x0;
	}
l__00C5:
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_get_memory16(emu_ds, 0x00, 0x709A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x709C) = emu_bx;
	emu_addw(&emu_ax, emu_cx);
	emu_subw(&emu_ax, 0x28);
	if (!emu_flags.sf) {
		emu_subw(&emu_cx, emu_ax);
	}
l__00DB:
	emu_addw(&emu_bx, emu_dx);
	emu_subw(&emu_bx, 0xC8);
	if (!emu_flags.sf) {
		emu_subw(&emu_dx, emu_bx);
	}
l__00E5:
	emu_get_memory16(emu_ds, 0x00, 0x709E) = emu_cx;
	emu_get_memory16(emu_ds, 0x00, 0x70A0) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x708C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x708C) == 0x0) { /* Unresolved jump */ emu_ip = 0x010D; emu_last_cs = 0x2B6C; emu_last_ip = 0x00F2; emu_last_length = 0x0025; emu_last_crc = 0x3C9F; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708A));
	emu_push(emu_dx);
	emu_push(emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x709C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x709A));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66C2);
	emu_push(0x010A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0106; emu_last_length = 0x0025; emu_last_crc = 0x3C9F;
			emu_call();
			return;
	}
l__010A:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0129); emu_cs = 0x2903; f__2903_0158_001A_2931();
l__0129:
	emu_addw(&emu_sp, 0xE);
l__012C:
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
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
 * Decompiled function f__2B6C_0137_0020_C73F()
 *
 * @name f__2B6C_0137_0020_C73F
 * @implements 2B6C:0137:0020:C73F ()
 * @implements 2B6C:0157:0007:9309
 * @implements 2B6C:015E:0004:C0E6
 * @implements 2B6C:0162:0007:9568
 *
 * Called From: 0642:014A:0008:2A18
 * Called From: 0642:040F:0005:6168
 * Called From: 0642:042B:0005:6168
 * Called From: 0F78:0170:003E:BA89
 * Called From: 0F78:0170:0011:C0E1
 * Called From: 10E4:029F:0008:D3E0
 * Called From: 10E4:04BA:0006:0569
 * Called From: 10E4:2215:0006:0569
 * Called From: 1423:038A:000F:DD38
 * Called From: 1423:03BF:0005:6168
 * Called From: 257A:01AE:0022:84A4
 * Called From: B491:0820:000C:0B7D
 * Called From: B491:0990:0005:6168
 * Called From: B495:0739:0008:DBE0
 * Called From: B495:0B6C:0005:6168
 * Called From: B495:0CF9:0005:6168
 * Called From: B495:0CF9:0008:A3E0
 * Called From: B495:0D62:001A:7F2D
 * Called From: B495:0E2E:002A:0E56
 * Called From: B495:0F33:0008:857D
 * Called From: B495:0F80:000B:410C
 * Called From: B495:114C:0008:DE28
 * Called From: B495:11A9:0008:DE28
 * Called From: B495:150B:0007:05DB
 * Called From: B4B8:1C57:000F:E943
 * Called From: B4B8:1D6E:0005:6168
 * Called From: B4B8:1FA1:0008:DBE0
 * Called From: B4B8:212A:0005:6168
 * Called From: B4B8:21D9:0008:2A18
 * Called From: B4B8:2251:0007:05DB
 * Called From: B4CD:0E46:0014:9D6D
 * Called From: B4DA:1195:0008:FBE0
 * Called From: B4DA:13DA:0006:0569
 * Called From: B4DA:141C:0006:0569
 * Called From: B4DA:14E0:0005:6168
 * Called From: B4DA:1863:0008:857D
 * Called From: B4E0:008F:0005:6168
 * Called From: B4E0:0A45:0007:05DB
 * Called From: B4E6:0080:0005:6168
 * Called From: B4E6:0162:0015:1CE9
 * Called From: B4E6:040B:0005:6168
 * Called From: B4E6:04C7:000A:A8DF
 * Called From: B4F2:071D:0006:0569
 * Called From: B4F2:0D06:0005:6168
 * Called From: B4F2:0D06:000F:C398
 * Called From: B4F2:0EEF:0006:0569
 * Called From: B4F2:0F33:0006:0569
 * Called From: B503:0245:0008:CBE0
 * Called From: B503:0558:0008:FBE0
 * Called From: B503:0797:001E:9D55
 * Called From: B503:0797:0014:B0EA
 * Called From: B503:091B:0016:7A72
 * Called From: B503:09FA:0012:7B6D
 * Called From: B503:0B03:0005:6168
 * Called From: B511:0EF3:0006:0569
 * Called From: B511:10EC:0008:C3E0
 * Called From: B511:117C:000A:673D
 * Called From: B511:1393:0008:DBE0
 * Called From: B518:0056:0008:40E7
 * Called From: B518:0056:000B:4030
 * Called From: B518:0563:0010:240A
 * Called From: B518:148F:000B:DA15
 * Called From: B527:00A1:0005:6168
 * Called From: B527:00A1:0025:7FAE
 * Called From: B527:00A1:0029:E163
 * Called From: B527:0223:002A:3E48
 * Called From: B527:0324:0005:6168
 * Called From: B527:0324:0028:A290
 * Called From: B527:0324:003D:CE40
 * Called From: B53B:0066:000F:A920
 */
void f__2B6C_0137_0020_C73F()
{
l__0137:
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) { /* Unresolved jump */ emu_ip = 0x0139; emu_last_cs = 0x2B6C; emu_last_ip = 0x013E; emu_last_length = 0x0020; emu_last_crc = 0xC73F; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7097) != 0x0) goto l__0162;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0157);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0153; emu_last_length = 0x0020; emu_last_crc = 0xC73F;
			emu_call();
			return;
	}
l__0157:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x015E); f__2B6C_000E_0045_C1FE();
l__015E:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x0162);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x015E; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__0162:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_0169_001E_6939()
 *
 * @name f__2B6C_0169_001E_6939
 * @implements 2B6C:0169:001E:6939 ()
 * @implements 2B6C:0187:0007:931D
 * @implements 2B6C:018E:0004:C0E6
 * @implements 2B6C:0192:0005:89A4
 *
 * Called From: 0642:010E:0006:E56C
 * Called From: 0642:0172:0006:E56C
 * Called From: 0F78:019C:0008:43E5
 * Called From: 10E4:0470:0007:E5DE
 * Called From: 10E4:056F:0006:E56C
 * Called From: 10E4:226B:0008:1BE5
 * Called From: 1423:03C9:0005:816D
 * Called From: 257A:01B3:0005:816D
 * Called From: 2B6C:016E:001E:6939
 * Called From: B495:0765:0008:43E5
 * Called From: B495:0B98:0008:43E5
 * Called From: B495:0D2C:0008:43E5
 * Called From: B495:0DC0:0008:43E5
 * Called From: B495:0E6C:0008:2BE5
 * Called From: B495:0F73:0008:43E5
 * Called From: B495:0FAC:0008:43E5
 * Called From: B495:1187:000E:5A2B
 * Called From: B495:121E:000E:7C2B
 * Called From: B495:1533:0008:43E5
 * Called From: B4B8:1B72:0027:A86C
 * Called From: B4B8:1D35:000F:0946
 * Called From: B4B8:1D90:0006:E56C
 * Called From: B4B8:206E:0008:3BE5
 * Called From: B4B8:21C6:000C:D8AD
 * Called From: B4B8:21F5:0006:E56C
 * Called From: B4CD:0F68:000D:976C
 * Called From: B4DA:11BD:0008:43E5
 * Called From: B4DA:140E:0008:43E5
 * Called From: B4DA:1488:0008:33E5
 * Called From: B4DA:1514:0008:43E5
 * Called From: B4DA:188C:0008:43E5
 * Called From: B4E0:00B7:0008:43E5
 * Called From: B4E0:0A71:0008:43E5
 * Called From: B4E6:00C7:0008:3BE5
 * Called From: B4E6:01F0:0014:DF38
 * Called From: B4E6:04A7:0008:3BE5
 * Called From: B4E6:0501:0008:3BE5
 * Called From: B4F2:0751:0008:33E5
 * Called From: B4F2:0D3E:0008:43E5
 * Called From: B4F2:0F1D:0008:33E5
 * Called From: B4F2:0F61:0008:33E5
 * Called From: B503:04CE:0006:E56C
 * Called From: B503:04CE:0005:816D
 * Called From: B503:0566:0006:E56C
 * Called From: B503:07E8:0016:22B8
 * Called From: B503:0950:0008:43E5
 * Called From: B503:0A27:0008:43E5
 * Called From: B503:0B3B:0008:43E5
 * Called From: B511:0F1B:0008:43E5
 * Called From: B511:1128:0008:1BE5
 * Called From: B511:133E:0009:70CE
 * Called From: B511:13F4:0007:E5DE
 * Called From: B511:14D8:0005:816D
 * Called From: B518:0502:0005:816D
 * Called From: B518:0823:0006:E56C
 * Called From: B518:0823:0005:816D
 * Called From: B518:14BB:0008:43E5
 * Called From: B527:00E3:0007:E5DE
 * Called From: B527:025C:0008:3BE5
 * Called From: B527:0362:0008:2BE5
 * Called From: B53B:0279:0013:11D9
 */
void f__2B6C_0169_001E_6939()
{
l__0169:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) goto l__0169;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7097) != 0x0) goto l__0192;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0187);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0183; emu_last_length = 0x001E; emu_last_crc = 0x6939;
			emu_call();
			return;
	}
l__0187:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x018E); f__2B6C_006E_002E_4FBC();
l__018E:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x0192);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x018E; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__0192:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B6C_0197_00CE_4D32()
 *
 * @name f__2B6C_0197_00CE_4D32
 * @implements 2B6C:0197:00CE:4D32 ()
 * @implements 2B6C:01B8:00AD:F519
 * @implements 2B6C:01CA:009B:5944
 * @implements 2B6C:01DA:008B:F96D
 * @implements 2B6C:01EA:007B:97B2
 * @implements 2B6C:020B:005A:3B17
 * @implements 2B6C:0214:0051:5F7B
 * @implements 2B6C:021E:0047:8CB4
 * @implements 2B6C:0228:003D:F75B
 * @implements 2B6C:0232:0033:EB45
 * @implements 2B6C:0265:0007:128D
 * @implements 2B6C:026C:0004:C0E6
 * @implements 2B6C:0270:0022:327A
 * @implements 2B6C:0276:001C:95D8
 *
 * Called From: 0AEC:0C2F:0021:651E
 * Called From: 0AEC:0C2F:0029:2057
 * Called From: 0AEC:0DF0:0024:4D95
 * Called From: 0AEC:0F8A:0029:2C59
 * Called From: 10E4:05F1:0023:BAD6
 * Called From: 2642:005B:005E:87F6
 * Called From: 2C17:0036:002F:3016
 * Called From: B488:0022:0027:45A9
 * Called From: B4A2:08BD:0014:2AE3
 * Called From: B4A2:0906:0014:2AE3
 * Called From: B4A2:09A1:0014:2AE3
 * Called From: B4A2:09EE:0014:2AE3
 * Called From: B4DA:03C9:0017:0D1E
 * Called From: B4DA:0521:0017:0C1A
 * Called From: B4DA:068D:0017:0C1A
 * Called From: B4DA:0A4C:0017:0F16
 * Called From: B4DA:0CF5:0013:2896
 * Called From: B4DA:0D67:0013:2896
 * Called From: B4DA:0D67:0019:74BF
 * Called From: B4DA:0D67:0023:9996
 * Called From: B4DA:0D67:0046:ED1B
 * Called From: B4DA:0D67:0026:659C
 * Called From: B4DA:0E6D:0014:B893
 * Called From: B4DA:0E6D:0013:2896
 * Called From: B4DA:178D:0017:EE19
 * Called From: B4DA:1823:0016:C2B4
 * Called From: B4F2:10B6:001C:4E38
 * Called From: B4F2:143C:0060:F8EA
 * Called From: B520:07B8:0043:063B
 */
void f__2B6C_0197_00CE_4D32()
{
l__0197:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7076);
	emu_decw(&emu_ax);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_shlw(&emu_ax, 0x1);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7078));
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.sf) {
		emu_ax = 0x0;
	}
l__01B8:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x7074);
	emu_subw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x707A));
	emu_negw(&emu_bx, emu_bx);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.sf) {
		emu_bx = 0x0;
	}
l__01CA:
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x7078));
	emu_cmpw(&emu_cx, 0x13F);
	if (emu_cx >= 0x13F) {
		emu_cx = 0x13F;
	}
l__01DA:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x707A));
	emu_cmpw(&emu_dx, 0xC7);
	if (emu_dx >= 0xC7) {
		emu_dx = 0xC7;
	}
l__01EA:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) goto l__01EA;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7080), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7080) == 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x7082) = emu_ax;
		emu_get_memory16(emu_ds, 0x00, 0x7084) = emu_bx;
		emu_get_memory16(emu_ds, 0x00, 0x7086) = emu_cx;
		emu_get_memory16(emu_ds, 0x00, 0x7088) = emu_dx;
	}
l__020B:
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7082));
	if (emu_ax >= emu_get_memory16(emu_ds, 0x00, 0x7082)) {
		emu_get_memory16(emu_ds, 0x00, 0x7082) = emu_ax;
	}
l__0214:
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x7084));
	if (emu_bx >= emu_get_memory16(emu_ds, 0x00, 0x7084)) {
		emu_get_memory16(emu_ds, 0x00, 0x7084) = emu_bx;
	}
l__021E:
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x7086));
	if (emu_cx <= emu_get_memory16(emu_ds, 0x00, 0x7086)) {
		emu_get_memory16(emu_ds, 0x00, 0x7086) = emu_cx;
	}
l__0228:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7088));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x7088)) {
		emu_get_memory16(emu_ds, 0x00, 0x7088) = emu_dx;
	}
l__0232:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x7080), 0x4000);
	if ((emu_get_memory16(emu_ds, 0x00, 0x7080) & 0x4000) != 0) goto l__0276;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7082));
	if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x7082)) goto l__0276;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7086));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x7086)) goto l__0276;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x7084));
	if (emu_bx < emu_get_memory16(emu_ds, 0x00, 0x7084)) goto l__0276;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x7088));
	if (emu_bx > emu_get_memory16(emu_ds, 0x00, 0x7088)) goto l__0276;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0265);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x0033; emu_last_crc = 0xEB45;
			emu_call();
			return;
	}
l__0265:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x026C); f__2B6C_000E_0045_C1FE();
l__026C:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x0270);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x026C; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__0270:
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7080), 0x4000);
l__0276:
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7080), 0x8000);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7080), 0x1);
	emu_adcb(&emu_get_memory8(emu_ds, 0x00, 0x7080), 0x0);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
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
 * Decompiled function f__2B6C_0292_0028_3AD7()
 *
 * @name f__2B6C_0292_0028_3AD7
 * @implements 2B6C:0292:0028:3AD7 ()
 * @implements 2B6C:0293:0027:6AD7
 * @implements 2B6C:02BA:0007:D28E
 * @implements 2B6C:02C1:0004:C0E6
 * @implements 2B6C:02C5:000C:7CD1
 * @implements 2B6C:02C8:0009:7751
 *
 * Called From: 0AEC:0C69:0008:F38A
 * Called From: 0AEC:0E2A:0008:F38A
 * Called From: 0AEC:0FC4:0008:F38A
 * Called From: 10E4:066A:000F:ACB8
 * Called From: 2642:006C:0008:D517
 * Called From: 2C17:01B8:001F:31F4
 * Called From: B488:01FD:000B:5A70
 * Called From: B4A2:08EF:000F:BCB8
 * Called From: B4A2:092B:000F:ACB8
 * Called From: B4A2:09D8:000F:9CB8
 * Called From: B4A2:0A15:000F:FCB8
 * Called From: B4DA:03F4:0008:8B8A
 * Called From: B4DA:054C:0008:8B8A
 * Called From: B4DA:06B8:0008:8B8A
 * Called From: B4DA:0A77:0008:8B8A
 * Called From: B4DA:0D21:0008:F38A
 * Called From: B4DA:0D93:0008:F38A
 * Called From: B4DA:0E98:0008:F38A
 * Called From: B4DA:17B8:0008:F38A
 * Called From: B4DA:184E:0008:F38A
 * Called From: B4F2:10E8:0008:F38A
 * Called From: B4F2:146B:000F:9CB8
 * Called From: B520:0830:000F:9CB8
 */
void f__2B6C_0292_0028_3AD7()
{
l__0292:
	emu_push(emu_ax);
l__0293:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) goto l__0293;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7080);
	emu_cmpb(&emu_al, 0x0);
	if (emu_al == 0x0) goto l__02C8;
	emu_decb(&emu_al);
	if (emu_al != 0) goto l__02C8;
	emu_testw(&emu_ax, 0x4000);
	if ((emu_ax & 0x4000) == 0) goto l__02C5;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x02BA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02B6; emu_last_length = 0x0027; emu_last_crc = 0x6AD7;
			emu_call();
			return;
	}
l__02BA:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x02C1); f__2B6C_006E_002E_4FBC();
l__02C1:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x02C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02C1; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__02C5:
	emu_ax = 0x0;
l__02C8:
	emu_get_memory16(emu_ds, 0x00, 0x7080) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
