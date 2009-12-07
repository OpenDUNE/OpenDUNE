/* $Id$ */

#ifndef CONFIG_H
#define CONFIG_H

#define DATA_DIR "data/"

MSVC_PACKED_BEGIN
/**
 * This is the layout of decoded dune.cfg.
 */
typedef struct DuneCfg {
	/* 0000(1)   */ PACK uint8  variable_0000;              /*!< ?? */
	/* 0001(1)   */ PACK uint8  musicDrv;                   /*!< Index into music drivers array. */
	/* 0002(1)   */ PACK uint8  soundDrv;                   /*!< Index into sound drivers array. */
	/* 0003(1)   */ PACK uint8  voiceDrv;                   /*!< Index into digitized sound drivers array. */
	/* 0004(1)   */ PACK bool   useMouse;                   /*!< Use Mouse. */
	/* 0005(1)   */ PACK bool   useXMS;                     /*!< Use Extended Memory. */
	/* 0006(1)   */ PACK uint8  variable_0006;              /*!< ?? */
	/* 0007(1)   */ PACK uint8  variable_0007;              /*!< ?? */
	/* 0008(1)   */ PACK uint8  language;                   /*!< 0:English, 1:French, 2:German, 3:Italian, 4:Spanish. */
	/* 0009(1)   */ PACK uint8  checksum;                   /*!< Used to check validity on config data. See Config_Read(). */
} GCC_PACKED DuneCfg;
MSVC_PACKED_END
assert_compile(sizeof(DuneCfg) == 0xA);

extern bool Config_Read(char *filename, DuneCfg *config);

extern void emu_Config_Read();

#endif /* CONFIG_H */
