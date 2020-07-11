#pragma once
#include <string>
#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class PizzaStore {
public:
    PizzaStore(PizzaIngredientFactory* _factory) : factory{_factory} {};
    Pizza* orderPizza(Pizza::Type type) {

        Pizza* pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

protected:
    PizzaIngredientFactory* factory;
    virtual Pizza* createPizza(Pizza::Type type) = 0;
    std::string storename;
};