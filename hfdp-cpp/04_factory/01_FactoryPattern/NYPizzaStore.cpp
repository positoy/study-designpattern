#include "NYPizzaStore.h"
#include "CheesePizza.h"

NYPizzaStore::NYPizzaStore() {
    storename = "NY Pizza Store";
}

Pizza*
NYPizzaStore::createPizza(Pizza::Type type) {

    Pizza* ret = nullptr;

    if (type == Pizza::Type::cheese) {
        ret = new CheesePizza();
    } else if (type == Pizza::Type::signature) {
        ret = new SignaturePizza();
    }

    return ret;
}

NYPizzaStore::SignaturePizza::SignaturePizza() {
        name = "NY Signature";
        dough = "thick dough";
        topping = "moeny cheese";
        cost = 45;
}