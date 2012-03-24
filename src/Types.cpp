/*
 * Types.cpp
 *
 *  Created on: Jul 7, 2011
 *      Author: ben
 */

#include "Types.h"


float Type::match(Type attackType, Type defendingType1, Type defendingType2)
{
	float multiplier = multipliers[attackType][defendingType1]; //multiplier with first type

	if (defendingType2 != NoType){
		multiplier *= multipliers[attackType][defendingType2];
	}

	return multiplier;
}



