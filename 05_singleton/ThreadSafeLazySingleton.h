#pragma once

#include <iostream>
#include <mutex>

class ThreadSafeLazySingleton {
public:
    static ThreadSafeLazySingleton* getInstance() {
        std::lock_guard<std::mutex> lock(m);
        if (!instance)
            instance = new ThreadSafeLazySingleton();
        return instance;
    }
    void print() {
        std::cout << "I'm Thread Safe Lazy Singleton instance." << std::endl;
    }

private:
    static ThreadSafeLazySingleton* instance;
    static std::mutex m;
    ThreadSafeLazySingleton() = default;
    ~ThreadSafeLazySingleton() = default;
    ThreadSafeLazySingleton(ThreadSafeLazySingleton& s) = delete;
    ThreadSafeLazySingleton& operator=(const ThreadSafeLazySingleton& s) = delete;
};