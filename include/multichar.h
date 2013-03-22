#ifndef MULTICHAR_H
#define MULTICHAR_H

#define FOURCC(A,B,C,D) ((A << 24) | (B << 16) | (C << 8) | D)

enum {
	CC_BLDG = FOURCC('B','L','D','G'),
	CC_CAT  = FOURCC('C','A','T',' '),
	CC_DATA = FOURCC('D','A','T','A'),
	CC_EVNT = FOURCC('E','V','N','T'),
	CC_FORM = FOURCC('F','O','R','M'),
	CC_INFO = FOURCC('I','N','F','O'),
	CC_MAP  = FOURCC('M','A','P',' '),
	CC_NAME = FOURCC('N','A','M','E'),
	CC_ORDR = FOURCC('O','R','D','R'),
	CC_PLYR = FOURCC('P','L','Y','R'),
	CC_RPAL = FOURCC('R','P','A','L'),
	CC_RTBL = FOURCC('R','T','B','L'),
	CC_SCEN = FOURCC('S','C','E','N'),
	CC_SINF = FOURCC('S','I','N','F'),
	CC_SSET = FOURCC('S','S','E','T'),
	CC_TEAM = FOURCC('T','E','A','M'),
	CC_TEXT = FOURCC('T','E','X','T'),
	CC_UNIT = FOURCC('U','N','I','T'),
	CC_XMID = FOURCC('X','M','I','D'),

	/* OpenDUNE extensions. */
	CC_ODUN = FOURCC('O','D','U','N')  /* OpenDUNE Unit New. */
};

#undef MULTICHAR

#endif
