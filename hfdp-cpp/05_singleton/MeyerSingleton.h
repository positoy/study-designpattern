#pragma once

#include <iostream>

class MeyerSingleton {
public:
    static MeyerSingleton* getInstance() {
        static MeyerSingleton instance;
        return &instance;
    }
    void print() {
        std::cout << "I'm Meyer's Singleton instance." << std::endl;
    }

private:
    MeyerSingleton() = default;
    ~MeyerSingleton() = default;
    MeyerSingleton(MeyerSingleton& s) = delete;
    MeyerSingleton& operator=(const MeyerSingleton& s) = delete;
};