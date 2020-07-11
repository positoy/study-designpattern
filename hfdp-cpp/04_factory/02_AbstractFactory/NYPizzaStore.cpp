#include "NYPizzaStore.h"
#include "CheesePizza.h"
#include "NYPizzaIngredientFactory.h"

NYPizzaStore::NYPizzaStore(PizzaIngredientFactory* _factory)
: PizzaStore{_factory} {
    storename = "NY Pizza Store";
}

Pizza*
NYPizzaStore::createPizza(Pizza::Type type) {
    Pizza* ret = nullptr;

    if (type == Pizza::Type::cheese) {
        ret = new CheesePizza(factory);
    } else if (type == Pizza::Type::signature) {
        ret = new SignaturePizza(factory);
    }

    return ret;
}

NYPizzaStore::SignaturePizza::SignaturePizza(PizzaIngredientFactory* _factory)
: Pizza{_factory} {
        name = "NY Signature";
        dough = factory->createDough();
        availableToppings = factory->createToppings();
        topping = availableToppings[0];
        cost = 45;
}