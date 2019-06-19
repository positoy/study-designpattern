#pragma once

#include <vector>
#include "Observer.hpp"

class Subject {
public:
    void registerObserver(Observer* observer);
    void deregisterObserver(Observer* observer);
    void notifyAllObservers(void* data);
protected:
    std::vector<Observer*> observers;
};