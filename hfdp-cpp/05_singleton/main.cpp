#include <iostream>
#include <chrono>
#include "LazySingleton.h"
#include "ThreadSafeLazySingleton.h"
#include "EarlySingleton.h"
#include "MeyerSingleton.h"

/*
    <<Sngleton>>
    장점1. 하나의 인스턴스만 사용하므로 메모리가 절약되고 두번째 호출이 빨라진다.
    장점2. 어디서나 호출할 수 있으므로 쉽다.
    
    단점1. 멀티스레드 환경에서 2개 이상의 인스턴스가 생성될 수 있다.
    단점2. 어디서나 호출할 수 있으므로 개방폐쇄 호출을 어기고, 거대해지기 쉽다.

    - lazy singleton
    - thread-safe lazy singleton
    - early singleton
    - meyor's singleton

    <<issues>>
    초콜릿을 만드는 보일러 팩토리
    boiler = new SingletonBoiler();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    2개 이상의 스레드로 동작할 때 2가지 문제점이 잠재돼있다.
    1) 싱글턴 인스턴스를 가져올 때 2개의 인스턴스가 생길 가능성
    2) 1번이 발생하지 않았더라도, fill boil drain 작업 순서가 보장되지 않을 가능성.

 */

class ClassA {
public:
    ClassA() {
        MeyerSingleton::getInstance()->print();
    }
};

class ClassB {
public:
    ClassB() {
        MeyerSingleton::getInstance()->print();
    }
};

int main()
{
    auto begin = std::chrono::system_clock::now();
    MeyerSingleton::getInstance()->print();
    auto end = std::chrono::system_clock::now();
    std::cout << std::chrono::duration<double>(end - begin).count() << std::endl;

    std::chrono::duration<double> timespent = std::chrono::duration<double>(0);
    for (int i=0; i<100; i++) {
        begin = end;
        ClassA A;
        end = std::chrono::system_clock::now();
        timespent += (end-begin);

        begin = end;
        ClassB B;
        end = std::chrono::system_clock::now();
        timespent += (end-begin);
    }

    std::cout << timespent.count() << std::endl;
}