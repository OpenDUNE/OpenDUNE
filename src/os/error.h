/** @file src/os/error.h Platform dependant error messages. */

#ifndef OS_ERROR_H
#define OS_ERROR_H

#if defined(TOS) || defined(DOS)
#include <stdio.h>
#endif

extern void Error(const char *format, ...);
extern void Warning(const char *format, ...);
#ifdef _DEBUG
extern void Debug(const char *format, ...);
#elif !defined(__GNUC__) || __GNUC__ > 3 \
	|| (__GNUC__ == 3 && __GNUC_MINOR__ >= 3)
#define Debug(...)
#else
#define Debug(args...)
#endif

#if defined(TOS) || defined(DOS)
extern bool g_consoleActive;
extern FILE * g_errlog;
#ifdef _DEBUG
extern FILE * g_outlog;
#endif
#endif

#endif /* OS_ERROR_H */
