/*
 * Pokemon.h
 *
 *  Created on: Jul 5, 2011
 *      Author: ben
 */

#ifndef POKEMON_H_
#define POKEMON_H_

#include "Move.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Stat{
	HP,
	Attack,
	Defense,
	SpecialAttack,
	SpecialDefense,
	Speed
};

class Pokemon {
	int species;
	int experience;
	int level;
	Move* moves[4];
	int stats[6];
	int effortVals[6];
	int effortValTotal;
	int indVals[6];
	Type::Type types[2];
	string Name;

public:
    Pokemon(int Species);
    Pokemon();
    virtual ~Pokemon();

    void gainExperience(Pokemon *defeated);

    void performAttack(int attackNum, Pokemon *target);

    int calculateStat(Stat theStat);

    int getLevel();

    void setLevel(int level);


    Move* getMove(int moveslot){
    	return moves[moveslot];
    }

    int getStat(Stat stat){
    	return stats[stat];
    }

    int* getEffortVals()
    {
        return effortVals;
    }

    int getExperience()
    {
        return experience;
    }

    const int* getIndividualValue(Stat stat) const
    {
        return indVals;
    }

    int getSpecies() const
    {
        return species;
    }

    const int* getStats() const
    {
        return stats;
    }

    Type::Type getPrimaryType() const
    {
        return types[0];
    }

    Type::Type getSecondaryType() const
    {
        return types[1];
    }

    void setTypes(Type::Type t1, Type::Type t2)
    {
    	types[0] = t1;
    	types[1] = t2;
    }

    void setEffortValues(int values[6])
    {
        for (int i = 0; i < 6; i++){
        	effortVals[i] = values[i];
        }
    }

    void setExperience(int exp)
    {
        experience = exp;
    }

    void setIndividualValue(int ivs[6])
    {
        for (int i = 0; i < 6; i++){
        	indVals[i] = ivs[i];
        }
    }

    void setMove(int moveslot, Move* moveref)
    {
        moves[moveslot] = moveref;
    }

    void setStats(Stat specified, int value)
    {
        stats[specified] = value;
    }

    string getName();

    void setNickname(string nick);

};

#endif /* POKEMON_H_ */
