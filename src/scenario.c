/** @file src/scenario.c %Scenario handling routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "os/strings.h"

#include "scenario.h"

#include "file.h"
#include "house.h"
#include "ini.h"
#include "map.h"
#include "opendune.h"
#include "pool/house.h"
#include "pool/pool.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "sprites.h"
#include "structure.h"
#include "team.h"
#include "tile.h"
#include "timer.h"
#include "unit.h"
#include "gui/gui.h"

Scenario g_scenario;

static void *s_scenarioBuffer = NULL;

static void Scenario_Load_General(void)
{
	g_scenario.winFlags          = Ini_GetInteger("BASIC", "WinFlags",    0,                            s_scenarioBuffer);
	g_scenario.loseFlags         = Ini_GetInteger("BASIC", "LoseFlags",   0,                            s_scenarioBuffer);
	g_scenario.mapSeed           = Ini_GetInteger("MAP",   "Seed",        0,                            s_scenarioBuffer);
	g_scenario.timeOut           = Ini_GetInteger("BASIC", "TimeOut",     0,                            s_scenarioBuffer);
	g_minimapPosition            = Ini_GetInteger("BASIC", "TacticalPos", g_minimapPosition,            s_scenarioBuffer);
	g_selectionRectanglePosition = Ini_GetInteger("BASIC", "CursorPos",   g_selectionRectanglePosition, s_scenarioBuffer);
	g_scenario.mapScale          = Ini_GetInteger("BASIC", "MapScale",    0,                            s_scenarioBuffer);

	Ini_GetString("BASIC", "BriefPicture", "HARVEST.WSA",  g_scenario.pictureBriefing, 14, s_scenarioBuffer);
	Ini_GetString("BASIC", "WinPicture",   "WIN1.WSA",     g_scenario.pictureWin,      14, s_scenarioBuffer);
	Ini_GetString("BASIC", "LosePicture",  "LOSTBILD.WSA", g_scenario.pictureLose,     14, s_scenarioBuffer);

	g_viewportPosition  = g_minimapPosition;
	g_selectionPosition = g_selectionRectanglePosition;
}

static void Scenario_Load_House(uint8 houseID)
{
	const char *houseName = g_table_houseInfo[houseID].name;
	char *houseType;
	char buf[128];
	char *b;
	House *h;

	/* Get the type of the House (CPU / Human) */
	Ini_GetString(houseName, "Brain", "NONE", buf, 127, s_scenarioBuffer);
	for (b = buf; *b != '\0'; b++) if (*b >= 'a' && *b <= 'z') *b += 'A' - 'a';
	houseType = strstr("HUMAN$CPU", buf);
	if (houseType == NULL) return;

	/* Create the house */
	h = House_Allocate(houseID);

	h->credits      = Ini_GetInteger(houseName, "Credits",  0, s_scenarioBuffer);
	h->creditsQuota = Ini_GetInteger(houseName, "Quota",    0, s_scenarioBuffer);
	h->unitCountMax = Ini_GetInteger(houseName, "MaxUnit", 39, s_scenarioBuffer);

	/* For 'Brain = Human' we have to set a few additional things */
	if (*houseType != 'H') return;

	h->flags.human = true;

	g_playerHouseID       = houseID;
	g_playerHouse         = h;
	g_playerCreditsNoSilo = h->credits;
}

static void Scenario_Load_Houses(void)
{
	House *h;
	uint8 houseID;

	for (houseID = 0; houseID < HOUSE_MAX; houseID++) {
		Scenario_Load_House(houseID);
	}

	h = g_playerHouse;
	/* In case there was no unitCountMax in the scenario, calculate
	 *  it based on values used for the AI controlled houses. */
	if (h->unitCountMax == 0) {
		PoolFindStruct find;
		uint8 max;
		House *h;

		find.houseID = HOUSE_INVALID;
		find.index   = 0xFFFF;
		find.type    = 0xFFFF;

		max = 80;
		while ((h = House_Find(&find)) != NULL) {
			/* Skip the human controlled house */
			if (h->flags.human) continue;
			max -= h->unitCountMax;
		}

		h->unitCountMax = max;
	}
}

