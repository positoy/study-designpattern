#pragma once

#include "Observer.hpp"
#include "IDisplay.hpp"

class MobileDisplay : public Observer, public IDisplay {
public:
    void display();
    void update(void* data);
private:
    double temperature, pressure, humidity;
};