/** @file src/os/error_logger.c System dependant error messages for systems
 *  that do not have a console available upon start (TOS and DOS). */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "types.h"
#include "strings.h"

#include "error.h"

bool g_consoleActive = true;
FILE * g_errlog = NULL;
#ifdef _DEBUG
FILE * g_outlog = NULL;
#endif

void Error(const char *format, ...) {
	va_list ap;

	if (g_errlog) {
		va_start(ap, format);
		vfprintf(g_errlog, format, ap);
		va_end(ap);
	}
	if (g_consoleActive) {
		va_start(ap, format);
		vfprintf(stderr, format, ap);
		va_end(ap);
	}
}

void Warning(const char *format, ...) {
	va_list ap;

	if (g_errlog) {
		va_start(ap, format);
		vfprintf(g_errlog, format, ap);
		va_end(ap);
	}
	if (g_consoleActive) {
		va_start(ap, format);
		vfprintf(stderr, format, ap);
		va_end(ap);
	}
}

#ifdef _DEBUG
void Debug(const char *format, ...) {
	va_list ap;

	if (g_outlog) {
		va_start(ap, format);
		vfprintf(g_outlog, format, ap);
		va_end(ap);
	}
	if (g_consoleActive) {
		va_start(ap, format);
		vfprintf(stdout, format, ap);
		va_end(ap);
	}
}
#endif
