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
	va_end(ap);

	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);

	MessageBox(NULL, message, "Error - OpenDUNE", MB_OK | MB_ICONERROR);
}

void Warning(const char *format, ...) {
#ifdef _DEBUG
	char message[512];
#endif
	va_list ap;

	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);

#ifdef _DEBUG
	va_start(ap, format);
	vsnprintf(message, sizeof(message), format, ap);
	va_end(ap);

	OutputDebugString(message);
#endif
}

#ifdef _DEBUG
void Debug(const char *format, ...) {
	char message[512];
	va_list ap;

	va_start(ap, format);
	vsnprintf(message, sizeof(message), format, ap);
	va_end(ap);

	va_start(ap, format);
	vfprintf(stdout, format, ap);
	va_end(ap);

	OutputDebugString(message);
}
#endif
