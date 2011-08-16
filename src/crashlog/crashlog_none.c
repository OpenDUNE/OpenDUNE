/* $Id$ */

#include <stdio.h>

#if !defined(_WIN32)

#include "types.h"
#include "crashlog.h"

void CrashLog_Init()
{
}

void CrashLog_LogError(char *buffer)
{
	VARIABLE_NOT_USED(buffer);
}

void CrashLog_LogRegisters(char *buffer)
{
	VARIABLE_NOT_USED(buffer);
}

void CrashLog_LogStacktrace(char *buffer)
{
	VARIABLE_NOT_USED(buffer);
}

void CrashLog_LogOSVersion(char *buffer)
{
	VARIABLE_NOT_USED(buffer);
}

#endif /* !_WIN32 */
