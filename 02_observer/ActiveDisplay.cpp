#include <iostream>
#include <vector>

#include "WeatherData.h"
#include "ActiveDisplay.h"

ActiveDisplay::ActiveDisplay(Subject* _subject)
: Observer{_subject},
temperature{0},
pressure{0},
humidity{0} {
    subject->registerObserver(this);
}

void
ActiveDisplay::display() {
    std::cout << "# Active display #" << std::endl
        << "[temperature] " << temperature << std::endl
        << "[pressure] " << pressure << std::endl
        << "[humidity] " << humidity << std::endl;
}

void
ActiveDisplay::update(void* data) {
    WeatherData* wd= static_cast<WeatherData*>(subject);

    temperature = wd->getTemperature();
    pressure = wd->getPressure();
    humidity = wd->getHumidity();
    display();
}