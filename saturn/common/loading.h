/** @file saturn/common/loading.h A loading indicator while the game is busy.
 *
 * When the CD has been read most of the last half second, or the game
 * hasn't updated the screen for a while, the VBlank interrupt shows
 * "LOADING" with moving dots on the VDP2 overlay, in the border under the
 * picture. */

#ifndef SATURN_LOADING_H
#define SATURN_LOADING_H

extern void Loading_Alive(void);

extern void Loading_ScreenChanged(void);

extern void Loading_Enable(int enabled);

extern void Loading_Disc(int reading);

extern void Loading_VBlank(void);

#endif /*!< SATURN_LOADING_H */
