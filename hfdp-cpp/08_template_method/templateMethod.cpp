#include <iostream>
#include <cstdio>
class Base {
public:
    void templateMethod() {
        originalFeatureA();
        delegatedFeatureB();
        optionalFeatureC();
        if (somethingDecidedInRuntime())
            hook();
    }
    virtual void originalFeatureA() final { std::cout << "featureA" << std::endl; }
    virtual void delegatedFeatureB() = 0;
    virtual void optionalFeatureC() { std::cout << "featureC" << std::endl; }
    bool somethingDecidedInRuntime() {
        std::cout << "Need Something? (Y/N) : ";
        if (getchar() == 'Y')
            return true;
        else
            return false;
    }
    virtual void hook() {}
};

class Derived : public Base {
    virtual void delegatedFeatureB() { std::cout << "deleagted featureB" << std::endl; }
    // virtual void optionalFeatureC() { std::cout << "optional featureC" << std::endl; }
    virtual void hook() { std::cout << "hook" << std::endl; }
};

int main() {
    Base *b = new Derived();
    b->templateMethod();
}