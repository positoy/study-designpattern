/*
팩토리패턴
https://jusungpark.tistory.com/14

(1) 피자를 만들어주는 기능을 분리하자

PizzaStore() {
    orderPizza(type) {
        pizza = SimplePizzaFactory.createPizza(type);
        return pizza;
    }
}

문제.
NYPizzaStore(NYPizzaFactory)
SFPizzaStore(SFPizzaFactory)
만약 공정은 동일하게 두고, 지점마다 다른 스타일의 피자를 제공하려면 어떡하지?

(2) 그러면 변경점을 지점으로 가져와서 통일하자 (factory method pattern)

PizzaStore() {
    orderPizza(type) {
        pizza = this.createPizza();

        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.box();

        return pizza;
    }
}

문제.
NYPizzaStore.createPizza();
SFPizzaStore.createPizza();
공정은 유지하고 지점마다 메뉴를 다르게 만들었는데.. 체인점들이 더 저렴한 재료를 사용하면 어떡하지?

(3) 그러면 원재료 공장을 모듈화해보자 (abstract factory pattern)
PizzaStore(PizzaFactory) {
    orderPizza(type) {
        pizza = this.createPizza(type) {
            return new TypePizza(PizzaFactory);
        }

        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.box();

        return pizza;
    }
}

 */

#include "NYPizzaStore.h"
#include "SFPizzaStore.h"

int main()
{
    NYPizzaStore nystore;
    SFPizzaStore sfstore;

    nystore.orderPizza(Pizza::Type::signature)->print();
    nystore.orderPizza(Pizza::Type::cheese)->print();

    sfstore.orderPizza(Pizza::Type::signature)->print();
    sfstore.orderPizza(Pizza::Type::cheese)->print();


}