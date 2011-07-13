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
	vector<Pokemon> party[6];
public:
	//constructors and destructors
	Team();
	virtual ~Team();


};

#endif /* TEAM_H_ */
