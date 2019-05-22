#include <iostream>
#include "MobileDisplay.hpp"

void
MobileDisplay::display() {
    std::cout << "# mobile display #" << std::endl
        << "[temperature] " << temperature << std::endl
        << "[pressure] " << pressure << std::endl
        << "[humidity] " << humidity << std::endl;
}

void
MobileDisplay::update(double t, double p, double h) {
    temperature = t;
    pressure = p;
    humidity = h;
    display();
}