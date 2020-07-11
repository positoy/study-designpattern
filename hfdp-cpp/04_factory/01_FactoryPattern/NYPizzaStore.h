#pragma once
#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore {
public:
    NYPizzaStore();
private:
    Pizza* createPizza(Pizza::Type type);
public:
    class SignaturePizza : public Pizza {
    public:
        SignaturePizza();
    };
};