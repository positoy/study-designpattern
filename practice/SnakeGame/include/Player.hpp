#pragma once
#include <string>

class Player {
    typedef enum {
        good = 0, soso, bad
    } RollResult;
public:
    Player() : name{""}, position{0}, wasGood{false} {};
    void askName();
    void playDice();
    std::string getName() { return name; }
    int getPosition() { return position; }
private:
    std::string name;
    bool wasGood;
    int position;
    Player::RollResult rollResult;
    void rollDice();
};
