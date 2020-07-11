#pragma once

#include "Duck.hpp"
#include "SwimOverWater.hpp"
#include "FlyNoWay.hpp"
#include "Squack.hpp"

class RubberDuck : public Duck, public SwimOverWater, public FlyNoWay, public Squack {
public:
	void display();
}; 