#pragma once
#include "Player.hpp"
#include <iostream>

class Status {
public:
    Status(Player &p1, Player &p2) : player1{p1}, player2{p2} {};
    void display();
private:
    Player& player1;
    Player& player2;
};
