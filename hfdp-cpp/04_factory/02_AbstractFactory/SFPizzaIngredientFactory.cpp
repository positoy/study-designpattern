#include "SFPizzaIngredientFactory.h"

std::string
SFPizzaIngredientFactory::createDough() {
    return "SFDough";
}

#include <iostream>

std::vector<std::string>
SFPizzaIngredientFactory::createToppings() {
    std::vector<std::string> toppings;

    toppings.push_back("SFFish");
    toppings.push_back("SFChip");
    toppings.push_back("SFCoke");

    return toppings;
}