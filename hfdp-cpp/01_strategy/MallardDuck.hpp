#pragma once

#include "Duck.hpp"

class MallardDuck : public Duck {
public:
	MallardDuck();
	~MallardDuck();

	void swim();
	void fly();
	void quack();
	void display();

private:
	SwimBehavior *swimBehavior;
	QuackBehavior *quackBehavior;
	FlyBehavior *flyBehavior;
};