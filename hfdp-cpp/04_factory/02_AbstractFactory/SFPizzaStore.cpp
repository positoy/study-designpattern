#include "SFPizzaStore.h"
#include "CheesePizza.h"

SFPizzaStore::SFPizzaStore(PizzaIngredientFactory* _factory)
: PizzaStore{_factory} {
    storename = "SF Pizza Store";
}

Pizza*
SFPizzaStore::createPizza(Pizza::Type type) {
    Pizza* ret = nullptr;

    if (type == Pizza::Type::cheese) {
        ret = new CheesePizza(factory);
    } else if (type == Pizza::Type::signature) {
        ret = new SignaturePizza(factory);
    }

    return ret;
}

SFPizzaStore::SignaturePizza::SignaturePizza(PizzaIngredientFactory* _factory)
: Pizza{_factory} {
        name = "SF Signature";
        dough = factory->createDough();
        availableToppings = factory->createToppings();
        topping = availableToppings[0];
        cost = 40;
}