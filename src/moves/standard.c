#include "porygonal/stat.h"
#include "porygonal/move.h"
#include "porygonal/pokemon.h"
#include "porygonal/moves/standard.h"
#include "porygonal/moves/calculations.h"

int standardDamage(Move* move, Pokemon* user, Pokemon* target){
	
	int attackStat, defenseStat;
	if (move->category == Physical){
		attackStat = user->stats[Stat_Attack];
		defenseStat = target->stats[Stat_Defense];
	} else if (move->category == Special){
		attackStat = user->stats[Stat_SpecialAttack];
		defenseStat = target->stats[Stat_SpecialDefense];
	}
	
	int stab = sameTypeAttackBonus(move->type, user->type[0], user->type[1]);
	
	int typeModifier = typeModification(move->type, target->type[0], target->type[1]);
	
	int rawDamage = calcDamage(user->level,
							   attackStat,
							   move->basePower,
							   defenseStat,
							   stab,
							   typeModifier);
	return rawDamage;
}