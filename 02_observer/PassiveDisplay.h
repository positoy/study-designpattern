#pragma once

#include "Subject.h"
#include "Observer.h"
#include "IDisplay.h"

class PassiveDisplay : public Observer, public IDisplay {
public:
    PassiveDisplay() = delete;
    PassiveDisplay(Subject* subject);

    void display();
    void update(void* data);
    
private:
    double temperature, pressure, humidity;
};