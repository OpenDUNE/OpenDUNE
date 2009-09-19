#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"
#include "input.h"

/**
 * Add a value to the input history.
 *
 * @param value The value to add to the history.
 * @return Zero if there was no more room in the history, else non-zero.
 *
 * @name input_HistoryAdd
 * @implements 29E8:0A19:002A:2DE6 ()
 * @implements 29E8:0A43:0007:9B22
 */
uint8 input_HistoryAdd(uint16 value)
{
	uint16 position = emu_get_memory16(emu_cs, 0x00,  0x1B1);
	uint16 positionNext = (position + 2) & 0xFF;

	if (positionNext == emu_get_memory16(emu_cs, 0x00,  0x1AF)) return 0;

	emu_get_memory16(emu_cs, position,  0xAF) = value;
	emu_get_memory16(emu_cs, 0x00,  0x1B1) = positionNext;
	return 1;
}

/**
 * Input handler
 *
 * @name p__29E8_0A8A_000A_EB53
 * @implements 29E8:0A8A:000A:EB53 ()
 * @implements 29E8:0AD6:0010:7A1F
 * @implements 29E8:0C40:0012:D969
 * @implements 29E8:0C52:0018:DE31
 * @implements 29E8:0C6A:0003:1D11
 * @implements 29E8:0C6D:0009:DC81
 * @implements 29E8:0C76:0014:0C0D
 * @implements 29E8:0C8A:0099:E45D
 * @implements 29E8:0C95:008E:26E3
 * @implements 29E8:0CBB:0068:44F0
 * @implements 29E8:0CC0:0063:A66A
 * @implements 29E8:0CE7:003C:E58A
 * @implements 29E8:0D2C:0005:D17A
 * @implements 29E8:0D31:0016:113C
 */
void p__29E8_0A8A_000A_EB53()
{
	emu_ax.x = emu_get_memory16(emu_ss, emu_bp,  0x6); // First parameter, button state
	if (emu_ax.x == 0) return;

	emu_es = emu_ds;
	emu_ds = emu_cs;

	if ((emu_get_memory16(emu_cs, 0x00,  0x1B3) & 0x1000) == 0x1000) {
		/* Unresolved jump */ emu_ip = 0x0AE6; emu_last_cs = 0x29E8; emu_last_ip = 0x0AE1; emu_last_length = 0x0010; emu_last_crc = 0x7A1F; emu_call();
		return;
	}

	emu_si = emu_get_memory16(emu_cs, 0x00,  0x1B1);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
	emu_di = emu_get_memory16(emu_cs, 0x00,  0x1AF);

	if (!input_HistoryAdd(emu_ax.x)) {
		emu_get_memory16(emu_cs, 0x00,  0x1B1) = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_ax.x = 0;
		return;
	}

	emu_ax.x = emu_get_memory16(emu_ss, emu_bp,  0x6); // First parameter, button state
	if (emu_ax.l == 0x2D || emu_ax.l == 0x41 || emu_ax.l == 0x42) {
		if (input_HistoryAdd(emu_get_memory16(emu_cs, 0x00,  0xA98))) {
			emu_get_memory16(emu_cs, 0x00,  0x1B1) = emu_get_memory16(emu_ss, emu_bp, -0x2);
			emu_ax.x = 0;
			return;
		}
		emu_get_memory16(emu_ss, emu_bp, -0x4) += 0x2;

		if (input_HistoryAdd(emu_get_memory16(emu_cs, 0x00,  0xA9A))) {
			emu_get_memory16(emu_cs, 0x00,  0x1B1) = emu_get_memory16(emu_ss, emu_bp, -0x2);
			emu_ax.x = 0;
			return;
		}
		emu_get_memory16(emu_ss, emu_bp, -0x4) += 0x2;
	}

	emu_ax.x = emu_get_memory16(emu_ss, emu_bp,  0x6); // First parameter, button state
	emu_bx.x = 0x101;

	/* Was there a button action? */
	if (emu_ax.l != 0x2D && emu_ax.l != 0x7F) {
		/* Was it button release? */
		if ((emu_ax.h & 0x8) != 0) {
			emu_bx.l = 0;
			/* Check if it was not the left or right mouse button */
			if ((emu_get_memory16(emu_cs, 0x00,  0x1B3) & 0x800) == 0) {
				if (emu_ax.l != 0x41 && emu_ax.l != 0x42) {
					emu_get_memory16(emu_cs, 0x00,  0x1B1) = emu_si;
				}
			}
		}
	} else {
		emu_get_memory16(emu_cs, 0x00,  0x1B1) = emu_si;
	}

	emu_di = (emu_ax.x & 0x3F) >> 3;
	emu_bx.x <<= (emu_ax.l & 0x07);
	emu_bx.h = ~emu_bx.h;

	if ((emu_bx.l & emu_get_memory8(emu_cs, emu_di,  0x232)) != 0) {
		if ((emu_get_memory16(emu_cs, 0x00,  0x1B3) & 0x1) == 0) {
			emu_get_memory16(emu_cs, 0x00,  0x1B1) = emu_si;
		}
	}

	emu_get_memory8(emu_cs, emu_di,  0x232) &= emu_bx.h;
	emu_get_memory8(emu_cs, emu_di,  0x232) |= emu_bx.l;

	emu_ax.x = 0x353F;
	emu_ds = 0x353F;

	if (emu_get_memory8(emu_ds, 0x00,  0x7010) != 0x1) {
		emu_ax.x = 0x1;
		return;
	}

	emu_ax.x = emu_get_memory16(emu_ss, emu_bp,  0x6); // First parameter, button state
	if (emu_ax.l == 0x7D) {
		emu_ax.x = 0x1;
		return;
	}

	emu_get_memory16(emu_cs, 0x00,  0xA94) = emu_ax.x;
	emu_ax.x = emu_get_memory16(emu_ds, 0x00,  0x76A6);
	emu_get_memory16(emu_cs, 0x00,  0xA96) = emu_ax.x;

	emu_bx.x = 0xA94;
	emu_cx.x = 0;

	emu_push(emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(emu_bx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7011));
	emu_push(emu_cs); emu_push(0x0D23); f__1FB5_0E9C_001B_37D1();
	emu_sp += 10;

	emu_get_memory16(emu_ds, 0x00, 0x76A6) = 0x0000;
	emu_ax.x = 1;
	return;
}

/**
 * Input handler
 *
 * @name p__29E8_0A4A_0040_5428
 * @implements 29E8:0A4A:0040:5428 ()
 * @implements 29E8:0D3A:000D:2768
 */
void p__29E8_0A4A_0040_5428()
{
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_sp -= 0x4; // 2 local variables

	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_pushf();
	emu_cli();

	/* Our data offset */
	emu_ds = 0x353F;

	emu_get_memory16(emu_cs, 0x00,  0x1B3) = emu_get_memory16(emu_ds, 0x00,  0x700E);
	emu_get_memory16(emu_cs, 0x00,  0xA98) = emu_get_memory16(emu_ds, 0x00,  0x7060); // New X position
	emu_get_memory16(emu_cs, 0x00,  0xA9A) = emu_get_memory16(emu_ds, 0x00,  0x7062); // New Y position

	if (emu_get_memory8(emu_ds, 0x00,  0x7010) != 0x01) {
		p__29E8_0A8A_000A_EB53();
	} else {
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x4;
		if (emu_get_memory8(emu_ds, 0x00, -0x6794) == 0x0) p__29E8_0A8A_000A_EB53();
	}

	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
