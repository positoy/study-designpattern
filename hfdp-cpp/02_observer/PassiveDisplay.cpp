#include <iostream>
#include <vector>

#include "PassiveDisplay.h"

PassiveDisplay::PassiveDisplay(Subject* _subject)
: Observer{_subject},
temperature{0},
pressure{0},
humidity{0} {}

void
PassiveDisplay::display() {
    std::cout << "# Passive display #" << std::endl
        << "[temperature] " << temperature << std::endl
        << "[pressure] " << pressure << std::endl
        << "[humidity] " << humidity << std::endl;
}

void
PassiveDisplay::update(void* data) {
    std::vector<double>* v = static_cast<std::vector<double>*>(data);
    temperature = v->at(0);
    pressure = v->at(1);
    humidity = v->at(2);
    display();
}