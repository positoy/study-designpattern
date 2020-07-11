#include <iostream>

#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"

int main(int argc, char const *argv[])
{
	MallardDuck mallard;
	mallard.swim();
	mallard.fly();
	mallard.quack();
	mallard.display();

	std::cout << std::endl;
	RedheadDuck redhead;
	redhead.swim();
	redhead.fly();
	redhead.display();
	redhead.quack();
	
	std::cout << std::endl;
	RubberDuck rubber;
	rubber.swim();
	rubber.fly();
	rubber.display();
	rubber.quack();
	



	
	return 0;
}