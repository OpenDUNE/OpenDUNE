/* $Id$ */

#ifndef GLOBAL_H
#define GLOBAL_H

MSVC_PACKED_BEGIN
typedef struct struct_7B68 {
	/* 0000(1)   */ PACK uint8  variable_0000;              /*<! ?? */
	/* 0001(1)   */ PACK uint8  variable_0001;              /*<! ?? */
	/* 0002(4)   */ PACK csip32 variable_0002;              /*<! CS:IP of a function. */
} GCC_PACKED struct_7B68;
MSVC_PACKED_END
assert_compile(sizeof(struct_7B68) == 0x6);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about houses. This is the layout of
 *  that data.
 */
typedef struct HouseInfo {
	/* 0000(4)   */ PACK csip32 houseName;                  /*<! Pointer to name of house. */
	/* 0004()    */ PACK uint8   unknown_0004[0x0002];
	/* 0006(2)   */ PACK uint16 variable_0006;              /*<! ?? */
	/* 0008()    */ PACK uint8   unknown_0008[0x0012];
	/* 001A(4)   */ PACK csip32 voiceFilename;              /*<! Pointer to filename with the voices of the house. */
} GCC_PACKED HouseInfo;
MSVC_PACKED_END
assert_compile(sizeof(HouseInfo) == 0x1E);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is the raw information as in dune.cfg is stored. This
 *  is the layout of dune.cfg.
 */
typedef struct DuneCfg {
	/* 0000(1)   */ PACK uint8  variable_0000;              /*<! ?? */
	/* 0001(1)   */ PACK uint8  music;                      /*<! ?? Music Score Source. */
	/* 0002(1)   */ PACK uint8  sound;                      /*<! ?? Sound Effect Source. */
	/* 0003(1)   */ PACK uint8  digized;                    /*<! ?? Digitized Source. */
	/* 0004(1)   */ PACK bool   useMouse;                   /*<! Use Mouse. */
	/* 0005(1)   */ PACK bool   useXMS;                     /*<! Use Extended Memory. */
	/* 0006(1)   */ PACK uint8  variable_0006;              /*<! ?? */
	/* 0007(1)   */ PACK uint8  variable_0007;              /*<! ?? */
	/* 0008(1)   */ PACK uint8  language;                   /*<! 0:English, 1:French, 2:German, 3:Italian, 4:Spanish. */
	/* 0009(1)   */ PACK uint8  checksum;                   /*<! Used to check validity on config data. See emu_Config_Decode(). */
} GCC_PACKED DuneCfg;
MSVC_PACKED_END
assert_compile(sizeof(DuneCfg) == 0xA);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about the current loaded scenario.
 *  The is the layout of that data.
 */
