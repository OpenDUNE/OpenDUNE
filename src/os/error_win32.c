/** @file src/os/error_win32.c System dependant error messages for win32. */

#include <windows.h>
#include "types.h"
#include "strings.h"

#include "error.h"

void Error(const char *format, ...) {
	char message[512];
	va_list ap;

	va_start(ap, format);
	vsnprintf(message, sizeof(message), format, ap);
	vfprintf(stderr, format, ap);
	va_end(ap);

	MessageBox(NULL, message, "Error", MB_OK);
}

void Warning(const char *format, ...) {
	char message[512];
	va_list ap;

	va_start(ap, format);
	vsnprintf(message, sizeof(message), format, ap);
	vfprintf(stderr, format, ap);
	va_end(ap);
}
