
#include "seatest.h"
#include "species.h"
#include "type.h"
#include "stat.h"
#include "pokemon.h"
#include "moves/standard.h"

void test_damage_calc(){
	Pokemon* gyarados = newPokemon(Gyarados, 50, Water, Flying);
	Pokemon_load_stats(gyarados, 202, 194, 144, 123, 167, 146);
	Pokemon* venusaur = newPokemon(Venusaur, 50, Grass, Poison);
	Pokemon_load_stats(venusaur, 187, 147, 148, 167, 167, 145);
	
	Move* waterfall = newMove("Waterfall", 80, Water, &standardDamage);
	
	
}