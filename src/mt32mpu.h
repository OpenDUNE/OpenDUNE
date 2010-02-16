/* $Id$ */

#ifndef MT32MPU_H
#define MT32MPU_H

extern bool MPU_Reset();
extern void MPU_UART();
extern void MPU_WriteData(uint8 data);
extern void MPU_Interrupt();


extern void emu_MPU_Reset();
extern void emu_MPU_UART();
extern void emu_MPU_WriteData();
extern void emu_MPU_Interrupt();

#endif /* MT32MPU_H */
