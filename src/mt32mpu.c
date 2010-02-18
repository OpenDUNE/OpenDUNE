/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mt32mpu.h"
#include "os/math.h"
#include "os/endian.h"

extern void f__AB00_08CE_005F_AC14();
extern void f__AB00_184D_004F_7B67();
extern void f__AB00_18AC_0082_307C();
extern void f__AB00_1A90_002B_D292();
extern void f__AB00_1B48_0023_740C();
extern void f__AB00_1C49_0022_C4C7();

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

void MPU_Interrupt()
{
	static bool locked = false;
	uint16 count;

	if (locked) return;

	locked = true;

	emu_get_memory16(0x44AF, 0x00, 0x1314) = -4;
	count = emu_get_memory16(0x44AF, 0x00, 0x1312);
	while (count-- != 0) {
		uint16 index;
		csip32 data_csip;
		MSData *data;

		do {
			emu_get_memory16(0x44AF, 0x00, 0x1314) += 4;
			index = emu_get_memory16(0x44AF, 0x00, 0x1314);
		} while (emu_get_memory16(0x44AF, index, 0x12F4) == 0x0);

		data_csip = emu_get_csip32(0x44AF, index, 0x12F2);
		data = (MSData *)emu_get_memorycsip(data_csip);

		if (data->variable_001A != 0x1) continue;

		data->variable_0030 += data->variable_0032;

		while (data->variable_0030 >= 0x64) {
			uint32 value;

			data->variable_0030 -= 0x64;

			value = data->variable_0048;
			value += data->variable_0044;

			if ((int32)value >= (int32)data->variable_004C) {
				value -= data->variable_004C;
				if (++data->variable_003E >= data->variable_0042) {
					data->variable_003E = 0x0;
					data->variable_0040++;
				}
			}

			data->variable_0048 = value;

			/* Handle note length */
			index = -1;
			while (data->noteOnCount != 0) {
				uint16 chan;
				uint8 note;
				while (++index < 0x20) {
					if (data->noteOnChans[index] != 0xFF) break;
				}
				if (index == 0x20) break;

				emu_subw(&data->noteOnLengthLSB[index], 0x1);
				emu_sbbw(&data->noteOnLengthMSB[index], 0x0);
				if (!(emu_flags.sf != emu_flags.of)) continue;

				chan = data->chanMaps[data->noteOnChans[index]];
				data->noteOnChans[index] = 0xFF;
				note = data->noteOnNotes[index];
				emu_get_memory8(0x44AF, chan, 0x13DE)--;

				/* Note Off */
				emu_push(0);
				emu_push(note);
				emu_push(0x80 | chan);
				emu_push(emu_cs); emu_push(0x1E10); f__AB00_08CE_005F_AC14();
				emu_sp += 6;

				data->noteOnCount--;
			}

			if (--data->delay <= 0) {
				do {
					uint8 status;
					uint8 chan;
					uint8 data1;
					uint8 data2;
					uint16 nb;

					if (data->sound.s.ip >= 0x8000) {
						data->sound.s.cs += data->sound.s.ip >> 4;
						data->sound.s.ip &= 0xF;
					}

					status = emu_get_memorycsip(data->sound)[0];

					if (status < 0x80) {
						/* Set a delay before next command. */
						data->sound.s.ip++;
						data->delay = status;
						break;
					}

					chan = status & 0xF;
					status &= 0xF0;
					data1 = emu_get_memorycsip(data->sound)[1];
					data2 = emu_get_memorycsip(data->sound)[2];

					if (status >= 0xF0) {
						emu_push(data_csip.s.cs); emu_push(data_csip.s.ip);
						if (chan != 0xF) {
							emu_push(emu_cs); emu_push(0x1EA8); f__AB00_1C49_0022_C4C7();
						} else {
							emu_push(emu_cs); emu_push(0x1EB5); f__AB00_1B48_0023_740C();
						}
						emu_sp += 4;
						nb = emu_ax;
					} else if (status >= 0xE0) {
						data->pitchWheelLSB[chan] = data1;
						data->pitchWheelMSB[chan] = data2;
						emu_get_memory8(0x44AF, chan, 0x13BE) = data1;
						emu_get_memory8(0x44AF, chan, 0x13CE) = data2;
						if ((emu_get_memory8(0x44AF, chan, 0x13EE) & 0x80) == 0) {;
							emu_push(data2);
							emu_push(data1);
							emu_push(status | data->chanMaps[chan]);
							emu_push(emu_cs); emu_push(0x1F01); f__AB00_08CE_005F_AC14();
							emu_sp += 6;
						}
						nb = 0x3;
					} else if (status >= 0xD0) {
						if ((emu_get_memory8(0x44AF, chan, 0x13EE) & 0x80) == 0) {;
							emu_push(data2);
							emu_push(data1);
							emu_push(status | data->chanMaps[chan]);
							emu_push(emu_cs); emu_push(0x1F01); f__AB00_08CE_005F_AC14();
							emu_sp += 6;
						}
						nb = 0x2;
					} else if (status >= 0xC0) {
						data->programs[chan] = data1;
						emu_get_memory8(0x44AF, chan, 0x13AE) = data1;
						if ((emu_get_memory8(0x44AF, chan, 0x13EE) & 0x80) == 0) {;
							emu_push(data2);
							emu_push(data1);
							emu_push(status | data->chanMaps[chan]);
							emu_push(emu_cs); emu_push(0x1F01); f__AB00_08CE_005F_AC14();
							emu_sp += 6;
						}
						nb = 0x2;
					} else if (status >= 0xB0) {
						emu_push(data2);
						emu_push(data1);
						emu_push(chan);
						emu_push(data_csip.s.cs); emu_push(data_csip.s.ip);
						emu_push(emu_cs); emu_push(0x1EC5); f__AB00_18AC_0082_307C();
						emu_sp += 10;
						nb = 0x3;
					} else if (status >= 0xA0) {
						if ((emu_get_memory8(0x44AF, chan, 0x13EE) & 0x80) == 0) {;
							emu_push(data2);
							emu_push(data1);
							emu_push(status | data->chanMaps[chan]);
							emu_push(emu_cs); emu_push(0x1F01); f__AB00_08CE_005F_AC14();
							emu_sp += 6;
						}
						nb = 0x3;
					} else {
						emu_push(data_csip.s.cs); emu_push(data_csip.s.ip);
						emu_push(emu_cs); emu_push(0x1E96); f__AB00_1A90_002B_D292();
						emu_sp += 4;
						nb = emu_ax;
					}

					data->sound.s.ip += nb;
				} while (data->variable_001A == 0x1);
			}
			if (data->variable_001A != 0x1) break;
		}

		if (data->variable_001A != 0x1) continue;

		if (data->variable_0032 != data->variable_0034) {
			uint32 v;
			uint16 i;

			v = data->variable_0036;
			v += 0x53;
			i = 0xFFFF;

			do {
				i++;
				data->variable_0036 = v;
				v -= data->variable_003A;
			} while ((int32)v >= 0);

			if (i != 0){
				if (data->variable_0032 >= data->variable_0034) {
					data->variable_0032 = max(data->variable_0032 - i, data->variable_0034);
				} else {
					data->variable_0032 = min(data->variable_0032 + i, data->variable_0034);
				}
			}
		}

		if (data->variable_0024 != data->variable_0026) {
			uint32 v;
			uint16 i;

			v = data->variable_0028;
			v += 0x53;
			i = 0xFFFF;

			do {
				i++;
				data->variable_0028 = v;
				v -= data->variable_002C;
			} while ((int32)v >= 0);

			if (i != 0){
				if (data->variable_0024 >= data->variable_0026) {
					data->variable_0024 = max(data->variable_0024 - i, data->variable_0026);
				} else {
					data->variable_0024 = min(data->variable_0024 + i, data->variable_0026);
				}
				emu_push(data_csip.s.cs); emu_push(data_csip.s.ip);
				emu_push(emu_cs); emu_push(0x1FA2); f__AB00_184D_004F_7B67();
				emu_sp += 4;
			}
		}
	}

	locked = false;

	return;
}

