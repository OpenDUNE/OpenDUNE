/* $Id$ */

#ifndef OPENDUNE_H
#define OPENDUNE_H

extern void Main();
extern void Game_Prepare();
extern void Game_Init();
extern void Game_LoadScenario(uint8 houseID, uint16 scenarioID);
extern void PrepareEnd();


extern void emu_Main();
extern void emu_PrepareEnd();

#endif /* OPENDUNE_H */
