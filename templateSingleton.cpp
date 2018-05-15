#include <iostream>

template <typename T>
class Singleton {
public:
    static T* getInstance() {
        if (!instance)
            instance = new T;
        return instance;
    }
    Singleton() {};
private:
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);

    static T* instance;
};

template <typename T>
T* Singleton<T>::instance = nullptr;

class DataManager : public Singleton<DataManager> {

};

class ConnectionManager {

};

Singleton<ConnectionManager> ConnectionManagerSingleton;

int main()
{
    std::cout << DataManager::getInstance() << '/' << DataManager::getInstance() << std::endl;
    std::cout << Singleton<ConnectionManager>::getInstance() << '/' << ConnectionManagerSingleton.getInstance() << std::endl;



}