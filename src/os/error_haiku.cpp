/** @file src/os/error_haiku.c System dependent error messages for Haiku. */

#include <new>

#include <Alert.h>
#include <AppFileInfo.h>
#include <Application.h>
#include <File.h>
#include <image.h>

extern "C" {

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "strings.h"

#include "error.h"

static void AppInit(void) {
	image_info info;
	int32 cookie = 0;
	while (get_next_image_info(B_CURRENT_TEAM, &cookie, &info) == B_OK) {
		if (info.type == B_APP_IMAGE) {
			BFile me(info.name, O_RDONLY);
			if (me.InitCheck() == B_OK) {
				BAppFileInfo app_info(&me);
				if (app_info.InitCheck() == B_OK) {
					char signature[B_MIME_TYPE_LENGTH];
					if (app_info.GetSignature(signature) == B_OK) {
						new BApplication(signature);
						return;
					}
				}
			}
		}
	}
	new BApplication("application/x-vnd.opendune");
}

void Error(const char *format, ...) {
	char message[512];
	va_list ap;

	va_start(ap, format);
	vsnprintf(message, sizeof(message), format, ap);
	va_end(ap);

	fputs(message, stderr);

	/* Some checks are done before initializing SDL, so we may not have SDL
	 * nor a BApplication to show the alert
	 */
	if (be_app == NULL) AppInit();

	BAlert* alert = new(std::nothrow) BAlert("Error - OpenDUNE", message,
		"OK", NULL, NULL, B_WIDTH_AS_USUAL, B_STOP_ALERT);
	if (alert != NULL) {
		alert->SetShortcut(0, B_ESCAPE);
		alert->Go();
	}
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

}
