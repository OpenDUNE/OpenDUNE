/* $Id$ */

/** @file src/saveload/info.c Load/save routines for House. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../house.h"
#include "../map.h"
#include "../opendune.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../scenario.h"
#include "../sprites.h"
#include "../structure.h"
#include "../timer.h"
#include "../unit.h"
#include "../gui/gui.h"

static uint32 SaveLoad_SelectionType(void *object, uint32 value, bool loading)
{
	VARIABLE_NOT_USED(object);

	if (loading) {
		g_selectionTypeNew = (uint16)value;
		return 0;
	}

	return g_selectionType;
}

static uint32 SaveLoad_StructureActive(void *object, uint32 value, bool loading)
{
	VARIABLE_NOT_USED(object);

	if (loading) {
		if ((uint16)value != 0xFFFF) {
			g_structureActive = Structure_Get_ByIndex((uint16)value);
		} else {
			g_structureActive = NULL;
		}
		return 0;
	}

	if (g_structureActiveType != 0xFFFF) {
		return g_structureActive->o.index;
	} else {
		return 0xFFFF;
	}
}

static uint32 SaveLoad_UnitSelected(void *object, uint32 value, bool loading)
{
	VARIABLE_NOT_USED(object);

	if (loading) {
		if ((uint16)value != 0xFFFF && value < UNIT_INDEX_MAX) {
			g_unitSelected = Unit_Get_ByIndex((uint16)value);
		} else {
			g_unitSelected = NULL;
		}
		return 0;
	}

	if (g_unitSelected != NULL) {
		return g_unitSelected->o.index;
	} else {
		return 0xFFFF;
	}
}

static uint32 SaveLoad_UnitActive(void *object, uint32 value, bool loading)
{
	VARIABLE_NOT_USED(object);

	if (loading) {
		if ((uint16)value != 0xFFFF && value < UNIT_INDEX_MAX) {
			g_unitActive = Unit_Get_ByIndex((uint16)value);
		} else {
			g_unitActive = NULL;
		}
		return 0;
	}

	if (g_unitActive != NULL) {
		return g_unitActive->o.index;
	} else {
		return 0xFFFF;
	}
}

static uint32 SaveLoad_TickScenarioStart(void *object, uint32 value, bool loading)
{
	VARIABLE_NOT_USED(object);

	if (loading) {
		g_tickScenarioStart = g_timerGame - value;
		return 0;
	}

	return g_timerGame - g_tickScenarioStart;
}

static uint32 SaveLoad_UnitHouseMissile(void *object, uint32 value, bool loading)
{
	VARIABLE_NOT_USED(object);

	if (loading) {
		if ((uint16)value != 0xFFFF && value < UNIT_INDEX_MAX) {
			g_unitHouseMissile = Unit_Get_ByIndex((uint16)value);
		} else {
			g_unitHouseMissile = NULL;
		}
		return 0;
	}

	if (g_unitHouseMissile != NULL) {
		return g_unitHouseMissile->o.index;
	} else {
		return 0xFFFF;
	}
}

static const SaveLoadDesc s_saveInfo[] = {
	SLD_GSLD   (g_scenario,  g_saveScenario),
	SLD_GENTRY (SLDT_UINT16, g_playerCreditsNoSilo),
	SLD_GENTRY (SLDT_UINT16, g_minimapPosition),
	SLD_GENTRY (SLDT_UINT16, g_selectionRectanglePosition),
	SLD_GCALLB (SLDT_INT8,   g_selectionType, &SaveLoad_SelectionType),
	SLD_GENTRY2(SLDT_INT8,   g_structureActiveType, SLDT_UINT16),
	SLD_GENTRY (SLDT_UINT16, g_structureActivePosition),
	SLD_GCALLB (SLDT_UINT16, g_structureActive, &SaveLoad_StructureActive),
	SLD_GCALLB (SLDT_UINT16, g_unitSelected, &SaveLoad_UnitSelected),
	SLD_GCALLB (SLDT_UINT16, g_unitActive, &SaveLoad_UnitActive),
	SLD_GENTRY (SLDT_UINT16, g_activeAction),
	SLD_GENTRY (SLDT_UINT32, g_strategicRegionBits),
	SLD_GENTRY (SLDT_UINT16, g_scenarioID),
	SLD_GENTRY (SLDT_UINT16, g_campaignID),
	SLD_GENTRY (SLDT_UINT32, g_hintsShown1),
	SLD_GENTRY (SLDT_UINT32, g_hintsShown2),
	SLD_GCALLB (SLDT_UINT32, g_tickScenarioStart, &SaveLoad_TickScenarioStart),
	SLD_GENTRY (SLDT_UINT16, g_playerCreditsNoSilo),
	SLD_GARRAY (SLDT_INT16,  g_starportAvailable, UNIT_MAX),
	SLD_GENTRY (SLDT_UINT16, g_houseMissileCountdown),
	SLD_GCALLB (SLDT_UINT16, g_unitHouseMissile, &SaveLoad_UnitHouseMissile),
	SLD_GENTRY (SLDT_UINT16, g_structureIndex),
	SLD_END
};

static const SaveLoadDesc s_saveInfoOld[] = {
	SLD_EMPTY2(SLDT_UINT8,  250),
	SLD_GENTRY(SLDT_UINT16, g_scenarioID),
	SLD_GENTRY(SLDT_UINT16, g_campaignID),
	SLD_END
};

/**
 * Load all kinds of important info from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Info_Load(FILE *fp, uint32 length)
{
	if (SaveLoad_GetLength(s_saveInfo) != length) return false;
	if (!SaveLoad_Load(s_saveInfo, fp, NULL)) return false;

	g_viewportPosition = g_minimapPosition;
	g_selectionPosition = g_selectionRectanglePosition;

	Sprites_LoadTiles();

	Map_CreateLandscape(g_scenario.mapSeed);

	return true;
}

/**
 * Load all kinds of important info from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Info_LoadOld(FILE *fp, uint32 length)
{
	VARIABLE_NOT_USED(length);

	if (!SaveLoad_Load(s_saveInfoOld, fp, NULL)) return false;

	return true;
}

/**
 * Save all kinds of important info to the savegame.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Info_Save(FILE *fp)
{
	static uint16 savegameVersion = 0x0290;

	if (fwrite(&savegameVersion, sizeof(uint16), 1, fp) != 1) return false;

	if (!SaveLoad_Save(s_saveInfo, fp, NULL)) return false;

	return true;
}
