/** @file saturn/common/smpc.c Controller input through the SMPC.
 *
 * Uses the INTBACK command with peripheral data only, 15-byte mode on both
 * ports (SMPC User's Manual, section 2.4, Figure 3.14 and Tables 3.10-3.20):
 * each port gives a status byte (0xF0 nothing, 0xF1 one device, or a
 * multitap and its number of connectors), then for each device an ID byte
 * (type in the high nibble, data size in the low one) and its data. */

#include "bios.h"
#include "saturn_hw.h"
#include "smpc.h"

enum { KEY_QUEUE = 16 };

static volatile uint16_t s_padState;
static volatile int s_pending;
static SmpcDevice s_devices[2];
static volatile int16_t s_mouseX, s_mouseY;   /*!< movement not taken yet */
static volatile uint8_t s_keys[KEY_QUEUE];    /*!< keyboard key numbers */
static volatile uint8_t s_keyMake[KEY_QUEUE]; /*!< 1: pressed, 0: released */
static volatile uint8_t s_keyHead, s_keyTail;

/**
 * Ask the SMPC for the peripherals on both ports (INTBACK).
 */
static void Smpc_IntbackIssue(void)
{
	SMPC_SF = 1;
	/* no SMPC status, peripheral data only */
	SMPC_IREG(0) = 0x00;
	/* PEN: return peripheral data, 15-byte mode */
	SMPC_IREG(1) = 0x08;
	SMPC_IREG(2) = 0xF0;
	SMPC_COMREG = SMPC_CMD_INTBACK;
}

/**
 * Decode one device's data into d, and take its mouse movement and key.
 *
 * @param d The device to fill in.
 * @param id Its SMPC peripheral ID.
 * @param data Its data.
 * @param size The size of the data.
 */
static void Smpc_DeviceDecode(SmpcDevice *d, uint8_t id, const uint8_t *data, int size)
{
	d->id = id;
	d->buttons = 0;
	d->analog[0] = d->analog[1] = 128;
	d->analog[2] = d->analog[3] = 0;

	if (id == 0xE3 || (id >> 4) == 2) {
		/* mouse: buttons (1 = pressed), then X and Y with their signs */
		int dx, dy;
		d->kind = SMPC_MOUSE;
		if (size < 3) return;
		d->buttons = data[0] & 0x0F;
		dx = data[1] - ((data[0] & 0x10) ? 256 : 0);
		dy = data[2] - ((data[0] & 0x20) ? 256 : 0);
		if (data[0] & 0x40) dx = (dx < 0) ? -255 : 255;
		if (data[0] & 0x80) dy = (dy < 0) ? -255 : 255;
		s_mouseX = (int16_t)(s_mouseX + dx);
		s_mouseY = (int16_t)(s_mouseY + dy);
		return;
	}

	if (size >= 2) d->buttons = (uint16_t)~((data[0] << 8) | data[1]) & 0xFFF8;
	switch (id >> 4) {
		case 0:
			d->kind = SMPC_PAD;
			break;
		case 1:
			/* 3D Controller in analog mode: stick X, Y, right and left
			 * triggers (0,0 top left) */
			d->kind = SMPC_ANALOG;
			if (size >= 6) {
				d->analog[0] = data[2];
				d->analog[1] = data[3];
				d->analog[2] = data[4];
				d->analog[3] = data[5];
			}
			break;
		case 3:
			/* keyboard: pad-like first bytes, then Make/Break and the key */
			d->kind = SMPC_KEYBOARD;
			if (size >= 4 && (data[2] & 0x09) != 0) {
				uint8_t next = (uint8_t)((s_keyHead + 1) % KEY_QUEUE);
				if (next != s_keyTail) {
					s_keys[s_keyHead] = data[3];
					s_keyMake[s_keyHead] = (data[2] & 0x08) ? 1 : 0;
					s_keyHead = next;
				}
			}
			break;
		default:
			d->kind = SMPC_OTHER;
			break;
	}
}

/**
 * Collect the result of INTBACK into the devices of both ports.
 *
 * @return The buttons of the device on port 1.
 */
static uint16_t Smpc_IntbackCollect(void)
{
	int o = 0, port;

	for (port = 0; port < 2; port++) {
		SmpcDevice *d = &s_devices[port];
		uint8_t status, taps, tap;

		d->kind = SMPC_NONE;
		d->id = 0xFF;
		d->buttons = 0;
		if (o >= 32) continue;
		status = SMPC_OREG(o++);
		taps = status & 0x0F;
		for (tap = 0; tap < taps && o < 32; tap++) {
			uint8_t id = SMPC_OREG(o++);
			uint8_t data[16];
			int size = id & 0x0F, i;

			if (size == 0x0F && o < 32) size = SMPC_OREG(o++);
			if (size > 15) size = 15;
			for (i = 0; i < size && o < 32; i++) data[i] = SMPC_OREG(o++);
			/* empty multitap connector */
			if (id == 0xFF) continue;
			/* the first device of the port (the only one without a multitap) */
			if (d->kind == SMPC_NONE) Smpc_DeviceDecode(d, id, data, i);
		}
	}

	/* stop collecting if the SMPC still holds data (more multitap devices) */
	if (SMPC_SR & SMPC_SR_PDE) SMPC_IREG(0) = 0x40;

	return s_devices[0].kind == SMPC_MOUSE ? 0 : s_devices[0].buttons;
}

