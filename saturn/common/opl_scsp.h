/** @file saturn/common/opl_scsp.h An AdLib (OPL2) played by the SCSP.
 *
 * Takes OPL2 register writes, as a game's AdLib driver makes them, and plays
 * them with SCSP slots doing the same 2-operator FM. */

#ifndef SATURN_OPL_SCSP_H
#define SATURN_OPL_SCSP_H

#include <stdint.h>

extern int OplScsp_Init(void);

extern void OplScsp_Write(uint8_t reg, uint8_t val);

extern void OplScsp_Flush(void);

extern void OplScsp_Update(void);

extern void OplScsp_SetAttenuation(int first, int last, uint8_t attenuation);

extern void OplScsp_Tune(int attackOffset, int decayQuarters);

extern void OplScsp_Reset(void);

#endif /*!< SATURN_OPL_SCSP_H */
