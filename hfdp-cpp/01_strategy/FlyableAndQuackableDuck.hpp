#pragma once
#include "Duck.hpp"

class FlyableAndQuackableDuck : public Duck, public Flyable, public Quackable {
public:
    void fly();
    void quack();
};
