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
extern void emu_Structure_IsValidBuildLocation();
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
				g_global->activeStructureType = s->buildingType;

				emu_push(g_global->activeStructureType);
				emu_push(g_global->variable_3A00);
				emu_push(emu_cs); emu_push(0x1102); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
				emu_sp += 4;

				g_global->variable_38EC = emu_ax;
				g_global->variable_38F0 = g_global->selectionPosition;
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
			emu_push(s->buildingType);
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
