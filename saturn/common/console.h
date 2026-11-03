/** @file saturn/common/console.h Text console on the VDP2 bitmap.
 *
 * Receives stdout/stderr. It shows itself on the first write, until
 * Console_Release() hands the screen to the game; after that text is only
 * recorded, and Console_Show() brings it back (fatal errors, crashes). */

#ifndef SATURN_CONSOLE_H
#define SATURN_CONSOLE_H

#include <stdint.h>

enum { CONSOLE_LOG_SIZE = 8192 };

extern void Console_Write(const char *text, int length);
extern void Console_Release(void);
extern void Console_Show(void);

extern const uint8_t *Console_Glyph(char c);

#endif /*!< SATURN_CONSOLE_H */
