#include  "Pokemon.h"

class FireMon:protected Pokemon{
protected:

void hpUpdateDMG(int amount,std::string type) override;
};
