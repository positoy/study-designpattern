#include <iostream>

// 조건) Client는 Target과 합의된 요청을 할 수 있다.
class Target {
public:
    virtual void request() = 0;
};

// 문제) 동일한 요청 방법으로 Adaptee의 specificAction을 호출하고 싶다.
class Adaptee {
public:
    void specificAction() {
        std::cout << "specific action" << std::endl;
    }
};

// 오브젝트어댑터
// 단점: 어댑터(Adapter)클래스의 대부분의 코드를 구현해야하기때문에 효율적이지 못하다
// 장점: 구성(Composition)을 사용하기 때문에 더 뛰어나다.(유연하다)
// class Adapter extends Adpatee implements Target
class Adapter : public Target {
public:
    void request() {
        adaptee.specificAction();
    }
private:
    Adaptee adaptee;
};

int main()
{
    Target* target = new Adapter();
    target->request();
}
