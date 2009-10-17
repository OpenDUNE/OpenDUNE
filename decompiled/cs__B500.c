/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B500_0000_0008_FE1F()
 *
 * @name f__B500_0000_0008_FE1F
 * @implements B500:0000:0008:FE1F ()
 * @implements B500:0008:000C:F964
 * @implements B500:0014:0015:D8D5
 * @implements B500:002C:000C:D965
 * @implements B500:0038:0005:0164
 * @implements B500:003D:0005:B18D
 * @implements B500:0042:000D:7184
 * @implements B500:004F:0005:B7DE
 * @implements B500:0054:000F:ACF6
 * @implements B500:0063:0006:928E
 * @implements B500:0064:0005:F68F
 * @implements B500:0069:0005:F701
 * @implements B500:006E:0012:AD3C
 * @implements B500:0082:0011:8B05
 * @implements B500:0093:0005:6143
 *
 * Called From: 3500:0020:0005:0000
 */
void f__B500_0000_0008_FE1F()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x1DD7; f__1DD7_03FD_000C_8340();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__0008;
l__0008:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7096), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7096) != 0x0) {
		emu_push(emu_cs); emu_push(0x0014); emu_cs = 0x29A3; f__29A3_02BD_0018_A1B5();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	}
	goto l__0014;
l__0014:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7011), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x7011) == 0xFFFF) goto l__002C;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x257A; emu_ip = 0x000D; emu_last_cs = 0xB500; emu_last_ip = 0x0024; emu_last_length = 0x0015; emu_last_crc = 0xD8D5; emu_call();
	/* Unresolved jump */ emu_ip = 0x0029; emu_last_cs = 0xB500; emu_last_ip = 0x0029; emu_last_length = 0x0015; emu_last_crc = 0xD8D5; emu_call();
l__002C:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x62F6), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x62F6) != 0x0) {
		emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x1FB5; f__1FB5_1A67_0005_8AB7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	}
	goto l__0038;
l__0038:
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2BD1; emu_Empty2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__003D;
l__003D:
	emu_push(emu_cs); emu_push(0x0042); emu_cs = 0x29E8; f__29E8_0F7A_000D_B1AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__0042;
l__0042:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6C66);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C68));
	if (emu_ax != 0) {

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6C66);
		emu_push(emu_cs);
		emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6C68);
		emu_push(0x004F);
		switch ((emu_cs << 16) + emu_ip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0xB500; emu_last_ip = 0x004B; emu_last_length = 0x000D; emu_last_crc = 0x7184;
				emu_call();
				return;
		}
	}
	goto l__004F;
l__004F:
	emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_0006_001C_9C72();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__0054;
l__0054:
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6E26));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x6E26)) goto l__0064;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__0063;
l__0063:
	emu_pop(&emu_cx);
	goto l__0064;
l__0064:
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x2649; f__2649_0ADA_000E_EEB3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__0069;
l__0069:
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__006E;
l__006E:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__0082;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6724));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6722));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0080); emu_cs = 0x28E4; emu_ip = 0x0002; emu_last_cs = 0xB500; emu_last_ip = 0x007B; emu_last_length = 0x0012; emu_last_crc = 0xAD3C; emu_call();
	/* Unresolved jump */ emu_ip = 0x0080; emu_last_cs = 0xB500; emu_last_ip = 0x0080; emu_last_length = 0x0012; emu_last_crc = 0xAD3C; emu_call();
l__0082:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9848));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9846));
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0093); emu_cs = 0x01F7; emu_Interrupt_Vector_Set();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3500) { ovl__3500(0xFF); }
	goto l__0093;
l__0093:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
