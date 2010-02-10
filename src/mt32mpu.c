/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "mt32mpu.h"


static bool MPU_WriteCommand(uint8 command)
{
	uint16 i;
	bool ret = false;

	emu_pushf();
	emu_cli();

	for (i = 0; i < 0xFFFF; i++) {
		uint8 value;
		emu_inb(&value, 0x331);
		if ((value & 0x40) == 0) break;
	}

	emu_outb(0x331, command);

	for (i = 0; !ret && i < 0xFFFF; i++) {
		uint8 value;
		emu_inb(&value, 0x331);
		if ((value & 0x80) != 0) continue;
		emu_inb(&value, 0x330);
		if (value == 0xFE) ret = true;
	}

	emu_popf();

	return ret;
}

bool MPU_Reset()
{
	bool ret;

	emu_pushf();
	emu_cli();

	ret = MPU_WriteCommand(0xFF);
	if (!ret) ret = MPU_WriteCommand(0xFF);

	emu_popf();

	return ret;
}

void MPU_UART()
{
	emu_pushf();
	emu_cli();

	MPU_WriteCommand(0x3F);

	emu_popf();
}

void MPU_WriteData(uint8 data)
{
	uint8 value;

	while (true) {
		emu_inb(&value, 0x331);
		if ((value & 0x40) == 0) break;
		if ((value & 0x80) != 0) continue;
		emu_sti();
		emu_inb(&value, 0x330);
	}

	emu_outb(0x330, data);
}
