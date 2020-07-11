#pragma once
#include "Duck.hpp"

class Quack : public QuackBehavior {
public:
    ~Quack();
    void quack();
};