/*
 * Team.h
 *
 *  Created on: Jul 8, 2011
 *      Author: ben
 */

#ifndef TEAM_H_
#define TEAM_H_

#include <vector>
#include "Pokemon.h"

class Team {
	vector<Pokemon> party;
public:
	//constructors and destructors
	Team();
	virtual ~Team();

	void loadPartyfromString(char* string);
	char* exportToString();
	int getPartySize();
	void addPokemon(Pokemon* poke);
	Pokemon* getPokemon(int which);

};

#endif /* TEAM_H_ */