typedef struct Scenario {
	/* 0000(2)   */ PACK uint16 variable_0000;              /*<! ?? Set to either 0x290 or 0x0. */
	/* 0002(2)   */ PACK uint16 winFlags;                   /*<! BASIC/WinFlags. */
	/* 0004(2)   */ PACK uint16 loseFlags;                  /*<! BASIC/LoseFlags. */
	/* 0006(4)   */ PACK uint32 mapSeed;                    /*<! MAP/Seed. */
	/* 000A(2)   */ PACK uint16 timeOut;                    /*<! BASIC/TimeOut. */
	/* 000C(14)  */ PACK char   pictureBriefing[14];        /*<! BASIC/BriefPicture. */
	/* 001A(14)  */ PACK char   pictureWin[14];             /*<! BASIC/WinPicture. */
	/* 0028(14)  */ PACK char   pictureLose[14];            /*<! BASIC/LosePicture. */
	/* 0036()    */ PACK uint8   unknown_0036[0x00B0];
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
	                                                         *   "\r\nZuerst muß das Setup-Programm betrieben werden.\r\n"
	                                                         *   "\r\nLe programme de configuration doit d'abord être lancé.\r\n"
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
	/* 182D()    */ PACK uint8   unknown_182D[0x0012];
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
	/* 18FE()    */ PACK uint8   unknown_18FE[0x0028];
	/* 1926(28)  */ PACK char   string_1926[28];            /*!< "Victory Controls for Player" NULL terminated. */
	/* 1942(5)   */ PACK char   string_1942[5];             /*!< "Imm." NULL terminated. */
	/* 1947(4)   */ PACK char   string_1947[4];             /*!< "End" NULL terminated. */
	/* 194B(7)   */ PACK char   string_194B[7];             /*!< "To Win" NULL terminated. */
	/* 1952(28)  */ PACK char   string_1952[28];            /*!< "Only friendly units remain:" NULL terminated. */
	/* 196E(26)  */ PACK char   string_196E[26];            /*!< "No friendly units remain:" NULL terminated. */
	/* 1988(21)  */ PACK char   string_1988[21];            /*!< "Spice quota reached:" NULL terminated. */
	/* 199D(11)  */ PACK char   string_199D[11];            /*!< "Timed out:" NULL terminated. */
	/* 19A8()    */ PACK uint8   unknown_19A8[0x0214];
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
	/* 2005()    */ PACK uint8   unknown_2005[0x01C8];
	/* 21CD()    */ PACK uint8   unknown_21CD[0x00E7];
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
	/* 2385(8)   */ PACK char   string_2385[8];             /*!< "INTRO7b" NULL terminated. */
	/* 238B(8)   */ PACK char   string_238B[8];             /*!< "INTRO8a" NULL terminated. */
	/* 2395(8)   */ PACK char   string_2395[8];             /*!< "INTRO8b" NULL terminated. */
	/* 239B(8)   */ PACK char   string_239B[8];             /*!< "INTRO8c" NULL terminated. */
	/* 23A2(8)   */ PACK char   string_23A2[7];             /*!< "INTRO5" NULL terminated. */
	/* 23A8(8)   */ PACK char   string_23A8[6];             /*!< "INTRO" NULL terminated. */
	/* 23B0(13)  */ PACK char   string_23B0[13];            /*!< "WESTWOOD.PAL" NULL terminated. */
	/* 23BD(13)  */ PACK char   string_23BD[13];            /*!< "WESTWOOD.WSA" NULL terminated. */
	/* 23CA(4)   */ PACK char   string_23CA[4];             /*!< "AND" NULL terminated. */
	/* 23CE(11)  */ PACK char   string_23CE[11];            /*!< "VIRGIN.CPS" NULL terminated. */
	/* 23D9()    */ PACK uint8   unknown_23D9[0x019B];
	/* 2574(11)  */ PACK char   string_2574[11];            /*!< "STATIC.WSA" NULL terminated. */
	/* 257F()    */ PACK uint8   unknown_257F[0x0007];
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
	/* 264A()    */ PACK uint8   unknown_264A[0x046D];
	/* 2AB7(12)  */ PACK char   string_2AB7[12];            /*!< "OPTIONS.CFG" NULL terminated. */
	/* 2AC3(14)  */ PACK char   string_2AC3[14];            /*!< "_SAVE%03d.DAT" NULL terminated. */
	/* 2AD1()    */ PACK uint8   unknown_2AD1[0x0004];
	/* 2AD5(9)   */ PACK char   string_2AD5[9];             /*!< "\r\n[%s]\r\n" NULL terminated. */
	/* 2ADE(8)   */ PACK char   string_2ADE[8];             /*!< "%s=%d\r\n" NULL terminated. */
	/* 2AE6(5)   */ PACK char   string_2AE6[8];             /*!< "%s=%s\r\n" NULL terminated. */
	/* 2AEE(5)   */ PACK char   string_2AEE[5];             /*!< "[%s]" NULL terminated. */
	/* 2AF3()    */ PACK uint8   unknown_2AF3[0x001F];
	/* 2B12(12)  */ PACK char   string_2B12[12];            /*!< "MAPMACH.CPS" NULL terminated. */
	/* 2B1E(11)  */ PACK char   string_2B1E[11];            /*!< "PLANET.CPS" NULL terminated. */
	/* 2B29(12)  */ PACK char   string_2B29[12];            /*!< "DUNEMAP.CPS" NULL terminated. */
	/* 2B35(12)  */ PACK char   string_2B35[12];            /*!< "DUNERGN.CPS" NULL terminated. */
	/* 2B41(8)   */ PACK char   string_2B41[8];             /*!< "GROUP%d" NULL terminated. */
	/* 2B49(6)   */ PACK char   string_2B49[6];             /*!< "REG%d" NULL terminated. */
	/* 2B50(12)  */ PACK char   string_2B50[12];            /*!< "%d,%d,%d,%d" NULL terminated. */
	/* 2B5C(7)   */ PACK char   string_2B5C[7];             /*!< "PIECES" NULL terminated. */
	/* 2B63(8)   */ PACK char   string_2B63[8];             /*!< "%sTXT%d" NULL terminated. */
	/* 2B6B(11)  */ PACK char   string_2B6B[11];            /*!< "RGNCLK.CPS" NULL terminated. */
	/* 2B76(11)  */ PACK char   string_2B76[11];            /*!< "PIECES.SHP" NULL terminated. */
	/* 2B81(11)  */ PACK char   string_2B81[11];            /*!< "ARROWS.SHP" NULL terminated. */
	/* 2B8C(13)  */ PACK char   string_2B8C[13];            /*!< "REGION%c.INI" NULL terminated. */
	/* 2B99(5)   */ PACK char   string_2B99[5];             /*!< "INFO" NULL terminated. */
	/* 2B9E(14)  */ PACK char   string_2B9E[14];            /*!< "TOTAL REGIONS" NULL terminated. */
	/* 2BAB()    */ PACK uint8   unknown_2BAB[0x001F];
	/* 2BCA(19)  */ PACK char   string_2BCA[19];            /*!< "No more scenarios!" NULL terminated. */
	/* 2BDD(7)   */ PACK char   string_2BDD[7];             /*!< "TEXT%c" NULL terminated. */
	/* 2BE4(7)   */ PACK char   string_2BE4[7];             /*!< "HERALD" NULL terminated. */
	/* 2BEB(10)  */ PACK char   string_2BEB[10];            /*!< "FHARK.WSA" NULL terminated. */
	/* 2BF5(10)  */ PACK char   string_2BF5[10];            /*!< "FARTR.WSA" NULL terminated. */
	/* 2BFF(11)  */ PACK char   string_2BFF[11];            /*!< "FORDOS.WSA" NULL terminated. */
	/* 2C0A(5)   */ PACK char   string_2C0A[5];             /*!< "MISC" NULL terminated. */
	/* 2C0F()    */ PACK uint8   unknown_2C0F[0x09D9];
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
	/* 37B6(2)   */ PACK uint16 language;                   /*!< 0:English, 1:French, 2:German, 3:Italian, 4:Spanish. */
	/* 37B8()    */ PACK uint8   unknown_37B8[0x0040];
	/* 37F8(180) */ PACK HouseInfo houseInfo[6];            /*!< Information about the houses. */
	/* 38AC()    */ PACK uint8   unknown_38AC[0x0004];
	/* 38B0(2)   */ PACK uint16 scenarioID;                 /*!< ID of current loaded Scenario. */
	/* 38B2(2)   */ PACK uint16 variable_38B2;              /*!< ?? */
	/* 38B4(2)   */ PACK uint16 playerCredits;              /*!< Credits currently owned by player. */
	/* 38B6()    */ PACK uint8   unknown_38B4[0x0006];
	/* 38BC(2)   */ PACK uint16 variable_38BC;              /*!< ?? If non-zero, Unit_Find/Building_Find skips Unit/Buildings with flag 0x4 off (being-built flag?). */
	/* 38BE()    */ PACK uint8   unknown_38BE[0x0008];
	/* 38C6(2)   */ PACK uint16 variable_38C6;              /*!< ?? */
	/* 38C8(2)   */ PACK uint16 variable_38C8;              /*!< ?? */
	/* 38CA()    */ PACK uint8   unknown_38CA[0x0010];
	/* 38DA(4)   */ PACK csip32 variable_38DA;              /*!< ?? */
	/* 38DE(2)   */ PACK uint16 variable_38DE;              /*!< ?? Max length of variable_38DA memory field. */
	/* 38E0(2)   */ PACK uint16 variable_38E0;              /*!< ?? Current used length of variable_38DA memory field. */
	/* 38E2()    */ PACK uint8   unknown_38E2[0x0020];
	/* 3902(2)   */ PACK uint16 variable_3902;              /*!< ?? */
	/* 3904()    */ PACK uint8   unknown_3904[0x00EA];
	/* 39EE(4)   */ PACK csip32 variable_39EE;              /*!< ?? Pointer to an array of building information. */
	/* 39F2()    */ PACK uint8   unknown_39F2[0x000A];
	/* 39FC(2)   */ PACK uint16 variable_39FC;              /*!< ?? */
	/* 39FE(2)   */ PACK uint16 variable_39FE;              /*!< ?? */
	/* 3A00(2)   */ PACK uint16 variable_3A00;              /*!< ?? */
	/* 3A02(2)   */ PACK uint16 variable_3A02;              /*!< ?? */
	/* 3A04()    */ PACK uint8   unknown_3A04[0x000A];
	/* 3A0E(2)   */ PACK uint16 variable_3A0E;              /*!< ?? */
	/* 3A10(2)   */ PACK uint16 variable_3A10;              /*!< ?? */
	/* 3A12()    */ PACK uint8   unknown_3A12[0x001A];
	/* 3A2C(2)   */ PACK uint16 variable_3A2C;              /*!< ?? */
	/* 3A2E(2)   */ PACK uint16 variable_3A2E;              /*!< ?? */
	/* 3A30(2)   */ PACK uint16 variable_3A30;              /*!< ?? */
	/* 3A32(2)   */ PACK uint16 variable_3A32;              /*!< ?? */
	/* 3A34()    */ PACK uint8   unknown_3A34[0x0004];
	/* 3A38(2)   */ PACK uint16 playerHouseID;              /*!< The House the player is controlling. */
	/* 3A3A(4)   */ PACK csip32 playerHouse;                /*!< Pointer to the house the player is controlling. */
	/* 3A3E()    */ PACK uint8   unknown_3A3A[0x00F6];
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
	/* 3C46(4)   */ PACK csip32 variable_3C46;              /*!< ?? */
	/* 3C4A()    */ PACK uint8   unknown_3C4E[0x0582];
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
	/* 42EB()    */ PACK uint8   unknown_42EB[0x2017];
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
	/* 7A6A()    */ PACK uint8   unknown_7A6A[0x009C];
	/* 7B06(2)   */ PACK uint16 variable_7B06;              /*!< ?? */
	/* 7B08(4)   */ PACK csip32 variable_7B08;              /*!< ?? */
	/* 7B0C(4)   */ PACK csip32 variable_7B0C;              /*!< ?? */
	/* 7B10(2)   */ PACK uint16 variable_7B10;              /*!< ?? */
	/* 7B12(2)   */ PACK uint16 variable_7B12;              /*!< ?? */
	/* 7B14(2)   */ PACK uint16 variable_7B14;              /*!< ?? */
	/* 7B16(2)   */ PACK uint16 variable_7B16;              /*!< ?? */
	/* 7B18(2)   */ PACK uint16 variable_7B18;              /*!< ?? */
	/* 7B1A()    */ PACK uint8   unknown_7B1A[0x004E];
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
	/* 87D8()    */ PACK uint8   unknown_87D8[0x0525];
	/* 8CFD(230) */ PACK Scenario scenario;                 /*!< Scenario data */
	/* 8DE3()    */ PACK uint8   unknown_8DE3[0x0A89];
	/* 986C(1)   */ PACK uint8  variable_986C;              /*!< ?? */
	/* 986D()    */ PACK uint8   unknown_986D[0x0074];
	/* 98E1(10)  */ PACK DuneCfg config;                    /*!< Config data. */
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
