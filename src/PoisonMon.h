#include "Pokemon.h"

class PoisonMon:public Pokemon{
protected:

void hpUpdateDMG(int amount, std::string type) override;
};