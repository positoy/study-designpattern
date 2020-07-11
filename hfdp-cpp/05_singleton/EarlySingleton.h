#pragma once

#include <iostream>

class EarlySingleton {
public:
    static EarlySingleton* getInstance() {
        return instance;
    }
    void print() {
        std::cout << "I'm Early Singleton instance." << std::endl;
    }

private:
    static EarlySingleton* instance;
    EarlySingleton() = default;
    ~EarlySingleton() = default;
    EarlySingleton(EarlySingleton& s) = delete;
    EarlySingleton& operator=(const EarlySingleton& s) = delete;
};