/**
 * Read the standard pad on port 1 (PAD_* bits of saturn_hw.h, 1 = pressed).
 * Returns 0 if no pad is connected. Call during V-BLANK.
 *
 * @return The buttons.
 */
uint16_t Smpc_PadRead(void)
{
	while (SMPC_SF & 1) {}
	Smpc_IntbackIssue();
	while (SMPC_SF & 1) {}
	return Smpc_IntbackCollect();
}

/**
 * Issue an SMPC command without parameters (SNDOFF, ...) and wait for it.
 *
 * @param command The command (SMPC_CMD_*).
 */
void Smpc_Command(uint8_t command)
{
	/* keep the VBlank handler from issuing INTBACK in between */
	uint32_t sr = Cpu_DisableInterrupts();

	while (SMPC_SF & 1) {}
	SMPC_SF = 1;
	SMPC_COMREG = command;
	while (SMPC_SF & 1) {}
	/* the output registers no longer hold pad data */
	s_pending = 0;

	Cpu_RestoreInterrupts(sr);
}

/**
 * Read the real-time clock: year (2 bytes), weekday << 4 | month, day,
 * hours, minutes, seconds, in BCD (SMPC User's Manual, Table 3.9).
 *
 * @param clock Filled with the 7 bytes.
 */
void Smpc_ReadClock(uint8_t clock[7])
{
	uint32_t sr = Cpu_DisableInterrupts();
	int i;

	while (SMPC_SF & 1) {}
	SMPC_SF = 1;
	/* SMPC status (with the clock), no peripherals */
	SMPC_IREG(0) = 0x01;
	SMPC_IREG(1) = 0x00;
	SMPC_IREG(2) = 0xF0;
	SMPC_COMREG = SMPC_CMD_INTBACK;
	while (SMPC_SF & 1) {}
	/* OREG0: status; OREG1-7: year (2 bytes), weekday/month, day, hours,
	 * minutes, seconds, in BCD */
	for (i = 0; i < 7; i++) clock[i] = SMPC_OREG(1 + i);
	s_pending = 0;

	Cpu_RestoreInterrupts(sr);
}

/**
 * Non-blocking alternative for use from the VBlank-in interrupt: collects
 * the result of the previous INTBACK, then issues the next one.
 */
void Smpc_VBlank(void)
{
	/* previous command still running */
	if (SMPC_SF & 1) return;
	if (s_pending) s_padState = Smpc_IntbackCollect();
	Smpc_IntbackIssue();
	s_pending = 1;
}

/**
 * Pad state collected by Smpc_VBlank() (one frame old): the buttons of the
 * device on port 1.
 *
 * @return The buttons.
 */
uint16_t Smpc_PadState(void)
{
	return s_padState;
}

/**
 * The first device on ports 1 and 2.
 *
 * @param devices Filled with the devices of ports 1 and 2.
 */
void Smpc_Devices(SmpcDevice devices[2])
{
	uint32_t sr = Cpu_DisableInterrupts();
	devices[0] = s_devices[0];
	devices[1] = s_devices[1];
	Cpu_RestoreInterrupts(sr);
}

/**
 * Mouse movement since the last call (x right, y up).
 *
 * @param dx Filled with the movement to the right.
 * @param dy Filled with the movement up.
 */
void Smpc_MouseMotion(int *dx, int *dy)
{
	uint32_t sr = Cpu_DisableInterrupts();
	*dx = s_mouseX;
	*dy = s_mouseY;
	s_mouseX = s_mouseY = 0;
	Cpu_RestoreInterrupts(sr);
}

/**
 * Take the next keyboard key event; returns 0 if there is none. key is the
 * keyboard's key number (PS/2 set 2 codes), make 1 on press, 0 on release.
 *
 * @param key Filled with the key number.
 * @param make Filled with 1 for a press, 0 for a release.
 * @return 1 if there was one.
 */
int Smpc_KeyEvent(uint8_t *key, int *make)
{
	int got = 0;
	uint32_t sr = Cpu_DisableInterrupts();
	if (s_keyTail != s_keyHead) {
		*key = s_keys[s_keyTail];
		*make = s_keyMake[s_keyTail];
		s_keyTail = (uint8_t)((s_keyTail + 1) % KEY_QUEUE);
		got = 1;
	}
	Cpu_RestoreInterrupts(sr);
	return got;
}
