#include "Espresso.h"

Espresso::Espresso()
: description{"espresso"},
cost{1500}
{}

std::string
Espresso::getDescription() {
    return description;
}

int
Espresso::getCost() {
    return cost;
}