#include <iostream>
#include "Singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton() {

}

Singleton*
Singleton::getInstance() {

    if (nullptr == _instance) {
        _instance = new Singleton();
        _instance->initialize();
    }

    return _instance;
}

void
Singleton::initialize() {
   integernumber = 10; 
}

void
Singleton::print() {
    std::cout << integernumber << std::endl;
}