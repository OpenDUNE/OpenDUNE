/* $Id$ */

/** @file src/wsa.h WSA definitions. */

#ifndef WSA_H
#define WSA_H

extern uint16 WSA_GetFrameCount(void *wsa);
extern uint16 WSA_GotoNextFrame(void *wsa, uint16 frame, csip32 displayBuffer);
extern csip32 WSA_LoadFile(char *filename, csip32 buffer, uint32 bufferSizeCurrent, uint16 reserveDisplayFrame, csip32 bufferSpecial);
extern void WSA_Unload(csip32 buffer);
extern uint16 WSA_DisplayFrame(csip32 wsa, uint16 frameNext, uint16 posX, uint16 posY, uint16 screenID);

#endif /* WSA_H */
