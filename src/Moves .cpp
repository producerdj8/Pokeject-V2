#include "Moves.h"

Moves::Moves(){}
Moves::~Moves(){}

void Moves::setMove1(std::string n,int d,std::string t){
	m1name = n;
	m1dmg = d;
	m1type = t;
}
void Moves::setMove2(std::string n,int d,std::string t){
	m2name = n;
	m2dmg = d;
	m2type = t;
}
void Moves::setMove3(std::string n,int d,std::string t){
	m3name = n;
	m3dmg = d;
	m3type = t;
}
void Moves::setMove4(std::string n,int d,std::string t){
	m4name = n;
	m4dmg = d;
	m4type = t;
}

int Moves::getDamage1(){return m1dmg;}
int Moves::getDamage2(){return m1dmg;}
int Moves::getDamage3(){return m3dmg;}
int Moves::getDamage4(){return m4dmg;}

std::string  Moves::getType1(){return m1type;}
std::string  Moves::getType2(){return m2type;}
std::string Moves::getType3(){return m3type;}
std::string Moves::getType4(){return m4type;}
