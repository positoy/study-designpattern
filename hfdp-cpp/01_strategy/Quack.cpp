#include <iostream>
#include "Quack.hpp"

Quack::~Quack() {

}

void
Quack::quack() {
    std::cout << "quack!" << std::endl;
}
