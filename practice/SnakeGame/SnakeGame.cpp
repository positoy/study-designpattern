#include <iostream>
#include <cstdio>
#include "include/SnakeGame.hpp"
#include "include/Util.hpp"

SnakeGame::SnakeGame(Player p1, Player p2) : status{nullptr}, player1{p1}, player2{p2}
{
    status = new Status(player1, player2);
}

void SnakeGame::playGame()
{
    while (player1.getPosition() <= 100 && player2.getPosition() <= 100)
    {
        board.display();
        status->display();
        player1.playDice();
        player2.playDice();
        Util::clearScreen();
    }

    std::cout<<"\n\n\n";
    Util::draw_line(50,'+');
    std::cout<<"\n\n\t\tRESULT\n\n";
    Util::draw_line(50,'+');
    std::cout<<std::endl;
    status->display();
    std::cout<<"\n\n\n";
    if (player1.getPosition() >= player2.getPosition())
        std::cout<<player1.getName()<<" !! You are the winner of the game\n\n";
    else
        std::cout<<player2.getName()<<" !! You are the winner of the game\n\n";
    Util::draw_line(50,'+');
    getchar();
}
