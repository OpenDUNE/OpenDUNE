/* $Id$ */

/** @file src/global.h Global data definitions. */

#ifndef GLOBAL_H
#define GLOBAL_H

#include "script/script.h"
#include "config.h"
#include "driver.h"
#include "sound.h"
#include "gui/widget.h"

/*
 * Segments:
 *   2C94 -> StructureInfo array (starts at 2C94:000A).
 *   2D07 -> UnitInfo array.
 *   2E8A -> ?? array (starts at 2E8A:000E)
 *   2E8A -> ActionInfo array (starts at 2E8A:006E)
 *   2E9C:0000 -> FileInfo array.
 *   2E9C:323F -> Map array (2 bytes per tile).
 *   353F -> Global data.
 */

MSVC_PACKED_BEGIN
/** REMOVED (never ever used) */
typedef struct struct_7B68 {
	/* 0000(1)   */ PACK uint8  variable_0000;              /*!< ?? */
	/* 0001(1)   */ PACK uint8  variable_0001;              /*!< ?? */
	/* 0002(4)   */ PACK csip32 variable_0002;              /*!< CS:IP of a function. */
} GCC_PACKED struct_7B68;
MSVC_PACKED_END
assert_compile(sizeof(struct_7B68) == 0x6);

MSVC_PACKED_BEGIN
typedef struct struct_19A8 {
	/* 0000(4)   */ PACK csip32 string;                     /*!< Pointer to a string. */
	/* 0004(1)   */ PACK uint8  variable_0004;              /*!< ?? */
	/* 0005(1)   */ PACK uint8  variable_0005;              /*!< ?? */
	/* 0006(2)   */ PACK uint16 flags;                      /*!< ?? */
} GCC_PACKED struct_19A8;
MSVC_PACKED_END
assert_compile(sizeof(struct_19A8) == 0x8);

MSVC_PACKED_BEGIN
typedef struct struct_19F0 {
	/* 0000(2)   */ PACK uint16 stringID;                   /*!< ?? */
	/* 0002(2)   */ PACK uint16 variable_0002;              /*!< ?? */
	/* 0004(1)   */ PACK uint8  variable_0004;              /*!< ?? */
	/* 0005(1)   */ PACK uint8  top;                        /*!< ?? */
	/* 0006(1)   */ PACK uint8  variable_0006;              /*!< ?? */
	/* 0007(1)   */ PACK uint8  variable_0007;              /*!< ?? */
	/* 0008(1)   */ PACK uint8  variable_0008;              /*!< ?? */
	/* 0009(1)   */ PACK uint8  variable_0009;              /*!< ?? */
} GCC_PACKED struct_19F0;
MSVC_PACKED_END
assert_compile(sizeof(struct_19F0) == 0xA);

MSVC_PACKED_BEGIN
typedef struct struct_1A2C {
	/* 0000(1)   */ PACK uint8  variable_0000;              /*!< ?? */
	/* 0001(1)   */ PACK uint8  voiceID;                    /*!< ?? */
	/* 0002(1)   */ PACK uint8  variable_0002;              /*!< ?? */
} GCC_PACKED struct_1A2C;
MSVC_PACKED_END
assert_compile(sizeof(struct_1A2C) == 0x3);

MSVC_PACKED_BEGIN
typedef struct struct_8BDE {
	/* 0000(2)   */ PACK uint16 packed;                     /*!< ?? */
	/* 0002(2)   */ PACK uint16 variable_0002;              /*!< ?? */
	/* 0004(2)   */ PACK uint16 variable_0004;              /*!< ?? */
	/* 0006(4)   */ PACK csip32 buffer_csip;                /*!< CS:IP of a buffer. */
} GCC_PACKED struct_8BDE;
MSVC_PACKED_END
assert_compile(sizeof(struct_8BDE) == 0xA);

MSVC_PACKED_BEGIN
/**
 * At segment 353F there is a big blob of all kinds of variables and constants.
 *  This struct tries to map all those.
 */
