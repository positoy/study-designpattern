#pragma once
#include <string>
#include <iostream>
#include <vector>

#include "PizzaIngredientFactory.h"

class Pizza {
public:
    enum class Type {
        cheese = 0,
        potato,
        bbq,
        signature
    };
public:
    Pizza(PizzaIngredientFactory* _factory) : factory{_factory} {}
    
    void prepare() {
    }
    void bake() { std::cout << " > bake" << std::endl; }
    void cut() { std::cout << " > cut" << std::endl; }
    void box() { std::cout << " > box" << std::endl; }

    void print() {
        std::cout << std::endl
            << " # " + name + " Pizza " << std::endl
            << " dough : " + dough << std::endl
            << " toppings : " + topping << std::endl
            << " cost : " << cost << std::endl << std::endl << std::endl;
    }

protected:
    PizzaIngredientFactory* factory;

    std::string name;
    std::string dough;
    std::string topping;
    std::vector<std::string> availableToppings;
    double cost;
};