#include "include/Status.hpp"
#include "include/Util.hpp"

void Status::display()
{
    std::cout<<std::endl;
    Util::draw_line(50,'~');
    std::cout<< std::endl << "\t\tGAME STATUS" << std::endl;
    Util::draw_line(50,'~');
    std::cout<< std::endl << "\t--->"<<player1.getName()<<" is at position "<<player1.getPosition()<<std::endl;
    std::cout<<"\t--->"<<player2.getName()<<" is at position "<<player2.getPosition()<<std::endl;
    Util::draw_line(50,'_');
    std::cout<<std::endl;
}
