/* $Id$ */

#ifndef GLOBAL_H
#define GLOBAL_H

MSVC_PACKED_BEGIN
typedef struct struct_7B68 {
	/* 0(1) */ PACK uint8  variable_0;  /*<! ?? */
	/* 1(1) */ PACK uint8  variable_1;  /*<! ?? */
	/* 2(4) */ PACK csip32 variable_2;  /*<! CS:IP of a function. */
} GCC_PACKED struct_7B68;
MSVC_PACKED_END
assert_compile(sizeof(struct_7B68) == 0x6);

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
	/* 006B()    */ PACK uint8   unknown_006B[0x000A];
	/* 0075(2)   */ PACK uint16 environmentSize;            /*!< Size of environment in bytes. */
	/* 0077(2)   */ PACK uint16 environmentSegment;         /*!< Environment segment. */
	/* 0079(2)   */ PACK uint16 variable_0079;              /*!< ?? Something related to number of environment variables. */
	/* 007B(2)   */ PACK uint16 PSP;                        /*!< Program Segment Prefix. */
	/* 007D(1)   */ PACK uint8  majorDOSVersion;            /*!< DOS major version. */
	/* 007E(1)   */ PACK uint8  minorDOSVersion;            /*!< DOS minor version. */
	/* 007F(2)   */ PACK uint16 variable_007F;              /*!< ?? Something related to files. */
	/* 0081(4)   */ PACK uint32 systemTime;                 /*!< System time. */
	/* 0085()    */ PACK uint8   unknown_0085[0x0004];
	/* 0089(2)   */ PACK uint16 variable_0089;              /*!< ?? Something related to memory. */
	/* 008B()    */ PACK uint8   unknown_008B[0x0002];
	/* 008D(2)   */ PACK uint16 variable_008D;              /*!< ?? Something related to memory. */
	/* 008F()    */ PACK uint8   unknown_008F[0x0002];
	/* 0091(2)   */ PACK uint16 memorySize;                 /*!< Size of memory in paragraphs. */
	/* 0093()    */ PACK uint8   unknown_0093[0x0009];
	/* 009C(2)   */ PACK uint16 variable_009C;              /*!< ?? */
	/* 009E(2)   */ PACK uint16 variable_009E;              /*!< ?? */
	/* 00A0(2)   */ PACK uint16 variable_00A0;              /*!< ?? */
	/* 00A2(2)   */ PACK uint16 variable_00A2;              /*!< ?? */
	/* 00A4()    */ PACK uint8   unknown_00A4[0x0004];
	/* 00A8(10)  */ PACK char   string_00A8[10];            /*!< "new8p.fnt" NULL terminated. */
	/* 00B2(10)  */ PACK char   string_00B2[10];            /*!< "DUNE2.EXE" NULL terminated. */
	/* 00BC(10)  */ PACK char   string_00BC[9];             /*!< "DUNE.CFG" NULL terminated. */
	/* 00C5(152) */ PACK char   string_00C5[152];           /*!< "\r\nThe setup program must be run first.\r\n"
	                                                         *   "\r\nZuerst muá das Setup-Programm betrieben werden.\r\n"
	                                                         *   "\r\nLe programme de configuration doit d'abord ˆtre lanc‚.\r\n"
	                                                         *   "\r\n" NULL terminated. */
	/* 015D(36)  */ PACK char   string_015D[36];            /*!< "Insufficient memory by %ld bytes.\r\n" NULL terminated. */
	/* 0181(29)  */ PACK char   string_0181[29];            /*!< "Unrecognized graphic mode!\r\n" NULL terminated. */
	/* 019E(121) */ PACK char   string_019D[121];           /*!< "Program in memory: %ld\n"
	                                                         *   "Buffer allocations: %ld\n"
	                                                         *   "Misc allocations: %ld\"
	                                                         *   "Spare RAM: %ld\"
	                                                         *   "DOS prompt memory free must be %ld.\n" NULL terminated. */
	/* 0217()    */ PACK uint8   unknown_0217[0x0F3B];
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
	/* 1640()    */ PACK uint8   unknown_1640[0x0861];
	/* 1EA1(9)   */ PACK char   string_1EA1[9];             /*!< "MEANWHIL" NULL terminated. */
	/* 1EAA(8)   */ PACK char   string_1EAA[8];             /*!< "EFINALA" NULL terminated. */
	/* 1EB2(15)  */ PACK char   string_1EB2[15];            /*!< "SCEN%c%03d.INI" NULL terminated. */
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
	/* 2005()    */ PACK uint8   unknown_2005[0x02AF];
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
	/* 237C(8)   */ PACK char   string_237B[8];             /*!< "INTRO7a" NULL terminated. */
	/* 2384(8)   */ PACK char   string_2385[8];             /*!< "INTRO7b" NULL terminated. */
	/* 238C(8)   */ PACK char   string_238B[8];             /*!< "INTRO8a" NULL terminated. */
	/* 2394(8)   */ PACK char   string_2395[8];             /*!< "INTRO8b" NULL terminated. */
	/* 239C(8)   */ PACK char   string_239B[8];             /*!< "INTRO8c" NULL terminated. */
	/* 23A3(8)   */ PACK char   string_23A2[7];             /*!< "INTRO5" NULL terminated. */
	/* 23A9(8)   */ PACK char   string_23A8[6];             /*!< "INTRO" NULL terminated. */
	/* 23B1(13)  */ PACK char   string_23B0[13];            /*!< "WESTWOOD.PAL" NULL terminated. */
	/* 23BE(13)  */ PACK char   string_23BD[13];            /*!< "WESTWOOD.WSA" NULL terminated. */
	/* 23CB(4)   */ PACK char   string_23CA[4];             /*!< "AND" NULL terminated. */
	/* 23CF(11)  */ PACK char   string_23CE[11];            /*!< "VIRGIN.CPS" NULL terminated. */
	/* 23D9()    */ PACK uint8   unknown_23D9[0x019B];
	/* 2574(11)  */ PACK char   string_2574[11];            /*!< "STATIC.WSA" NULL terminated. */
	/* 257F()    */ PACK uint8   unknown_257F[0x0007];
	/* 2586(13)  */ PACK char   string_2586[13];            /*!< "MENTAT%c.CPS" NULL terminated. */
	/* 2593(9)   */ PACK char   string_2593[9];             /*!< "BENE.PAL" NULL terminated. */
	/* 259C(8)   */ PACK char   string_259C[8];             /*!< "IBM.PAL" NULL terminated. */
	/* 25A4()    */ PACK uint8   unknown_25A4[0x1044];
	/* 35E8(4)   */ PACK csip32 unitStartPos;               /*!< CS:IP of Unit array. */
	/* 35EC(2)   */ PACK uint16 unitCount;                  /*!< Amount of Units on the map. */
	/* 35EE(4)   */ PACK csip32 airUnitStartPos;            /*!< CS:IP of AirUnit array. */
	/* 35F2(2)   */ PACK uint16 airUnitCount;               /*!< Amount of AirUnits on the map. */
	/* 35F4(4)   */ PACK csip32 buildingStartPos;           /*!< CS:IP of Building array. */
	/* 35F8(2)   */ PACK uint16 buildingCount;              /*!< Amount of Buildings on the map. */
	/* 35FA(4)   */ PACK csip32 houseStartPos;              /*!< CS:IP of house array. */
	/* 35FE(2)   */ PACK uint16 houseCount;                 /*!< Amount of houses on the map. */
	/* 3600()    */ PACK uint8   unknown_3600[0x01A0];
	/* 37A0(2)   */ PACK uint16 variable_37A0;              /*!< ?? */
	/* 37A2()    */ PACK uint8   unknown_37A2[0x0014];
	/* 37B6(2)   */ PACK uint16 variable_37B6;              /*!< ?? */
	/* 37B8()    */ PACK uint8   unknown_37B8[0x0038];
	/* 37F0(180) */ PACK uint8  variable_37F0[180];         /*!< ?? It is an array of HOUSE_INDEX_MAX size at most (possible just 3), with a struct size of 0x1E. Position might be wrong. */
	/* 38A4()    */ PACK uint8   unknown_38A4[0x000C];
	/* 38B0(2)   */ PACK uint16 variable_38B0;              /*!< ?? */
	/* 38B2(2)   */ PACK uint16 variable_38B2;              /*!< ?? */
	/* 38B4()    */ PACK uint8   unknown_38B4[0x0008];
	/* 38BC(2)   */ PACK uint16 variable_38BC;              /*!< ?? If non-zero, Unit_Find/Building_Find skips Unit/Buildings with flag 0x4 off (being-built flag?). */
	/* 38BE()    */ PACK uint8   unknown_38BE[0x0008];
	/* 38C6(2)   */ PACK uint16 variable_38C6;              /*!< ?? */
	/* 38C8(2)   */ PACK uint16 variable_38C8;              /*!< ?? */
	/* 38CA()    */ PACK uint8   unknown_38CA[0x0010];
	/* 38DA(4)   */ PACK csip32 variable_38DA;              /*!< ?? */
	/* 38DE(2)   */ PACK uint16 variable_38DE;              /*!< ?? */
	/* 38E0(2)   */ PACK uint16 variable_38E0;              /*!< ?? */
	/* 38E2()    */ PACK uint8   unknown_38E2[0x0020];
	/* 3902(2)   */ PACK uint16 variable_3902;              /*!< ?? */
	/* 3904()    */ PACK uint8   unknown_3904[0x00EA];
	/* 39EE(4)   */ PACK csip32 variable_39EE;              /*!< ?? Pointer to an array of building information */
	/* 39F2()    */ PACK uint8   unknown_39F2[0x001C];
	/* 3A0E(2)   */ PACK uint16 variable_3A0E;              /*!< ?? */
	/* 3A10(2)   */ PACK uint16 variable_3A10;              /*!< ?? */
	/* 3A12()    */ PACK uint8   unknown_3A12[0x001A];
	/* 3A2C(2)   */ PACK uint16 variable_3A2C;              /*!< ?? */
	/* 3A2E(2)   */ PACK uint16 variable_3A2E;              /*!< ?? */
	/* 3A30(2)   */ PACK uint16 variable_3A30;              /*!< ?? */
	/* 3A32(2)   */ PACK uint16 variable_3A32;              /*!< ?? */
	/* 3A34()    */ PACK uint8   unknown_3A34[0x0004];
	/* 3A38(2)   */ PACK uint16 playerHouseID;              /*!< The House the player is controlling. */
	/* 3A3A()    */ PACK uint8   unknown_3A3A[0x00FA];
	/* 3B34(2)   */ PACK uint16 variable_3B34;              /*!< ?? */
	/* 3B36(2)   */ PACK uint16 variable_3B36;              /*!< ?? */
	/* 3B38()    */ PACK uint8   unknown_3B38[0x0018];
	/* 3B50(2)   */ PACK uint16 variable_3B50;              /*!< ?? */
	/* 3B52(2)   */ PACK uint16 variable_3B52;              /*!< ?? */
	/* 3B54()    */ PACK uint8   unknown_3B54[0x00DE];
	/* 3C32(4)   */ PACK csip32 variable_3C32;              /*!< ?? */
	/* 3C36(4)   */ PACK csip32 variable_3C36;              /*!< ?? */
	/* 3C3A(4)   */ PACK csip32 variable_3C3A;              /*!< ?? */
	/* 3C3E(4)   */ PACK csip32 variable_3C3E;              /*!< ?? */
	/* 3C42(4)   */ PACK csip32 variable_3C42;              /*!< ?? */
	/* 3C46(2)   */ PACK csip32 variable_3C46;              /*!< ?? */
	/* 3C48(2)   */ PACK csip32 variable_3C48;              /*!< ?? */
	/* 3C4A()    */ PACK uint8   unknown_3C4A[0x26B4];
	/* 6302(2)   */ PACK uint16 variable_6302;              /*!< ?? */
	/* 6304()    */ PACK uint8   unknown_6304[0x000C];
	/* 6310(2)   */ PACK uint16 variable_6310;              /*!< ?? */
	/* 6312(2)   */ PACK uint16 variable_6312;              /*!< ?? */
	/* 6314()    */ PACK uint8   unknown_6314[0x0030];
	/* 6344(2)   */ PACK uint16 variable_6344;              /*!< ?? */
	/* 6346()    */ PACK uint8   unknown_6346[0x000C];
	/* 6352(2)   */ PACK uint16 variable_6352;              /*!< ?? */
	/* 6354(2)   */ PACK uint16 variable_6354;              /*!< ?? */
	/* 6356()    */ PACK uint8   unknown_6356[0x0016];
	/* 636C(2)   */ PACK uint16 variable_636C;              /*!< ?? */
	/* 636E()    */ PACK uint8   unknown_636E[0x0004];
	/* 6372(2)   */ PACK uint16 variable_6372;              /*!< ?? */
	/* 6374()    */ PACK uint8   unknown_6374[0x0028];
	/* 639C(2)   */ PACK uint16 variable_639C;              /*!< ?? */
	/* 639E()    */ PACK uint8   unknown_639E[0x000C];
	/* 63AA(2)   */ PACK uint16 variable_63AA;              /*!< ?? 63AA and 63AC are 1 element of an array of unknown size. */
	/* 63AC(2)   */ PACK uint16 variable_63AC;              /*!< ?? 63AA and 63AC are 1 element of an array of unknown size. */
	/* 63AE()    */ PACK uint8   unknown_63AE[0x0018];
	/* 63C6(2)   */ PACK uint16 variable_63C6;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63C8(2)   */ PACK uint16 variable_63C8;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63CA()    */ PACK uint8   unknown_63CA[0x0004];
	/* 63CE(2)   */ PACK uint16 variable_63CE;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63D0(2)   */ PACK uint16 variable_63D0;              /*!< ?? 63C6, 63C8, 63CE and 63D0 are 1 element of an array of unknown size.*/
	/* 63D2()    */ PACK uint8   unknown_63D2[0x009C];
	/* 646E(2)   */ PACK uint16 variable_646E;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 6470(2)   */ PACK uint16 variable_6470;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 6472()    */ PACK uint8   unknown_6472[0x0004];
	/* 6476(2)   */ PACK uint16 variable_6476;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 6478(2)   */ PACK uint16 variable_6478;              /*!< ?? 646E, 6470, 6476 and 6478 are 1 element of an array of unknown size. */
	/* 647A()    */ PACK uint8   unknown_647A[0x022A];
	/* 66A4(4)   */ PACK csip32 callbackAfterMouse;         /*!< CS:IP of routine called after mouse change. */
	/* 66A8(12)  */ PACK uint8   unknown_66A8[0x000C];
	/* 66B4(4)   */ PACK csip32 callbackBeforeMouse;        /*!< CS:IP of routine called before mouse change. */
	/* 66B8()    */ PACK uint8   unknown_66B8[0x05C0];
	/* 6C78(2)   */ PACK uint16 snapX;                      /*!< Snap mouse to grid, x-axis. */
	/* 6C7A(2)   */ PACK uint16 snapY;                      /*!< Snap mouse to grid, y-axis. */
	/* 6C7C(2)   */ PACK uint16 snapGreyX;                  /*!< Grey zone for snapping, x-axis. */
	/* 6C7E(2)   */ PACK uint16 snapGreyY;                  /*!< Grey zone for snapping, y-axis. */
	/* 6C80()    */ PACK uint8   unknown_6C80[0x0053];
	/* 6CD3(2)   */ PACK uint16 variable_6CD3;              /*!< ?? */
	/* 6CD5(2)   */ PACK uint16 variable_6CD5;              /*!< ?? */
	/* 6CD7(2)   */ PACK uint16 variable_6CD7;              /*!< ?? */
	/* 6CD9(2)   */ PACK uint16 variable_6CD9;              /*!< ?? */
	/* 6CDB(2)   */ PACK uint16 variable_6CDB;              /*!< ?? */
	/* 6CDD(2)   */ PACK uint16 variable_6CDD;              /*!< ?? */
	/* 6CDF(2)   */ PACK uint16 variable_6CDF;              /*!< ?? */
	/* 6CE1(2)   */ PACK uint16 variable_6CE1;              /*!< ?? */
	/* 6CE3(2)   */ PACK uint16 variable_6CE3;              /*!< ?? */
	/* 6CE5(2)   */ PACK uint16 variable_6CE5;              /*!< ?? */
	/* 6CE7(2)   */ PACK uint16 variable_6CE7;              /*!< ?? */
	/* 6CE9(2)   */ PACK uint16 variable_6CE9;              /*!< ?? */
	/* 6CEB(2)   */ PACK uint16 variable_6CEB;              /*!< ?? */
	/* 6CED(2)   */ PACK uint16 variable_6CED;              /*!< ?? */
	/* 6CEF(2)   */ PACK uint16 variable_6CEF;              /*!< ?? */
	/* 6CF1(2)   */ PACK uint16 variable_6CF1;              /*!< ?? */
	/* 6CF3(2)   */ PACK uint16 variable_6CF3;              /*!< ?? */
	/* 6CF5(2)   */ PACK uint16 variable_6CF5;              /*!< ?? */
	/* 6CF7(2)   */ PACK uint16 variable_6CF7;              /*!< ?? */
	/* 6CF9(2)   */ PACK uint16 variable_6CF9;              /*!< ?? */
	/* 6CFB()    */ PACK uint8   unknown_6CFB[0x030F];
	/* 700A(2)   */ PACK uint16 variable_700A;              /*!< ?? */
	/* 700C(2)   */ PACK uint16 variable_700C;              /*!< ?? */
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
	/* 7064(4)   */ PACK uint8   unknown_7064[0x0004];
	/* 7068(2)   */ PACK uint16 doubleWidth;                /*!< If non-zero, the X-position given by mouse is twice the real value. */
	/* 706A(2)   */ PACK uint16 variable_706A;              /*!< ?? If non-zero, mouse movement is not registered. */
	/* 706C(2)   */ PACK uint8   unknown_706C[0x0002];
	/* 706E(2)   */ PACK uint16 variable_706E;              /*!< ?? */
	/* 7070(2)   */ PACK uint8   unknown_7070[0x0002];
	/* 7072(2)   */ PACK uint16 variable_7072;              /*!< ?? */
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
	/* 709A()    */ PACK uint8   unknown_709A[0x060C];
	/* 76A6(2)   */ PACK uint16 variable_76A6;              /*!< ?? */
	/* 76A8()    */ PACK uint8   unknown_76A8[0x0012];
	/* 76BA(2)   */ PACK uint16 variable_76BA;              /*!< ?? */
	/* 76BC()    */ PACK uint8   unknown_76BC[0x0102];
	/* 77BE(4)   */ PACK csip32 variable_77BE;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77C2(4)   */ PACK csip32 variable_77C2;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77C6(4)   */ PACK csip32 variable_77C6;              /*!< ?? CS:IP of a function called in emu_Terminate(). */
	/* 77CA()    */ PACK uint8   unknown_77CA[0x0190];
	/* 795A(2)   */ PACK uint16 variable_795A;              /*!< Size of array of opened file status. */
	/* 795C(40)  */ PACK uint16 variable_795C[20];          /*!< Array of opened file status (0 when closed). */
	/* 7984(2)   */ PACK uint16 variable_7984;              /*!< ?? Something related to files. */
	/* 7986(2)   */ PACK uint16 variable_7986;              /*!< ?? Something related to files. */
	/* 7988(2)   */ PACK uint16 variable_7988;              /*!< ?? Something related to files. */
	/* 798A(1)   */ PACK uint8  variable_798A;              /*!< ?? Something related to files. */
	/* 798B()    */ PACK uint8   unknown_798B[0x00DD];
	/* 7A68(2)   */ PACK uint16 variable_7A68;              /*!< ?? Something related to required memory. */
	/* 7A6A()    */ PACK uint8   unknown_7A6A[0x00FE];
	/* 7B68(36)  */ PACK struct_7B68 variable_7B68[6];      /*!< ?? */
	/* 7B8C()    */ PACK uint8   unknown_7B8C[0x08AC];      /*!< ?? 0x1F62 bytes cleared at start. */
	/* 8438(6)   */ PACK uint8  unitFindStruct[6];          /*!< Default find struct used if noone given to emu_Unit_FindFirst/FindNext. */
	/* 843E(408) */ PACK csip32 unitArray[102];             /*!< Array with CS:IP of AirUnit, always gap-less. */
	/* 85D6(6)   */ PACK uint8  airUnitFindStruct[6];       /*!< Default find struct used if noone given to emu_AirUnit_FindFirst/FindNext. */
	/* 85DC(64)  */ PACK csip32 airUnitArray[16];           /*!< Array with CS:IP of AirUnit, always gap-less. */
	/* 861C(6)   */ PACK uint8  buildingFindStruct[6];      /*!< Default find struct used if none given to emu_Building_FindFirst/FindNext. */
	/* 8622(328) */ PACK csip32 buildingArray[82];          /*!< Array with CS:IP of Building, always gap-less. */
	/* 876A()    */ PACK uint8   unknown_876A[0x0050];
	/* 87BA(6)   */ PACK uint8  houseFindStruct[6];         /*!< Default find struct used if none given to emu_House_FindFirst/FindNext. */
	/* 87C0(24)  */ PACK csip32 houseArray[6];              /*!< Array with CS:IP of House, always gap-less. */
	/* 87D8()    */ PACK uint8   unknown_87D8[0x1094];
	/* 986C(1)   */ PACK uint8  variable_986C;              /*!< ?? */
	/* 986D()    */ PACK uint8   unknown_986D[0x0074];
	/* 98E1(10)  */ PACK uint8  variable_98E1[10];          /*!< Config data. */
	/* 98EB()    */ PACK uint8   unknown_98EB[0x009F];
	/* 998A(4)   */ PACK csip32 variable_998A;              /*!< ?? */
	/* 998E()    */ PACK uint8   unknown_998E[0x0061];
	/* 99EF(4)   */ PACK csip32 variable_99EF;              /*!< ?? */
	/* 99F3(4)   */ PACK csip32 variable_99F3;              /*!< ?? */
} GCC_PACKED GlobalData;
MSVC_PACKED_END
assert_compile(sizeof(GlobalData) == 0x99F7);

extern uint16 emu_Global_GetIP(void *ptr, uint16 segment);

extern GlobalData *g_global;

#endif /* GLOBAL_H */
