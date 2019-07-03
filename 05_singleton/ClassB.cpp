#include "ClassB.h"
#include "Singleton.h"

ClassB::ClassB() {
    Singleton::getInstance()->print();
}