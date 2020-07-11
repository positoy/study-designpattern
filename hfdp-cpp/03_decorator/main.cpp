#include <iostream>
#include "Espresso.h"
#include "Americano.h"
#include "CafeLatte.h"
#include "Cream.h"

int main()
{
    Espresso espresso;
    std::cout << espresso.getDescription() << " : " << espresso.getCost() << std::endl;

    Americano americano;
    std::cout << americano.getDescription() << " : " << americano.getCost() << std::endl;

    CafeLatte latte;
    std::cout << latte.getDescription() << " : " << latte.getCost() << std::endl;

    Cream americano_cream(&americano);
    std::cout << americano_cream.getDescription() << " : " << americano_cream.getCost() << std::endl;

    Cream latte_cream(&latte);
    std::cout << latte_cream.getDescription() << " : " << latte_cream.getCost() << std::endl;
}