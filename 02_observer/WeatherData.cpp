#include "WeatherData.hpp"

WeatherData::WeatherData() : temperature{0}, pressure{0}, humidity{0} {}

void WeatherData::setTemperature(double t) { temperature = t; }
void WeatherData::setPressure(double p) { pressure = p; }
void WeatherData::setHumidity(double h) { humidity = h; }

void
WeatherData::notifyAllObservers() {
    for (auto o : observers) {
        o->update(temperature, pressure, humidity);
    }
}

