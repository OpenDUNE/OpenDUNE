/* $Id$ */

#ifndef OPENDUNE_H
#define OPENDUNE_H

extern void Main();
extern void Game_Prepare();
extern void Game_Init();
extern void Game_LoadScenario(uint8 houseID, uint16 scenarioID);
extern void Game_LoadScenario_Special(uint8 houseID, uint16 scenarioID);


extern void emu_Main();

#endif /* OPENDUNE_H */
