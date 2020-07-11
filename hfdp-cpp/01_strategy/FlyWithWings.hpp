#pragma once
#include "Duck.hpp"

class FlyingWithWings : public FlyBehavior {
public:
    ~FlyingWithWings();
    void fly();
};