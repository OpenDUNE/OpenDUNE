/** @file src/object.c %Object routines. */

#include <stdio.h>
#include "types.h"

#include "object.h"

#include "map.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "structure.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"


/**
 * Link two variable4 values to eachother, and clean up existing values if
 *  needed.
 * @param encodedFrom From where the link goes.
 * @param encodedTo To where the link goes.
 */
void Object_Script_Variable4_Link(uint16 encodedFrom, uint16 encodedTo)
{
	Object *objectFrom;
	Object *objectTo;

	if (!Tools_Index_IsValid(encodedFrom)) return;
	if (!Tools_Index_IsValid(encodedTo)) return;

	objectFrom = Tools_Index_GetObject(encodedFrom);
	objectTo = Tools_Index_GetObject(encodedTo);

	if (objectFrom == NULL) return;
	if (objectTo == NULL) return;

	if (objectFrom->script.variables[4] != objectTo->script.variables[4]) {
		Object_Script_Variable4_Clear(objectFrom);
		Object_Script_Variable4_Clear(objectTo);
	}
	if (objectFrom->script.variables[4] != 0) return;

	Object_Script_Variable4_Set(objectFrom, encodedTo);
	Object_Script_Variable4_Set(objectTo, encodedFrom);

	return;
}

/**
 * Set in a safe way the new value for variable4.
 * @param o The Object to set variable4 for.
 * @param index The encoded index to set it to.
 */
void Object_Script_Variable4_Set(Object *o, uint16 encoded)
{
	StructureInfo *si;
	Structure *s;

	if (o == NULL) return;

	o->script.variables[4] = encoded;

	if (o->flags.s.isUnit) return;

	si = &g_table_structureInfo[o->type];
	if (!si->o.flags.busyStateIsIncoming) return;

	s = (Structure *)o;
	if (Structure_GetLinkedUnit(s) != NULL) return;

	Structure_SetState(s, (encoded == 0) ? STRUCTURE_STATE_IDLE : STRUCTURE_STATE_BUSY);
}

/**
 * Clear variable4 in a safe (and recursive) way from an object.
 * @param object The Oject to clear variable4 of.
 */
void Object_Script_Variable4_Clear(Object *object)
{
	Object *objectVariable;
	uint16 encoded = object->script.variables[4];

	if (encoded == 0) return;

	objectVariable = Tools_Index_GetObject(encoded);

	Object_Script_Variable4_Set(object, 0);
	Object_Script_Variable4_Set(objectVariable, 0);
}

/**
 * Get the object on the given packed tile.
 * @param packed The packed tile to get the object from.
 * @return The object.
 */
Object *Object_GetByPackedTile(uint16 packed)
{
	Tile* t;

	if (Tile_IsOutOfMap(packed)) return NULL;

	t = &g_map[packed];
	if (t->hasUnit) return &Unit_Get_ByIndex(t->index - 1)->o;
	if (t->hasStructure) return &Structure_Get_ByIndex(t->index - 1)->o;
	return NULL;
}

/**
 * Gets the distance from the given object to the given encoded index.
 * @param o The object.
 * @param encoded The encoded index.
 * @return The distance.
 */
uint16 Object_GetDistanceToEncoded(Object *o, uint16 encoded)
{
	Structure *s;
	tile32 position;

	s = Tools_Index_GetStructure(encoded);

	if (s != NULL) {
		uint16 packed;

		position = s->o.position;
		packed = Tile_PackTile(position);

		packed += g_table_structure_layoutEdgeTiles[g_table_structureInfo[o->type].layout][(Orientation_Orientation256ToOrientation8(Tile_GetDirection(o->position, position)) + 4) & 7];

		position = Tile_UnpackTile(packed);
	} else {
		position = Tools_Index_GetTile(encoded);
	}

	return Tile_GetDistance(o->position, position);
}
