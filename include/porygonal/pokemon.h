#ifndef POKEMON_H
#define POKEMON_H

typedef struct poke Pokemon;

#include "move.h"

struct poke{
	char* name;
	int type[2];
	int species;
	int level;
	char* nickname;
	Move* moves[4];
	int stats[6];
	int currentHP;
};

Pokemon* newPokemon(char* name, int species, int level, int primarytype, int secondarytype);

void Pokemon_load_stats(Pokemon* poke, int hp, int atk, int def, int spa, int spd, int spe);

void Pokemon_set_moves(Pokemon* poke, Move* m1, Move* m2, Move* m3, Move* m4);

void Pokemon_takeRawDamage(int damage);

void calculateStats();

void deletePokemon(Pokemon* p);
#endif
