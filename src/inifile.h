/** @file src/inifile.h opendune.ini file handling */

#ifndef INIFILE_H
#define INIFILE_H

extern bool Load_IniFile(void);

extern void Free_IniFile(void);

extern bool SetLanguage_From_IniFile(DuneCfg *config);

extern char *IniFile_GetString(const char *key, const char *defaultValue, char *dest, uint16 length);

extern int IniFile_GetInteger(const char *key, int defaultValue);

#endif /* INIFILE_H */
