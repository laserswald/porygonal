/*
 * Battle.cpp
 *
 *  Created on: Jul 5, 2011
 *      Author: ben
 */

#include "Battle.h"

Battle::Battle(Trainer* player, Trainer* challenger, BattleOutput* bo)
{
	// TODO Auto-generated constructor stub
	trainer1 = player; trainer2 = challenger;
	Begin();
}


Battle::~Battle() {
	// TODO Auto-generated destructor stub
}
int Battle::CalculateDamage(Move* move, Pokemon* target){
	//checks the effectivity of the move.
	float effectiveMultiplier;
	if (move->getBaseDamage() > 0) //ie. not Splash
	{
		effectiveMultiplier = Type::match(move->getTyping(), target->getPrimaryType(), target->getSecondaryType());

		if (effectiveMultiplier > 1) {
			output->printBattleEvent("It's super effective!/n");
		}
		if (effectiveMultiplier == 0) {
			output->printBattleEvent("It had no effect./n");
		}
		if (effectiveMultiplier < 1) {
			output->printBattleEvent("It's not very effective.");
		}
	}else{
		//OH GOD IT'S SPLASH
		output->printBattleEvent("But nothing happened./n");
	}
	int damage = move->getBaseDamage() * effectiveMultiplier;
	return damage;
}
void Battle::executeTurn()
{
}

void Battle::Begin(){

	cout <<trainer2->getTrainerClassName()<<" "<< trainer2->getName()<<" "<<"would like to fight!";

	t1poke = trainer1->sendOut();
	t2poke = trainer2->sendOut();

	cout << trainer2->getName() << " sent out " << t2poke->getName() << "!" << endl;
	cout << "Go, "<<t1poke->getName() << "!" << endl;

	Loop();
}

void Battle::Loop()
{
	while (hasEnded != true){
		cout << "What will " << t1poke->getName() << " do?" << endl;
	}
}