typedef struct GlobalData {
	/* 0000()    */ PACK uint8   unknown_0000[0x0004];
	/* 0004(43)  */ PACK char   string_0004[43];            /*!< "Borland C++ - Copyright 1991 Borland Intl." NULL terminated. */
	/* 002F(14)  */ PACK char   string_002F[14];            /*!< "Divide error\r\n" not NULL terminated. */
	/* 003D(30)  */ PACK char   string_003D[30];            /*!< "Abnormal program termination\r\n" not NULL terminated. */
	/* 005B(4)   */ PACK csip32 oldInterrupt00;             /*!< CS:IP of original INT00 handler. */
	/* 005F(4)   */ PACK csip32 oldInterrupt04;             /*!< CS:IP of original INT04 handler. */
	/* 0063(4)   */ PACK csip32 oldInterrupt05;             /*!< CS:IP of original INT05 handler. */
	/* 0067(4)   */ PACK csip32 oldInterrupt06;             /*!< CS:IP of original INT06 handler. */
	/* 006B(2)   */ PACK uint16 variable_006B;              /*!< ?? */
	/* 006D(4)   */ PACK csip32 variable_006D;              /*!< ?? */
	/* 0071(2)   */ PACK uint16 variable_0071;              /*!< ?? */
	/* 0073(2)   */ PACK uint16 variable_0073;              /*!< ?? */
	/* 0075(2)   */ PACK uint16 environmentSize;            /*!< Size of environment in bytes. */
	/* 0077(2)   */ PACK uint16 environmentSegment;         /*!< Environment segment. */
	/* 0079(2)   */ PACK uint16 variable_0079;              /*!< ?? Something related to number of environment variables. */
	/* 007B(2)   */ PACK uint16 PSP;                        /*!< Program Segment Prefix. */
	/* 007D(1)   */ PACK uint8  majorDOSVersion;            /*!< DOS major version. */
	/* 007E(1)   */ PACK uint8  minorDOSVersion;            /*!< DOS minor version. */
	/* 007F(2)   */ PACK uint16 variable_007F;              /*!< ?? Something related to files. */
	/* 0081(4)   */ PACK uint32 systemTime;                 /*!< System time. */
	/* 0085()    */ PACK uint8   unknown_0085[0x0002];
	/* 0087(4)   */ PACK uint32 variable_0087;              /*!< ?? Something related to memory. */
	/* 008B(4)   */ PACK uint32 variable_008B;              /*!< ?? Something related to memory. */
	/* 008F(4)   */ PACK uint32 memorySize;                 /*!< Size of memory in paragraphs. */
	/* 0093()    */ PACK uint8   unknown_0093[0x0001];
	/* 0094()    */ PACK csip32 variable_0094;              /*!< ?? Pointer to string_00A8. */
	/* 0098()    */ PACK csip32 variable_0098;              /*!< ?? Pointer to string_00B2. */
	/* 009C(4)   */ PACK uint32 sizeExecutable;             /*!< The size, in bytes, of the executable as loaded in the memory. */
	/* 00A0(4)   */ PACK uint32 memoryFree;                 /*!< The amount of free bytes in the memory. */
	/* 00A4(4)   */ PACK uint32 variable_00A4;              /*!< ?? */
	/* 00A8(10)  */ PACK char   string_00A8[10];            /*!< "new8p.fnt" NULL terminated. */
	/* 00B2(10)  */ PACK char   string_00B2[10];            /*!< "DUNE2.EXE" NULL terminated. */
	/* 00BC(10)  */ PACK char   string_00BC[9];             /*!< "DUNE.CFG" NULL terminated. */
	/* 00C5(152) */ PACK char   string_00C5[152];           /*!< "\r\nThe setup program must be run first.\r\n"
	                                                         *   "\r\nZuerst muß das Setup-Programm betrieben werden.\r\n"
	                                                         *   "\r\nLe programme de configuration doit d'abord être lancé.\r\n"
	                                                         *   "\r\n" NULL terminated. */
	/* 015D(36)  */ PACK char   string_015D[36];            /*!< "Insufficient memory by %ld bytes.\r\n" NULL terminated. */
	/* 0181(29)  */ PACK char   string_0181[29];            /*!< "Unrecognized graphic mode!\r\n" NULL terminated. */
	/* 019E(121) */ PACK char   string_019E[121];           /*!< "Program in memory: %ld\r"
	                                                         *   "Buffer allocations: %ld\r"
	                                                         *   "Misc allocations: %ld\r"
	                                                         *   "Spare RAM: %ld\r"
	                                                         *   "DOS prompt memory free must be %ld.\r" NULL terminated. */
	/* 0217()    */ PACK uint8   unknown_0217;
	/* 0218(10)  */ PACK uint16  removed_0218[5];           /*!< REMOVED - buffer for speech */
	/* 0222(240) */ PACK uint16  removed_0222[120];         /*!< REMOVED - Mapping of voiceID -> voice files */
	/* 0312(1316)*/ PACK uint16  removed_0312[94][7];       /*!< REMOVED - table of feedback strings and audio on events and commands */
	/* 0836(1316)*/ PACK uint16  removed_0836[94][7];       /*!< REMOVED - table of translated spoken audio feedback */
	/* 0D5A(786) */ PACK uint8   removed_0D5A[131][6];      /*!< REMOVED - Array of pointers to voice files names (and something else). */
	/* 106C(228) */ PACK uint8   removed_106C[38][6];       /*!< REMOVED - Array of pointers to music files names (and something else). */
	/* 1150(2)   */ PACK uint16  removed_1150;              /*!< REMOVED - Currently loaded set of voices. */
	/* 1152(14)  */ PACK char   string_1152[14];            /*!< REMOVED - "+VSCREAM1.VOC" NULL terminated. */
	/* 1160(12)  */ PACK char   string_1160[12];            /*!< REMOVED - "+EXSAND.VOC" NULL terminated. */
	/* 116C(12)  */ PACK char   string_116C[12];            /*!< REMOVED - "+ROCKET.VOC" NULL terminated. */
	/* 1178(12)  */ PACK char   string_1178[12];            /*!< REMOVED - "+BUTTON.VOC" NULL terminated. */
	/* 1184(14)  */ PACK char   string_1184[14];            /*!< REMOVED - "+VSCREAM5.VOC" NULL terminated. */
	/* 1192(13)  */ PACK char   string_1192[13];            /*!< REMOVED - "+CRUMBLE.VOC" NULL terminated. */
	/* 119F(13)  */ PACK char   string_119F[13];            /*!< REMOVED - "+EXSMALL.VOC" NULL terminated. */
	/* 11AC(11)  */ PACK char   string_11AC[11];            /*!< REMOVED - "+EXMED.VOC" NULL terminated. */
	/* 11B7(13)  */ PACK char   string_11B7[13];            /*!< REMOVED - "+EXLARGE.VOC" NULL terminated. */
	/* 11C4(14)  */ PACK char   string_11C4[14];            /*!< REMOVED - "+EXCANNON.VOC" NULL terminated. */
	/* 11D2(14)  */ PACK char   string_11D2[14];            /*!< REMOVED - "+GUNMULTI.VOC" NULL terminated. */
	/* 11E0(9)   */ PACK char   string_11E0[9];             /*!< REMOVED - "+GUN.VOC" NULL terminated. */
	/* 11E9(11)  */ PACK char   string_11E9[11];            /*!< REMOVED - "+EXGAS.VOC" NULL terminated. */
	/* 11F4(11)  */ PACK char   string_11F4[11];            /*!< REMOVED - "+EXDUD.VOC" NULL terminated. */
	/* 11FF(14)  */ PACK char   string_11FF[14];            /*!< REMOVED - "+VSCREAM2.VOC" NULL terminated. */
	/* 120D(14)  */ PACK char   string_120D[14];            /*!< REMOVED - "+VSCREAM3.VOC" NULL terminated. */
	/* 121B(14)  */ PACK char   string_121B[14];            /*!< REMOVED - "+VSCREAM4.VOC" NULL terminated. */
	/* 1229(14)  */ PACK char   string_1229[14];            /*!< REMOVED - "+%cAFFIRM.VOC" NULL terminated. */
	/* 1237(15)  */ PACK char   string_1237[15];            /*!< REMOVED - "+%cREPORT1.VOC" NULL terminated. */
	/* 1246(15)  */ PACK char   string_1246[15];            /*!< REMOVED - "+%cREPORT2.VOC" NULL terminated. */
	/* 1255(15)  */ PACK char   string_1255[15];            /*!< REMOVED - "+%cREPORT3.VOC" NULL terminated. */
	/* 1264(15)  */ PACK char   string_1264[15];            /*!< REMOVED - "+%cOVEROUT.VOC" NULL terminated. */
	/* 1273(15)  */ PACK char   string_1273[15];            /*!< REMOVED - "+%cMOVEOUT.VOC" NULL terminated. */
	/* 1282(11)  */ PACK char   string_1282[11];            /*!< REMOVED - "?POPPA.VOC" NULL terminated. */
	/* 128D(13)  */ PACK char   string_128D[13];            /*!< REMOVED - "?SANDBUG.VOC" NULL terminated. */
	/* 129A(13)  */ PACK char   string_129A[13];            /*!< REMOVED - "+STATICP.VOC" NULL terminated. */
	/* 12A7(14)  */ PACK char   string_12A7[14];            /*!< REMOVED - "+WORMET3P.VOC" NULL terminated. */
	/* 12B5(14)  */ PACK char   string_12B5[14];            /*!< REMOVED - "+MISLTINP.VOC" NULL terminated. */
	/* 12C3(13)  */ PACK char   string_12C3[13];            /*!< REMOVED - "+SQUISH2.VOC" NULL terminated. */
	/* 12D0(12)  */ PACK char   string_12D0[12];            /*!< REMOVED - "%cENEMY.VOC" NULL terminated. */
	/* 12DC(11)  */ PACK char   string_12DC[11];            /*!< REMOVED - "%cHARK.VOC" NULL terminated. */
	/* 12E7(11)  */ PACK char   string_12E7[11];            /*!< REMOVED - "%cATRE.VOC" NULL terminated. */
	/* 12F2(12)  */ PACK char   string_12F2[12];            /*!< REMOVED - "%cORDOS.VOC" NULL terminated. */
	/* 12FE(13)  */ PACK char   string_12FE[13];            /*!< REMOVED - "%cFREMEN.VOC" NULL terminated. */
	/* 130B(11)  */ PACK char   string_130B[11];            /*!< REMOVED - "%cSARD.VOC" NULL terminated. */
	/* 1316(11)  */ PACK char   string_1316[11];            /*!< REMOVED - "FILLER.VOC" NULL terminated. */
	/* 1321(11)  */ PACK char   string_1321[11];            /*!< REMOVED - "%cUNIT.VOC" NULL terminated. */
	/* 132C(13)  */ PACK char   string_132C[13];            /*!< REMOVED - "%cSTRUCT.VOC" NULL terminated. */
	/* 1339(10)  */ PACK char   string_1339[10];            /*!< REMOVED - "%cONE.VOC" NULL terminated. */
	/* 1343(10)  */ PACK char   string_1343[10];            /*!< REMOVED - "%cTWO.VOC" NULL terminated. */
	/* 134D(12)  */ PACK char   string_134D[12];            /*!< REMOVED - "%cTHREE.VOC" NULL terminated. */
	/* 1359(11)  */ PACK char   string_1359[11];            /*!< REMOVED - "%cFOUR.VOC" NULL terminated. */
	/* 1364(11)  */ PACK char   string_1364[11];            /*!< REMOVED - "%cFIVE.VOC" NULL terminated. */
	/* 136F(12)  */ PACK char   string_136F[12];            /*!< REMOVED - "%cCONST.VOC" NULL terminated. */
	/* 137B(12)  */ PACK char   string_137B[12];            /*!< REMOVED - "%cRADAR.VOC" NULL terminated. */
	/* 1387(10)  */ PACK char   string_1387[10];            /*!< REMOVED - "%cOFF.VOC" NULL terminated. */
	/* 1391(9)   */ PACK char   string_1391[9];             /*!< REMOVED - "%cON.VOC" NULL terminated. */
	/* 139A(14)  */ PACK char   string_139A[14];            /*!< REMOVED - "%cFRIGATE.VOC" NULL terminated. */
	/* 13A8(14)  */ PACK char   string_13A8[14];            /*!< REMOVED - "?%cARRIVE.VOC" NULL terminated. */
	/* 13B6(14)  */ PACK char   string_13B6[14];            /*!< REMOVED - "%cWARNING.VOC" NULL terminated. */
	/* 13C4(12)  */ PACK char   string_13C4[12];            /*!< REMOVED - "%cSABOT.VOC" NULL terminated. */
	/* 13D0(14)  */ PACK char   string_13D0[14];            /*!< REMOVED - "%cMISSILE.VOC" NULL terminated. */
	/* 13DE(12)  */ PACK char   string_13DE[12];            /*!< REMOVED - "%cBLOOM.VOC" NULL terminated. */
	/* 13EA(14)  */ PACK char   string_13EA[14];            /*!< REMOVED - "%cDESTROY.VOC" NULL terminated. */
	/* 13F8(13)  */ PACK char   string_13F8[13];            /*!< REMOVED - "%cDEPLOY.VOC" NULL terminated. */
	/* 1405(13)  */ PACK char   string_1405[13];            /*!< REMOVED - "%cAPPRCH.VOC" NULL terminated. */
	/* 1412(14)  */ PACK char   string_1412[14];            /*!< REMOVED - "%cLOCATED.VOC" NULL terminated. */
	/* 1420(12)  */ PACK char   string_1420[12];            /*!< REMOVED - "%cNORTH.VOC" NULL terminated. */
	/* 142C(11)  */ PACK char   string_142C[11];            /*!< REMOVED - "%cEAST.VOC" NULL terminated. */
	/* 1437(12)  */ PACK char   string_1437[12];            /*!< REMOVED - "%cSOUTH.VOC" NULL terminated. */
	/* 1443(11)  */ PACK char   string_1443[11];            /*!< REMOVED - "%cWEST.VOC" NULL terminated. */
	/* 144E(11)  */ PACK char   string_144E[11];            /*!< REMOVED - "?%cWIN.VOC" NULL terminated. */
	/* 1459(12)  */ PACK char   string_1459[12];            /*!< REMOVED - "?%cLOSE.VOC" NULL terminated. */
	/* 1465(13)  */ PACK char   string_1465[13];            /*!< REMOVED - "%cLAUNCH.VOC" NULL terminated. */
	/* 1472(13)  */ PACK char   string_1472[13];            /*!< REMOVED - "%cATTACK.VOC" NULL terminated. */
	/* 147F(14)  */ PACK char   string_147F[14];            /*!< REMOVED - "%cVEHICLE.VOC" NULL terminated. */
	/* 148D(13)  */ PACK char   string_148D[13];            /*!< REMOVED - "%cREPAIR.VOC" NULL terminated. */
	/* 149A(14)  */ PACK char   string_149A[14];            /*!< REMOVED - "%cHARVEST.VOC" NULL terminated. */
	/* 14A8(12)  */ PACK char   string_14A8[12];            /*!< REMOVED - "%cWORMY.VOC" NULL terminated. */
	/* 14B4(14)  */ PACK char   string_14B4[14];            /*!< REMOVED - "%cCAPTURE.VOC" NULL terminated. */
	/* 14C3(11)  */ PACK char   string_14C3[11];            /*!< REMOVED - "%cNEXT.VOC" NULL terminated. */
	/* 14CE(12)  */ PACK char   string_14CE[12];            /*!< REMOVED - "%cNEXT2.VOC" NULL terminated. */
	/* 14DA(13)  */ PACK char   string_14DA[13];            /*!< REMOVED - "/BLASTER.VOC" NULL terminated. */
	/* 14E6(12)  */ PACK char   string_14E6[12];            /*!< REMOVED - "/GLASS6.VOC" NULL terminated. */
	/* 14F2(13)  */ PACK char   string_14F2[13];            /*!< REMOVED - "/LIZARD1.VOC" NULL terminated. */
	/* 14FF(11)  */ PACK char   string_14FF[11];            /*!< REMOVED - "/FLESH.VOC" NULL terminated. */
	/* 150A(11)  */ PACK char   string_150A[11];            /*!< REMOVED - "/CLICK.VOC" NULL terminated. */
	/* 1515(13)  */ PACK char   string_1515[13];            /*!< REMOVED - "-3HOUSES.VOC" NULL terminated. */
	/* 1522(12)  */ PACK char   string_1522[12];            /*!< REMOVED - "-ANDNOW.VOC" NULL terminated. */
	/* 152E(13)  */ PACK char   string_152E[13];            /*!< REMOVED - "-ARRIVED.VOC" NULL terminated. */
	/* 153B(12)  */ PACK char   string_153B[12];            /*!< REMOVED - "-BATTLE.VOC" NULL terminated. */
	/* 1547(12)  */ PACK char   string_1547[12];            /*!< REMOVED - "-BEGINS.VOC" NULL terminated. */
	/* 1553(12)  */ PACK char   string_1553[12];            /*!< REMOVED - "-BLDING.VOC" NULL terminated. */
	/* 155F(14)  */ PACK char   string_155F[14];            /*!< REMOVED - "-CONTROL2.VOC" NULL terminated. */
	/* 156D(14)  */ PACK char   string_156D[14];            /*!< REMOVED - "-CONTROL3.VOC" NULL terminated. */
	/* 157B(14)  */ PACK char   string_157B[14];            /*!< REMOVED - "-CONTROL4.VOC" NULL terminated. */
	/* 1589(14)  */ PACK char   string_1589[14];            /*!< REMOVED - "-CONTROLS.VOC" NULL terminated. */
	/* 1597(10)  */ PACK char   string_1597[10];            /*!< REMOVED - "-DUNE.VOC" NULL terminated. */
	/* 15A1(13)  */ PACK char   string_15A1[13];            /*!< REMOVED - "-DYNASTY.VOC" NULL terminated. */
	/* 15AE(14)  */ PACK char   string_15AE[14];            /*!< REMOVED - "-EACHHOME.VOC" NULL terminated. */
	/* 15BC(12)  */ PACK char   string_15BC[12];            /*!< REMOVED - "-EANDNO.VOC" NULL terminated. */
	/* 15C8(14)  */ PACK char   string_15C8[14];            /*!< REMOVED - "-ECONTROL.VOC" NULL terminated. */
	/* 15D6(12)  */ PACK char   string_15D6[12];            /*!< REMOVED - "-EHOUSE.VOC" NULL terminated. */
	/* 15E2(12)  */ PACK char   string_15E2[12];            /*!< REMOVED - "-EMPIRE.VOC" NULL terminated. */
	/* 15EE(14)  */ PACK char   string_15EE[14];            /*!< REMOVED - "-EPRODUCE.VOC" NULL terminated. */
	/* 15FC(12)  */ PACK char   string_15FC[12];            /*!< REMOVED - "-ERULES.VOC" NULL terminated. */
	/* 1608(13)  */ PACK char   string_1608[13];            /*!< REMOVED - "-ETERRIT.VOC" NULL terminated. */
	/* 1615(11)  */ PACK char   string_1615[11];            /*!< REMOVED - "-EMOST.VOC" NULL terminated. */
	/* 1620(12)  */ PACK char   string_1620[12];            /*!< REMOVED - "-ENOSET.VOC" NULL terminated. */
	/* 162C(10)  */ PACK char   string_162C[10];            /*!< REMOVED - "-EVIL.VOC" NULL terminated. */
	/* 1636(10)  */ PACK char   string_1636[10];            /*!< REMOVED - "-HARK.VOC" NULL terminated. */
	/* 1640(10)  */ PACK char   string_1640[10];            /*!< REMOVED - "-HOME.VOC" NULL terminated. */
	/* 164A(12)  */ PACK char   string_164A[12];            /*!< REMOVED - "-HOUSE2.VOC" NULL terminated. */
	/* 1656(11)  */ PACK char   string_1656[11];            /*!< REMOVED - "-INSID.VOC" NULL terminated. */
	/* 1661(10)  */ PACK char   string_1661[10];            /*!< REMOVED - "-KING.VOC" NULL terminated. */
	/* 166B(11)  */ PACK char   string_166B[11];            /*!< REMOVED - "-KNOWN.VOC" NULL terminated. */
	/* 1676(13)  */ PACK char   string_1676[13];            /*!< REMOVED - "-MELANGE.VOC" NULL terminated. */
	/* 1683(11)  */ PACK char   string_1683[11];            /*!< REMOVED - "-NOBLE.VOC" NULL terminated. */
	/* 168E(9)   */ PACK char   string_168E[9];             /*!< REMOVED - "?NOW.VOC" NULL terminated. */
	/* 1697(12)  */ PACK char   string_1697[12];            /*!< REMOVED - "-OFDUNE.VOC" NULL terminated. */
	/* 16A3(9)   */ PACK char   string_16A3[9];             /*!< REMOVED - "-ORD.VOC" NULL terminated. */
	/* 16AC(12)  */ PACK char   string_16AC[12];            /*!< REMOVED - "-PLANET.VOC" NULL terminated. */
	/* 16B8(13)  */ PACK char   string_16B8[13];            /*!< REMOVED - "-PREVAIL.VOC" NULL terminated. */
	/* 16C5(14)  */ PACK char   string_16C5[14];            /*!< REMOVED - "-PROPOSED.VOC" NULL terminated. */
	/* 16D3(14)  */ PACK char   string_16D3[14];            /*!< REMOVED - "-SANDLAND.VOC" NULL terminated. */
	/* 16E1(11)  */ PACK char   string_16E1[11];            /*!< REMOVED - "-SPICE.VOC" NULL terminated. */
	/* 16EC(12)  */ PACK char   string_16EC[12];            /*!< REMOVED - "-SPICE2.VOC" NULL terminated. */
	/* 16F8(10)  */ PACK char   string_16F8[10];            /*!< REMOVED - "-VAST.VOC" NULL terminated. */
	/* 1702(13)  */ PACK char   string_1702[13];            /*!< REMOVED - "-WHOEVER.VOC" NULL terminated. */
	/* 170F(10)  */ PACK char   string_170F[10];            /*!< REMOVED - "?YOUR.VOC" NULL terminated. */
	/* 1719(12)  */ PACK char   string_1719[12];            /*!< REMOVED - "?FILLER.VOC" NULL terminated. */
	/* 1725(14)  */ PACK char   string_1725[14];            /*!< REMOVED - "-DROPEQ2P.VOC" NULL terminated. */
	/* 1733(12)  */ PACK char   string_1733[12];            /*!< REMOVED - "/EXTINY.VOC" NULL terminated. */
	/* 173F(13)  */ PACK char   string_173F[13];            /*!< REMOVED - "-WIND2BP.VOC" NULL terminated. */
	/* 174C(14)  */ PACK char   string_174C[14];            /*!< REMOVED - "-BRAKES2P.VOC" NULL terminated. */
	/* 175A(13)  */ PACK char   string_175A[13];            /*!< REMOVED - "-GUNSHOT.VOC" NULL terminated. */
	/* 1767(11)  */ PACK char   string_1767[11];            /*!< REMOVED - "-GLASS.VOC" NULL terminated. */
	/* 1772(13)  */ PACK char   string_1772[13];            /*!< REMOVED - "-MISSLE8.VOC" NULL terminated. */
	/* 177F(11)  */ PACK char   string_177F[11];            /*!< REMOVED - "-CLANK.VOC" NULL terminated. */
	/* 178A(13)  */ PACK char   string_178A[13];            /*!< REMOVED - "-BLOWUP1.VOC" NULL terminated. */
	/* 1797(13)  */ PACK char   string_1797[13];            /*!< REMOVED - "-BLOWUP2.VOC" NULL terminated. */
	/* 17A4(6)   */ PACK char   string_17A4[6];             /*!< REMOVED - "dune1" NULL terminated. */
	/* 17AA(7)   */ PACK char   string_17AA[7];             /*!< REMOVED - "dune17" NULL terminated. */
	/* 17B1(6)   */ PACK char   string_17B1[6];             /*!< REMOVED - "dune8" NULL terminated. */
	/* 17B7(6)   */ PACK char   string_17B7[6];             /*!< REMOVED - "dune2" NULL terminated. */
	/* 17BD(6)   */ PACK char   string_17BD[6];             /*!< REMOVED - "dune3" NULL terminated. */
	/* 17C3(6)   */ PACK char   string_17C3[6];             /*!< REMOVED - "dune4" NULL terminated. */
	/* 17C9(6)   */ PACK char   string_17C9[6];             /*!< REMOVED - "dune5" NULL terminated. */
	/* 17CF(6)   */ PACK char   string_17CF[6];             /*!< REMOVED - "dune6" NULL terminated. */
	/* 17D5(6)   */ PACK char   string_17D5[6];             /*!< REMOVED - "dune9" NULL terminated. */
	/* 17DB(7)   */ PACK char   string_17DB[7];             /*!< REMOVED - "dune18" NULL terminated. */
	/* 17E2(7)   */ PACK char   string_17E2[7];             /*!< REMOVED - "dune10" NULL terminated. */
	/* 17E9(7)   */ PACK char   string_17E9[7];             /*!< REMOVED - "dune11" NULL terminated. */
	/* 17F0(7)   */ PACK char   string_17F0[7];             /*!< REMOVED - "dune12" NULL terminated. */
	/* 17F7(7)   */ PACK char   string_17F7[7];             /*!< REMOVED - "dune13" NULL terminated. */
	/* 17FE(7)   */ PACK char   string_17FE[7];             /*!< REMOVED - "dune14" NULL terminated. */
	/* 1805(7)   */ PACK char   string_1805[7];             /*!< REMOVED - "dune15" NULL terminated. */
	/* 180C(6)   */ PACK char   string_180C[6];             /*!< REMOVED - "dune7" NULL terminated. */
	/* 1812(6)   */ PACK char   string_1812[6];             /*!< REMOVED - "dune0" NULL terminated. */
	/* 1818(7)   */ PACK char   string_1818[7];             /*!< REMOVED - "dune16" NULL terminated. */
	/* 181F(7)   */ PACK char   string_181F[7];             /*!< REMOVED - "dune19" NULL terminated. */
	/* 1826(7)   */ PACK char   string_1826[7];             /*!< REMOVED - "dune20" NULL terminated. */
	/* 182D()    */ PACK uint8   unknown_182D[0x1];
	/* 182E(4)   */ PACK csip32  removed_182E;              /*!< REMOVED - ?? */
	/* 1832(4)   */ PACK csip32  removed_1832;              /*!< REMOVED - ?? */
	/* 1836(2)   */ PACK uint16  removed_1836;              /*!< REMOVED - Counter (changed to local var: used in one function, and reset at the end, and no return halfway). */
	/* 1838(2)   */ PACK uint16  removed_1838;              /*!< REMOVED - Counter (changed to local var: used in one function, and reset at the end, and no return halfway). */
	/* 183A()    */ PACK uint8   unknown_183A[0x2];
	/* 183C(3)   */ PACK char   string_183C[3];             /*!< "\x05\r" NULL terminated. */
	/* 183F(12)  */ PACK char   string_183F[12];            /*!< "BIGPLAN.CPS" NULL terminated. */
	/* 184B(12)  */ PACK char   string_184B[12];            /*!< "MAPPLAN.CPS" NULL terminated. */
	/* 1857(12)  */ PACK uint8   removed_1857[12];          /*!< REMOVED - colours */
	/* 1863(8)   */ PACK char   string_1863[8];             /*!< "CREDITS" NULL terminated. */
	/* 186B(8)   */ PACK char   string_186B[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 1873(13)  */ PACK char   string_1873[13];            /*!< "CREDIT%d.SHP" NULL terminated. */
	/* 1880(2)   */ PACK char   string_1880[2];             /*!< " " NULL terminated. */
	/* 1882(9)   */ PACK char   string_1882[9];             /*!< "%02d %5d" NULL terminated. */
	/* 188B(3)   */ PACK char   string_188B[3];             /*!< "%d" NULL terminated. */
	/* 188E(10)  */ PACK char   string_188E[10];            /*!< "CHOAM.CPS" NULL terminated. */
	/* 1898(18)  */ PACK char   string_1898[18];            /*!< "sec(%u) seed(%u) " NULL terminated. */
	/* 18AA(38)  */ PACK char   string_18AA[38];            /*!< "ERROR: No items in construction list!" NULL terminated. */
	/* 18D0(13)  */ PACK char   string_18D0[13];            /*!< "GRAYRMAP.TBL" NULL terminated. */
	/* 18DD(11)  */ PACK char   string_18DD[11];            /*!< "%04x:%04x " NULL terminated. */
	/* 18E8(11)  */ PACK char   string_18E8[11];            /*!< "%04x-%04x " NULL terminated. */
	/* 18F3(3)   */ PACK char   string_18F3[3];             /*!< "³ " NULL terminated. */
	/* 18F6(6)   */ PACK char   string_18F6[6];             /*!< "%02X " NULL terminated. */
	/* 18FC(2)   */ PACK char   string_18FC[2];             /*!< "." NULL terminated. */
	/* 18FE(4)   */ PACK csip32 donotuse_18FE;
	/* 1902(4)   */ PACK csip32 donotuse_1902;
	/* 1906(32)  */ PACK uint16 donotuse_1906[16];
	/* 1926(28)  */ PACK char   string_1926[28];            /*!< "Victory Controls for Player" NULL terminated. */
	/* 1942(5)   */ PACK char   string_1942[5];             /*!< "Imm." NULL terminated. */
	/* 1947(4)   */ PACK char   string_1947[4];             /*!< "End" NULL terminated. */
	/* 194B(7)   */ PACK char   string_194B[7];             /*!< "To Win" NULL terminated. */
	/* 1952(28)  */ PACK char   string_1952[28];            /*!< "Only friendly units remain:" NULL terminated. */
	/* 196E(26)  */ PACK char   string_196E[26];            /*!< "No friendly units remain:" NULL terminated. */
	/* 1988(21)  */ PACK char   string_1988[21];            /*!< "Spice quota reached:" NULL terminated. */
	/* 199D(11)  */ PACK char   string_199D[11];            /*!< "Timed out:" NULL terminated. */
	/* 19A8(72)  */ PACK struct_19A8 variable_19A8[9];      /*!< ?? */
	/* 19F0(60)  */ PACK struct_19F0 variable_19F0[6];      /*!< ?? */
	/* 1A2C(3)   */ PACK struct_1A2C variable_1A2C[1];      /*!< ?? */
	/* 1A2F(2)   */ PACK uint16  removed_1A2F;              /*!< REMOVED - not used */
	/* 1A31(96)  */ PACK struct_19A8 variable_1A31[12];     /*!< ?? */
	/* 1A91(80)  */ PACK struct_19F0 variable_1A91[8];      /*!< ?? */
	/* 1AE1(3)   */ PACK struct_1A2C variable_1AE1[8];      /*!< ?? */
	/* 1AF9(2)   */ PACK uint16  removed_1AF9;              /*!< REMOVED - not used */
	/* 1AFB(112) */ PACK struct_19A8 variable_1AFB[14];     /*!< ?? */
	/* 1B6B(70)  */ PACK struct_19F0 variable_1B6B[7];      /*!< ?? */
	/* 1BB1(3)   */ PACK struct_1A2C variable_1BB1[3];      /*!< ?? */
	/* 1BBA(2)   */ PACK uint16  removed_1BBA;              /*!< REMOVED - not used */
	/* 1BBC(8)   */ PACK char   string_1BBC[8];             /*!< "AFINALA" NULL terminated. */
	/* 1BC4(8)   */ PACK char   string_1BC4[8];             /*!< "EFINALA" NULL terminated. */
	/* 1BCC(8)   */ PACK char   string_1BCC[8];             /*!< "EFINALB" NULL terminated. */
	/* 1BD4(8)   */ PACK char   string_1BD4[8];             /*!< "AFINALB" NULL terminated. */
	/* 1BDC(8)   */ PACK char   string_1BDC[8];             /*!< "HFINALA" NULL terminated. */
	/* 1BE4(8)   */ PACK char   string_1BE4[8];             /*!< "HFINALB" NULL terminated. */
	/* 1BEC(8)   */ PACK char   string_1BEC[8];             /*!< "HFINALC" NULL terminated. */
	/* 1BF4(8)   */ PACK char   string_1BF4[8];             /*!< "OFINALA" NULL terminated. */
	/* 1BFC(8)   */ PACK char   string_1BFC[8];             /*!< "OFINALB" NULL terminated. */
	/* 1C04(8)   */ PACK char   string_1C04[8];             /*!< "OFINALC" NULL terminated. */
	/* 1C0C(8)   */ PACK char   string_1C0C[8];             /*!< "OFINALD" NULL terminated. */
	/* 1C14(6)   */ PACK char   string_1C14[6];             /*!< "INTRO" NULL terminated. */
	/* 1C1A(40)  */ PACK struct_19A8 variable_1C1A[5];      /*!< ?? */
	/* 1C42(70)  */ PACK struct_19F0 variable_1C42[7];      /*!< ?? */
	/* 1C88(3)   */ PACK struct_1A2C variable_1C88[1];      /*!< ?? */
	/* 1C8B(2)   */ PACK uint16  removed_1C8B;              /*!< REMOVED - not used */
	/* 1C8D(32)  */ PACK struct_19A8 variable_1C8D[4];      /*!< ?? */
	/* 1CAD(60)  */ PACK struct_19F0 variable_1CAD[6];      /*!< ?? */
	/* 1CE9(3)   */ PACK struct_1A2C variable_1CE9[1];      /*!< ?? */
	/* 1CEC(2)   */ PACK uint16  removed_1CEC;              /*!< REMOVED - not used */
	/* 1CEE(40)  */ PACK struct_19A8 variable_1CEE[5];      /*!< ?? */
	/* 1D16(70)  */ PACK struct_19F0 variable_1D16[7];      /*!< ?? */
	/* 1D5C(3)   */ PACK struct_1A2C variable_1D5C[1];      /*!< ?? */
	/* 1D5F(2)   */ PACK uint16  removed_1D5F;              /*!< REMOVED - not used */
	/* 1D61(32)  */ PACK struct_19A8 variable_1D61[4];      /*!< ?? */
	/* 1D81(60)  */ PACK struct_19F0 variable_1D81[6];      /*!< ?? */
	/* 1DBD(3)   */ PACK struct_1A2C variable_1DBD[1];      /*!< ?? */
	/* 1DC0(2)   */ PACK uint16  removed_1DC0;              /*!< REMOVED - not used */
	/* 1DC2(40)  */ PACK struct_19A8 variable_1DC2[5];      /*!< ?? */
	/* 1DEA(70)  */ PACK struct_19F0 variable_1DEA[7];      /*!< ?? */
	/* 1E30(3)   */ PACK struct_1A2C variable_1E30[1];      /*!< ?? */
	/* 1E33(2)   */ PACK uint16  removed_1E33;              /*!< REMOVED - not used */
	/* 1E35(32)  */ PACK struct_19A8 variable_1E35[4];      /*!< ?? */
	/* 1E55(70)  */ PACK struct_19F0 variable_1E55[7];      /*!< ?? */
	/* 1E9B(3)   */ PACK struct_1A2C variable_1E9B[1];      /*!< ?? */
	/* 1E9E(2)   */ PACK uint16  removed_1E9E;              /*!< REMOVED - not used */
	/* 1EA0()    */ PACK uint8   unknown_1EA0[0x0001];
	/* 1EA1(9)   */ PACK char   string_1EA1[9];             /*!< "MEANWHIL" NULL terminated. */
	/* 1EAA(8)   */ PACK char   string_1EAA[8];             /*!< "EFINALA" NULL terminated. */
	/* 1EB2(15)  */ PACK char   string_scenario_file[15];   /*!< "SCEN%c%03d.INI" NULL terminated. */
	/* 1EC1(6)   */ PACK char   string_1EC1[6];             /*!< "BASIC" NULL terminated. */
	/* 1EC7(9)   */ PACK char   string_1EC7[9];             /*!< "WinFlags" NULL terminated. */
	/* 1ED0(10)  */ PACK char   string_1ED0[10];            /*!< "LoseFlags" NULL terminated. */
	/* 1EDA(4)   */ PACK char   string_1EDA[4];             /*!< "MAP" NULL terminated. */
	/* 1EDE(5)   */ PACK char   string_1EDE[5];             /*!< "Seed" NULL terminated. */
	/* 1EE3(8)   */ PACK char   string_1EE3[8];             /*!< "TimeOut" NULL terminated. */
	/* 1EEB(12)  */ PACK char   string_1EEB[12];            /*!< "TacticalPos" NULL terminated. */
	/* 1EF7(10)  */ PACK char   string_1EF7[10];            /*!< "CursorPos" NULL terminated. */
	/* 1F01(9)   */ PACK char   string_1F01[9];             /*!< "MapScale" NULL terminated. */
	/* 1F0A(13)  */ PACK char   string_1F0A[13];            /*!< "BriefPicture" NULL terminated. */
	/* 1F17(12)  */ PACK char   string_1F17[12];            /*!< "HARVEST.WSA" NULL terminated. */
	/* 1F23(11)  */ PACK char   string_1F23[11];            /*!< "WinPicture" NULL terminated. */
	/* 1F2E(9)   */ PACK char   string_1F2E[9];             /*!< "WIN1.WSA" NULL terminated. */
	/* 1F37(12)  */ PACK char   string_1F37[12];            /*!< "LosePicture" NULL terminated. */
	/* 1F43(13)  */ PACK char   string_1F43[13];            /*!< "LOSTBILD.WSA" NULL terminated. */
	/* 1F50(6)   */ PACK char   string_1F50[6];             /*!< "Brain" NULL terminated. */
	/* 1F56(5)   */ PACK char   string_1F56[5];             /*!< "NONE" NULL terminated. */
	/* 1F5B(10)  */ PACK char   string_1F5B[10];            /*!< "HUMAN$CPU" NULL terminated. */
	/* 1F65(8)   */ PACK char   string_1F65[8];             /*!< "Credits" NULL terminated. */
	/* 1F6D(6)   */ PACK char   string_1F6D[6];             /*!< "Quota" NULL terminated. */
	/* 1F73(8)   */ PACK char   string_1F73[8];             /*!< "MaxUnit" NULL terminated. */
	/* 1F7B(6)   */ PACK char   string_1F7B[6];             /*!< "UNITS" NULL terminated. */
	/* 1F81(2)   */ PACK char   string_1F81[2];             /*!< "," NULL terminated. */
	/* 1F83(4)   */ PACK char   string_1F83[4];             /*!< ",\r\n" NULL terminated. */
	/* 1F87(11)  */ PACK char   string_1F87[11];            /*!< "STRUCTURES" NULL terminated. */
	/* 1F92(4)   */ PACK char   string_1F92[4];             /*!< "GEN" NULL terminated. */
	/* 1F96(6)   */ PACK char   string_1F96[6];             /*!< "Bloom" NULL terminated. */
	/* 1F9C(3)   */ PACK char   string_1F9C[3];             /*!< ",\n" NULL terminated. */
	/* 1F9F(6)   */ PACK char   string_1F9F[6];             /*!< "Field" NULL terminated. */
	/* 1FA5(8)   */ PACK char   string_1FA5[8];             /*!< "Special" NULL terminated. */
	/* 1FAD(15)  */ PACK char   string_1FAD[15];            /*!< "REINFORCEMENTS" NULL terminated. */
	/* 1FBC(61)  */ PACK char   string_1FBC[61];            /*!< "0NORTH$1EAST$2SOUTH$3WEST$4AIR$5VISIBLE$6ENEMYBASE$7HOMEBASE" NULL terminated. */
	/* 1FF9(6)   */ PACK char   string_1FF9[6];             /*!< "TEAMS" NULL terminated. */
	/* 1FFF(6)   */ PACK char   string_1FFF[6];             /*!< "CHOAM" NULL terminated. */
	/* 2005()    */ PACK uint8   unknown_2005[0x0001];
	/* 2006(21)  */ PACK int8    removed_2006[21];          /*!< REMOVED - some offset data around a center */
	/* 201B(336) */ PACK uint16  removed_201B[2][21][4];    /*!< REMOVED - table with offsets for averaging a scenario. */
	/* 216B(12)  */ PACK csip32 spriteFiles[3];             /*!< Array of pointers to spriteFilesX. */
	/* 2177(2)   */ PACK uint16  removed_2177;              /*!< REMOVED - True if ICON.ICN/MAP data are loaded. */
	/* 2179(36)  */ PACK uint8   removed_2179[0x0024];      /*!< REMOVED - ?? */
	/* 219D(48)  */ PACK uint16  removed_219D[4][6];        /*!< REMOVED - stringIDs of main menu */
	/* 21CD(59)  */ PACK char    removed_21CD[59];          /*!< REMOVED - "MOUSE.SHP\0BTTN\0SHAPES.SHP\0UNITS2.SHP\0UNITS1.SHP\0UNITS.SHP\0\0". */
	/* 2208(21)  */ PACK char    removed_2208[21];          /*!< REMOVED - "MENTAT\0MENSHP%c.SHP\0\0". */
	/* 221D(33)  */ PACK char    removed_221D[33];          /*!< REMOVED - "MOUSE.SHP\0BTTN\0SHAPES.SHP\0CHOAM\0\0". */
	/* 223E(9)   */ PACK char   string_223E[9];             /*!< "ICON.ICN" NULL terminated. */
	/* 2247(9)   */ PACK char   string_2247[9];             /*!< "ICON.MAP" NULL terminated. */
	/* 2250(5)   */ PACK char   string_2250[5];             /*!< "UNIT" NULL terminated. */
	/* 2255(10)  */ PACK char   string_2255[10];            /*!< "construct" NULL terminated. */
	/* 225F(24)  */ PACK char   string_225F[24];            /*!< "%d,%d,%d,%d,%d,%d,%d,%d" NULL terminated. */
	/* 2277(35)  */ PACK char   string_2277[35];            /*!< "%*s%4d,%4d,%4d,%4d,%4d,%4d,%4d,%4d" NULL terminated. */
	/* 229A(7)   */ PACK char   string_229A[7];             /*!< "combat" NULL terminated. */
	/* 22A1(7)   */ PACK char   string_22A1[19];            /*!< "%*s%4d,%4d,%4d,%4d" NULL terminated. */
	/* 22B4(12)  */ PACK char   string_22B4[12];            /*!< "PROFILE.INI" NULL terminated. */
	/* 22C0(8)   */ PACK char   string_22C0[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 22C8(8)   */ PACK char   string_22C8[8];             /*!< "MESSAGE" NULL terminated. */
	/* 22D0(11)  */ PACK char   string_22D0[11];            /*!< "new6pg.fnt" NULL terminated. */
	/* 22DB(10)  */ PACK char   string_22DB[10];            /*!< "new6p.fnt" NULL terminated. */
	/* 22E5(5)   */ PACK char   string_22E5[5];             /*!< "TEAM" NULL terminated. */
	/* 22EA(6)   */ PACK char   string_22EA[6];             /*!< "BUILD" NULL terminated. */
	/* 22F0(13)  */ PACK char   string_22F0[13];            /*!< "_save000.dat" NULL terminated. */
	/* 22FD(13)  */ PACK char   string_22FD[13];            /*!< "SAVEFAME.DAT" NULL terminated. */
	/* 230A(12)  */ PACK char   string_230A[12];            /*!< "ONETIME.DAT" NULL terminated. */
	/* 2316(5)   */ PACK char   string_2316[5];             /*!< "DUNE" NULL terminated. */
	/* 231B(6)   */ PACK char   string_231B[6];             /*!< "TITLE" NULL terminated. */
	/* 2321(6)   */ PACK char   string_2321[6];             /*!< "V1.07" NULL terminated. */
	/* 2327(9)   */ PACK char   string_2327[9];             /*!< "DUNE.LOG" NULL terminated. */
	/* 2330(7)   */ PACK char   string_2330[7];             /*!< "%s.EMC" NULL terminated. */
	/* 2337()    */ PACK uint8   unknown_2337[0x0002];
	/* 2339(7)   */ PACK char   string_2339[7];             /*!< "INTRO1" NULL terminated. */
	/* 2340(7)   */ PACK char   string_2340[7];             /*!< "INTRO2" NULL terminated. */
	/* 2347(7)   */ PACK char   string_2347[7];             /*!< "INTRO3" NULL terminated. */
	/* 234E(7)   */ PACK char   string_234E[7];             /*!< "INTRO9" NULL terminated. */
	/* 2355(8)   */ PACK char   string_2355[8];             /*!< "INTRO10" NULL terminated. */
	/* 235D(8)   */ PACK char   string_235D[8];             /*!< "EFINALA" NULL terminated. */
	/* 2365(8)   */ PACK char   string_2365[8];             /*!< "INTRO11" NULL terminated. */
	/* 236D(8)   */ PACK char   string_236D[7];             /*!< "INTRO4" NULL terminated. */
	/* 2374(8)   */ PACK char   string_2374[7];             /*!< "INTRO6" NULL terminated. */
	/* 237B(8)   */ PACK char   string_237B[8];             /*!< "INTRO7a" NULL terminated. */
	/* 2383(8)   */ PACK char   string_2383[8];             /*!< "INTRO7b" NULL terminated. */
	/* 238B(8)   */ PACK char   string_238B[8];             /*!< "INTRO8a" NULL terminated. */
	/* 2393(8)   */ PACK char   string_2393[8];             /*!< "INTRO8b" NULL terminated. */
	/* 239B(8)   */ PACK char   string_239B[8];             /*!< "INTRO8c" NULL terminated. */
	/* 23A3(8)   */ PACK char   string_23A3[7];             /*!< "INTRO5" NULL terminated. */
	/* 23AA(8)   */ PACK char   string_23AA[6];             /*!< "INTRO" NULL terminated. */
	/* 23B0(13)  */ PACK char   string_23B0[13];            /*!< "WESTWOOD.PAL" NULL terminated. */
	/* 23BD(13)  */ PACK char   string_23BD[13];            /*!< "WESTWOOD.WSA" NULL terminated. */
	/* 23CA(4)   */ PACK char   string_23CA[4];             /*!< "AND" NULL terminated. */
	/* 23CE(11)  */ PACK char   string_23CE[11];            /*!< "VIRGIN.CPS" NULL terminated. */
	/* 23D9()    */ PACK uint8   unknown_23D9[0x0001];
	/* 23DA(8)   */ PACK uint16  removed_23DA[4];           /*!< REMOVED - ?? */
	/* 23E2(128) */ PACK int32   removed_23E2[32];          /*!< REMOVED - ?? */
	/* 2462(18)  */ PACK uint16  removed_2462[9];           /*!< REMOVED - Tile offsets. */
	/* 2474(16)  */ PACK uint16  removed_2474[8];           /*!< REMOVED - X offsets for unit position. */
	/* 2484(16)  */ PACK uint16  removed_2484[8];           /*!< REMOVED - Y offsets for unit position. */
	/* 2494(36)  */ PACK csip32  removed_2494[3][3];        /*!< REMOVED - Pointers to functions used in Map_B4CD_057B(). */
	/* 24B8(166) */ PACK uint16  removed_24B8[83];          /*!< REMOVED - Mapping of landscape sprites to landscape type. @see _landscapeSpriteMap */
	/* 255E(8)   */ PACK uint16  removed_255E[4];           /*!< REMOVED - Relative steps in the map array for moving up, right, down, left */
	/* 2566(8)   */ PACK uint16  removed_2566[4];           /*!< REMOVED - map XY offsets */
	/* 256E(6)   */ PACK uint16  removed_256E[3];           /*!< REMOVED - small map offsets based on map scale */
	/* 2574(11)  */ PACK char   string_2574[11];            /*!< "STATIC.WSA" NULL terminated. */
	/* 257F()    */ PACK uint8   unknown_257F[0x0001];
	/* 2580(2)   */ PACK uint16  removed_2580;              /*!< REMOVED - disable movement of 'other' mentat object */
	/* 2582(4)   */ PACK uint32  removed_2582;              /*!< REMOVED - speaking timer for security question. */
	/* 2586(13)  */ PACK char   string_2586[13];            /*!< "MENTAT%c.CPS" NULL terminated. */
	/* 2593(9)   */ PACK char   string_2593[9];             /*!< "BENE.PAL" NULL terminated. */
	/* 259C(8)   */ PACK char   string_259C[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 25A4(10)  */ PACK char   removed_25A4[10];           /*!< REMOVED - "FHARK.WSA" NULL terminated. */
	/* 25AE(10)  */ PACK char   removed_25AE[10];           /*!< REMOVED - "FARTR.WSA" NULL terminated. */
	/* 25B8(11)  */ PACK char   removed_25B8[11];           /*!< REMOVED - "FORDOS.WSA" NULL terminated. */
	/* 25C3(8)   */ PACK char   string_25C3[8];             /*!< "PROTECT" NULL terminated. */
	/* 25CB(3)   */ PACK char   string_25CB[3];             /*!< "%d" NULL terminated. */
	/* 25CE(2)   */ PACK uint16  removed_25CE;              /*!< REMOVED - select from the list of ingame help subjects. */
	/* 25D0(4)   */ PACK csip32  removed_25D0;              /*!< REMOVED - Base address of help subjects (helpDataList). */
	/* 25D4(2)   */ PACK uint16  removed_25D4;              /*!< REMOVED - Displayed help subject (displayedHelpSubject)  */
	/* 25D6(9)   */ PACK char   string_25D6[9];             /*!< "MENTAT%c" NULL terminated. */
	/* 25DF(7)   */ PACK char   string_25DF[7];             /*!< "TEXT%c" NULL terminated. */
	/* 25E6(2)   */ PACK uint16  removed_25E6;              /*!< REMOVED - constant 1 */
	/* 25E8(10)  */ PACK char   string_25E8[10];            /*!< "INTRO.PAL" NULL terminated. */
	/* 25F2(10)  */ PACK char   string_25F2[10];            /*!< "INTRO.FNT" NULL terminated. */
	/* 25FC(7)   */ PACK char   string_25FC[7];             /*!< "%s.WSA" NULL terminated. */
	/* 2603(29)  */ PACK char   string_2603[29];            /*!< "Bad mode in animation #%i.\r\n" NULL terminated. */
	/* 2620(42)  */ PACK char   string_2620[42];            /*!< "Copyright (c) 1992 Westwood Studios, Inc." NULL terminated. */
	/* 264A(1)   */ PACK uint8   removed_264A;              /*!< REMOVED - string delimiter '\r' */
	/* 264B()    */ PACK uint8   unknown_264B[0x0001];
	/* 264C(105) */ PACK uint8   removed_264C[105];         /*!< REMOVED - Options WindowDesc. */
	/* 26B5(105) */ PACK uint8   removed_26B5[105];         /*!< REMOVED - GameControl WindowDesc. */
	/* 271E(105) */ PACK uint8   removed_271E[105];         /*!< REMOVED - YesNo WindowDesc. */
	/* 2787(105) */ PACK uint8   removed_2787[105];         /*!< REMOVED - SaveLoad WindowDesc. */
	/* 27F0(105) */ PACK uint8   removed_27F0[105];         /*!< REMOVED - SavegameName WindowDesc. */
	/* 2859(540) */ PACK uint8   removed_2859[9][60];       /*!< REMOVED - Widgets for windows defined via WindowDesc. */
	/* 2A75(28)  */ PACK csip32  removed_2A75[7];           /*!< REMOVED - Array of pointers to Widgets. */
	/* 2A91(2)   */ PACK uint16  removed_2491;              /*!< REMOVED - Zero or one. One if and only if there is room for at least one more savegame on disk. */
	/* 2A93(4)   */ PACK csip32  removed_2A93;              /*!< REMOVED - The last Widget in the linkedlist. */
	/* 2A97(2)   */ PACK uint16  removed_2A97;              /*!< REMOVED - Savegame index base for saveload window. */
	/* 2A99(2)   */ PACK uint16  removed_2A99;              /*!< REMOVED - Previous savegame index base for saveload window. */
	/* 2A9B(18)  */ PACK uint16  removed_2A9B[9];           /*!< REMOVED - colorID array for screen shading. */
	/* 2AAD(10)  */ PACK uint16  removed_2AAD[5];           /*!< REMOVED - StringID for game speed. */
	/* 2AB7(12)  */ PACK char   string_2AB7[12];            /*!< "OPTIONS.CFG" NULL terminated. */
	/* 2AC3(14)  */ PACK char   string_2AC3[14];            /*!< "_SAVE%03d.DAT" NULL terminated. */
	/* 2AD1()    */ PACK uint8   unknown_2AD1[0x0001];
	/* 2AD2(3)   */ PACK char   string_2AD2[3];             /*!< "%d" NULL terminated. */
	/* 2AD5(9)   */ PACK char   string_2AD5[9];             /*!< "\r\n[%s]\r\n" NULL terminated. */
	/* 2ADE(8)   */ PACK char   string_2ADE[8];             /*!< "%s=%d\r\n" NULL terminated. */
	/* 2AE6(5)   */ PACK char   string_2AE6[8];             /*!< "%s=%s\r\n" NULL terminated. */
	/* 2AEE(5)   */ PACK char   string_2AEE[5];             /*!< "[%s]" NULL terminated. */
	/* 2AF3(1)   */ PACK uint8  variable_2AF3;              /*!< ?? */
	/* 2AF4(2)   */ PACK uint32  removed_2AF4;              /*!< REMOVED - strategic region bits. */
	/* 2AF8(20)  */ PACK char   string_2AF8[5][4];          /*!< "ENG\0FRE\0GER\0ITA\0SPA" NULL terminated. */
	/* 2B0C(4)   */ PACK uint32 variable_2B0C;              /*!< ?? */
	/* 2B10(2)   */ PACK uint16  removed_2B10;              /*!< REMOVED - scenario select arrow animation state. */
	/* 2B12(12)  */ PACK char   string_2B12[12];            /*!< "MAPMACH.CPS" NULL terminated. */
	/* 2B1E(11)  */ PACK char   string_2B1E[11];            /*!< "PLANET.CPS" NULL terminated. */
	/* 2B29(12)  */ PACK char   string_2B29[12];            /*!< "DUNEMAP.CPS" NULL terminated. */
	/* 2B35(12)  */ PACK char   string_2B35[12];            /*!< "DUNERGN.CPS" NULL terminated. */
	/* 2B41(8)   */ PACK char   string_2B41[8];             /*!< "GROUP%d" NULL terminated. */
	/* 2B49(6)   */ PACK char   string_2B49[6];             /*!< "REG%d" NULL terminated. */
	/* 2B4F(12)  */ PACK char   string_2B4F[12];            /*!< "%d,%d,%d,%d" NULL terminated. */
	/* 2B5B(7)   */ PACK char   string_2B5B[7];             /*!< "PIECES" NULL terminated. */
	/* 2B62(8)   */ PACK char   string_2B62[8];             /*!< "%sTXT%d" NULL terminated. */
	/* 2B6A(11)  */ PACK char   string_2B6A[11];            /*!< "RGNCLK.CPS" NULL terminated. */
	/* 2B75(11)  */ PACK char   string_2B75[11];            /*!< "PIECES.SHP" NULL terminated. */
	/* 2B80(11)  */ PACK char   string_2B80[11];            /*!< "ARROWS.SHP" NULL terminated. */
	/* 2B8B(13)  */ PACK char   string_2B8B[13];            /*!< "REGION%c.INI" NULL terminated. */
	/* 2B98(5)   */ PACK char   string_2B98[5];             /*!< "INFO" NULL terminated. */
	/* 2B9D(14)  */ PACK char   string_2B9D[14];            /*!< "TOTAL REGIONS" NULL terminated. */
	/* 2BAB()    */ PACK uint8   unknown_2BAB[0x0001];
	/* 2BAC(18)  */ PACK uint16 variable_2BAC[3][3];        /*!< ?? */
	/* 2BBE(12)  */ PACK csip32 variable_2BBE[3];           /*!< ?? */
	/* 2BCA(19)  */ PACK char   string_2BCA[19];            /*!< "No more scenarios!" NULL terminated. */
	/* 2BDD(7)   */ PACK char   string_2BDD[7];             /*!< "TEXT%c" NULL terminated. */
	/* 2BE4(7)   */ PACK char   string_2BE4[7];             /*!< "HERALD" NULL terminated. */
	/* 2BEB(10)  */ PACK char   string_2BEB[10];            /*!< "FHARK.WSA" NULL terminated. */
	/* 2BF5(10)  */ PACK char   string_2BF5[10];            /*!< "FARTR.WSA" NULL terminated. */
	/* 2BFF(11)  */ PACK char   string_2BFF[11];            /*!< "FORDOS.WSA" NULL terminated. */
	/* 2C0A(5)   */ PACK char   string_2C0A[5];             /*!< "MISC" NULL terminated. */
	/* 2C0F()    */ PACK uint8   unknown_2C0F[0x1];
	/* 2C10(40)  */ PACK uint16 variable_2C10[5][4];        /*!< ?? */
	/* 2C38(2)   */ PACK uint16  removed_2C38;              /*!< REMOVED - ?? */
	/* 2C3A(4)   */ PACK uint32 variable_2C3A;              /*!< ?? */
	/* 2C3E(3)   */ PACK char   string_2C3E[3];             /*!< "%u" NULL terminated. */
	/* 2C41(13)  */ PACK char   string_2C41[13];            /*!< "SAVEFAME.DAT" NULL terminated. */
	/* 2C4E(9)   */ PACK char   string_2C4E[9];             /*!< "FAME.CPS" NULL terminated. */
	/* 2C57(3)   */ PACK char   string_2C57[3];             /*!< ", " NULL terminated. */
	/* 2C5A(4)   */ PACK char   string_2C5A[4];             /*!< "%u." NULL terminated. */
	/* 2C5E(4)   */ PACK uint32  removed_2C5E;              /*!< REMOVED - Ticker for cursor blinking (in EditBox) */
	/* 2C62(2)   */ PACK uint16  removed_2C62;              /*!< REMOVED - Boolean value, when non-zero, cursor is active (in EditBox). */
	/* 2C64(126) */ PACK uint16  removed_2C64[7][9];        /*!< REMOVED - Array with position offset per tile in a structure layout. */
	/* 2CE2(112) */ PACK uint16  removed_2CE2[56];          /*!< REMOVED - position of edge tiles of a structure layout */
	/* 2D52(14)  */ PACK uint16  removed_2D52[7];           /*!< REMOVED - Array with amount of tiles in a layout. */
	/* 2D60(224) */ PACK uint16  removed_2D60[7][16];       /*!< REMOVED - Array with position offset per tile around a structure layout. */
	/* 2E40(28)  */ PACK uint16  removed_2E40[7][2];        /*!< REMOVED - Array with size of a layout. */
	/* 2E5C(28)  */ PACK tile32  removed_2E5C[7];           /*!< REMOVED - Array with TileDiff of a layout. */
	/* 2E78(9)   */ PACK char   string_2E78[9];             /*!< "Concrete" NULL terminated. */
	/* 2E81(9)   */ PACK char   string_2E81[9];             /*!< "slab.wsa" NULL terminated. */
	/* 2E8A(10)  */ PACK char   string_2E8A[10];            /*!< "Concrete4" NULL terminated. */
	/* 2E94(10)  */ PACK char   string_2E94[10];            /*!< "4slab.wsa" NULL terminated. */
	/* 2E9E(7)   */ PACK char   string_2E9E[7];             /*!< "Palace" NULL terminated. */
	/* 2EA5(11)  */ PACK char   string_2EA5[11];            /*!< "palace.wsa" NULL terminated. */
	/* 2EB0(12)  */ PACK char   string_2EB0[12];            /*!< "Light Fctry" NULL terminated. */
	/* 2EBC(13)  */ PACK char   string_2EBC[13];            /*!< "liteftry.wsa" NULL terminated. */
	/* 2EC9(12)  */ PACK char   string_2EC9[12];            /*!< "Heavy Fctry" NULL terminated. */
	/* 2ED5(12)  */ PACK char   string_2ED5[12];            /*!< "hvyftry.wsa" NULL terminated. */
	/* 2EE1(8)   */ PACK char   string_2EE1[8];             /*!< "Hi-Tech" NULL terminated. */
	/* 2EE9(13)  */ PACK char   string_2EE9[13];            /*!< "hitcftry.wsa" NULL terminated. */
	/* 2EF6(3)   */ PACK char   string_2EF6[3];             /*!< "IX" NULL terminated. */
	/* 2EF9(7)   */ PACK char   string_2EF9[7];             /*!< "ix.wsa" NULL terminated. */
	/* 2F00(4)   */ PACK char   string_2F00[4];             /*!< "WOR" NULL terminated. */
	/* 2F04(8)   */ PACK char   string_2F04[8];             /*!< "wor.wsa" NULL terminated. */
	/* 2F0C(11)  */ PACK char   string_2F0C[11];            /*!< "Const Yard" NULL terminated. */
	/* 2F17(13)  */ PACK char   string_2F17[13];            /*!< "construc.wsa" NULL terminated. */
	/* 2F24(9)   */ PACK char   string_2F24[9];             /*!< "Windtrap" NULL terminated. */
	/* 2F2D(13)  */ PACK char   string_2F2D[13];            /*!< "windtrap.wsa" NULL terminated. */
	/* 2F3A(9)   */ PACK char   string_2F3A[9];             /*!< "Barracks" NULL terminated. */
	/* 2F43(11)  */ PACK char   string_2F43[11];            /*!< "barrac.wsa" NULL terminated. */
	/* 2F4E(9)   */ PACK char   string_2F4E[9];             /*!< "Starport" NULL terminated. */
	/* 2F57(13)  */ PACK char   string_2F57[13];            /*!< "starport.wsa" NULL terminated. */
	/* 2F64(9)   */ PACK char   string_2F64[9];             /*!< "Refinery" NULL terminated. */
	/* 2F6D(13)  */ PACK char   string_2F6D[13];            /*!< "refinery.wsa" NULL terminated. */
	/* 2F7A(3)   */ PACK char   string_2F7A[7];             /*!< "Repair" NULL terminated. */
	/* 2F81(11)  */ PACK char   string_2F81[11];            /*!< "repair.wsa" NULL terminated. */
	/* 2F8C(5)   */ PACK char   string_2F8C[5];             /*!< "Wall" NULL terminated. */
	/* 2F91(9)   */ PACK char   string_2F91[9];             /*!< "wall.wsa" NULL terminated. */
	/* 2F9A(7)   */ PACK char   string_2F9A[7];             /*!< "Turret" NULL terminated. */
	/* 2FA1(11)  */ PACK char   string_2FA1[11];            /*!< "turret.wsa" NULL terminated. */
	/* 2FAC(9)   */ PACK char   string_2FAC[9];             /*!< "R-Turret" NULL terminated. */
	/* 2FB5(12)  */ PACK char   string_2FB5[12];            /*!< "rturret.wsa" NULL terminated. */
	/* 2FC1(11)  */ PACK char   string_2FC1[11];            /*!< "Spice Silo" NULL terminated. */
	/* 2FCC(12)  */ PACK char   string_2FCC[12];            /*!< "storage.wsa" NULL terminated. */
	/* 2FD8(8)   */ PACK char   string_2FD8[8];             /*!< "Outpost" NULL terminated. */
	/* 2FE0(13)  */ PACK char   string_2FE0[13];            /*!< "headqrts.wsa" NULL terminated. */
	/* 2FED()    */ PACK uint8   unknown_2FED[0x0001];
	/* 2FEE(9)   */ PACK char   string_2FEE[9];             /*!< "Carryall" NULL terminated. */
	/* 2FF7(13)  */ PACK char   string_2FF7[13];            /*!< "carryall.wsa" NULL terminated. */
	/* 3004(9)   */ PACK char   string_3004[9];             /*!< "'Thopter" NULL terminated. */
	/* 300D(9)   */ PACK char   string_300D[9];             /*!< "orni.wsa" NULL terminated. */
	/* 3016(9)   */ PACK char   string_3016[9];             /*!< "Infantry" NULL terminated. */
	/* 301F(13)  */ PACK char   string_301F[13];            /*!< "infantry.wsa" NULL terminated. */
	/* 302E(9)   */ PACK char   string_302E[9];             /*!< "Troopers" NULL terminated. */
	/* 3035(11)  */ PACK char   string_3035[11];            /*!< "hyinfy.wsa" NULL terminated. */
	/* 3040(8)   */ PACK char   string_3040[8];             /*!< "Soldier" NULL terminated. */
	/* 3048(8)   */ PACK char   string_3048[8];             /*!< "Trooper" NULL terminated. */
	/* 3050(9)   */ PACK char   string_3050[9];             /*!< "Saboteur" NULL terminated. */
	/* 3059(13)  */ PACK char   string_3059[13];            /*!< "saboture.wsa" NULL terminated. */
	/* 3066(9)   */ PACK char   string_3066[9];             /*!< "Launcher" NULL terminated. */
	/* 306F(10)  */ PACK char   string_306F[10];            /*!< "rtank.wsa" NULL terminated. */
	/* 3079(9)   */ PACK char   string_3079[9];             /*!< "Deviator" NULL terminated. */
	/* 3082(13)  */ PACK char   string_3082[13];            /*!< "ordrtank.wsa" NULL terminated. */
	/* 308F(5)   */ PACK char   string_308F[5];             /*!< "Tank" NULL terminated. */
	/* 3094(10)  */ PACK char   string_3094[10];            /*!< "ltank.wsa" NULL terminated. */
	/* 309E(11)  */ PACK char   string_309E[11];            /*!< "Siege Tank" NULL terminated. */
	/* 30A9(10)  */ PACK char   string_30A9[10];            /*!< "htank.wsa" NULL terminated. */
	/* 30B3(11)  */ PACK char   string_30B3[11];            /*!< "Devastator" NULL terminated. */
	/* 30BE(10)  */ PACK char   string_30BE[13];            /*!< "harktank.wsa" NULL terminated. */
	/* 30CB(11)  */ PACK char   string_30CB[11];            /*!< "Sonic Tank" NULL terminated. */
	/* 30D6(10)  */ PACK char   string_30D6[10];            /*!< "stank.wsa" NULL terminated. */
	/* 30E0(6)   */ PACK char   string_30E0[6];             /*!< "Trike" NULL terminated. */
	/* 30E6(10)  */ PACK char   string_30E6[10];            /*!< "trike.wsa" NULL terminated. */
	/* 30F0(13)  */ PACK char   string_30F0[13];            /*!< "Raider Trike" NULL terminated. */
	/* 30FD(11)  */ PACK char   string_30FD[11];            /*!< "otrike.wsa" NULL terminated. */
	/* 3108(5)   */ PACK char   string_3108[5];             /*!< "Quad" NULL terminated. */
	/* 310D(9)   */ PACK char   string_310D[9];             /*!< "quad.wsa" NULL terminated. */
	/* 3116(10)  */ PACK char   string_3116[10];            /*!< "Harvester" NULL terminated. */
	/* 3120(12)  */ PACK char   string_3120[12];            /*!< "harvest.wsa" NULL terminated. */
	/* 312C(4)   */ PACK char   string_312C[4];             /*!< "MCV" NULL terminated. */
	/* 3130(8)   */ PACK char   string_3130[8];             /*!< "mcv.wsa" NULL terminated. */
	/* 3138(11)  */ PACK char   string_3138[11];            /*!< "Death Hand" NULL terminated. */
	/* 3143(12)  */ PACK char   string_3143[12];            /*!< "gold-bb.wsa" NULL terminated. */
	/* 314F(7)   */ PACK char   string_314F[7];             /*!< "Rocket" NULL terminated. */
	/* 3156(8)   */ PACK char   string_3156[8];             /*!< "ARocket" NULL terminated. */
	/* 315E(8)   */ PACK char   string_315E[8];             /*!< "GRocket" NULL terminated. */
	/* 3166(11)  */ PACK char   string_3166[11];            /*!< "MiniRocket" NULL terminated. */
	/* 3171(7)   */ PACK char   string_3171[7];             /*!< "Bullet" NULL terminated. */
	/* 3178(12)  */ PACK char   string_3178[12];            /*!< "Sonic Blast" NULL terminated. */
	/* 3184(9)   */ PACK char   string_3184[9];             /*!< "Sandworm" NULL terminated. */
	/* 318D(8)   */ PACK char   string_318D[8];             /*!< "Frigate" NULL terminated. */
	/* 3195()    */ PACK uint8   unknown_3195[0x0001];
	/* 3196()    */ PACK uint16  removed_3196;              /*!< REMOVED - A counter (never read, only assigned 0). */
	/* 3198()    */ PACK uint8   unknown_3198[0x0007];
	/* 319F(7)   */ PACK char   string_319F[7];             /*!< "<MORE>" NULL terminated. */
	/* 31A6(3)   */ PACK char   string_31A6[3];             /*!< "%d" NULL terminated. */
	/* 31A9()    */ PACK uint8   unknown_31A9[0x0009];
	/* 31B2(4)   */ PACK csip32 variable_31B2;              /*!< ?? */
	/* 31B6()    */ PACK uint8   unknown_31B6[0x0006];
	/* 31BC(4)   */ PACK uint32 variable_31BC;              /*!< ?? */
	/* 31C0(2)   */ PACK  int16 variable_31C0;              /*!< ?? */
	/* 31C2(4)   */ PACK uint32 variable_31C2;              /*!< ?? */
	/* 31C6(4)   */ PACK uint32 variable_31C6;              /*!< ?? */
	/* 31CA(4)   */ PACK uint32 variable_31CA;              /*!< ?? */
	/* 31CE(4)   */ PACK uint32 variable_31CE;              /*!< ?? */
	/* 31D2(2)   */ PACK uint16 variable_31D2;              /*!< ?? */
	/* 31D4(2)   */ PACK uint16 variable_31D4;              /*!< ?? */
	/* 31D6(2)   */ PACK uint16 variable_31D6;              /*!< ?? */
	/* 31D8(4)   */ PACK char    removed_string_31D8[4];    /*!< REMOVED - "ENG" NULL terminated. */
	/* 31DC(4)   */ PACK char    removed_string_31DC[4];    /*!< REMOVED - "FRE" NULL terminated. */
	/* 31E0(4)   */ PACK char    removed_string_31E0[4];    /*!< REMOVED - "GER" NULL terminated. */
	/* 31E4(4)   */ PACK char    removed_string_31E4[4];    /*!< REMOVED - "ITA" NULL terminated. */
	/* 31E8(4)   */ PACK char    removed_string_31E8[4];    /*!< REMOVED - "SPA" NULL terminated. */
	/* 31EC(4)   */ PACK char   string_31EC[4];             /*!< "FRE" NULL terminated. */
	/* 31F0(4)   */ PACK char   string_31F0[4];             /*!< "GER" NULL terminated. */
	/* 31F4(5)   */ PACK char   string_31F4[5];             /*!< "DUNE" NULL terminated. */
	/* 31F9(9)   */ PACK char   string_31F9[9];             /*!< "DUNE.LOG" NULL terminated. */
	/* 3202(2)   */ PACK char   string_3202[2];             /*!< "." NULL terminated. */
	/* 3204(9)   */ PACK char   string_3204[9];             /*!< "DUNEINIT" NULL terminated. */
	/* 320D()    */ PACK uint8   unknown_320D[0x0001];
	/* 320E(4)   */ PACK uint32  removed_320E;              /*!< REMOVED - Timeout value for next map activity. */
	/* 3212(80)  */ PACK csip32  removed_3212[20];          /*!< REMOVED - Array with map activity scripts. */
	/* 3262(60)  */ PACK csip32 variable_3262[15];          /*!< Array of functions. */
	/* 329E(6)   */ PACK uint16 variable_329E[3];           /*!< ?? */
	/* 32A4(32)  */ PACK uint16  removed_32A4[8][2];        /*!< REMOVED - ?? (read-only array) */
	/* 32C4(32)  */ PACK uint16  removed_32C4[8][2];        /*!< REMOVED - ?? (read-only array) */
	/* 32E4(32)  */ PACK uint16  removed_32E4[8][2];        /*!< REMOVED - ?? (read-only array) */
	/* 3304(64)  */ PACK uint16  removed_3304[16][2];       /*!< REMOVED - ?? (read-only array) */
	/* 3344(2)   */ PACK uint16  removed_3344;              /*!< REMOVED - changed tiles count (in 8290) */
	/* 3346(4)   */ PACK uint32  removed_3346;              /*!< REMOVED - Keeps track when to decrease #viewportMessageCounter. */
	/* 334A(4)   */ PACK uint8   removed_334A[4];           /*!< REMOVED - ?? (read-only array) */
	/* 334E(32)  */ PACK uint16  removed_334E[8][2];        /*!< REMOVED - ?? (read-only array) */
	/* 336E(32)  */ PACK uint16  removed_336E[8][2];        /*!< REMOVED - ?? (read-only array) */
	/* 338E(32)  */ PACK uint16  removed_338E[8][2];        /*!< REMOVED - ?? (read-only array) */
	/* 33AE(8)   */ PACK uint16  removed_33AE[4];           /*!< REMOVED - ?? (read-only array) */
	/* 33B6(100) */ PACK csip32 scriptFunctionsStructure[25];/*!< Structure functions to call via scripts. */
	/* 341A(4)   */ PACK uint32  removed_341A;              /*!< REMOVED - Indicates next time Structure runs Degrade function. */
	/* 341E(4)   */ PACK uint32  removed_341E;              /*!< REMOVED - Indicates next time Structure runs Structurs function. */
	/* 3422(4)   */ PACK uint32  removed_3422;              /*!< REMOVED - Indicates next time Structure runs Script function. */
	/* 3426(4)   */ PACK uint32  removed_3426;              /*!< REMOVED - Indicates next time Structure runs Palace function. */
	/* 342A(6)   */ PACK char   string_342A[6];             /*!< "%s %s" NULL terminated. */
	/* 3430(9)   */ PACK char   string_3430[9];             /*!< "%s %s %s" NULL terminated. */
	/* 3439()    */ PACK uint8   unknown_3439[0x0001];
	/* 343A(4)   */ PACK uint32  removed_tickCursor;        /*!< REMOVED - Stores last time Viewport changed the cursor spriteID. */
	/* 343E(4)   */ PACK uint32  removed_tickMapScroll;     /*!< REMOVED - Stores last time Viewport ran MapScroll function. */
	/* 3442(24)  */ PACK uint16 cursorHotSpots[6][2];       /*!< HotSpots for different cursor types. */
	/* 345A(8)   */ PACK uint16  removed_345A[4];           /*!< REMOVED - ?? */
	/* 3462(256) */ PACK uint8   removed_3462[256];         /*!< REMOVED - ?? */
	/* 3562(2)   */ PACK uint16  removed_3562;              /*!< REMOVED - ?? */
	/* 3564(2)   */ PACK uint16  removed_3564;              /*!< REMOVED Previous minimap position (top-left tile, packed). */
	/* 3566(94)  */ PACK uint16  removed_3566[47];          /*!< REMOVED - tile positions of the viewport border. */
	/* 35C4(2)   */ PACK uint16 selectionObjectPosition;    /*!< Position of the current selected object (top-left tile, packed). */
	/* 35C6(2)   */ PACK uint16 selectionObjectLayout;      /*!< Layout of the current selected object. */
	/* 35C8(32)  */ PACK uint16 mapScrollOffset[8][2];      /*!< Translates scroll numbers to positional offsets for map scrolling. */
	/* 35E8(4)   */ PACK csip32  removed_35E8;              /*!< REMOVED - CS:IP of Unit array. */
	/* 35EC(2)   */ PACK uint16  removed_35EC;              /*!< REMOVED - Amount of Units on the map. */
	/* 35EE(4)   */ PACK csip32  removed_35EE;              /*!< REMOVED - CS:IP of Team array. */
	/* 35F2(2)   */ PACK uint16  removed_35F2;              /*!< REMOVED - Amount of Teams on the map. */
	/* 35F4(4)   */ PACK csip32  removed_35F4;              /*!< REMOVED - CS:IP of Structure array. */
	/* 35F8(2)   */ PACK uint16  removed_35F8;              /*!< REMOVED - Amount of Structures on the map. */
	/* 35FA(4)   */ PACK csip32  removed_35FA;              /*!< REMOVED - CS:IP of house array. */
	/* 35FE(2)   */ PACK uint16  removed_35FE;              /*!< REMOVED - Amount of houses on the map. */
	/* 3600(4)   */ PACK csip32  removed_3600;              /*!< REMOVED - Buffer for screen backup when drawing modal windows. */
	/* 3604(40)  */ PACK uint16 colourBorderSchema[5][4];   /*!< Colours used for the border of widgets. */
	/* 362C(16)  */ PACK uint16 variable_362C[4][2];        /*!< ?? */
	/* 363C(2)   */ PACK uint16 creditsAnimation;           /*!< How many credits are shown in current animation of credits. */
	/* 363E(2)   */ PACK  int16 creditsAnimationOffset;     /*!< Offset of the credits for the animation of credits. */
	/* 3640(4)   */ PACK uint32  removed_tickCreditsAnimation; /*!< REMOVED - Next tick when credits animation needs an update. */
	/* 3644(80)  */ PACK char    removed_3644[80];          /*!< REMOVED 1st line of text to display. */
	/* 3694(80)  */ PACK char    removed_3694[80];          /*!< REMOVED 2nd line of text to display. */
	/* 36E4(80)  */ PACK char    removed_36E4[80];          /*!< REMOVED 3rd line of text to display. */
	/* 3734(2)   */ PACK uint16  removed_3734;              /*!< REMOVED line1 importance */
	/* 3736(2)   */ PACK uint16  removed_3736;              /*!< REMOVED line2 importance */
	/* 3738(2)   */ PACK uint16  removed_3738;              /*!< REMOVED line3 importance */
	/* 373A(2)   */ PACK uint16  removed_373A;              /*!< REMOVED text display scroll in progress. */
	/* 373C(4)   */ PACK uint32  removed_373C;              /*!< REMOVED text display timeout. */
	/* 3740(2)   */ PACK uint16  removed_3740;              /*!< REMOVED text offset of scroll */
	/* 3742(16)  */ PACK uint8  variable_3742[16];          /*!< Always zero bytes, used to memset 4 csips. No longer in use. */
	/* 3752(2)   */ PACK uint16 variable_3752;              /*!< ?? */
	/* 3754(2)   */ PACK uint16 variable_3754;              /*!< ?? */
	/* 3756(2)   */ PACK uint16 variable_3756;              /*!< ?? */
	/* 3758(2)   */ PACK uint16 variable_3758;              /*!< ?? */
	/* 375A(2)   */ PACK uint16 variable_375A;              /*!< ?? */
	/* 375C(2)   */ PACK uint16 variable_375C;              /*!< ?? */
	/* 375E(2)   */ PACK uint16 variable_375E;              /*!< ?? */
	/* 3760(2)   */ PACK uint16 variable_3760;              /*!< ?? */
	/* 3762(2)   */ PACK uint16 variable_3762;              /*!< ?? */
	/* 3764(2)   */ PACK uint16 variable_3764;              /*!< ?? */
	/* 3766(2)   */ PACK uint16 variable_3766;              /*!< ?? */
	/* 3768(2)   */ PACK uint16 variable_3768;              /*!< ?? */
	/* 376A(2)   */ PACK uint16 variable_376A;              /*!< ?? */
	/* 376C(2)   */ PACK uint16 variable_376C;              /*!< ?? */
	/* 376E(2)   */ PACK uint16 variable_376E;              /*!< ?? */
	/* 3770(4)   */ PACK char   string_3770[4];             /*!< "%6d" NULL terminated. */
	/* 3774(3)   */ PACK char   string_3774[3];             /*!< "%d" NULL terminated. */
	/* 3777(11)  */ PACK char   string_3777[11];            /*!< "SCREEN.CPS" NULL terminated. */
	/* 3782(16)  */ PACK uint16  removed_3782[8];           /*!< REMOVED ?? */
	/* 3792(8)   */ PACK uint8   removed_3792[8];           /*!< REMOVED ?? */
	/* 379A(2)   */ PACK uint16 enableLog;                  /*!< 0 = off, 1 = record game, 2 = playback game (stored in 'dune.log'). */
	/* 379C(2)   */ PACK uint16  removed_379C;              /*!< REMOVED - When non-zero, it allows you to control the AI. */
	/* 379E(2)   */ PACK uint16  removed_379E;              /*!< REMOVED - When non-zero, you immediately win the level.  */
	/* 37A0(2)   */ PACK uint16  removed_37A0;              /*!< REMOVED - When non-zero, it allows you to review the scenario. There is no fog. The game is not running (no unit-movement, no structure-building, etc). You can click on individual tiles. */
	/* 37A2(2)   */ PACK uint16  removed_37A2;              /*!< REMOVED - ?? Write-only. */
	/* 37A4(2)   */ PACK uint16  removed_37A4;              /*!< REMOVED - ?? */
	/* 37A6(2)   */ PACK uint16  removed_37A6;              /*!< REMOVED - ?? Write-only. */
	/* 37A8(2)   */ PACK uint16  removed_37A8;              /*!< REMOVED - ?? */
	/* 37AA(2)   */ PACK uint16  removed_37AA;              /*!< REMOVED - ?? Read-only. */
	/* 37AC(2)   */ PACK uint16  removed_37AC;              /*!< REMOVED - When non-zero, constructions are almost instant. */
	/* 37AE(2)   */ PACK uint16  removed_37AE;              /*!< REMOVED - When non-zero, you immediately go to house selection, and skip all intros. */
	/* 37B0(2)   */ PACK uint16  removed_37B0;              /*!< REMOVED - When non-zero, explosions do no damage to their surrounding. */
	/* 37B2(2)   */ PACK uint16 variable_37B2;              /*!< ?? */
	/* 37B4(2)   */ PACK uint16 variable_37B4;              /*!< ?? */
	/* 37B6(2)   */ PACK uint16  removed_37B6;              /*!< REMOVED - @see Language. */
	/* 37B8(2)   */ PACK uint16 variable_37B8;              /*!< ?? */
	/* 37BA(2)   */ PACK uint16  removed_37BA;              /*!< REMOVED - Countdown counter for displaying #viewportMessageText, bit 0 means 'display the text'. */
	/* 37BC(4)   */ PACK csip32  removed_37BC;              /*!< REMOVED - If not \c NULL, message text displayed in the viewport. */
	/* 37C0(48)  */ PACK uint16  removed_37C0[12][2];       /*!< REMOVED - Array of ranks. */
	/* 37F0(4)   */ PACK uint32  removed_37F0;              /*!< REMOVED - A bit-array to indicate which hints has been show already (0-31). */
	/* 37F4(4)   */ PACK uint32  removed_37F4;              /*!< REMOVED - A bit-array to indicate which hints has been show already (32-63). */
	/* 37F8(180) */ PACK uint8   removed_37F8[180];         /*!< REMOVED - Information about the houses. */
	/* 38AC()    */ PACK uint32  removed_38AC;              /*!< REMOVED - The tick the scenario started in. */
	/* 38B0(2)   */ PACK uint16  removed_38B0;              /*!< REMOVED - ID of current loaded Scenario. */
	/* 38B2(2)   */ PACK uint16  removed_38B2;              /*!< REMOVED - ID of current campaign (from 0 to 9, where 9 is never played). */
	/* 38B4(2)   */ PACK uint16  removed_38B4;              /*!< REMOVED - Credits player is still free to have without silo support. */
	/* 38B6(2)   */ PACK uint16  removed_38B6;              /*!< REMOVED - Credits shown to player as 'current'. */
	/* 38B8(4)   */ PACK uint32  removed_38B8;              /*!< REMOVED - The tick the game will timeout. */
	/* 38BC(2)   */ PACK uint16 variable_38BC;              /*!< ?? If non-zero, Unit_Find/Structure_Find skips Unit/Structures with flag 0x4 off (being-built flag?). */
	/* 38BE(2)   */ PACK uint16  removed_38BE;              /*!< REMOVED - Game mode. */
	/* 38C0(4)   */ PACK uint32  removed_38C0;              /*!< REMOVED - ?? */
	/* 38C4(2)   */ PACK uint16  removed_38C4;              /*!< REMOVED - text display needs an update. */
	/* 38C6(4)   */ PACK csip32  removed_38C6;              /*!< REMOVED - MESSAGE strings. */
	/* 38CA(4)   */ PACK csip32  removed_38CA;              /*!< REMOVED - Content of a string file (DUNE|INTRO|...).(ENG|FRE|...). */
	/* 38CE(4)   */ PACK csip32 variable_38CE;              /*!< Not used. Replaced by a local variable. */
	/* 38D2(4)   */ PACK uint32 variable_38D2;              /*!< Not used. Replaced by a local variable. */
	/* 38D6(4)   */ PACK csip32  removed_38D6;              /*!< REMOVED - ?? (never written, only tested for not-0) */
	/* 38DA(4)   */ PACK csip32  removed_38DA;              /*!< REMOVED - Temporary buffer used for reading and analyzing files. */
	/* 38DE(4)   */ PACK uint32  removed_38DE;              /*!< REMOVED - Maximal length of the temporary read buffer. */
	/* 38E2(2)   */ PACK uint16  removed_38E2;              /*!< REMOVED - Type of the structure being placed. */
	/* 38E4(4)   */ PACK csip32  removed_38E4;              /*!< REMOVED - Structure being placed. */
	/* 38E8()    */ PACK uint16  removed_38E8;              /*!< REMOVED - ?? */
	/* 38EA(2)   */ PACK uint16 structureIndex;             /*!< ?? */
	/* 38EC(2)   */ PACK  int16 variable_38EC;              /*!< ?? */
	/* 38EE(2)   */ PACK uint16 variable_38EE;              /*!< ?? */
	/* 38F0(2)   */ PACK uint16  removed_38F0;              /*!< REMOVED - Position of the structure being placed. */
	/* 38F2(4)   */ PACK csip32  removed_38F2;              /*!< REMOVED - Unit currently controlled by player. */
	/* 38F6(2)   */ PACK uint16 activeAction;               /*!< Action the controlled unit will do. */
	/* 38F8(2)   */ PACK uint16 variable_38F8;              /*!< ?? If zero, game exists? */
	/* 38FA(4)   */ PACK csip32  removed_38FA;              /*!< REMOVED - When launching a House Missile, while selecting location, this points to the missile. */
	/* 38FE(2)   */ PACK uint16  removed_38FE;              /*!< REMOVED - Amount of time the user has to select Missile target. */
	/* 3900(2)   */ PACK uint16  removed_3900;              /*!< REMOVED - Speed of the game, where 0 is slowest, and 4 is fastest. 2 is normal. */
	/* 3902(22)  */ PACK uint8   removed_3902[22];          /*!< Script information for Units. */
	/* 3918(22)  */ PACK uint8   removed_3918[22];          /*!< Script information for Structures. */
	/* 392E(22)  */ PACK uint8   removed_392E[22];          /*!< Script information for Teams. */
	/* 3944(2)   */ PACK uint16  removed_3944;              /*!< REMOVED - Amount of opcodes a script for a Unit will execute every tick (read-only, always 10). */
	/* 3946()    */ PACK uint8   unknown_3946[0x0002];
	/* 3948(2)   */ PACK  int16  removed_3948;              /*!< REMOVED - Amount of opcodes left for a script for a Unit to execute this tick. */
	/* 394A(4)   */ PACK csip32  removed_394A;              /*!< REMOVED - Current House we are handling in GameLoop. */
	/* 394E(4)   */ PACK csip32  removed_394E;              /*!< REMOVED - Current Structure or Unit we are handling in GameLoop (the type depends on the GameLoop). */
	/* 3952(4)   */ PACK csip32  removed_3952;              /*!< REMOVED - Table with orientation information. */
	/* 3956(4)   */ PACK csip32  removed_3956;              /*!< REMOVED - Pointer to the current animations. */
	/* 395A(4)   */ PACK csip32  removed_395A;              /*!< REMOVED - ?? */
	/* 395E(132) */ PACK uint32 variable_395E[33];          /*!< ?? */
	/* 39E2(2)   */ PACK uint16 variable_39E2;              /*!< ?? */
	/* 39E4(2)   */ PACK uint16 variable_39E4;              /*!< ?? */
	/* 39E6(2)   */ PACK uint16 variable_39E6;              /*!< ?? */
	/* 39E8(2)   */ PACK uint16 variable_39E8;              /*!< ?? */
	/* 39EA(4)   */ PACK csip32  removed_39EA;              /*!< REMOVED - Pointer to the map. */
	/* 39EE(4)   */ PACK csip32  removed_39EE;              /*!< REMOVED - Pointer to content of ICON.MAP. */
	/* 39F2(2)   */ PACK uint16  removed_39F2;              /*!< REMOVED - SpriteID of the veiled sprite, at the end of the partily veiled sprites. */
	/* 39F4(2)   */ PACK uint16  removed_39F4;              /*!< REMOVED - First bloom field spriteID. */
	/* 39F6(2)   */ PACK uint16  removed_39F6;              /*!< REMOVED - First landscape spriteID. */
	/* 39F8(2)   */ PACK uint16  removed_39F8;              /*!< REMOVED - SpriteID of the built concrete slab. */
	/* 39FA(2)   */ PACK uint16  removed_39FA;              /*!< REMOVED - First wall spriteID. */
	/* 39FC(2)   */ PACK uint16  removed_39FC;              /*!< REMOVED - Current minimap position (top-left tile, packed). */
	/* 39FE(2)   */ PACK uint16  removed_39FE;              /*!< REMOVED - Current viewport position (top-left tile, packed). */
	/* 3A00(2)   */ PACK uint16  removed_3A00;              /*!< REMOVED - Position of the structure selection rectangle */
	/* 3A02(2)   */ PACK uint16  removed_3A02;              /*!< REMOVED - Current selection position (packed). */
	/* 3A04(2)   */ PACK uint16  removed_3A04;              /*!< REMOVED - Width of the selection. */
	/* 3A06(2)   */ PACK uint16  removed_3A06;              /*!< REMOVED - Height of the selection. */
	/* 3A08(2)   */ PACK uint16 variable_3A08;              /*!< ?? */
	/* 3A0A(4)   */ PACK csip32  removed_3A0A;              /*!< REMOVED - Current selected unit. */
	/* 3A0E(2)   */ PACK uint16 selectionType;              /*!< Type of selection. 0 = ??, 1 = target/destination, 2 = place object, 3 = unit, 4 = structure, 7 = intro. */
	/* 3A10(2)   */ PACK uint16 variable_3A10;              /*!< ?? */
	/* 3A12(2)   */ PACK uint16 variable_3A12;              /*!< ?? */
	/* 3A14(2)   */ PACK uint16 variable_3A14;              /*!< ?? */
	/* 3A16(22)  */ PACK uint16 progressbarInfo[11];        /*!< Info about the current progressbar (there is only one in Dune2). */
	/* 3A2C(4)   */ PACK csip32  removed_3A2C;              /*!< REMOVED - Pointer to content of new6p[g].fnt. */
	/* 3A30(4)   */ PACK csip32  removed_3A30;              /*!< REMOVED - Pointer to content of new8p.fnt (copy of new8pFnt). */
	/* 3A34(2)   */ PACK uint16 cursorSpriteID;             /*!< The current cursor spriteID. */
	/* 3A36(2)   */ PACK uint16 cursorDefaultSpriteID;      /*!< The cursor spriteID for viewport and minimap. */
	/* 3A38(2)   */ PACK uint16  removed_3A38;              /*!< REMOVED - The House the player is controlling. */
	/* 3A3A(4)   */ PACK csip32  removed_3A3A;              /*!< REMOVED - Pointer to the house the player is controlling. */
	/* 3A3E(448) */ PACK uint16 variable_3A3E[15][14];      /*!< ?? */
	/* 3BE2(24)  */ PACK csip32 movementName[6];            /*!< Pointer to the name of the MovementType. */
	/* 3BFA(20)  */ PACK csip32  removed_3BFA[5];           /*!< REMOVED - Pointer to the name of the TeamActionType. */
	/* 3C0E(24)  */ PACK uint8   removed_3C0E[3][8];        /*!< REMOVED - Data about the map. [0] is 62x62, [1] is 32x32, [2] is 21x21. */
	/* 3C26(4)   */ PACK csip32  removed_3C26;              /*!< REMOVED - First Widget in the linked-list of all Widgets. */
	/* 3C2A(8)   */ PACK uint16  removed_3C2A[4];           /*!< REMOVED - The action of the AI. */
	/* 3C32(4)   */ PACK csip32  removed_3C32;              /*!< REMOVED - Main palette. */
	/* 3C36(4)   */ PACK csip32  removed_3C36;              /*!< REMOVED - Secondary palette. */
	/* 3C3A(4)   */ PACK csip32  removed_3C3A;              /*!< REMOVED - Palette mapping. */
	/* 3C3E(4)   */ PACK csip32  removed_3C3E;              /*!< REMOVED - Palette mapping. */
	/* 3C42(4)   */ PACK csip32  removed_3C42;              /*!< REMOVED - Pointer to color remap. */
	/* 3C46(4)   */ PACK csip32  removed_3C46;              /*!< REMOVED - Sprite buffer. */
	/* 3C4A(2)   */ PACK uint16  removed_3C4A;              /*!< REMOVED - mentat interrogation flag */
	/* 3C4C(256) */ PACK int8    removed_3C4C[256];         /*!< REMOVED - table with X steps */
	/* 3D4C(256) */ PACK int8    removed_3D4C[256];         /*!< REMOVED - table with Y steps. */
	/* 3E4C()    */ PACK uint8   unknown_3E4C[0x0002];
	/* 3E4E(4)   */ PACK csip32  removed_3E4E;              /*!< REMOVED - Currently loaded music file. */
	/* 3E52(2)   */ PACK  int16 variable_3E52;              /*!< ?? */
	/* 3E54(524) */ PACK csip32  removed_3E54[131];         /*!< REMOVED - Pointer to loaded voice. */
	/* 4060(2)   */ PACK uint16 variable_4060;              /*!< ?? */
	/* 4062(352) */ PACK uint16  removed_4062[22][8];       /*!< REMOVED - ?? Position and size of widgets? (to g_widgetProperties[22]) */
	/* 41C2(10)  */ PACK GameCfg removed_41C2;              /*!< REMOVED - Game config (options.cfg). */
	/* 41CC(10)  */ PACK char   string_41CC[10];            /*!< "Harkonnen" NULL terminated. */
	/* 41D6(10)  */ PACK char   string_41D6[10];            /*!< "nhark.voc" NULL terminated. */
	/* 41E0(9)   */ PACK char   string_41E0[9];             /*!< "Atreides" NULL terminated. */
	/* 41E9(10)  */ PACK char   string_41E9[10];            /*!< "nattr.voc" NULL terminated. */
	/* 41F3(6)   */ PACK char   string_41F3[6];             /*!< "Ordos" NULL terminated. */
	/* 41F9(10)  */ PACK char   string_41F9[10];            /*!< "norde.voc" NULL terminated. */
	/* 4203(7)   */ PACK char   string_4203[7];             /*!< "Fremen" NULL terminated. */
	/* 420A(12)  */ PACK char   string_420A[12];            /*!< "afremen.voc" NULL terminated. */
	/* 4216(10)  */ PACK char   string_4216[10];            /*!< "Sardaukar" NULL terminated. */
	/* 4220(10)  */ PACK char   string_4220[10];            /*!< "asard.voc" NULL terminated. */
	/* 422A(10)  */ PACK char   string_422A[10];            /*!< "Mercenary" NULL terminated. */
	/* 4234(10)  */ PACK char   string_4234[10];            /*!< "amerc.voc" NULL terminated. */
	/* 423E(5)   */ PACK char   string_423E[5];             /*!< "Foot" NULL terminated. */
	/* 4243(8)   */ PACK char   string_4243[8];             /*!< "Tracked" NULL terminated. */
	/* 424B(10)  */ PACK char   string_424B[10];            /*!< "Harvester" NULL terminated. */
	/* 4255(8)   */ PACK char   string_4255[8];             /*!< "Wheeled" NULL terminated. */
	/* 425D(7)   */ PACK char   string_425D[7];             /*!< "Winged" NULL terminated. */
	/* 4264(8)   */ PACK char   string_4264[8];             /*!< "Slither" NULL terminated. */
	/* 426C(7)   */ PACK char   string_426C[7];             /*!< REMOVED - "Normal" NULL terminated. */
	/* 4273(8)   */ PACK char   string_4273[8];             /*!< REMOVED - "Staging" NULL terminated. */
	/* 427B(5)   */ PACK char   string_427B[5];             /*!< REMOVED - "Flee" NULL terminated. */
	/* 4280(9)   */ PACK char   string_4280[9];             /*!< REMOVED - "Kamikaze" NULL terminated. */
	/* 4289(6)   */ PACK char   string_4289[6];             /*!< REMOVED - "Guard" NULL terminated. */
	/* 428F(7)   */ PACK char   string_428F[7];             /*!< "Attack" NULL terminated. */
	/* 4296(5)   */ PACK char   string_4296[5];             /*!< "Move" NULL terminated. */
	/* 429B(8)   */ PACK char   string_429B[8];             /*!< "Retreat" NULL terminated. */
	/* 42A3(11)  */ PACK char   string_42A3[11];            /*!< "Area Guard" NULL terminated. */
	/* 42AE(8)   */ PACK char   string_42AE[8];             /*!< "Harvest" NULL terminated. */
	/* 42B6(7)   */ PACK char   string_42B6[7];             /*!< "Return" NULL terminated. */
	/* 42BD(5)   */ PACK char   string_42BD[5];             /*!< "Stop" NULL terminated. */
	/* 42C2(7)   */ PACK char   string_42C2[7];             /*!< "Ambush" NULL terminated. */
	/* 42C9(9)   */ PACK char   string_42C9[9];             /*!< "Sabotage" NULL terminated. */
	/* 42D2(4)   */ PACK char   string_42D2[4];             /*!< "Die" NULL terminated. */
	/* 42D6(5)   */ PACK char   string_42D6[5];             /*!< "Hunt" NULL terminated. */
	/* 42DB(7)   */ PACK char   string_42DB[7];             /*!< "Deploy" NULL terminated. */
	/* 42E2(9)   */ PACK char   string_42E2[9];             /*!< "Destruct" NULL terminated. */
	/* 42EB()    */ PACK uint8   unknown_42EB[0x1D67];      /*!< list of all files. */
	/* 6052()    */ PACK uint8   unknown_6052[0x0034];
	/* 6086(4)   */ PACK uint32  removed_6086;              /*!< REMOVED - Indicates next time House runs House function. */
	/* 608A(4)   */ PACK uint32  removed_608A;              /*!< REMOVED - Indicates next time House runs Power Maintenance function. */
	/* 608E(4)   */ PACK uint32  removed_608E;              /*!< REMOVED - Indicates next time House runs Starport function. */
	/* 6092(4)   */ PACK uint32  removed_6092;              /*!< REMOVED - Indicates next time House runs Reinforcement function. */
	/* 6096(4)   */ PACK uint32  removed_6096;              /*!< REMOVED - Indicates next time House runs Unused function. */
	/* 609A(4)   */ PACK uint32  removed_609A;              /*!< REMOVED - Indicates next time House runs Unknown function. */
	/* 609E(4)   */ PACK uint32  removed_609E;              /*!< REMOVED - Indicates next time House runs Starport Availability function. */
	/* 60A2(4)   */ PACK uint32  removed_60A2;              /*!< REMOVED - end of level check timer */
	/* 60A6(8)   */ PACK uint16 donotuse_60A6[4];
	/* 60AE(12)  */ PACK char   string_60AE[12];            /*!< "Forced end." NULL terminated. */
	/* 60BA(13)  */ PACK char   string_60BA[13];            /*!< "Destroy end." NULL terminated. */
	/* 60C7(11)  */ PACK char   string_60C7[11];            /*!< "Quota win." NULL terminated. */
	/* 60D2(13)  */ PACK char   string_60D2[13];            /*!< "Timeout win." NULL terminated. */
	/* 60DF(8)   */ PACK char   string_60DF[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 60E7()    */ PACK uint8   unknown_60E7[0x0001];
	/* 60E8(4)   */ PACK uint32  removed_60E8;              /*!< REMOVED - ?? */
	/* 60EC(4)   */ PACK csip32 animationProc[10];          /*!< Which command ends up in which function. No longer in use. */
	/* 6114(4)   */ PACK uint32  removed_6114;              /*!< REMOVED - Amount of memory block used when loading ICON.ICN. */
	/* 6118(4)   */ PACK csip32  removed_6118;              /*!< REMOVED - Content of RPAL chunk from ICON.ICN. */
	/* 611C(2)   */ PACK uint16  removed_611C;              /*!< REMOVED - True if memory at iconRPAL has been freed. */
	/* 611E(4)   */ PACK csip32  removed_611E;              /*!< REMOVED - Content of RTBL chunk from ICON.ICN. */
	/* 6122(2)   */ PACK uint16  removed_6122;              /*!< REMOVED - True if memory at iconRTBL has been freed. */
	/* 6124(4)   */ PACK csip32  removed_6124;              /*!< REMOVED - Current Team we are handling in GameLoop. */
	/* 6128(60)  */ PACK csip32 scriptFunctionsTeam[15];    /*!< Team functions to call via scripts. */
	/* 6164(4)   */ PACK uint32  removed_6164;              /*!< REMOVED - Indicates next time Team runs GameLoop function. */
	/* 6168(256) */ PACK csip32 scriptFunctionsUnit[64];    /*!< Unit functions to call via scripts. */
	/* 6268(4)   */ PACK csip32  removed_6268;              /*!< REMOVED - Current Unit we are handling in GameLoop. */
	/* 626C(4)   */ PACK csip32  removed_626C;              /*!< REMOVED - Current UnitInfo we are handling in the GameLoop. */
	/* 6270(4)   */ PACK uint32  removed_6270;              /*!< REMOVED - Indicates next time Unit runs Unknown1 function. */
	/* 6274(4)   */ PACK uint32  removed_6274;              /*!< REMOVED - Indicates next time Unit runs Unknown2 function. */
	/* 6278(4)   */ PACK uint32  removed_6278;              /*!< REMOVED - Indicates next time Unit runs Blinking function. */
	/* 627C(4)   */ PACK uint32  removed_627C;              /*!< REMOVED - Indicates next time Unit runs Unknown4 function. */
	/* 6280(4)   */ PACK uint32  removed_6280;              /*!< REMOVED - Indicates next time Unit runs Script function. */
	/* 6284(4)   */ PACK uint32  removed_6284;              /*!< REMOVED - Indicates next time Unit runs Unknown5 function. */
	/* 6288(4)   */ PACK uint32  removed_6288;              /*!< REMOVED - Indicates next time Unit runs Deviation function. */
	/* 628C(8)   */ PACK uint16 variable_628C[4];           /*!< ?? */
	/* 6294(68)  */ PACK tile32 variable_6294[17];          /*!< ?? */
	/* 62D8(18)  */ PACK uint16  removed_62D8[9];           /*!< REMOVED - mapOffsets in a 3x3 grid around a centre */
	/* 62EA(3)   */ PACK char   string_62EA[3];             /*!< "%s" NULL terminated. */
	/* 62ED(6)   */ PACK char   string_62ED[6];             /*!< "%s %s" NULL terminated. */
	/* 62F3(2)   */ PACK char   string_62F3[2];             /*!< "." NULL terminated. */
	/* 62F5()    */ PACK uint8   unknown_62F5[0x0001];
	/* 62F6(1)   */ PACK uint8  not_used_62F6;              /*!< Not used (any more). */
	/* 62F7(9)   */ PACK uint8  variable_62F7[9];           /*!< ?? */
	/* 6300(2)   */ PACK char   string_6300[2];             /*!< "\" NULL terminated. */
	/* 6302(38)  */ PACK Driver soundDriver;                /*!< Sound driver. */
	/* 6328(2)   */ PACK uint16 variable_6328;              /*!< ?? */
	/* 632A(2)   */ PACK uint16 soundBufferIndex;           /*!< ?? */
	/* 632C(24)  */ PACK MSBuffer soundBuffer[4];           /*!< ?? */
	/* 6344(38)  */ PACK Driver musicDriver;                /*!< Music driver. */
	/* 636A(2)   */ PACK uint16 variable_636A;              /*!< ?? */
	/* 636C(6)   */ PACK MSBuffer musicBuffer;              /*!< ?? */
	/* 6372(2)   */ PACK uint16 variable_6372;              /*!< ?? */
	/* 6374(38)  */ PACK Driver voiceDriver;                /*!< Voice driver. */
	/* 639A(2)   */ PACK uint16 variable_639A;              /*!< ?? */
	/* 639C(2)   */ PACK uint16 variable_639C;              /*!< ?? */
	/* 639E(6)   */ PACK uint8  variable_639E[6];           /*!< ?? */
	/* 63A4(6)   */ PACK uint8  variable_63A4[6];           /*!< ?? */
	/* 63AA(28)  */ PACK DSDriver voiceDrv[7];              /*!< Informations about the digitized sound drivers. */
	/* 63C6(168) */ PACK MSDriver musicDrv[14];             /*!< Informations about the music drivers. */
	/* 646E(168) */ PACK MSDriver soundDrv[14];             /*!< Informations about the sound drivers. */
	/* 6516(2)   */ PACK uint16 variable_6516;              /*!< ?? */
	/* 6518(17)  */ PACK char  string_6518[17];             /*!< "Sound1 for %08lx" NULL terminated. */
	/* 6529(5)   */ PACK char  string_6529[5];              /*!< ".COM" NULL terminated. */
	/* 652E(10)  */ PACK char  string_652E[10];             /*!< "SBDIG.ADV" NULL terminated. */
	/* 6538(11)  */ PACK char  string_6538[11];             /*!< "SBPDIG.ADV" NULL terminated. */
	/* 6543(11)  */ PACK char  string_6543[11];             /*!< "PASDIG.ADV" NULL terminated. */
	/* 654E(11)  */ PACK char  string_654E[11];             /*!< "ALGDIG.ADV" NULL terminated. */
	/* 6559(11)  */ PACK char  string_6559[11];             /*!< "IBMBAK.COM" NULL terminated. */
	/* 6564(10)  */ PACK char  string_6564[10];             /*!< "ADLIB.COM" NULL terminated. */
	/* 656E(4)   */ PACK char  string_656E[4];              /*!< "VOC" NULL terminated. */
	/* 6572(9)   */ PACK char  string_6572[9];              /*!< "ALFX.DRV" NULL terminated. */
	/* 657B(4)   */ PACK char  string_657B[4];              /*!< "ADL" NULL terminated. */
	/* 657F(12)  */ PACK char  string_657F[12];             /*!< "PCSOUND.DRV" NULL terminated. */
	/* 658B(4)   */ PACK char  string_658B[4];              /*!< "PCS" NULL terminated. */
	/* 658F(11)  */ PACK char  string_658F[11];             /*!< "PCSPKR.ADV" NULL terminated. */
	/* 659A(10)  */ PACK char  string_659A[10];             /*!< "TANDY.ADV" NULL terminated. */
	/* 65A4(4)   */ PACK char  string_65A4[4];              /*!< "TAN" NULL terminated. */
	/* 65A8(12)  */ PACK char  string_65A8[12];             /*!< "MT32MPU.ADV" NULL terminated. */
	/* 65B4(4)   */ PACK char  string_65B4[4];              /*!< "XMI" NULL terminated. */
	/* 65B8(4)   */ PACK char  string_65B8[4];              /*!< "C55" NULL terminated. */
	/* 65BC(10)  */ PACK char  string_65BC[10];             /*!< "ADLIB.ADV" NULL terminated. */
	/* 65C6(11)  */ PACK char  string_65C6[11];             /*!< "ADLIBG.ADV" NULL terminated. */
	/* 65D1(10)  */ PACK char  string_65D1[10];             /*!< "PASFM.ADV" NULL terminated. */
	/* 65DB(9)   */ PACK char  string_65DB[9];              /*!< "SBFM.ADV" NULL terminated. */
	/* 65E4(11)  */ PACK char  string_65E4[11];             /*!< "SBP1FM.ADV" NULL terminated. */
	/* 65EF(11)  */ PACK char  string_65EF[11];             /*!< "SBP2FM.ADV" NULL terminated. */
	/* 65FA(4)   */ PACK char  string_65FA[4];              /*!< "SND" NULL terminated. */
	/* 65FE(8)   */ PACK char  string_65FE[8];              /*!< "BLASTER" NULL terminated. */
	/* 6606(2)   */ PACK char  string_6606[2];              /*!< "." NULL terminated. */
	/* 6608(5)   */ PACK char  string_6608[5];              /*!< ".XMI" NULL terminated. */
	/* 660D(9)   */ PACK char  string_660D[9];              /*!< "DEFAULT." NULL terminated. */
	/* 6616(5)   */ PACK char  string_6616[5];              /*!< "ALFX" NULL terminated. */
	/* 661B()    */ PACK uint8   unknown_661B[0x0009];
	/* 6624(4)   */ PACK csip32 variable_6624;              /*!< CS:IP of routine. */
	/* 6628(4)   */ PACK csip32 variable_6628;              /*!< CS:IP of routine (not called). */
	/* 662C(4)   */ PACK csip32 variable_662C;              /*!< CS:IP of routine. */
	/* 6630(4)   */ PACK csip32 variable_6630;              /*!< CS:IP of routine. */
	/* 6634(4)   */ PACK csip32 variable_6634;              /*!< CS:IP of routine (not called). */
	/* 6638(4)   */ PACK csip32 variable_6638;              /*!< CS:IP of routine. */
	/* 663C(4)   */ PACK csip32 variable_663C;              /*!< CS:IP of routine. */
	/* 6640(4)   */ PACK csip32 variable_6640;              /*!< CS:IP of routine. */
	/* 6644(4)   */ PACK csip32 variable_6644;              /*!< CS:IP of routine (not called). */
	/* 6648(4)   */ PACK csip32 variable_6648;              /*!< CS:IP of routine (not called). */
	/* 664C(4)   */ PACK csip32 variable_664C;              /*!< CS:IP of routine. */
	/* 6650(4)   */ PACK csip32 variable_6650;              /*!< CS:IP of routine. */
	/* 6654(4)   */ PACK csip32 variable_6654;              /*!< CS:IP of routine. */
	/* 6658(4)   */ PACK csip32 variable_6658;              /*!< CS:IP of routine (not called). */
	/* 665C(4)   */ PACK csip32 variable_665C;              /*!< CS:IP of routine. */
	/* 6660(4)   */ PACK csip32 variable_6660;              /*!< CS:IP of routine (not called). */
	/* 6664(4)   */ PACK csip32 variable_6664;              /*!< CS:IP of routine (not called). */
	/* 6668(4)   */ PACK csip32 variable_6668;              /*!< CS:IP of routine. */
	/* 666C(4)   */ PACK csip32 variable_666C;              /*!< CS:IP of routine. */
	/* 6670(4)   */ PACK csip32 variable_6670;              /*!< CS:IP of routine (not called). */
	/* 6674(4)   */ PACK csip32 variable_6674;              /*!< CS:IP of routine. */
	/* 6678(4)   */ PACK csip32 variable_6678;              /*!< CS:IP of routine (not called). */
	/* 667C(4)   */ PACK csip32 variable_667C;              /*!< CS:IP of routine (not called). */
	/* 6680(4)   */ PACK csip32 variable_6680;              /*!< CS:IP of routine (not called). */
	/* 6684(4)   */ PACK csip32 variable_6684;              /*!< CS:IP of routine (not called). */
	/* 6688(4)   */ PACK csip32 variable_6688;              /*!< CS:IP of routine (not called). */
	/* 668C(4)   */ PACK csip32 variable_668C;              /*!< CS:IP of routine (not called). */
	/* 6690(4)   */ PACK csip32 variable_6690;              /*!< CS:IP of routine (not called). */
	/* 6694(4)   */ PACK csip32 variable_6694;              /*!< CS:IP of routine (not called). */
	/* 6698(4)   */ PACK csip32 variable_6698;              /*!< CS:IP of routine (not called). */
	/* 669C(4)   */ PACK csip32 variable_669C;              /*!< CS:IP of routine (not called). */
	/* 66A0(4)   */ PACK csip32 variable_66A0;              /*!< CS:IP of routine. */
	/* 66A4(4)   */ PACK csip32 callbackAfterMouse;         /*!< CS:IP of routine called after mouse change. */
	/* 66A8(4)   */ PACK csip32 variable_66A8;              /*!< CS:IP of routine (not called). */
	/* 66AC(4)   */ PACK csip32 variable_66AC;              /*!< CS:IP of routine (not called). */
	/* 66B0(4)   */ PACK csip32 variable_66B0;              /*!< CS:IP of routine (not called). */
	/* 66B4(4)   */ PACK csip32 callbackBeforeMouse;        /*!< CS:IP of routine called before mouse change. */
	/* 66B8(4)   */ PACK csip32 variable_66B8;              /*!< CS:IP of routine (not called). */
	/* 66BC(4)   */ PACK csip32 variable_66BC;              /*!< CS:IP of routine (not called). */
	/* 66C0(4)   */ PACK csip32 variable_66C0;              /*!< CS:IP of routine. */
	/* 66C4(4)   */ PACK csip32 variable_66C4;              /*!< CS:IP of routine. */
	/* 66C8(4)   */ PACK csip32 variable_66C8;              /*!< CS:IP of routine (not called). */
	/* 66CC(4)   */ PACK csip32 variable_66CC;              /*!< CS:IP of routine (not called). */
	/* 66D0(4)   */ PACK csip32 variable_66D0;              /*!< CS:IP of routine. */
	/* 66D4(4)   */ PACK csip32 variable_66D4;              /*!< CS:IP of routine (not called). */
	/* 66D8(4)   */ PACK csip32 variable_66D8;              /*!< CS:IP of routine (not called). */
	/* 66DC(4)   */ PACK csip32 variable_66DC;              /*!< CS:IP of routine. */
	/* 66E0(4)   */ PACK csip32 variable_66E0;              /*!< CS:IP of routine. */
	/* 66E4(4)   */ PACK csip32 variable_66E4;              /*!< CS:IP of routine. */
	/* 66E8(4)   */ PACK csip32 variable_66E8;              /*!< CS:IP of routine (not called). */
	/* 66EC(4)   */ PACK csip32  removed_66EC;              /*!< REMOVED - CS:IP of routine. Contains array with Y-offsets on the screen (so index * 320). */
	/* 66F0(4)   */ PACK uint32  removed_66F0;              /*!< REMOVED - Information for Tools_Free and Tools_Alloc. */
	/* 66F4(4)   */ PACK uint32  removed_66F4;              /*!< REMOVED - Information for Tools_Free and Tools_Alloc. */
	/* 66F8(4)   */ PACK uint32  removed_66F8;              /*!< REMOVED - Information for Tools_Free and Tools_Alloc. */
	/* 66FC()    */ PACK uint8   unknown_66FC[0x0004];
	/* 6700(33)  */ PACK char   string_6700[17];            /*!< "0123456789ABCDEF" NULL terminated. */
	/* 6711()    */ PACK uint8   unknown_6711[0x0001];
	/* 6712(4)   */ PACK csip32 variable_6712;              /*!< ?? Pointer to string_6792. */
	/* 6716(4)   */ PACK csip32 variable_6716;              /*!< ?? Pointer to string_67C2. */
	/* 671A(4)   */ PACK csip32 variable_671C;              /*!< ?? Pointer to string_67F9. */
	/* 671E(4)   */ PACK csip32 variable_671E;              /*!< ?? Pointer to string_6834. */
	/* 6722(4)   */ PACK csip32 variable_6722;              /*!< ?? Pointer to string_6866. */
	/* 6726(4)   */ PACK csip32 variable_6726;              /*!< ?? Pointer to string_687C. */
	/* 672A(4)   */ PACK csip32 variable_672A;              /*!< ?? Pointer to string_68BE. */
	/* 672E(4)   */ PACK csip32 variable_672E;              /*!< ?? Pointer to string_68ED. */
	/* 6732(4)   */ PACK csip32 variable_6732;              /*!< ?? Pointer to string_6911. */
	/* 6736(4)   */ PACK csip32 variable_6736;              /*!< ?? Pointer to string_692C. */
	/* 673C(4)   */ PACK csip32 variable_673C;              /*!< ?? Pointer to string_6946. */
	/* 673E(4)   */ PACK csip32 variable_673E;              /*!< ?? Pointer to string_695B. */
	/* 6742(4)   */ PACK csip32 variable_6742;              /*!< ?? Pointer to string_697A. */
	/* 6746(4)   */ PACK csip32 variable_6746;              /*!< ?? Pointer to string_6998. */
	/* 674C(4)   */ PACK csip32 variable_674C;              /*!< ?? Pointer to string_69B7. */
	/* 674E(4)   */ PACK csip32 variable_674E;              /*!< ?? Pointer to string_69D5. */
	/* 6752(4)   */ PACK csip32 variable_6752;              /*!< ?? Pointer to string_69FD. */
	/* 6756(4)   */ PACK csip32 variable_6756;              /*!< ?? Pointer to string_6A21. */
	/* 675C(4)   */ PACK csip32 variable_675C;              /*!< ?? Pointer to string_6A4F. */
	/* 675E(4)   */ PACK csip32 variable_675E;              /*!< ?? Pointer to string_6A70. */
	/* 6762(4)   */ PACK csip32 variable_6762;              /*!< ?? Pointer to string_6AA7. */
	/* 6766(4)   */ PACK csip32 variable_6766;              /*!< ?? Pointer to string_6ACB. */
	/* 676C(4)   */ PACK csip32 variable_676C;              /*!< ?? Pointer to string_6B01. */
	/* 676E(4)   */ PACK csip32 variable_676E;              /*!< ?? Pointer to string_6B22. */
	/* 6772(4)   */ PACK csip32 variable_6772;              /*!< ?? Pointer to string_6B48. */
	/* 6776(4)   */ PACK csip32 variable_6776;              /*!< ?? Pointer to string_6B71. */
	/* 677C(4)   */ PACK csip32 variable_677C;              /*!< ?? Pointer to string_6BA0. */
	/* 677E(4)   */ PACK csip32 variable_677E;              /*!< ?? Pointer to string_6BBB. */
	/* 6782(4)   */ PACK csip32 variable_6782;              /*!< ?? Pointer to string_6BDD. */
	/* 6786(4)   */ PACK csip32 variable_6786;              /*!< ?? Pointer to string_6C06. */
	/* 678A(4)   */ PACK csip32 variable_678A;              /*!< ?? Pointer to string_6C39. */
	/* 678E(4)   */ PACK csip32 variable_678E;              /*!< ?? Pointer to string_6C5F. */
	/* 6792(48)  */ PACK char   string_6792[48];            /*!< "Ram Free Error! Press any key to exit to DOS.\r\n" NULL terminated. */
	/* 67C2(55)  */ PACK char   string_67C2[55];            /*!< "Taking advantage of extended memory.\r\nPlease wait...\r\n" NULL terminated. */
	/* 67F9(59)  */ PACK char   string_67F9[59];            /*!< "Taking advantage of extended memory.\r\nPlease wait...\r\n" NULL terminated. */
	/* 6834(50)  */ PACK char   string_6834[50];            /*!< "A memory allocation error has occured - exiting\r\n" NULL terminated. */
	/* 6866(22)  */ PACK char   string_6866[22];            /*!< "\r\nMemory Corrupt!!!\r\n" NULL terminated. */
	/* 687C(66)  */ PACK char   string_687C[66];            /*!< "\r\nCould not load overlay \"%s\".  Press a key to return to DOS...\r\n" NULL terminated. */
	/* 68BE(47)  */ PACK char   string_68BE[47];            /*!< "\r\nUnable to load font %s\r\nReinstall program.\r\n" NULL terminated. */
	/* 68ED(36)  */ PACK char   string_68ED[36];            /*!< "Could not create file \"%s\" on disk." NULL terminated. */
	/* 6911(27)  */ PACK char   string_6911[27];            /*!< "Illegal MODE in Open_File." NULL terminated. */
	/* 692C(26)  */ PACK char   string_692C[26];            /*!< "Could not find file \"%s\"." NULL terminated. */
	/* 6946(21)  */ PACK char   string_6946[21];            /*!< "Too many files open." NULL terminated. */
	/* 695B(31)  */ PACK char   string_695B[31];            /*!< "Trying to close unopened file." NULL terminated. */
	/* 697A(30)  */ PACK char   string_697A[30];            /*!< "Trying to read unopened file." NULL terminated. */
	/* 6998(31)  */ PACK char   string_6998[31];            /*!< "Trying to write unopened file." NULL terminated. */
	/* 69B7(30)  */ PACK char   string_69B7[30];            /*!< "Trying to seek unopened file." NULL terminated. */
	/* 69D5(40)  */ PACK char   string_69D5[40];            /*!< "Illegal starting position in Seek_File." NULL terminated. */
	/* 69FD(36)  */ PACK char   string_69FD[36];            /*!< "Trying to write resident file \"%s\"." NULL terminated. */
	/* 6A21(46)  */ PACK char   string_6A21[46];            /*!< "Trying to Get_Resident_Index on unknown file." NULL terminated. */
	/* 6A4F(33)  */ PACK char   string_6A4F[33];            /*!< "You are exiting with open files." NULL terminated. */
	/* 6A70(55)  */ PACK char   string_6A70[55];            /*!< "A fatal disk error has occured. Now returning to DOS." NULL terminated. */
	/* 6AA7(36)  */ PACK char   string_6AA7[36];            /*!< "File \"%s\" not listed in FileData[]." NULL terminated. */
	/* 6ACB(54)  */ PACK char   string_6ACB[54];            /*!< "File length does not match size listed in FileData[]." NULL terminated. */
	/* 6B01(33)  */ PACK char   string_6B01[33];            /*!< "Internal Error in File_Exists()." NULL terminated. */
	/* 6B22(38)  */ PACK char   string_6B22[38];            /*!< "Trying to Alloc a 0 sized file entry." NULL terminated. */
	/* 6B48(41)  */ PACK char   string_6B48[41];            /*!< "Failure in sort code for resident files." NULL terminated. */
	/* 6B71(47)  */ PACK char   string_6B71[47];            /*!< "\nInsert disk %s containing '%s' into any drive." NULL terminated. */
	/* 6BA0(27)  */ PACK char   string_6BA0[27];            /*!< "Cannot open %s - exiting\r\n" NULL terminated. */
	/* 6BBB(34)  */ PACK char   string_6BBB[34];            /*!< "IO error with %s (%d) - exiting\r\n" NULL terminated. */
	/* 6BDD(41)  */ PACK char   string_6BDD[41];            /*!< "\r\nBorland overlay manager not enabled.\r\n" NULL terminated. */
	/* 6C06(51)  */ PACK char   string_6C06[51];            /*!< "\r\nProgram must be run from the source directory.\r\n" NULL terminated. */
	/* 6C39(38)  */ PACK char   string_6C39[38];            /*!< "\r\nNot enough memory to run program.\r\n" NULL terminated. */
	/* 6C5F(7)   */ PACK char   string_6C5F[7];             /*!< "<MORE>" NULL terminated. */
	/* 6C66(4)   */ PACK csip32 variable_6C66;              /*!< ?? Pointer to a function. */
	/* 6C6A(2)   */ PACK uint16 variable_6C6A;              /*!< ?? */
	/* 6C6C(2)   */ PACK uint16 variable_6C6C;              /*!< ?? Wide-space between chars? */
	/* 6C6E(2)   */ PACK uint16 variable_6C6E;              /*!< ?? Wide-space between lines? */
	/* 6C70(1)   */ PACK uint8  variable_6C70;              /*!< ?? */
	/* 6C71(1)   */ PACK uint8  variable_6C71;              /*!< ?? */
	/* 6C72(4)   */ PACK csip32 variable_6C72;              /*!< ?? Pointer to an array. */
	/* 6C76(2)   */ PACK uint16  removed_6C76;              /*!< REMOVED - The GraphicMode the game will be playing in. */
	/* 6C78(2)   */ PACK uint16 snapX;                      /*!< Snap mouse to grid, x-axis. */
	/* 6C7A(2)   */ PACK uint16 snapY;                      /*!< Snap mouse to grid, y-axis. */
	/* 6C7C(2)   */ PACK uint16 snapGreyX;                  /*!< Grey zone for snapping, x-axis. */
	/* 6C7E(2)   */ PACK uint16 snapGreyY;                  /*!< Grey zone for snapping, y-axis. */
	/* 6C80(4)   */ PACK csip32  removed_6C80;              /*!< REMOVED - CS:IP of File_Error_Wrapper. */
	/* 6C84()    */ PACK uint8   unknown_6C84[0x0002];
	/* 6C86(4)   */ PACK uint32  removed_6C86;              /*!< REMOVED - ?? */
	/* 6C8A()    */ PACK uint8   unknown_6C8A[0x0002];
	/* 6C8C(1)   */ PACK uint8   removed_6C8C;              /*!< REMOVED - Write only. */
	/* 6C8D()    */ PACK uint8   unknown_6C8D[0x0004];
	/* 6C91(2)   */ PACK uint16  removed_6C91;              /*!< REMOVED - Current active ScreenID where all drawing is done.. */
	/* 6C93(32)  */ PACK uint16  removed_6C93[8][2];        /*!< REMOVED - Array with segment values of screenbuffers. */
	/* 6CB3()    */ PACK uint8   unknown_6CB3[0x0020];
	/* 6CD3(64)  */ PACK uint32  removed_6CD3[8][2];        /*!< REMOVED - Array with size of screen buffers. */
	/* 6D13()    */ PACK uint8   unknown_6D13[0x0040];
	/* 6D53(2)   */ PACK uint16  removed_6D53;              /*!< REMOVED - Read-only, colour of some kind. */
	/* 6D55()    */ PACK uint8   unknown_6D55[0x0004];
	/* 6D59(2)   */ PACK uint16  removed_6D59;              /*!< REMOVED ?? Non-blink colour for cursor in edit box. */
	/* 6D5B(2)   */ PACK uint16  removed_6D5B;              /*!< REMOVED ?? Blink colour for cursor in edit box. */
	/* 6D5D(2)   */ PACK uint16  removed_6D5D;              /*!< REMOVED ?? */
	/* 6D5F(2)   */ PACK uint16  removed_6D5F;              /*!< REMOVED - ?? (Write-only var with font property?) */
	/* 6D61(2)   */ PACK uint16  removed_6D61;              /*!< REMOVED - ?? (Write-only var with font property?) */
	/* 6D63(2)   */ PACK uint16  removed_6D63;              /*!< REMOVED - ?? (Write-only var with font property?) */
	/* 6D65()    */ PACK uint8   unknown_6D65[0x0010];
	/* 6D75(2)   */ PACK uint16 widgetReset;                /*!< Reset the widget and redraw when non-zero. */
	/* 6D77(4)   */ PACK char   string_6D77[4];             /*!< "ENG" NULL terminated. */
	/* 6D7B(4)   */ PACK char   string_6D7B[4];             /*!< "FRE" NULL terminated. */
	/* 6D7F(4)   */ PACK char   string_6D7F[4];             /*!< "GER" NULL terminated. */
	/* 6D83(4)   */ PACK char   string_6D83[4];             /*!< "ITA" NULL terminated. */
	/* 6D87(4)   */ PACK char   string_6D87[4];             /*!< "SPA" NULL terminated. */
	/* 6D8B(2)   */ PACK uint16  removed_6D8B;              /*!< REMOVED - Index of loaded sound driver. */
	/* 6D8D(2)   */ PACK uint16  removed_6D8D;              /*!< REMOVED - Index of loaded music driver. */
	/* 6D8F(2)   */ PACK uint16  removed_6D8F;              /*!< REMOVED - Index of loaded voice driver. */
	/* 6D91()    */ PACK uint8   unknown_6D91[0x0001];
	/* 6D92(16)  */ PACK uint8   removed_6D92[16];          /*!< REMOVED - Copy of palette data */
	/* 6DA2(16)  */ PACK uint8   removed_6DA2[16];          /*!< REMOVED - Copy of palette data */
	/* 6DB2(28)  */ PACK csip32 variable_6DB2[7];           /*!< Array of pointers to string_6DCE - string_6DFE. */
	/* 6DCE(8)   */ PACK char   string_6DCE[8];             /*!< "cga.ovl" NULL terminated. */
	/* 6DD6(8)   */ PACK char   string_6DD6[8];             /*!< "tga.ovl" NULL terminated. */
	/* 6DDE(8)   */ PACK char   string_6DDE[8];             /*!< "ega.ovl" NULL terminated. */
	/* 6DE6(8)   */ PACK char   string_6DE6[8];             /*!< "mga.ovl" NULL terminated. */
	/* 6DEE(8)   */ PACK char   string_6DEE[8];             /*!< "vga.ovl" NULL terminated. */
	/* 6DF6(8)   */ PACK char   string_6DF6[8];             /*!< "xga.ovl" NULL terminated. */
	/* 6DFE(8)   */ PACK char   string_6DFE[8];             /*!< "yga.ovl" NULL terminated. */
	/* 6E06(29)  */ PACK char   string_6E06[29];            /*!< "PageArraySize is negative!\r\n" NULL terminated. */
	/* 6E23()    */ PACK uint8   unknown_6E23[0x0003];
	/* 6E26(2)   */ PACK uint16  removed_6E26;              /*!< REMOVED - The videomode when the game starts. It switches back to this on terminate. */
	/* 6E28(18)  */ PACK uint16  removed_6E28[9];           /*!< REMOVED - The mapping from Dune2 video mode to DOS video mode. */
	/* 6E3A()    */ PACK uint8   unknown_6E3A[0x0004];
	/* 6E3E(4)   */ PACK csip32 xmsHandler;                 /*!< Pointer to XMS handler. */
	/* 6E42()    */ PACK uint8   unknown_6E42[0x0004];
	/* 6E46(40)  */ PACK char   string_6E46[40];            /*!< "Run setup and remove XMS and HMA usage." NULL terminated. */
	/* 6E6E(25)  */ PACK char   string_6E6E[25];            /*!< "HIMEM.SYS error %x -- %s" NULL terminated. */
	/* 6E87()    */ PACK uint8   unknown_6E87[0x0001];
	/* 6E88(145) */ PACK char    removed_6E88[144];         /*!< " etainosrlhcdupmtasio wb rnsdalmh ieorasnrtlc synstcloer dtgesionr ufmsw tep.icae "
	                                                         *   "oiadur laeiyodeia otruetoakhlr eiu,.oansrctlaileoiratpeaoip bm".
	                                                         *   Used to uncompress lang files (.ENG, ...). Also accessed via 0x6E98. */
	/* 6F18(4)   */ PACK csip32  removed_6F18;              /*!< REMOVED - Pointer to a buffer. */
	/* 6F1C(2)   */ PACK uint16  removed_6F1C;              /*!< REMOVED - Size of the above buffer. */
	/* 6F1E()    */ PACK uint8   unknown_6F1E[0x00EC];
	/* 700A(2)   */ PACK uint16 soundsEnabled;              /*!< 1 if sounds are enabled in game options, 0 otherwise. */
	/* 700C(2)   */ PACK uint16 musicEnabled;               /*!< 1 if music is enabled in game options, 0 otherwise. */
	/* 700E(2)   */ PACK uint16 inputFlags;                 /*!< Flags for input. See InputFlagsEnum. */
	/* 7010(1)   */ PACK uint8  mouseMode;                  /*!< Mouse mode. See InputMouseMode. */
	/* 7011(1)   */ PACK uint8  mouseFileID;                /*!< ?? */
	/* 7012(1)   */ PACK uint8  mouseFileIDHigh;            /*!< ?? */
	/* 7013(2)   */ PACK uint16 variable_7013;              /*!< ?? */
	/* 7015(2)   */ PACK uint16 variable_7015;              /*!< ?? */
	/* 7017(2)   */ PACK uint16 variable_7017;              /*!< ?? */
	/* 7019(2)   */ PACK uint16 variable_7019;              /*!< ?? */
	/* 701B(2)   */ PACK uint16 variable_701B;              /*!< ?? */
	/* 701D()    */ PACK uint8   unknown_701D[0x003D];
	/* 705A(2)   */ PACK uint16  removed_705A;              /*!< REMOVED - Amount of bytes allocated for mouse sprite buffer. */
	/* 705C(2)   */ PACK uint16  removed_705C;              /*!< REMOVED - Amount of bytes allocated for mouse sprite. */
	/* 705E(2)   */ PACK uint16  removed_705E;              /*!< REMOVED - Lock for when handling mouse movement. */
	/* 7060(2)   */ PACK uint16  removed_7060;              /*!< REMOVED - Current X position of the mouse. */
	/* 7062(2)   */ PACK uint16  removed_7062;              /*!< REMOVED - Current Y position of the mouse. */
	/* 7064(2)   */ PACK uint16  removed_7064;              /*!< REMOVED - X position of last mouse click. */
	/* 7066(2)   */ PACK uint16  removed_7066;              /*!< REMOVED - Y position of last mouse click. */
	/* 7068(2)   */ PACK uint16  removed_7068;              /*!< REMOVED - If non-zero, the X-position given by mouse is twice the real value. */
	/* 706A(2)   */ PACK uint16 mouseHiddenDepth;           /*!< If zero, mouse is drawn. Otherwise, it is not (also no movement is registered). */
	/* 706C(2)   */ PACK uint16  removed_706C;              /*!< REMOVED - Region mouse can be in - left position. */
	/* 706E(2)   */ PACK uint16  removed_706E;              /*!< REMOVED - Region mouse can be in - right position. */
	/* 7070(2)   */ PACK uint16  removed_7070;              /*!< REMOVED - Region mouse can be in - top position. */
	/* 7072(2)   */ PACK uint16  removed_7072;              /*!< REMOVED - Region mouse can be in - bottom position. */
	/* 7074(2)   */ PACK uint16 mouseHeight;                /*!< The height of the mouse cursor. */
	/* 7076(2)   */ PACK uint16 mouseWidth;                 /*!< The width of the mouse cursor. */
	/* 7078(2)   */ PACK uint16 mouseSpriteHotspotX;        /*!< The X position of the hotspot of the mouse cursor (where you really click). */
	/* 707A(2)   */ PACK uint16 mouseSpriteHotspotY;        /*!< The T position of the hotspot of the mouse cursor (where you really click). */
	/* 707C(2)   */ PACK uint16  removed_707C;              /*!< REMOVED - Previous X position. */
	/* 707E(2)   */ PACK uint16  removed_707E;              /*!< REMOVED - Previous Y position. */
	/* 7080(2)   */ PACK uint16  removed_7080;              /*!< REMOVED - Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check. 0x00FF - Countdown to showing. */
	/* 7082(2)   */ PACK uint16  removed_7082;              /*!< REMOVED - Region - minimum value for X position. */
	/* 7084(2)   */ PACK uint16  removed_7084;              /*!< REMOVED - Region - minimum value for Y position. */
	/* 7086(2)   */ PACK uint16  removed_7086;              /*!< REMOVED - Region - maximum value for X position. */
	/* 7088(2)   */ PACK uint16  removed_7088;              /*!< REMOVED - Region - maximum value for Y position. */
	/* 708A(4)   */ PACK csip32  removed_708A;              /*!< The temporary buffer with what was behind the mouse cursor. */
	/* 708E(4)   */ PACK csip32  removed_708E;              /*!< The sprite for the mouse cursor. */
	/* 7092(2)   */ PACK uint16 variable_7092;              /*!< Parameter 1 for proc at 66B4. */
	/* 7094(2)   */ PACK uint16 variable_7094;              /*!< Paramerer 2 for proc at 66B4. */
	/* 7096(1)   */ PACK uint8  mouseInstalled;             /*!< If non-zero, the mouse callback is installed. */
	/* 7097(1)   */ PACK uint8  variable_7097;              /*!< ?? If non-zero, no mouse handling. */
	/* 7098(1)   */ PACK uint8  variable_7098;              /*!< ?? If zero, no mouse handling. */
	/* 7099(1)   */ PACK uint8   removed_7099;              /*!< REMOVED - Previous mouse button state. */
	/* 709A(2)   */ PACK uint16 mouseSpriteLeft;            /*!< Left of the mouse sprite region (which is copied in the buffer). */
	/* 709C(2)   */ PACK uint16 mouseSpriteTop;             /*!< Top of the mouse sprite region (which is copied in the buffer). */
	/* 709E(2)   */ PACK uint16 mouseSpriteWidth;           /*!< Width of the mouse sprite region (which is copied in the buffer). */
	/* 70A0(2)   */ PACK uint16 mouseSpriteHeight;          /*!< Height of the mouse sprite region (which is copied in the buffer). */
	/* 70A2(768) */ PACK uint8   removed_70A2[768];         /*!< REMOVED - Current active palette. */
	/* 73A2()    */ PACK uint8   unknown_73A2[0x0300];
	/* 76A2(4)   */ PACK uint8   removed_76A2[4];           /*!< REMOVED - Seed for pseudo-random generator. */
	/* 76A6(2)   */ PACK uint16  removed_76A6;              /*!< REMOVED - Global tick counter, increases every tick. */
	/* 76A8(4)   */ PACK uint32  removed_76A8;              /*!< REMOVED - Global tick counter, increases every tick. */
	/* 76AC(4)   */ PACK uint32  removed_76AC;              /*!< REMOVED - Global tick counter, increases when Timer 1 is enabled. */
	/* 76B0(4)   */ PACK uint32  removed_76B0;              /*!< REMOVED - Global tick counter, increases when Timer 2 is enabled. */
	/* 76B4(4)   */ PACK uint32  removed_76B4;              /*!< REMOVEd - Global tick counter, decreases every tick when set. */
	/* 76B8(2)   */ PACK uint16  removed_76B8;              /*!< REMOVED - Which timers are active. 1 = GUI, 2 = Game. */
	/* 76BA(2)   */ PACK uint16  removed_76BA;              /*!< REMOVED - ?? (never used) */
	/* 76BC()    */ PACK uint8   unknown_76BC[0x0001];
	/* 76BD(256) */ PACK uint8   removed_76BD[256];         /*!< Flags: 0x01 - isspace, 0x02 - isdigit, 0x04 - isupper, 0x08 - islower, 0x10 - isxdigit && !isdigit, 0x20 - iscntrl, 0x40 - ispunct. (never used) */
	/* 77BD()    */ PACK uint8   unknown_77BD[0x0001];
	/* 77BE(4)   */ PACK csip32  removed_77BE;              /*!< REMOVED - ?? CS:IP of a function called in emu_Terminate(). (never used) */
	/* 77C2(4)   */ PACK csip32  removed_77C2;              /*!< REMOVED - ?? CS:IP of a function called in emu_Terminate(). (never used) */
	/* 77C6(4)   */ PACK csip32  removed_77C6;              /*!< REMOVED - ?? CS:IP of a function called in emu_Terminate(). (never used) */
	/* 77CA(400) */ PACK uint8   removed_77CA[20][20];      /*!< REMOVED - ?? File infos. (never used) */
	/* 795A(2)   */ PACK uint16  removed_795A;              /*!< REMOVED - Size of array of opened file status. (never used) */
	/* 795C(40)  */ PACK uint16  removed_795C[20];          /*!< REMOVED - Array of opened file status (0 when closed). (never used) */
	/* 7984(2)   */ PACK uint16  removed_7984;              /*!< REMOVED - ?? Something related to files. (never used) */
	/* 7986(2)   */ PACK uint16  removed_7986;              /*!< REMOVED - ?? Something related to files. (never used) */
	/* 7988(2)   */ PACK uint16  removed_7988;              /*!< REMOVED - ?? Something related to files. (never used) */
	/* 798A(1)   */ PACK uint8   removed_798A;              /*!< REMOVED - ?? Something related to files. (never used) */
	/* 798B()    */ PACK uint8   unknown_798B[0x0059];
	/* 79E4(4)   */ PACK uint32  removed_79E4;              /*!< REMOVED - ?? (never used) */
	/* 79E8()    */ PACK uint8   unknown_79E8[0x0080];
	/* 7A68(2)   */ PACK uint16  removed_7A68;              /*!< REMOVED - ?? Something related to required memory. (never used) */
	/* 7A6A(7)   */ PACK char   string_7A6A[7];             /*!< "(null)" NULL terminated. */
	/* 7A71()    */ PACK uint8   unknown_7A71[0x0061];
	/* 7AD2(50)  */ PACK char   string_7AD2[50];            /*!< "print scanf : floating point formats not linked\r\n" NULL terminated. */
	/* 7B04(2)   */ PACK uint16  removed_7B04;              /*!< REMOVED - ?? (never used) */
	/* 7B06(2)   */ PACK uint16  removed_7B06;              /*!< REMOVED - ?? (never used) */
	/* 7B08(4)   */ PACK csip32  removed_7B08;              /*!< REMOVED - ?? (never used) */
	/* 7B0C(4)   */ PACK csip32  removed_7B0C;              /*!< REMOVED - ?? (never used) */
	/* 7B10(2)   */ PACK uint16  removed_7B10;              /*!< REMOVED - ?? (never used) */
	/* 7B12(2)   */ PACK uint16  removed_7B12;              /*!< REMOVED - ?? (never used) */
	/* 7B14(2)   */ PACK uint16  removed_7B14;              /*!< REMOVED - ?? (never used) */
	/* 7B16(2)   */ PACK uint16  removed_7B16;              /*!< REMOVED - ?? (never used) */
	/* 7B18(2)   */ PACK uint16  removed_7B18;              /*!< REMOVED - ?? (never used) */
	/* 7B1A()    */ PACK uint8   unknown_7B1A[0x0002];
	/* 7B1C(2)   */ PACK uint16  removed_7B1C;              /*!< REMOVED - ?? variable_77CA[0] init state. (never used) */
	/* 7B1E(2)   */ PACK uint16  removed_7B1E;              /*!< REMOVED - ?? variable_77CA[1] init state. (never used) */
	/* 7B20()    */ PACK uint8   unknown_7B20[0x0048];
	/* 7B68(36)  */ PACK struct_7B68 removed_7B68[6];       /*!< REMOVED - ?? (apparently never ever used) */
	/* 7B8C(640) */ PACK uint16  removed_7B8C[320];         /*!< REMOVED - screen columns swapping indices in fade-in */
	/* 7E0C(400) */ PACK uint16  removed_7E0C[200];         /*!< REMOVED - screen line swapping indices used in fade-in */
	/* 7F9C(4)   */ PACK uint32  removed_7F9C;              /*!< REMOVED - ?? Also a tick counter.. */
	/* 7FA0(1)   */ PACK uint8   removed_7FA0;              /*!< REMOVED - palette colour of glowing rectangle in factory window */
	/* 7FA1(1)   */ PACK uint8   removed_7FA1;              /*!< REMOVED - step size of change in the palette colour above */
	/* 7FA2(4)   */ PACK csip32  removed_7FA2;              /*!< REMOVED - Last widget in the Invoice window. */
	/* 7FA6(4)   */ PACK uint32  removed_7FA6;              /*!< REMOVED - Size of buffer for WSA loading in factory window. */
	/* 7FAA(4)   */ PACK csip32  removed_7FAA;              /*!< REMOVED - Graymap table for factory window. */
	/* 7FAE(4)   */ PACK csip32  removed_7FAE;              /*!< REMOVED - Buffer for WSA loading in factory window. */
	/* 7FB2(4)   */ PACK csip32  removed_7FB2;              /*!< REMOVED - Factory window widgets. */
	/* 7FB6(2)   */ PACK uint16  removed_7FB6;              /*!< REMOVED - Number of items in the invoice. */
	/* 7FB8(2)   */ PACK uint16  removed_7FB8;              /*!< REMOVED - Item index for the first miniature. */
	/* 7FBA(2)   */ PACK uint16  removed_7FBA;              /*!< REMOVED - Number of items. */
	/* 7FBC(2)   */ PACK uint16  removed_7FBC;              /*!< REMOVED - Selected miniature. */
	/* 7FBE(2)   */ PACK uint16  removed_7FBE;              /*!< REMOVED - Cost for structure upgrade. */
	/* 7FC0(2)   */ PACK uint16  removed_7FC0;              /*!< REMOVED - 0 = resume game, 1 = buy, 2 = upgrade, 0xFFFF = none */
	/* 7FC2(2)   */ PACK uint16  removed_7FC2;              /*!< REMOVED - True if the current factory display order is for a starport. */
	/* 7FC4(2)   */ PACK uint16  removed_7FC4;              /*!< REMOVED - ?? */
	/* 7FC6(60)  */ PACK csip32  removed_7FC6[3][5];        /*!< REMOVED - Pointers to sprites. */
	/* 8002(4)   */ PACK csip32  removed_8002;              /*!< REMOVED - Sprite */
	/* 8006(1)   */ PACK uint8   removed_8006;              /*!< REMOVED - Left A ?? */
	/* 8007(1)   */ PACK uint8   removed_8007;              /*!< REMOVED - Top A ?? */
	/* 8008(1)   */ PACK uint8   removed_8008;              /*!< REMOVED - Right A ?? */
	/* 8009(1)   */ PACK uint8   removed_8009;              /*!< REMOVED - Bottom A ?? */
	/* 800A(1)   */ PACK uint8   removed_800A;              /*!< REMOVED - Left B ?? */
	/* 800B(1)   */ PACK uint8   removed_800B;              /*!< REMOVED - Top B ?? */
	/* 800C(1)   */ PACK uint8   removed_800C;              /*!< REMOVED - Right B ?? */
	/* 800D(1)   */ PACK uint8   removed_800D;              /*!< REMOVED - Bottom B ?? */
	/* 800E(1)   */ PACK uint8   removed_800E;              /*!< REMOVED - ?? */
	/* 800F(1)   */ PACK uint8   removed_800F;              /*!< REMOVED - ?? */
	/* 8010(1)   */ PACK uint8   removed_8010;              /*!< REMOVED X pos of #variable_8002 */
	/* 8011(1)   */ PACK uint8   removed_8011;              /*!< REMOVED Y pos of #variable_8002 */
	/* 8012(4)   */ PACK int32   removed_8012;              /*!< REMOVED - movingEyesTimer */
	/* 8016(4)   */ PACK int32   removed_8016;              /*!< REMOVED - movingMouthTimer */
	/* 801A(4)   */ PACK int32   removed_801A;              /*!< REMOVED - movingOtherTimer */
	/* 801E(2)   */ PACK uint16  removed_801E;              /*!< REMOVED - movingEyesSprite */
	/* 8020(2)   */ PACK uint16  removed_8020;              /*!< REMOVED - movingEyesNextSprite */
	/* 8022(2)   */ PACK uint16  removed_8022;              /*!< REMOVED - movingMouthSprite */
	/* 8024(2)   */ PACK int16   removed_8024;              /*!< REMOVED - otherSprite */
	/* 8026(4)   */ PACK csip32  removed_8026;              /*!< REMOVED - Widget pointing to HelpList. */
	/* 802A(4)   */ PACK csip32  removed_802A;              /*!< REMOVED - Widget pointing to Mentat. */
	/* 802E(4)   */ PACK csip32  removed_802E;              /*!< REMOVED - Widget pointing to a Widget in Mentat. */
	/* 8032(4)   */ PACK csip32  removed_8032;              /*!< REMOVED - Widget pointing to a Widget in Mentat. */
	/* 8036(4)   */ PACK csip32  removed_8036;              /*!< REMOVED - Widget pointing to a Widget in Mentat. */
	/* 803A(2)   */ PACK uint16 numberHelpSubjects;         /*!< Number of help subjects. */
	/* 803C(2)   */ PACK uint16 selectedHelpSubject;        /*!< Index of selected subject. */
	/* 803E(2)   */ PACK uint16 topHelpList;                /*!< Top of the mentat help subjects list being displayed currently. */
	/* 8040(13)  */ PACK char   mentatFilename[13];         /*!< buffer for "MENTAT[AHO].[ENG|FRE|GER]". */
	/* 804D(4)   */ PACK csip32  removed_804D;              /*!< REMOVED - String pointer. */
	/* 8051()    */ PACK uint8   unknown_8051;
	/* 8052(2)   */ PACK uint16 variable_8052;              /*!< ?? */
	/* 8054(2)   */ PACK uint16  removed_8054;              /*!< REMOVED ?? (write-only variable) */
	/* 8056(4)   */ PACK csip32  removed_8056;              /*!< REMOVED ?? */
	/* 805A(4)   */ PACK csip32  removed_805A;              /*!< REMOVED ?? */
	/* 805E(4)   */ PACK csip32  removed_805E;              /*!< REMOVED ?? */
	/* 8062(2)   */ PACK uint16  removed_8062;              /*!< REMOVED ?? */
	/* 8064(4)   */ PACK csip32  removed_8064;              /*!< REMOVED - Pointer to content of intro.fnt. */
	/* 8068(2)   */ PACK uint16 variable_8068;              /*!< ?? */
	/* 806A(2)   */ PACK uint16 variable_806A;              /*!< ?? */
	/* 806C(4)   */ PACK uint32  removed_806C;              /*!< REMOVED - animation timer of palette part changing */
	/* 8070(2)   */ PACK uint16 animationSoundEffect;       /*!< ?? */
	/* 8072(2)   */ PACK uint16 variable_8072;              /*!< ?? */
	/* 8074(2)   */ PACK uint16 variable_8074;              /*!< ?? */
	/* 8076(18)  */ PACK uint8   removed_8076[18];          /*!< REMOVED - palette part change amount */
	/* 8088(18)  */ PACK uint8   removed_8088[18];          /*!< REMOVED - current palette part */
	/* 809A(18)  */ PACK uint8   removed_809A[18];          /*!< REMOVED - target palette part */
	/* 80AC(2)   */ PACK uint16  removed_80AC;              /*!< REMOVED - number of steps to do in changing palette part */
	/* 80AE(2)   */ PACK uint16  removed_80AE;              /*!< REMOVED - palette part direction */
	/* 80B0(2)   */ PACK uint16  removed_80B0;              /*!< REMOVED ?? (write-only variable) */
	/* 80B2(2)   */ PACK uint16 savegameCountOnDisk;        /*!< Amount of savegames on disk. */
	/* 80B4(255) */ PACK char   savegameDesc[5][51];        /*!< Array of savegame descriptions for the SaveLoad window. */
	/* 81B3()    */ PACK uint8   unknown_81B3[0x0001];
	/* 81B4(2)   */ PACK uint16 strategicMapFastForward;    /*!< ?? */
	/* 81B6(4)   */ PACK uint32  removed_81B6;              /*!< REMOVED - Arrow animation timeout */
	/* 81BA(24)  */ PACK uint8  variable_81BA[24];          /*!< Palette for animated arrows in the scenario selection. */
	/* 81D2(4)   */ PACK csip32  removed_81D2;              /*!< REMOVED - Array of regions. [0] is number of regions, [X] is owner of region X, 0xFFFF if no owner. */
	/* 81D6(4)   */ PACK csip32  removed_81D6;              /*!< REMOVED - Pointer to content of RGNCLK.CPS file. */
	/* 81DA(4)   */ PACK csip32  removed_81DA;              /*!< REMOVED - Pointer to content of REGION[AHO].INI file. */
	/* 81DE(4)   */ PACK csip32  removed_81DE;              /*!< REMOVED - Pointer to content of ARROWS.SHP file. */
	/* 81E2(4)   */ PACK csip32  removed_81E2;              /*!< REMOVED - Pointer to content of PIECES.SHP file. */
	/* 81E6(2)   */ PACK uint16 variable_81E6;              /*!< ?? */
	/* 81E8(3)   */ PACK uint8  variable_81E8[3];           /*!< ?? */
	/* 81EB(2)   */ PACK uint16 variable_81EB;              /*!< ?? */
	/* 81ED(4)   */ PACK csip32  removed_81ED;              /*!< REMOVED - ?? */
	/* 81F1(40)  */ PACK uint16 variable_81F1[5][4];        /*!< ?? */
	/* 8219()    */ PACK uint8   unknown_8219[0x0001];
	/* 821A(1)   */ PACK uint8   removed_821A;              /*!< REMOVED ?? (never used) */
	/* 821B(1)   */ PACK uint8   removed_821B;              /*!< REMOVED ?? (never used) */
	/* 821C(1)   */ PACK uint8   removed_821C;              /*!< REMOVED ?? (never used) */
	/* 821D(4)   */ PACK csip32  removed_821D;              /*!< REMOVED ?? Pointer to an element in an array of uint8. (never used) */
	/* 8221(4)   */ PACK csip32  removed_8221;              /*!< REMOVED ?? Pointer to an element in an array of uint8. (never used) */
	/* 8225(2)   */ PACK uint16  removed_8225;              /*!< REMOVED (never read) */
	/* 8227(2)   */ PACK uint16  removed_8227;              /*!< REMOVED ?? (never used) */
	/* 8229(2)   */ PACK uint16  removed_8229;              /*!< REMOVED ?? (never used) */
	/* 822B(1)   */ PACK uint8   removed_822B;              /*!< REMOVED ?? (never used) */
	/* 822C()    */ PACK uint8   unknown_822C[0x0056];
	/* 8282(14)  */ PACK char    removed_8282[14];          /*!< REMOVED - String buffer for emu_String_GenerateFilename(). */
	/* 8290(400) */ PACK uint16  removed_8290[200];         /*!< REMOVED - positions of changes in the map. */
	/* 8420(16)  */ PACK uint8  variable_8420[16];          /*!< ?? */
	/* 8430(4)   */ PACK csip32  removed_8430;              /*!< REMOVED - Current StructureInfo we are handling in the GameLoop. */
	/* 8434(4)   */ PACK csip32  removed_8434;              /*!< REMOVED - Current Structure we are handling in the GameLoop. */
	/* 8438(6)   */ PACK uint8   removed_8438[6];           /*!< REMOVED - Default find struct used if noone given to emu_Unit_FindFirst/FindNext. */
	/* 843E(408) */ PACK csip32  removed_843E[102];         /*!< REMOVED - Array with CS:IP of Unit, always gap-less. */
	/* 85D6(6)   */ PACK uint8   removed_85D6[6];           /*!< REMOVED - Default find struct used if noone given to emu_Team_FindFirst/FindNext. */
	/* 85DC(64)  */ PACK csip32  removed_85DC[16];          /*!< REMOVED - Array with CS:IP of Team, always gap-less. */
	/* 861C(6)   */ PACK uint8   removed_861C[6];           /*!< REMOVED - Default find struct used if none given to emu_Structure_FindFirst/FindNext. */
	/* 8622(328) */ PACK csip32  removed_8622[82];          /*!< REMOVED - Array with CS:IP of Structure, always gap-less. */
	/* 876A()    */ PACK uint8   unknown_876A[0x0050];
	/* 87BA(6)   */ PACK uint8   removed_87BA[6];           /*!< REMOVED - Default find struct used if none given to emu_House_FindFirst/FindNext. */
	/* 87C0(24)  */ PACK csip32  removed_87C0[6];           /*!< REMOVED - Array with CS:IP of House, always gap-less. */
	/* 87D8(768) */ PACK char    removed_87D8[768];         /*!< REMOVED - Multi-line modal message text buffer. */
	/* 8AD8(2)   */ PACK uint16  removed_8AD8;              /*!< REMOVED - foreground colour 1st line of text */
	/* 8ADA(2)   */ PACK uint16  removed_8ADA;              /*!< REMOVED - foreground colour 2nd line of text */
	/* 8ADC(2)   */ PACK uint16  removed_8ADC;              /*!< REMOVED - foreground colour 3rd line of text */
	/* 8ADE(16)  */ PACK uint8   removed_8ADE[16];          /*!< REMOVED - ?? Buffer for colours*/
	/* 8AEE(240) */ PACK char    removed_8AEE[240];         /*!< REMOVED - ?? Buffer. */
	/* 8BDE(10)  */ PACK struct_8BDE variable_8BDE;         /*!< ?? */
	/* 8BE8(2)   */ PACK uint16 factoryWindowConstructionYard; /*!< True if the current factory display order is for a construction yard. */
	/* 8BEA(275) */ PACK uint8  removed_8BEA[25][11];       /*!< REMOVED - Items for the factory window. */
	/* 8CFD(2)   */ PACK uint16  removed_8CFD;              /*!< REMOVED - Savegame version. */
	/* 8CFF(228) */ PACK uint8   removed_8CFF[228];         /*!< REMOVED - Scenario data */
	/* 8DE3(2)   */ PACK uint16 variable_8DE3;              /*!< ?? */
	/* 8DE5(512) */ PACK uint8   removed_8DE5[512];         /*!< REMOVED - dirty minimap tiles. */
	/* 8FE5(512) */ PACK uint8   removed_8FE5[512];         /*!< REMOVED - dirty viewport tiles. */
	/* 91E5(512) */ PACK uint8   removed_91E5[512];         /*!< REMOVED - ?? array size is unsure. */
	/* 93E5(512) */ PACK uint8   removed_93E5[512];         /*!< REMOVED - displayed part of the minimap. */
	/* 95E5(512) */ PACK uint8   removed_95E5[512];         /*!< REMOVED - displayed part of the viewport. */
	/* 97E5(2)   */ PACK uint16  removed_97E5;              /*!< REMOVED - StringID displayed on the production button. */
	/* 97E7(54)  */ PACK int16   removed_97E7[27];          /*!< REMOVED - Array of UNIT_MAX size, which contains which units are available via the starport. 0 means not available, -1 means sold-out. */
	/* 981D()    */ PACK uint8   unknown_981D[0x0029];
	/* 9846(4)   */ PACK csip32  removed_9846;              /*!< REMOVED - Stored interrupt vector for overlay handler. */
	/* 984A(14)  */ PACK char    removed_984A[14];          /*!< REMOVED - Buffer to store a filename */
	/* 9858(14)  */ PACK char    removed_9858[14];          /*!< REMOVED - Buffer to store a filename (NEVER USED) */
	/* 9866(2)   */ PACK uint16  removed_9866;              /*!< REMOVED ?? (never used) */
	/* 9868(2)   */ PACK uint16  removed_9868;              /*!< REMOVED ?? (never used) */
	/* 986A()    */ PACK uint8   unknown_986A[0x0002];
	/* 986C(1)   */ PACK uint8  ignoreInput;                /*!< Ignore mouse and keyboard if non zero. */
	/* 986D(1)   */ PACK uint8   removed_986D;              /*!< REMOVED ?? (never used) */
	/* 986E(1)   */ PACK uint8   removed_986E;              /*!< REMOVED ?? (never used) */
	/* 986F()    */ PACK uint8   unknown_986F[0x0013];
	/* 9882()    */ PACK uint8   removed_9882[0x005F];      /*!< REMOVED - Current directory. */
	/* 98E1(10)  */ PACK DuneCfg removed_98E1;              /*!< REMOVED - Config data (dune.cfg). */
	/* 98EB()    */ PACK uint8   unknown_98EB[0x0002];
	/* 98ED(2)   */ PACK uint16  removed_98ED;              /*!< REMOVED ?? (never used) */
	/* 98EF()    */ PACK uint8   unknown_98EF[0x0002];
	/* 98F1(2)   */ PACK uint16  removed_98F1;              /*!< REMOVED - If screen memory has to go in highermemory (0x40 or 0x0). Always 0x0. */
	/* 98F3()    */ PACK uint8   unknown_98F3[0x0038];
	/* 992B(2)   */ PACK uint16  removed_992B;              /*!< REMOVED - ?? */
	/* 992D(2)   */ PACK uint16  removed_992D;              /*!< REMOVED - ?? Y position of top of edit box.*/
	/* 992F(2)   */ PACK uint16  removed_992F;              /*!< REMOVED - ?? */
	/* 9931(2)   */ PACK uint16  removed_9931;              /*!< REMOVED - ?? Height of edit box. */
	/* 9933(2)   */ PACK uint16  removed_9933;              /*!< REMOVED - A counter (write-only). */
	/* 9935(2)   */ PACK uint16  removed_9935;              /*!< REMOVED - ?? (write-only) */
	/* 9937(2)   */ PACK uint16  removed_9937;              /*!< REMOVED - True if video is vsync'd. */
	/* 9939(81)  */ PACK uint8   removed_9939[81];          /*!< REMOVED - General text buffer. */
	/* 998A(4)   */ PACK csip32  removed_998A;              /*!< REMOVED - A palette. */
	/* 998E(97)  */ PACK uint8   removed_998E[97];          /*!< REMOVED - Current directory. */
	/* 99EF(4)   */ PACK csip32  removed_99Ef;              /*!< REMOVED - Pointer to content of new8p.fnt. */
	/* 99F3(4)   */ PACK csip32  removed_99F3;              /*!< REMOVED - ?? Points to data about the loaded font. (NEVER USED) */
} GCC_PACKED GlobalData;
MSVC_PACKED_END
assert_compile(sizeof(GlobalData) == 0x99F7);

extern csip32 emu_Global_GetCSIP(void *ptr);
extern uint8 *emu_get_memorycsip(csip32 csip);

extern GlobalData *g_global;

#endif /* GLOBAL_H */
