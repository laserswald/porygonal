/*
 * Team.cpp
 *
 *  Created on: Jul 8, 2011
 *      Author: ben
 */

#include "Team.h"

Team::Team() {
	// TODO Auto-generated constructor stub

}

Team::~Team() {
	// TODO Auto-generated destructor stub
}

void Team::addPokemon(Pokemon* poke){


void Team::getPokemon(int poke){
	if (poke < 6 && poke > 0 && poke <= (int) party.size()){
		return party[poke];
	}
	else{
		return false;
	}
}
