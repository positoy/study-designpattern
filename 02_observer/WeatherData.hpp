#pragma once

#include "Subject.hpp"

class WeatherData : public Subject {
public:
    WeatherData();
    void setTemperature(double temperature);
    void setPressure(double pressure);
    void setHumidity(double humidity);

public:
    void notifyAllObservers();

private:
    double temperature, pressure, humidity;
};