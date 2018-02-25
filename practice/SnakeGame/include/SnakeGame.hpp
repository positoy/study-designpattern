#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Status.hpp"

class SnakeGame {
public:
    SnakeGame(Player p1, Player p2);
    void playGame();
private:
    Board board;
    Status* status;
    Player player1;
    Player player2;
};
