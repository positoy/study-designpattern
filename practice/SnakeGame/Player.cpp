#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <string>
#include "include/Player.hpp"

void Player::askName()
{
    std::cout << "\n\n\nEnter Name of player :";
    std::cin >> name;
}

void Player::playDice()
{
    std::cout<<"\n\n--->" <<name<<" Now your Turn >> Press any key to play " << std::flush;
    getchar();

    rollDice(); // wasGood set true
    std::cout<<"Now you are at position "<<position;
    switch(position)
    {
        case 98 :position=28; rollResult = RollResult::bad; break;
        case 95 :position=24; rollResult = RollResult::bad; break;
        case 92 :position=51; rollResult = RollResult::bad; break;
        case 83 :position=19; rollResult = RollResult::bad; break;
        case 73 :position=1; rollResult = RollResult::bad; break;
        case 69 :position=33; rollResult = RollResult::bad; break;
        case 64 :position=36; rollResult = RollResult::bad; break;
        case 59 :position=17; rollResult = RollResult::bad; break;
        case 55 :position=7; rollResult = RollResult::bad; break;
        case 52 :position=11; rollResult = RollResult::bad; break;
        case 48 :position=9; rollResult = RollResult::bad; break;
        case 46 :position=5; rollResult = RollResult::bad; break;
        case 44 :position=22; rollResult = RollResult::bad; break;
        case 21 :position=82; rollResult = RollResult::bad; break;
        case 8 :position=26; rollResult = RollResult::good; break;
        case 43 :position=77; rollResult = RollResult::good; break;
        case 50 :position=91; rollResult = RollResult::good; break;
        case 54 :position=93; rollResult = RollResult::good; break;
        case 62 :position=96; rollResult = RollResult::good; break;
        case 66 :position=87; rollResult = RollResult::good; break;
        case 80 :position=100; rollResult = RollResult::good; break;
    }

    if (rollResult == RollResult::good)
        std::cout<<"\nGreat!! you got a ladder !! You are at position "<<name;
    else if (rollResult == RollResult::bad)
        std::cout<<"\n\aOops!! Snake found !! You are at postion "<<name<<"\n";
    // else
        //nothing
}

void Player::rollDice()
{
    int dice = rand()%6+1;
    std::cout<<"\nYou got "<<dice<<" Point !! ";
    position = position+dice;
    rollResult = RollResult::soso;
}
