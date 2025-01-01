#include "FireMon.h"

void FireMon::hpUpdateDMG(int amount,std::string type){
	if(type == "Water"|| type =="Ground"||type =="Rock"){
		hp -= (2*amount);
	}
	else if (type =="Fire"||type =="Grass"||type =="Ice"||type =="Bug"){
		hp-= (0.5*amount);
	}
	else{
		hp -= amount;
	}
}