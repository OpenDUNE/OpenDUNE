/* $Id$ */

#ifndef GLOBAL_H
#define GLOBAL_H

#include "script/script.h"
#include "config.h"
#include "driver.h"
#include "sound.h"

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
	/* 0004()    */ PACK uint8   unknown_0004[0x0004];      /*!< ?? */
} GCC_PACKED struct_19A8;
MSVC_PACKED_END
assert_compile(sizeof(struct_19A8) == 0x8);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about the map. This is the layout of
 *  that data.
 */
typedef struct MapInfo {
	/* 0000(2)   */ PACK uint16 minX;                       /*!< Minimal X position of the map. */
	/* 0002(2)   */ PACK uint16 minY;                       /*!< Minimal Y position of the map. */
	/* 0004(2)   */ PACK uint16 sizeX;                      /*!< Width of the map. */
	/* 0006(2)   */ PACK uint16 sizeY;                      /*!< Height of the map. */
} GCC_PACKED MapInfo;
MSVC_PACKED_END
assert_compile(sizeof(MapInfo) == 0x08);

MSVC_PACKED_BEGIN
/**
 * Inside the Scenario is information about reinforcement in the scenarion.
 *  This is the layout of that data.
 */
typedef struct Reinformcent {
	/* 0000(2)   */ PACK uint16 unitID;                     /*!< The Unit which is already created and ready to join the game. */
	/* 0002(2)   */ PACK uint16 locationID;                 /*!< The location where the Unit will appear. */
	/* 0004(2)   */ PACK uint16 timeLeft;                   /*!< In how many ticks the Unit will appear. */
	/* 0006(2)   */ PACK uint16 timeBetween;                /*!< In how many ticks the Unit will appear again if repeat is set. */
	/* 0008(2)   */ PACK uint16 repeat;                     /*!< If non-zero, the Unit will appear every timeBetween ticks. */
} GCC_PACKED Reinformcent;
MSVC_PACKED_END
assert_compile(sizeof(Reinformcent) == 0x0A);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about the current loaded scenario.
 *  This is the layout of that data.
 */
