#include <iostream>

class CaffeineBeverage {
public:
    void prepareRecipe() {
        boilwater();
        brew();
        pourInCup();
        addCondiment();
    }
protected:
    void boilwater() {
        std::cout << "boil water" << std::endl;
    }
    virtual void brew() = 0;
    void pourInCup() {
        std::cout << "pour in cup" << std::endl;
    }
    virtual void addCondiment() = 0;
};

class Coffee : public CaffeineBeverage {
protected:
    void brew() {
        std::cout << "brew jameican coffee" << std::endl;
    }
    void addCondiment() {
        std::cout << "add milk" << std::endl;
    }
};


class GreenTea : public CaffeineBeverage {
protected:
    void brew() {
        std::cout << "add tea leaves" << std::endl;
    }
    void addCondiment() {
        std::cout << "add cinnamon" << std::endl;
    }
};

int main()
{
    CaffeineBeverage *b = new Coffee();
    b->prepareRecipe();
    
    b = new GreenTea();
    b->prepareRecipe();

}