static void Scenario_Load_Unit(const char *key, char *settings)
{
	uint8 houseType, unitType, actionType;
	int8 orientation;
	uint16 hitpoints;
	tile32 position;
	Unit *u;
	char *split;

	VARIABLE_NOT_USED(key);

	/* The value should have 6 values separated by a ',' */
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(settings);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the Unit type */
	unitType = Unit_StringToType(settings);
	if (unitType == UNIT_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the Hitpoints in percent (in base 256) */
	hitpoints = atoi(settings);

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Fourth value is the position on the map */
	position = Tile_UnpackTile(atoi(settings));

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Fifth value is orientation */
	orientation = (int8)((uint8)atoi(settings));

	/* Sixth value is the current state of the unit */
	settings = split + 1;
	actionType = Unit_ActionStringToType(settings);
	if (actionType == ACTION_INVALID) return;


	u = Unit_Allocate(UNIT_INDEX_INVALID, unitType, houseType);
	if (u == NULL) return;
	u->o.flags.s.byScenario = true;

	u->o.hitpoints   = hitpoints * g_table_unitInfo[unitType].o.hitpoints / 256;
	u->o.position    = position;
	u->orientation[0].current = orientation;
	u->actionID     = actionType;
	u->nextActionID = ACTION_INVALID;

	/* In case the above function failed and we are passed campaign 2, don't add the unit */
	if (!Map_IsValidPosition(Tile_PackTile(u->o.position)) && g_campaignID > 2) {
		Unit_Free(u);
		return;
	}

	/* XXX -- There is no way this is ever possible, as the beingBuilt flag is unset by Unit_Allocate() */
	if (!u->o.flags.s.isNotOnMap) Unit_SetAction(u, u->actionID);

	u->o.seenByHouses = 0x00;

	Unit_HouseUnitCount_Add(u, u->o.houseID);

	Unit_SetOrientation(u, u->orientation[0].current, true, 0);
	Unit_SetOrientation(u, u->orientation[0].current, true, 1);
	Unit_SetSpeed(u, 0);
}

static void Scenario_Load_Structure(const char *key, char *settings)
{
	uint8 index, houseType, structureType;
	uint16 hitpoints, position;
	char *split;

	/* 'GEN' marked keys are Slabs and Walls, where the number following indicates the position on the map */
	if (strncasecmp(key, "GEN", 3) == 0) {
		/* Position on the map is in the key */
		position = atoi(key + 3);

		/* The value should have two values separated by a ',' */
		split = strchr(settings, ',');
		if (split == NULL) return;
		*split = '\0';
		/* First value is the House type */
		houseType = House_StringToType(settings);
		if (houseType == HOUSE_INVALID) return;

		/* Second value is the Structure type */
		settings = split + 1;
		structureType = Structure_StringToType(settings);
		if (structureType == STRUCTURE_INVALID) return;

		Structure_Create(STRUCTURE_INDEX_INVALID, structureType, houseType, position);
		return;
	}

	/* The key should start with 'ID', followed by the index */
	index = atoi(key + 2);

	/* The value should have four values separated by a ',' */
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(settings);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the Structure type */
	structureType = Structure_StringToType(settings);
	if (structureType == STRUCTURE_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the Hitpoints in percent (in base 256) */
	hitpoints = atoi(settings);
	/* ENHANCEMENT -- Dune2 ignores the % hitpoints read from the scenario */
	if (!g_dune2_enhanced) hitpoints = 256;

	/* Fourth value is the position of the structure */
	settings = split + 1;
	position = atoi(settings);

	/* Ensure nothing is already on the tile */
	/* XXX -- DUNE2 BUG? -- This only checks the top-left corner? Not really a safety, is it? */
	if (Structure_Get_ByPackedTile(position) != NULL) return;

	{
		Structure *s;

		s = Structure_Create(index, structureType, houseType, position);
		if (s == NULL) return;

		s->o.hitpoints = hitpoints * g_table_structureInfo[s->o.type].o.hitpoints / 256;
		s->o.flags.s.degrades = false;
		s->state = STRUCTURE_STATE_IDLE;
	}
}

static void Scenario_Load_Map(const char *key, char *settings)
{
	Tile *t;
	uint16 packed;
	uint16 value;
	char *s;
	char posY[3];

	if (*key != 'C') return;

	memcpy(posY, key + 4, 2);
	posY[2] = '\0';

	packed = Tile_PackXY(atoi(posY), atoi(key + 6)) & 0xFFF;
	t = &g_map[packed];

	s = strtok(settings, ",\r\n");
	value = atoi(s);
	t->houseID        = value & 0x07;
	t->isUnveiled     = (value & 0x08) != 0 ? true : false;
	t->hasUnit        = (value & 0x10) != 0 ? true : false;
	t->hasStructure   = (value & 0x20) != 0 ? true : false;
	t->hasAnimation   = (value & 0x40) != 0 ? true : false;
	t->hasExplosion = (value & 0x80) != 0 ? true : false;

	s = strtok(NULL, ",\r\n");
	t->groundSpriteID = atoi(s) & 0x01FF;
	if (g_mapSpriteID[packed] != t->groundSpriteID) g_mapSpriteID[packed] |= 0x8000;

	if (!t->isUnveiled) t->overlaySpriteID = g_veiledSpriteID;
}

static void Scenario_Load_Map_Bloom(uint16 packed, Tile *t)
{
	t->groundSpriteID = g_bloomSpriteID;
	g_mapSpriteID[packed] |= 0x8000;
}

static void Scenario_Load_Map_Field(uint16 packed, Tile *t)
{
	Map_Bloom_ExplodeSpice(packed, HOUSE_INVALID);

	/* Show where a field started in the preview mode by making it an odd looking sprite */
	if (g_debugScenario) {
		t->groundSpriteID = 0x01FF;
	}
}

static void Scenario_Load_Map_Special(uint16 packed, Tile *t)
{
	t->groundSpriteID = g_bloomSpriteID + 1;
	g_mapSpriteID[packed] |= 0x8000;
}

static void Scenario_Load_Reinforcement(const char *key, char *settings)
{
	uint8 index, houseType, unitType, locationID;
	uint16 timeBetween;
	tile32 position;
	bool repeat;
	Unit *u;
	char *split;

	index = atoi(key);

	/* The value should have 4 values separated by a ',' */
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(settings);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the Unit type */
	unitType = Unit_StringToType(settings);
	if (unitType == UNIT_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the location of the reinforcement */
	     if (strcasecmp(settings, "NORTH")     == 0) locationID = 0;
	else if (strcasecmp(settings, "EAST")      == 0) locationID = 1;
	else if (strcasecmp(settings, "SOUTH")     == 0) locationID = 2;
	else if (strcasecmp(settings, "WEST")      == 0) locationID = 3;
	else if (strcasecmp(settings, "AIR")       == 0) locationID = 4;
	else if (strcasecmp(settings, "VISIBLE")   == 0) locationID = 5;
	else if (strcasecmp(settings, "ENEMYBASE") == 0) locationID = 6;
	else if (strcasecmp(settings, "HOMEBASE")  == 0) locationID = 7;
	else return;

	/* Fourth value is the time between reinforcement */
	settings = split + 1;
	timeBetween = atoi(settings) * 6 + 1;
	repeat = (settings[strlen(settings) - 1] == '+') ? true : false;
	/* ENHANCEMENT -- Dune2 makes a mistake in reading the '+', causing repeat to be always false */
	if (!g_dune2_enhanced) repeat = false;

	position.s.x = 0xFFFF;
	position.s.y = 0xFFFF;
	u = Unit_Create(UNIT_INDEX_INVALID, unitType, houseType, position, 0);
	if (u == NULL) return;

	g_scenario.reinforcement[index].unitID      = u->o.index;
	g_scenario.reinforcement[index].locationID  = locationID;
	g_scenario.reinforcement[index].timeLeft    = timeBetween;
	g_scenario.reinforcement[index].timeBetween = timeBetween;
	g_scenario.reinforcement[index].repeat      = repeat ? 1 : 0;
}

static void Scenario_Load_Team(const char *key, char *settings)
{
	uint8 houseType, teamActionType, movementType;
	uint16 minMembers, maxMembers;
	char *split;

	VARIABLE_NOT_USED(key);

	/* The value should have 5 values separated by a ',' */
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(settings);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the teamAction type */
	teamActionType = Team_ActionStringToType(settings);
	if (teamActionType == TEAM_ACTION_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the movement type */
	movementType = Unit_MovementStringToType(settings);
	if (movementType == MOVEMENT_INVALID) return;

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Fourth value is minimum amount of members in team */
	minMembers = atoi(settings);

	/* Find the next value in the ',' separated list */
	settings = split + 1;
	split = strchr(settings, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Fifth value is maximum amount of members in team */
	maxMembers = atoi(settings);

	Team_Create(houseType, teamActionType, movementType, minMembers, maxMembers);
}

/**
 * Initialize a unit count of the starport.
 * @param key Unit type to set.
 * @param settings Count to set.
 */
static void Scenario_Load_Choam(const char *key, char *settings)
{
	uint8 unitType;

	unitType = Unit_StringToType(key);
	if (unitType == UNIT_INVALID) return;

	g_starportAvailable[unitType] = atoi(settings);
}

static void Scenario_Load_MapParts(const char *key, void (*ptr)(uint16 packed, Tile *t))
{
	char *s;
	char buf[128];

	Ini_GetString("MAP", key, '\0', buf, 127, s_scenarioBuffer);

	s = strtok(buf, ",\r\n");
	while (s != NULL) {
		uint16 packed;
		Tile *t;

		packed = atoi(s);
		t = &g_map[packed];

		(*ptr)(packed, t);

		s = strtok(NULL, ",\r\n");
	}
}

static void Scenario_Load_Chunk(const char *category, void (*ptr)(const char *key, char *settings))
{
	char *buffer = g_readBuffer;

	Ini_GetString(category, NULL, NULL, g_readBuffer, g_readBufferSize, s_scenarioBuffer);
	while (true) {
		char buf[127];

		if (*buffer == '\0') break;

		Ini_GetString(category, buffer, NULL, buf, 127, s_scenarioBuffer);

		(*ptr)(buffer, buf);
		buffer += strlen(buffer) + 1;
	}
}

bool Scenario_Load(uint16 scenarioID, uint8 houseID)
{
	char filename[14];
	int i;

	if (houseID >= HOUSE_MAX) return false;

	g_scenarioID = scenarioID;

	/* Load scenario file */
	sprintf(filename, "SCEN%c%03d.INI", g_table_houseInfo[houseID].name[0], scenarioID);
	if (!File_Exists(filename)) return false;
	s_scenarioBuffer = File_ReadWholeFile(filename);

	memset(&g_scenario, 0, sizeof(Scenario));

	Scenario_Load_General();
	Sprites_LoadTiles();
	Map_CreateLandscape(g_scenario.mapSeed);

	for (i = 0; i < 16; i++) {
		g_scenario.reinforcement[i].unitID = UNIT_INDEX_INVALID;
	}

	Scenario_Load_Houses();

	Scenario_Load_Chunk("UNITS", &Scenario_Load_Unit);
	Scenario_Load_Chunk("STRUCTURES", &Scenario_Load_Structure);
	Scenario_Load_Chunk("MAP", &Scenario_Load_Map);
	Scenario_Load_Chunk("REINFORCEMENTS", &Scenario_Load_Reinforcement);
	Scenario_Load_Chunk("TEAMS", &Scenario_Load_Team);
	Scenario_Load_Chunk("CHOAM", &Scenario_Load_Choam);

	Scenario_Load_MapParts("Bloom", Scenario_Load_Map_Bloom);
	Scenario_Load_MapParts("Field", Scenario_Load_Map_Field);
	Scenario_Load_MapParts("Special", Scenario_Load_Map_Special);

	g_tickScenarioStart = g_timerGame;

	free(s_scenarioBuffer); s_scenarioBuffer = NULL;
	return true;
}
