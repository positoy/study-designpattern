#pragma once
#include "PizzaStore.h"

class SFPizzaStore : public PizzaStore {
public:
    SFPizzaStore();
private:
    Pizza* createPizza(Pizza::Type type);
public:
    class SignaturePizza : public Pizza {
    public:
        SignaturePizza();
    };
};