csip32 MPU_FindSoundStart(csip32 file, uint16 index)
{
	csip32 ret;
	uint32 total;

	ret.csip = 0;

	index++;

	while (true) {
		if (emu_get_memory32(file.s.cs, file.s.ip, 0) != ' TAC' && emu_get_memory32(file.s.cs, file.s.ip, 0) != 'MROF') return ret;
		if (emu_get_memory32(file.s.cs, file.s.ip, 8) == 'DIMX') break;

		file.s.ip += BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) + 8;
		file.s.cs += file.s.ip >> 4;
		file.s.ip &= 0xF;
	}

	total = BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) - 5;

	if (emu_get_memory32(file.s.cs, file.s.ip, 0) == 'MROF') return (index == 1) ? file : ret;

	file.s.ip += 0xC;

	while (true) {
		uint16 size;

		if (emu_get_memory32(file.s.cs, file.s.ip, 8) == 'DIMX' && --index == 0) break;

		size = BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) + 8;
		total -= size;
		if ((int32)total < 0) return ret;

		file.s.ip += size;
		file.s.cs += file.s.ip >> 4;
		file.s.ip &= 0xF;
	}

	return file;
}

uint16 MPU_SetData(csip32 file, uint16 index, csip32 data_csip, csip32 variable_0012)
{
	uint16 i;
	uint16 size;
	MSData *data;

	for (i = 0; i < 8; i++) {
		if (emu_get_memory16(0x44AF, i * 4, 0x12F4) == 0) break;
	}
	if (i == 8) return 0xFFFF;

	file = MPU_FindSoundStart(file, index);

	if (file.csip == 0) return 0xFFFF;

	size = 0xC;
	emu_get_memory32(0x44AF, i * 4, 0x12F2) = data_csip.csip;
	data = (MSData*)emu_get_memorycsip(data_csip);
	data->TIMB.csip = 0;
	data->RBRN.csip = 0;
	data->EVNT.csip = 0;

	while (emu_get_memory32(file.s.cs, file.s.ip, 0) != 'TNVE') {
		file.s.ip += size;
		file.s.cs += file.s.ip >> 4;
		file.s.ip &= 0xF;

		size = BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) + 8;

		if (emu_get_memory32(file.s.cs, file.s.ip, 0) == 'BMIT') {
			data->TIMB = file;
			continue;
		}

		if (emu_get_memory32(file.s.cs, file.s.ip, 0) == 'NRBR') {
			data->RBRN = file;
			continue;
		}
	}

	data->index = i;
	data->EVNT = file;
	data->variable_0012 = variable_0012;
	data->variable_0018 = 0;
	data->variable_001A = 0;
	data->variable_001C = 0;

	emu_get_memory16(0x44AF, 0x0, 0x1312)++;

	MPU_InitData(data);

	return i;
}

void MPU_InitData(MSData *data)
{
	uint8 i;

	for (i = 0; i < 4; i++) data->variable_0060[i] = 0xFFFF;

	for (i = 0; i < 16; i++) {
		data->chanMaps[i] = i;
		data->programs[i] = 0xFF;
		data->pitchWheelLSB[i] = 0xFF;
		data->pitchWheelMSB[i] = 0xFF;
		data->variable_00A8[i] = 0xFF;
	}

	for (i = 0; i < 144; i++) data->variable_00B8[i] = 0xFF;

	for (i = 0; i < 32; i++) data->noteOnChans[i] = 0xFF;

	data->variable_0010 = 0xFFFF;
	data->delay = 0;
	data->noteOnCount = 0;
	data->variable_0024 = 0x5A;
	data->variable_0026 = 0x5A;
	data->variable_0030 = 0;
	data->variable_0032 = 0x64;
	data->variable_0034 = 0x64;
	data->variable_003E = 0;
	data->variable_0040 = 0;
	data->variable_0042 = 4;
	data->variable_0044 = 0x208D5;
	data->variable_0048 = 0x208D5;
	data->variable_004C = 0x7A1200;
}
