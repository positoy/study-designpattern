#pragma once

#include <vector>
#include "Subject.hpp"

class WeatherData : public Subject {
public:
    WeatherData();
    void setMeasurements(double _temperature, double _pressure, double _humidity);

private:
    double temperature, pressure, humidity;
};