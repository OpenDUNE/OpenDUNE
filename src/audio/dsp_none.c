/** @file src/audio/dsp_none.c In case no DSP is selected, create an empty one,
 *  which ignores all input */

#include "types.h"

#include "dsp.h"

void DSP_Stop(void)
{
}

void DSP_Uninit(void)
{
}

bool DSP_Init(void)
{
	return false;
}

void DSP_Play(const uint8 *data)
{
	VARIABLE_NOT_USED(data);
}

uint8 DSP_GetStatus(void)
{
	return 0;
}
