/** @file src/os/file.h OS-independent inclusion of file routines. */

#ifndef OS_FILE_H
#define OS_FILE_H

#if defined(_WIN32)
	#include <io.h>
	#if defined(_MSC_VER)
		#define unlink _unlink
	#endif /* _MSC_VER */
	#include <shlobj.h>
	#include <shlwapi.h>
#else /* _WIN32 */
	#include <unistd.h>
#endif /* _WIN32 */

#endif /* OS_FILE_H */
