#include "Subject.hpp"

void
Subject::registerObserver(Observer* observer){
    deregisterObserver(observer);
    observers.push_back(observer);
}

void
Subject::deregisterObserver(Observer* observer){
    for (std::vector<Observer*>::iterator it=observers.begin(); it<observers.end(); it++) {
        if (*it == observer) {
            observers.erase(it);
        }
    }
}