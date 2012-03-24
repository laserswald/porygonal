/*
 * Type effectiveness chart. Getting the type effectiveness works like this:
 * typeEffectivity[NORMAL][GHOST]
 * 
*/
#include "string.h"
#include "porygonal/type.h"

float typeEffectivity[17][17] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.5, 0, 1, 1, 0.5}, //Normal
	{1, 0.5, 0.5, 1, 2, 2, 1, 1, 1, 1, 1, 2, 0.5, 1, 0.5, 1, 2}, //Fire
	{1, 2, 0.5, 1, 0.5, 1, 1, 1, 2, 1, 1, 1, 2, 1, 0.5, 1, 1}, //Water
	{1, 1, 2, 0.5, 0.5, 1, 1, 1, 0, 2, 1, 1, 1, 1, 0.5, 1, 1}, //Electric
	{1, 0.5, 2, 1, 0.5, 1, 1, 0.5, 2, 0.5, 1, 0.5, 2, 1, 0.5, 1, 0.5}, //Grass
	{1, 0.5, 0.5, 1, 2, 0.5, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 0.5}, //Ice
	{2, 1, 1, 1, 1, 2, 1, 0.5, 1, 0.5, 0.5, 0.5, 2, 0, 1, 2, 2}, //Fighting
	{1, 1, 1, 1, 2, 1, 1, 0.5, 0.5, 1, 1, 1, 0.5, 0.5, 1, 1, 0}, //Poison
	{1, 2, 1, 2, 0.5, 1, 1, 2, 1, 0, 1, 0.5, 2, 1, 1, 1, 2}, //Ground
	{1, 1, 1, 0.5, 2, 1, 2, 1, 1, 1, 1, 2, 0.5, 1, 1, 1, 0.5}, //Flying
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.5}, //Psychic
	{1, 0.5, 1, 1, 2, 1, 0.5, 0.5, 1, 0.5, 2, 1, 1, 0.5, 1, 2, 0.5}, //Bug
	{1, 2, 1, 1, 1, 2, 0.5, 1, 0.5, 2, 1, 2, 1, 1, 1, 1, 0.5}, //Rock
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 0.5, 0.5}, //Ghost
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 0.5}, //Dragon
	{1, 1, 1, 1, 1, 1, 0.5, 1, 1, 1, 2, 1, 1, 2, 1, 0.5, 0.5}, //Dark
	{1, 0.5, 0.5, 0.5, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 0.5}, //Steel
	};


float typeModification(int moveType, int pokefirst, int pokesecond){
	float first = typeEffectivity[moveType][pokefirst];
	float second;
	if (pokesecond == 0){
		second = 1;
	} else {
		second = typeEffectivity[moveType][pokesecond];
	}
	return first*second;
}

double sameTypeAttackBonus(int moveType, int pokeFirst, int pokeSecond){
	if (moveType == pokeFirst || moveType == pokeSecond){
		return 1.5;
	} else {
		return 1;
	}
}

char* getTypeName(Type type){
	char* name = malloc(8);
	
	switch(type){
		case Normal:
			strcpy(name, "Normal"); 
			break;
		case Fire:
			strcpy(name, "Fire"); 
			break;
		case Water:
			strcpy(name, "Water"); 
			break;
		case Electric:
			strcpy(name, "Electric"); 
			break;
		case Grass:
			strcpy(name, "Grass"); 
			break;
		case Ice:
			strcpy(name, "Ice"); 
			break;
		case Fighting:
			strcpy(name, "Fighting"); 
			break;
		case Poison:
			strcpy(name, "Poison"); 
			break;
		case Ground:
			strcpy(name, "Ground"); 
			break;
		case Flying:
			strcpy(name, "Flying"); 
			break;
		case Psychic:
			strcpy(name, "Psychic"); 
			break;
		case Bug:
			strcpy(name, "Bug"); 
			break;
		case Rock:
			strcpy(name, "Rock"); 
			break;
		case Ghost:
			strcpy(name, "Ghost"); 
			break;
		case Dragon:
			strcpy(name, "Dragon"); 
			break;
		case Dark:
			strcpy(name, "Dark"); 
			break;
		case Steel:
			strcpy(name, "Steel"); 
			break;
		default:
			strcpy(name, "None");
	}
	return name;
}