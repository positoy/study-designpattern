#include "SFPizzaStore.h"
#include "CheesePizza.h"

SFPizzaStore::SFPizzaStore() {
    storename = "SF Pizza Store";
}

Pizza*
SFPizzaStore::createPizza(Pizza::Type type) {

    Pizza* ret = nullptr;

    if (type == Pizza::Type::cheese) {
        ret = new CheesePizza();
    } else if (type == Pizza::Type::signature) {
        ret = new SignaturePizza();
    }

    return ret;
}

SFPizzaStore::SignaturePizza::SignaturePizza() {
        name = "SF Signature";
        dough = "chip dough";
        topping = "fish with keyboard";
        cost = 40;
}