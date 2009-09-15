/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B99_0002_0012_467C()
 *
 * @name f__2B99_0002_0012_467C
 * @implements 2B99:0002:0012:467C ()
 *
 * Called From: 2B99:0091:0019:447B
 */
void f__2B99_0002_0012_467C()
{
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x706C));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0014; emu_last_cs = 0x2B99; emu_last_ip = 0x0006; emu_last_length = 0x0012; emu_last_crc = 0x467C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x706E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B99_0018_0016_D290(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x706E));
	emu_ip = 0x0018; emu_last_cs = 0x2B99; emu_last_ip = 0x0012; emu_last_length = 0x0012; emu_last_crc = 0x467C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B99_0018_0016_D290()
 *
 * @name f__2B99_0018_0016_D290
 * @implements 2B99:0018:0016:D290 ()
 *
 * Called From: 2B99:000C:0012:467C
 */
void f__2B99_0018_0016_D290()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7060), emu_cx.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7070));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x002E; emu_last_cs = 0x2B99; emu_last_ip = 0x0020; emu_last_length = 0x0016; emu_last_crc = 0xD290; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7072));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2B99_0032_0019_9712(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7072));
	emu_ip = 0x0032; emu_last_cs = 0x2B99; emu_last_ip = 0x002C; emu_last_length = 0x0016; emu_last_crc = 0xD290; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2B99_0032_0019_9712()
 *
 * @name f__2B99_0032_0019_9712
 * @implements 2B99:0032:0019:9712 ()
 *
 * Called From: 2B99:0026:0016:D290
 */
void f__2B99_0032_0019_9712()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7062), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7096), 0x0);
	if (emu_flags.zf) { emu_ip = 0x004B; emu_last_cs = 0x2B99; emu_last_ip = 0x003B; emu_last_length = 0x0019; emu_last_crc = 0x9712; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7068), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0046; emu_last_cs = 0x2B99; emu_last_ip = 0x0042; emu_last_length = 0x0019; emu_last_crc = 0x9712; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_ax.x, 0x4);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x004B); f__0070_0198_0005_1C66();
	f__2B99_004B_001E_A242();
}

/**
 * Decompiled function f__2B99_004B_001E_A242()
 *
 * @name f__2B99_004B_001E_A242
 * @implements 2B99:004B:001E:A242 ()
 *
 * Called From: 2B99:004B:0019:9712
 */
void f__2B99_004B_001E_A242()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x707C), emu_ax.x);
	if (!emu_flags.zf) { f__2B99_005D_000C_3390(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x707E), emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x007A; emu_last_cs = 0x2B99; emu_last_ip = 0x005B; emu_last_length = 0x001E; emu_last_crc = 0xA242; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0069);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B99; emu_last_ip = 0x0065; emu_last_length = 0x001E; emu_last_crc = 0xA242;
			emu_call();
			return;
	}
	f__2B99_0069_0008_F246();
}

/**
 * Decompiled function f__2B99_005D_000C_3390()
 *
 * @name f__2B99_005D_000C_3390
 * @implements 2B99:005D:000C:3390 ()
 *
 * Called From: 2B99:0052:001E:A242
 */
void f__2B99_005D_000C_3390()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
	emu_push(0x0069);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_03A9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B99; emu_last_ip = 0x0065; emu_last_length = 0x000C; emu_last_crc = 0x3390;
			emu_call();
			return;
	}
	f__2B99_0069_0008_F246();
}

/**
 * Decompiled function f__2B99_0069_0008_F246()
 *
 * @name f__2B99_0069_0008_F246
 * @implements 2B99:0069:0008:F246 ()
 *
 * Called From: 2B99:0069:000C:3390
 */
void f__2B99_0069_0008_F246()
{
	emu_addws(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x2B6C; f__2B6C_000E_0045_8F26();
	f__2B99_0071_0005_1446();
}

/**
 * Decompiled function f__2B99_0071_0005_1446()
 *
 * @name f__2B99_0071_0005_1446
 * @implements 2B99:0071:0005:1446 ()
 *
 * Called From: 2B99:0071:0008:F246
 */
void f__2B99_0071_0005_1446()
{
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x2B6C; f__2B6C_006E_002E_CEAB();
	f__2B99_0076_0004_0D5C();
}

/**
 * Decompiled function f__2B99_0076_0004_0D5C()
 *
 * @name f__2B99_0076_0004_0D5C
 * @implements 2B99:0076:0004:0D5C ()
 *
 * Called From: 2B99:0076:0005:1446
 */
void f__2B99_0076_0004_0D5C()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
	emu_push(0x007A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_9A7A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B99; emu_last_ip = 0x0076; emu_last_length = 0x0004; emu_last_crc = 0x0D5C;
			emu_call();
			return;
	}
	f__2B99_007A_0001_0186();
}

/**
 * Decompiled function f__2B99_007A_0001_0186()
 *
 * @name f__2B99_007A_0001_0186
 * @implements 2B99:007A:0001:0186 ()
 *
 * Called From: 2B99:007A:0004:0D5C
 */
void f__2B99_007A_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2B99_007B_0019_447B()
 *
 * @name f__2B99_007B_0019_447B
 * @implements 2B99:007B:0019:447B ()
 *
 * Called From: B503:0092:0010:D233
 */
void f__2B99_007B_0019_447B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x705E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0086; emu_last_cs = 0x2B99; emu_last_ip = 0x008B; emu_last_length = 0x0019; emu_last_crc = 0x447B; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_push(0x0094); f__2B99_0002_0012_467C();
	f__2B99_0094_0008_E60A();
}

/**
 * Decompiled function f__2B99_0094_0008_E60A()
 *
 * @name f__2B99_0094_0008_E60A
 * @implements 2B99:0094:0008:E60A ()
 *
 * Called From: 2B99:0094:0019:447B
 */
void f__2B99_0094_0008_E60A()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x705E));
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
