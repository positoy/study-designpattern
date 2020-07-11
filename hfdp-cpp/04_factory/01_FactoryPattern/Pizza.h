#pragma once
#include <string>
#include <iostream>

class Pizza {
public:
    enum class Type {
        cheese = 0,
        potato,
        bbq,
        signature
    };
public:
    void prepare() { std::cout << " > prepare" << std::endl;  }
    void bake() { std::cout << " > bake" << std::endl; }
    void cut() { std::cout << " > cut" << std::endl; }
    void box() { std::cout << " > box" << std::endl; }

    void print() {
        std::cout << std::endl
            << " # " + name + " Pizza " << std::endl
            << " dough : " + dough << std::endl
            << " topping : " + topping << std::endl
            << " cost : " << cost << std::endl << std::endl << std::endl;
    }

protected:
    std::string name;
    std::string dough;
    std::string topping;
    double cost;
};