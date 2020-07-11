#include <iostream>
#include "QuackNoSound.hpp"

QuackNoSound::~QuackNoSound() {

}

void
QuackNoSound::quack() {
    std::cout << "..." << std::endl;
}