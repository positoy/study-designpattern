#pragma once
#include <string>
#include "Pizza.h"

class PizzaStore {
public:
    Pizza* orderPizza(Pizza::Type type) {

        Pizza* pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

protected:
    virtual Pizza* createPizza(Pizza::Type type) = 0;
    std::string storename;
};