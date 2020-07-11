#pragma once

#include "Subject.h"
#include "Observer.h"
#include "IDisplay.h"

class ActiveDisplay : public Observer, public IDisplay {
public:
    ActiveDisplay() = delete;
    ActiveDisplay(Subject* subject);

    void display();
    void update(void* data);

private:
    double temperature, pressure, humidity;
};