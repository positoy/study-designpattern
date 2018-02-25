#include <iostream>
#include <cstdio>
#include "include/Board.hpp"
#include "include/Util.hpp"

void Board::display()
{
    Util::clearScreen();
    std::cout<< std::endl << std::endl;
    Util::draw_line(50,'-');
    std::cout<< std::endl << "\t\tSNAKE AT POSITION" << std::endl;
    Util::draw_line(50,'-');
    std::cout<<"\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n" << std::flush;
    Util::draw_line(50,'-');
    std::cout<<"\n\t\t LADDER AT POSITION\n" << std::flush;
    Util::draw_line(50,'-');
    std::cout<<"\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n" << std::flush;
    Util::draw_line(50,'-');
}