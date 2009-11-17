/* $Id$ */

#ifndef SCRIPT_H
#define SCRIPT_H

MSVC_PACKED_BEGIN
/**
 * A Structure as stored in the memory.
 */
typedef struct ScriptEngine {
	/* 0000(4)   */ PACK csip32 variable_00;                /*!< ?? */
	/* 0004(4)   */ PACK csip32 scriptInfo;                 /*!< Pointer to a struct with script information (g_global->scriptStructure/scriptUnit). */
	/* 0008(4)   */ PACK csip32 variable_08;                /*!< ?? */
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000E()    */ PACK uint8   unknown_000E[0x0006];
	/* 0014(2)   */ PACK uint16 variable_14;                /*!< ?? */
	/* 0016()    */ PACK uint8   unknown_0016[0x001E];
} GCC_PACKED ScriptEngine;
MSVC_PACKED_END
assert_compile(sizeof(ScriptEngine) == 0x34);

#endif /* SCRIPT_H */
