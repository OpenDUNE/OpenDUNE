/* $Id$ */


/* In case no MPU is selected, create an empty one, which ignores all input */

#if !defined(_WIN32) && !defined(MPU_ALSA)

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

#endif /* !_WIN32 && !MPU_ALSA */
