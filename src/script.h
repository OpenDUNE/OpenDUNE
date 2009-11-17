/* $Id$ */

#ifndef SCRIPT_H
#define SCRIPT_H

MSVC_PACKED_BEGIN
/**
 * A Structure as stored in the memory.
 */
typedef struct ScriptEngine {
	/* 0000(4)   */ PACK csip32 script;                     /*!< Pointer to the script we are executing. */
	/* 0004(4)   */ PACK csip32 scriptInfo;                 /*!< Pointer to a struct with script information (g_global->scriptStructure/scriptUnit). */
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? */
	/* 000A(1)   */ PACK uint8  variable_0A;                /*!< ?? */
	/* 000B(1)   */ PACK uint8  variable_0B;                /*!< ?? */
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000E()    */ PACK uint8   unknown_000E[0x0006];
	/* 0014(2)   */ PACK uint16 variable_14;                /*!< ?? */
	/* 0016()    */ PACK uint8   unknown_0016[0x001E];
	/* 0034(1)   */ PACK uint8  variable_34;                /*!< ?? */
} GCC_PACKED ScriptEngine;
MSVC_PACKED_END
assert_compile(sizeof(ScriptEngine) == 0x35);

#endif /* SCRIPT_H */
