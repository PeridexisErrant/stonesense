#pragma once

#include "common.h"


enum enumFloorSprites{
	SPRITEFLOOR_NA = 0,
	SPRITEFLOOR_DETAILED = 1,
	SPRITEFLOOR_GRASS = 2,
	SPRITEFLOOR_STONE = 3,
	SPRITEFLOOR_DIRT = 4,
	SPRITEFLOOR_PEBBLES = 5,
	SPRITEFLOOR_BOULDER = 6,
	SPRITEFLOOR_VEGETATION = 7,
	SPRITEFLOOR_PLOWED = 8,
	SPRITEFLOOR_DRYGRASS = 9,
	SPRITEFLOOR_WOOD = 10,
  SPRITEFLOOR_SNOW = 11,
  SPRITEFLOOR_METAL = 12,

  SPRITEFLOOR_LAVASTONE = 17,
  SPRITEFLOOR_WATERFLOOR = 18,
  SPRITEFLOOR_CUTOFF = 19,
};

/*


*/enum enumObjectSprites{
	SPRITEOBJECT_NA = 0,
  SPRITEOBJECT_BLACK = 1,

	SPRITEOBJECT_TREE_BROADLEAF = 3,
  SPRITEOBJECT_TREE_MAPLE = 4,
  SPRITEOBJECT_TREE_CONIFER = 5,
  SPRITEOBJECT_CACTUS = 6,
  SPRITEOBJECT_TREE_WILLOW = 7,  
  SPRITEOBJECT_SAPLING = 8,
  SPRITEOBJECT_DEAD_TREE = 9,
  SPRITEOBJECT_TREE_TOWERCAP = 10,
  SPRITEOBJECT_TREE_BIRCH = 11,
	
  
  SPRITEOBJECT_SHRUB_PLUMP = 40,
  SPRITEOBJECT_SHRUB_PIGTAIL = 41,
  SPRITEOBJECT_SHRUB_CAVEWHEAT = 42,
  SPRITEOBJECT_SHRUB_SWEETPOD = 43,
  SPRITEOBJECT_SHRUB_QUARRYBUSH = 44,
  SPRITEOBJECT_SHRUB_MUCKROOT = 45,
  SPRITEOBJECT_SHRUB_BLOATEDTUBER = 46,
  SPRITEOBJECT_SHRUB_KOBOLDBLUB = 47,
  SPRITEOBJECT_SHRUB_PRICKLEBERRIES = 48,
  SPRITEOBJECT_SHRUB_WILDSTRAWBERRIES = 49,
  SPRITEOBJECT_SHRUB_VALLYHERB = 50,
  SPRITEOBJECT_SHRUB_RATWEED = 51,
  SPRITEOBJECT_SHRUB_FISHERBERRIES = 52,
  SPRITEOBJECT_SHRUB_ROPEREED = 53,
  SPRITEOBJECT_SHRUB_DIMPLECUP = 54,
  SPRITEOBJECT_SHRUB_BLADEWEED = 56,
  SPRITEOBJECT_SHRUB_HIDEROOT = 57,
  SPRITEOBJECT_SHRUB_BARBSILVER = 58,
  SPRITEOBJECT_SHRUB_SUNBERRY = 59,
  SPRITEOBJECT_SHRUB_WHINEWHIP = 60,


  SPRITEOBJECT_ARMORSTAND = 80,
  SPRITEOBJECT_BED_WOOD = 81,
  SPRITEOBJECT_TABLE_WOOD = 82,
  SPRITEOBJECT_TABLE_ROCK = 83,
  SPRITEOBJECT_CHAIR_WOOD = 84,
  SPRITEOBJECT_CHAIR_ROCK = 85,
  SPRITEOBJECT_STATUE = 86,
  SPRITEOBJECT_CABINET = 87,
  SPRITEOBJECT_CABINET_WOOD = 88,
  SPRITEOBJECT_CHEST = 89,
  SPRITEOBJECT_COFFER = 90,
  SPRITEOBJECT_BAG = 91,
  SPRITEOBJECT_CHEST_GLASS = 92,

	SPRITEOBJECT_WATERLEVEL1_LAVA = 120,
	SPRITEOBJECT_WATERLEVEL2_LAVA = 121,
	SPRITEOBJECT_WATERLEVEL3_LAVA = 122,
	SPRITEOBJECT_WATERLEVEL4_LAVA = 123,
	SPRITEOBJECT_WATERLEVEL5_LAVA = 124,
	SPRITEOBJECT_WATERLEVEL6_LAVA = 125,
	SPRITEOBJECT_WATERLEVEL7_LAVA = 126,
	SPRITEOBJECT_WATERLEVEL1 = 127,
	SPRITEOBJECT_WATERLEVEL2 = 128,
	SPRITEOBJECT_WATERLEVEL3 = 129,
	SPRITEOBJECT_WATERLEVEL4 = 130,
	SPRITEOBJECT_WATERLEVEL5 = 131,
	SPRITEOBJECT_WATERLEVEL6 = 132,
	SPRITEOBJECT_WATERLEVEL7 = 133,

	SPRITEOBJECT_PAVEDFLOOR = 140,
	SPRITEOBJECT_COLUMN = 141,

  SPRITEOBJECT_STAIRDOWN = 180,
	SPRITEOBJECT_STAIRUP = 181,
  SPRITEOBJECT_STAIRUP_MIR = 182,
  SPRITEOBJECT_STAIRDOWN_WOOD = 183,
  SPRITEOBJECT_STAIRUP_WOOD = 184,
  SPRITEOBJECT_STAIRUP_WOOD_MIR = 185,

  SPRITEOBJECT_WALL_NA = 200,
  SPRITEOBJECT_WALL_STONE_ROUGH = 201,
  SPRITEOBJECT_WALL_MINSTONE_ROUGH = 202,
  SPRITEOBJECT_WALL_LAVASTONE_ROUGH = 203,
  SPRITEOBJECT_WALL_FEATSTONE_ROUGH = 204,
  SPRITEOBJECT_WALL_SOIL = 205,
  SPRITEOBJECT_WALL_FROZEN = 206,
  SPRITEOBJECT_WALL_METAL = 207,
	SPRITEOBJECT_WALL_WOOD = 208,
  SPRITEOBJECT_WALL_WOOD_FORTIFICATION = 209,
  SPRITEOBJECT_WALL_SAND_YELLOW = 210,
  SPRITEOBJECT_WALL_SAND_RED = 211,
  SPRITEOBJECT_WALL_SAND_BLACK = 212,
  SPRITEOBJECT_WALL_SAND_WHITE = 213,

	SPRITEOBJECT_WALL_STONE_SMOOTH = 220,
  //SPRITEOBJECT_WALL_CONSTR_SMOOTH = 73,
  SPRITEOBJECT_WALL_CONSTR = 222,
  SPRITEOBJECT_WALL_PILLAR = 223,
  SPRITEOBJECT_WALL_FORTIFICATION = 224,
  SPRITEOBJECT_WALL_CONSTR_FORTIFICATION = 225,

  
	
/*
  SPRITEOBJECT_BRIDGE_C = 280,
  SPRITEOBJECT_BRIDGE_C2 = 281,
  SPRITEOBJECT_BRIDGE_S = 282,
  SPRITEOBJECT_BRIDGE_N = 283,
  SPRITEOBJECT_BRIDGE_W = 284,
  SPRITEOBJECT_BRIDGE_E = 285,
  SPRITEOBJECT_BRIDGE_SW = 286,
  SPRITEOBJECT_BRIDGE_NE = 287,
  SPRITEOBJECT_BRIDGE_SE = 288,
  SPRITEOBJECT_BRIDGE_NW = 289,
*/

  SPRITEOBJECT_CURSORZONE = 320,
  SPRITEOBJECT_BLUEPRINT = 321,
  SPRITEOBJECT_STOCKPILE = 322,
  SPRITEOBJECT_CURSOR = 323,
};

