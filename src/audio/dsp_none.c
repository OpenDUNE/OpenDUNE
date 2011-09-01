/* $Id$ */

/** @file src/dsp_none.c In case no DSP is selected, create an empty one,
 *  which ignores all input */

#include "types.h"

#include "dsp.h"

void DSP_Stop()
{
}

void DSP_Uninit()
{
}

bool DSP_Init()
{
	return false;
}

void DSP_Play(const uint8 *data)
{
	VARIABLE_NOT_USED(data);
}

uint8 DSP_GetStatus()
{
	return 0;
}
