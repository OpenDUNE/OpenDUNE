/* Windows implementation of the crashlog. */

#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <signal.h>
#include <malloc.h>
#include "types.h"
#include "crashlog.h"
#include "../opendune.h"

static bool s_handlingException = false;
/**
 * Stack pointer for use when 'starting' the crash handler.
 * Not static as gcc's inline assembly needs it that way.
 */
void *s_safe_esp = NULL;

static TCHAR s_crashText[1024];
static char s_crashlog[65536];
static EXCEPTION_POINTERS *s_ep;

#define MAX_SYMBOL_LEN 512
#define MAX_FRAMES     64

/* printf format specification for 32/64-bit addresses. */
#ifdef _M_AMD64
#define PRINTF_PTR "0x%016IX"
#else
#define PRINTF_PTR "0x%08X"
#endif

#if defined(_MSC_VER)
#include <dbghelp.h>

static void AppendDecodedStacktrace(char *buffer)
{
	HMODULE dbghelp;

	dbghelp = LoadLibrary(_T("dbghelp.dll"));
	if (dbghelp != NULL) {
		bool error = false;

		typedef BOOL (WINAPI * SymInitialize_t)(HANDLE, PCSTR, BOOL);
		typedef BOOL (WINAPI * SymSetOptions_t)(DWORD);
		typedef BOOL (WINAPI * SymCleanup_t)(HANDLE);
		typedef BOOL (WINAPI * StackWalk64_t)(DWORD, HANDLE, HANDLE, LPSTACKFRAME64, PVOID, PREAD_PROCESS_MEMORY_ROUTINE64, PFUNCTION_TABLE_ACCESS_ROUTINE64, PGET_MODULE_BASE_ROUTINE64, PTRANSLATE_ADDRESS_ROUTINE64);
		typedef PVOID (WINAPI * SymFunctionTableAccess64_t)(HANDLE, DWORD64);
		typedef DWORD64 (WINAPI * SymGetModuleBase64_t)(HANDLE, DWORD64);
		typedef BOOL (WINAPI * SymGetModuleInfo64_t)(HANDLE, DWORD64, PIMAGEHLP_MODULE64);
		typedef BOOL (WINAPI * SymGetSymFromAddr64_t)(HANDLE, DWORD64, PDWORD64, PIMAGEHLP_SYMBOL64);
		typedef BOOL (WINAPI * SymGetLineFromAddr64_t)(HANDLE, DWORD64, PDWORD, PIMAGEHLP_LINE64);

		SymInitialize_t funcSymInitialize;
		SymSetOptions_t funcSymSetOptions;
		SymCleanup_t funcSymCleanup;
		StackWalk64_t funcStackWalk64;
		SymFunctionTableAccess64_t funcSymFunctionTableAccess64;
		SymGetModuleBase64_t funcSymGetModuleBase64;
		SymGetModuleInfo64_t funcSymGetModuleInfo64;
		SymGetSymFromAddr64_t funcSymGetSymFromAddr64;
		SymGetLineFromAddr64_t funcSymGetLineFromAddr64;

		funcSymInitialize = (SymInitialize_t)GetProcAddress(dbghelp, "SymInitialize");
		error |= (funcSymInitialize == NULL);
		funcSymSetOptions = (SymSetOptions_t)GetProcAddress(dbghelp, "SymSetOptions");
		error |= (funcSymSetOptions == NULL);
		funcSymCleanup = (SymCleanup_t)GetProcAddress(dbghelp, "SymCleanup");
		error |= (funcSymCleanup == NULL);
		funcStackWalk64 = (StackWalk64_t)GetProcAddress(dbghelp, "StackWalk64");
		error |= (funcStackWalk64 == NULL);
		funcSymFunctionTableAccess64 = (SymFunctionTableAccess64_t)GetProcAddress(dbghelp, "SymFunctionTableAccess64");
		error |= (funcSymFunctionTableAccess64 == NULL);
		funcSymGetModuleBase64 = (SymGetModuleBase64_t)GetProcAddress(dbghelp, "SymGetModuleBase64");
		error |= (funcSymGetModuleBase64 == NULL);
		funcSymGetModuleInfo64 = (SymGetModuleInfo64_t)GetProcAddress(dbghelp, "SymGetModuleInfo64");
		error |= (funcSymGetModuleInfo64 == NULL);
		funcSymGetSymFromAddr64 = (SymGetSymFromAddr64_t)GetProcAddress(dbghelp, "SymGetSymFromAddr64");
		error |= (funcSymGetSymFromAddr64 == NULL);
		funcSymGetLineFromAddr64 = (SymGetLineFromAddr64_t)GetProcAddress(dbghelp, "SymGetLineFromAddr64");
		error |= (funcSymGetLineFromAddr64 == NULL);

		if (!error) {
			HANDLE hCur;
			STACKFRAME64 frame;
			CONTEXT ctx;
			IMAGEHLP_SYMBOL64 *sym_info;
			uint32 num;

			strcat(buffer, "\nDecoded stack trace:\n");

			/* Initialize symbol handler. */
			hCur = GetCurrentProcess();
			funcSymInitialize(hCur, NULL, TRUE);
			/* Load symbols only when needed, fail silently on errors, demangle symbol names. */
			funcSymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_FAIL_CRITICAL_ERRORS | SYMOPT_UNDNAME);

			/* Initialize starting stack frame from context record. */
			memset(&frame, 0, sizeof(frame));
	#ifdef _M_AMD64
			frame.AddrPC.Offset = s_ep->ContextRecord->Rip;
			frame.AddrFrame.Offset = s_ep->ContextRecord->Rbp;
			frame.AddrStack.Offset = s_ep->ContextRecord->Rsp;
	#else
			frame.AddrPC.Offset = s_ep->ContextRecord->Eip;
			frame.AddrFrame.Offset = s_ep->ContextRecord->Ebp;
			frame.AddrStack.Offset = s_ep->ContextRecord->Esp;
	#endif
			frame.AddrPC.Mode = AddrModeFlat;
			frame.AddrFrame.Mode = AddrModeFlat;
			frame.AddrStack.Mode = AddrModeFlat;

			/* Copy context record as StackWalk64 may modify it. */
			memcpy(&ctx, s_ep->ContextRecord, sizeof(ctx));

			/* Allocate space for symbol info. */
			sym_info = (IMAGEHLP_SYMBOL64*)_alloca(sizeof(IMAGEHLP_SYMBOL64) + MAX_SYMBOL_LEN - 1);
			sym_info->SizeOfStruct = sizeof(IMAGEHLP_SYMBOL64);
			sym_info->MaxNameLength = MAX_SYMBOL_LEN;

			/* Walk stack at most MAX_FRAMES deep in case the stack is corrupt. */
			for (num = 0; num < MAX_FRAMES; num++) {
				const char *mod_name;
				IMAGEHLP_MODULE64 module;
				DWORD64 offset;

				if (!funcStackWalk64(
	#ifdef _M_AMD64
					IMAGE_FILE_MACHINE_AMD64,
	#else
					IMAGE_FILE_MACHINE_I386,
	#endif
					hCur, GetCurrentThread(), &frame, &ctx, NULL, funcSymFunctionTableAccess64, funcSymGetModuleBase64, NULL)) break;

				if (frame.AddrPC.Offset == frame.AddrReturn.Offset) {
					strcat(buffer, " <infinite loop>\n");
					break;
				}

				/* Get module name. */
				mod_name = "???";

				module.SizeOfStruct = sizeof(module);
				if (funcSymGetModuleInfo64(hCur, frame.AddrPC.Offset, &module)) {
					mod_name = module.ModuleName;
				}

				/* Print module and instruction pointer. */
				sprintf(buffer + strlen(buffer), "[%02d] %-20s " PRINTF_PTR, num, mod_name, frame.AddrPC.Offset);

				/* Get symbol name and line info if possible. */
				if (funcSymGetSymFromAddr64(hCur, frame.AddrPC.Offset, &offset, sym_info)) {
					DWORD line_offs;
					IMAGEHLP_LINE64 line;

					sprintf(buffer + strlen(buffer), " %s + %I64u", sym_info->Name, offset);

					line.SizeOfStruct = sizeof(IMAGEHLP_LINE64);
					if (funcSymGetLineFromAddr64(hCur, frame.AddrPC.Offset, &line_offs, &line)) {
						sprintf(buffer + strlen(buffer), " (%s:%d)", line.FileName, line.LineNumber);
					}
				}
				strcat(buffer, "\n");
			}

			funcSymCleanup(hCur);
			FreeLibrary(dbghelp);

			strcat(buffer, "\n*** End of additional info ***\n");
		}
	}
}

