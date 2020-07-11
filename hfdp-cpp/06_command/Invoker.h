#pragma once
#include <queue>
#include <deque>
#include <mutex>
#include "Command.h"

class Invoker {
public:
    Invoker();
    void setCommand(Command* c);
    void invoke();
    void undo();
    void stop();
    std::thread scheduleThread;
private:
    std::deque<Command*> todoList;
    std::deque<Command*> history;
    std::mutex dequeMutex;
    bool working;
};