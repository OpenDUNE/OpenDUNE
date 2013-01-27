/** @file src/cutscene.h Introduction movie and cutscenes definitions. */

#ifndef CUTSCENE_H
#define CUTSCENE_H

extern bool g_canSkipIntro;

extern void GameLoop_LevelEndAnimation(void);
extern void GameLoop_GameEndAnimation(void);
extern void GameLoop_GameIntroAnimation(void);

#endif