bool WriteCrashDump(void)
{
	bool ret = false;
	HMODULE dbghelp = LoadLibrary(_T("dbghelp.dll"));
	if (dbghelp != NULL) {
		typedef BOOL (WINAPI *MiniDumpWriteDump_t)(HANDLE, DWORD, HANDLE,
				MINIDUMP_TYPE,
				CONST PMINIDUMP_EXCEPTION_INFORMATION,
				CONST PMINIDUMP_USER_STREAM_INFORMATION,
				CONST PMINIDUMP_CALLBACK_INFORMATION);
		MiniDumpWriteDump_t funcMiniDumpWriteDump = (MiniDumpWriteDump_t)GetProcAddress(dbghelp, "MiniDumpWriteDump");
		if (funcMiniDumpWriteDump != NULL) {
			HANDLE file  = CreateFile(_T("crash.dmp"), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, 0, 0);
			HANDLE proc  = GetCurrentProcess();
			DWORD procid = GetCurrentProcessId();
			MINIDUMP_EXCEPTION_INFORMATION mdei;
			MINIDUMP_USER_STREAM userstream;
			MINIDUMP_USER_STREAM_INFORMATION musi;

			userstream.Type        = LastReservedStream + 1;
			userstream.Buffer      = (void*)s_crashlog;
			userstream.BufferSize  = (ULONG)strlen(s_crashlog) + 1;

			musi.UserStreamCount   = 1;
			musi.UserStreamArray   = &userstream;

			mdei.ThreadId = GetCurrentThreadId();
			mdei.ExceptionPointers  = s_ep;
			mdei.ClientPointers     = false;

			funcMiniDumpWriteDump(proc, procid, file, MiniDumpWithDataSegs, &mdei, &musi, NULL);
			ret = true;
		}
		FreeLibrary(dbghelp);
	}
	return ret;
}
#endif /* _MSC_VER */

