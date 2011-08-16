/* $Id$ */

#include <stdio.h>

#if !defined(_WIN32)

#include "crashlog.h"

void CrashLog_Init()
{
}

void CrashLog_LogError(char *buffer)
{
}

void CrashLog_LogRegisters(char *buffer)
{
}

void CrashLog_LogStackTrace(char *buffer)
{
}

void CrashLog_LogOSVersion(char *buffer)
{
}

#endif /* !_WIN32 */
