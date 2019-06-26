#include <vector>

#include "WeatherData.h"

WeatherData::WeatherData()
: temperature{0},
pressure{0},
humidity{0},
isChanged{false}
{}

void
WeatherData::changed() {
    if (isChanged) {
        void *data = new std::vector<double>();

        std::vector<double>* v = static_cast<std::vector<double>*>(data);
        v->push_back(temperature);
        v->push_back(pressure);
        v->push_back(humidity);

        notifyAllObservers(data);
        delete v;
    }
    isChanged = false;
}

void
WeatherData::setMeasurements(double _temperature, double _pressure, double _humidity) {
    if ((_temperature - temperature > 1.0) ||
        (_pressure - pressure > 1.0) ||
        (_humidity - humidity > 1.0)) {
        isChanged = true;
    }

    temperature = _temperature;
    pressure = _pressure;
    humidity = _humidity;

    changed();
}

double
WeatherData::getTemperature() {
    return temperature;
}

double
WeatherData::getPressure() {
    return pressure;
}

double
WeatherData::getHumidity() {
    return humidity;
}
