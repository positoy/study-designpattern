#pragma once
#include "Duck.hpp"

class QuackNoSound : public QuackBehavior {
public:
    ~QuackNoSound();
    void quack();
};