static void ShowCrashlogWindow(void)
{
	PrepareEnd();
	ShowCursor(TRUE);
	MessageBox(NULL, s_crashText, _T("Fatal Application Failure"), MB_ICONERROR);
	exit(2);
}

static LONG WINAPI ExceptionHandler(EXCEPTION_POINTERS *ep)
{
	if (s_handlingException) {
		PrepareEnd();
		exit(2);
	}

	s_handlingException = true;
	s_ep = ep;
	s_crashlog[0] = '\0';

	CrashLog_Fill(s_crashlog);

	_sntprintf(s_crashText, sizeof(s_crashText),
		_T("A serious fault condition occurred in the game. The game will shut down.\n")
		_T("Please send the crash information and the crash.dmp file (if any) to the developers.\n")
		_T("This will greatly help debugging. The correct place to do this is http://bugs.opendune.org. ")
		_T("Generated file(s):\n")
	);

#if defined(_MSC_VER)
	AppendDecodedStacktrace(s_crashlog);
	if (WriteCrashDump()) _tcscat(s_crashText, "crash.dmp\n");
#endif /* _MSC_VER */

	if (CrashLog_WriteCrashLog(s_crashlog)) _tcscat(s_crashText, _T("crash.log\n"));

	if (s_safe_esp != NULL) {
#ifdef _M_AMD64
		ep->ContextRecord->Rip = (DWORD64)ShowCrashlogWindow;
		ep->ContextRecord->Rsp = (DWORD64)s_safe_esp;
#else
		ep->ContextRecord->Eip = (DWORD)ShowCrashlogWindow;
		ep->ContextRecord->Esp = (DWORD)s_safe_esp;
#endif
		return EXCEPTION_CONTINUE_EXECUTION;
	}

	PrepareEnd();
	return EXCEPTION_EXECUTE_HANDLER;
}

static void CDECL CustomAbort(int signal)
{
	VARIABLE_NOT_USED(signal);
	RaiseException(0xE1212012, 0, 0, NULL);
}

void CrashLog_Init(void)
{
#ifdef _M_AMD64
	CONTEXT ctx;
	RtlCaptureContext(&ctx);

	/* The stack pointer for AMD64 must always be 16-byte aligned inside a
	 * function. As we are simulating a function call with the safe ESP value,
	 * we need to subtract 8 for the imaginary return address otherwise stack
	 * alignment would be wrong in the called function. */
	s_safe_esp = (void *)(ctx.Rsp - 8);
#else
#if defined(_MSC_VER)
	_asm {
		mov s_safe_esp, esp
	}
#else
	__asm__("movl %esp, _s_safe_esp");
#endif
#endif

	/* SIGABRT is not an unhandled exception, so we need to intercept it. */
	signal(SIGABRT, CustomAbort);
#if defined(_MSC_VER)
	/* Don't show abort message as we will get the crashlog window anyway. */
	_set_abort_behavior(0, _WRITE_ABORT_MSG);
#endif
	SetUnhandledExceptionFilter(ExceptionHandler);
}

