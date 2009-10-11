/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B99_0002_0012_E0C1()
 *
 * @name f__2B99_0002_0012_E0C1
 * @implements 2B99:0002:0012:E0C1 ()
 *
 * Called From: 2B99:0091:0019:5737
 */
void f__2B99_0002_0012_E0C1()
{
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x706C));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0014; emu_last_cs = 0x2B99; emu_last_ip = 0x0006; emu_last_length = 0x0012; emu_last_crc = 0xE0C1; emu_call(); return; }
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x706E));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x706E));
	}
	f__2B99_0018_0016_016B(); return;
}

/**
 * Decompiled function f__2B99_0018_0016_016B()
 *
 * @name f__2B99_0018_0016_016B
 * @implements 2B99:0018:0016:016B ()
 *
 * Called From: 2B99:000C:0012:E0C1
 */
void f__2B99_0018_0016_016B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7060), emu_cx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7070));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x002E; emu_last_cs = 0x2B99; emu_last_ip = 0x0020; emu_last_length = 0x0016; emu_last_crc = 0x016B; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7072));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7072));
	}
	f__2B99_0032_0019_5301(); return;
}

/**
 * Decompiled function f__2B99_0032_0019_5301()
 *
 * @name f__2B99_0032_0019_5301
 * @implements 2B99:0032:0019:5301 ()
 *
 * Called From: 2B99:0026:0016:016B
 */
void f__2B99_0032_0019_5301()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7062), emu_dx);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7096), 0x0);
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7068), 0x1);
		if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0046; emu_last_cs = 0x2B99; emu_last_ip = 0x0042; emu_last_length = 0x0019; emu_last_crc = 0x5301; emu_call(); return; }
		emu_shlw(&emu_cx, 0x1);
		emu_movw(&emu_ax, 0x4);
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x004B); Interrupt_Mouse();
	}
	f__2B99_004B_001E_8FB8(); return;
}

/**
 * Decompiled function f__2B99_004B_001E_8FB8()
 *
 * @name f__2B99_004B_001E_8FB8
 * @implements 2B99:004B:001E:8FB8 ()
 *
 */
void f__2B99_004B_001E_8FB8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7060));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x707C), emu_ax);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7062));
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x707E), emu_ax);
		if (emu_flags.zf) { f__2B99_007A_0001_6180(); return; }
	}
	f__2B99_005D_000C_9EC2(); return;
}

/**
 * Decompiled function f__2B99_005D_000C_9EC2()
 *
 * @name f__2B99_005D_000C_9EC2
 * @implements 2B99:005D:000C:9EC2 ()
 *
 * Called From: 2B99:0052:001E:8FB8
 */
void f__2B99_005D_000C_9EC2()
{
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
	f__2B99_0069_0008_63C3(); return;
}

/**
 * Decompiled function f__2B99_0069_0008_63C3()
 *
 * @name f__2B99_0069_0008_63C3
 * @implements 2B99:0069:0008:63C3 ()
 *
 */
void f__2B99_0069_0008_63C3()
{
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();
	f__2B99_0071_0005_F14D(); return;
}

/**
 * Decompiled function f__2B99_0071_0005_F14D()
 *
 * @name f__2B99_0071_0005_F14D
 * @implements 2B99:0071:0005:F14D ()
 *
 */
void f__2B99_0071_0005_F14D()
{
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();
	f__2B99_0076_0004_C0E6(); return;
}

/**
 * Decompiled function f__2B99_0076_0004_C0E6()
 *
 * @name f__2B99_0076_0004_C0E6
 * @implements 2B99:0076:0004:C0E6 ()
 *
 */
void f__2B99_0076_0004_C0E6()
{

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
	f__2B99_007A_0001_6180(); return;
}

/**
 * Decompiled function f__2B99_007A_0001_6180()
 *
 * @name f__2B99_007A_0001_6180
 * @implements 2B99:007A:0001:6180 ()
 *
 */
void f__2B99_007A_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2B99_007B_0019_5737()
 *
 * @name f__2B99_007B_0019_5737
 * @implements 2B99:007B:0019:5737 ()
 *
 * Called From: B503:0092:0010:58CB
 */
void f__2B99_007B_0019_5737()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0086; emu_last_cs = 0x2B99; emu_last_ip = 0x008B; emu_last_length = 0x0019; emu_last_crc = 0x5737; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_push(0x0094); f__2B99_0002_0012_E0C1();
	f__2B99_0094_0008_0A2F(); return;
}

/**
 * Decompiled function f__2B99_0094_0008_0A2F()
 *
 * @name f__2B99_0094_0008_0A2F
 * @implements 2B99:0094:0008:0A2F ()
 *
 */
void f__2B99_0094_0008_0A2F()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
