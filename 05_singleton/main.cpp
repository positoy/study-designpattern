#include "Singleton.h"
#include "ClassA.h"
#include "ClassB.h"

int main()
{
    ClassA a;
    ClassB b;
    Singleton::getInstance()->print();
}