typedef struct Scenario {
	/* 0000(2)   */ PACK uint16 savegameVersion;            /*!< Version of the savegame, stored in the Scenario data. */
	/* 0002(2)   */ PACK uint16 score;                      /*!< Base score. */
	/* 0004(2)   */ PACK uint16 winFlags;                   /*!< BASIC/WinFlags. */
	/* 0006(2)   */ PACK uint16 loseFlags;                  /*!< BASIC/LoseFlags. */
	/* 0008(4)   */ PACK uint32 mapSeed;                    /*!< MAP/Seed. */
	/* 000C(2)   */ PACK uint16 mapScale;                   /*!< BASIC/MapScale. 0 is 62x62, 1 is 32x32, 2 is 21x21. */
	/* 000E(2)   */ PACK uint16 timeOut;                    /*!< BASIC/TimeOut. */
	/* 0010(14)  */ PACK char   pictureBriefing[14];        /*!< BASIC/BriefPicture. */
	/* 001E(14)  */ PACK char   pictureWin[14];             /*!< BASIC/WinPicture. */
	/* 002C(14)  */ PACK char   pictureLose[14];            /*!< BASIC/LosePicture. */
	/* 003A(2)   */ PACK uint16 killedAllied;               /*!< Number of units lost by "You". */
	/* 003C(2)   */ PACK uint16 killedEnemy;                /*!< Number of units lost by "Enemy". */
	/* 003E(2)   */ PACK uint16 destroyedAllied;            /*!< Number of structures lost by "You". */
	/* 0040(2)   */ PACK uint16 destroyedEnemy;             /*!< Number of structures lost by "Enemy". */
	/* 0042(2)   */ PACK uint16 harvestedAllied;            /*!< Total amount of spice harvested by "You". */
	/* 0044(2)   */ PACK uint16 harvestedEnemy;             /*!< Total amount of spice harvested by "Enemy". */
	/* 0046()    */ PACK Reinformcent reinforcement[16];    /*!< Reinforcement information. */
} GCC_PACKED Scenario;
MSVC_PACKED_END
assert_compile(sizeof(Scenario) == 0xE6);

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
	/* 0218(10)  */ PACK uint16 variable_0218[5];           /*!< ?? */
	/* 0222(10)  */ PACK uint16 variable_0222[5];           /*!< ?? */
	/* 022C()    */ PACK uint8   unknown_022C[0x00E6];
	/* 0312(1316)*/ PACK uint16 variable_0312[94][7];       /*!< ?? */
	/* 0836(1316)*/ PACK uint16 variable_0836[94][7];       /*!< ?? */
	/* 0D5A(786) */ PACK SoundData voices[131];             /*!< Array of pointers to voice files names (and something else). */
	/* 106C(228) */ PACK SoundData musics[38];              /*!< Array of pointers to music files names (and something else). */
	/* 1150()    */ PACK uint8   unknown_1150[0x0002];
	/* 1152(14)  */ PACK char   string_1152[14];            /*!< "+VSCREAM1.VOC" NULL terminated. */
	/* 1160(12)  */ PACK char   string_1160[12];            /*!< "+EXSAND.VOC" NULL terminated. */
	/* 116C(12)  */ PACK char   string_116C[12];            /*!< "+ROCKET.VOC" NULL terminated. */
	/* 1178(12)  */ PACK char   string_1178[12];            /*!< "+BUTTON.VOC" NULL terminated. */
	/* 1184(14)  */ PACK char   string_1184[14];            /*!< "+VSCREAM5.VOC" NULL terminated. */
	/* 1192(13)  */ PACK char   string_1192[13];            /*!< "+CRUMBLE.VOC" NULL terminated. */
	/* 119F(13)  */ PACK char   string_119F[13];            /*!< "+EXSMALL.VOC" NULL terminated. */
	/* 11AC(11)  */ PACK char   string_11AC[11];            /*!< "+EXMED.VOC" NULL terminated. */
	/* 11B7(13)  */ PACK char   string_11B7[13];            /*!< "+EXLARGE.VOC" NULL terminated. */
	/* 11C4(14)  */ PACK char   string_11C4[14];            /*!< "+EXCANNON.VOC" NULL terminated. */
	/* 11D2(14)  */ PACK char   string_11D2[14];            /*!< "+GUNMULTI.VOC" NULL terminated. */
	/* 11E0(9)   */ PACK char   string_11E0[9];             /*!< "+GUN.VOC" NULL terminated. */
	/* 11E9(11)  */ PACK char   string_11E9[11];            /*!< "+EXGAS.VOC" NULL terminated. */
	/* 11F4(11)  */ PACK char   string_11F4[11];            /*!< "+EXDUD.VOC" NULL terminated. */
	/* 11FF(14)  */ PACK char   string_11FF[14];            /*!< "+VSCREAM2.VOC" NULL terminated. */
	/* 120D(14)  */ PACK char   string_120D[14];            /*!< "+VSCREAM3.VOC" NULL terminated. */
	/* 121B(14)  */ PACK char   string_121B[14];            /*!< "+VSCREAM4.VOC" NULL terminated. */
	/* 1229(14)  */ PACK char   string_1229[14];            /*!< "+%cAFFIRM.VOC" NULL terminated. */
	/* 1237(15)  */ PACK char   string_1237[15];            /*!< "+%cREPORT1.VOC" NULL terminated. */
	/* 1246(15)  */ PACK char   string_1246[15];            /*!< "+%cREPORT2.VOC" NULL terminated. */
	/* 1255(15)  */ PACK char   string_1255[15];            /*!< "+%cREPORT3.VOC" NULL terminated. */
	/* 1264(15)  */ PACK char   string_1264[15];            /*!< "+%cOVEROUT.VOC" NULL terminated. */
	/* 1273(15)  */ PACK char   string_1273[15];            /*!< "+%cMOVEOUT.VOC" NULL terminated. */
	/* 1282(11)  */ PACK char   string_1282[11];            /*!< "?POPPA.VOC" NULL terminated. */
	/* 128D(13)  */ PACK char   string_128D[13];            /*!< "?SANDBUG.VOC" NULL terminated. */
	/* 129A(13)  */ PACK char   string_129A[13];            /*!< "+STATICP.VOC" NULL terminated. */
	/* 12A7(14)  */ PACK char   string_12A7[14];            /*!< "+WORMET3P.VOC" NULL terminated. */
	/* 12B5(14)  */ PACK char   string_12B5[14];            /*!< "+MISLTINP.VOC" NULL terminated. */
	/* 12C3(13)  */ PACK char   string_12C3[13];            /*!< "+SQUISH2.VOC" NULL terminated. */
	/* 12D0(12)  */ PACK char   string_12D0[12];            /*!< "%cENEMY.VOC" NULL terminated. */
	/* 12DC(11)  */ PACK char   string_12DC[11];            /*!< "%cHARK.VOC" NULL terminated. */
	/* 12E7(11)  */ PACK char   string_12E7[11];            /*!< "%cATRE.VOC" NULL terminated. */
	/* 12F2(12)  */ PACK char   string_12F2[12];            /*!< "%cORDOS.VOC" NULL terminated. */
	/* 12FE(13)  */ PACK char   string_12FE[13];            /*!< "%cFREMEN.VOC" NULL terminated. */
	/* 130B(11)  */ PACK char   string_130B[11];            /*!< "%cSARD.VOC" NULL terminated. */
	/* 1316(11)  */ PACK char   string_1316[11];            /*!< "FILLER.VOC" NULL terminated. */
	/* 1321(11)  */ PACK char   string_1321[11];            /*!< "%cUNIT.VOC" NULL terminated. */
	/* 132C(13)  */ PACK char   string_132C[13];            /*!< "%cSTRUCT.VOC" NULL terminated. */
	/* 1339(10)  */ PACK char   string_1339[10];            /*!< "%cONE.VOC" NULL terminated. */
	/* 1343(10)  */ PACK char   string_1343[10];            /*!< "%cTWO.VOC" NULL terminated. */
	/* 134D(12)  */ PACK char   string_134D[12];            /*!< "%cTHREE.VOC" NULL terminated. */
	/* 1359(11)  */ PACK char   string_1359[11];            /*!< "%cFOUR.VOC" NULL terminated. */
	/* 1364(11)  */ PACK char   string_1364[11];            /*!< "%cFIVE.VOC" NULL terminated. */
	/* 136F(12)  */ PACK char   string_136F[12];            /*!< "%cCONST.VOC" NULL terminated. */
	/* 137B(12)  */ PACK char   string_137B[12];            /*!< "%cRADAR.VOC" NULL terminated. */
	/* 1387(10)  */ PACK char   string_1387[10];            /*!< "%cOFF.VOC" NULL terminated. */
	/* 1391(9)   */ PACK char   string_1391[9];             /*!< "%cON.VOC" NULL terminated. */
	/* 139A(14)  */ PACK char   string_139A[14];            /*!< "%cFRIGATE.VOC" NULL terminated. */
	/* 13A8(14)  */ PACK char   string_13A8[14];            /*!< "?%cARRIVE.VOC" NULL terminated. */
	/* 13B6(14)  */ PACK char   string_13B6[14];            /*!< "%cWARNING.VOC" NULL terminated. */
	/* 13C4(12)  */ PACK char   string_13C4[12];            /*!< "%cSABOT.VOC" NULL terminated. */
	/* 13D0(14)  */ PACK char   string_13D0[14];            /*!< "%cMISSILE.VOC" NULL terminated. */
	/* 13DE(12)  */ PACK char   string_13DE[12];            /*!< "%cBLOOM.VOC" NULL terminated. */
	/* 13EA(14)  */ PACK char   string_13EA[14];            /*!< "%cDESTROY.VOC" NULL terminated. */
	/* 13F8(13)  */ PACK char   string_13F8[13];            /*!< "%cDEPLOY.VOC" NULL terminated. */
	/* 1405(13)  */ PACK char   string_1405[13];            /*!< "%cAPPRCH.VOC" NULL terminated. */
	/* 1412(14)  */ PACK char   string_1412[14];            /*!< "%cLOCATED.VOC" NULL terminated. */
	/* 1420(12)  */ PACK char   string_1420[12];            /*!< "%cNORTH.VOC" NULL terminated. */
	/* 142C(11)  */ PACK char   string_142C[11];            /*!< "%cEAST.VOC" NULL terminated. */
	/* 1437(12)  */ PACK char   string_1437[12];            /*!< "%cSOUTH.VOC" NULL terminated. */
	/* 1443(11)  */ PACK char   string_1443[11];            /*!< "%cWEST.VOC" NULL terminated. */
	/* 144E(11)  */ PACK char   string_144E[11];            /*!< "?%cWIN.VOC" NULL terminated. */
	/* 1459(12)  */ PACK char   string_1459[12];            /*!< "?%cLOSE.VOC" NULL terminated. */
	/* 1465(13)  */ PACK char   string_1465[13];            /*!< "%cLAUNCH.VOC" NULL terminated. */
	/* 1472(13)  */ PACK char   string_1472[13];            /*!< "%cATTACK.VOC" NULL terminated. */
	/* 147F(14)  */ PACK char   string_147F[14];            /*!< "%cVEHICLE.VOC" NULL terminated. */
	/* 148D(13)  */ PACK char   string_148D[13];            /*!< "%cREPAIR.VOC" NULL terminated. */
	/* 149A(14)  */ PACK char   string_149A[14];            /*!< "%cHARVEST.VOC" NULL terminated. */
	/* 14A8(12)  */ PACK char   string_14A8[12];            /*!< "%cWORMY.VOC" NULL terminated. */
	/* 14B4(14)  */ PACK char   string_14B4[14];            /*!< "%cCAPTURE.VOC" NULL terminated. */
	/* 14C3(11)  */ PACK char   string_14C3[11];            /*!< "%cNEXT.VOC" NULL terminated. */
	/* 14CE(12)  */ PACK char   string_14CE[12];            /*!< "%cNEXT2.VOC" NULL terminated. */
	/* 14DA(13)  */ PACK char   string_14DA[13];            /*!< "/BLASTER.VOC" NULL terminated. */
	/* 14E6(12)  */ PACK char   string_14E6[12];            /*!< "/GLASS6.VOC" NULL terminated. */
	/* 14F2(13)  */ PACK char   string_14F2[13];            /*!< "/LIZARD1.VOC" NULL terminated. */
	/* 14FF(11)  */ PACK char   string_14FF[11];            /*!< "/FLESH.VOC" NULL terminated. */
	/* 150A(11)  */ PACK char   string_150A[11];            /*!< "/CLICK.VOC" NULL terminated. */
	/* 1515(13)  */ PACK char   string_1515[13];            /*!< "-3HOUSES.VOC" NULL terminated. */
	/* 1522(12)  */ PACK char   string_1522[12];            /*!< "-ANDNOW.VOC" NULL terminated. */
	/* 152E(13)  */ PACK char   string_152E[13];            /*!< "-ARRIVED.VOC" NULL terminated. */
	/* 153B(12)  */ PACK char   string_153B[12];            /*!< "-BATTLE.VOC" NULL terminated. */
	/* 1547(12)  */ PACK char   string_1547[12];            /*!< "-BEGINS.VOC" NULL terminated. */
	/* 1553(12)  */ PACK char   string_1553[12];            /*!< "-BLDING.VOC" NULL terminated. */
	/* 155F(14)  */ PACK char   string_155F[14];            /*!< "-CONTROL2.VOC" NULL terminated. */
	/* 156D(14)  */ PACK char   string_156D[14];            /*!< "-CONTROL3.VOC" NULL terminated. */
	/* 157B(14)  */ PACK char   string_157B[14];            /*!< "-CONTROL4.VOC" NULL terminated. */
	/* 1589(14)  */ PACK char   string_1589[14];            /*!< "-CONTROLS.VOC" NULL terminated. */
	/* 1597(10)  */ PACK char   string_1597[10];            /*!< "-DUNE.VOC" NULL terminated. */
	/* 15A1(13)  */ PACK char   string_15A1[13];            /*!< "-DYNASTY.VOC" NULL terminated. */
	/* 15AE(14)  */ PACK char   string_15AE[14];            /*!< "-EACHHOME.VOC" NULL terminated. */
	/* 15BC(12)  */ PACK char   string_15BC[12];            /*!< "-EANDNO.VOC" NULL terminated. */
	/* 15C8(14)  */ PACK char   string_15C8[14];            /*!< "-ECONTROL.VOC" NULL terminated. */
	/* 15D6(12)  */ PACK char   string_15D6[12];            /*!< "-EHOUSE.VOC" NULL terminated. */
	/* 15E2(12)  */ PACK char   string_15E2[12];            /*!< "-EMPIRE.VOC" NULL terminated. */
	/* 15EE(14)  */ PACK char   string_15EE[14];            /*!< "-EPRODUCE.VOC" NULL terminated. */
	/* 15FC(12)  */ PACK char   string_15FC[12];            /*!< "-ERULES.VOC" NULL terminated. */
	/* 1608(13)  */ PACK char   string_1608[13];            /*!< "-ETERRIT.VOC" NULL terminated. */
	/* 1615(11)  */ PACK char   string_1615[11];            /*!< "-EMOST.VOC" NULL terminated. */
	/* 1620(12)  */ PACK char   string_1620[12];            /*!< "-ENOSET.VOC" NULL terminated. */
	/* 162C(10)  */ PACK char   string_162C[10];            /*!< "-EVIL.VOC" NULL terminated. */
	/* 1636(10)  */ PACK char   string_1636[10];            /*!< "-HARK.VOC" NULL terminated. */
	/* 1640(10)  */ PACK char   string_1640[10];            /*!< "-HOME.VOC" NULL terminated. */
	/* 164A(12)  */ PACK char   string_164A[12];            /*!< "-HOUSE2.VOC" NULL terminated. */
	/* 1656(11)  */ PACK char   string_1656[11];            /*!< "-INSID.VOC" NULL terminated. */
	/* 1661(10)  */ PACK char   string_1661[10];            /*!< "-KING.VOC" NULL terminated. */
	/* 166B(11)  */ PACK char   string_166B[11];            /*!< "-KNOWN.VOC" NULL terminated. */
	/* 1676(13)  */ PACK char   string_1676[13];            /*!< "-MELANGE.VOC" NULL terminated. */
	/* 1683(11)  */ PACK char   string_1683[11];            /*!< "-NOBLE.VOC" NULL terminated. */
	/* 168E(9)   */ PACK char   string_168E[9];             /*!< "?NOW.VOC" NULL terminated. */
	/* 1697(12)  */ PACK char   string_1697[12];            /*!< "-OFDUNE.VOC" NULL terminated. */
	/* 16A3(9)   */ PACK char   string_16A3[9];             /*!< "-ORD.VOC" NULL terminated. */
	/* 16AC(12)  */ PACK char   string_16AC[12];            /*!< "-PLANET.VOC" NULL terminated. */
	/* 16B8(13)  */ PACK char   string_16B8[13];            /*!< "-PREVAIL.VOC" NULL terminated. */
	/* 16C5(14)  */ PACK char   string_16C5[14];            /*!< "-PROPOSED.VOC" NULL terminated. */
	/* 16D3(14)  */ PACK char   string_16D3[14];            /*!< "-SANDLAND.VOC" NULL terminated. */
	/* 16E1(11)  */ PACK char   string_16E1[11];            /*!< "-SPICE.VOC" NULL terminated. */
	/* 16EC(12)  */ PACK char   string_16EC[12];            /*!< "-SPICE2.VOC" NULL terminated. */
	/* 16F8(10)  */ PACK char   string_16F8[10];            /*!< "-VAST.VOC" NULL terminated. */
	/* 1702(13)  */ PACK char   string_1702[13];            /*!< "-WHOEVER.VOC" NULL terminated. */
	/* 170F(10)  */ PACK char   string_170F[10];            /*!< "?YOUR.VOC" NULL terminated. */
	/* 1719(12)  */ PACK char   string_1719[12];            /*!< "?FILLER.VOC" NULL terminated. */
	/* 1725(14)  */ PACK char   string_1725[14];            /*!< "-DROPEQ2P.VOC" NULL terminated. */
	/* 1733(12)  */ PACK char   string_1733[12];            /*!< "/EXTINY.VOC" NULL terminated. */
	/* 173F(13)  */ PACK char   string_173F[13];            /*!< "-WIND2BP.VOC" NULL terminated. */
	/* 174C(14)  */ PACK char   string_174C[14];            /*!< "-BRAKES2P.VOC" NULL terminated. */
	/* 175A(13)  */ PACK char   string_175A[13];            /*!< "-GUNSHOT.VOC" NULL terminated. */
	/* 1767(11)  */ PACK char   string_1767[11];            /*!< "-GLASS.VOC" NULL terminated. */
	/* 1772(13)  */ PACK char   string_1772[13];            /*!< "-MISSLE8.VOC" NULL terminated. */
	/* 177F(11)  */ PACK char   string_177F[11];            /*!< "-CLANK.VOC" NULL terminated. */
	/* 178A(13)  */ PACK char   string_178A[13];            /*!< "-BLOWUP1.VOC" NULL terminated. */
	/* 1797(13)  */ PACK char   string_1797[13];            /*!< "-BLOWUP2.VOC" NULL terminated. */
	/* 17A4(6)   */ PACK char   string_17A4[6];             /*!< "dune1" NULL terminated. */
	/* 17AA(7)   */ PACK char   string_17AA[7];             /*!< "dune17" NULL terminated. */
	/* 17B1(6)   */ PACK char   string_17B1[6];             /*!< "dune8" NULL terminated. */
	/* 17B7(6)   */ PACK char   string_17B7[6];             /*!< "dune2" NULL terminated. */
	/* 17BD(6)   */ PACK char   string_17BD[6];             /*!< "dune3" NULL terminated. */
	/* 17C3(6)   */ PACK char   string_17C3[6];             /*!< "dune4" NULL terminated. */
	/* 17C9(6)   */ PACK char   string_17C9[6];             /*!< "dune5" NULL terminated. */
	/* 17CF(6)   */ PACK char   string_17CF[6];             /*!< "dune6" NULL terminated. */
	/* 17D5(6)   */ PACK char   string_17D5[6];             /*!< "dune9" NULL terminated. */
	/* 17DB(7)   */ PACK char   string_17DB[7];             /*!< "dune18" NULL terminated. */
	/* 17E2(7)   */ PACK char   string_17E2[7];             /*!< "dune10" NULL terminated. */
	/* 17E9(7)   */ PACK char   string_17E9[7];             /*!< "dune11" NULL terminated. */
	/* 17F0(7)   */ PACK char   string_17F0[7];             /*!< "dune12" NULL terminated. */
	/* 17F7(7)   */ PACK char   string_17F7[7];             /*!< "dune13" NULL terminated. */
	/* 17FE(7)   */ PACK char   string_17FE[7];             /*!< "dune14" NULL terminated. */
	/* 1805(7)   */ PACK char   string_1805[7];             /*!< "dune15" NULL terminated. */
	/* 180C(6)   */ PACK char   string_180C[6];             /*!< "dune7" NULL terminated. */
	/* 1812(6)   */ PACK char   string_1812[6];             /*!< "dune0" NULL terminated. */
	/* 1818(7)   */ PACK char   string_1818[7];             /*!< "dune16" NULL terminated. */
	/* 181F(7)   */ PACK char   string_181F[7];             /*!< "dune19" NULL terminated. */
	/* 1826(7)   */ PACK char   string_1826[7];             /*!< "dune20" NULL terminated. */
	/* 182D()    */ PACK uint8   unknown_182D[0x1];
	/* 182E(4)   */ PACK csip32 variable_182E;              /*!< ?? */
	/* 1832(4)   */ PACK csip32 variable_1832;              /*!< ?? */
	/* 1836(2)   */ PACK uint16 variable_1836;              /*!< ?? Counter. */
	/* 1838(2)   */ PACK uint16 variable_1838;              /*!< ?? Counter. */
	/* 183A()    */ PACK uint8   unknown_183A[0x2];
	/* 183C(3)   */ PACK char   string_183C[3];             /*!< "|\n" NULL terminated. */
	/* 183F(12)  */ PACK char   string_183F[12];            /*!< "BIGPLAN.CPS" NULL terminated. */
	/* 184B(12)  */ PACK char   string_184B[12];            /*!< "MAPPLAN.CPS" NULL terminated. */
	/* 1857()    */ PACK uint8   unknown_1857[0x000C];
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
	/* 19F0(60)  */ PACK uint8  variable_19F0[6][10];       /*!< ?? */
	/* 1A2C(3)   */ PACK uint8  variable_1A2C[3];           /*!< ?? */
	/* 1A2F()    */ PACK uint8   unknown_1A2F[0x018D];
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
	/* 1C1A()    */ PACK uint8   unknown_1C1A[0x0287];
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
	/* 2005()    */ PACK uint8   unknown_2005[0x0166];
	/* 216B(12)  */ PACK csip32 spriteFiles[3];             /*!< Array of pointers to spriteFilesX. */
	/* 2177(2)   */ PACK uint16 iconLoaded;                 /*!< True if ICON.ICN/MAP data are loaded. */
	/* 2179(36)  */ PACK uint8  variable_2179[0x0024];      /*!< ?? */
	/* 219D(48)  */ PACK uint16 variable_219D[4][6];        /*!< ?? */
	/* 21CD(59)  */ PACK char   spriteFiles0[59];           /*!< "MOUSE.SHP\0BTTN\0SHAPES.SHP\0UNITS2.SHP\0UNITS1.SHP\0UNITS.SHP\0\0". */
	/* 2208(21)  */ PACK char   spriteFiles1[21];           /*!< "MENTAT\0MENSHP%c.SHP\0\0". */
	/* 221D(33)  */ PACK char   spriteFiles2[33];           /*!< "MOUSE.SHP\0BTTN\0SHAPES.SHP\0CHOAM\0\0". */
	/* 223E(9)   */ PACK char   string_223E[9];             /*!< "ICON.ICN" NULL terminated. */
	/* 2247(9)   */ PACK char   string_2247[9];             /*!< "ICON.MAP" NULL terminated. */
	/* 2250(5)   */ PACK char   string_2250[5];             /*!< "UNIT" NULL terminated. */
	/* 2255(10)  */ PACK char   string_2255[10];            /*!< "construct" NULL terminated. */
	/* 225F(24)  */ PACK char   string_225F[24];            /*!< "%d,%d,%d,%d,%d,%d,%d,%d" NULL terminated. */
	/* 2277(35)  */ PACK char   string_2277[35];            /*!< "%*s%4d,%4d,%4d,%4d,%4d,%4d,%4d,%4d" NULL terminated. */
	/* 229A(7)   */ PACK char   string_229A[7];             /*!< "combat" NULL terminated. */
	/* 22A1(7)   */ PACK char   string_22A1[19];             /*!< "%*s%4d,%4d,%4d,%4d" NULL terminated. */
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
	/* 23D9()    */ PACK uint8   unknown_23D9[0x0089];
	/* 2462(18)  */ PACK uint16 variable_2462[9];           /*!< ?? */
	/* 2474()    */ PACK uint8   unknown_2474[0x0044];
	/* 24B8(164) */ PACK uint16 variable_24B8[82];          /*!< ?? */
	/* 255C()    */ PACK uint8   unknown_255C[0x0018];
	/* 2574(11)  */ PACK char   string_2574[11];            /*!< "STATIC.WSA" NULL terminated. */
	/* 257F()    */ PACK uint8   unknown_257F[0x0001];
	/* 2580(2)   */ PACK uint16 variable_2580;              /*!< ?? */
	/* 2582(4)   */ PACK uint32 variable_2582;              /*!< ?? Ticker inside Security_Check(). */
	/* 2586(13)  */ PACK char   string_2586[13];            /*!< "MENTAT%c.CPS" NULL terminated. */
	/* 2593(9)   */ PACK char   string_2593[9];             /*!< "BENE.PAL" NULL terminated. */
	/* 259C(8)   */ PACK char   string_259C[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 25A4(10)  */ PACK char   string_25A4[10];            /*!< "FHARK.WSA" NULL terminated. */
	/* 25AE(10)  */ PACK char   string_25AE[10];            /*!< "FARTR.WSA" NULL terminated. */
	/* 25B8(11)  */ PACK char   string_25B8[11];            /*!< "FORDOS.WSA" NULL terminated. */
	/* 25C3(8)   */ PACK char   string_25C3[8];             /*!< "PROTECT" NULL terminated. */
	/* 25CB(3)   */ PACK char   string_25CB[3];             /*!< "%d" NULL terminated. */
	/* 25CE()    */ PACK uint8   unknown_25CE[0x0008];
	/* 25D6(9)   */ PACK char   string_25D6[9];             /*!< "MENTAT%c" NULL terminated. */
	/* 25DF(7)   */ PACK char   string_25DF[7];             /*!< "TEXT%c" NULL terminated. */
	/* 25E6()    */ PACK uint8   unknown_25E6[0x0002];
	/* 25E8(10)  */ PACK char   string_25E8[10];            /*!< "INTRO.PAL" NULL terminated. */
	/* 25F2(10)  */ PACK char   string_25F2[10];            /*!< "INTRO.FNT" NULL terminated. */
	/* 25FC(7)   */ PACK char   string_25FC[7];             /*!< "%s.WSA" NULL terminated. */
	/* 2603(29)  */ PACK char   string_2603[29];            /*!< "Bad mode in animation #%i.\r\n" NULL terminated. */
	/* 2620(42)  */ PACK char   string_2620[42];            /*!< "Copyright (c) 1992 Westwood Studios, Inc." NULL terminated. */
	/* 264A()    */ PACK uint8   unknown_264A[0x020F];
	/* 2859(4)   */ PACK csip32 variable_2859;              /*!< ?? */
	/* 285D()    */ PACK uint8   unknown_285D[0x0038];
	/* 2895(4)   */ PACK csip32 variable_2895;              /*!< ?? */
	/* 2899()    */ PACK uint8   unknown_2899[0x00EC];
	/* 2985(4)   */ PACK csip32 variable_2985;              /*!< ?? */
	/* 2989()    */ PACK uint8   unknown_2989[0x010A];
	/* 2A93(4)   */ PACK csip32 variable_2A93;              /*!< ?? */
	/* 2A97(2)   */ PACK uint16 variable_2A97;              /*!< ?? */
	/* 2A99(2)   */ PACK uint16 variable_2A99;              /*!< ?? */
	/* 2A9B(18)  */ PACK uint16 variable_2A9B[9];           /*!< ?? */
	/* 2AAD()    */ PACK uint8   unknown_2AAD[0x000A];
	/* 2AB7(12)  */ PACK char   string_2AB7[12];            /*!< "OPTIONS.CFG" NULL terminated. */
	/* 2AC3(14)  */ PACK char   string_2AC3[14];            /*!< "_SAVE%03d.DAT" NULL terminated. */
	/* 2AD1()    */ PACK uint8   unknown_2AD1[0x0001];
	/* 2AD2(3)   */ PACK char   string_2AD2[3];             /*!< "%d" NULL terminated. */
	/* 2AD5(9)   */ PACK char   string_2AD5[9];             /*!< "\r\n[%s]\r\n" NULL terminated. */
	/* 2ADE(8)   */ PACK char   string_2ADE[8];             /*!< "%s=%d\r\n" NULL terminated. */
	/* 2AE6(5)   */ PACK char   string_2AE6[8];             /*!< "%s=%s\r\n" NULL terminated. */
	/* 2AEE(5)   */ PACK char   string_2AEE[5];             /*!< "[%s]" NULL terminated. */
	/* 2AF3(1)   */ PACK uint8  variable_2AF3;              /*!< ?? */
	/* 2AF4(2)   */ PACK uint32 variable_2AF4;              /*!< ?? */
	/* 2AF8(4)   */ PACK char   string_2AF8[4];             /*!< "ENG" NULL terminated. */
	/* 2AFC(4)   */ PACK char   string_2AFC[4];             /*!< "FRE" NULL terminated. */
	/* 2B00(4)   */ PACK char   string_2B00[4];             /*!< "GER" NULL terminated. */
	/* 2B04(4)   */ PACK char   string_2B04[4];             /*!< "ITA" NULL terminated. */
	/* 2B08(4)   */ PACK char   string_2B08[4];             /*!< "SPA" NULL terminated. */
	/* 2B0C()    */ PACK uint8   unknown_2B0C[0x0006];
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
	/* 2C0F()    */ PACK uint8   unknown_2C0F[0x002F];
	/* 2C3E(3)   */ PACK char   string_2C3E[3];             /*!< "%u" NULL terminated. */
	/* 2C41(13)  */ PACK char   string_2C41[13];            /*!< "SAVEFAME.DAT" NULL terminated. */
	/* 2C4E(9)   */ PACK char   string_2C4E[9];             /*!< "FAME.CPS" NULL terminated. */
	/* 2C57(3)   */ PACK char   string_2C57[3];             /*!< ", " NULL terminated. */
	/* 2C5A(4)   */ PACK char   string_2C5A[4];             /*!< "%u." NULL terminated. */
	/* 2C5E(4)   */ PACK uint32 tickEditBox;                /*!< Ticker for cursor blinking (in EditBox) */
	/* 2C62(2)   */ PACK uint16 editBoxShowCursor;          /*!< Boolean value, when non-zero, cursor is active (in EditBox). */
	/* 2C64(126) */ PACK uint16 layoutTiles[7][9];          /*!< Array with position offset per tile in a structure layout. */
	/* 2CE2()    */ PACK uint8   unknown_2CE2[0x0070];
	/* 2D52(14)  */ PACK uint16 layoutTileCount[7];         /*!< Array with amount of tiles in a layout. */
	/* 2D60(224) */ PACK uint16 layoutTilesAround[7][16];   /*!< Array with position offset per tile around a structure layout. */
	/* 2E40(28)  */ PACK uint16 layoutSize[7][2];           /*!< Array with size of a layout. */
	/* 2E5C(28)  */ PACK tile32 layoutTileDiff[7];          /*!< Array with TileDiff of a layout. */
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
	/* 3196()    */ PACK uint16 variable_3196;              /*!< ?? A counter. */
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
	/* 31D8(4)   */ PACK char   string_31D8[4];             /*!< "ENG" NULL terminated. */
	/* 31DC(4)   */ PACK char   string_31DC[4];             /*!< "FRE" NULL terminated. */
	/* 31E0(4)   */ PACK char   string_31E0[4];             /*!< "GER" NULL terminated. */
	/* 31E4(4)   */ PACK char   string_31E4[4];             /*!< "ITA" NULL terminated. */
	/* 31E8(4)   */ PACK char   string_31E8[4];             /*!< "SPA" NULL terminated. */
	/* 31EC(4)   */ PACK char   string_31EC[4];             /*!< "FRE" NULL terminated. */
	/* 31F0(4)   */ PACK char   string_31F0[4];             /*!< "GER" NULL terminated. */
	/* 31F4(5)   */ PACK char   string_31F4[5];             /*!< "DUNE" NULL terminated. */
	/* 31F9(9)   */ PACK char   string_31F9[9];             /*!< "DUNE.LOG" NULL terminated. */
	/* 3202(2)   */ PACK char   string_3202[2];             /*!< "." NULL terminated. */
	/* 3204(9)   */ PACK char   string_3204[9];             /*!< "DUNEINIT" NULL terminated. */
	/* 320D()    */ PACK uint8   unknown_320D[0x0001];
	/* 320E(4)   */ PACK uint32 variable_320E;              /*!< ?? */
	/* 3212(64)  */ PACK csip32 variable_3212[14];          /*!< ?? */
	/* 324A()    */ PACK uint8   unknown_324A[0x005A];
	/* 32A4(32)  */ PACK uint16 variable_32A4[8][2];        /*!< ?? */
	/* 32C4(32)  */ PACK uint16 variable_32C4[8][2];        /*!< ?? */
	/* 32E4(32)  */ PACK uint16 variable_32E4[8][2];        /*!< ?? */
	/* 3304(32)  */ PACK uint16 variable_3304[8][2];        /*!< ?? */
	/* 3324()    */ PACK uint8   unknown_3324[0x0020];
	/* 3344(2)   */ PACK uint16 variable_3344;              /*!< ?? */
	/* 3346(4)   */ PACK uint32 variable_3346;              /*!< ?? */
	/* 334A(4)   */ PACK uint8  variable_334A[4];           /*!< ?? */
	/* 334E(32)  */ PACK uint16 variable_334E[8][2];        /*!< ?? */
	/* 336E(32)  */ PACK uint16 variable_336E[8][2];        /*!< ?? */
	/* 338E(32)  */ PACK uint16 variable_338E[8][2];        /*!< ?? */
	/* 33AE(8)   */ PACK uint16 variable_33AE[4];           /*!< ?? */
	/* 33B6(100) */ PACK csip32 scriptFunctionsStructure[25];/*!< Structure functions to call via scripts. */
	/* 341A(4)   */ PACK uint32 tickStructureDegrade;       /*!< Indicates next time Structure runs Degrade function. */
	/* 341E(4)   */ PACK uint32 tickStructureStructure;     /*!< Indicates next time Structure runs Structurs function. */
	/* 3422(4)   */ PACK uint32 tickStructureScript;        /*!< Indicates next time Structure runs Script function. */
	/* 3426(4)   */ PACK uint32 tickStructurePalace;        /*!< Indicates next time Structure runs Palace function. */
	/* 342A(6)   */ PACK char   string_342A[6];             /*!< "%s %s" NULL terminated. */
	/* 3430(9)   */ PACK char   string_3430[9];             /*!< "%s %s %s" NULL terminated. */
	/* 3439()    */ PACK uint8   unknown_3439[0x0001];
	/* 343A(4)   */ PACK uint32 tickCursor;                 /*!< Stores last time Viewport changed the cursor spriteID. */
	/* 343E(4)   */ PACK uint32 tickMapScroll;              /*!< Stores last time Viewport ran MapScroll function. */
	/* 3442(24)  */ PACK uint16 cursorHotSpots[6][2];       /*!< HotSpots for different cursor types. */
	/* 345A(8)   */ PACK uint16 variable_345A[4];           /*!< ?? */
	/* 3462(256) */ PACK uint8  variable_3462[256];         /*!< ?? */
	/* 3562(2)   */ PACK uint16 variable_3562;              /*!< ?? */
	/* 3564(2)   */ PACK uint16 minimapPreviousPosition;    /*!< Previous minimap position (top-left tile, packed). */
	/* 3566(94)  */ PACK uint16 variable_3566[47];          /*!< ?? */
	/* 35C4(2)   */ PACK uint16 selectionObjectPosition;    /*!< Position of the current selected object (top-left tile, packed). */
	/* 35C6(2)   */ PACK uint16 selectionObjectLayout;      /*!< Layout of the current selected object. */
	/* 35C8(32)  */ PACK uint16 mapScrollOffset[8][2];      /*!< Translates scroll numbers to positional offsets for map scrolling. */
	/* 35E8(4)   */ PACK csip32 unitStartPos;               /*!< CS:IP of Unit array. */
	/* 35EC(2)   */ PACK uint16 unitCount;                  /*!< Amount of Units on the map. */
	/* 35EE(4)   */ PACK csip32 teamStartPos;               /*!< CS:IP of Team array. */
	/* 35F2(2)   */ PACK uint16 teamCount;                  /*!< Amount of Teams on the map. */
	/* 35F4(4)   */ PACK csip32 structureStartPos;          /*!< CS:IP of Structure array. */
	/* 35F8(2)   */ PACK uint16 structureCount;             /*!< Amount of Structures on the map. */
	/* 35FA(4)   */ PACK csip32 houseStartPos;              /*!< CS:IP of house array. */
	/* 35FE(2)   */ PACK uint16 houseCount;                 /*!< Amount of houses on the map. */
	/* 3600(4)   */ PACK csip32 variable_3600;              /*!< ?? */
	/* 3604()    */ PACK uint8   unknown_3604[0x0040];
	/* 3644(80)  */ PACK char  variable_3644[80];           /*!< ?? */
	/* 3694(80)  */ PACK char  variable_3694[80];           /*!< ?? */
	/* 36E4(80)  */ PACK char  variable_36E4[80];           /*!< ?? */
	/* 3734(2)   */ PACK uint16 variable_3734;              /*!< ?? */
	/* 3736(2)   */ PACK uint16 variable_3736;              /*!< ?? */
	/* 3738(2)   */ PACK uint16 variable_3738;              /*!< ?? */
	/* 373A(2)   */ PACK uint16 variable_373A;              /*!< ?? */
	/* 373C(4)   */ PACK uint32 variable_373C;              /*!< ?? */
	/* 3740(2)   */ PACK uint16 variable_3740;              /*!< ?? */
	/* 3742(16)  */ PACK uint8  variable_3742[16];          /*!< ?? */
	/* 3752()    */ PACK uint8   unknown_3752[0x001A];
	/* 376C(2)   */ PACK uint16 variable_376C;              /*!< ?? */
	/* 376E(2)   */ PACK uint16 variable_376E;              /*!< ?? */
	/* 3770(4)   */ PACK char   string_3770[4];             /*!< "%6d" NULL terminated. */
	/* 3774(3)   */ PACK char   string_3774[3];             /*!< "%d" NULL terminated. */
	/* 3777(11)  */ PACK char   string_3777[11];            /*!< "SCREEN.CPS" NULL terminated. */
	/* 3782(16)  */ PACK uint16 variable_3782[8];           /*!< ?? */
	/* 3792(8)   */ PACK uint8  variable_3792[8];           /*!< ?? */
	/* 379A(2)   */ PACK uint16 enableLog;                  /*!< 0 = off, 1 = record game, 2 = playback game (stored in 'dune.log'). */
	/* 379C(2)   */ PACK uint16 debugGame;                  /*!< When non-zero, it allows you to control the AI. */
	/* 379E(2)   */ PACK uint16 debugForceWin;              /*!< When non-zero, you immediately win the level.  */
	/* 37A0(2)   */ PACK uint16 debugScenario;              /*!< When non-zero, it allows you to review the scenario. There is no fog. The game is not running (no unit-movement, no structure-building, etc). You can click on individual tiles. */
	/* 37A2(2)   */ PACK uint16 variable_37A2;              /*!< ?? Write-only. */
	/* 37A4(2)   */ PACK uint16 variable_37A4;              /*!< ?? */
	/* 37A6(2)   */ PACK uint16 variable_37A6;              /*!< ?? Write-only. */
	/* 37A8(2)   */ PACK uint16 variable_37A8;              /*!< ?? */
	/* 37AA(2)   */ PACK uint16 variable_37AA;              /*!< ?? Read-only. */
	/* 37AC(2)   */ PACK uint16 debugInstantBuild;          /*!< When non-zero, constructions are almost instant. */
	/* 37AE(2)   */ PACK uint16 debugSkipDialogs;           /*!< When non-zero, you immediately go to house selection, and skip all intros. */
	/* 37B0(2)   */ PACK uint16 debugNoExplosionDamage;     /*!< When non-zero, explosions do no damage to their surrounding. */
	/* 37B2(2)   */ PACK uint16 variable_37B2;              /*!< ?? */
	/* 37B4(2)   */ PACK uint16 variable_37B4;              /*!< ?? */
	/* 37B6(2)   */ PACK uint16 language;                   /*!< 0:English, 1:French, 2:German, 3:Italian, 4:Spanish. */
	/* 37B8(2)   */ PACK uint16 variable_37B8;              /*!< ?? */
	/* 37BA(2)   */ PACK uint16 variable_37BA;              /*!< ?? */
	/* 37BC(4)   */ PACK csip32 variable_37BC;              /*!< ?? */
	/* 37E0()    */ PACK uint8   unknown_37E0[0x0030];
	/* 37F0(4)   */ PACK uint32 variable_37F0;              /*!< ?? */
	/* 37F4(4)   */ PACK uint32 variable_37F4;              /*!< ?? */
	/* 37F8(180) */ PACK uint8  donotuse_houseInfo[180];    /*!< Information about the houses. Use g_houseInfo to access. */
	/* 38AC()    */ PACK uint32 tickScenarioStart;          /*!< The tick the scenario started in. */
	/* 38B0(2)   */ PACK uint16 scenarioID;                 /*!< ID of current loaded Scenario. */
	/* 38B2(2)   */ PACK uint16 campaignID;                 /*!< ID of current campaign (from 0 to 9, where 9 is never played). */
	/* 38B4(2)   */ PACK uint16 playerCreditsNoSilo;        /*!< Credits player is still free to have without silo support. */
	/* 38B6(2)   */ PACK uint16 playerCredits;              /*!< Credits player has available. */
	/* 38B8(4)   */ PACK uint32 tickGameTimeout;            /*!< The tick the game will timeout. */
	/* 38BC(2)   */ PACK uint16 variable_38BC;              /*!< ?? If non-zero, Unit_Find/Structure_Find skips Unit/Structures with flag 0x4 off (being-built flag?). */
	/* 38BE(2)   */ PACK uint16 variable_38BE;              /*!< ?? */
	/* 38C0(4)   */ PACK uint32 variable_38C0;              /*!< ?? */
	/* 38C4(2)   */ PACK uint16 variable_38C4;              /*!< ?? */
	/* 38C6(4)   */ PACK csip32 variable_38C6;              /*!< ?? */
	/* 38CA(4)   */ PACK csip32 strings;                    /*!< Content of a string file (DUNE|INTRO|...).(ENG|FRE|...). */
	/* 38CE(4)   */ PACK csip32 variable_38CE;              /*!< Not used. Replaced by a local variable. */
	/* 38D2(4)   */ PACK uint32 variable_38D2;              /*!< Not used. Replaced by a local variable. */
	/* 38D6()    */ PACK uint8   unknown_38D6[0x0004];
	/* 38DA(4)   */ PACK csip32 readBuffer;                 /*!< Temporary buffer used for reading and analyzing files. */
	/* 38DE(4)   */ PACK uint32 readBufferSize;             /*!< Maximal length of the temporary read buffer. */
	/* 38E2(2)   */ PACK uint16 activeStructureType;        /*!< Type of the structure being placed. */
	/* 38E4(4)   */ PACK csip32 activeStructure;            /*!< Structure being placed. */
	/* 38E8()    */ PACK uint16 variable_38E8;              /*!< ?? */
	/* 38EA(2)   */ PACK uint16 structureIndex;             /*!< ?? */
	/* 38EC(2)   */ PACK  int16 variable_38EC;              /*!< ?? */
	/* 38EE()    */ PACK uint8   unknown_38EE[0x0002];
	/* 38F0(2)   */ PACK uint16 activeStructurePosition;    /*!< Position of the structure being placed. */
	/* 38F2(4)   */ PACK csip32 activeUnit;                 /*!< Unit currently controlled by player. */
	/* 38F6(2)   */ PACK uint16 activeAction;               /*!< Action the controlled unit will do. */
	/* 38F8(2)   */ PACK uint16 variable_38F8;              /*!< ?? If zero, game exists? */
	/* 38FA(4)   */ PACK csip32 unitHouseMissile;           /*!< When launching a House Missile, while selecting location, this points to the missile. */
	/* 38FE(2)   */ PACK uint16 houseMissleCountdown;       /*!< Amount of time the user has to select Missile target. */
	/* 3900(2)   */ PACK uint16 gameSpeed;                  /*!< Speed of the game, where 0 is slowest, and 4 is fastest. 2 is normal. */
	/* 3902(22)  */ PACK ScriptInfo scriptUnit;             /*!< Script information for Units. */
	/* 3918(22)  */ PACK ScriptInfo scriptStructure;        /*!< Script information for Structures. */
	/* 392E(22)  */ PACK ScriptInfo scriptTeam;             /*!< Script information for Teams. */
	/* 3944(2)   */ PACK uint16 scriptUnitSpeed;            /*!< Amount of opcodes a script for a Unit will execute every tick. */
	/* 3946()    */ PACK uint8   unknown_3946[0x0002];
	/* 3948(2)   */ PACK  int16 scriptUnitLeft;             /*!< Amount of opcodes left for a script for a Unit to execute this tick. */
	/* 394A(4)   */ PACK csip32 houseCurrent;               /*!< Current House we are handling in GameLoop. */
	/* 394E(4)   */ PACK csip32 objectCurrent;              /*!< Current Structure or Unit we are handling in GameLoop (the type depends on the GameLoop). */
	/* 3952(4)   */ PACK csip32 variable_3952;              /*!< ?? */
	/* 3956(4)   */ PACK csip32 variable_3956;              /*!< ?? */
	/* 395A(4)   */ PACK csip32 variable_395A;              /*!< ?? */
	/* 395E()    */ PACK uint8   unknown_395E[0x0084];
	/* 39E2(2)   */ PACK uint16 variable_39E2;              /*!< ?? */
	/* 39E4(2)   */ PACK uint16 variable_39E4;              /*!< ?? */
	/* 39E6(2)   */ PACK uint16 variable_39E6;              /*!< ?? */
	/* 39E8(2)   */ PACK uint16 variable_39E8;              /*!< ?? */
	/* 39EA(4)   */ PACK csip32 mapPointer;                 /*!< Pointer to the map. */
	/* 39EE(4)   */ PACK csip32 iconMap;                    /*!< Pointer to content of ICON.MAP. */
	/* 39F2(2)   */ PACK uint16 variable_39F2;              /*!< ?? */
	/* 39F4(2)   */ PACK uint16 variable_39F4;              /*!< ?? Bloom field information? */
	/* 39F6(2)   */ PACK uint16 variable_39F6;              /*!< ?? */
	/* 39F8(2)   */ PACK uint16 variable_39F8;              /*!< ?? */
	/* 39FA(2)   */ PACK uint16 variable_39FA;              /*!< ?? */
	/* 39FC(2)   */ PACK uint16 minimapPosition;            /*!< Current minimap position (top-left tile, packed). */
	/* 39FE(2)   */ PACK uint16 viewportPosition;           /*!< Current viewport position (top-left tile, packed). */
	/* 3A00(2)   */ PACK uint16 variable_3A00;              /*!< ?? */
	/* 3A02(2)   */ PACK uint16 selectionPosition;          /*!< Current selection position (packed). */
	/* 3A04(2)   */ PACK uint16 selectionWidth;             /*!< Width of the selection. */
	/* 3A06(2)   */ PACK uint16 selectionHeight;            /*!< Height of the selection. */
	/* 3A08(2)   */ PACK uint16 variable_3A08;              /*!< ?? */
	/* 3A0A(4)   */ PACK csip32 selectionUnit;              /*!< Current selected unit. */
	/* 3A0E(2)   */ PACK uint16 selectionType;              /*!< Type of selection. 0 = ??, 1 = target/destination, 2 = place object, 3 = unit, 4 = structure. */
	/* 3A10(2)   */ PACK uint16 variable_3A10;              /*!< ?? */
	/* 3A12(2)   */ PACK uint16 variable_3A12;              /*!< ?? */
	/* 3A14(2)   */ PACK uint16 variable_3A14;              /*!< ?? */
	/* 3A16()    */ PACK uint8   unknown_3A16[0x0016];
	/* 3A2C(4)   */ PACK csip32 new6pFnt;                   /*!< Pointer to content of new6p[g].fnt. */
	/* 3A30(4)   */ PACK csip32 new8pFnt2;                  /*!< Pointer to content of new8p.fnt (copy of new8pFnt). */
	/* 3A34(2)   */ PACK uint16 cursorSpriteID;             /*!< The current cursor spriteID. */
	/* 3A36(2)   */ PACK uint16 cursorDefaultSpriteID;      /*!< The cursor spriteID for viewport and minimap. */
	/* 3A38(2)   */ PACK uint16 playerHouseID;              /*!< The House the player is controlling. */
	/* 3A3A(4)   */ PACK csip32 playerHouse;                /*!< Pointer to the house the player is controlling. */
	/* 3A3E(448) */ PACK uint16 variable_3A3E[15][14];      /*!< ?? */
	/* 3BE2(24)  */ PACK csip32 movementName[6];            /*!< Pointer to the name of the MovementType. */
	/* 3BFA(20)  */ PACK csip32 teamActionName[5];          /*!< Pointer to the name of the TeamActionType. */
	/* 3C0E(24)  */ PACK MapInfo mapInfo[3];                /*!< Data about the map. [0] is 62x62, [1] is 32x32, [2] is 21x21. */
	/* 3C26(4)   */ PACK csip32 variable_3C26;              /*!< ?? */
	/* 3C2A(8)   */ PACK uint16 actionsAI[4];               /*!< ?? */
	/* 3C32(4)   */ PACK csip32 variable_3C32;              /*!< ?? */
	/* 3C36(4)   */ PACK csip32 variable_3C36;              /*!< ?? */
	/* 3C3A(4)   */ PACK csip32 variable_3C3A;              /*!< ?? */
	/* 3C3E(4)   */ PACK csip32 variable_3C3E;              /*!< ?? */
	/* 3C42(4)   */ PACK csip32 variable_3C42;              /*!< ?? */
	/* 3C46(4)   */ PACK csip32 variable_3C46;              /*!< ?? */
	/* 3C4A(2)   */ PACK uint16 variable_3C4A;              /*!< ?? */
	/* 3C4C(256) */ PACK uint8  variable_3C4C[256];         /*!< ?? */
	/* 3D4C(256) */ PACK uint8  variable_3D4C[256];         /*!< ?? */
	/* 3E4C()    */ PACK uint8   unknown_3E4C[0x0002];
	/* 3E4E(4)   */ PACK csip32 currentMusic;               /*!< ?? */
	/* 3E52(2)   */ PACK  int16 variable_3E52;              /*!< ?? */
	/* 3E54(524) */ PACK csip32 variable_3E54[131];         /*!< ?? */
	/* 4060(2)   */ PACK uint16 variable_4060;              /*!< ?? */
	/* 4062(320) */ PACK uint16 variable_4062[20][8];       /*!< ?? Position and size of widgets? */
	/* 41A2()    */ PACK uint8   unknown_41A2[0x0014];
	/* 41B6(2)   */ PACK uint16 variable_41B6;              /*!< ?? */
	/* 41B8(2)   */ PACK uint16 variable_41B8;              /*!< ?? */
	/* 41BA()    */ PACK uint8   unknown_41BA[0x0008];
	/* 41C2(10)  */ PACK GameCfg gameConfig;                /*!< Game config (options.cfg). */
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
	/* 426C(7)   */ PACK char   string_426C[7];             /*!< "Normal" NULL terminated. */
	/* 4273(8)   */ PACK char   string_4273[8];             /*!< "Staging" NULL terminated. */
	/* 427B(5)   */ PACK char   string_427B[5];             /*!< "Flee" NULL terminated. */
	/* 4280(9)   */ PACK char   string_4280[9];             /*!< "Kamikaze" NULL terminated. */
	/* 4289(6)   */ PACK char   string_4289[6];             /*!< "Guard" NULL terminated. */
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
	/* 6086(4)   */ PACK uint32 tickHouseHouse;             /*!< Indicates next time House runs House function. */
	/* 608A(4)   */ PACK uint32 tickHousePowerMaintenance;  /*!< Indicates next time House runs Power Maintenance function. */
	/* 608E(4)   */ PACK uint32 tickHouseStarport;          /*!< Indicates next time House runs Starport function. */
	/* 6092(4)   */ PACK uint32 tickHouseReinforcement;     /*!< Indicates next time House runs Reinforcement function. */
	/* 6096(4)   */ PACK uint32 tickHouseUnused;            /*!< Indicates next time House runs Unused function. */
	/* 609A(4)   */ PACK uint32 tickHouseMissileCountdown;  /*!< Indicates next time House runs Unknown function. */
	/* 609E(4)   */ PACK uint32 tickHouseStarportAvailability;/*!< Indicates next time House runs Starport Availability function. */
	/* 60A2(4)   */ PACK uint32 variable_60A2;              /*!< ?? */
	/* 60A6(8)   */ PACK uint16 donotuse_60A6[4];
	/* 60AE(12)  */ PACK char   string_60AE[12];            /*!< "Forced end." NULL terminated. */
	/* 60BA(13)  */ PACK char   string_60BA[13];            /*!< "Destroy end." NULL terminated. */
	/* 60C7(11)  */ PACK char   string_60C7[11];            /*!< "Quota win." NULL terminated. */
	/* 60D2(13)  */ PACK char   string_60D2[13];            /*!< "Timeout win." NULL terminated. */
	/* 60DF(8)   */ PACK char   string_60DF[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 60E7()    */ PACK uint8   unknown_60E7[0x002D];
	/* 6114(4)   */ PACK uint32 iconUsedMemory;             /*!< Amount of memory block used when loading ICON.ICN. */
	/* 6118(4)   */ PACK csip32 iconRPAL;                   /*!< Content of RPAL chunk from ICON.ICN. */
	/* 611C(2)   */ PACK uint16 iconRPALFreed;              /*!< True if memory at iconRPAL has been freed. */
	/* 611E(4)   */ PACK csip32 iconRTBL;                   /*!< Content of RTBL chunk from ICON.ICN. */
	/* 6122(2)   */ PACK uint16 iconRTBLFreed;              /*!< True if memory at iconRTBL has been freed. */
	/* 6124(4)   */ PACK csip32 teamCurrent;                /*!< Current Team we are handling in GameLoop. */
	/* 6128(60)  */ PACK csip32 scriptFunctionsTeam[15];    /*!< Team functions to call via scripts. */
	/* 6164(4)   */ PACK uint32 variable_6164;              /*!< ?? */
	/* 6168(256) */ PACK csip32 scriptFunctionsUnit[64];    /*!< Unit functions to call via scripts. */
	/* 6268(4)   */ PACK csip32 unitCurrent;                /*!< Current Unit we are handling in GameLoop. */
	/* 626C(4)   */ PACK csip32 unitInfoCurrent;            /*!< Current UnitInfo we are handling in the GameLoop. */
	/* 6270(4)   */ PACK uint32 tickUnitUnknown1;           /*!< Indicates next time Unit runs Unknown1 function. */
	/* 6274(4)   */ PACK uint32 tickUnitUnknown2;           /*!< Indicates next time Unit runs Unknown2 function. */
	/* 6278(4)   */ PACK uint32 tickUnitUnknown3;           /*!< Indicates next time Unit runs Unknown3 function. */
	/* 627C(4)   */ PACK uint32 tickUnitUnknown4;           /*!< Indicates next time Unit runs Unknown4 function. */
	/* 6280(4)   */ PACK uint32 tickUnitScript;             /*!< Indicates next time Unit runs Script function. */
	/* 6284(4)   */ PACK uint32 tickUnitUnknown5;           /*!< Indicates next time Unit runs Unknown5 function. */
	/* 6288(4)   */ PACK uint32 tickUnitDeviation;          /*!< Indicates next time Unit runs Deviation function. */
	/* 628C(8)   */ PACK uint16 variable_628C[4];           /*!< ?? */
	/* 6294(68)  */ PACK tile32 variable_6294[17];          /*!< ?? */
	/* 62D8(18)  */ PACK uint16 variable_62D8[9];           /*!< ?? */
	/* 62EA(3)   */ PACK char   string_62EA[3];             /*!< "%s" NULL terminated. */
	/* 62ED(6)   */ PACK char   string_62ED[6];             /*!< "%s %s" NULL terminated. */
	/* 62F3(2)   */ PACK char   string_62F3[2];             /*!< "." NULL terminated. */
	/* 62F5()    */ PACK uint8   unknown_62F5[0x0001];
	/* 62F6(1)   */ PACK uint8  variable_62F6;              /*!< ?? */
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
	/* 639A()    */ PACK uint8   unknown_639A[0x0002];
	/* 639C(2)   */ PACK uint16 variable_639C;              /*!< ?? */
	/* 639E()    */ PACK uint8   unknown_639E[0x000C];
	/* 63AA(28)  */ PACK DSDriver voiceDrv[7];              /*!< Informations about the digitized sound drivers. */
	/* 63C6(168) */ PACK MSDriver musicDrv[14];             /*!< Informations about the music drivers. */
	/* 646E(168) */ PACK MSDriver soundDrv[14];             /*!< Informations about the sound drivers. */
	/* 6516()    */ PACK uint8   unknown_6516[0x0002];
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
	/* 66EC(4)   */ PACK csip32 variable_66EC;              /*!< CS:IP of routine. */
	/* 66F0(2)   */ PACK uint16 variable_66F0;              /*!< ?? */
	/* 66F2(2)   */ PACK uint16 variable_66F2;              /*!< ?? */
	/* 66F4(4)   */ PACK uint32 variable_66F4;              /*!< ?? */
	/* 66F8(2)   */ PACK uint16 variable_66F8;              /*!< ?? */
	/* 66FA(2)   */ PACK uint16 variable_66FA;              /*!< ?? */
	/* 66FC()    */ PACK uint8   unknown_66FC[0x0004];
	/* 6700(33)  */ PACK char   string_6700[17];            /*!< "0123456789ABCDEF" NULL terminated. */
	/* 6711()    */ PACK uint8   unknown_6711[0x0001];
	/* 6712(4)   */ PACK csip32 variable_6712;              /*!< ?? Pointer to string_6792. */
	/* 6716(4)   */ PACK csip32 variable_6716;              /*!< ?? Pointer to string_67C2. */
	/* 671A(4)   */ PACK csip32 variable_671C;              /*!< ?? Pointer to string_67F9. */
	/* 671E(4)   */ PACK csip32 variable_671E;              /*!< ?? Pointer to string_6834. */
	/* 6722(4)   */ PACK csip32 variable_6722;              /*!< ?? Pointer to string_6866. */
	/* 6726(4)   */ PACK csip32 variable_6726;              /*!< ?? Pointer to string_687C. */
	/* 672C(4)   */ PACK csip32 variable_672C;              /*!< ?? Pointer to string_68BE. */
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
	/* 678C(4)   */ PACK csip32 variable_678C;              /*!< ?? Pointer to string_6C39. */
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
	/* 6C76(2)   */ PACK uint16 variable_6C76;              /*!< ?? */
	/* 6C78(2)   */ PACK uint16 snapX;                      /*!< Snap mouse to grid, x-axis. */
	/* 6C7A(2)   */ PACK uint16 snapY;                      /*!< Snap mouse to grid, y-axis. */
	/* 6C7C(2)   */ PACK uint16 snapGreyX;                  /*!< Grey zone for snapping, x-axis. */
	/* 6C7E(2)   */ PACK uint16 snapGreyY;                  /*!< Grey zone for snapping, y-axis. */
	/* 6C80(4)   */ PACK csip32 variable_6C80;              /*!< CS:IP of a function. */
	/* 6C84(4)   */ PACK uint32 variable_6C84;              /*!< ?? */
	/* 6C88()    */ PACK uint8   unknown_6C88[0x0009];
	/* 6C91(2)   */ PACK uint16 variable_6C91;              /*!< ?? Current memory block in use. */
	/* 6C93(32)  */ PACK uint16 variable_6C93[8][2];        /*!< ?? Array of memory segments. */
	/* 6CB3()    */ PACK uint8   unknown_6CB3[0x0020];
	/* 6CD3(64)  */ PACK uint32 variable_6CD3[8][2];        /*!< ?? Array init in f__B480_0000_0018_A09B(). */
	/* 6D13()    */ PACK uint8   unknown_6D13[0x0040];
	/* 6D53(2)   */ PACK uint16 variable_6D53;              /*!< ?? */
	/* 6D55()    */ PACK uint8   unknown_6D55[0x0004];
	/* 6D59(2)   */ PACK uint16 variable_6D59;              /*!< ?? Non-blink colour for cursor in edit box. */
	/* 6D5B(2)   */ PACK uint16 variable_6D5B;              /*!< ?? Blink colour for cursor in edit box. */
	/* 6D5D(2)   */ PACK uint16 variable_6D5D;              /*!< ?? */
	/* 6D5F(2)   */ PACK uint16 variable_6D5F;              /*!< ?? */
	/* 6D61(2)   */ PACK uint16 variable_6D61;              /*!< ?? */
	/* 6D63(2)   */ PACK uint16 variable_6D63;              /*!< ?? */
	/* 6D65()    */ PACK uint8   unknown_6D65[0x0010];
	/* 6D75(2)   */ PACK uint16 widgetReset;                /*!< Reset the widget and redraw when non-zero. */
	/* 6D77(4)   */ PACK char   string_6D77[4];             /*!< "ENG" NULL terminated. */
	/* 6D7B(4)   */ PACK char   string_6D7B[4];             /*!< "FRE" NULL terminated. */
	/* 6D7F(4)   */ PACK char   string_6D7F[4];             /*!< "GER" NULL terminated. */
	/* 6D83(4)   */ PACK char   string_6D83[4];             /*!< "ITA" NULL terminated. */
	/* 6D87(4)   */ PACK char   string_6D87[4];             /*!< "SPA" NULL terminated. */
	/* 6D8B(2)   */ PACK uint16 variable_6D8B;              /*!< ?? */
	/* 6D8D(2)   */ PACK uint16 variable_6D8D;              /*!< ?? */
	/* 6D8F(2)   */ PACK uint16 variable_6D8F;              /*!< ?? */
	/* 6D91()    */ PACK uint8   unknown_6D91[0x0021];
	/* 6DB2(4)   */ PACK csip32 variable_6DB2;              /*!< ?? Pointer to string_6DCE. */
	/* 6DB6(4)   */ PACK csip32 variable_6DB6;              /*!< ?? Pointer to string_6DD6. */
	/* 6DBA(4)   */ PACK csip32 variable_6DBA;              /*!< ?? Pointer to string_6DDE. */
	/* 6DBE(4)   */ PACK csip32 variable_6DBE;              /*!< ?? Pointer to string_6DE6. */
	/* 6DC2(4)   */ PACK csip32 variable_6DC2;              /*!< ?? Pointer to string_6DEE. */
	/* 6DC6(4)   */ PACK csip32 variable_6DC6;              /*!< ?? Pointer to string_6DF6. */
	/* 6DCA(4)   */ PACK csip32 variable_6DCA;              /*!< ?? Pointer to string_6DFE. */
	/* 6DCE(8)   */ PACK char   string_6DCE[8];             /*!< "cga.ovl" NULL terminated. */
	/* 6DD6(8)   */ PACK char   string_6DD6[8];             /*!< "tga.ovl" NULL terminated. */
	/* 6DDE(8)   */ PACK char   string_6DDE[8];             /*!< "ega.ovl" NULL terminated. */
	/* 6DE6(8)   */ PACK char   string_6DE6[8];             /*!< "mga.ovl" NULL terminated. */
	/* 6DEE(8)   */ PACK char   string_6DEE[8];             /*!< "vga.ovl" NULL terminated. */
	/* 6DF6(8)   */ PACK char   string_6DF6[8];             /*!< "xga.ovl" NULL terminated. */
	/* 6DFE(8)   */ PACK char   string_6DFE[8];             /*!< "yga.ovl" NULL terminated. */
	/* 6E06(29)  */ PACK char   string_6E06[29];            /*!< "PageArraySize is negative!\r\n" NULL terminated. */
	/* 6E23()    */ PACK uint8   unknown_6E23[0x001B];
	/* 6E3E(4)   */ PACK csip32 variable_6E3E;              /*!< ?? */
	/* 6E42()    */ PACK uint8   unknown_6E42[0x0004];
	/* 6E46(40)  */ PACK char   string_6E46[40];            /*!< "Run setup and remove XMS and HMA usage." NULL terminated. */
	/* 6E6E(25)  */ PACK char   string_6E6E[25];            /*!< "HIMEM.SYS error %x -- %s" NULL terminated. */
	/* 6E87()    */ PACK uint8   unknown_6E87[0x0001];
	/* 6E88(145) */ PACK char   stringDecompress[144];      /*!< " etainosrlhcdupmtasio wb rnsdalmh ieorasnrtlc synstcloer dtgesionr ufmsw tep.icae "
	                                                         *   "oiadur laeiyodeia otruetoakhlr eiu,.oansrctlaileoiratpeaoip bm".
	                                                         *   Used to uncompress lang files (.ENG, ...). Also accessed via 0x6E98. */
	/* 6F18(4)   */ PACK csip32 variable_6F18;              /*!< Pointer to a buffer. */
	/* 6F1C(2)   */ PACK uint16 variable_6F1C;              /*!< Size of the above buffer. */
	/* 6F1E()    */ PACK uint8   unknown_6F1E[0x00EC];
	/* 700A(2)   */ PACK uint16 soundsEnabled;              /*!< 1 if sounds are enabled in game options, 0 otherwise. */
	/* 700C(2)   */ PACK uint16 musicEnabled;               /*!< 1 if music is enabled in game options, 0 otherwise. */
	/* 700E(2)   */ PACK uint16 inputFlags;                 /*!< Flags for input. See InputFlagsEnum. */
	/* 7010(1)   */ PACK uint8  mouseMode;                  /*!< Mouse mode. See InputMouseMode. */
	/* 7011(2)   */ PACK uint16 variable_7011;              /*!< ?? */
	/* 7013(2)   */ PACK uint16 variable_7013;              /*!< ?? */
	/* 7015(2)   */ PACK uint16 variable_7015;              /*!< ?? */
	/* 7017()    */ PACK uint8   unknown_7017[0x0004];
	/* 701B(2)   */ PACK uint16 variable_701B;              /*!< ?? */
	/* 701D()    */ PACK uint8   unknown_701D[0x0041];
	/* 705E(2)   */ PACK uint16 mouseLock;                  /*!< Lock for when handling mouse movement. */
	/* 7060(2)   */ PACK uint16 mouseX;                     /*!< Current X position of the mouse. */
	/* 7062(2)   */ PACK uint16 mouseY;                     /*!< Current Y position of the mouse. */
	/* 7064(2)   */ PACK uint16 mouseClickX;                /*!< X position of last mouse click. */
	/* 7066(2)   */ PACK uint16 mouseClickY;                /*!< Y position of last mouse click. */
	/* 7068(2)   */ PACK uint16 doubleWidth;                /*!< If non-zero, the X-position given by mouse is twice the real value. */
	/* 706A(2)   */ PACK uint16 variable_706A;              /*!< ?? If non-zero, mouse movement is not registered. */
	/* 706C(2)   */ PACK uint16 mouseRegionLeft;            /*!< Region mouse can be in - left position. */
	/* 706E(2)   */ PACK uint16 mouseRegionRight;           /*!< Region mouse can be in - right position. */
	/* 7070(2)   */ PACK uint16 mouseRegionTop;             /*!< Region mouse can be in - top position. */
	/* 7072(2)   */ PACK uint16 mouseRegionBottom;          /*!< Region mouse can be in - bottom position. */
	/* 7074(8)   */ PACK uint8   unknown_7074[0x0008];
	/* 707C(2)   */ PACK uint16 mousePrevX;                 /*!< Previous X position. */
	/* 707E(2)   */ PACK uint16 mousePrevY;                 /*!< Previous Y position. */
	/* 7080(2)   */ PACK uint16 regionFlags;                /*!< Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check. */
	/* 7082(2)   */ PACK uint16 regionMinX;                 /*!< Region - minimum value for X position. */
	/* 7084(2)   */ PACK uint16 regionMinY;                 /*!< Region - minimum value for Y position. */
	/* 7086(2)   */ PACK uint16 regionMaxX;                 /*!< Region - maximum value for X position. */
	/* 7088(2)   */ PACK uint16 regionMaxY;                 /*!< Region - maximum value for Y position. */
	/* 708A()    */ PACK uint8   unknown_708A[0x0008];
	/* 7092(2)   */ PACK uint16 variable_7092;              /*!< Parameter 1 for proc at 66B4. */
	/* 7094(2)   */ PACK uint16 variable_7094;              /*!< Paramerer 2 for proc at 66B4. */
	/* 7096(1)   */ PACK uint8  mouseInstalled;             /*!< If non-zero, the mouse callback is installed. */
	/* 7097(1)   */ PACK uint8  variable_7097;              /*!< ?? If non-zero, no mouse handling. */
	/* 7098(1)   */ PACK uint8  variable_7098;              /*!< ?? If zero, no mouse handling. */
	/* 7099(1)   */ PACK uint8  prevButtonState;            /*!< Previous mouse button state. */
	/* 709A()    */ PACK uint8   unknown_709A[0x0608];
	/* 76A2(4)   */ PACK uint8  randomSeed[4];              /*!< Seed for pseudo-random generator. */
	/* 76A6(2)   */ PACK uint16 variable_76A6;              /*!< ?? */
	/* 76A8(4)   */ PACK uint32 variable_76A8;              /*!< ?? */
	/* 76AC(4)   */ PACK uint32 variable_76AC;              /*!< ?? Also a tick counter.. */
	/* 76B0(4)   */ PACK uint32 tickGlobal;                 /*!< Global tick counter. Increase with 1 every tick. */
	/* 76B4(4)   */ PACK uint32 variable_76B4;              /*!< ?? */
	/* 76B8(2)   */ PACK uint16 variable_76B8;              /*!< ?? */
	/* 76BA(2)   */ PACK uint16 variable_76BA;              /*!< ?? */
	/* 76BC()    */ PACK uint8   unknown_76BC[0x0001];
	/* 76BD(256) */ PACK uint8  characterClass[256];        /*!< Flags: 0x01 - isspace, 0x02 - isdigit, 0x04 - isupper, 0x08 - islower, 0x10 - isxdigit && !isdigit, 0x20 - iscntrl, 0x40 - ispunct. */
	/* 77BD()    */ PACK uint8   unknown_77BD[0x0001];
	/* 77BE(4)   */ PACK csip32 variable_77BE;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77C2(4)   */ PACK csip32 variable_77C2;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77C6(4)   */ PACK csip32 variable_77C6;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77CA(400) */ PACK uint8  variable_77CA[20][20];      /*!< ?? File infos. */
	/* 795A(2)   */ PACK uint16 variable_795A;              /*!< Size of array of opened file status. */
	/* 795C(40)  */ PACK uint16 variable_795C[20];          /*!< Array of opened file status (0 when closed). */
	/* 7984(2)   */ PACK uint16 variable_7984;              /*!< ?? Something related to files. */
	/* 7986(2)   */ PACK uint16 variable_7986;              /*!< ?? Something related to files. */
	/* 7988(2)   */ PACK uint16 variable_7988;              /*!< ?? Something related to files. */
	/* 798A(1)   */ PACK uint8  variable_798A;              /*!< ?? Something related to files. */
	/* 798B()    */ PACK uint8   unknown_798B[0x0059];
	/* 79E4(4)   */ PACK uint32 variable_79E4;              /*!< ?? */
	/* 79E8()    */ PACK uint8   unknown_79E8[0x0080];
	/* 7A68(2)   */ PACK uint16 variable_7A68;              /*!< ?? Something related to required memory. */
	/* 7A6A(7)   */ PACK char   string_7A6A[7];             /*!< "(null)" NULL terminated. */
	/* 7A71()    */ PACK uint8   unknown_7A71[0x0061];
	/* 7AD2(50)  */ PACK char   string_7AD2[50];            /*!< "print scanf : floating point formats not linked\r\n" NULL terminated. */
	/* 7B04(2)   */ PACK uint16 variable_7B04;              /*!< ?? */
	/* 7B06(2)   */ PACK uint16 variable_7B06;              /*!< ?? */
	/* 7B08(4)   */ PACK csip32 variable_7B08;              /*!< ?? */
	/* 7B0C(4)   */ PACK csip32 variable_7B0C;              /*!< ?? */
	/* 7B10(2)   */ PACK uint16 variable_7B10;              /*!< ?? */
	/* 7B12(2)   */ PACK uint16 variable_7B12;              /*!< ?? */
	/* 7B14(2)   */ PACK uint16 variable_7B14;              /*!< ?? */
	/* 7B16(2)   */ PACK uint16 variable_7B16;              /*!< ?? */
	/* 7B18(2)   */ PACK uint16 variable_7B18;              /*!< ?? */
	/* 7B1A()    */ PACK uint8   unknown_7B1A[0x0002];
	/* 7B1C(2)   */ PACK uint16 variable_7B1C;              /*!< ?? variable_77CA[0] init state. */
	/* 7B1E(2)   */ PACK uint16 variable_7B1E;              /*!< ?? variable_77CA[1] init state. */
	/* 7B20()    */ PACK uint8   unknown_7B20[0x0048];
	/* 7B68(36)  */ PACK struct_7B68 variable_7B68[6];      /*!< ?? */
	/* 7B8C()    */ PACK uint8   unknown_7B8C[0x0416];      /*!< ?? 0x1F62 bytes cleared at start. */
	/* 7FA2(4)   */ PACK csip32 variable_7FA2;              /*!< ?? */
	/* 7FA6()    */ PACK uint8   unknown_7FA6[0x001E];
	/* 7FC4(2)   */ PACK uint16 donotuse_7FC4;
	/* 7FC6()    */ PACK uint8   unknown_7FC6[0x0090];
	/* 8056(4)   */ PACK csip32 variable_8056;              /*!< ?? */
	/* 805A(4)   */ PACK csip32 variable_805A;              /*!< ?? */
	/* 805E(4)   */ PACK csip32 variable_805E;              /*!< ?? */
	/* 8062(2)   */ PACK uint16 variable_8062;              /*!< ?? */
	/* 8064(4)   */ PACK csip32 introFnt;                   /*!< Pointer to content of intro.fnt. */
	/* 8068(2)   */ PACK uint16 variable_8068;              /*!< ?? */
	/* 806A(2)   */ PACK uint16 variable_806A;              /*!< ?? */
	/* 806C(2)   */ PACK uint16 variable_806C;              /*!< ?? */
	/* 806E(2)   */ PACK uint16 variable_806E;              /*!< ?? */
	/* 8070(2)   */ PACK uint16 variable_8070;              /*!< ?? */
	/* 8072(2)   */ PACK uint16 variable_8072;              /*!< ?? */
	/* 8074(2)   */ PACK uint16 variable_8074;              /*!< ?? */
	/* 8076(18)  */ PACK uint8  variable_8076[18];          /*!< ?? */
	/* 8088(18)  */ PACK uint8  variable_8088[18];          /*!< ?? */
	/* 809A(18)  */ PACK uint8  variable_809A[18];          /*!< ?? */
	/* 80AC(2)   */ PACK uint16 variable_80AC;              /*!< ?? */
	/* 80AE(2)   */ PACK uint16 variable_80AE;              /*!< ?? */
	/* 80B0(2)   */ PACK uint16 variable_80B0;              /*!< ?? */
	/* 80B2(2)   */ PACK uint16 savegameCountOnDisk;        /*!< Amount of savegames on disk. */
	/* 80B4(306) */ PACK uint8  variable_80B4[6][51];       /*!< ?? */
	/* 81E6(2)   */ PACK uint16 variable_81E6;              /*!< ?? */
	/* 81E8(3)   */ PACK uint8  variable_81E8[3];           /*!< ?? */
	/* 81EB(2)   */ PACK uint16 variable_81EB;              /*!< ?? */
	/* 81ED(4)   */ PACK csip32 variable_81ED;              /*!< ?? */
	/* 81F1(40)  */ PACK uint8  variable_81F1[40];          /*!< ?? */
	/* 8219()    */ PACK uint8   unknown_8219[0x0001];
	/* 821A(1)   */ PACK uint8  variable_821A;              /*!< ?? */
	/* 821B(1)   */ PACK uint8  variable_821B;              /*!< ?? */
	/* 821C(1)   */ PACK uint8  variable_821C;              /*!< ?? */
	/* 821D(4)   */ PACK csip32 variable_821D;              /*!< ?? Pointer to an element in an array of uint8. */
	/* 8221(4)   */ PACK csip32 variable_8221;              /*!< ?? Pointer to an element in an array of uint8. */
	/* 8225(2)   */ PACK uint16 variable_8225;              /*!< ?? */
	/* 8227(2)   */ PACK uint16 variable_8227;              /*!< ?? */
	/* 8229(2)   */ PACK uint16 variable_8229;              /*!< ?? */
	/* 822B(1)   */ PACK uint8  variable_822B;              /*!< ?? */
	/* 822C()    */ PACK uint8   unknown_822C[0x0056];
	/* 8282(14)  */ PACK char   stringFilename[14];         /*!< String buffer for emu_String_GenerateFilename(). */
	/* 8290(400) */ PACK uint16 variable_8290[200];         /*!< ?? */
	/* 8420(16)  */ PACK uint8  variable_8420[16];          /*!< ?? */
	/* 8430(4)   */ PACK csip32 structureInfoCurrent;       /*!< Current StructureInfo we are handling in the GameLoop. */
	/* 8434(4)   */ PACK csip32 structureCurrent;           /*!< Current Structure we are handling in the GameLoop. */
	/* 8438(6)   */ PACK uint8  unitFindStruct[6];          /*!< Default find struct used if noone given to emu_Unit_FindFirst/FindNext. */
	/* 843E(408) */ PACK csip32 unitArray[102];             /*!< Array with CS:IP of Unit, always gap-less. */
	/* 85D6(6)   */ PACK uint8  teamFindStruct[6];          /*!< Default find struct used if noone given to emu_Team_FindFirst/FindNext. */
	/* 85DC(64)  */ PACK csip32 teamArray[16];              /*!< Array with CS:IP of Team, always gap-less. */
	/* 861C(6)   */ PACK uint8  structureFindStruct[6];     /*!< Default find struct used if none given to emu_Structure_FindFirst/FindNext. */
	/* 8622(328) */ PACK csip32 structureArray[82];         /*!< Array with CS:IP of Structure, always gap-less. */
	/* 876A()    */ PACK uint8   unknown_876A[0x0050];
	/* 87BA(6)   */ PACK uint8  houseFindStruct[6];         /*!< Default find struct used if none given to emu_House_FindFirst/FindNext. */
	/* 87C0(24)  */ PACK csip32 houseArray[6];              /*!< Array with CS:IP of House, always gap-less. */
	/* 87D8(768) */ PACK char   variable_87D8[768];         /*!< ?? Buffer. */
	/* 8AD8(2)   */ PACK uint16 variable_8AD8;              /*!< ?? */
	/* 8ADA(2)   */ PACK uint16 variable_8ADA;              /*!< ?? */
	/* 8ADC(2)   */ PACK uint16 variable_8ADC;              /*!< ?? */
	/* 8ADE(16)  */ PACK uint8  variable_8ADE[16];          /*!< ?? Buffer. */
	/* 8AEE(240) */ PACK char   variable_8AEE[240];         /*!< ?? Buffer. */
	/* 8BDE()    */ PACK uint8   unknown_8BDE[0x011F];
	/* 8CFD(230) */ PACK Scenario scenario;                 /*!< Scenario data */
	/* 8DE3(2)   */ PACK uint16 variable_8DE3;              /*!< ?? */
	/* 8DE5(512) */ PACK uint8  variable_8DE5[512];         /*!< ?? array size is unsure. */
	/* 8FE5(512) */ PACK uint8  variable_8FE5[512];         /*!< ?? array size is unsure. */
	/* 91E5(512) */ PACK uint8  variable_91E5[512];         /*!< ?? array size is unsure. */
	/* 93E5(512) */ PACK uint8  variable_93E5[512];         /*!< ?? array size is unsure. */
	/* 95E5(512) */ PACK uint8  variable_95E5[512];         /*!< ?? array size is unsure. */
	/* 97E5(2)   */ PACK uint16 productionStringID;         /*!< StringID displayed on the production button. */
	/* 97E7(54)  */ PACK int16  starportAvailable[27];      /*!< Array of UNIT_MAX size, which contains which units are available via the starport. 0 means not available, -1 means sold-out. */
	/* 981D()    */ PACK uint8   unknown_981D[0x004F];
	/* 986C(1)   */ PACK uint8  ignoreInput;                /*!< Ignore mouse and keyboard if non zero. */
	/* 986D(1)   */ PACK uint8  variable_986D;              /*!< ?? */
	/* 986E(1)   */ PACK uint8  variable_986E;              /*!< ?? */
	/* 986F()    */ PACK uint8   unknown_986F[0x0013];
	/* 9882()    */ PACK uint8  variable_9882[0x005F];      /*!< ?? Buffer. */
	/* 98E1(10)  */ PACK DuneCfg config;                    /*!< Config data (dune.cfg). */
	/* 98EB()    */ PACK uint8   unknown_98EB[0x0040];
	/* 992B(2)   */ PACK uint16 variable_992B;              /*!< ?? */
	/* 992D(2)   */ PACK uint16 variable_992D;              /*!< ?? Y position of top of edit box.*/
	/* 992F(2)   */ PACK uint16 variable_992F;              /*!< ?? */
	/* 9931(2)   */ PACK uint16 variable_9931;              /*!< ?? Height of edit box. */
	/* 9933(2)   */ PACK uint16 variable_9933;              /*!< ?? A counter. */
	/* 9935(2)   */ PACK uint16 variable_9935;              /*!< ?? */
	/* 9937(2)   */ PACK uint16 variable_9937;              /*!< ?? */
	/* 9939(81)  */ PACK uint8  variable_9939[81];          /*!< ?? Buffer. */
	/* 998A(4)   */ PACK csip32 variable_998A;              /*!< ?? */
	/* 998E(97)  */ PACK uint8  variable_998E[97];          /*!< ?? Buffer. */
	/* 99EF(4)   */ PACK csip32 new8pFnt;                   /*!< Pointer to content of new8p.fnt. */
	/* 99F3(4)   */ PACK csip32 variable_99F3;              /*!< ?? Points to data about the loaded font.  */
} GCC_PACKED GlobalData;
MSVC_PACKED_END
assert_compile(sizeof(GlobalData) == 0x99F7);

extern uint16 emu_Global_GetIP(void *ptr, uint16 segment);
extern uint8 *emu_get_memorycsip(csip32 csip);

extern GlobalData *g_global;
extern bool g_dune2_enhanced;

#endif /* GLOBAL_H */
