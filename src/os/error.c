/** @file src/os/error.c System dependant error messages. */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "types.h"
#include "strings.h"

#include "error.h"

#if defined(TOS) || defined(DOS)
bool g_consoleActive = true;
FILE * g_errlog = NULL;
#ifdef _DEBUG
FILE * g_outlog = NULL;
#endif
#endif

#if defined(TOS)
volatile uint8 g_interruptDepth = 0;

/* An interrupt handler must not call GEMDOS : drop its messages */
#define RETURN_IF_IN_INTERRUPT() if (g_interruptDepth != 0) return
#else
#define RETURN_IF_IN_INTERRUPT()
#endif

void Error(const char *format, ...) {
	va_list ap;

	RETURN_IF_IN_INTERRUPT();

	va_start(ap, format);
#if defined(TOS) || defined(DOS)
	if(g_errlog) vfprintf(g_errlog, format, ap);
	if(g_consoleActive) vfprintf(stderr, format, ap);
#else
	vfprintf(stderr, format, ap);
#endif
	va_end(ap);
}

void Warning(const char *format, ...) {
	va_list ap;

	RETURN_IF_IN_INTERRUPT();

	va_start(ap, format);
#if defined(TOS) || defined(DOS)
	if(g_errlog) vfprintf(g_errlog, format, ap);
	if(g_consoleActive) vfprintf(stderr, format, ap);
#else
	vfprintf(stderr, format, ap);
#endif
	va_end(ap);
}

#ifdef _DEBUG
void Debug(const char *format, ...) {
	va_list ap;

	RETURN_IF_IN_INTERRUPT();

	va_start(ap, format);
#if defined(TOS) || defined(DOS)
	if(g_outlog) vfprintf(g_outlog, format, ap);
	if(g_consoleActive) vfprintf(stdout, format, ap);
#else
	vfprintf(stdout, format, ap);
#endif
	va_end(ap);
}
#endif
