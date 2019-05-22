#pragma once

class Observer {
public:
    Observer() : temperature{0}, pressure{0}, humidity{0} {};
    virtual void update(double temperature, double pressure, double humidity) = 0;
protected:
    double temperature, pressure, humidity;
};