#pragma once

#include <iostream>

class LazySingleton {
public:
    static LazySingleton* getInstance() {
        if (!instance)
            instance = new LazySingleton();
        return instance;
    }
    void print() {
        std::cout << "I'm Lazy Singleton instance." << std::endl;
    }

private:
    static LazySingleton* instance;
    LazySingleton() = default;
    ~LazySingleton() = default;
    LazySingleton(LazySingleton& s) = delete;
    LazySingleton& operator=(const LazySingleton& s) = delete;
};