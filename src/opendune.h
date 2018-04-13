/** @file src/opendune.h Gameloop and other main definitions. */

#ifndef OPENDUNE_H
#define OPENDUNE_H

typedef enum GameMode {
	GM_MENU      = 0,
	GM_NORMAL    = 1,
	GM_RESTART   = 2,
	GM_PICKHOUSE = 3
} GameMode;

/** X and Y coordinate. */
typedef struct XYPosition {
	uint16 x; /*!< X coordinate. */
	uint16 y; /*!< Y coordinate. */
} XYPosition;

extern const char *window_caption;
extern bool g_dune2_enhanced;
extern bool g_starPortEnforceUnitLimit;
extern bool g_unpackSHPonLoad;

extern uint32 g_hintsShown1;
extern uint32 g_hintsShown2;
extern GameMode g_gameMode;
extern uint16 g_campaignID;
extern uint16 g_scenarioID;
extern uint16 g_activeAction;
extern uint32 g_tickScenarioStart;
extern bool   g_debugGame;
extern bool   g_debugScenario;
extern bool   g_debugSkipDialogs;

extern uint16 g_validateStrictIfZero;
extern bool g_running;
extern uint16 g_selectionType;
extern uint16 g_selectionTypeNew;
extern bool g_viewport_forceRedraw;
extern bool g_viewport_fadein;

extern int16 g_musicInBattle;

extern void *g_readBuffer;
extern uint32 g_readBufferSize;

extern void Game_Prepare(void);
extern void Game_Init(void);
extern void Game_LoadScenario(uint8 houseID, uint16 scenarioID);
extern void GameLoop_Uninit(void);
extern void PrepareEnd(void);

#endif /* OPENDUNE_H */
