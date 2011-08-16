/* $Id$ */

#ifndef MPU_H
#define MPU_H

extern bool mpu_init();
extern void mpu_uninit();
extern void mpu_send(uint32 data);
extern void mpu_reset();

#endif /* MPU_H */
