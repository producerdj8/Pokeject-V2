#pragma once
#include "Moves.h"

class Pokemon{
protected:
	std::string name, type;
	int hp;
	Moves moves;
public:
	Pokemon();
	~Pokemon();
	
	virtual void hpUpdateDMG(int amount,std::string type);
	//there will be hpUpdateHeal
};