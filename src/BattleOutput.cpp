/*
 * BattleOutput.cpp
 *
 *  Created on: Jul 13, 2011
 *      Author: ben
 */

#include "BattleOutput.h"

BattleOutput::BattleOutput(){
}

BattleOutput::~BattleOutput(){
}

void BattleOutput::printBattleEvent(char* event){
	std::cout << event << endl;
}

void BattleOutput::showPokeStatus(Pokemon* poke){
	std::cout << "Pokemon: " << poke->getName() << std::endl //HACK: Do getSpeciesName.
			<< "Nickname: " << poke->getName() << std::endl
			<< "HP: " << poke->getCurrentHP() << std::endl
			<< ": " << poke->getName() << std::endl
			<< "Pokemon: " << poke->getName() << std::endl;
}
