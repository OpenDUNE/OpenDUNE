/** @file src/input/pad_saturn.h Sega Saturn controllers as mouse and keys. */

#ifndef PAD_SATURN_H
#define PAD_SATURN_H

extern void PadSaturn_Init(void);

extern void PadSaturn_GameLoop(void);
extern void PadSaturn_Tick(void);

struct Widget;

extern void PadSaturn_HandleEvents(struct Widget *list);
extern void PadSaturn_EditBox(bool editing, bool cancel);
extern void PadSaturn_FocusWidget(const struct Widget *w);

extern void PadSaturn_HandleMenu(uint16 left, uint16 top, uint16 right, uint16 lineHeight, uint16 lines, uint16 current);

extern int PadSaturn_PickRegion(const int16 *x, const int16 *y, const bool *usable, int count);

extern bool PadSaturn_PointerVisible(void);

extern bool PadSaturn_Connected(void);

extern void PadSaturn_ShowControllerMessage(bool show);
extern void PadSaturn_SetPosition(uint16 x, uint16 y);
extern void PadSaturn_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY);

#endif /*!< PAD_SATURN_H */