enum enumRampMaterials{
  SPRITERAMP_GENERIC = 0,
  SPRITERAMP_GRASS = 1,
};

enum BlockIDs{

  ID_STONE_FORTIFICATION = 65,
  ID_STONE_WALL_RD2 = 307,
  ID_CNSTFLOOR = 493,
	ID_CNSTFORTIFICATION = 494,

  ID_CNSTR_STAIR_UPDOWN = 515,
  ID_CNSTR_STAIR_DOWN = 516,
  ID_CNSTR_STAIR_UP = 517,

	//new ones
	ID_WOODFLOOR = 900,
	ID_WOODFLOOR_DETAIL = 901,
	ID_WOODFLOOR_STAIR_UPDOWN = 905,
  ID_WOODFLOOR_STAIR_DOWN = 906,
  ID_WOODFLOOR_STAIR_UP = 907,
  
	ID_WOODFORTIFICATION = 910,
	ID_WOODWALL = 911,
	ID_WOODPILLAR = 912,

  ID_METALFLOOR = 1000,
  ID_METALWALL = 1011,
	

	       // case 307: //stone wall rd2
        //case 308: //stone wall r2d
        //case 309: //stone wall r2u
        //case 310: //stone wall ru2
        //case 311: //stone wall l2u
        //case 312: //stone wall lu2
        //case 313: //stone wall l2d
        //case 314: //stone wall ld2
        //case 315: //stone wall lrud
        //case 316: //stone wall rud
        //case 317: //stone wall lrd
        //case 318: //stone wall lru
        //case 319: //stone wall lud
        //case 320: //stone wall rd
        //case 321: //stone wall ru
        //case 322: //stone wall lu
        //case 323: //stone wall ld
        //case 324: //stone wall ud
        //case 325: //stone wall lr
};


int GetWallSpriteMap(int in, int matIndex, bool getFillerFloor);
int GetFloorSpriteMap(int in, int matIndex);
int GetUpStairTypeMap(int in, bool mirrored);
int GetDownStairTypeMap(int in);
int GetRampMaterialTypeMap(int in);
int GetSpriteVegitation( VegetationType type, int index);

