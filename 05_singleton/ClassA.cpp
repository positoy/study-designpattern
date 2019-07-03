#include "ClassA.h"
#include "Singleton.h"

ClassA::ClassA() {
    Singleton::getInstance()->print();
}