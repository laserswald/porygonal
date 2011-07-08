/*
 * Move.h
 *
 *  Created on: Jul 5, 2011
 *      Author: ben
 */

#ifndef MOVE_H_
#define MOVE_H_

#include "Types.h"
#include <string>

using namespace std;

class Move {
	int baseDamage;
	Type::Type typing;
	string Name;
	string extraText;


public:
	Move();

	virtual void BeforeCalcDamage();
	virtual void OnSuccessfulHit();



	virtual ~Move();
    void setBaseDamage(int baseDamage)
    {
        this->baseDamage = baseDamage;
    }

    void setExtraText(string extraText)
    {
        this->extraText = extraText;
    }

    void setName(string Name)
    {
        this->Name = Name;
    }

    void setTyping(Type::Type typing)
    {
        this->typing = typing;
    }

    string getExtraText() const
    {
        return extraText;
    }

    int getBaseDamage() const
    {
        return baseDamage;
    }

    string getName() const
    {
        return Name;
    }

    Type::Type getTyping() const
    {
        return typing;
    }

};



#endif /* MOVE_H_ */
