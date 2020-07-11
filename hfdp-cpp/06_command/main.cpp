#include <iostream>
#include "Command.h"
#include "Invoker.h"

class SmartBulbLibrary {
public:
    void lightOn() { std::cout << "actual light on" << std::endl; }
    void lightOff() { std::cout << "actual light off" << std::endl; }
};

class TurnOnLight : public Command {
public:
    TurnOnLight(SmartBulbLibrary* bulb) : bulb{bulb} {}
    void execute() {
        bulb->lightOn();
        std::cout << "turn on light" << std::endl;
    }
    void undo() {
        bulb->lightOff();
        std::cout << "turn off light" << std::endl;
    }
private:
    SmartBulbLibrary* bulb;
};

class TurnOffLight : public Command {
public:
    TurnOffLight(SmartBulbLibrary* bulb) : bulb{bulb} {}
    void execute() {
        bulb->lightOff();
        std::cout << "turn off light" << std::endl;
    }
    void undo() {
        bulb->lightOn();
        std::cout << "turn on light" << std::endl;
    }
private:
    SmartBulbLibrary* bulb;
};

int main()
{
    SmartBulbLibrary smartBulb;
    Invoker invoker;
    invoker.setCommand(new TurnOnLight(&smartBulb));
    invoker.setCommand(new TurnOnLight(&smartBulb));
    invoker.setCommand(new TurnOffLight(&smartBulb));
    invoker.setCommand(new TurnOffLight(&smartBulb));
    invoker.setCommand(new TurnOffLight(&smartBulb));
    invoker.setCommand(new TurnOnLight(&smartBulb));
    invoker.setCommand(new TurnOffLight(&smartBulb));
    invoker.setCommand(new TurnOnLight(&smartBulb));
    invoker.setCommand(new TurnOffLight(&smartBulb));
    invoker.setCommand(new TurnOnLight(&smartBulb));
    invoker.setCommand(new TurnOffLight(&smartBulb));
    invoker.scheduleThread.join();
    std::thread mainThread = std::thread([](){
        while(true) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "main thread" << std::endl;
        }

    });

    invoker.scheduleThread.join();
    mainThread.join();
}