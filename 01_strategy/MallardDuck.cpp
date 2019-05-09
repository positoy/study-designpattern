#include <iostream>

#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "SwimOverWater.hpp"
#include "Quack.hpp"

MallardDuck::MallardDuck() {
	std::cout << "Mallard constructor()" << std::endl;

	flyBehavior = new FlyingWithWings();
	swimBehavior = new SwimOverWater();
	quackBehavior = new Quack();
}

MallardDuck::~MallardDuck() {
	std::cout << "Mallard destructor()" << std::endl;

	delete flyBehavior;
	delete swimBehavior;
	delete quackBehavior;
}

void
MallardDuck::swim() {
	swimBehavior->swim();
}

void
MallardDuck::fly() {
	flyBehavior->fly();
}

void
MallardDuck::quack() {
	quackBehavior->quack();
}

void
MallardDuck::display() {
	std::cout << "looks like a mallard" << std::endl;
}