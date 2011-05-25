/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
		case 0x22A60FD7: emu_GFX_Ignore1(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x0261; emu_last_length = 0x0033; emu_last_crc = 0xEB45;
			emu_call();
			return;
	}
l__0265:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x026C); emu_GUI_Mouse_Hide();
l__026C:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x0270);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: emu_GFX_Ignore2(); break;
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
		case 0x22A60FD7: emu_GFX_Ignore1(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B6C; emu_last_ip = 0x02B6; emu_last_length = 0x0027; emu_last_crc = 0x6AD7;
			emu_call();
			return;
	}
l__02BA:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs);
	emu_push(0x02C1); emu_GUI_Mouse_Show();
l__02C1:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x02C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: emu_GFX_Ignore2(); break;
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
