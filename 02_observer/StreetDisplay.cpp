#include <iostream>
#include "StreetDisplay.hpp"

void
StreetDisplay::display() {
    std::cout << "# mobile display #" << std::endl
        << "[temperature] " << temperature << std::endl
        << "[pressure] " << pressure << std::endl
        << "[humidity] " << humidity << std::endl;
}

void
StreetDisplay::update(double t, double p, double h) {
    temperature = t;
    pressure = p;
    humidity = h;
    display();
}