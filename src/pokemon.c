//      pokemon.c
//      
//      Copyright 2011 Ben Davenport-Ray <laserdude11@gmail.com>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.

#include <stdlib.h>
#include "porygonal/type.h"
#include "porygonal/move.h"
#include "porygonal/pokemon.h"

Pokemon* newPokemon(char* name, int species, int level, int primarytype, int secondarytype){
	Pokemon* pkmn = (Pokemon*)malloc(sizeof(Pokemon));
	pkmn->name = name;
	pkmn->species = species;
	pkmn->level = level;
	pkmn->type[0] = primarytype;
	pkmn->type[1] = secondarytype;
	return pkmn;
}

void Pokemon_set_moves(Pokemon* poke, Move* m1, Move* m2, Move* m3, Move* m4){
	poke->moves[0] = m1;
	poke->moves[1] = m2;
	poke->moves[2] = m3;
	poke->moves[3] = m4;
}

void Pokemon_load_stats(Pokemon* poke, int hp, int atk, int def, int spa, int spd, int spe){
	poke->stats[0] = hp;
	poke->stats[1] = atk;
	poke->stats[2] = def;
	poke->stats[3] = spa;
	poke->stats[4] = spd;
	poke->stats[5] = spe;
}

void deletePokemon(Pokemon* p){
	free(p->name);
	free(p->nickname);
	int i;
	for(i = 0; i < 4; i++){
		deleteMove(p->moves[i]);
	}
	free(p);
	p = NULL;
}