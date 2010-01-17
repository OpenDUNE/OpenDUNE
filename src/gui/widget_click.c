/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../unit.h"
#include "widget.h"

extern void f__0C3A_142D_0018_6667();
extern void f__1423_04F2_0016_CD6B();
extern void f__B4E9_0050_003F_292A();
extern void f__B520_062C_0030_162A();
extern void f__B520_08E6_0038_85A4();
extern void overlay(uint16 cs, uint8 force);

/**
 * Handles Click event for a sprite/text button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_SpriteTextButton_Click(Widget *w)
{
	Structure *s;

	VARIABLE_NOT_USED(w);

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	switch (g_global->variable_97E5) {
		default: break;

		case 0x26: /* "Place it" */
			if (s->type == STRUCTURE_CONSTRUCTION_YARD) {
				Structure *ns;

				ns = Structure_Get_ByIndex(s->linkedID);
				g_global->activeStructure = g_global->structureStartPos;
				g_global->activeStructure.s.ip += ns->index * sizeof(Structure);
				g_global->activeStructureType = s->objectType;
				g_global->variable_38EC = Structure_IsValidBuildLocation(g_global->variable_3A00, g_global->activeStructureType);
				g_global->activeStructurePosition = g_global->selectionPosition;
				s->linkedID = STRUCTURE_INVALID;

				emu_push(2);
				emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
				emu_sp += 2;
			}
			break;

		case 0x28: /* "On hold" */
			s->flags &= 0x9FFF;
			s->variable_06 &= 0xFFFD;
			break;

		case 0x29: /* "Build it" */
			emu_push(s->objectType);
			emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
			emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
			emu_sp += 6;
			break;

		case 0x2A: /* "Launch" */
		case 0x2B: /* "Fremen" */
		case 0x2C: /* "Saboteur" */
			emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
			emu_push(emu_cs); emu_push(0x1161); emu_cs = 0x1423; f__1423_04F2_0016_CD6B();
			emu_sp += 4;
			break;

		case 0x2E: /* "%d%% done" */
			s->flags |= 0x4000;
			break;
	}
	return false;
}

/**
 * Handles Click event for scrollbar up button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_ArrowUp_Click(Widget *w)
{
	emu_push(-1);
	emu_push(w->variable_34.s.cs); emu_push(w->variable_34.s.ip);
	emu_push(emu_cs); emu_push(0x03DE); emu_cs = 0xB520; f__B520_062C_0030_162A();
	emu_sp += 6;

	return false;
}

/**
 * Handles Click event for scrollbar down button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_ArrowDown_Click(Widget *w)
{
	emu_push(1);
	emu_push(w->variable_34.s.cs); emu_push(w->variable_34.s.ip);
	emu_push(emu_cs); emu_push(0x03DE); emu_cs = 0xB520; f__B520_062C_0030_162A();
	emu_sp += 6;

	return false;
}

/**
 * Handles Click event for scrollbar button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_Click(Widget *w, csip32 wcsip)
{
	uint16 positionX, positionY;

	csip32 scrollcsip = w->variable_34;

	positionX = w->offsetX;
	if (w->offsetX < 0) positionX += g_global->variable_4062[w->parentID][2] << 3;
	positionX += g_global->variable_4062[w->parentID][0] << 3;

	positionY = w->offsetY;
	if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
	positionY += g_global->variable_4062[w->parentID][1];

	if ((w->state & 0x4400) != 0) {
		emu_get_memory8(scrollcsip.s.cs, scrollcsip.s.ip, 0xE) = 0;
		GUI_Widget_ScrollBar_Draw(w, wcsip);
	}

	if ((w->state & 0x1100) != 0) {
		int16 position;
		int16 scrollTop;
		int16 scrollBottom;

		emu_get_memory8(scrollcsip.s.cs, scrollcsip.s.ip, 0xE) = 0;

		if (w->width > w->height) {
			position = g_global->mouseX;
			scrollTop = positionX + emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x6) + 1;
		} else {
			position = g_global->mouseY;
			scrollTop = positionY + emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x6) + 1;
		}

		scrollBottom = scrollTop + emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x4);

		if (position <= scrollBottom && position >= scrollTop) {
			emu_get_memory8(scrollcsip.s.cs, scrollcsip.s.ip, 0xE) = 1;
			emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x10) = position - scrollTop;
		} else {
			emu_push(position < scrollTop ? -emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0xA) : emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0xA));
			emu_push(scrollcsip.s.cs); emu_push(scrollcsip.s.ip);
			emu_push(emu_cs); emu_push(0x0546); emu_cs = 0xB520; f__B520_062C_0030_162A();
			emu_sp += 6;
		}
	}

	if ((w->state & 0x2200) != 0 && emu_get_memory8(scrollcsip.s.cs, scrollcsip.s.ip, 0xE) != 0) {
		int16 position, size;

		if (w->width > w->height) {
			size = w->width - 2 - emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x4);
			position = g_global->mouseX - emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x10) - positionX - 1;
		} else {
			size = w->height - 2 - emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x4);
			position = g_global->mouseY - emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x10) - positionY - 1;
		}

		if (position < 0) {
			position = 0;
		} else if (position > size) {
			position = size;
		}

		if (emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x6) != position) {
			emu_get_memory16(scrollcsip.s.cs, scrollcsip.s.ip, 0x6) = position;
			emu_get_memory8(scrollcsip.s.cs, scrollcsip.s.ip, 0xF) = 1;
		}

		emu_push(scrollcsip.s.cs); emu_push(scrollcsip.s.ip);
		emu_push(emu_cs); emu_push(0x0605); emu_cs = 0xB520; f__B520_08E6_0038_85A4();
		emu_sp += 4;

		if (emu_get_memory8(scrollcsip.s.cs, scrollcsip.s.ip, 0xF) != 0) {
			assert(emu_get_csip32(scrollcsip.s.cs, scrollcsip.s.ip, 0x0).csip == wcsip.csip);
			GUI_Widget_ScrollBar_Draw(w, wcsip);
		}
	}

	return false;
}
