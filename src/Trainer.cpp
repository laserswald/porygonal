/*
 * Trainer.cpp
 *
 *  Created on: Jun 30, 2011
 *      Author: ben
 */

#include "Trainer.h"

Trainer::Trainer() {
	// TODO Auto-generated constructor stub

}

Trainer::Trainer(string TrainerClass, string name)
{
	className = TrainerClass;
	name = name;
}

Trainer::~Trainer() {
	// TODO Auto-generated destructor stub
}

void Trainer::addPokemon(Pokemon* poke){
	if (party.size() < 6){
		party.push_back(poke);
	}
}

Pokemon* Trainer::sendOut()
{
	return party[0];
}


