/*
 * Battle.h
 *
 *  Created on: Jul 5, 2011
 *      Author: ben
 */

#ifndef BATTLE_H_
#define BATTLE_H_

#include "Trainer.h"
#include "Pokemon.h"


enum Weather{
	NoWeather = 0,
	Rain,
	Sun,
	Sandstorm,
	Hail
};

class Battle {
private:
	Trainer* trainer1;
	Trainer* trainer2;
	Pokemon* t1poke;
	Pokemon* t2poke;
	Move* currentMove;

	void executeTurn();

public:
	Battle(Trainer* player, Trainer* challenger);
	Battle(Trainer* challenger);
	virtual ~Battle();
	Weather currentWeather;
	int CalculateDamage(Move* move, Pokemon* target);
	void Begin();
	void Loop();

};

#endif /* BATTLE_H_ */
