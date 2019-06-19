#include <vector>

#include "WeatherData.hpp"

WeatherData::WeatherData()
: temperature{0},
pressure{0},
humidity{0}
{}

void
WeatherData::setMeasurements(double _temperature, double _pressure, double _humidity) {
    temperature = _temperature;
    pressure = _pressure;
    humidity = _humidity;

    void *data = new std::vector<double>();
    std::vector<double>* v = static_cast<std::vector<double>*>(data);
    v->push_back(temperature);
    v->push_back(pressure);
    v->push_back(humidity);

    notifyAllObservers(data);
    delete v;
}