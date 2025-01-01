#include "PoisonMon.h"

void PoisonMon::hpUpdateDMG(int amount,std::string type){
	if(type == "Psychich"|| type =="Ground"){
		hp -= (2*amount);
	}
	else if (type =="Poison"||type =="Ghost"||type =="Bug"){
		hp-= (0.5*amount);
	}
	else{
		hp -= amount;
	}
}