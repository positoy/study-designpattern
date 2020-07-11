#pragma once

#include <vector>
#include "Subject.h"

class WeatherData : public Subject {
public:
    WeatherData();
    void setMeasurements(double _temperature, double _pressure, double _humidity);
    double getTemperature();
    double getPressure();
    double getHumidity();
    void changed();

private:
    double temperature, pressure, humidity;
    bool isChanged;
};