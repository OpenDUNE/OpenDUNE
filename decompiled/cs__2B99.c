/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B99_0002_0012_E0C1()
 *
 * @name f__2B99_0002_0012_E0C1
 * @implements 2B99:0002:0012:E0C1 ()
 * @implements 2B99:0018:0016:016B
 * @implements 2B99:0032:0019:5301
 * @implements 2B99:004B:001E:8FB8
 * @implements 2B99:005D:000C:9EC2
 * @implements 2B99:0069:0008:63C3
 * @implements 2B99:0071:0005:F14D
 * @implements 2B99:0076:0004:C0E6
 * @implements 2B99:007A:0001:6180
 *
 * Called From: 2B99:0091:0019:5737
 */
void f__2B99_0002_0012_E0C1()
{
l__0002:
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x706C));
	if ((int16)emu_cx < (int16)emu_get_memory16(emu_ds, 0x00, 0x706C)) { /* Unresolved jump */ emu_ip = 0x0014; emu_last_cs = 0x2B99; emu_last_ip = 0x0006; emu_last_length = 0x0012; emu_last_crc = 0xE0C1; emu_call(); return; }
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x706E));
	if ((int16)emu_cx > (int16)emu_get_memory16(emu_ds, 0x00, 0x706E)) {
		emu_cx = emu_get_memory16(emu_ds, 0x00, 0x706E);
	}
	goto l__0018;
l__0018:
	emu_get_memory16(emu_ds, 0x00, 0x7060) = emu_cx;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7070));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ds, 0x00, 0x7070)) { /* Unresolved jump */ emu_ip = 0x002E; emu_last_cs = 0x2B99; emu_last_ip = 0x0020; emu_last_length = 0x0016; emu_last_crc = 0x016B; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7072));
	if ((int16)emu_dx > (int16)emu_get_memory16(emu_ds, 0x00, 0x7072)) {
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7072);
	}
	goto l__0032;
l__0032:
	emu_get_memory16(emu_ds, 0x00, 0x7062) = emu_dx;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7096), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7096) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7068), 0x1);
		if (emu_get_memory16(emu_ds, 0x00, 0x7068) != 0x1) { /* Unresolved jump */ emu_ip = 0x0046; emu_last_cs = 0x2B99; emu_last_ip = 0x0042; emu_last_length = 0x0019; emu_last_crc = 0x5301; emu_call(); return; }
		emu_shlw(&emu_cx, 0x1);
		emu_ax = 0x4;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x004B); Interrupt_Mouse();
	}
	goto l__004B;
l__004B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x707C), emu_ax);
	if (emu_get_memory16(emu_ds, 0x00, 0x707C) == emu_ax) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7062);
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x707E), emu_ax);
		if (emu_get_memory16(emu_ds, 0x00, 0x707E) == emu_ax) goto l__007A;
	}
	goto l__005D;
l__005D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0069);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B99; emu_last_ip = 0x0065; emu_last_length = 0x000C; emu_last_crc = 0x9EC2;
			emu_call();
			return;
	}
	goto l__0069;
l__0069:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();
	goto l__0071;
l__0071:
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();
	goto l__0076;
l__0076:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x007A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B99; emu_last_ip = 0x0076; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
	goto l__007A;
l__007A:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2B99_007B_0019_5737()
 *
 * @name f__2B99_007B_0019_5737
 * @implements 2B99:007B:0019:5737 ()
 * @implements 2B99:0094:0008:0A2F
 *
 * Called From: B503:0092:0010:58CB
 */
void f__2B99_007B_0019_5737()
{
l__007B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) { /* Unresolved jump */ emu_ip = 0x0086; emu_last_cs = 0x2B99; emu_last_ip = 0x008B; emu_last_length = 0x0019; emu_last_crc = 0x5737; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_push(0x0094); f__2B99_0002_0012_E0C1();
	goto l__0094;
l__0094:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
