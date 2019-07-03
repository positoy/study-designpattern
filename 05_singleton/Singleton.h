#pragma once

class Singleton {
public:
    static Singleton* getInstance();
    void print();

private:
    Singleton();
    Singleton(Singleton& s) = delete;
    void initialize();
    static Singleton* _instance;

    int integernumber;
};