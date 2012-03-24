/// move.h -- An implementation of a Pokemon's move.

#ifndef MOVE_H
#define MOVE_H

typedef struct move Move;

#include "pokemon.h"
//typedef int (*accuracy_fn)(BattleState* state, Pokemon* user);

enum Category{
	Physical = 0,
	Special,
	Status
};

struct move{
	char* name;
	char* extraText;
	int category;
	int basePower;
	int type;
	int (*damage_fn)(Move*, Pokemon* user, Pokemon* target);
};

Move* newMove(char* name, int base, int type, int category, int (*damage_fn)(Move*, Pokemon*, Pokemon*));
void Move_apply(Move* mv, Pokemon* user, Pokemon* target);
void deleteMove(Move* mv);



#endif
