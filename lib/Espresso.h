#ifndef ESPRESSO_H
#define ESPRESSO_H

#include <string>
#include "Coffee.h"
#include "Drink.h"

class Espresso : public Coffee, public Drink
{       
    public:
        Espresso(int numEspressoShots);
        std::string getName();
    }
#endif