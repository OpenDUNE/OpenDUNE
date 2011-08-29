/* $Id$ */

/* In case no MPU is selected, create an empty one, which ignores all input */

#include "types.h"
#include "mpu.h"

bool mpu_init()
{
	return false;
}

void mpu_uninit()
{
}

void mpu_send(uint32 data)
{
	VARIABLE_NOT_USED(data);
}

void mpu_reset()
{
}
