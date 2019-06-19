#pragma once
#include <vector>

class Observer;
#include "Observer.h"

class Subject {
public:
    void registerObserver(Observer* observer);
    void deregisterObserver(Observer* observer);
    void notifyAllObservers(void* data);
protected:
    std::vector<Observer*> observers;
};