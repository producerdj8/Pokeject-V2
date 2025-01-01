#include "Pokemon.h"

Pokemon::Pokemon(){}


Pokemon::~Pokemon(){}


void Pokemon::hpUpdateDMG(int amount,std::string type){
	hp -= amount;
}