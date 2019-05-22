#pragma once

#include <vector>
#include "Observer.hpp"

class Subject {
public:
    void registerObserver(Observer* observer);
    void deregisterObserver(Observer* observer);
    virtual void notifyAllObservers() = 0;
protected:
    std::vector<Observer*> observers;
};