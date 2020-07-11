#include <iostream>
#include <thread>
#include <chrono>
#include "Invoker.h"

Invoker::Invoker()
: working{true} {

    scheduleThread = std::thread([=](void){
        std::cout <<"thread" << std::endl;
        while (working) {
            std::cout <<"thread while" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            std::lock_guard<std::mutex> lock(dequeMutex);
            invoke();
        }
    });
}

void
Invoker::setCommand(Command* c) {
    std::cout <<"setcommand" << std::endl;
    std::lock_guard<std::mutex> lock(dequeMutex);
    todoList.push_back(c);
}

void
Invoker::invoke() {
    std::cout <<"invoke" << std::endl;
    if (!todoList.size()) {
        std::cout << "todolist is empty" << std::endl;
        return;
    }
    Command* c = todoList.front();
    c->execute();
    todoList.pop_front();
    history.push_back(c);
}

void
Invoker::undo() {
    std::cout <<"undo" << std::endl;
    std::lock_guard<std::mutex> lock(dequeMutex);
    if (!history.size()) {
        std::cout << "history is empty" << std::endl;
        return;
    }
    Command* c = history.back();
    c->undo();
    history.pop_back();
    todoList.push_front(c);
}

void
Invoker::stop() {
    std::cout <<"stop" << std::endl;
    working = false;
}