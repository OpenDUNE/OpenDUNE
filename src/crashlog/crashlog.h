#ifndef CRASHLOG_H
#define CRASHLOG_H

extern void CrashLog_Init(void);
extern void CrashLog_Fill(char *buffer);
extern void CrashLog_LogError(char *buffer);
extern void CrashLog_LogRegisters(char *buffer);
extern void CrashLog_LogStacktrace(char *buffer);
extern void CrashLog_LogOSVersion(char *buffer);
extern bool CrashLog_WriteCrashLog(char *buffer);

#endif /* CRASHLOG_H */
