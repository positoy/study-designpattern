#include <iostream>
#include "include/Player.hpp"
#include "include/SnakeGame.hpp"

SnakeGame *snakegame = nullptr;

int main()
{
    Player player1;
    Player player2;
    player1.askName();
    player2.askName();

    snakegame = new SnakeGame(player1, player2);
    snakegame->playGame();
}
