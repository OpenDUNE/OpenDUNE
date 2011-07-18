/* $Id$ */

/** @file src/opendune.h Gameloop and other main definitions. */

#ifndef OPENDUNE_H
#define OPENDUNE_H

typedef enum GameMode {
	GM_NORMAL    = 0,
	GM_RESTART   = 1,
	GM_PICKHOUSE = 2
} GameMode;

extern uint32 g_hintsShown1;
extern uint32 g_hintsShown2;
extern GameMode g_gameMode;
extern uint16 g_campaignID;
extern uint16 g_scenarioID;
extern uint32 g_tickGlobal;
extern uint32 g_tickScenarioStart;
extern bool   g_debugGame;
extern bool   g_debugScenario;
extern bool   g_debugSkipDialogs;

extern void Main();
extern void Game_Prepare();
extern void Game_Init();
extern void Game_LoadScenario(uint8 houseID, uint16 scenarioID);
extern void PrepareEnd();

#endif /* OPENDUNE_H */
