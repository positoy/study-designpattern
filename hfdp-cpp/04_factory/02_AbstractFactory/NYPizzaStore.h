#pragma once
#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"

class NYPizzaStore : public PizzaStore {
public:
    NYPizzaStore(PizzaIngredientFactory* _factory);
private:
    Pizza* createPizza(Pizza::Type type);
public:
    class SignaturePizza : public Pizza {
    public:
        SignaturePizza(PizzaIngredientFactory* _factory);
    };
};