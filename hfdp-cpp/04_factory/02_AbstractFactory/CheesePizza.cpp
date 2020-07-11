#include "CheesePizza.h"

CheesePizza::CheesePizza(PizzaIngredientFactory* _factory) : Pizza{_factory} {
    name = "Cheese";
    dough = factory->createDough();
    availableToppings = factory->createToppings();
    topping = availableToppings[1];
    cost = 12;
}