#pragma once

#include "Observer.hpp"
#include "IDisplay.hpp"

class StreetDisplay : public Observer, public IDisplay {
public:
    void display();
    void update(double temperature, double pressure, double humidity);
};