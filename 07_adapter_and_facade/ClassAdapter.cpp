#include <iostream>

// 조건) Client는 Target과 합의된 요청을 할 수 있다.
class Target {
public:
    virtual void request() {
        std::cout << "execute" << std::endl;
    }
};

// 문제) 동일한 요청 방법으로 Adaptee의 specificAction을 호출하고 싶다.
class Adaptee {
public:
    void specificAction() {
        std::cout << "specific action" << std::endl;
    }
};

// 클래스어댑터 : 둘 모두 상속해버리자
// 단점: 상속(Generalzation)을 활용하기때문에 유연하지 못하다.
// 장점: 어댑터(Adapter)를 전체를 다시 구현할 필요가 없다.(빠르다)
// class Adapter extends Adpatee implements Target
class Adapter : public Target, public Adaptee {
public:
    void request() {
        specificAction();
    }
};

int main()
{
    Target* target = new Adapter();
    target->request();
}
