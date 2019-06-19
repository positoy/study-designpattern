#include <iostream>
#include <vector>

#include "MobileDisplay.hpp"

void
MobileDisplay::display() {
    std::cout << "# mobile display #" << std::endl
        << "[temperature] " << temperature << std::endl
        << "[pressure] " << pressure << std::endl
        << "[humidity] " << humidity << std::endl;
}

void
MobileDisplay::update(void* data) {
    std::vector<double>* v = static_cast<std::vector<double>*>(data);
    temperature = v->at(0);
    pressure = v->at(1);
    humidity = v->at(2);
    display();
}