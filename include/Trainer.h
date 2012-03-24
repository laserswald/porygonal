/*
 * Trainer.h
 *
 *  Created on: Jun 30, 2011
 *      Author: ben
 */

#ifndef TRAINER_H_
#define TRAINER_H_

#include "Team.h"

class Trainer {
	string className;
	string name;
	vector<Pokemon*> party;
public:
	Trainer();
	Trainer(string TrainerClass, string name);
	virtual ~Trainer();

	void addParty(Team team);
	void addPokemon(Pokemon* poke);
	Pokemon* sendOut();

	string getName()
	{
		return name;
	}

	string getTrainerClassName()
	{
		return className;
	}

	void setName(string repl)
	{
		name = repl;
	}

	void setTrainerClassName(string repl)
	{
		className = repl;
	}


};

#endif /* TRAINER_H_ */
