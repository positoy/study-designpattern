#pragma once

#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "SwimOverWater.hpp"
#include "Quack.hpp"

class RedheadDuck : public Duck, public FlyingWithWings, public SwimOverWater, public Quack {
public:
	void display();
};