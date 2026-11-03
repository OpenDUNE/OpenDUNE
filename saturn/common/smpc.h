/** @file saturn/common/smpc.h Controller input through the SMPC. */

#ifndef SATURN_SMPC_H
#define SATURN_SMPC_H

#include <stdint.h>

extern uint16_t Smpc_PadRead(void);

extern void Smpc_Command(uint8_t command);

extern void Smpc_ReadClock(uint8_t clock[7]);

extern void Smpc_VBlank(void);

extern uint16_t Smpc_PadState(void);

/* Kinds of device on a port, as collected by Smpc_VBlank(). */
enum {
	SMPC_NONE,
	SMPC_PAD,    /*!< standard pad, or a 3D Controller in digital mode */
	SMPC_ANALOG, /*!< 3D Controller in analog mode */
	SMPC_MOUSE,  /*!< Shuttle Mouse */
	SMPC_KEYBOARD,
	SMPC_OTHER
};

typedef struct SmpcDevice {
	uint8_t kind;      /*!< SMPC_NONE, SMPC_PAD, ... */
	uint8_t id;        /*!< SMPC peripheral ID. */
	uint16_t buttons;  /*!< PAD_* bits (keyboards set them too); mouse: 1 left, 2 right, 4 middle, 8 start. */
	uint8_t analog[4]; /*!< 3D Controller: stick X, Y (0-255, 128 centre), right and left triggers. */
} SmpcDevice;

extern void Smpc_Devices(SmpcDevice devices[2]);

extern void Smpc_MouseMotion(int *dx, int *dy);

extern int Smpc_KeyEvent(uint8_t *key, int *make);

#endif /*!< SATURN_SMPC_H */