void CrashLog_LogError(char *buffer)
{
	sprintf(buffer + strlen(buffer),
			"Crash reason:\n"
			" Exception: %.8X\n"
#ifdef _M_AMD64
			" Location:  %.16IX\n"
#else
			" Location:  %.8X\n"
#endif
			"\n",
			(int)s_ep->ExceptionRecord->ExceptionCode,
			(size_t)s_ep->ExceptionRecord->ExceptionAddress
	);
}

void CrashLog_LogRegisters(char *buffer)
{
	byte *b;
	int i;

	strcat(buffer, "Registers:\n");
#ifdef _M_AMD64
	sprintf(buffer + strlen(buffer),
		" RAX: %.16I64X RBX: %.16I64X RCX: %.16I64X RDX: %.16I64X\n"
		" RSI: %.16I64X RDI: %.16I64X RBP: %.16I64X RSP: %.16I64X\n"
		" R8:  %.16I64X R9:  %.16I64X R10: %.16I64X R11: %.16I64X\n"
		" R12: %.16I64X R13: %.16I64X R14: %.16I64X R15: %.16I64X\n"
		" RIP: %.16I64X EFLAGS: %.8lX\n",
		s_ep->ContextRecord->Rax,
		s_ep->ContextRecord->Rbx,
		s_ep->ContextRecord->Rcx,
		s_ep->ContextRecord->Rdx,
		s_ep->ContextRecord->Rsi,
		s_ep->ContextRecord->Rdi,
		s_ep->ContextRecord->Rbp,
		s_ep->ContextRecord->Rsp,
		s_ep->ContextRecord->R8,
		s_ep->ContextRecord->R9,
		s_ep->ContextRecord->R10,
		s_ep->ContextRecord->R11,
		s_ep->ContextRecord->R12,
		s_ep->ContextRecord->R13,
		s_ep->ContextRecord->R14,
		s_ep->ContextRecord->R15,
		s_ep->ContextRecord->Rip,
		s_ep->ContextRecord->EFlags
	);
#else
	sprintf(buffer + strlen(buffer),
		" EAX: %.8X EBX: %.8X ECX: %.8X EDX: %.8X\n"
		" ESI: %.8X EDI: %.8X EBP: %.8X ESP: %.8X\n"
		" EIP: %.8X EFLAGS: %.8X\n",
		(int)s_ep->ContextRecord->Eax,
		(int)s_ep->ContextRecord->Ebx,
		(int)s_ep->ContextRecord->Ecx,
		(int)s_ep->ContextRecord->Edx,
		(int)s_ep->ContextRecord->Esi,
		(int)s_ep->ContextRecord->Edi,
		(int)s_ep->ContextRecord->Ebp,
		(int)s_ep->ContextRecord->Esp,
		(int)s_ep->ContextRecord->Eip,
		(int)s_ep->ContextRecord->EFlags
	);
#endif

	strcat(buffer, "\n Bytes at instruction pointer:\n");
#ifdef _M_AMD64
	b = (byte*)s_ep->ContextRecord->Rip;
#else
	b = (byte*)s_ep->ContextRecord->Eip;
#endif
	for (i = 0; i != 24; i++) {
		if (IsBadReadPtr(b, 1)) {
			strcat(buffer, " ??");
		} else {
			sprintf(buffer + strlen(buffer), " %.2X", *b);
		}
		b++;
	}
	strcat(buffer, "\n\n");
}

void CrashLog_LogStacktrace(char *buffer)
{
	uint32* b;
	int i, j;

	strcat(buffer, "Stack trace:\n");
#ifdef _M_AMD64
	b = (uint32*)s_ep->ContextRecord->Rsp;
#else
	b = (uint32*)s_ep->ContextRecord->Esp;
#endif
	for (j = 0; j != 24; j++) {
		for (i = 0; i != 8; i++) {
			if (IsBadReadPtr(b, sizeof(uint32))) {
				strcat(buffer, " ????????");
			} else {
				sprintf(buffer + strlen(buffer), " %.8X", *b);
			}
			b++;
		}
		strcat(buffer, "\n");
	}
	strcat(buffer, "\n");
}

void CrashLog_LogOSVersion(char *buffer)
{
	OSVERSIONINFOA os;
	os.dwOSVersionInfoSize = sizeof(os);
	GetVersionExA(&os);

	sprintf(buffer + strlen(buffer),
			"Operating system:\n"
			" Name:     Windows\n"
			" Release:  %d.%d.%d (%s)\n",
			(int)os.dwMajorVersion,
			(int)os.dwMinorVersion,
			(int)os.dwBuildNumber,
			os.szCSDVersion
	);
}
