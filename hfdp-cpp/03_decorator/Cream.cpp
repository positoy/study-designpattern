#include "Cream.h"

Cream::Cream(Drink* _drink)
: drink{_drink},
description{" with cream"},
cost{500}
{}

std::string
Cream::getDescription() {
    return drink->getDescription() + description;
}

int
Cream::getCost() {
    return drink->getCost() + cost;
}