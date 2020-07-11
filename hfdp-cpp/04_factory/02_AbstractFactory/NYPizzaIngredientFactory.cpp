#include "NYPizzaIngredientFactory.h"

std::string
NYPizzaIngredientFactory::createDough() {
    return "NYPizzaDough";
}

std::vector<std::string>
NYPizzaIngredientFactory::createToppings() {
    std::vector<std::string> toppings;

    toppings.push_back("NYBBQ");
    toppings.push_back("NYChicken");
    toppings.push_back("NYBacon");

    return toppings;
}