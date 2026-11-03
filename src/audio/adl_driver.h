/** @file src/audio/adl_driver.h C interface of the Westwood AdLib driver (adl_driver.cpp).
 *
 * Plays Dune II's .ADL music and sound effects by writing OPL2 registers
 * through the function given to ADL_Init(). ADL_Callback() must run 72 times
 * a second. Channels 0-5 carry music, 6-8 sound effects. */

#ifndef ADL_DRIVER_H
#define ADL_DRIVER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*AdlOplWrite)(uint8_t reg, uint8_t val);

extern void ADL_Init(AdlOplWrite write);
extern int ADL_Load(const uint8_t *file, uint32_t size);
extern void ADL_Play(int track, int volume);
extern void ADL_Callback(void);
extern int ADL_IsChannelPlaying(int channel);
extern void ADL_StopAll(void);
extern void ADL_StopMusic(void);

#ifdef __cplusplus
}
#endif

#endif /* ADL_DRIVER_H */
