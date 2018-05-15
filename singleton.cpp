#include <iostream>

class Singleton {
public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }

private:
    Singleton() {};
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);

    static Singleton* instance;
};

Singleton* Singleton::instance = nullptr;

int main()
{
    std::cout << Singleton::getInstance() << '/' << Singleton::getInstance() << std::endl;


}