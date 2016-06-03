/** @file src/os/error_osx.c System dependant error messages for Mac OS X. */ 
#include <CoreFoundation/CoreFoundation.h>
#include "types.h"
#include "strings.h"

#include "error.h"

void Error(const char *format, ...) {
	va_list ap;
	CFStringRef header = CFSTR("Error - OpenDUNE");
	CFStringRef message;
	CFStringRef formatStr;

	formatStr = CFStringCreateWithCString(kCFAllocatorDefault, format, kCFStringEncodingMacRoman);

	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);

	va_start(ap, format);
	message = CFStringCreateWithFormatAndArguments(kCFAllocatorDefault, NULL, formatStr, ap);
	va_end(ap);

	/* CFUserNotificationDisplayNotice = no response
	 * CFUserNotificationDisplayAlert = wait for button to be pressed */
	CFUserNotificationDisplayAlert(0, kCFUserNotificationStopAlertLevel/* | kCFUserNotificationNoDefaultButtonFlag*/,
	                               NULL/*iconURL*/, NULL/*soundURL*/, NULL/*localizationURL*/,
	                               header, message,
	                               NULL/*defaultButtonTitle*/, NULL, NULL, NULL);
	CFRelease(header);
	CFRelease(message);
	CFRelease(formatStr);
}

void Warning(const char *format, ...) {
	va_list ap;

	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);
}

#ifdef _DEBUG
void Debug(const char *format, ...) {
	va_list ap;

	va_start(ap, format);
	vfprintf(stdout, format, ap);
	va_end(ap);
}
#endif
